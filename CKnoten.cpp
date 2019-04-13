

#include "CKnoten.hpp"

CKnot::CKnot():m_parent(0) {
	// TODO Auto-generated constructor stub

}

CKnot::~CKnot() {
	// TODO Auto-generated destructor stub
}

void CKnot::setParent(int parent ){
	m_parent=parent;
}

int CKnot::getParent() const
{
	return m_parent;
}
