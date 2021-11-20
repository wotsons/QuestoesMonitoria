/*#include<stdio.h>
  void main(){
	int n,result=0,k;
	
	printf("Informe um numero inteiro:");
	scanf("%d",&n);
	
	for(k=1;k<n;k++){
			if(n%k==0){
	   		result+=k;
			}
	}
	
	if(result==n){
		printf("O numero %d eh perfeito",n);
	}
	
	else{
		printf("O numero %d nao eh perfeito",n);
	}
	
}*/
#include<stdio.h>
void main(){
	int n, k=0;
	printf("Informe um numero inteiro positivo:");
	scanf("%d",&n);
	
	int numDivisores=0;
	
	while(k<=n){
		numDivisores=0;
	}
	
	for(numDivisores=0;  ; ){
		numDivisores=numDivisores+1;
		}
	if(numDivisores==2){
		printf("O numero %d",k);
	}
}

