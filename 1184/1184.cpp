#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include <iomanip>
using namespace std;

int main(int argc, char * argv[]){
    char op;
    double val = 0, total = 0;
    std::cin >> op;
    int n = 12, qtde = 0;
    std::cout << std::fixed; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           std::cin >> val;
           if(j < i ){
               //std::cout << val << std::endl;
                total += val;
                qtde++;
            }  
        }
    }
    if(op == 'S'){
        std::cout << std::setprecision(1)  << total << std::endl;
    }else{
        std::cout << std::setprecision(1) <<  total / qtde << std::endl;
    }	
}
