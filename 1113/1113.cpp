#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int a, b;
    while(1){
        std::cin >> a >> b;
        if(a == b){
            break;
        }
        if(a > b){
            std::cout << "Decrescente" << std::endl;
        }else{
            std::cout << "Crescente" << std::endl;
        }
        
    }	

}
