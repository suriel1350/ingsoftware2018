/*
    Jesus Antonio Gonzalez Quevedo
    Administracion de Proyectos de Ingenieria de Software

    Petya and Strings
    http://codeforces.com/contest/112/problem/A
*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void toLowerCase(char * text){
    int i = 0;
    while(text[i] != '\0'){
        text[i] = tolower(text[i]);
        i ++;
    }
}

int petya(char * one, char * two){
    // Attrbutes
    int sumOne;
    int sumTwo;

    toLowerCase(one);
    toLowerCase(two);
    sumOne = sumTwo = 0;

    while(*one != '\0'){
        sumOne += *one;
        sumTwo += *two;

        one ++;
        two ++;
    }

    if (sumOne < sumTwo)        return -1;
    else if (sumOne > sumTwo)   return 1;
    else                        return 0;
}

int input(){
    // Attributes
    char one[100];
    char two[100];

    scanf("%s", one);
    scanf("%s", two);

    return petya(one, two);
}