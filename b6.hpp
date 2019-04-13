#ifndef B6_HPP_
#define B6_HPP_

#include <iostream>
#include <exception>
#include <string>

using namespace std;


class XOutOfBounds{
public:
	XOutOfBounds(const char* msg);
	virtual ~XOutOfBounds() throw();
	const char* what() const throw();
private:
	string m_msg;
};



#endif /* B6_HPP_ */
