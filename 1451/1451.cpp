#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<list>
using namespace std;

int main(int argc, char * argv[]){
	string c;
    while(cin >> c){
        list<char> t;
        auto i = t.begin();
        for(auto it = c.begin(); it != c.end(); it++){
            if(*it == '['){
                i = t.begin();
            }else if(*it == ']'){
                i = t.end();
            }else{
                t.insert(i,*it);
            }
        }
        for(auto it = t.begin(); it != t.end(); it++){
            cout << *it;
        }
        cout << endl;
    }
}
