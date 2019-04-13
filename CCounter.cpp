/*! \file CCounter.cpp
 *  \brief Definitionen der Klasse CCounter
 *
 *  Die bei den Deklarationen in CCounter.hpp genannten Informationen m�ssen hier nicht mehr wiederholt werden.
 *  Dieses File CCounter.cpp bekommen Anwender der Klasse nicht zu Gesicht, daher sind die Kommentare in
 *  diesem File als Informationen f�r Programmierer gedacht, nicht f�r den Anwender.
 *
 *  Im vorliegenden File werden im wesentlichen die Inhalte der geschweiften Klammern dokumentiert,
 *  aber nur dort, wo der Inhalt nicht ohnehin selbsterkl�rend ist.
 */
#include "CCounter.hpp"

CCounter::CCounter() : m_value(0) { //initialisieren nicht zuweisen m_value
}

CCounter::~CCounter() {
}

int CCounter::getValue() const {
	return m_value;
}

void CCounter::setValue(int value) {
	m_value = value;
}

void CCounter::count() {
	m_value +=1;     // Zeile auskommentieren f�r Aufgabe_3 in �bungsblatt 2
}

bool CCounter::operator<(const CCounter& other) const {
	return m_value < other.m_value;
}

bool CCounter::operator>(const CCounter& other) const {
	return m_value > other.m_value;
}


