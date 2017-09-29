#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, n1, op, g =0, i = 0, em = 0, c = 0;
    while(1){
        std::cin >> n >> n1;
        std::cout << "Novo grenal (1-sim 2-nao)" << std::endl;
        std::cin >> op;
        if(n > n1){
            i++;
        }else if(n == n1){
            em++;
        }else{
            g++;
        }
        c++;
        if(op == 2) break;
    }	
    std::cout << c << " grenais" << std::endl; 
    std::cout << "Inter:" << i << std::endl; 
    std::cout << "Gremio:" << g << std::endl; 
    std::cout << "Empates:" << em << std::endl; 
    if(i == g){
        std::cout << "Nao houve vencedor" << std::endl;
    }else if(i > g){
        std::cout << "Inter venceu mais" << std::endl;
    }else{
        std::cout << "Gremio venceu mais" << std::endl;
    }


}
