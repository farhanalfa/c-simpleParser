#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void createEmpty(Stack *S){
    (*S).top=NULL;
}

address alokasi(char namaX){
    address p;
    p=(address)malloc(sizeof(m1));
    if(p!=NULL){
        p->info  = namaX;

        p->next  = NULL;
    }
    return p;
}

void dealokasi(address p){
    free(p);
}

void pushAddress(Stack *S, address p){
    p->next=(*S).top;
    (*S).top=p;
}

void pop(Stack *S){
    address p;
    while((*S).top != NULL){
        p=(*S).top;
        (*S).top=p->next;
        dealokasi(p);
    }
}

Stack makestackS1(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('k');
    address p1=alokasi('e');
    address p2=alokasi('l');
    address p3=alokasi('i');
    address p4=alokasi('n');
    address p5=alokasi('c');
    address p6=alokasi('i');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    return st;
}

Stack makestackS2(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('k');
    address p1=alokasi('u');
    address p2=alokasi('d');
    address p3=alokasi('a');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    return st;
}

Stack makestackS3(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('k');
    address p1=alokasi('u');
    address p2=alokasi('c');
    address p3=alokasi('i');
    address p4=alokasi('n');
    address p5=alokasi('g');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    return st;
}

Stack makestackS4(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('b');
    address p1=alokasi('u');
    address p2=alokasi('r');
    address p3=alokasi('u');
    address p4=alokasi('n');
    address p5=alokasi('g');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    return st;
}

Stack makestackS5(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('b');
    address p1=alokasi('e');
    address p2=alokasi('r');
    address p3=alokasi('u');
    address p4=alokasi('a');
    address p5=alokasi('n');
    address p6=alokasi('g');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    return st;
}

Stack makestackP1(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('m');
    address p1=alokasi('e');
    address p2=alokasi('m');
    address p3=alokasi('a');
    address p4=alokasi('k');
    address p5=alokasi('a');
    address p6=alokasi('n');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    return st;
}

Stack makestackP2(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('m');
    address p1=alokasi('e');
    address p2=alokasi('n');
    address p3=alokasi('g');
    address p4=alokasi('e');
    address p5=alokasi('n');
    address p6=alokasi('d');
    address p7=alokasi('u');
    address p8=alokasi('s');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    pushAddress(&st, p7);
    pushAddress(&st, p8);
    return st;
}

Stack makestackP3(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('m');
    address p1=alokasi('e');
    address p2=alokasi('n');
    address p3=alokasi('c');
    address p4=alokasi('a');
    address p5=alokasi('k');
    address p6=alokasi('a');
    address p7=alokasi('r');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    pushAddress(&st, p7);
    return st;
}

Stack makestackP4(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('m');
    address p1=alokasi('e');
    address p2=alokasi('l');
    address p3=alokasi('o');
    address p4=alokasi('m');
    address p5=alokasi('p');
    address p6=alokasi('a');
    address p7=alokasi('t');
    address p8=alokasi('i');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    pushAddress(&st, p7);
    pushAddress(&st, p8);
    return st;
}

Stack makestackP5(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('m');
    address p1=alokasi('e');
    address p2=alokasi('n');
    address p3=alokasi('g');
    address p4=alokasi('e');
    address p5=alokasi('j');
    address p6=alokasi('a');
    address p7=alokasi('r');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    pushAddress(&st, p7);
    return st;
}

Stack makestackO1(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('d');
    address p1=alokasi('a');
    address p2=alokasi('g');
    address p3=alokasi('i');
    address p4=alokasi('n');
    address p5=alokasi('g');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    return st;
}

Stack makestackO2(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('r');
    address p1=alokasi('u');
    address p2=alokasi('m');
    address p3=alokasi('p');
    address p4=alokasi('u');
    address p5=alokasi('t');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    return st;
}

Stack makestackO3(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('m');
    address p1=alokasi('a');
    address p2=alokasi('n');
    address p3=alokasi('g');
    address p4=alokasi('s');
    address p5=alokasi('a');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    return st;
}

