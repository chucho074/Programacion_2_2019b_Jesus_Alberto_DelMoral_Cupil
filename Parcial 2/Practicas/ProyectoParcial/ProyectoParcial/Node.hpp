#pragma once
//Includes
#include "Librerias.h"


class Sort;


 // The Node class that contains the personal data of persons
class Node {
protected:
    
    // Name of the person
	string name;

    // LastName of the person
    string lastName;

    // E-mail address
    string email;

    //The birth day of the person
    unsigned char birthDay;
   
	//The birth month of the person
    unsigned char birthMonth;

    // The birth year of the person
    unsigned char birthYear;

public:

	//Ready
    string getName();
    
    //Ready
    void setName(std::string);

    //Ready
    string getLastName();

    //Ready
    void setLastName(string);

    //Ready
    string getEmail();

    //Ready
    void setEmail(string);

    //Need to fix
    void setBirthDate(unsigned char, unsigned char, unsigned char);

    //Ready
    string getFullName();

    /**
     * TO DO implement
     * Returns the calculated age
     * @return [unsigned int] The age
     */
    unsigned int getAge();
    

    // Deletes every linked node 
    virtual ~Node() {};
};





 // The SingleNode class to representate a single linked list, inherits from Node
class SingleNode: public Node{
protected:

     // The pointer to the next node
    SingleNode* next;
    
    // Adds friendship to Sort class
    friend class Sort;
    
    // Adds friendship to List class
    friend class SingleList;

public:

    /**
     * TODO implement
     * Overrides the ">" operator allowing: (SingleNode & > SingleNode &)
     * @param [const SingleNode &] The right side of the operation
     * @return [bool] Whether is the left side is greater than the right side
     */
    bool operator > (const SingleNode &);

    /**
     * TODO implement
     * Overrides the "<" operator allowing: (SingleNode & < SingleNode &)
     * @param [const SingleNode &] The right side of the operation
     * @return [bool] Whether is the left side is lower than the right side
     */
    bool operator < (const SingleNode &);

    /**
     * TODO implement
     * Concatenates the full data of this nodes and the followings to the output stream
     */
    friend ostream & operator << (ostream &, const SingleNode &);

    //Ready
    friend istream & operator >> (istream &, SingleNode &);

    /**
     * TODO implement
     * Deletes every linked node
     */
    virtual ~SingleNode();
};




 // The DoubleNode class to representate a double linked list, inherits from Node
class DoubleNode: public Node{
protected:

     // The pointer to the next node
    DoubleNode* next;

     // The pointer to the previous node
    DoubleNode* prev;

     // Adds friendship to Sort class
    friend class Sort;
    

     // Adds friendship to List class
    friend class DoubleList;

public:

    /**
     * TODO implement
     * Overrides the ">" operator allowing: (DoubleNode & > DoubleNode &)
     * @param [const DoubleNode &] The right side of the operation
     * @return [bool] Whether is the left side is greater than the right side
     */
    bool operator > (const DoubleNode &);

    /**
     * TODO implement
     * Overrides the "<" operator allowing: (DoubleNode & < DoubleNode &)
     * @param [const DoubleNode &] The right side of the operation
     * @return [bool] Whether is the left side is lower than the right side
     */
    bool operator < (const DoubleNode &);

    /**
     * TODO implement
     * Concatenates the full data of this nodes and the followings to the output stream
     */
    friend ostream & operator << (ostream &, const DoubleNode &);

    /**
     * TODO implement
     * Concatenates the full data of this nodes and the followings to the output stream
     */
    friend istream & operator >> (istream &, DoubleNode &);

    /**
     * TODO implement
     * Deletes every linked node
     */
    virtual ~DoubleNode();
};