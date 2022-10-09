//Prática 4
//Faça, no emulador a seguir, um algoritmo que leia dados e armazene em uma matriz 3x3 de números inteiros. Em seguida,
// mostre os elementos que sejam iguais ao maior número armazenado na matriz.

#include <stdio.h>
#include <stdlib.h>

	int main(){
		
		int mat[3][3],lin,col,Elemaior=0,Eleigual=0;
		
		//Inicio do algortimo//
		
		printf("Digite os Elemento da Matriz\n");
		
		for(lin=0;lin<3;lin++)
			for(col=0;col<3;col++){
				printf("Elemento[%d][%d]\n:",lin,col);
				scanf("%d",&mat[lin][col]);
				
				
				if(mat[lin][col]>Elemaior){
					Elemaior=mat[lin][col];	
					Eleigual=1;
					
				}
						
				else
					if(mat[lin][col]==Elemaior)
						Eleigual++;
					
					
				
		}
				
				
				printf("Elemento Maior %d\n",Elemaior);
				printf("Quantidade de Elemento Repetido %d",Eleigual); 
				
				
			}
		
		
	