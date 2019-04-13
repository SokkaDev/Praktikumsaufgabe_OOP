#include <iostream>
#include "b4.hpp"

using namespace std;

CEntry::CEntry():m_symbol(""){

}

CEntry::~CEntry(){}

void CEntry::setSymbol(string symbol){
	m_symbol=symbol;
}


const string& CEntry::getSymbol() const
{
	return m_symbol;
}

CSwapper::CSwapper(): a(2), b(3){}
CSwapper::~CSwapper(){}

void CSwapper::swap_byReference(int& a, int& b)
{
	int temp = a;
	a=b;
	b=temp;
}
