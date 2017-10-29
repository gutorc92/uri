#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::map<int, char> letra = {{0,'O'}, {1,'N'},{2,'L'},{3,'S'}};
    while(1){
        std::cin >> n;
        if(n == 0) break;
        int norte = 1;
        char comando;
        for(int i = 0; i < n; i++){
            std::cin >> comando;
            if(comando == 'D'){
                norte++;
                norte = norte > 3 ? 0 : norte;
            }
            if(comando == 'E'){
                norte--;
                if(norte < 0) norte = 3; 
            }
        }
        std::cout << letra[norte] << std::endl;    
    }
}
