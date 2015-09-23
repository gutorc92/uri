#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<list>
using namespace std;

int main(int argc, char * argv[]){
    int n, m;
    int r;
    int processos[1005];
    int id = 1;
    int last = -1;
    while(cin >> n >> m >> r){
    list<int> excluidos;
    id = 1;
    last = -1;
    for(int i = 1; i <= m; i++){
        processos[i] = id;
        id++;
    }
    last = m;
    
    for(int i = 0; i < r; i++){
        string command;
        cin >> command;
        if(!command.find("delete")){
            int pr;
            cin >> pr;
            string resto;
            cin >> resto;
            int posicao = -1;
            for(int j = 1; j <= last; j++){
                if(processos[j] == pr){
                    posicao = j;
                }
            }
            if(posicao != -1){
                processos[posicao] = processos[last];
                last--;
                excluidos.push_back(pr);
            }
        }else{
            string resto;
            cin >> resto;
            int newpr = -1;
            if(last < n){
                if(excluidos.size() > 0){
                    newpr = excluidos.front();
                    excluidos.pop_front();
                }else{
                    id++;
                    newpr = id; 
                }
                last++;
                processos[last] = newpr;
            }
        }
    }
    cout << "V=[";
    for(int i = 1; i <= last; i++){
        if(i < last){
            cout << processos[i] <<  ", ";
        }else{
            cout << processos[i] <<  "]";
        }
    }
    cout << endl;
    }	
}
