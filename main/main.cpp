#include <conio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
   short m = 0, d = 0; //month, day
   setlocale(0, "");

   printf_s("Ââåäèòå m, d: ");
   scanf_s("%d %d", &m, &d);

   switch (d) {
   case 28:
      printf_s(m == 2 ? "day: 1, month: 3" : "day: 29, month: %d", d);
   case 30:
      printf_s(m == 4 || m == 6 || m == 9 || m == 11 ? "day: 1, month: %d" : "day: %d, month: %d", m, d + 1, m);
   default:
      printf_s("");

   }

   return 0 * _getch();
}
