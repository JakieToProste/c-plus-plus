#include <iostream>
using namespace std;

int main()
{
    //deklarowanie zmiennych
    int liczba_calkowita;       //definicja zmiennej
    liczba_calkowita = 10;      //nadanie jej warto�ci

    long double LiczbaRzeczywista = 6.2415; //definicja zmiennej po��czona z inicjalizacj�

    const char znak = 'w';  //inicjalizacja sta�ej. Jedyna szansa by jej nada� warto��.

    //wypiwywanie warto�ci
    cout<<"za pierwszym razem zmienne maja wartosc: \n";
    cout<<liczba_calkowita<<endl;
    cout<<LiczbaRzeczywista<<endl;
    cout<<znak<<endl;


    //modyfikowanie zawartosci
    liczba_calkowita = 5.5;
    LiczbaRzeczywista = 17;
    //znak = 'b'; // tak nie mozna, poniewaz znak jest sta��, kt�rej nie przecie� mo�na modyfikowa�!


    //drugie wypiwywanie warto�ci
    cout<<"a za drugim razem: \n";
    cout<<liczba_calkowita<<endl;
    cout<<LiczbaRzeczywista<<endl;
    cout<<znak<<endl;





	return 0;
}

