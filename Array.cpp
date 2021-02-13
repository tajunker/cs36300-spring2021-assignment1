// $Id: Array.cpp 820 2011-01-17 15:30:41Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.


//Include header file
#include "Array.h"
#include <iostream>

//Global Variables
#define MAXIMUM_SIZE 10
#define ZERO 0



//Array constructor
Array::Array (void) 


	:

	data_(nullptr), 
	
	max_size_(MAXIMUM_SIZE), 
	
	cur_size_(ZERO) {


}







Array::Array (size_t length) 


	:

	data_(new char[length]),

	max_size_(length), 

	cur_size_(ZERO) {


}




Array::Array (size_t length, char fill) 


	:

	data_(new char[length]),

	max_size_(length), 

	cur_size_(ZERO) {


		this->fill(fill);

}




Array::Array (const Array & array) 
	

	:

	data_(new char[array.cur_size_]),

	max_size_(array.max_size_),

	cur_size_(array,cur_size_) {


		for (int iterator = 0; iterator < cur_size_; iterator++) {

			data_[iterator] = array[iterator];
   		
   		}


}




Array::~Array (void) {


	delete[] data_;


}




const Array & Array::operator = (const Array & rhs) {


	if (this == &rhs) {


		return *this;


	}


	if (this != &rhs) {


		this->resize(rhs.size());


		for (int iterator = 0; iterator < cur_size_; iterator++) {


			data_[iterator] = rhs[iterator]''

		}


	}

}




char & Array::operator [] (size_t index) {

	if (index >= this->cur_size_) {


		throw std::out_of_range("Error: Index is out of range/out of bounds.");


	}


	return this->data_[index];

}




const char & Array::operator [] (size_t index) const {


	if (index >= this->cur_size_) {


		throw std::out_of_range("Error: Index is out of range/out of bounds.");


	}


	return this->data_[index];



}




char Array::get (size_t index) const {


	if (index >= this->cur_size_) {


			throw std::out_of_range("Error: Index is out of range/out of bounds.");


	}


	return this->data_[index];


}




void Array::set (size_t index, char value) {


	if (index >= this->cur_size_) {


			throw std::out_of_range("Error: Index is out of range/out of bounds.");


	}


	return this->data_[index];


}




void Array::resize (size_t new_size) {


	if (new_size >= max_size_) {

		
		char *temp = new char[new_size];

    	
    	for  (int iterator = 0; iterator < cur_size_; iterator++) {
     		
     		temp[iterator] = data_[iterator];

     	}

    }


    cur_size_ = new_size;

    max_size_ = new_size;
    
    delete[] data_;
    
    data_ = temp;
   

   }


}




int Array::find (char chaar) const {

	int iterator = 0;

	while (iterator < cur_size_) {
    

    	if(ch == data_[iterator]){	
     	
     		return iterator;
    	
    	}
   
    	iterator++;
   }

}




int Array::find (char ch, size_t start) const {


	int iterator = start;


	while(iterator < cur_size_;) {

		
		if(ch == data_[iterator]){

			return iterator;

		}


		iterator++;


	}
    
   
}




bool Array::operator == (const Array & rhs) const {


	if (&rhs == this) {


		return true;


	}


	if (this->cur_size_ != rhs.cur_size_) {


		return false;


	}


	int iterator = 0;

	while ( iterator < this->cur_size_) {


		if (this->data_[iterator] != rhs.data_[iterator]) {

			return false;

		}


		iterator++;
	

	}
	

	return true;


}




bool Array::operator != (const Array & rhs) const {


	return !(*this == rhs);


}




void Array::fill (char ch) {


	int iterator = 0;


	while (iterator < cur_size_) {


		data_[iterator] = ch;

		iterator++;


	}


}




void Array::shrink (void) {


	resize(cur_size_);
  

}




void Array::reverse (void) {
  	

  	int iterator = 0;
  	int iterator2 = cur_size_;


  	while (iterator < iterator2) {


  		data_[iterator] = data_[iterator2];


  		iterator++;
  		iterator2--;


  	}



}




Array Array::slice (size_t begin) const {
  

	return this->slice(begin, cur_size_);


}




Array Array::slice (size_t begin, size_t end) const {

	int difference = 0;

	difference = end - begin;

	Array temp( difference );


	int iterator = 0;


	while (iterator < difference) {


		temp.set(iterator, data_[begin + iterator]);

		iterator++

	}


	retrun temp;



  
}



