#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<list>
using namespace std;

int main(int argc, char * argv[]){
    int n;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        list<int> pilha;
        list<int> descartadas;
        for(auto i = 1; i <= n; i++){
            pilha.push_back(i);
        }

        bool t = true; 
        while(pilha.size() > 1){
            if(t){
                descartadas.push_back(pilha.front());
                t = false;
            }else{
                pilha.push_back(pilha.front());
                t = true;
            }
            pilha.pop_front();
        }
        cout << "Discarded cards: ";
        bool f = false;
        for(auto it = descartadas.begin(); it != descartadas.end(); it++){
            if(f){
                cout << ", " ;
            }
             cout << *it ;
            f = true;
        }
        cout << endl;
        cout << "Remaining card: " << pilha.front() << endl;

    }	
}
