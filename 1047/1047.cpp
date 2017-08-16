#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int hi,mi,hf,mf,hr,mr,r, tf, ti;
    cin >> hi >> mi >> hf >> mf;
//cout << hi << " " <<  mi << " " << hf  << " "  << mf << endl;
    tf =  (hf*60 + mf); 
    ti =  (hi * 60 + mi); 
    if(tf < ti) tf += 1440;
    r = tf - ti;
	hr = r/60;
    mr = r % 60;
    if(hr == 0 && mr == 0){
        hr = 24;
    }
    cout << "O JOGO DUROU " << hr <<  " HORA(S) E " << mr << " MINUTO(S)" << endl;
}
