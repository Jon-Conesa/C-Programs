/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Administrator
 *
 * Created on 26 de junio de 2018, 16:28
 */

#include <stdio.h>
#include <stdlib.h>
#define CONS 60
int nowhere;
int s;
int sec;
int min;
int h;

int main(void) {
    scanf("%d", &s);
    sec=s%CONS;
    min=(s/CONS)%CONS;
    h=(s/CONS)/CONS;
    printf("%d horas %d minutos y %d segundos", h, min, sec);
    return (EXIT_SUCCESS);
}

