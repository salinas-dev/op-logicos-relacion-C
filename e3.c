#include <stdio.h>
#include <stdlib.h>


/*
Decidir si con los valores:

Los siguientes enunciados son falsos o verdaderos:

Ejercicio
int w = 9;
int x = 3;
int y = 7;
int z = -2;

1) x < y AND w > z
2) x >= w XOR z == y
3) y <= x OR x != w
4) w == 9 XOR x == 3
5) y > z AND z < x
6) NOT w != 9

*/

int main(){

int w=9;
int x=3;
int y=7;
int z=-2;

    printf ("El numero es: %d \n", x < y & w > z);
    printf ("El numero es: %d \n", x >= w ^ z == y);
    printf ("El numero es: %d \n", y <=x || x != w);
    printf ("EL numero es: %d \n", w == 9 ^ x == 3);
    printf ("El numero es: %d \n", y > z & z < x);
    printf ("EL numero es: %d \n", !w != 9);

 return 0;
}