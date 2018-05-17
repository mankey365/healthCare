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
#include "patient.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    patient p1("Leo",123445,28,7,1987);
    p1.setCity("Mexico City");
    std::cout<<p1.getCity()<<"\n";
    age a=p1.getPatAge();
    std::cout<<a.years<<"\t"<<a.months<<"\n";
    return 0;
}

