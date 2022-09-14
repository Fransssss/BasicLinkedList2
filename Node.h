// Fransiskus Agapa

#ifndef BASICLINKEDLIST2_NODE_H
#define BASICLINKEDLIST2_NODE_H


class Node
{
private:
    double _data;                                          // data of a node
    Node* _next;                                           // pointer of a node to the next list
public:
    Node();                                                // default constructor
    Node(const double theData, Node* theNext = nullptr);             // constructor
    void insertAfter(Node* theNode);                       // link new node to existing node | link the list
    Node* GetNext() const;                                 // get address of a next node/list
    void print() const;                                    // print value of a node
};


#endif //BASICLINKEDLIST2_NODE_H
