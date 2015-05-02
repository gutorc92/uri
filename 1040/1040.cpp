#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
	float n1,n2,n3,n4, media, exame;

	cin >> n1 >> n2 >> n3 >> n4;

	media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

	
	printf("Media: %.1f\n",media);
	if(media >= 7){
		cout << "Aluno aprovado.\n";
	}else if( media < 5){
		cout << "Aluno reprovado.\n";
	}else if( media >= 5 && media < 7){
		cout << "Aluno em exame.\n";
		cin >> exame;
		printf("Nota do exame: %.1f\n",exame);
		media = (media + exame)/2;

		if(media >= 5){
			cout << "Aluno aprovado.\n";
		}else{
			cout << "Aluno reprovado.\n";
		}
		printf("Media final: %.1f\n",media);
	}	


}
