#include<stdio.h>
void main(){

    int n,k;
    int i = 1;
    printf("Informe um numero inteiro:");
    scanf("%d",&n);
    
    for(k=n;k<=n;k++){
        printf("*");
        if(k==n && i != n){
            printf("\n");
            i++;
            k = n - i;
        }
    }
}
