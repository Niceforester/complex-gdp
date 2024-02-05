#include <iostream>
#include <vector>
//#include <iomanip>

int euklid(int a, int n)
{
	
	int r;
	do
	{
		
		r = n%a;
		n = a;
		a = r;
	//	std::cout << "n = " << n << std::setw(8) << "a = " << a << "\n";
	}while(r > 0);
	return n;
}


int main()
{
	int a;
	int n;
	
	
	
	std::cout << "Eingabe n, a (ganze Zahlen) ";
	std::cin >> n >> a;
	std::cout << "Größter gemeinsamer Teiler: " << euklid(a,n) << std::endl;
}
