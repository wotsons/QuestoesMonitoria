#include <stdio.h>

void main(){
	int n1, n4;
	int control;
	int i;
	for(i = 1000; i <=9999; i++){
		control = i;
		n4 = control%10;
		n1 = control%1000;
		if(n1 == n4){
			printf("\n %d", i);
		}
	}
}
