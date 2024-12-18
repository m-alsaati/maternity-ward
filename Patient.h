/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.h
 * Author: Molham Alsaati, 500967065
 *
 * Created on November 5, 2021, 12:30 PM
 */

#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
using namespace std;

class Patient{
private:
    string name;
    int num;    //health card number
    string condition; //condition can be UNKNOWN, LABOUR, OR ADMIT
public:
    int dilat;
    Patient(string, int, string, int);   ~Patient();
    const string& getName(); const int getNum(); const string& getCondition(); int getDilat();
};

#endif /* PATIENT_H */
