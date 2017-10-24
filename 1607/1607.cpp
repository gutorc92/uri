#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    std::string c1, c2;
    for(int i = 0; i < n; i++){
        std::cin >> c1 >> c2;
        int soma = 0;
        for(unsigned int j = 0; j < c1.size(); j++){
            soma += abs(c1[j] - c2[j]);
        }
        std::cout << soma << std::endl;
    }	
}
