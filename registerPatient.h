/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   registerPatient.h
 * Author: mraj
 *
 * Created on 21 May, 2018, 2:02 AM
 */

#include <string>
#include "person.h"
#include "patient.h"

#ifndef REGISTERPATIENT_H
#define REGISTERPATIENT_H

class registerPatient {
public:
    registerPatient(patient& );
    registerPatient(const registerPatient& orig);
    
    virtual ~registerPatient();
private:

};

#endif /* REGISTERPATIENT_H */

