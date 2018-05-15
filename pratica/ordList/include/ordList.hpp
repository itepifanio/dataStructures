#ifndef _ORDLIST_HPP_
#define _ORDLIST_HPP_
#include "../helpers/buscaBinaria.hpp"
#include <iostream>

template <class T>

class OrdList{
	public:
		T *ordList;
		int index;
		OrdList();
		~OrdList();
		void add(T item);
		bool find(T item);
		void remove(T item);
		void show();

};

template <class T>
OrdList<T>::OrdList(){
	// Default new [10]
	this->ordList = (T*)malloc(sizeof(T)*10);
	this->index = 0;
}

template <class T>
OrdList<T>::~OrdList(){

}

template <class T>
void OrdList<T>::add(T item){
	this->ordList[this->index] = item;
	index++;
}

template <class T>
void OrdList<T>::show(){
	for(int i = 0; i < this->index; i++){
		std::cout << this->ordList[i] << std::endl;
	}
}

template <class T>
bool OrdList<T>::find(T item){
	buscaBinaria(this->ordList, item, 10);
}

#endif
