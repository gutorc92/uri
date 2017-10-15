#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    int t[1000001];
    int v[1000001];
    std::fill(v, v+100001, -1);
    for(int i = 0; i < n; i++){
        std::cin >> t[i];
    }
    /*
    for(int i = 0; i < n; i++){
        std::cout << t[i] << " ";
    }
    std::cout << std::endl;
    */
    int j = 0;
    while(1){
        v[j] = 1;
        //std::cout << "t[j]= " << t[j] <<  " t/2 = " << t[j] % 2 << std::endl;
        if(t[j] % 2 == 0){
            if(t[j] > 0) t[j]--;
            j--;
        }else{
            if(t[j] > 0) t[j]--;
            j++;
        }
        if(j < 0 || j >= n) break;
        //std::cout << "j= " <<  j << std::endl;
    }	
    int total = 0, qtde = 0;
    for(int i = 0; i < n; i++){
        //std::cout << t[i] << " ";
        total += t[i];
        if(v[i] == 1) qtde++;
    }
    std::cout << qtde << " " << total << std::endl;
}
