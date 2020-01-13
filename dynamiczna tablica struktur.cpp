#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct people{
 int Age;
 char Name[20];
 char Surname[20];
 bool student;
};
void Wczytaj (people* &p1, int rozmiar) {
people * tab = new people[rozmiar];

for(int i=0;i<rozmiar;i++)
{
    cin>>tab[i].Age>>tab[i].Name>>tab[i].Surname>>tab[i].student;
}
p1 = tab;
delete[] tab;
}
void Wyswietl (people* p1) {
for(int i=0;i<3;i++)
{
    cout<<p1[i].Age<<" "<<p1[i].Name<<" "<<p1[i].Surname<<" "<<p1[i].student;
}
cout<<endl;
}
int main()
{
    people* arr = (people*)calloc(2,sizeof(people));
    Wczytaj(arr,3);
    Wyswietl(arr);
    delete[] arr;
    return 0;
}
