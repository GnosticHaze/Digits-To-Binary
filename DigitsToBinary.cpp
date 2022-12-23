#include <iostream>

void digitsToBinary( unsigned num ) {
	if ( num > 1 ) {
		digitsToBinary( num / 2 );
	}
		
	std::cout << num % 2;
}


int main( int argc, char* arv[] ) {
	int num { 65 };
	std::cout << "Number: " << num << std::endl;
	std::cout << "Binary of " << num << " is " << " \n";
	digitsToBinary( 65 );

	std::cout << std::endl;

}