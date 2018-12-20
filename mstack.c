#include <stdio.h>
#include "stack.c"

void main(){
    Stack st;
    char k1,k2,k3,k4;
    char y;
    char x[100],z[100];
    y='*';
    int i,s,r,p,o,k,l,m,n;
    k1='X';
    k2='X';
    k3='X';
    k4='X';
    i = 0;
    r=1;
    l=0;
    m=0;
    n=0;
    printf("=================================================\n");
    printf("    PROGRAM VALIDASI KALIMAT BAHASA INDONESIA    \n");
    printf("=================================================\n");
    printf(" NOTE : Tambahkan tanda titik (.) diakhir kalimat\n\n");
    printf(" Masukkan Kalimat : ");
    while (y != '.'){
        scanf("%c",&y);
        if((y==' '||y=='.')&& l==0){
            l=i;

        }
        if((y==' '||y=='.')&& (l<i&&m==0)){
            m=i;

        }
        if((y==' '||y=='.')&& (m<i&&n==0)&&l<i){
            n=i;


        }

        i=i+1;
        x[i]=y;
    }


    i=i-1;
    while(r<=l){
        printf("%c",x[r]);
        r=r+1;
        }
        if(parserS(x,l)==1){
            k1='S';
            printf(" Merupakan Subjek\n");
        }
        if(parserP(x,l)==1){
            k1='P';
            printf(" Merupakan Predikat\n");
        }
        if(parserO(x,l)==1){
            k1='O';
            printf(" Merupakan Objek\n");
        }
        if(parserK(x,l)==1){
            k1='K';
            printf(" Merupakan Keterangan\n");
        }
        if(k1=='X'){
            printf(" => Kata tidak ada didalam Token\n");
        }
        if(m!=0){
            r=l+2;
            while(r<=m){
            printf("%c",x[r]);
            r=r+1;
            }
            if(parserS(x,m)==1){
                k2='S';
                printf(" Merupakan Subjek\n");
            }
            if(parserP(x,m)==1){
                k2='P';
                printf(" Merupakan Predikat\n");
            }
            if(parserO(x,m)==1){
                k2='O';
                printf(" Merupakan Objek\n");
            }
            if(parserK(x,m)==1){
                k2='K';
                printf(" Merupakan Keterangan\n");
            }
            if(k2=='X'){
                printf(" => Kata tidak ada didalam Token\n");
            }
        }
        if(n!=0){
            r=m+2;
            while(r<=n){
            printf("%c",x[r]);
            r=r+1;
            }
            if(parserS(x,n)==1){
                k3='S';
                printf(" Merupakan Subjek\n");
            }
            if(parserP(x,n)==1){
                k3='P';
                printf(" Merupakan Predikat\n");
            }
            if(parserO(x,n)==1){
                k3='O';
                printf(" Merupakan Objek\n");
            }
            if(parserK(x,n)==1){
                k3='K';
                printf(" Merupakan Keterangan\n");
            }
            if(k3=='X'){
                printf(" => Kata tidak ada didalam Token\n");
            }
        }
        if(x[n+1]==' '){
                r=n+2;
                while(r<=i){
                printf("%c",x[r]);
                r=r+1;
                }
                if(parserS(x,i)==1){
                    k4='S';
                    printf(" Merupakan Subjek\n");
                }
                if(parserP(x,i)==1){
                    k4='P';
                    printf(" Merupakan Predikat\n");
                }
                if(parserO(x,i)==1){
                    k4='O';
                    printf(" Merupakan Objek\n");
                }
                if(parserK(x,i)==1){
                    k4='K';
                    printf(" Merupakan Keterangan\n");
                }
                if(k4=='X'){
                    printf(" => Kata tidak ada didalam Token\n");
                }
        }

        if((k1=='S'&& k2=='P')&&(k3=='O'&&k4=='K')){
            printf("\n================ Kalimat Valid ==================\n");
           }else if((k1=='S'&& k2=='P')&&(k3=='O'&&k4=='X')){
            printf("\n================ Kalimat Valid ==================\n");
           }else if((k1=='S'&& k2=='P')&&(k3=='K'&&k4=='X')){
            printf("\n================ Kalimat Valid ==================\n");
           }else if((k1=='S'&& k2=='P')&& (k3=='X'&&k4=='X')) {
            printf("\n================ Kalimat Valid ==================\n");
        }else{
             printf("\n============== Kalimat Tidak Valid ==============\n");
        }

    int c;
    printf("\nApakah anda ingin menulis kalimat lagi [1=Yes, 0=No]: ");
    scanf("%d", &c);
    if(c==1){
        system("cls");
        main();
    }
}


