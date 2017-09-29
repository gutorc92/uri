#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int n, m, troco, qtde = 0;
	while(1){
		std::cin >> n >> m;
		if(n == 0 && m == 0) break;
		troco = m - n;
		qtde = 0;
		while(troco > 1){
		   if(troco >= 100){
			troco -= 100;
			qtde++;
		   }
		   if(troco >= 50){
			troco -= 50;
			qtde++;
		   }
		   if(troco >= 20){
			troco -= 20;
			qtde++;
		   }
		   if(troco >= 10){
			troco -= 10;
			qtde++;
		   }
		   if(troco >= 5){
			troco -= 5;
			qtde++;
		   }
		   if(troco >= 2){
			troco -= 2;
			qtde++;
		   }
		   if(qtde > 2) break;
		   //std::cout << "troco " << troco << std::endl;
		}
		if(qtde == 2){
			std::cout << "possible" << std::endl;
		}else{
			std::cout << "impossible" << std::endl;
		}

	}
	
}
