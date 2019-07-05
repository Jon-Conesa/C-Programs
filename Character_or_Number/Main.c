/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Main.c
 * Author: Administrator
 *
 * Created on 26 de junio de 2018, 16:41
 */

#include <stdio.h>
#include <stdlib.h>

char scan;
int num;
int main(void) {
    
    scanf("%c", &scan);
    num = scan;
    if(num<=90 && num>=65 || num<=122 && num>=97){
        printf("Es una lletra");
        printf("\n");
    }
    else{printf("No es una lletra");printf("\n");}
    if(num==65 ||num==69 ||num==73 ||num==79 ||num==85 ||num==97 ||num==101 ||num==105 ||num==111 ||num==117){
        printf("Es una vocal");
        printf("\n");
        printf("No es una consonant");
        printf("\n");
    }
    else{printf("No es una vocal");printf("\n");printf("Es una consonant");printf("\n");}
    if(num<=90 && num>=65){
        printf("Es una majuscula");
        printf("\n");
        printf("No es una minuscula");
        printf("\n");
    }
    else{printf("No es una majuscula");
        printf("\n");
        printf("Es una minuscula");
        printf("\n");}
    
    if(num<=57 && num>=49){
        printf("Es un dígit");
    }else{printf("No es un dígit");}
    
    
    return (EXIT_SUCCESS);
}

