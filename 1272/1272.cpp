#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include <string.h>
using namespace std;



int main(int argc, char * argv[]){
    int n;
	string linha;
	std::cin >> n;
	getline(cin, linha);
	for(int i = 0; i < n; i++){
		getline(cin, linha, '\n');
		
        int space = 1;
		for(unsigned int j = 0; j < linha.size(); j++){
			if((linha[j] >= 65 && linha[j] <= 90) || (linha[j] >= 97 && linha[j] <= 122)){
                if(space == 1){
                    std::cout << linha[j];
                    space = 0;
                }
			}
            if(linha[j] == 32) space = 1;
		}
        std::cout << std::endl;
		
		
	}
  
}
