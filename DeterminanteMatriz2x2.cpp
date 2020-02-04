#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    double a,b,c,d,total;
    cout<<"Ingrese los valores:"<<endl;
    cout<<"|a b|" <<endl;
    cout<<"|c d|" <<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"d: ";
    cin>>d;
    total=a*d-b*c;
    if(total!=0)
    {
        cout<<"Determinante: "<<total;
    }
    else{
        cout<<"Error el det. da 0";
    }
}
