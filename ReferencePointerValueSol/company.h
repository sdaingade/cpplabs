#ifndef COMPANY_H
#define COMPANY_H

/*
 * Copyright SciSpike
 *
 * This file contains the declaration of the Company class
 */


#include "id_vector.h"
#include "person.h"
#include <string>

class Company {
public:
   Company(std::string name);
   ~Company();
   void hire( Person* p );
   void print();

private:
   std::string companyName;
   IDVector<Person*> employees;
};

#endif
