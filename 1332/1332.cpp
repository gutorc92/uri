#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int dist(string n, string n2){
    int min = std::min(n.size(), n2.size());
    int qtde = 0;
//    std::cout << "dfadf min" << min << std::endl;
    for(int i = 0; i < min; i++){
        if(n[i] != n2[i]){
            qtde++;
        }
    }
    return qtde;

}

int main(int argc, char * argv[]){
    int t;
    string word;
    vector<string> n = {"one", "two", "three"};
    std::cin >> t;
    for(int i = 0; i < t; i++){
        std::cin >> word;
        for(unsigned int j = 0; j <= n.size(); j++){
            if(dist(word, n[j]) == 1){
                std::cout << j + 1 << std::endl;
                break;
            }
        }  
    }
	
}
