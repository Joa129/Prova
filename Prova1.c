#include <stdio.h>
int somar(int v) {
    if (v % 2 == 2) return ( v + somar);
    else  return v;
    
}
void main(){
    int resul;
    for (int v = 2; v <= 20; v++) {
        if (v % 2 == 0) { 
            resul = 2+4+6+8+10+12+14+16+18+20;
           printf("Numero Par: %d\n", somar(v));
           
       } else {
            printf("%d\n", v);
        }
    }
    printf ("\n Resultado da soma dos Numeros Pares: %d\n", resul);
}
