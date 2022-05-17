#include <iostream>
#include <string>

using namespace std;

class Zwierze
{
private:
    double waga;
protected:

public:
    auto to_string() -> string;
    // Zwierze():waga(0)
    // {
    //     cout << "Zwierze, konstruktor bezargumentowy" << endl;
    // }
    Zwierze(double awaga):waga(awaga)
    {
        cout << "Zwierze, roboczy konstruktor menytoryczny" << endl;
    }

    Zwierze(const Zwierze & org):waga(org.waga)
    {
        cout << "Zwierze, konstruktor kopiujacy" << endl;
    }

    Zwierze &operator=(const Zwierze &r)
    {
        if(this != &r)
        {
            waga = r.waga;
            cout << "Zwierze operator=" << endl;
        }
        return *this;
    }

    ~Zwierze()
    {
        cout << "Zwierze, destruktor" << endl;
    }
};

class Kot:public Zwierze
{
private:
    string imie;
    int ile_zyc;
protected:

public:
    Kot():Zwierze(0.0), imie("Nieznany"), ile_zyc(9)
    {
        cout << "Kot, konstruktor bezargumentowy" << endl;
    }

    Kot(const Kot &org):Zwierze(org), imie(org.imie), ile_zyc(org.ile_zyc)
    {
        cout << "Kot, konstruktor kopiujacy" << endl;
    }

    ~Kot()
    {
        cout << "Kot, destruktor" << endl;
    }
    
    Kot &operator=(const Kot &r)
    {
        if (this != &r)
        {
            imie = r.imie;
            ile_zyc = r.ile_zyc;
            Zwierze::operator=(r);
            cout << "Kot, operator przepisania" << endl;
        }
        return *this;
    }

    
};

auto Zwierze::to_string() -> string
{
    return "Zwierze";
}

int main()
{
    // Zwierze z;
    // cout << z.to_string() << endl;

    Kot k;
    cout << k.to_string() << endl;

    Kot kk(k);
    Kot x;
    x=kk;

    cout << x.to_string() << endl;
}