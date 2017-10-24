#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include <string.h>
#include<list>
#include <iomanip>
using namespace std;



int main(int argc, char * argv[]){
    int n;
    std::string linha;
    int first = 1;
    while(1){
        std::cin >> n;
        if(n == 0){
            break;
        }else{
            if(first == 0){
                std::cout << std::endl;
            }else{
                first = 0;
            }
        }
        getline(cin, linha);
        std::list<std::string> palavras;
        unsigned int max = 0;
        for(int i = 0; i < n; i++){
            getline(cin, linha, '\n');
            //std::cout << linha << std::endl;
            if(linha.size() > max) max = linha.size();
            palavras.push_back(linha);
        }
        //std::cout << "Max= " << max << std::endl;
        for(int i = 0 ; i < n ; i++){
            std::cout << std::setw(max) << std::right << palavras.front() << std::endl;
            palavras.pop_front();
        }
        
    }
  
}
