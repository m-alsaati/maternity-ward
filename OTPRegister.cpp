/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OTPRegister.cpp
 * Author: Molham Alsaati, 500967065
 *
 * Created on November 5, 2021, 12:30 PM
 */

#include "OTPRegister.h"

OTPReg::OTPReg(){
    
}

OTPReg::~OTPReg(){
    int qSize = q.size();
    for (int i = 0; i < qSize; i++){
        //call destructor of object of element i
        delete q[i];
        //set null pointer in element i
        q[i] = 0;
    }
}

void OTPReg::enroll(string name, int num, string condition, int dilat){
    cout << "...[Registering]\n\n" << endl;
    Patient * p = new Patient(name, num, condition, dilat);
    q.push_back(p);
}

void OTPReg::examine(){
    if (q.empty()){
        cout << "List is empty...\n\n" << endl;
        return;
    }
    
    int cervDilat;
    
    cout << "Name: " << q[0]->getName() << endl;
    cout << "Health Card Number: " << q[0]->getNum() << endl;
    cout << "Enter Cervix Dilation: ";
    cin >> cervDilat;
    
    string name = q[0]->getName(); string condition = "LABOUR";
    int num = q[0]->getNum();
    
    Patient * p = q[0]; //get patient from front element
    
    q.pop_front(); // remove front element, shrinking queue
    
    //if patient condition is labour
    //send patient to end of queue
    if (cervDilat < 4){
        cout << "...[Going back to queue]\n\n" << endl;
        delete p;
        p = 0;
        Patient * r = new Patient(name, num, condition, cervDilat);
        q.push_back(r);
    }
    //if patient condition is admit,remove patient
    else if (cervDilat >= 4){
        cout << "...[ADMITTING]" << endl;
        cout << p->getName() << " " << p->getNum();
        cout << " " << cervDilat << " " << "ADMIT";
        cout << "\n\n" << endl;
        delete p;
        p = 0;
    }
}

void OTPReg::display(){
    int qSize = q.size();
    for (int i = 0; i < qSize; i++){
        cout << q[i]->getName() << " " << q[i]->getNum() << " ";
        cout << q[i]->getDilat() << " " << q[i]->getCondition() << endl;
    }
    
    cout << "\n" << endl;
}

void OTPReg::menu(){
    int qSize = q.size();
    cout << "=======================" << endl;
    cout << "There are currently " << qSize << " patient(s) in the list\n" << endl;
    cout << "Please choose an option:\n1. Register Patient\n2. Examine Patient";
    cout << "\n3. Display Patients\n4. Quit\n>> ";
}
