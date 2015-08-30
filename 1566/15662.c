#include<stdio.h>
#include<string.h>

int main(int argc, char * argv[]){
    int nc;
    int re =scanf("%d" ,&nc);
    int n;
    int alturas [235];
    int i,j,k;
    for(i = 0; i < nc; i++){
        int re =scanf("%d",&n);
        memset(alturas,0,sizeof(alturas));
        int alt;
        for(j = 0; j < n; j++){
            int re = scanf("%d", &alt);
            alturas[alt] += 1;
        }
        int total = 0;
        int begin = 0;
        for(j = 20; j <= 230; j++){
            total = alturas[j];
            if(total > 0){
                if(begin == 0){
                    begin = 1;
                }else{
                    printf(" ");
                }
            }
            for(k = 1; k <= total; k++){
                printf("%d",j);           
                if(k < total){
                  printf(" ");
                }
        
            }
        }
        printf("\n");    
    }	
}
