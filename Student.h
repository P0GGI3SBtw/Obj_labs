#ifndef STUDENT_H
#define STUDENT_H

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student:public Obywatel
{
public:
    Student();
    string daj_glos();
    string jedz();
protected:

private:
    string nr_indeksu;
};

#endif