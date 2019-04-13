//! \file CCounter.hpp
#pragma once
#include <list>

//! Klasse CCounter zum Setzen, Inkrementieren und Vergleichen von Z�hlerst�nden
/*!
 * CCounter() ist der parameterlose Konstruktor
 * ~CCounter() ist der Destruktor
 * int getValue() liefert den Z�hlerstand
 * void setValue(int) setzt den Z�hlerstand
 * void count() inkrementiert den Z�hlerstand
 * bool operator<(CCounter&) pr�ft, ob Argument gr��eren Z�hlerstand besitzt
 * bool operator>(CCounter&)
 *
 * int m_value ist die private Membervariable f�r den Z�hlerstand.
 * Wir verwenden die Konvention, dass der Namen privater Membervariablen mit m_ beginnt.
 */
class CCounter
{
public:
	/*!
	 * Deklaration des parameterlosen Konstruktors.
	 */
	CCounter();
	/*!
	 * Destruktor von CCounter
	 */
	virtual ~CCounter();
	/*!
	 * Gib den Wert der Z�hlervariable aus.
	 * @return  enth�lt den Wert der Z�hlervariable m_value.
	 */
	int getValue() const;
	/*!
	 * Setze die Z�hlervariable.
	 * @param value    Die Z�hlervariable m_value wird auf den Wert der Parametervariable value gesetzt.
	 */
	void setValue(int value);
	/*!
	 * Inkrementiert den Z�hlerstand um 1
	 */
	virtual void count();
	/*!
	 * Pr�ft, ob der Z�hlerstand kleiner ist, als der Eingabeparameter.
	 * Die Memberfunktion operator<() steht f�r den Operator < .
	 * @param other  ist der Eingabeparameter.
	 * @return ist wahr, falls der Z�hlerstand kleiner als der Eingabeparameter ist.
	 */
	bool operator<(const CCounter& other) const;
	/*!
	 * Pr�ft, ob der Z�hlerstand gr��er ist, als der Eingabeparameter.
	 * Die Memberfunktion operator>() steht f�r den Operator > .
	 * @param other  ist der Eingabeparameter.
	 * @return ist wahr, falls der Z�hlerstand gr��er als der Eingabeparameter ist.
	 */
	bool operator>(const CCounter& other) const;
	void registerObserver(observer: CCounterObserver*);
	void unregisterObserver(CCounter);
private:
	int m_value; //!< Private Membervariable f�r den Z�hlerstand.
};
