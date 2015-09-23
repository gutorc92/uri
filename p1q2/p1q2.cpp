#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<list>

using namespace std;

class Person{
  
  public:
    string nome;
    int posicao;
    char situacao;
    int insercao;
    Person(string n, int p, char s, int is){
        this->nome = n;
        this->posicao = p;
        this->situacao = s;
        this->insercao = is;
    }
    bool operator<(const Person p) const{
       if(p.situacao == this->situacao){
            if(p.posicao == this->posicao){
                return p.insercao > this->insercao;
            }else{
                return p.posicao < this->posicao;
            }
       }else{
            return p.situacao > this->situacao;
       }
    } 


};

int main(int argc, char * argv[]){
    unsigned int v;
    int  m;
    cin >> v >> m;
    list<Person> lista;
    for(int i = 0; i < m; i++){
        string n;
        int po;
        char s;
        cin >> n >> po >> s;
        Person p(n,po,s,i);
        lista.push_back(p);        
    }
    lista.sort();
    //sort(lista.begin(),lista.end());
    int ls = -1;
    if( v < lista.size()){
        ls = v;
    }else{
        ls = lista.size();
    }
    for(int  j = 0; j < ls; j++){
    
        lista.pop_front();
    }
    if(lista.size() == 0){
        cout << "Todos foram matriculados" << endl;
    }else{
        Person p = lista.front();
        cout << p.nome << endl;
    }	
}
