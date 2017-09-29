#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int gas = 0, alc = 0, die = 0, n;
    while(1){
        std::cin >> n;
        if(n == 4) break;
        if(n == 1) alc++;
        if(n == 2) gas++;
        if(n == 3) die++;
    }	
    std::cout << "MUITO OBRIGADO" << std::endl;
    std::cout << "Alcool: "   << alc  << std::endl;
    std::cout << "Gasolina: " << gas  << std::endl;
    std::cout << "Diesel: "   << die  << std::endl;
}
