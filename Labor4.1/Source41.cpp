// Source41.cpp
// < ќленюк ќлександр >
// Ћабораторна робота 4.1
// ÷икли.
// ¬ар≥ант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int K, N, i;
    double P;

    cout << "K = "; cin >> K;
    cout << "N = "; cin >> N;

    //  1) while(Е) { Е }
    P = 1;
    i = K;
    while (i <= N)
    {
        P *= 1. * K / i + 1. * i / N;
        i++;
    }
    cout << P << endl;

    //  2) do{ Е } while(Е);
    P = 1;
    i = K;
    do {
        P *= 1. * K / i + 1. * i / N;
        i++;
    } while (i <= N);
    cout << P << endl;

    //  3) for(Е; Е; n++) {Е }
    P = 1;
    for (i = K; i <= N; i++)
    {
        P *= 1. * K / i + 1. * i / N;
    }
    cout << P << endl;

    //  4) for(Е; Е; n--) {Е }
    P = 1;
    for (i = N; i >= K; i--)
    {
        P *= 1. * K / i + 1. * i / N;
    }
    cout << P << endl;

    return 0;
}