// Fransiskus Agapa

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

// default constr
Node::Node()
{
    cout << "= Default constructor =" << endl;
    _data = 0;
    _next = nullptr;
}

// constr
Node::Node(const double theData, Node *theNext)
{
    cout << "= Constructor =" << endl;
    _data = theData;
    _next = theNext;
}

// insert after
void Node::insertAfter(Node *theNode)
{
    cout << "= Insert After =" << endl;
    Node* temp = nullptr;

    // save the direction that (this / current node) points to
    temp = this->_next;

    // insert new node and (this / current node) points to new node
    this->_next = theNode;

    // link the node / list
    theNode->_next = temp;
}

// get address of a node
Node *Node::GetNext() const
{
    return this->_next;
}

// print / display the data
void Node::print() const
{
    cout << this->_data;
}