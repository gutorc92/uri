#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, t, q, paginas;
    while(1){
        std::cin >> n;
        if(n == 0) break;
        std::cin >> t >> q;
        paginas = (n * t * q)/abs(n - q);
        std::cout << paginas << " pagina";
        if(paginas > 1) std::cout << "s";
        std::cout << std::endl;
    }
   	
}
