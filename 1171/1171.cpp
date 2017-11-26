#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;

int main(int argc, char * argv[]){
    int n, t;
    std::cin >> n;
    std::map<int, int> numeros;
    for(int i = 0; i < n; i++){
        std::cin >> t;
        if(numeros.find(t) != numeros.end()){
            numeros[t]++;
        }else{
            numeros[t] = 1;
        }
    }
    vector<int> v;
    for(map<int,int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        v.push_back(it->first);
        //cout << it->first << "\n";
    }
    std::sort(v.begin(), v.end());
    for(unsigned int i = 0; i < v.size(); i++){
        std::cout << v[i] << " aparece " << numeros[v[i]] << " vez(es)" << std::endl;
    }	
}
