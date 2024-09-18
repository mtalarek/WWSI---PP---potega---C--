#include <iostream>
#include <iomanip>
using namespace std;

long double potega(long double x, int p) {
    long double wynik = x;
    if (p > 0) {
        for (int i = 1; i < abs(p); i++) {
            wynik = wynik * x;
            }
        return wynik;
    }
    else if (p < 0) {
        for (int i = 1; i < abs(p); i++) {
            wynik = wynik * x;
        }
        return (1/wynik);
    }
    else {wynik = 1;}
    return wynik;
}  

int main()
{
    long double x, wynik;
    int p;
    cout << "podaj liczbe oraz wartosc potegi: ";
    cin >> x >> p;
    cout << x << " do potegi " << p << " wynosi: " << fixed << setprecision(3) << (wynik = potega(x, p));
}
