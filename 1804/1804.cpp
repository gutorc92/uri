#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;


int main(int argc, char * argv[]){
    int n;
    map<int, int> bugs;

    while(cin >> n){
        for(int i = 1; i <= n; i++){
            int num;
            cin >> num;
            bugs[i] = num;
        }
        /*
        for(auto it = bugs.begin(); it != bugs.end(); it++){
            cout << it -> first << " " << it->second << endl;
        }
        */
        char op;
        int bug;
        while(cin >> op >> bug){
//cout << op << bug << endl;
            if(op == 'a'){
                bugs.erase(bug);
                /*
                for(auto it = bugs.begin(); it != bugs.end(); it++){
                    cout << it -> first << " " << it->second << endl;
                }
                */
            }else{
                int count = 0;
                auto it1 = bugs.find(bug);
                for(auto it = bugs.begin(); it != it1; it++){
                    //if(it-> first < bug){
                        count += it->second;
                    //}
                } 
                /*
                for(int i = bug - 1; i > 0; i--){
                    //cout << "I: " << i << endl;
                    if(bugs.find(i) != bugs.end()){
                        count += bugs[i];
                    }
                }
                */
                cout << count << endl;
            }
            
        }
    }
	
}
