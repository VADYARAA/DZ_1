#include <iostream>
#include "Complex.h"

int main()
{
	Complex a{ 8, 24 };
	Complex b{ 4, 6 };
	Complex::print(a.sum(b));
	cout << "\n";
	Complex::print(a.raz(b));
	cout << "\n";
	Complex::print(a.pr(b));
	cout << "\n";
	Complex::print(a.del(b));
}