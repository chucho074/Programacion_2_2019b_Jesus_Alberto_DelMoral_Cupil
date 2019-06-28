#include "NodoDoble.h"

NodoDoble::NodoDoble() {

}

NodoDoble::NodoDoble(NodoDoble * Prev, int Data) {
	m_data = Data;
	m_Prev = Prev;
	m_Next = NULL;
}


NodoDoble::~NodoDoble() {
}
