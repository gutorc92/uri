#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    std::map<int, char> letra = {{0,'A'}, {1,'B'},{2,'C'},{3,'D'},{4,'E'}};
    while(1){
        std::cin >> n;
        if(n == 0) break;
        for(int j = 0; j < n; j++){
            int t, pos = - 1, count = 0; 
            for(int i = 0; i < 5; i++){
                std::cin >> t;
                if(t <= 127){ 
                    pos = i;
                    count++;
                }
            }
            //std::cout << count << " " << pos << std::endl
            if(count == 1){
                std::cout << letra[pos] << std::endl;
            }else{
                std::cout << "*" << std::endl;
            }
        }    
     }
}
