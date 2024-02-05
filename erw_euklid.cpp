#include <iostream>
#include <vector>
//#include <iomanip>

int euklid(int a, int n)
{
	std::vector<int> i_feld;
	std::vector<int> n_feld( {a} );
	std::vector<int> a_feld( {n%a} );
	std::vector<int> q_feld( {n/a} );
//	int r;
	
	for(int i = 0; a_feld.back()>0; i++)
	{
		i_feld.push_back( i );
														//r = n%a;
		n_feld.push_back( a_feld.at(i) );				//n = a;
		a_feld.push_back( n_feld.at(i)%a_feld.at(i) );	//a = r;
		
		std::cout << "\n" << i+1 << " | " << n_feld.at(i) << " " << a_feld.at(i);
	}
	
	if(n_feld.back() == 1)
	{
		//Erweiterung coming soon, please wait :D :3 <3 >:3 :) (: 8) B-) ;) ;3 :/ :| :0 D: :c :S >_< uwu :* [ò_ó] xD Ü :Q 

		
/*		i_feld.pop_back();

		
		{
			i_feld.resize( i_feld.size()-1 );
		}*/
	}
	
	std::cout << "\nggT = ";
	return n_feld.back();
}




int main()
{
	int a;
	int n;
	
	
	
	std::cout << "Eingabe n, a (ganze Zahlen) ";
	std::cin >> n >> a;
	std::cout << "Größter gemeinsamer Teiler: " << euklid(a,n) << std::endl;
}
