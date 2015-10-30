#include<iostream>
#include<cmath>
#include<stdio.h>
#include<time.h>

using namespace std;

int main(int argc, char * argv[]){
    int numbers = 5;
    srand(time(NULL));
    for(int i = 1; i < numbers; i++){
        cout << i << endl;
        for(int j = 0; j < i; j++){
            int p = rand() % numbers + 1;
            cout << p << endl;
        } 
        int actions = rand() % numbers + 1;
        char c = 'M';
        char d[2] = { 'S','M'};
        int x,y;
        for(int j = 0; j < actions; j++){
            int o = rand() % 2 ;
cout << "OP" << o << endl;
            c = d[o];
            if(c == 'M'){
                x = rand() % numbers + 1;
                y = rand() % numbers + 1;
                if(x < y){
                    cout << c << " " << " " << x << " " << y << endl;
                }
            }else if (c == 'S'){
                x = rand() % numbers + 1;
                y = rand() % 1000 + 1;
                cout << c << " " << " " << x << " " << y << endl;
            }
            
        }  
    }
}
