#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int a, b, c;
    std::cin >> a >> b >> c;
    a += (b + c);
    if(a == 24){
        a = 0;
    }else if(a > 24){
        a = a - 24;
    }else if(a < 0){
        a = 24 + a;
    }
    std::cout << a << std::endl;
    	
}
