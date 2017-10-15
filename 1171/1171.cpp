#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t;
    std::cin >> n;
    int qtde[2001];
    std::fill(qtde, qtde+2001, 0);
    for(int i = 0; i < n; i++){
        std::cin >> t;
        qtde[t]++;
    }
    for(int i = 0; i < 2000; i++){
        if(qtde[i] > 0){
            std::cout << i << " aparece " << qtde[i] << " vez(es)" << std::endl;
        }
    }	
}
