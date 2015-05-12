#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main(int argc, char * argv[]){
	int begin,end;

	cin >> begin >> end;

	if(end <=  begin){
		end += 24;
	}	
	
	cout << "O JOGO DUROU "<< end - begin << " HORA(S)" << endl;	
}
