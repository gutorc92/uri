#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
using namespace std;

class SegmentTree{
    private:
        int * vec;
        int numElements;
        int size;
        int element;
    public:
        SegmentTree(int numElements){
            this->numElements = numElements;
            this->size = 2 * ( pow(2, log2(this->numElements) + 1));
            this->vec = new int[this->size];
            this->element = 1;
        }

        int insert(int value){
            
        }

        int getSize(){
            return this->size;
        }

        ~SegmentTree(){
            delete this->vec;
        }
};

int main(int argc, char * argv[]){
	SegmentTree s(6);
    if(s.getSize() == 11){
        cout << "Size is correct" << endl;
    }else{
        cout << "Size: " <<   s.getSize() << endl;
    }

}
