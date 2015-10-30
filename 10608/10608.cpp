#include<iostream>
#include<cmath>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int friends(map<int,vector<int> >& f, int n){
    int total = 0;
    total +=f[n].size();
    if(f[n].size() == 0){
        return  1;
    }
cout << "N: " << n << endl;
cout << "Size: " << f[n].size() << endl;
    for(auto it = f[n].begin(); it != f[n].end(); it++){
cout << "F" << *it << endl;   
         total += friends(f,*it);        
    }
    return total;
}
int main(int argc, char * argv[]){
	int x;
    cin >> x;
    map<int,vector<int> > fr;
    vector<int> totals; 
    for(int i = 0; i < x; i++){
        int y,w;
        vector<int> totals;
        cin >> y >> w;
        for(int j = 0; j < w; j++){
            int d,e;
            cin >> d >> e;
cout << "P" << d << " F" << e << endl;
            if(fr.count(d) == 0){
                vector<int> x;
                x.push_back(e);
                fr[d] = x;
            }else{
                fr[d].push_back(e);
            }
            
        }
        
        for(auto it = fr.begin(); it != fr.end(); it++){
           totals.push_back(friends(fr,it->first));
//cout << it->first << endl;
        }
        make_heap(totals.begin(), totals.end());
        cout << "Total: " << totals.front() << endl;
        
    }
}
