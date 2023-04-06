#include <bitset>
#include <iostream>

// Poziv funkcije printBits rezultovace sa ispisom
// proslijedjenog broja u binarnoj formi.
//
// Primjer:
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// unsigned short s = 5;
// printBits(s);
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// Ispis:
// 0000000000000101
// 
void printBits(unsigned short reg) {
  std::bitset<16> bits(reg);
  std::cout << bits << std::endl;
}


int main() {


short registar=0, num=0, registar1=0, registar2=0, izbor;

std::cout << "Izaberi registar: " << std::endl;
while(std::cin>>izbor){


if(izbor==1){
  registar=registar1;
break;}
else if (izbor==2){
  registar=registar2;
break;
}
else{
  std::cout << "Nevalidan unos" << std::endl;
std::cout << "Izaberi registar:" << std::endl;  //jer ce on svakako ponovno na petlju
}

}




  while(true) {



  std::cout << "1. Print register" << std::endl;
  std::cout << "2. Set bit in register" << std::endl;
  std::cout << "3. Reset bit in register" << std::endl;
  std::cout << "4. Exit" << std::endl;
  std::cout << "Enter option: ";
  int option;
  std::cin >> option;


while(true){
    if (option == 1) {
      //
      // Vas kod ovdje
      printBits(registar);
      std::cout  << std::endl;

      break;
      //
    } else if (option == 2) {
      //
      std::cout << "Enter bit number: ";
      std::cin>>num;
     registar |= (1UL <<(num)); 
      std::cout << "New register value: " << registar<<std::endl;
      printBits(registar);
      std::cout <<std::endl;
      break; //vraca se u petlju,na njen pocetak
      // Vas kod ovdje
      //
    } else if (option == 3) {
 std::cout << "Enter bit number: ";
      std::cin>>num;
registar &= ~(1UL <<(num));
  std::cout << "New register value: " << registar<<std::endl;
      printBits(registar);
      std::cout <<std::endl;
      break;

      //
      // Vas kod ovdje
      //
    } else if (option == 4) {
      exit(47);
 std::cout << std::endl;
    }
    
   
  }


std::cout << "Da li zelis dalje -> 1" << std::endl;
std::cout << "Zamjnea -> 2" << std::endl;
std::cout << "Stvarno izadji -> 3" << std::endl;
while(std::cin>>option){

if(option==1){
break;}

else if(option==2)
{

}
} 
}
  return 0;
}
