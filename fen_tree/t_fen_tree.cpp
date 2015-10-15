#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

template <class T> 
class BitTree{

    private:
        int max;
        T* vec;
        int bitLess(const int& j){
            return (j) & (-j);
        }
        int sum(int index){
            int res = 0;
            while(index){
                res += this->vec[index];
                index = index - bitLess(index);
            }
            return res;
        }
    public:
        BitTree(const int max, T * p){
            this->max = max;
            this->vec = new T[this->max]; 
            for(int i = 1; i <= max; i++){
                this->update(i,p[i]);
            } 
        }
        int sum(const int a, const int b){
            return a == 1 ? sum(b) : sum(b) - sum(a-1);
        }
        int update(int index, int value){
            while(index < this->max){
                this->vec[index] += value;
                index = index + this->bitLess(index);
            }
            return 1;

        }
};



int main(int argc, char * argv[]){
    int max = 12;
    int p[12] =  { 0,3,2,-1,6,5,4,-3,3,7,2,3 };

    BitTree<int> t(max,p); 

    cout << t.sum(2,9) << endl;   
}
