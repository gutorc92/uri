#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

double read_n(){
    double n1;
    while(1){
        std::cin >> n1;
        if(n1 >= 0 && n1 <= 10) break;
        std::cout << "nota invalida" << std::endl; 
    }
    return n1;
}


int main(int argc, char * argv[]){
    int flag= 0;
    double total = 0;	
    while(1){
        total += read_n();
        flag++;   
        if(flag == 2){
            flag = 0;
            printf("media = %.2lf\n", total/2);
            total = 0;
            break;
        }
    }
            
}
