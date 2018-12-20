#include <stdio.h>
#include <stdlib.h>

#ifndef stack_H
#define stack_H

typedef struct tokenFA *address;
typedef struct tokenFA {
    char info;
    address next;
}m1;

typedef struct{
    address top;
}Stack;

void createEmpty(Stack *S);
address alokasi(char X);
void dealokasi(address p);
void pushAddress(Stack *S, address p);
void pop(Stack *S);
Stack makestackS1();
Stack makestackS2();
Stack makestackS3();
Stack makestackS4();
Stack makestackS5();
Stack makestackP1();
Stack makestackP2();
Stack makestackP3();
Stack makestackP4();
Stack makestackP5();
Stack makestackO1();
Stack makestackO2();
Stack makestackO3();
Stack makestackO4();
Stack makestackO5();
Stack makestackK1();
Stack makestackK2();
Stack makestackK3();
Stack makestackK4();
Stack makestackK5();
int parserS(char x[], int i);
int parserSverpar(char x[], int i);
int parserP(char x[], int i);
int parserO(char x[], int i);
int parserK(char x[], int i);

#endif // stack_
