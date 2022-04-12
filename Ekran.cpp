#include "Ekran.h"

#include <iostream>
#include <string>

using namespace std;

auto Ekran::wypelnij(char c)->void{
    string linia(SZER, c);
    for(int i=0; i<WYS; i++){
        tab[i]=linia;
    }
}

auto Ekran::wyswietl()->void{
    for (int i=0; i<WYS; i++){
        cout<<tab[i]<<endl;
    }
}

auto Ekran::rysuj_text(int x, int y, string text)->void{
    if(y>WYS || x+text.size()>SZER){
        return;
    }
    for(int i=0; i<text.size(); i++){
        tab[y-1][x+i-1]=text[i];
    }
}
