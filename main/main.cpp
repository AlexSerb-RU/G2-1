#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
   short m = 0, d = 0; //month, day
   setlocale(0, "");

   printf_s("Введите m, d: ");
   scanf_s("%d %d", &m, &d);

   switch (d)
   {
   case 28:
      printf_s(m == 2 ? "day: 1, month: 3" : "day: 29, month: %d", d);
      break;
   case 30:
      if (m == 4 || m == 6 || m == 9 || m == 11)
      {
         m++;
         d = 1;
      }
      else
         d++;
      
      printf_s("day: %d, month: %d", d, m);
      break;
   case 31:
      printf_s(m != 12 ? "day: 1, month: %d" : "day: 1, month: 1", m + 1);
      break;
   default:
      printf_s("day: %d, month: %d", d + 1, m);
   }

   return 0 * _getch();
}
