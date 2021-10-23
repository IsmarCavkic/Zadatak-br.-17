#include <iostream>
using namespace std;

// Unose se cijeli brojevi sve dok se ne unese nula, izračunati i ispisati prosjek parnih brojeva.

int main() {
  int a = 0;
  float i = 0;
  int b = 1;
  int x;

  cout<<"Unesite jedan cijeli broj: ";
  cin>> x;

  if (x!=0){
    while (b != 0){
      if (x==0){
       cout<<"Prosjek parnih brojeva je "<< a/i;
       break;
      }
      else if (x % 2 == 0){
        a = a + x;
        i++;
        cout<<"Unesite jedan cijeli broj: ";
        cin>> x;
      }
      else {
        cout<<"Unesite jedan cijeli broj: ";
        cin>> x;
      }
    }
  }
  else
   cout<<"Program nije moguće izvršiti jer je prvi unijeti broj 0";

return 0;
}