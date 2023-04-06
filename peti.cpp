#include <iostream>
#include <vector>
#include <algorithm>



int main(int argc, char *argv[])
{
  int broj;
  std::vector<int>brojevi;
  std::cout << "Unesite cijeli broj: " << std::endl;
  std::cin>>broj;
int suma=0, proizvod=0;

int cifra;

while(broj>0){


cifra=broj%10;
brojevi.push_back(cifra);
broj /=10;


}

//
for(int& a : brojevi){
  std::cout << a;
suma+=a;
proizvod*=a;


}
std::cout  << std::endl;
std::cout << "Suma je:" <<suma << std::endl;
std::cout <<"Proizvod je: "<< proizvod << std::endl;

std::sort(brojevi.begin(), end(brojevi));

std::cout <<  "Najmanji je: \n "<< brojevi[0]<< "\n Najveci je: \n"<< brojevi[brojevi.size()-1] <<std::endl;


  return 0;
}
