/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OTPRegister.h
 * Author: Molham Alsaati, 500967065
 *
 *
 */

#ifndef OTPREGISTER_H
#define OTPREGISTER_H

#include <iostream>
#include <iomanip>
#include <deque>
#include "Patient.h"
using namespace std;

class OTPReg{
private:
    
public:
    deque <Patient * > q;
    OTPReg(); ~OTPReg();
    void enroll(string, int, string, int); void examine(); void display(); void menu();
};

#endif /* OTPREGISTER_H */
