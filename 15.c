/*15. Escreva um programa que leia uma palavra e um n�mero inteiro k e identifique a k �sima letra da palavra
 informada pelo usu�rio.*/
 
 #include <stdio.h>
 #include <string.h>
 
 void main(){
	char palavra[50];
	int n;
	
	printf("Informe uma palavra: ");
	scanf("%s", &palavra);
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);
	
	int tamanho = strlen(palavra);
	
	printf("A k esima letra da palavra eh : %c", palavra[n-1]);
 }
