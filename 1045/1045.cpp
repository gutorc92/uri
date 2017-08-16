#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    double a,b,c;
	cin >> a >> b >> c;
	cout.precision(2);

    if(b > a){
        swap(a,b);
    }
    if(c > a){
        swap(c, a);
    }
    if(c > b){
        swap(b, c);
    }
//cout << a << b << c << endl;
    if (a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 1;
    }
    if(pow(a,2) == pow(b,2) + pow(c,2)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
	if(pow(a,2) > pow(b,2) + pow(c,2)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if(pow(a,2) < pow(b,2) + pow(c,2)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a == b && b == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if((a == b && b != c) || (b == c && b != a) || (a == c && b != a)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
	
}
