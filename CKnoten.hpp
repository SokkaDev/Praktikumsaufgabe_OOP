

#ifndef CKNOTEN_HPP_
#define CKNOTEN_HPP_
#include "b5.hpp"

/*!
 *
 */
class CKnot : public CEntry{
public:
	CKnot();
	virtual ~CKnot();
	int getParent() const;
	void setParent(int parent);
private:
	int m_parent;
};

#endif /* CKNOTEN_HPP_ */
