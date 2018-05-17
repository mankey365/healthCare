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

enum sex{MALE, FEMALE};

struct age{
    int years;
    int months;
    age(){
        years=INT_MIN;
        months=INT_MIN;
    }
    age(int _yr,int _mn){
        this->years=_yr;
        this->months=_mn;
    }
};



class patient {
public:
    patient();
    patient(std::string,int);
    patient(std::string,int,int,int,int);
    patient(const patient& orig);
    age getPatAge();
    void setPatAge();
    void displayPat();
    std::string getCity();
    void setCity(std::string);
    virtual ~patient();
    
private:
    std::string patName;
    int patID;
    int nationalID;
    std::string dob;
    int birthYear;
    int birthMonth;
    int birthDate;
    sex sexPresent;
    std::string cityBirth;
    std::string countryBirth;
    std::string nationality;
    std::string permanentAddr;
    std::string residentAddr;
    age patAge;

};

#endif /* PATIENT_H */

