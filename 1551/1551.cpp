#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include <string.h>
using namespace std;

int ind(char c){
	if(c >= 65 && c <= 90){
		return c - 65;
	}
	if(c >= 97 && c <= 122){
		return c - 97;
	}
    return -1;
}



int main(int argc, char * argv[]){
    int n;
	int count[26];
	string linha;
	std::cin >> n;
	getline(cin, linha);
	for(int i = 0; i < n; i++){
		getline(cin, linha, '\n');
		//scanf("%[^\n]", linha);
		//std::cout << "Linha toda: " << linha << std::endl;
	    std::fill(count, count+26, 0);
		for(unsigned int j = 0; j < linha.size(); j++){
			//std::cout << "letra = " << linha[j] << std::endl;
			if((linha[j] >= 65 && linha[j] <= 90) || (linha[j] >= 97 && linha[j] <= 122)){
				//std::cout << "Indice: " <<  ind(linha[j]) << std::endl;
				count[ind(linha[j])]++;
			}
		}
        int frase = 0;
        for(int j = 0; j < 26; j++){
            if(count[j] > 0){
                frase++;
            }
        }
       
        if(frase == 26){
            std::cout << "frase completa" << std::endl;
        }else if(frase > 13){
            std::cout << "frase quase completa" << std::endl;
        }else{
            std::cout << "frase mal elaborada" << std::endl;
        } 
		
		
	}
  
}
