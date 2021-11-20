/*
O IFPB precisa de um programa que fa�a a corre��o autom�tica das provas do seu  teste de sele��o. A prova, que � a mesma para todos 
os alunos, consiste de dez  quest�es objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o  gabarito da prova
e, a seguir, o nome de um candidato e as op��es que aparecem no seu cart�o de respostas. Para cada candidato, o programa deve
imprimir o seu  percentual de acertos. O processamento deve ser encerrado quando for encontrado  um candidato com o nome �fim�,
que n�o deve ser processado. O programa deve  imprimir tamb�m a pontua��o m�dia dos candidatos. 
*/
#include <stdio.h>
void main(){
	int total_acertos = 0, alunos = 0;
	char gabarito[10];
	int acertos = 0;
	char nome[50] = "";
	char caractere;
	int i;
	
	
	printf("============== GABARITO ==============\n");
	for(i = 0; i < 10; i++){
		printf("Informe a resposta da questao %d: ", i+1);
		fflush(stdin);
		scanf("%c", &caractere);
		if(caractere =='a' || caractere == 'b' || caractere == 'c' || caractere == 'd' || caractere == 'e' ){
			gabarito[i] = caractere;
		}
		else{
			printf("caractere informado eh invalido\n");
			i--;
		}
	}
	printf("============== GABARITO ==============\n");
	
	
	
	
	printf("Gabarito preenchido!");
	
	while(strcmp(nome,"fim")!=0){
		
		printf("\nInforme o nome do candidato: ");
		scanf("%s", &nome);
		
		if(strcmp(nome,"fim")==0){
			break;
		}
		alunos++;
		for(i = 0; i < 10; i++){
			printf("Informe a resposta da questao %d: ", i+1);
			fflush(stdin);
			scanf("%c", &caractere);
			if(caractere =='a' || caractere == 'b' || caractere == 'c' || caractere == 'd' || caractere == 'e' ){
				if(caractere == gabarito[i]){
					acertos++;
				}
			}
			else{
				printf("caractere informado eh invalido\n");
				i--;
			}
		}
		printf("O percentual de acertos de %s foi de %d%%", nome,acertos*10);
		total_acertos += acertos;
		acertos = 0;
	}
	
	float media_acertos = (float)total_acertos/alunos;
	printf("media de acertos = %f" ,media_acertos);
	
	float media = (media_acertos/10)*100;
	printf("A media de acertos foi de %f", media);
}
