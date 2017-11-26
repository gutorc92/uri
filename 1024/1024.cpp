#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    std::string linha;
    getline(std::cin, linha);
    for(int i = 0; i < n; i++){
        getline(std::cin, linha);
        std::transform(linha.begin(), linha.end(), linha.begin(), [](unsigned char c) -> unsigned char { if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){ return c + 3; }else{ return c; } });
        //std::cout << linha << std::endl;
        std::reverse(linha.begin(), linha.end());
        //std::cout << linha << std::endl;
        std::transform(linha.begin()+(linha.size()/2), linha.end(), linha.begin()+(linha.size()/2), [](unsigned char c) -> unsigned char { return c - 1;  });
        std::cout << linha << std::endl;
    }	
}
