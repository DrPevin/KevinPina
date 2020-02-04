#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    double a = 7, b = 8, c = 42, d = -73.3,total;
    cout<<"La matriz dada en el libro es:"<<endl;
    cout<<"|7 8|" <<endl;
    cout<<"|42 -73.3|" <<endl;
    total=a*d-b*c;
    if(total!=0)
    {
        cout<<"Determinante: "<<total;
    }
    else{
        cout<<"Error el det. da 0";
    }
}
