#include<iostream>
using namespace std;
const double  pi=3.14;

class Circle
{
public:
	double r;
	double calculateZC()
	{
		return 2 * pi*r;;
	}
	
};
int main()
{
	Circle a ;
	a.r = 10;
	cout << a.calculateZC() << endl;
	cout << sizeof(a.r) << endl;
	system("pause");
	return 0;
}