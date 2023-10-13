#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
   char D = 0, M = 0;  // день, месяц
   setlocale(0, "");
   printf_s("Введите D, M: ");
   scanf_s("%hd %hd", &D, &M);
   switch (D)
   {
      case 28: (M == 2 ? D = 1, M : D)++;
      case 30: (M == 4 || M == 6 || M == 9 || M == 11 ? D = 1, M : D)++;
      case 31: (M == 12 ? M = D : M++, D) = 1;
      default: (D == 29 || D < 28 ? D++ : M = M);
   }
   printf_s("day: %d, month: %d", D, M);
   return 0 * _getch();
}
