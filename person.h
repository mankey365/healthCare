/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   person.h
 * Author: mraj
 *
 * Created on 17 May, 2018, 5:49 PM
 */

#ifndef PERSON_H
#define PERSON_H

#include <climits>
#include <ctime>
#include <string>
#include <iostream>

enum sex{MALE, FEMALE};

enum nationality{INDIA,UK,USA,AUSTRALIA,GHANA,BRAZIL};

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

class person {
public:
    person();
    person(std::string,int,int,int,int);
    person(const person& orig);
    
    int getNatID();
    
    std::string getDOB();
    
    std::string getName();
    
    age getAge();
    void setAge();
    
    void setNationality(nationality);
    nationality getNationality();
    
    std::string getCity();
    void setCity(std::string);
    
    void displayPat();
    
    virtual ~person();
private:
    std::string name;
    int nationalID;
    
    std::string dob;
    int birthYear;
    int birthMonth;
    int birthDate;
    std::string cityBirth;
    std::string countryBirth;
    
    nationality curNat;
    age personAge;
    sex personSex;
};

#endif /* PERSON_H */

