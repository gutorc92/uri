#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t;
    int qtde[] = {0, 0, 0, 0};
    int div[] = {2, 3, 4, 5};

    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> t;
        for(int j = 0; j < 4; j++){
            if(t % div[j] == 0) qtde[j]++;
        }
    }	
    for(int j = 0; j < 4; j++){
        printf("%d Multiplo(s) de %d\n", qtde[j], div[j]);
    }
}
