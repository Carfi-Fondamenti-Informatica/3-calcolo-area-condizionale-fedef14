#include <iostream>
#include <math.h>
using namespace std;

int main() {
   float a = 0;
   float b = 0;
   int opzione = 0;
   float area = 0;
   
   cin >> a >> b >> opzione;
   
   switch(opzione){
      case 0:
         area = (a*b)/2;
         break;
      case 1:
         area = pow(a,2);
         break;
      case 2:
         area = a*b;
         break;
      default: 
         cout << "opzione non valida" << endl;
   }
   cout << area << endl;
   return 0;
}
