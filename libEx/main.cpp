#include <iostream.h>
#include "timer.h"


int main() {
   Timer t("Time for 32000 outstream operations: ");

   for (int i = 1; i < 32000;i++ ) {
		cout << i;
   }

   return 0;
}