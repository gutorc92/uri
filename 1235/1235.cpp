#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    std::string frase;
    std::getline(std::cin, frase);
    for(int i = 0; i < n; i++){
        std::getline(std::cin, frase);
        if(frase.size() > 0){
            unsigned int metade = frase.size()/2; 
            //std::cout << "metade " << metade << std::endl;
            for(int j = metade - 1; j >= 0; j--){
                std::cout << frase[j];
            }
            for(unsigned int j = frase.size() - 1; j >= metade; j--){
                std::cout << frase[j];
            }
            std::cout << std::endl;
        }
    }	
}
