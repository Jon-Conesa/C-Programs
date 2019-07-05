#include <stdio.h>
#include <math.h>

double cosinus(float x , int n);
long long int factorial(int n);


int main() {

	int opc;
	printf("1.Mostrar divisores\n2.Calcular potencia\n3.Contar palabras de una frase\n4.Calcular coseno\n5.Salir ");

	while (opc<5) {

		scanf("%d",&opc);





/////////////////////////////////////////////////////////////////////////////



		if (opc==1) { 

			int N;
			printf("Introduzca el valor de un número entero positivo: ");
			scanf("%d",&N);
			printf("\nLos divisores de %d son: ",N);

			for(int i=1; i<N; i++) {

				if(N%i==0) {

					printf("%d, ",i);
				}
			}
		}
	




//////////////////////////////////////////////////////////////////////////



		if (opc==2) {

			float res=1;
			float base;
			float exp;
			printf("Introduzca el valor de un número natural: ");
			scanf("%f",&exp);
			printf("Introduzca el valor de un número real: ");
			scanf("%f",&base);

			for(int i=0; i<exp; i++) {
				res*=base;
			}

			printf("\nEl resultado de %f elevado a ",base);
			printf("%f",exp);
			printf(" és %f",res);
			break;
		}




//////////////////////////////////////////////////////////////////////////






		if (opc==4) {
			
	int a;
	float b;
	float res;
	printf("Dona'm n\n");
	scanf("%d", &a);
	printf("Dona'm l'angle\n");
	scanf("%f", &b);
	res = cosinus(b, a);
    printf("El resultado és %f", res);

    }




    return 0;
}


}



double cosinus (float x, int n){
	double sumatori = 0;
	for (int i = 0; i <= n; i = i+1){
		double terme = (pow(x, 2*i)/factorial(2*i))*pow(-1, i);
		sumatori = sumatori + terme;
	}
	return sumatori;
}
		
 
long long int factorial(int n){
	long long int prod = 1;
	for (int i = n; i>1 ; i = i-1){
		prod = prod*i;
	}
	return prod;
}	
		

