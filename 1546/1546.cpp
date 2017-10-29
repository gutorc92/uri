#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

int main(int argc, char * argv[]){
    int n, k, f;
    std::cin >> n;
    map<int, std::string> mymap = {{1, "Rolien"}, {2, "Naej"},{3,"Elehcim"}, {4,"Odranoel"}};

    for(int i = 0; i < n; i++){
        std::cin >> k;
        for(int j = 0; j < k; j++){
            std::cin >> f;
            std::cout << mymap[f] << std::endl;
        }
    }	
}
