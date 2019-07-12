//Includes
#include "Node.h"


		//Getters
//Return del nombre
const string Node::getName() {
	return name;
}


//Return del apellido
const string Node::getLastName() {
	return lastName;
}


//Return del email
const string Node::getEmail() {
	return email;
}


//Return del nombre completo
const string Node::getFullName() {
	return lastName, name;
}


//return de la edad actual
const unsigned int Node::getAge() {								//Flag 1 - Terminar
	
	
	return 0;
}


		//Setters
//Guarda el nombre recibido
void Node::setName(string add_N) {
	name = add_N;

}


//Guarda el apellido recibido
void Node::setLastName(string add_LN) {
	lastName = add_LN;

}


//Guarda el email recibido
void Node::setEmail(string add_E) {
	email = add_E;

}


//Guarda la fecha de nacimiento recibida
void Node::setBirthDate(unsigned char add_BD, unsigned char add_BM, unsigned char add_BY) {
	birthDay = add_BD;
	birthMonth = add_BM;
	birthYear = add_BY;

}



			//Functions

	//SingleNode

bool SingleNode::operator > (SingleNode &nodo) {
	return this->getAge() > nodo.getAge();
}

bool SingleNode::operator < (SingleNode &nodo) {
	return this->getAge() < nodo.getAge();
}

ostream & operator << (ostream & out, SingleNode & node) {
	//Create the struct of the output for this node
	out << "\n\nThe name is:" << node.getFullName() << "\nThe age is: " << node.getAge() << "\nThe email is: " << node.getEmail();
	//If is the last node
	if (node.next == nullptr) {
		return out;
	}
	//Iterate to get all data
	else {
		return out << node.next;
	}
	
}

istream & operator >> (istream & in, SingleNode & node) {
	// TODO: insertar una instrucción return aquí
	cout << "Add a name" << endl;
	in >> node.name;
	cout << "Add a lastName" << endl;
	in >> node.lastName;
	cout << "Add birthday" << endl;
	in >> node.birthDay;
	cout << "Add a email" << endl;
	in >> node.email;
	return in;
}




	//DoubleNode
bool DoubleNode::operator > (DoubleNode & nodo) {
	return false;
}

bool DoubleNode::operator < (DoubleNode & nodo) {
	return false;
}


ostream & operator << (ostream & out, DoubleNode &  nodo) {
	// TODO: insertar una instrucción return aquí
	return out;
}

istream & operator >> (istream & in, DoubleNode & nodo) {
	// TODO: insertar una instrucción return aquí
	cout << "Add a name" << endl;
	in >> nodo.name;
	cout << "Add a lastName" << endl;
	in >> nodo.lastName;
	cout << "Add birthday" << endl;
	in >> nodo.birthDay;
	cout << "Add a email" << endl;
	in >> nodo.email;
	return in;
}




//Destructores

DoubleNode::~DoubleNode(){
	if (next != nullptr) {
		delete next;
	}

}


SingleNode::~SingleNode() {
	if (next != nullptr) {
		delete next;
	}

}
