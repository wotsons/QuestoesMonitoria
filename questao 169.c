#include<stdio.h>
void main(){
	char texto[200], cont = 0, numero;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0;
	printf("Digite um texto para saber a quantidade de vezes que as letras aparecem.\n");
while (numero!=10){
		scanf("%c", &texto[cont]);
		
		switch(texto[cont]){
			case 'A':
			case 'a': a++; break;
			case 'B':
			case 'b': b++; break;
			case 'C':
			case 'c': c++; break;
			case 'D':
			case 'd': d++; break;
			case 'E':
			case 'e': e++; break;
			case 'F':
			case 'f': f++; break;
			case 'G':
			case 'g': g++; break;
			case 'H':
			case 'h': h++; break;
			case 'I':
			case 'i': i++; break;
			case 'J':
			case 'j': j++; break;
			case 'K':
			case 'k': k++; break;
			case 'L':
			case 'l': l++; break;
			case 'M':
			case 'm': m++; break;
			case 'N':
			case 'n': n++; break;
			case 'O':
			case 'o': o++; break;
			case 'P':
			case 'p': p++; break;
			case 'Q':
			case 'q': q++; break;
			case 'R':
			case 'r': r++; break;
			case 'S':
			case 's': s++; break;
			case 'T':
			case 't': t++; break;
			case 'U':
			case 'u': u++; break;
			case 'V':
			case 'v': v++; break;
			case 'W':
			case 'w': w++; break;
			case 'X':
			case 'x': x++; break;
			case 'y': y++; break;
			case 'Z':
			case 'z': z++; break;
		}
		
		numero = (int)texto[cont];
		cont++;
	}
	
	printf("\nO texto possui:\n%d A\n%d B\n%d C\n%d D\n%d E\n%d F\n%d G\n%d H\n%d I\n%d J\n%d K\n%d L\n%d M\n%d N\n%d O\n%d P\n%d Q\n%d R\n%d S\n%d T\n%d U\n%d V\n%d W\n%d X\n%d Z",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
	getch();
}
