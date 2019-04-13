

#ifndef B7_HPP_
#define B7_HPP_

#include <iostream>
#include <exception>
#include <string>
#include "b6.hpp"
using namespace std;



template <typename T, unsigned int N>
class CArray{
public:
	CArray();
	CArray(const CArray<T,N>& other);
	virtual ~CArray();
T& operator[](unsigned int index);


private:
T* m_entries;
};

template <typename T, unsigned int N>
CArray<T,N>::CArray(): m_entries(new T[N])   {

}
////flach
//template<typename T,unsigned int N>
//CArray<T,N>::CArray(const CArray<T,N>& other): m_entries(other.m_entries){
//
//}
//Tief
template<typename T,unsigned int N>
CArray<T,N>::CArray(const CArray<T,N>& other): m_entries(new T[N]){
	for(int i=0;i<N;i++){
		m_entries[i]=other.m_entries[i];
	}

}
template <typename T, unsigned int N>
CArray<T,N>::~CArray()   {
	if(m_entries!=0)
	{
		delete[] m_entries;
		m_entries=0;
	}
}

template <typename T, unsigned int N>
T& CArray<T,N>::operator[](unsigned int index)  {
	if(index>=N){
		throw XOutOfBound("Index zu gross");
	}
	return m_entries[index];
}

#endif /* B7_HPP_ */
