//
// Created by mbermejo on 14/04/2023.
//

#include "UFunciones.h"


bool esPrimo(int num)
{ int divisor;

   if(num==1)
       return false;
   divisor=2;
   while(divisor<num and num % divisor!=0)
       divisor++;
   if(divisor==num)
       return true;
   else
       return false;
}



int  sgtePrimo(int numero)
{ int i=numero + 1;

    while(  !esPrimo(i))
        i++;
    return i;
}

int anteriorPrimo(int numero)
{ int i=numero-1;

    while(!esPrimo(i))
        i--;
    return i;

}