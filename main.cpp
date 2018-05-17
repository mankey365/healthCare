/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mraj
 *
 * Created on 16 May, 2018, 9:44 PM
 */

#include <cstdlib>
#include <iostream>
#include "person.h"
#include "patient.h"
#include "provider.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    person p1("Leo",123445,28,7,1987);
    p1.setCity("Mexico City");
    age a=p1.getAge();
    std::cout<<a.years<<"\t"<<a.months<<"\n";
    
    patient pat1(38987,"Busquets",98768,26,8,1990);
    pat1.setCity("NYC");
    pat1.setNationality(INDIA);
    pat1.displayPat();
    
    provider pat2(10098,"Jordi Alba",1087,15,12,1986);
    pat2.setCity("Marseille");
    pat2.setNationality(UK);
    int x=9;
    
    return 0;
}

