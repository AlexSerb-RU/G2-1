#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
   short M = 0, D = 0; //месяц, день
   setlocale(0, "");
   printf_s("Введите M, D: ");
   scanf_s("%d %d", &M, &D);
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
