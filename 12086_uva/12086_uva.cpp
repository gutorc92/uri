#include<iostream>
#include<cmath>
#include<stdio.h>
#define LSOne(S) (S & (-S))

using namespace std;


class BIT {
    int* ft, size;
public:
    // initialize a BIT of n elements to zero
    BIT(int n) {
        size = n;
        ft = new int[n+1];
    }

    ~BIT()  {
        delete [] ft;
    }

    // returns sum of the range [1...b]
    int sum(int b) {
        int sum = 0;
        for (; b; b -= LSOne(b)) sum += ft[b];
        return sum;
    }

    // returns sum of the range [a...b]
    int sum(int a, int b) {
        return sum(b) - (a == 1 ? 0 : sum(a - 1));
    }

    // update value of the k-th element by v (v can be +ve/inc or -ve/dec)
    // i.e., increment or decrement kth element by a value v
    void update(int k, int v) {
        for (; k <= size; k += LSOne(k)) ft[k] += v;
    }

    // divide each original frequency by c
    void scaleDown(int c){
        for (int i=1 ; i<=size ; i++) ft[i] /= c;
    }

    // multiply each original frequency by c
    void scaleUp(int c){
        for (int i=1 ; i<=size ; i++) ft[i] *= c;
    }
};

int main(int argc, char * argv[]){
    int c;
    cin >> c;
    int ca = 1;
    int t[200005];
    while(c != 0){
        BIT b(c);
        for(int i = 1; i <= c; i++){
            int n;
            cin >> n;
//cout << n << endl;
            t[i] = n; 
            b.update(i,n);
        }
        char op;
        cout << "Case " << ca << ":" << endl;
        while(1){
            cin >> op;
//cout << op << " ";
            if(op == 'E'){
                break;
            }
            int x, y;
            cin >> x >> y;
//cout << x << " " << y << endl;
            if( op == 'S'){
                
                b.update(x,y - t[x]);
            }else{
                cout << b.sum(x,y) << endl;
            }
            
        }
        ca++;
        char op1,op2;
        cin >> op1 >> op2 >> c;
//cout << op1 << op2  << endl;
//cout << c << endl;
        if( c != 0){
            cout << endl;
        }
    }	
}
