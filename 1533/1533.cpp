#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(int argc, char * argv[]){
    int n, sup[1001], sup_pos[1001];
    while(1){
        std::cin >> n;
        if(n == 0) break;
        for(int i = 0; i < n; i++){
            std::cin >> sup[i];
            sup_pos[i] = sup[i];
        }
        std::sort(sup, sup + n, std::greater<int>());
        int val = sup[1];
        //std::cout << "Val: " << val << std::endl;
        auto result1 = std::find(sup_pos, sup_pos + n, val);
        std::cout << (result1 - sup_pos) + 1 << std::endl;
    }            
}
