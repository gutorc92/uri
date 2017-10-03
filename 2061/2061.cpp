#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int n, m;
    std::string acao;
    std::string fechou = "fechou", clicou = "clicou";
    std::cin >> n >> m;

    for(int i = 0; i < m; i++){
        std::cin >> acao;
        if(acao == fechou){
            n--;
            n += 2;
        }else if(acao == clicou){
            n--;
        }
       
    }
    std::cout << n << std::endl;
    
}
