#include "Obywatel.h"

auto Obywatel::daj_glos() -> string
{
    return "nr dowodu: " + nr_dowodu;
}

Obywatel::Obywatel():nr_dowodu("brak")
{
    cout << "Obywatel, konstruktor domyslny" << endl;
}
