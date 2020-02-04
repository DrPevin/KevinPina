#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int num, den;
    cout << "Ingrese Numerador: ";
    cin >> num;
    cout << "Ingrese Denumerador: ";
    cin >> den;
    cout << "El cociente de la division es: " << (num/den) << endl;
    cout << "El residuo de la division es: " << (num % den) << endl;
    return 0;
}