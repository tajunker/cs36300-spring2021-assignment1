#include "Array.h"
#include <iostream>


void print(Array array);


int main (int argc, char * argv []) {
 	
 	Array testingArray(10, 'z');

 	print(testingArray);

 	return 0;


}


void print(Array array) {

	std::cout << 'TESTING ARRAY\n\n';

	std::cout << '[';

	for (int iterator = 0; iterator < array.size(); iterator++) {

		std::cout << array[iterator];

		if (iterator < ( array.size() - 1 ) )

			std::cout << ',';

	}

	std::cout << "] \n";

}