#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int op;
    while(1){
        std::cin >> op;
        if(op == 2002){
            std::cout << "Acesso Permitido" << std::endl;
            break;
        }else{
            std::cout << "Senha Invalida" << std::endl;
        }
    }	
}
