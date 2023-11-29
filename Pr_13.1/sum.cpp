//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// файл реалізації функції

#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // підключили зовнішні оголошення змінних
#include "dod.h"


using namespace nsDod;
using namespace nsVar;


int nsSum::sum() {
	n = 0;
	a = 1;
	s = a;
	do {
		n++;
		dod(); // виклик процедури обчислення доданку
		s += a;
	} while (fabs(a) >= e);

	return s;
}