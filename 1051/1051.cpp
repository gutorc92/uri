#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	double a, ip, base;
	cin >> a;
    base = a;
	cout.precision(2);
    if(a <= 2000.00){
        printf("Isento\n");
        return 1;
    }else{
        ip = 0;
        base -= 2000;
    }
    if(a > 2000 && a <= 3000){
        ip += 0.08 * base;
        base -= 1000;
    }else{
        ip += 1000 * 0.08;
        base -= 1000;
    }
    if(a > 3000 && a <= 4500){
        ip += 0.18 * base;
        base -= 1500;
    }else{
        if(base > 0) ip += 1500 * 0.18;
        base -= 1500;
    }
    if(a > 4500){
        ip += 0.28 * base;
    }
	printf("R$ %.2f\n",ip);

}
