#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int check_todos_os_problemas(int matrix[][100], int m, int n){
    int todos = 1;
    for(int i = 0; i < m; i++){
        int t = 1;
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0) t = 0;
        }
        if(t == 1) todos = 0;
    }
    return todos;
}

int check_todos_os_problemas_ao_menos_uma_pessoa(int matrix[][100], int m, int n){
    int todos = 1;
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < m; j++){
            if(matrix[j][i] == 1) t = 1;
        }
        if(t == 0) todos = 0 ;
    }
    return todos;
}
int check_resolvido_por_todos(int matrix[][100], int m, int n){
    for(int i = 0; i < m; i++){
        int t = 1;
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0) t = 0;
        }
        if(t == 1) return 0;
    }
    return 1;
}
int check_todos_resolveram_ao_menos_um_problema(int matrix[][100], int m, int n){
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < m; j++){
            if(matrix[j][i] == 1) t = 1;
        }
        if(t == 0) return 0;
    }
    return 1;
}
int main(int argc, char * argv[]){
    int n, m;
    int matrix[100][100];
    while(1){
        std::cin >> n >> m;
        if(m == 0 && n == 0) break;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                std::cin >> matrix[i][j];
          //      std::cout << matrix[i][j] << " ";
            }
            //std::cout << std::endl;
        }

        //std::cout << check_todos_os_problemas(matrix,  m,  n) << std::endl; 
        //std::cout << check_todos_os_problemas_ao_menos_uma_pessoa(matrix, m, n)<< std::endl;
        //std::cout <<check_resolvido_por_todos(matrix, m, n) << std::endl;
        //std::cout <<check_todos_resolveram_ao_menos_um_problema(matrix, m, n) <<std::endl;
        std::cout << check_todos_os_problemas(matrix,  m,  n) + check_todos_os_problemas_ao_menos_uma_pessoa(matrix, m, n) + check_resolvido_por_todos(matrix, m, n) + check_todos_resolveram_ao_menos_um_problema(matrix, m, n) <<std::endl;
        //std::cout << std::endl;

     }

}
