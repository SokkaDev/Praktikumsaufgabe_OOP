
#ifndef CDOUBLEHASHING_HPP_
#define CDOUBLEHASHING_HPP_

/*!
 *
 */
class CDoubleHashing {
public:
    static CDoubleHashing& getInstance();
    unsigned int hash(unsigned int I, unsigned int J,unsigned int dict_size,unsigned int attempt);


private:
	CDoubleHashing();
	CDoubleHashing(const CDoubleHashing& other);
	CDoubleHashing operator=(const CDoubleHashing& other);
	static CDoubleHashing m_instance;

};

#endif /* CDOUBLEHASHING_HPP_ */
