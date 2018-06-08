#include <iostream>

#include "function.h"
using namespace std;

    Ordered_List::Ordered_List()
    {
        firstPtr=NULL;
        lastPtr=NULL;
    }

    //destructor

    Ordered_List::~Ordered_List()
    {

    }

    //insert a node

    void Ordered_List::insertNode(const int &value )
    {
        ListNode *curr, *tmp, *tmp2;
        curr=firstPtr;

        if(firstPtr==NULL)
            {curr = new ListNode(value);
        curr->nextPtr=NULL;

        firstPtr=curr;
        return;}

        curr=firstPtr;
        tmp=curr;
        if(firstPtr!=NULL)
        {
            while(value>=curr->data&&curr->nextPtr!=NULL)
            {
                tmp=curr;
                curr=curr->nextPtr;


            }
            if(curr!=firstPtr)
            {
            if(value>=curr->data)
            {tmp2=curr;
            curr = new ListNode(value);
            tmp2->nextPtr=curr;
            curr->nextPtr=NULL;}
            else
            {
                tmp2=curr;
                curr = new ListNode(value);
                tmp->nextPtr=curr;
                curr->nextPtr=tmp2;

            }
            }
            else if(curr==firstPtr&&value>=curr->data)
            {tmp2=curr;
            curr = new ListNode(value);
            tmp2->nextPtr=curr;


            }
            else{
                tmp2=curr;
            curr = new ListNode(value);
            curr->nextPtr=tmp2;
            firstPtr=curr;


            }

        }




    }

    //remove a node

    void Ordered_List::removeNode(const int &value)
    {
        ListNode *curr, *tmp, *tmp2;
        curr=firstPtr;
        tmp=curr;
        if(firstPtr!=NULL)
        {
tmp=curr;
/*
            if(value==curr->data&&curr->nextPtr!=NULL)
                {
                    tmp2=curr->nextPtr;
                    delete curr;
                    firstPtr=tmp2;

                    curr=tmp2;

                }


*/

            while(curr!=NULL)
            {

              //  tmp=curr;
               // curr=curr->nextPtr;
                if(value==curr->data)
                {
                    tmp2=curr->nextPtr;
                    delete curr;
                    tmp->nextPtr=tmp2;

                    if(curr==firstPtr)
                    {
                        firstPtr=tmp2;
                    }

                    curr=tmp2;
                    if(tmp2==NULL)
                        break;
                }
                else
                {
                    tmp=curr;
                    curr=curr->nextPtr;

                }

            }
         /*   if(curr->nextPtr==NULL&&value==curr->data)
            {
                delete curr;
                curr=0;
                firstPtr=0;
            }*/

        }
    }

    //is List empty?

    bool Ordered_List::isEmpty() const
    {

    }

    //display contents of List

    void Ordered_List::print() const
    {
       ListNode *curr, *tmp;

       curr=firstPtr;
       if(curr==0)
        return;

       while(curr->nextPtr!=NULL)
       {
           cout<<curr->data<<' ';
           curr=curr->nextPtr;
       }
       cout<<curr->data;

    }
