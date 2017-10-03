#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
	int n, t, q;
    int div[] = {1001, 1002, 1003, 1004, 1005};
    double qtde[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    double total = 0;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> t >> q;
        for(int j = 0; j < 5; j++){
            if(t == div[j]){
                 total += (q *qtde[j]);
                 break;
            }
        }
    }	
   printf("%.2lf\n", total);
}
