/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   patient.h
 * Author: mraj
 *
 * Created on 16 May, 2018, 9:50 PM
 */

#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <climits>
#include "person.h"


class patient: public person {
public:
    patient(long int,std::string, int, int, int, int);
    patient(const patient& orig);
    
    virtual ~patient();
    
private:
    int patID;
    std::string permanentAddr;
    std::string residentAddr;
    

};

#endif /* PATIENT_H */

