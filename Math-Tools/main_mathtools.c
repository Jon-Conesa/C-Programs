/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on 26 de junio de 2018, 17:08
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int permiso = 0;
int scan;
int scan1;
int i;
float valorx;
float valorn;
float resultat2;
double valorx4;
double valorn4;
double resultat4;
int n;
int numfinal=1;
char frase [1000];
int aux=0;
int contador=0;

void opcions(){
    printf("1. Mostrar divisores");
    printf("\n");
    printf("2. Calcular potencia");
    printf("\n");
    printf("3. Contar palabras de una frase");
    printf("\n");
    printf("4. Calcular coseno");
    printf("\n");
    printf("5. Salir");
    printf("\n");
    
}
int factorial(float num){
    int numfinal=1;
    while(num>1){
        numfinal *= num;
        num --;
    }
    return numfinal;
  
}

double cosinus (float x, int n){
	double sumatori = 0;
	for (int i = 0; i <= n; i = i+1){
		double terme = (pow(x, 2*i)/factorial(2*i))*pow(-1, i);
		sumatori = sumatori + terme;
	}
	return sumatori;
}


int main(void) {
    while(permiso == 0){
        opcions();
        scanf("%d", &scan);
        if(scan == 1){printf("Ha escogido la opción mostrar divisores");printf("\n");printf("\n");
            scanf("%d", &scan1);
            printf("Los divisores de %d son: ", scan1);
            i=scan1;
            while(i >0){
                if(scan1 % i == 0){
                    printf("%d, ", i);
                }
                i--;
            }
            printf("\n");
            printf("\n");
        }
        else if(scan == 2){printf("Ha escogido la opción calcular potencia");printf("\n");printf("\n");
            printf("Introduzca el valor de x: ");
            scanf("%f", &valorx);
            printf("\n");
            printf("Introduzca el valor de N: ");
            scanf("%f", &valorn);
            printf("\n");
            resultat2=1;
            for(int b =0; i<valorn;i++){
                resultat2*= valorx;
            }
            printf("El resultado de %f elevadar a %f es: %f", valorx, valorn, resultat2);
            printf("\n");
            
        }
        else if(scan == 3){printf("Ha escogido la opción contar palabras de una frase");printf("\n");printf("\n");
            scanf("%s", &frase);
            for(int ii=0; aux<1;ii++){
                if(frase[ii]==' '){
                    contador += 1;
                }
                else if(frase[ii]=='.'){
                    aux=1;
                    contador += 1;
                }
            }
            printf("%d palabras", contador);
            printf("\n");
            printf("\n");
        }
        else if(scan == 4){printf("Ha escogido la opción calcular coseno");printf("\n");printf("\n");
            /*int a;
	float b;
	float res;
	printf("Dona'm n\n");
	scanf("%d", &a);
	printf("Dona'm l'angle\n");
	scanf("%f", &b);
	res = cosinus(b, a);
    printf("El resultado és %f", res);*/

          
            printf("Introduzca el valor de x: ");
            scanf("%lf", &valorx4);
            printf("\n");
            printf("Introduzca el valor de N: ");
            scanf("%lf", &valorn4);
            printf("\n");
            resultat4 = 0;
            for (n = 0 ; n <= valorn4 ; n++) {
                //resultat4 += (pow(valorx4, (2*n))*(pow(-1, n)))/(factorial((2*n)));
                resultat4 += (((pow(valorx4, (2*n)))/(factorial((2*n)))) * pow(-1,n));
                
            }
            printf("Para x = %f, N = %f: cos(x) = %f", valorx4, valorn4, resultat4);
            printf("\n");
            printf("\n");
            


            
        }
        else if(scan == 5){permiso= 1;}
        else{printf("Opción incorrecta");printf("\n");}
        
    }
    return (EXIT_SUCCESS);
}


