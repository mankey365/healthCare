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
#include <cstring>
#include <sstream>
#include <mysql/mysql.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
//    person p1("Leo",123445,28,7,1987);
//    p1.setCity("Mexico City");
//    age a=p1.getAge();
//    std::cout<<a.years<<"\t"<<a.months<<"\n";
//    
//    patient pat1(38987,"Busquets",98768,26,8,1990);
//    pat1.setCity("NYC");
//    pat1.setNationality(INDIA);
//    pat1.displayPat();
//    
//    provider pat2(10098,"Jordi Alba",1087,15,12,1986);
//    pat2.setCity("Marseille");
//    pat2.setNationality(UK);
    
    
    MYSQL* db_conn;
    db_conn=mysql_init(NULL);
    if(!db_conn) std::cout<<"MySQL initialization failed! \n";
    db_conn = mysql_real_connect(db_conn, "localhost",
              "root", "kanika", "pat", 0,NULL, 0);
    
    if(!db_conn) std::cout<<"Connection Error! \n";
    
    MYSQL_RES* rset;
    MYSQL_ROW row;
    std::stringstream sql;
    sql << "SELECT * FROM PATIENT;";
    
    if (!mysql_query(db_conn,sql.str().c_str())){
        rset = mysql_use_result(db_conn);
        row = mysql_fetch_row(rset);
        std::cout<<"patient name= "<<row[0]<<"\n";
        std::cout<<"patient ID= "<<row[1]<<"\n";
    }
    mysql_close(db_conn);
    int x=99;
    
    
    return 0;
}

