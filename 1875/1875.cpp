#include<iostream>
#include<cmath>
#include<stdio.h>


using namespace std;

int point(char& s, char& m){
    if(s == 'G' && m == 'B'){
        return 1;
    }if(s == 'G' && m == 'R'){
        return 2;
    }if(s == 'B' && m == 'G'){
        return 2;
    }if(s == 'B' && m == 'R'){
        return 1;
    }if(s == 'R' && m == 'G'){
        return 1;
    }
    if(s == 'R' && m == 'B'){
        return 2;
    }
    return 0;
}

int main(int argc, char * argv[]){
    int points [256];
    char r = 'R',
     b = 'B';
    char  g = 'G';
    int c,p;
    char m,s;
    cin >> c;
cout << c << endl;
    for(int i = 1; i <= c ; i++){
        cin >> p;
        fill(points,points+256,0);
        for(int j = 1; j <= p ; j++){
            cin >> m >> s;
            points[(int)m] += point(m,s);
        }
        if(points[(int)r] == points[(int)b] && points[(int)b] == points[(int)g]){
            cout << "trempate" << endl;
        }else if(points[(int)r] > points[(int)b] && points[(int)r] > points[(int)g]){
            cout << "red" << endl;
        }else if(points[(int)r] < points[(int)b] && points[(int)b] > points[(int)g]){
            cout << "blue" << endl;
        }else if(points[(int)r] < points[(int)g] && points[(int)b] < points[(int)g]){
            cout << "green" << endl;
        }else if(points[(int)r] == points[(int)b] || points[(int)b] == points[(int)g]){
            cout << "empate" << endl;
        }

    }	
}