Stack makestackO4(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('b');
    address p1=alokasi('i');
    address p2=alokasi('j');
    address p3=alokasi('i');
    address p4=alokasi('-');
    address p5=alokasi('b');
    address p6=alokasi('i');
    address p7=alokasi('j');
    address p8=alokasi('i');
    address p9=alokasi('a');
    address p10=alokasi('n');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    pushAddress(&st, p7);
    pushAddress(&st, p8);
    pushAddress(&st, p9);
    pushAddress(&st, p10);
    return st;
}

Stack makestackO5(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('p');
    address p1=alokasi('o');
    address p2=alokasi('h');
    address p3=alokasi('o');
    address p4=alokasi('n');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    return st;
}

Stack makestackK1(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('k');
    address p1=alokasi('e');
    address p2=alokasi('m');
    address p3=alokasi('a');
    address p4=alokasi('r');
    address p5=alokasi('i');
    address p6=alokasi('n');

    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);

    return st;
}

Stack makestackK2(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('b');
    address p1=alokasi('e');
    address p2=alokasi('s');
    address p3=alokasi('o');
    address p4=alokasi('k');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    return st;
}

Stack makestackK3(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('s');
    address p1=alokasi('e');
    address p2=alokasi('k');
    address p3=alokasi('a');
    address p4=alokasi('r');
    address p5=alokasi('a');
    address p6=alokasi('n');
    address p7=alokasi('g');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    pushAddress(&st, p4);
    pushAddress(&st, p5);
    pushAddress(&st, p6);
    pushAddress(&st, p7);
    return st;
}

Stack makestackK4(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('t');
    address p1=alokasi('a');
    address p2=alokasi('d');
    address p3=alokasi('i');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    return st;
}

Stack makestackK5(){
    Stack st;
    createEmpty(&st);
    address p0=alokasi('l');
    address p1=alokasi('u');
    address p2=alokasi('s');
    address p3=alokasi('a');
    pushAddress(&st, p0);
    pushAddress(&st, p1);
    pushAddress(&st, p2);
    pushAddress(&st, p3);
    return st;
}

int parserS(char x[], int i){
    Stack st;
    st=makestackS1();
    int r;
    r=i;
    int s;
    s=0;
    address p;
    p= st.top;
    while(p!=NULL&&p->info==x[r]){
        r=r-1;
        p=p->next;
    }
    if(p==NULL){
         s=1;
    }else{
        pop(&st);
        st=makestackS2();
         r=i;
        p= st.top;
        while(p!=NULL&&p->info==x[r]){
            r=r-1;
            p=p->next;
        }
        if(p==NULL){
            s=1;
        }else{
                pop(&st);
                st=makestackS3();
                 r=i;
                p= st.top;
                while(p!=NULL&&p->info==x[r]){
                    r=r-1;
                    p=p->next;
                }
                if(p==NULL){
                    s=1;
                }else{
                        pop(&st);
                        st=makestackS4();
                         r=i;
                        p= st.top;
                        while(p!=NULL&&p->info==x[r]){
                            r=r-1;
                            p=p->next;
                        }
                        if(p==NULL){
                            s=1;
                        }else{
                                pop(&st);
                                st=makestackS5();
                                 r=i;
                                p= st.top;
                                while(p!=NULL&&p->info==x[r]){
                                    r=r-1;
                                    p=p->next;
                                }
                                if(p==NULL){
                                    s=1;
                                }
                        }

                }

        }

    }
    pop(&st);
    return s;
}

