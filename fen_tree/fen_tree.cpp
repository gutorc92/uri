#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

int vec[12];

int bitLess(const int& j){
    return (j) & (-j);
}



int sum2(int a){
    int res = 0;
    while(a){
        res += vec[a];
        a = a - bitLess(a);
    }
    return res;
}

int sum( int a, int b){
    return a == 1 ? sum2(b) : sum2(b) - sum2(a-1);

}

int update(int* vec,int max, int index, int value){
    while(index < max){
        vec[index] += value;
        index = index + bitLess(index);
    }
    return 1;

}

int main(int argc, char * argv[]){
    int max = 12;
    fill(vec,vec+max,0);
    int p[12] =  { 0,3,2,-1,6,5,4,-3,3,7,2,3 };

    for(int i = 1; i < 13; i++){
        update(vec,max,i,p[i]);
    }

    for(int i = 1; i < 12; i++){
        cout << vec[i] << endl;
    }
   
    cout << "Sum: " <<  sum(3,4) << endl; 
}
