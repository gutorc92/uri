#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int n;
    int b, c, soma = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> b >> c;
        if(b > c) std::swap(b, c);
        soma = 0;
        for(int j = b + 1; j < c; j++){
            if(j % 2 != 0) soma += j;
        }
        std::cout << soma << std::endl;

    }
}
