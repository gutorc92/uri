#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;

int main(int argc, char * argv[]){
    std::string linha;
    char letra;
    while(1){
        std::getline (std::cin,linha);
        if(linha[0] == '*') break;
        std::transform(linha.begin(), linha.end(), linha.begin(), ::tolower);
        letra = linha[0];
        int t = 1;
        for(unsigned int i = 1; i < linha.size(); i++){
            if(linha[i-1] == ' '){
                if(linha[i] != letra){
                    //std::cout << "i - 1 = " << linha[i-1] << " i= " << linha[i] << " letra= " << letra << std::endl;
                    t = 0;
                }
            }
        }	
        t == 1 ? std::cout << "Y" : std::cout << "N";
        std::cout << std::endl;
    }
}
