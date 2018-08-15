/*
    Jesus Antonio Gonzalez Quevedo
    Administracion de Proyectos de Ingenieria de Software

    Bear and Big Brother
    http://codeforces.com/contest/791/problem/A
*/
#include <stdio.h>
#include <assert.h>
#include "bear.h"

void testInputOne(){
    int lim = 4;
    int bob = 7;
    assert(growth(lim, bob) == 2);
}

void testInputTwo(){
    int lim = 4;
    int bob = 9;
    assert(growth(lim, bob) == 3);
}

void testInputThree(){
    int lim = 1;
    int bob = 1;
    assert(growth(lim, bob) == 1);
}

void performTests(){
    testInputOne();
    testInputTwo();
    testInputThree();
}

int main(){
    performTests();
    printf("Successful.\n");
    return 0;
}