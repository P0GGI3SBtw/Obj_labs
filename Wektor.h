#pragma once

#ifndef WEKTOR_H
#define WEKTOR_H

using namespace std;

class Wektor
{
    friend Wektor operator+(Wektor w1, Wektor w2);
    friend Wektor operator-(Wektor w1, Wektor w2);
    friend Wektor operator*(Wektor w1, Wektor w2);

public:
    Wektor();
    Wektor(double ax, double ay);
    auto pokaz() -> void;

private:
    double x, y;
};

#endif