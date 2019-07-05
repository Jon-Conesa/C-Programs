/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Administrator
 *
 * Created on 25 de junio de 2018, 19:47
 */

#include <stdio.h>
int num;
int numfinal=1;


int main(void) {
    scanf("%d", &num);
    while(num>0){
        numfinal *= num;
        num --;
    }
    printf("%d", numfinal);
  }

