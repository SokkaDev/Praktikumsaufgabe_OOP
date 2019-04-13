//equals CEntry.hpp

#ifndef B5_HPP_
#define B5_HPP_

#include <string>

class CEntry {
public : CEntry();
virtual ~CEntry();
void setSymbol(std::string symbol);
const std::string& getSymbol() const;
static unsigned int getNumber();
private: std::string m_symbol;
static unsigned int m_number;
};


#endif /* B5_HPP_ */
