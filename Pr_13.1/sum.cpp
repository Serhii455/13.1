//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// ���� ��������� �������

#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
#include "dod.h"


using namespace nsDod;
using namespace nsVar;


int nsSum::sum() {
	n = 0;
	a = 1;
	s = a;
	do {
		n++;
		dod(); // ������ ��������� ���������� �������
		s += a;
	} while (fabs(a) >= e);

	return s;
}