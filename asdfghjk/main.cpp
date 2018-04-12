#include <iostream>
#include "funkcje.h"
using namespace std;

int main()
{
    double m;
    double w;

    cout << "Program do obliczania prawidlowej masy ciala" << endl;
    cout << "Podaj swoja mase (kg) i wzrost (m)";
    cin >> m >> w;

    double wsp;
    wsp = bmi(m, w);
    cout << "Twoje BMI to:" << endl << wsp << endl;

    cout << "Twoje BMI wskazuje na:" << endl;
    cout << check(wsp) << endl;

    cout << "Czas na porade :D" << endl;
    cout << advice(wsp) << endl;

    cout << "A teraz powiemy Ci ile wiewiorek sie w Tobie zmiesci:" << endl;
    cout << squirral(m) << endl;

    cout << "Oraz powiemy Ci ile litrow wody jest w Twoim ciele:" << endl;
    cout << water(m) << endl;

    cout << "Dziekujemy za zaufanie naszemu niecertyfikowanemu serwisowi, jednakze przed zastosowaniem prosimy o konsultacje z lekarzem lub farmaceuta :)" << endl;
    return 0;
}
