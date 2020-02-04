#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int p1 = 0, p2 = 0, q1 = 0, q2 = 0, n = 0, d = 0;
    float x = 0, y = 0, r = 0;
    cout << "Encontrar la coordenada que divide en segmento de linea\n\n" << endl;
    cout << "Ingrese valor del primer punto P(P1,P2): " << endl;
    cin >> p1;
    cout << "Ingrese valor del segundo punto P(P1,P2): " << endl;
    cin >> p2;
    cout << "Ingrese valor del primer punto Q(Q1,Q2): " << endl;
    cin >> q1;
    cout << "Ingrese valor del segundo punto Q(Q1,Q2): " << endl;
    cin >> q2;
    cout <<"Ingrese numerador de la razon: " << endl;
    cin >> n;
    cout <<"Ingrese denumerador de la razon: " << endl;
    cin >> d;
    r = (n+0.0)/d;
    x = (p1+(r*q1))/(1+r);
    y = (p2+(r*q2))/(1+r);
    cout << "La coordenada es: " << x <<", " << y << endl;
    return 0;
}
