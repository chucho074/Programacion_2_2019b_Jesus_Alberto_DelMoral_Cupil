#pragma once

#include "Node.h"

class Node;
class SingleNode;
class DoubleNode;


// La lista interfaz hace que las subclases implementen los metoros comunes
class List {
protected:

	//Actualiza el numero actual de elemntos en la lista 
	unsigned int s;

public:

	//Elimina cada nodo linkeado
	virtual void clear() = 0;


	//Regresa el numero total de nodos en la lista
	//Regresa un [unsigned int] de el total de numeros de elementos
	virtual unsigned int size() = 0;

	// Elimina cada nodo linkeado
	virtual ~List() {};
};

class SingleList : public List {
protected:

	//El primero nodo en la lista
	SingleNode ** start;

	friend Sort;

public:

	/* Lista de implementaciones
	   Un 'Push' para el nodo en el inicio de la lista
	   Parametros: 'SingleNode *' El nodo que debe ser 'Pusheado'
	   return: void
	*/
	void push(SingleNode *Nodo);

	/*
	 * TODO implement
	 * Push the node at the desired place on the list
	 * @param [SingleNode *] The node to be pushed
	 * @param [usigned int] The position where to push the node
	 * @return [void]
	 */
	void push(SingleNode *, unsigned int);

	/**
	 * TODO implement
	 * Pulls the last node of the list and unlinks it
	 * @return [SingleNode *] The unlinked node
	 */
	SingleNode * pull();

	/**
	 * TODO implement
	 * Pulls the desired node of the list and unlinks it
	 * @param [usigned int] The position of the node to unlink
	 * @return [SingleNode *] The unlinked node
	 */
	SingleNode * pull(unsigned int);

	/**
	 * TODO implement
	 * Deletes the last node of the list
	 * @return [void]
	 */
	void remove();

	/**
	 * TODO implement
	 * Deletes the desired node from the list
	 * @param [usigned int] The position of the node to unlink
	 * @return [void]
	 */
	void remove(unsigned int);

	/**
	 * TODO implement
	 * Concatenates all the nodes to the output stream
	 */
	friend ostream & operator << (ostream &, const SingleList &);

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	void clear();

	/**
	 * TODO implement
	 * Returns the total number of nodes on the list
	 * @return [unigned int] The total number of elements
	 */
	unsigned int size();

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	~SingleList();
};




class DoubleList : public List {
protected:
	/**
	 * The very first node on the list
	 */
	DoubleNode ** start;

	friend Sort;

public:

	/**
	 * TODO implement
	 * Push the node at the beginning of the list
	 * @param [DoubleNode *] The node to be pushed
	 * @return [void]
	 */
	void push(DoubleNode *);

	/**
	 * TODO implement
	 * Push the node at the desired place on the list
	 * @param [DoubleNode *] The node to be pushed
	 * @param [usigned int] The position where to push the node
	 * @return [void]
	 */
	void push(DoubleNode *, unsigned int);

	/**
	 * TODO implement
	 * Pulls the last node of the list and unlinks it
	 * @return [DoubleNode *] The unlinked node
	 */
	DoubleNode * pull();

	/**
	 * TODO implement
	 * Pulls the desired node of the list and unlinks it
	 * @param [usigned int] The position of the node to unlink
	 * @return [DoubleNode *] The unlinked node
	 */
	DoubleNode * pull(unsigned int);

	/**
	 * TODO implement
	 * Deletes the last node of the list
	 * @return [void]
	 */
	void remove();

	/**
	 * TODO implement
	 * Deletes the desired node from the list
	 * @param [usigned int] The position of the node to unlink
	 * @return [void]
	 */
	void remove(unsigned int);

	/**
	 * TODO implement
	 * Concatenates all the nodes to the output stream
	 */
	friend ostream & operator << (ostream &, const DoubleList &);

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	void clear();

	/**
	 * TODO implement
	 * Returns the total number of nodes on the list
	 * @return [unigned int] The total number of elements
	 */
	unsigned int size();

	/**
	 * TODO implement
	 * Deletes every linked node
	 */
	~DoubleList();
};