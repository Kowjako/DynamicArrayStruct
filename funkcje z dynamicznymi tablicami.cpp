#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
long* losuj(int n){
 long* nowa_tablica = new long[n];
 for(int i=0; i<n ; i++)
 nowa_tablica[ i ] = rand()%100-50;
 return nowa_tablica;
}
void wyswietl(long* tablica, int rozmiar) {
for(int i=0;i<rozmiar;i++) {
    cout<<tablica[i]<<" ";
}
cout<<endl;
}
bool usun(long* &tablica,int &rozmiar) { /tablica przekazuje sie przez wskaznik dlatego tutaj * a & bo chcemy uzyc typ referencyjny bo zmieniamy te tablice
int dodatnie = 0;
for(int i=0;i<rozmiar;i++) {
    if(tablica[i]>0) dodatnie++;
}
long* tablica2 = new long[dodatnie];
if(tablica2==NULL) return false;
int j = 0;
for(int i=0;i<rozmiar;i++) {
    if(tablica[i]>0) {
        tablica2[j]=tablica[i];
        j++;
    }
}
tablica = tablica2;
rozmiar = j;
}
int main()
{
    long* tablica = losuj(10);
    wyswietl(tablica,10);
    int sizee = 10;
    usun(tablica,sizee);
    wyswietl(tablica,sizee);
    return 0;
}
