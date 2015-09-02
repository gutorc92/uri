#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;

int main(int argc, char * argv[]){
    string expressao;
    while(cin >> expressao){
	    queue<char> p;
        for(unsigned int i = 0; i < expressao.size(); i++){
            char c = expressao[i];
            if(c == '('){
                p.push(c);
            }
            if(c == ')' && p.front() == '('){
                p.pop();
            }else if(c == ')'){
                p.push(c);
            }
        }

        if(p.empty()){
            cout << "correct" << endl;
        }else{
            cout << "incorrect" << endl;
        }

    }
}
