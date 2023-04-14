/*--------------------------------------------
 * Dato de Entrada: numero (int)  numero >10
 * Dato de Salida:  sgtePrimo, anteriorPrimo
 --------------------------------------------*/


#include <iostream>
#include "UFunciones.h"
using namespace std;

int main()
{
   int numero;

   do{
       cout << "Numero <mayor a 10 > : ";
       cin >> numero;
   }while(numero<=10);

   cout << "\n";
   cout << "El siguiente numero primo es: " << sgtePrimo(numero) << "\n";
   cout << "El anterior numero primo  es: " << anteriorPrimo(numero) << "\n";
    return 0;
}
