/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   provider.h
 * Author: mraj
 *
 * Created on 17 May, 2018, 5:27 PM
 */

#ifndef PROVIDER_H
#define PROVIDER_H

#include <string>
#include <vector>
#include "person.h"


enum providerSpec {PHYSICIAN,CARDIOLOGY,DENTIST,ENT,DERMATOLOGIST,MULTIPLE,OTHER};

struct address{
    std::string city();
    int zip;
    std::string mailAddress;
    long int officePh; 
};

class provider:public person {
public:
    provider(long int,std::string,int, int, int, int);
    provider(const provider& orig);
    virtual ~provider();
private:
    long int provID;
    std::vector<address> practiceAddr;
    int providerID;
    providerSpec spec;
    
};

#endif /* PROVIDER_H */

