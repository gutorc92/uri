#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n,t, pos = -1, min = -1;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> t;
        if(t < min){
            min = t;
            pos = i;
        }
    }
    std::cout << "Menor valor: " << min << std::endl;	
    std::cout << "Posicao: " << pos << std::endl;	
}
