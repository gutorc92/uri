#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::cin >> n;
    std::string c, c1;
    for(int i = 0; i < n; i++){
        std::cin >> c >> c1;
        int f = c.size() - c1.size();
        int op = 1;
        if(c1.size() > c.size()){
             op = 0;
        }else{
            for(unsigned int j = 0; j < c1.size(); j++){
                if(c1[j] != c[f+j]){
                    op = 0;
                    break;
                }
            }
        }
        if(op == 1){
            std::cout << "encaixa" << std::endl;
        }else{
            std::cout << "nao encaixa" << std::endl;
        }
    }	
}
