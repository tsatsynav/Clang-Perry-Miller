/*
Student: Andrey Tsatsyn
Level: begginer
Course: C Programming (Absolute begginer's guide). Greg Perry, Dean Miller. (book)
File's description: printf(), escape sequences, format specifiers
of C lang. Chapter 4 of book.
Telegram: https://t.me/TsatsynAV
E-mail: tsatsynav@yandex.ru
GitHub: https://github.com/tsatsynav
IDE: Code::Blocks
OS Name: Debian 12 (bookworm)
OS Type: 64-bit
CPU: 12th Gen Intel Core i5-1235U x 12
CDE: Xfce
*/

//Common format of printf() function:
//printf("control string", arguments);
//"control string" - required;
//arguments - optional;

//Escape sequences (управляющие последовательности):
// \n - new line;
// \a - audio signal;
// \b - backspace;
// \t - tab;
// \\ - output "\" symbol;
// \' - output single quotes;
// \" - output double quotes;

#include <stdio.h>

int main() {
  printf("Column A\tColumn B\tColumn C\n");
  printf("My Computer\'s Beep Sounds Like This: \a!\n");
  printf("\"Letz\bs fix that typo and then show the backslash ");
  printf("character \\\" she said\n\n\n\n\n");

  //Format Specifiers in C (path of them):
  // %d - for signed integer;
  // %f - for float;
  // %c - for character;
  // %s - for string;

  printf("%s %d %f %c\n\n\n\n\n", "Sam", 14, -8.76, 'X');

  //Point in floats:
  // %f, %.1f, %.2f, %.3f

  printf("%f, %.1f, %.2f, %.3f\n\n\n\n\n", 4.5678, 4.5678, 4.5678, 4.5678);

  //Example from book
  printf("Quantity\tCost\tTotal\n");
  printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
  printf("Too many spaces     \b\b\b\b can be fixed with the ");
  printf("\\%c Escape character\n", 'b');
  printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep");
  printf("a few beeps.\n\n\n");
  printf("%s %c", "You are kicking butt learning", 'C');
  printf("You just finished chapter %d.\nYou have finished", 4);
  printf("%.1f%c of the book.\n", 12.500, '%');
  printf("\n\nOne third equals %.2f or ", 0.333333);
  printf("%.3f or %.4f or ", 0.333333, 0.333333);
  printf("%.5f or %.6f\n\n\n", 0.333333, 0.3333333);
  printf("%%");

  return 0;
}







