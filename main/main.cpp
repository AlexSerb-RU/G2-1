#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
   char D = 0, M = 0;  // день, месяц
   setlocale(0, "");
   printf_s("Введите D, M: ");
   scanf_s("%hhd %hhd", &D, &M);
   switch (D)
   {
      case 28: (M == 2 ? D - 27, M : D)++; break;
      case 31: (M == 12 ? M - 11, D : M++, D) - 30; break;
      case 30: (M == 4 || M == 6 || M == 9 || M == 11 ? D - 29, M : D)++; break;
      default: D++;
   }
   printf_s("День: %d, Месяц: %d", D, M);
   return 0 * _getch();
}
