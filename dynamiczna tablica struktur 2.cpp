#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
struct Towar {
char nazwa[20];
int cena,ilosc;
};
void wczytaj(Towar * p) {
for(int i=0;i<3;i++)
    cin>>p[i].cena>>p[i].ilosc>>p[i].nazwa;
}
void wyswietl(Towar * p, int n) {
    for(int i=0;i<n;i++) cout<<p[i].cena<<" "<<p[i].ilosc<<" "<<p[i].nazwa;
    cout<<endl;
}
void usun(Towar * &p, int pos) {
    Towar* buf = (Towar*)calloc(2,sizeof(Towar));
    int j = 0;
    for(int i=0;i<3;i++) {
        if(i==pos) continue;
        else
        {
          buf[j] = p[i];
          j++;
        }
    }
    p = buf;
    free(buf);
}
void dodaj(int liczba, int * p, int n) {
    p[n] = liczba;
    n++;
}
int main()
{
    int N = 0;
    int* tablica = (int*)calloc(5,sizeof(int));
    dodaj(3,tablica,N);
    Towar* tab = (Towar*)calloc(3,sizeof(Towar));
    wczytaj(tab);
    system("cls");
    wyswietl(tab,3);
    return 0;
}
