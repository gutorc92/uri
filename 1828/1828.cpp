#include<iostream>
#include<cmath>
#include<stdio.h>
#include<string>
using namespace std;

string pe = "pedra";
string pa = "papel";
string te = "tesoura";
string sp = "Spock";
string la = "lagarto";

int result(string& op1, string& op2){
    if(op1 == op2){
        return -1;
    }
    if(op1 == te && op2 == pa){
        return 1;
    }
    if(op1 == pa && op2 == pe){
        return 1;
    }
    if(op1 == pe && op2 == la){
        return 1;
    }
    if(op1 == la && op2 == sp){
        return 1;
    }
    if(op1 == sp && op2 == te){
        return 1;
    }
    if(op1 == te && op2 == la){
        return 1;
    }
    if(op1 == la && op2 == pa){
        return 1;
    }
    if(op1 == pa && op2 == sp){
        return 1;
    }
    if(op1 == sp && op2 == pe){
        return 1;
    }
    if(op1 == pe && op2 == te){
        return 1;
    }
    return 0;
}

string getAnswer(string& op1, string& op2){
    if(result(op1,op2) == 1){
        return "Bazinga!";
    }else if(result(op1,op2) == -1){
        return "De novo!";
    } 
    return "Raj trapaceou!";
}

int main(int argc, char * argv[]){
    int t;
    string op1,op2;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> op1 >> op2;
        cout << "Caso #" << i <<": " << getAnswer(op1,op2); 
    }
    	
}
