/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   registerPatient.cpp
 * Author: mraj
 * 
 * Created on 21 May, 2018, 2:02 AM
 */

#include <cstring>
#include <string>
#include <sstream>
#include <mysql/mysql.h>
#include "registerPatient.h"

registerPatient::registerPatient(patient &pat) {
    
    MYSQL* db_conn;
    db_conn=mysql_init(NULL);
    
    if(!db_conn) std::cout<<"MySQL initialization failed! \n";
    db_conn = mysql_real_connect(db_conn, "localhost",
              "root", "kanika", "pat", 0,NULL, 0);
    
    if(!db_conn) std::cout<<"Connection Error! \n";
    
    std::stringstream sql;
    std::string strTmp("INSERT INTO PATIENT (NATID,NAME,DOB,MONB,YOB) VALUES");
    //strTmp = strTmp + ""pat.getNatID()"" + pat.getName()""+ ""pat.getDOB()""; //parse birth params
    sql << strTmp;
    
    if (!mysql_query(db_conn,sql.str().c_str())){
        std::cout << "Patient Entry Updated\n";
    }
    else std::cout << "Patient Entry failed to update\n";
    
    mysql_close(db_conn);
}

registerPatient::registerPatient(const registerPatient& orig) {
}

registerPatient::~registerPatient() {
}

