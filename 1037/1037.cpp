#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
	double a;
	cin >> a;

	if(a >= 0 && a <= 25){
		cout << "Intervalo [0,25]";
	}else if(a > 25 && a <= 50){
		cout << "Intervalo (25,50]";
	}else if(a > 50 && a <= 75){
		cout << "Intervalo (50,75]";
	}else if(a > 75 && a <= 100){
		cout << "Intervalo (75,100]";
	}else{
		cout << "Fora de intervalo";
	}	
	cout << endl;



}
