/*
Student: Andrey Tsatsyn
Level: begginer
Course: C Programming (Absolute begginer's guide). Greg Perry, Dean Miller. (book)
File's description: strings
of C lang. Chapter 6 of book.
Telegram: https://t.me/TsatsynAV
E-mail: tsatsynav@yandex.ru
GitHub: https://github.com/tsatsynav
IDE: Code::Blocks
OS Name: Debian 12 (bookworm)
OS Type: 64-bit
CPU: 12th Gen Intel Core i5-1235U x 12
CDE: Xfce
*/

//Clang don't have variables of strings.
//Strings should be input in double quotes.
//In end of every string C add special binary null (null-symbol, 0, ASCII 0, \0)
//You never saw \0 but it in memory. C add \0 automaticaly
//'0' - it's symbol of null (zero). '\0' - binary null.
//We have a string: "news". In memory "news' takes 5 bytes, because: 'n''e''w''s''\0'.
//Length of string - always quantity of characters without binary null.
//Character array: char name[];

#include <stdio.h>
#include <string.h>

int main() {
  char kid1[12];
  char kid2[] = "Maddie";
  char kid3[7] = "Andrew";
  char hero1[] = "Batman";
  char hero2[34] = "Spiderman";
  char hero3[25];
  kid1[0] = 'K';
  kid1[1] = 'a';
  kid1[2] = 't';
  kid1[3] = 'i';
  kid1[4] = 'e';
  kid1[5] = '\0';
  strcpy(hero3, "The Incredible Hulk");
  printf("%s\'s favorite hero is %s.\n", kid1, hero1);
  printf("%s\'s favorite hero is %s.\n", kid2, hero2);
  printf("%s\'s favorite hero is %s.\n", kid3, hero3);

  return 0;
}
