
#ifndef B4_HPP_
#define B4_HPP_

#include <iostream>
#include <string.h>

using namespace std;

class CEntry {
private: string m_symbol;

public :
CEntry();
virtual ~CEntry();
void setSymbol(string symbol);
const string& getSymbol() const;
};

class CSwapper{
public :
	CSwapper();
	~CSwapper();
	void swap_byReference(int& a,int& b);


private:
	int a;
	int b;
};


#endif /* B4_HPP_ */
