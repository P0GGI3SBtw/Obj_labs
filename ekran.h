#include <string>

constexpr int Szer = 9;
constexpr int Wys = 21;


class Ekran
{
    private:
        std::string tablica[Wys];
    public:
        void wypelnij(char c);
        void wyswietl();
};
