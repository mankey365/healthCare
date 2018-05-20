/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   person.cpp
 * Author: mraj
 * 
 * Created on 17 May, 2018, 5:49 PM
 */

#include "person.h"

person::person() {
}

person::person(std::string _name,int _nationalID,int _dob,int _mob, int _yob) {
    name = _name;
    nationalID = _nationalID;
    birthDate = _dob;
    birthMonth = _mob;
    birthYear = _yob;
}

person::person(const person& orig) {
    //no duplicate person
}

person::~person() {
}

void person::setCity(std::string  _city){
    this->cityBirth = _city;
}

std::string person::getCity(){
    return this->cityBirth;
} 

age person::getAge(){
    if (this->personAge.months > 11 || this->personAge.months<0) this->setAge();
    return this->personAge;
}

void person::setAge(){
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    
    (this->personAge).years = now->tm_year + 1900 - this->birthYear;
    this->personAge.months= now->tm_mon - this->birthMonth;
    if (this->personAge.months<0){
        this->personAge.months+=12;
        this->personAge.years--;
    }
}

void person::setNationality(nationality _nat){
    this->curNat = _nat;
}

nationality person::getNationality(){
    return this->curNat;
}

int person::getNatID(){
    return this->nationalID;
}

std::string  person::getDOB(){
    return this->dob;
}

std::string  person::getName(){
    return this->name;
}

void person::displayPat(){
    
    std::cout<< this->name<<"\n";
    std::cout<< this->nationalID<<"\n";
    std::cout<< this->cityBirth<<"\n";
    std::cout<< this->countryBirth<<"\n";
    std::cout<< this->birthDate<<"\n";
    std::cout<< this->birthMonth<<"\n";
    std::cout<< this->birthYear<<"\n";
    age tmpA = this->getAge();
    std::cout<< tmpA.years<<" years "<<tmpA.months<<" months\n";
    std::cout<< "city = "<<this->getCity()<<"\n";
    std::cout<< "nationality = "<<this->getNationality()<<"\n";
}
