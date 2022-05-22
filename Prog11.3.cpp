/* Autor: Xavier Romero Hernández, Realizado: 10/02/2022 
	Programa para una tienda de Arduinos, en dicha Tienda existe una promocion
		-Si se llevan minimo 5 arduinos, se le hace el 15% de descuento
		-Si se llevan 10 o más, se le hace el descuento del 25%
		-Si no, se le hace el 5% de descuento
	Cada Arduino tiene un costo de $350.00
	El programa pedira la cantidad de arduinos y calculara el total a pagar
	*/

#include <stdio.h>


int main (){
	int arduinos;
	float total, descuento;
	
	printf("Introduce la cantidad de arduinos:");
	scanf("%d",&arduinos);
	
	total=arduinos*350;
	if(arduinos>=10){
		descuento=total*0.25;
	}
	else if(arduinos>=5){
		descuento=total*0.15;
	}
	else{
		descuento=total*0.05;
	}
	
	printf("\nSubtotal:\t $%10.2f\n",total);
	printf("Descuento:\t-$%10.2f\n",descuento);
	printf("\t\t-------------\n");
	printf("Total:\t\t $%10.2f",total-descuento);
	return 0;
}
