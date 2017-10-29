#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;


int check(int matrix[][9], int n, int n1){
    int line[10];
    int verdadeiro = 1;
    std::fill(line, line + 10, 0);
    for(int j = 0; j < 3; j++){
        for(int q = 0; q < 3; q++){
            //std::cout << "i= " <<  j + n << " j= " <<  q + n1 << std::endl;
            line[matrix[n+j][n1+q]] = 1;
            //std::cout << matrix[n+j][n1+q] << " ";
        }
    }
    //std::cout << std::endl;
    //for(int i = 1; i <10; i++) std::cout << line[i] << " ";
    //std::cout << std::endl;
    if(!std::all_of(line+1, line+10, [](int i){return i==1;})) verdadeiro = 0;

    //std::cout << "Verdadeiro: " <<  verdadeiro << std::endl;
    return verdadeiro;

}

int check_lines(int matrix[][9]){
    int line[10];
    int verdadeiro = 1;
    for(int j = 0; j < 9; j++){
        std::fill(line, line + 10, 0);
        for(int q = 0; q < 9; q++){
            line[matrix[j][q]] = 1;
        }
        if(!std::all_of(line+1, line+10, [](int i){return i==1;})) verdadeiro = 0;
    }
    return verdadeiro;
}
int check_columns(int matrix[][9]){
    int line[10];
    int verdadeiro = 1;
    for(int j = 0; j < 9; j++){
        std::fill(line, line + 10, 0);
        for(int q = 0; q < 9; q++){
            line[matrix[q][j]] = 1;
        }
        if(!std::all_of(line+1, line+10, [](int i){return i==1;})) verdadeiro = 0;
    }
    return verdadeiro;
}

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    int matrix[9][9];
    int verdadeiro = 1;
    for(int i = 0; i < n; i++){
        verdadeiro = 1;
        for(int j = 0; j < 9; j++){
            for(int q = 0; q < 9; q++){
                std::cin >> matrix[j][q];
            }
        }
        verdadeiro = check_lines(matrix);
        verdadeiro = verdadeiro == 0 ? verdadeiro : check_columns(matrix); 
        if(verdadeiro != 0){
            for(int j = 0; j < 9; j = j + 3){
                for(int q = 0; q < 9; q = q + 3){
                    verdadeiro = check(matrix, j, q);
                    if(verdadeiro == 0) break;
                }
            }
        }
        /*
        for(int j = 0; j < 9; j++){
            for(int q = 0; q < 9; q++){
                std::cout << matrix[j][q] << " ";
            }
            std::cout << std::endl;
        }
        */
        std::cout << "Instancia " << i + 1 <<  std::endl;
        verdadeiro == 1 ? std::cout << "SIM" : std::cout << "NAO";
        std::cout << std::endl;
        std::cout << std::endl;
    }	
}