int parserSverpar(char x[], int i){

    Stack st;
    st=makestackS1();
    int r;
    r=i;
    int s;
    s=0;
    address p,q;
    p= st.top;
    q=alokasi('k');
    pushAddress(&st,q );
    if(x[1]='k'){

    }
}
int parserP(char x[], int i){
    Stack st;
    st=makestackP1();
    int r;
    r=i;
    int s;
    s=0;
    address p;
    p= st.top;
    while(p!=NULL&&p->info==x[r]){
        r=r-1;
        p=p->next;
    }
    if(p==NULL){
         s=1;
    }else{
        pop(&st);
        st=makestackP2();
         r=i;
        p= st.top;
        while(p!=NULL&&p->info==x[r]){
            r=r-1;
            p=p->next;
        }
        if(p==NULL){
            s=1;
        }else{
                pop(&st);
                st=makestackP3();
                 r=i;
                p= st.top;
                while(p!=NULL&&p->info==x[r]){
                    r=r-1;
                    p=p->next;
                }
                if(p==NULL){
                    s=1;
                }else{
                        pop(&st);
                        st=makestackP4();
                         r=i;
                        p= st.top;
                        while(p!=NULL&&p->info==x[r]){
                            r=r-1;
                            p=p->next;
                        }
                        if(p==NULL){
                            s=1;
                        }else{
                                pop(&st);
                                st=makestackP5();
                                 r=i;
                                p= st.top;
                                while(p!=NULL&&p->info==x[r]){
                                    r=r-1;
                                    p=p->next;
                                }
                                if(p==NULL){
                                    s=1;
                                }
                        }

                }

        }

    }
    pop(&st);
    return s;
}
int parserK(char x[], int i){
    Stack st;
    st=makestackK1();
    int r;
    r=i;
    int s;
    s=0;
    address p;
    p= st.top;
    while(p!=NULL&&p->info==x[r]){
        r=r-1;
        p=p->next;
    }
    if(p==NULL){
         s=1;
    }else{
        pop(&st);
        st=makestackK2();
         r=i;
        p= st.top;
        while(p!=NULL&&p->info==x[r]){
            r=r-1;
            p=p->next;
        }
        if(p==NULL){
            s=1;
        }else{
                pop(&st);
                st=makestackK3();
                 r=i;
                p= st.top;
                while(p!=NULL&&p->info==x[r]){
                    r=r-1;
                    p=p->next;
                }
                if(p==NULL){
                    s=1;
                }else{
                        pop(&st);
                        st=makestackK4();
                         r=i;
                        p= st.top;
                        while(p!=NULL&&p->info==x[r]){
                            r=r-1;
                            p=p->next;
                        }
                        if(p==NULL){
                            s=1;
                        }else{
                                pop(&st);
                                st=makestackK5();
                                 r=i;
                                p= st.top;
                                while(p!=NULL&&p->info==x[r]){
                                    r=r-1;
                                    p=p->next;
                                }
                                if(p==NULL){
                                    s=1;
                                }
                        }

                }

        }

    }
    pop(&st);
    return s;
}
int parserO(char x[], int i){
    Stack st;
    st=makestackO1();
    int r;
    r=i;
    int s;
    s=0;
    address p;
    p= st.top;
    while(p!=NULL&&p->info==x[r]){
        r=r-1;
        p=p->next;
    }
    if(p==NULL){
         s=1;
    }else{
        pop(&st);
        st=makestackO2();
         r=i;
        p= st.top;
        while(p!=NULL&&p->info==x[r]){
            r=r-1;
            p=p->next;
        }
        if(p==NULL){
            s=1;
        }else{
                pop(&st);
                st=makestackO3();
                 r=i;
                p= st.top;
                while(p!=NULL&&p->info==x[r]){
                    r=r-1;
                    p=p->next;
                }
                if(p==NULL){
                    s=1;
                }else{
                        pop(&st);
                        st=makestackO4();
                         r=i;
                        p= st.top;
                        while(p!=NULL&&p->info==x[r]){
                            r=r-1;
                            p=p->next;
                        }
                        if(p==NULL){
                            s=1;
                        }else{
                                pop(&st);
                                st=makestackO5();
                                 r=i;
                                p= st.top;
                                while(p!=NULL&&p->info==x[r]){
                                    r=r-1;
                                    p=p->next;
                                }
                                if(p==NULL){
                                    s=1;
                                }
                        }

                }

        }

    }
    pop(&st);
    return s;
}

