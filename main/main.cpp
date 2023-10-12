#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
   short D = 0, M = 0; //день, месяц
   setlocale(0, "");
   printf_s("Введите D, M: ");
   scanf_s("%d %d", &D, &M);
   switch (D)
   {
   case 28:
      printf_s(M == 2 ? "День: 1, месяц: 3" : "День: 29, месяц: %d", D);
      break;
   case 30:
      if (M == 4 || M == 6 || M == 9 || M == 11)
      {
         M++;
         D = 1;
      }
      else
         D++;
      printf_s("День: %d, месяц: %d", D, M);
      break;
   case 31:
      printf_s(M != 12 ? "День: 1, месяц: %d" : "День: 1, месяц: 1", M + 1);
      break;
   default:
      printf_s("День: %d, месяц: %d", D + 1, M);
   }
   return 0 * _getch();
}
