#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int q;
    while(1){
        std::cin >> q;
        if(q == 0) break;
        int n, m, x, y;
        std::cin >> n >> m;
        for(int i = 0; i < q; i++){
            std::cin >> x >> y;
            if(x == n || m == y){
                std::cout << "divisa" << std::endl;
            }else if( x > n && y > m){
                std::cout << "NE" << std::endl;
            }else if( x < n && y > m){
                std::cout << "NO" << std::endl;
            }else if(x > n && y < m){ 
                std::cout << "SE" << std::endl;
            }else if(x < n && y < m){
                std::cout << "SO" << std::endl;
            }

        }	
    }
}
