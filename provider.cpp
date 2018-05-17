/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   provider.cpp
 * Author: mraj
 * 
 * Created on 17 May, 2018, 5:27 PM
 */

#include "provider.h"

provider::provider(long int _provID,std::string _name,int _natID, int _dob, int _mob, int _yob):
                person(_name,_natID,_dob, _mob, _yob){
    this->provID=_provID;
    std::cout<<"param 1 constructor\n";
}

provider::provider(const provider& orig) {
}

provider::~provider() {
}

