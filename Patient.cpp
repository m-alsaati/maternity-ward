/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Patient.cpp
 * Author: Molham Alsaati, 500967065
 *
 *
 */

#include "Patient.h"

Patient::Patient(string name, int num, string condition, int dilat){
    
    this->name = name;
    this->num = num;
    this->condition = condition;
    this->dilat = dilat;
}

Patient::~Patient(){
    
}

const string& Patient::getName(){
    return name;
}

const int Patient::getNum(){
    return num;
}

const string& Patient::getCondition(){
    return condition;
}

int Patient::getDilat(){
    return dilat;
}
