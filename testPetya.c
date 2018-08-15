/*
    Jesus Antonio Gonzalez Quevedo
    Administracion de Proyectos de Ingenieria de Software

    Petya and Strings
    http://codeforces.com/contest/112/problem/A
*/
#include <stdio.h>
#include <assert.h>
#include "petya.h"

void testInputOne(){
    char one[] = "aaaA";
    char two[] = "aaaa";
    assert(petya(one, two) == 0);
}

void testInputTwo(){
    char one[] = "abs";
    char two[] = "Abz";
    assert(petya(one, two) == -1);
}

void testInputThree(){
    char one[] = "abcdefg";
    char two[] = "AbCdEfF";
    assert(petya(one, two) == 1);
}

void performTests(){
    testInputOne();
    testInputTwo();
    testInputThree();
}

int main() {
    performTests();
    printf("Successful.\n");
    return 0;
}