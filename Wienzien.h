#ifndef WIENZIEN_H
#define WIENZIEN_H

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Wienzien:public Obywatel
{
public:
    Wienzien();
    string daj_glos();
    string jedz();
protected:

private:
    string nr_celi;
};

#endif