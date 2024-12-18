/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lab5Main.cpp
 * Author: Molham Alsaati, 500967065
 *
 * Created on November 5, 2021, 12:30 PM
 */

#include "OTPRegister.h"
using namespace std;

int main(){
    OTPReg OTPEnrol;
    int choice;
    int healthCard;
    string patientName;
    
    while(1){
        OTPEnrol.menu();
        cin >> choice;
        
        if (choice == 1){
            cout << "=============" << endl;
            cout << "[Register Patient]" << endl;
            cout << "Enter Name: ";
            cin >> patientName;
            cout << "Enter Health Card Number: ";
            cin >> healthCard;
            OTPEnrol.enroll(patientName, healthCard, "UNKNOWN", 0);
        }
        else if (choice == 2){
            cout << "=============" << endl;
            cout << "[Examine Patient]" << endl;
            OTPEnrol.examine();
        }
        else if (choice == 3){
            cout << "=============" << endl;
            cout << "[Display Patients]" << endl;
            OTPEnrol.display();
        }
        else if (choice == 4){
            cout << "...[Quitting]" << endl;
            break;
        }
        else{
            cout << "Invalid Input. Try Again\n\n" << endl;
        }
    }
}