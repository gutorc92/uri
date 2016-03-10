#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int hi,mi,hf,mf,hr,mr,r;
    cin >> hi >> mi >> hf >> mf;
//cout << hi << " " <<  mi << " " << hf  << " "  << mf << endl;
    r = (hf*60 + mf) - (hi * 60 + mi); 
	hr = r/60;
    mr = r % 60;
    if(hr == 0 && mr == 0){
        hr = 24;
    }
    cout << "O JOGO DUROU " << hr <<  " HORA(S) E " << mr << " MINUTO(S)" << endl;
}
