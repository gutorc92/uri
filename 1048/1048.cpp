#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include <iomanip> 
using namespace std;

int main(int argc, char * argv[]){
    double n, r;
    std::cin >> n;
    if(n <= 400){
        r = 0.15;
    }else if(n <= 800){
        r = 0.12;
    }else if(n <= 1200){
        r = 0.10;
    }else if(n <= 2000){
        r = 0.07;
    }else{
        r = 0.04;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << "Novo salario: " << (n * r) + n << std::endl;
    std::cout << std::setprecision(2) << "Reajuste ganho: " << (n * r) << std::endl;
    std::cout << std::setprecision(0) << "Em percentual: " << (100 * r) << " %" << std::endl;
}
