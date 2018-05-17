/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   patient.cpp
 * Author: mraj
 * 
 * Created on 16 May, 2018, 9:50 PM
 */

#include "patient.h"
#include <iostream>
#include <ctime>

patient::patient(std::string _name,int _nationalID,int _dob,int _mob, int _yob) {
    patName = _name;
    nationalID = _nationalID;
    birthDate = _dob;
    birthMonth = _mob;
    birthYear = _yob;
}

patient::patient(std::string _name,int _nationalID){
    patName=_name;
    nationalID=_nationalID;
    std::cout<<"param 1 constructor\n";
}

patient::patient(const patient& orig) {
    //no patient should be duplicated
}

patient::~patient() {
}

void patient::setCity(std::string  _city){
    this->cityBirth = _city;
}

std::string patient::getCity(){
    return this->cityBirth;
}  

age patient::getPatAge(){
    if (this->patAge.months > 11 || this->patAge.months<0) this->setPatAge();
    return this->patAge;
}

void patient::setPatAge(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    
    (this->patAge).years = now->tm_year + 1900 - this->birthYear;
    this->patAge.months= now->tm_mon - this->birthMonth;
    if (this->patAge.months<0){
        this->patAge.months+=12;
        this->patAge.years--;
    }
}


void patient::displayPat(){
    
    std::cout<< this->patName;
    std::cout<< this->birthMonth;
}


