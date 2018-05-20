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


patient::patient(long int _patID,std::string _name,int _natID, int _dob, int _mob, int _yob):
                person(_name,_natID,_dob, _mob, _yob){
    this->patID=_patID;
    std::cout<<"param 1 constructor\n";
}

patient::patient(const patient& orig) {
    //no patient should be duplicated
}

patient::~patient() {
}





