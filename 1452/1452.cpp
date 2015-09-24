#include<iostream>
#include<cmath>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<set>
using namespace std;

int main(int argc, char * argv[]){
    int n,m;
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        map<string,vector<int> > servers;
        int id = 0;
        for(int i = 0; i < n; i++){
            int  r;
            cin >> r;
            for(int j = 0; j < r; j++){
                string app;
                cin >> app;
                servers[app].push_back(id);
            }
            id++;
        }
        
        int con = 0;
        for(int i = 0; i < m; i++){
            int r;
            set<int> cons;
            cin >> r;
            for(int j = 0; j < r; j++){
                string service;
                cin >> service;
                if(servers.find(service) != servers.end()){
                    cons.insert(servers[service].begin(),servers[service].end());
                }         
            }
            con += cons.size();
        }
        cout << con << endl;
    }	
}
