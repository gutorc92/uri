#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, c = 0, r = 0, s = 0, qtde = 0;
    char t;
    double pc, ps, pr, total = 0;
	std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> qtde >> t;
        total += qtde;
        if(t == 'C') c+= qtde;
        if(t == 'R') r+= qtde;
        if(t == 'S') s+= qtde;
    }
    pc = (c/total) * 100;
    ps = (s/total) * 100;
    pr = (r/total) * 100;
    std::cout << "Total: " << total <<  " cobaias" << std::endl;
    std::cout << "Total de coelhos: " << c << std::endl;
    std::cout << "Total de ratos: " << r << std::endl;
    std::cout << "Total de sapos: " << s << std::endl;
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);
}
