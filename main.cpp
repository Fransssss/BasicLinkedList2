// Fransiskus Agapa
// 9/13/22
// Practices make improvement - Have Fun !!!
// :)

// Inspiration = Zybook DS 1

// ================
// learn how basic linked list works
// user input number for data in list
// ================

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << endl;
    double userNum1 = 0;
    double userNum2 = 0;
    double userNum3 = 0;

    Node* head = new Node;                               // default constructor called
    Node* currObj = nullptr;

    // user input number
    cout << "Input a number for the head of list: ";
    cin >> userNum1;
    cout << endl;
    cout << "Input another number for a list: ";
    cin >> userNum2;
    cout << endl;
    cout << "Input another number for another list: ";
    cin >> userNum3;
    cout << endl;

    // assign user input to head of list
    head = new Node(userNum1);

    //2nd and 3rd lists
    Node* ndNode = new Node(userNum2);                    // allocate new memory
    Node* rdNode = new Node(userNum3);

    // link the lists
    head->insertAfter(ndNode);                           // head points to 2nd list
    ndNode->insertAfter(rdNode);                         // 2nd list points to 3rd list

    // display value
    currObj = head;
    cout << endl << "= Display Data =" << endl << "[";
    while(currObj != nullptr)
    {
        currObj->print();
        if(currObj->GetNext() != nullptr)                 // if it's not the end of list
        {
            cout << ',';                                  // data formatting purposes
        }
        currObj = currObj->GetNext();
    }
    cout << "]" << endl;

    return 0;
}
