#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

bool myfunction (int i,int j) { 

    return (i>j); 

}

int main(int argc, char * argv[]){
    int n;
    cin >> n;
    int m;
    int notas[1000];
    int notasOr[1000];
    for(int i =0; i < n; i++){
        cin >> m;
        for(int j =0; j < m; j++){
             cin >> notas[j];
        }
        copy(notas,notas+m,notasOr);
        sort(notasOr,notasOr+m,myfunction);   
        int num = 0;
        for(int j =0; j < m; j++){
             if(notas[j] == notasOr[j]){
                num++;
            }
        }
        cout << num << endl;
    }	
}
