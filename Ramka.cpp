#include "Ramka.h"
#include <iostream>
#include <string>
#include "Ekran.h"

using namespace std;

Ramka::Ramka(int ax0, int ay0, int aszer, int awys, string atxt): x0(ax0), y0(ay0), szer(aszer), wys(awys), txt(atxt){
}

void Ramka::rysuj(Ekran &e){
    /*
    string tekstp(szer-txt.size()-2,'-');
    string tekst;
    tekst="|"+txt+tekstp+"|";
    */
    e.rysuj_text(x0, y0, string('|'+txt+string(szer-txt.size()-2,'-')+'|'));
    for(int i=1; i<wys-1; i++){
        //string tekstp(szer-2,' ');
        //tekst='|'+tekstp+'|';
        e.rysuj_text(x0,y0+i,string('|'+string(szer-2,' ')+'|'));
    }
    //string tekst2(szer-2,'-');
    //tekst2='|'+tekst2+'|';
    e.rysuj_text(x0, y0+wys-1, string('|'+string(szer-2,'-')+'|'));
}
