# -10593---Ordered-List-

https://acm.cs.nthu.edu.tw/problem/10593/

Description

 

Let’s implement an ordered-list class. In an ordered list, the nodes are sorted in increasing order of their values.

Requirement:

You are asked to implement class Ordered_List. You will be provided with main.cpp and function.h, and asked to implement function.cpp.

 

main.cpp

#include <iostream>

#include "function.h"

using namespace std;

int main()

{

    Ordered_List integerList;

    int command;

    int value; //store node value

 

    while(cin>>command)

    {

        switch(command)

        {

        case 1: //insert a new node

            cin>>value;

            integerList.insertNode(value);

            break;

        case 2: // remove from beginning

            cin>>value;

            integerList.removeNode(value);

            break;

        }

    }

    integerList.print();

    cout<<endl;

}

 

function.h

#ifndef FUNCTION_H

#define FUNCTION_H

class ListNode

{

    friend class Ordered_List; //make Ordered_List a friend

 

public:

    ListNode( const int &info ) //constructor

        : data( info ), nextPtr( NULL )

    {

    } //end ListNode constructor

private:

    int data; //data

    ListNode *nextPtr; // next node in list

};

 

class Ordered_List

{

public:

    //default constructor

    Ordered_List();

    //destructor

    ~Ordered_List();

    //insert a node

    void insertNode(const int &value);

    //remove a node

    void removeNode(const int &value);

    //is List empty?

    bool isEmpty() const;

    //display contents of List

    void print() const;

private:

    ListNode *firstPtr; //pointer to first node

    ListNode *lastPtr;  //pointer to last node

};

#endif

 

 

Note: For OJ submission:

      Step 1. Submit only your function.cpp into the submission block.

      Step 2. Check the results and debug your program if necessary.
Input

 

There are two types of commands:

    "1 integerA" represents inserting a node with int value A in a proper position of the list so that the list is still ordered.
    "2 integerB" represents removing a node with int value B from the list. Note that if value B doesn’t exist, the list won’t be changed.

Each command is followed by a new line character.

Input terminated by EOF.
Output

 

The output should consist of the final state of the list.
