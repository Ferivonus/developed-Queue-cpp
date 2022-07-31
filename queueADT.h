 #ifndef QUEUEADT_H_INCLUDED
#define QUEUEADT_H_INCLUDED

#include <iostream>
using namespace std;
//*************************************************************
//Author:D.S.Malik
//
//Thisclassspecifiesthebasicoperationsonaqueue.
//*************************************************************
template<class Type>
class queueADT
{
public:
    virtual bool isEmptyQueue()const=0;
//Functiontodeterminewhetherthequeueisempty.
//Postcondition:Returnstrueifthequeueisempty,
// otherwisereturnsfalse.
    virtual bool isFullQueue()const=0;
//Functiontodeterminewhetherthequeueisfull.
//Postcondition:Returnstrueifthequeueisfull,
// otherwisereturnsfalse.
    virtual void initializeQueue()=0;
//Functiontoinitializethequeuetoanemptystate.
//Postcondition:Thequeueisempty.
    virtual Type front()const=0;
//Functiontoreturnthefirstelementofthequeue.
//Precondition:Thequeueexistsandisnotempty.
//Postcondition:Ifthequeueisempty,theprogram
// terminates;otherwise,thefirstelementofthequeue
// isreturned.

    virtual Type back()const=0;
//Functiontoreturnthelastelementofthequeue.
//Precondition:Thequeueexistsandisnotempty.
//Postcondition:Ifthequeueisempty,theprogram
// terminates;otherwise,thelastelementofthequeue
// isreturned.
    virtual void addQueue(const Type &queueElement)=0;
//FunctiontoaddqueueElementtothequeue.
//Precondition:Thequeueexistsandisnotfull.
//Postcondition:ThequeueischangedandqueueElementis
// addedtothequeue.
    virtual void deleteQueue()=0;
//Functiontoremovethefirstelementofthequeue.
//Precondition:Thequeueexistsandisnotempty.
//Postcondition:Thequeueischangedandthefirstelement
// isremovedfromthequeue.
//Overload the assignment operator.
    virtual ~queueADT(){}

    virtual void printQueue()=0;
    virtual void leaveQueue(const Type &queueElement)=0;
    virtual bool checkQueue(const Type &queueElement)=0;
    
};

#endif // QUEUEADT_H_INCLUDED
