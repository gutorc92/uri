#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int a, b;
    while(1){
        std::cin >> a >> b;
        if(a == 0 || b == 0){
            break;
        }
        if(a > 0 && b > 0){
            std::cout << "primeiro" << std::endl;
        }
        if(a < 0 && b > 0){
            std::cout << "segundo" << std::endl;
        }
        if(a > 0 && b < 0){
            std::cout << "quarto" << std::endl;
        }
        if(a < 0 && b < 0){
            std::cout << "terceiro" << std::endl;
        }
    }	

}
