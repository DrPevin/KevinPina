//
// Created by kevin on 03/02/2020.
//
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 1, b = 2, c = 3, x = 4, y = 5;
    float res = 0;
    cout << "Programa que determina la distacia entre una linea y un punto" << endl;
    cout << "La ecuacion de la linea es: X + 2Y + 3 = 0" << endl;
    cout << "El punto es: (4, 5)" << endl;
    res = abs((a*x)+(b*y)+(c))/(sqrt(pow(1,2)+pow(2,2)));
    cout <<"La distacia es:" << endl;
    cout << res;

    return 0;
}
