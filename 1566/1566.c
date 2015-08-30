#include<stdio.h>
#include<string.h>

int main(int argc, char * argv[]){
    int nc;
    scanf("%d" ,&nc);
    int n;
    int alturas [235];
    for(int i = 0; i < nc; i++){
        scanf("%d",&n);
        memset(alturas,0,sizeof(alturas));
        int alt;
        for(int j = 20; j < 230; j++){
            printf("%d", alturas[j]);
        }
        for(int j = 0; j < n; j++){
            scanf("%d", &alt);
            alturas[alt] += 1;
        }
        
            
    }	
}
