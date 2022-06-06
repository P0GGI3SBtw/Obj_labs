#ifndef OBYWATEL_H
#define OBYWATEL_H

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Obywatel
{
public:
    Obywatel();
    virtual auto daj_glos() -> string; // Podmiana gleboka metody "virual"
    virtual string jedz() = 0;

protected:
    string nr_dowodu;

private:

};

#endif