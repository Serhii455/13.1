#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_13.1/sum.h" // Шлях до вашого файлу sum.h
#include "../Pr_13.1/var.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(SumTest)
	{
	public:
		TEST_METHOD(TestSumFunction)
		{
			// Arrange (підготовка тесту)
			x_p = -1.0; // Інші значення для тестування
			x_k = 0.5;
			dx = 0.05;
			e = 0.01;

			// Act (виклик функції, яку тестуємо)
			double actual = sum(); // Виклик функції sum()

			// Assert (перевірка результату)
			Assert::IsTrue(!isnan(actual) && !isinf(actual)); // Перевірка на валідність результату

			// Перевірка на валідність результату в межах очікуваного
			Assert::IsTrue(actual >= 0.68 && actual <= 0.69);
		}
	};
}
