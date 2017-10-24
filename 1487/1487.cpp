#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
#include<string.h>

using namespace std;

#define MAX_W 100
#define MAX_V 600
#define MAX_ITENS 100

// pesos e valores
int W[MAX_ITENS];
int V[MAX_ITENS];

// matriz de memoiza��o
int memo[MAX_W][MAX_V];

int knapsack(int i, int w) {

    // Caso o item n�o exista ou n�o mais caiba na mochila
    // nenhum valor ser� agregado
    if (i < 0 || w <= 0) return 0;

    // Caso este estado j� tenha sido resolvido
    if (memo[i][w] != -1) return memo[i][w];

    // Caso o item estoure a capacidade da mochila
    // O item n�o ser� carregado
    if (W[i] > w) return memo[i][w] = knapsack(i - 1, w);

    // Caso contr�rio o valor �timo ser� o maior valor entre a decis�o
    // de n�o carregar o item e carregar o item
    int r  = max(knapsack(i - 1, w),
                            knapsack(i - 1, w - W[i]) + V[i]);
    return memo[i][w] = max(r, knapsack(i, w - W[i]) + V[i]); 
}

int main(int argc, char * argv[]){
    	
	int n, t, count = 1;
	while(1){
		std::cin >> n >> t;
		//std::cout << "n= " << n << "t= " << t << std::endl;
		if(n == 0 && t == 0) break;
		memset(memo, -1, sizeof memo);
		for(int i = 0; i < n; i++){
			std::cin >> W[i] >> V[i];
		}
		/*
		for(int i = 0; i < n; i++){
			std::cout << W[i] << "  ";
			std::cout << V[i] << std::endl;
		}
		*/
		int max = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= t; j++){
				int r = knapsack(i, j);
				//std::cout << "r: " << r << std::endl;
				if(r > max) max = r;
			}
		}
		/*
		for(int i = 0; i < n; i++){
			for(int j = 0; j <= t; j++){
				std::cout << memo[i][j] << " ";
			}
			std::cout << std::endl;
		}
		*/
		std::cout << "Instancia " << count << std::endl;
		std::cout << max << std::endl;
		count++;
		std::cout << std::endl;
	}
}
