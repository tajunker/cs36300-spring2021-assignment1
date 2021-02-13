#include "Array.h"
#include <iostream>


void print(Array array_) {

	std::cout << 'TESTING ARRAY\n\n';

	std::cout << '[';

	for (int iterator = 0; iterator < array_.size(); iterator++) {

		std::cout << array_[iterator];

		if (iterator < ( array_.size() - 1 ) )

			std::cout << ',';

	}

	std::cout << "] \n";

}


int main (int argc, char * argv []) {
 	
 	Array testingArray(10, 'z');

 	print(testingArray);


}
