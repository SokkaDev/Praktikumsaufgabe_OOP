



#include <iostream>
#include "b7.hpp"
#include "b6.hpp"

using namespace std;


XOutOfBounds::XOutOfBounds(const char* msg): m_msg(msg){}
XOutOfBounds::~XOutOfBounds() throw(){

}
const char* XOutOfBounds::what() const throw(){
	return m_msg.c_str();
}
