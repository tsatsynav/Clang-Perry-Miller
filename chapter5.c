/*
Student: Andrey Tsatsyn
Level: begginer
Course: C Programming (Absolute begginer's guide). Greg Perry, Dean Miller. (book)
File's description: types, variables
of C lang. Chapter 5 of book.
Telegram: https://t.me/TsatsynAV
E-mail: tsatsynav@yandex.ru
GitHub: https://github.com/tsatsynav
IDE: Code::Blocks
OS Name: Debian 12 (bookworm)
OS Type: 64-bit
CPU: 12th Gen Intel Core i5-1235U x 12
CDE: Xfce
*/

//Types (path of them):

// char: character (signed) for symbol data, like 'X' or '%' or 'x' etc. Range of value -128 to 127
// int: integer (signed), like -1 or 1. Range of value -2,147,483,648 to 2,147,483,647
// float: float (signed), like -145.23 or .000005. Range of value 1.2E-38 to 3.4E+38
// double: float with double accuracy (signed). Range of value 1.7E-308 to 1.7E+308

//Length of variables: from 1 to 31 symbols.

//---global variables (not in function)
//---function { local variables}

#include <stdio.h>

int main() {
  //init variables
  char firstInitial, middleInitial;
  int quantityOfPencils;
  int quantityOfNotebooks;
  //cost variables
  float costOfPencil = .23;
  float costPfNotebook = 2.89;
  float costOfLunchbox = 4.99;
  //info variables for first children
  firstInitial = 'J';
  middleInitial = 'R';
  quantityOfPencils = 7;
  quantityOfNotebooks = 4;
  printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox.\n", firstInitial, middleInitial,
  quantityOfPencils, quantityOfNotebooks);
  printf("The total cost is $%.2f.\n\n", quantityOfPencils * costOfPencil + quantityOfNotebooks * costPfNotebook +
  costOfLunchbox);
  //info variables for second children
  firstInitial = 'A';
  middleInitial = 'J';
  quantityOfPencils = 10;
  quantityOfNotebooks = 3;
  printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox.\n", firstInitial, middleInitial,
  quantityOfPencils, quantityOfNotebooks);
  printf("The total cost is $%.2f.\n\n", quantityOfPencils * costOfPencil + quantityOfNotebooks * costPfNotebook +
  costOfLunchbox);
  //info variables for second children
  firstInitial = 'M';
  middleInitial = 'T';
  quantityOfPencils = 9;
  quantityOfNotebooks = 2;
  printf("%c%c needs %d pencils, %d notebooks, and 1 lunchbox.\n", firstInitial, middleInitial,
  quantityOfPencils, quantityOfNotebooks);
  printf("The total cost is $%.2f.\n\n", quantityOfPencils * costOfPencil + quantityOfNotebooks * costPfNotebook +
  costOfLunchbox);

  return 0;
}



