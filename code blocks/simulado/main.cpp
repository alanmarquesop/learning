#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct itens{
    int cod;
    string tec;
    double met;
};

//bool vendaTecido(int vi[],int qtd, ){


//}

int main (){
 ifstream arquivo;
 arquivo.open("estoque.txt");

 int codD = 0;
 itens vet[6];
 double metD=0;

 cout<<"Loja de Tecidos Bela Estampa\n";
 cout<<"Digite o codigo do tecido: ";
 cin>>codD;
 cout<<"Digite a metragem desejada: ";
 cin>>metD;

 for (int i=0;i<6;i++)
 arquivo>>vet[i].cod>>vet[i]>>vet[i].tec>>vet[i].met;
 cout <<vet[4].tec;
}
