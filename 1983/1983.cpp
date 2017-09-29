#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

int main(int argc, char * argv[]){
    int n, mat, max_mat = 0; 
    double nota, max_nota = 0;	
    std::cin >> n;
    for(int i = 0; i < n; i++){
       std::cin >> mat >> nota;
       if(nota > max_nota){
            max_nota = nota;
            max_mat = mat;
       } 
    }
    if(max_nota < 8){
        std::cout << "Minimum note not reached" << std::endl;
    }else{
        std::cout << max_mat << std::endl;
    }
}
