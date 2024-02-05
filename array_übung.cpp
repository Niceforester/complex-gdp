#include<iostream>
#include<array>

int main()
{
	std::array< int,5 > feld;
	std::cout<<"Das Feld hat "<<feld.size() <<" Elemente und ist";
	if( !feld.empty() )
		std::cout<<" nicht";
	else
		std::cout<<" auch";
	std::cout<<" leer!"<<std::endl;
	for( int i : feld)
		std::cout<<i<<"";
}
