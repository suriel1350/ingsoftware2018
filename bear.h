/*
    Jesus Antonio Gonzalez Quevedo
    Administracion de Proyectos de Ingenieria de Software

    Bear and Big Brother
    http://codeforces.com/contest/791/problem/A
*/
#include <stdio.h>

int growth(int lim, int bob){
    // Attributes
    int years;
    
    years = 0;
    while(lim <= bob){
        lim *= 3;
        bob *= 2;
        years ++;
    }

    return years;
}

int input(){
    // Attributes
    int lim;
    int bob;

    scanf("%d", &lim);
    scanf("%d", &bob);

    return growth(lim, bob);
}