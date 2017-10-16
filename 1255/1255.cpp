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
		return c - 90;
	}
}

int main(int argc, char * argv[]){
    int n,n1, mary = 0, john = 0;
	int count[26];
	string linha;
	std::cin >> n;
	std::cout << "N= " << n << std::endl;
	std::fill(count, count+26, 0);
	getline(cin, linha);
	for(int i = 0; i < n; i++){
		getline(cin, linha, '\n');
		//scanf("%[^\n]", linha);
		std::cout << "Linha toda: " << linha << std::endl;
		for(int j = 0; j < linha.size(); j++){
			std::cout << "letra = " << linha[j] << std::endl;
			if((linha[j] >= 65 && linha[j] <= 90) || (linha[j] >= 97 && linha[j] <= 122)){
				std::cout << "Indice: " <<  ind(linha[j]) << std::endl;
				count[ind(linha[j])]++;
			}
		}
		//cin.clear();
		
		
	}
  
}
