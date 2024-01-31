# include <stdio.h>
# include <stdlib.h>

/*
Imprimir los valores de:
P = true
Q = false
R = true
T = false


Ejercicio:

P y R
Q o T
P y Q o R y T
P xor Q xor R xor T
not Q y not T
not not not P

*/

int main (){
    int P=1;
    int Q=0;
    int R=1;
    int T=0;
    printf ("%d\n",P & R);
    printf ("%d\n",Q || T);
    printf ("%d\n",P & Q|| R & T);
    printf ("%d\n",P^Q^R^T);
    printf ("%d\n",!Q & !T);
    printf ("%d\n",!!! P);

    return 0;
}
