#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
#include <assert.h>
#include "queueADT.h"
using namespace std;
//*************************************************************
//Author:D.S.Malik
//
//Thisclassspecifiesthebasicoperationonaqueueasan
//array.
//*************************************************************
template<class Type>
class queueType:public queueADT <Type>
{
public:
    const queueType <Type>&operator= (const queueType<Type> &);
//Overload the assignment operator.
    bool isEmptyQueue()const;
//Functiontodeterminewhetherthequeueisempty.
//Postcondition:Returnstrueifthequeueisempty,
// otherwisereturnsfalse.
    bool isFullQueue()const;
//Function to determine whether the queue is full.
//Postcondition:Returns true if the queue is full,
// otherwise return sfalse.
    void initializeQueue();
//Functiontoinitializethequeuetoanemptystate.
//Postcondition:Thequeueisempty.
    Type front()const;
//Functiontoreturnthefirstelementofthequeue.
//Precondition:Thequeueexistsandisnotempty.
//Postcondition:If the queue is empty,the program
// terminates;otherwise,the first element of the
// queueisreturned.
    Type back()const;
//Functiontoreturnthelastelementofthequeue.
//Precondition:Thequeueexistsandisnotempty.
//Postcondition:Ifthequeueisempty,theprogram
// terminates;otherwise,thelastelementofthequeue
// isreturned.
    void addQueue(const Type &queueElement);
//FunctiontoaddqueueElementtothequeue.
//Precondition:Thequeueexistsandisnotfull.
//Postcondition:ThequeueischangedandqueueElementis
// addedtothequeue.
    void deleteQueue();
//Functiontoremovethefirstelementofthequeue.
//Precondition:Thequeueexistsandisnotempty.
//Postcondition:Thequeueischangedandthefirstelement
// isremovedfromthequeue.
    queueType(int queueSize=100);
//Constructor
    queueType(const queueType<Type> &otherQueue);

    //print function
    void printQueue();

    ///delete of element from queue
    void leaveQueue(const Type &queueElement);


    bool checkQueue(const Type &queueElement);
    void PrintEveryVeriable(){
        cout<<"front: "<<front()<<endl;
        cout<<"back: "<<back()<<endl;
        cout<<"size (count): "<<count<<endl;
        cout<<"capacity (maxQueueSize): "<<maxQueueSize<<endl;
        cout<<"frontIndex (queueFront): "<<queueFront<<endl;
        cout<<"backIndex (queueRear): "<<queueRear<<endl;
    }
    ~queueType();
//Destructor
private:
    
    int maxQueueSize;//variabletostorethemaximumqueuesize
    int count; //variabletostorethenumberof
//elementsinthequeue
    int queueFront; //variabletopointtothefirst
//elementofthequeue
    int queueRear; //variabletopointtothelast
//elementofthequeue
    Type *list; //pointertothearraythatholds
//thequeueelements
};



template<class Type>
bool queueType<Type>::isEmptyQueue()const
{
    return(count==0);
}//endisEmptyQueue

template<class Type>
bool queueType<Type>::isFullQueue()const
{
    return(count==maxQueueSize);
}//endisFullQueue

template<class Type>
void queueType<Type>::initializeQueue()
{
    queueFront=0;
    queueRear=maxQueueSize-1;
    count=0;
}//endinitializeQueue

template<class Type>
Type queueType<Type>::front()const
{
    assert(!isEmptyQueue());
    return list[queueFront];
}//endfront

template <class Type>
Type queueType<Type>::back()const
{
    assert(!isEmptyQueue());
    return list[queueRear];
}//endback

template<class Type>
void queueType<Type>::addQueue(const Type &newElement)
{
    if(!isFullQueue())
    {
        queueRear=(queueRear+1)% maxQueueSize;//usethe
//modoperatortoadvancequeueRear
//becausethearrayiscircular

        count++;
        list[queueRear]= newElement;
    }
    else
        cout<<"Can not add to a full queue."<<endl;
}//endaddQueue

template<class Type>
void queueType<Type>::deleteQueue()
{
    if(!isEmptyQueue())
    {
        count--;
        queueFront=(queueFront+1) % maxQueueSize;//usethe
//modoperatortoadvancequeueFront
//becausethearrayiscircular
        
    }
    else
        cout<<"Cannot remove from an empty queue"<<endl;
}//enddeleteQueue


template<class Type>
queueType<Type>::queueType(int queueSize)
{
    if(queueSize<=0)
    {
        cout<<"Size of the array to hold the queue must"
            <<"be positive."<<endl;
        cout<<"Creating an array of size 100."<<endl;
        maxQueueSize=100;
    }
    else
        maxQueueSize=queueSize; //setmaxQueueSizeto
//queueSize
    queueFront=0; //initializequeueFront
    queueRear=maxQueueSize-1; //initializequeueRear
    count=0;
    list=new Type[maxQueueSize]; //createthearrayto
//holdthequeueelements
}//endconstructor

// print Queue function for homework:
template<class Type>
void queueType<Type>::printQueue()
{
    if(!isEmptyQueue())
    {
        int index=queueFront;
        cout << "Queue elements (front to back)...."<<endl; // notifier that the queue is printing

        if (index == -1) // if there is bug in the queue, the index will be -1 and it will fix it
            index = maxQueueSize-1;
        for(int i=0;i<count;i++) // loop through the queue
        {     
            cout<<list[index]<<endl; // print the element
            index=(index+1)%maxQueueSize; // advance the index to the next element
        }
        cout<<endl;
    }
    else
        cout<<"The queue is empty."<<endl;
}//end of printQueue function


template<class Type>
bool queueType<Type>::checkQueue(const Type &queueElement)
{
    if(!isEmptyQueue()) // is queue is empty or not
    {
        int index=queueFront;
        for(int i=0;i<count;i++)
        {
            if(list[index]==queueElement) // if the element is found
                return true; // return true

            index=(index+1)%maxQueueSize;
        }
    }
    return false;
}//end of checkQueue function

//delate element from queue function 
template<class Type>
void queueType<Type>::leaveQueue(const Type &queueElement)
{
    if(checkQueue(queueElement)) // is element in queue or not
    {
        if (front()==queueElement) { //if the element is the front element
            deleteQueue();
        }
        else{ //if the element is not the front element
            int index=queueFront;
            if (index == -1)
                index = index - 1;
            for(int i=0;i<count;i++)
            {
                if(list[index]==queueElement) //if the element is found 
                {
                    
                    for (int i = 0; i < count-1; i++) // max size of the queue 
                    {               
                        cout <<"I am swapping the element of "<< list[index] << " <-- " << list[index+1] <<endl;
                        list[index]=list[index+1];
                        index=(index+1)%maxQueueSize;
                        if (index == queueRear)
                            break;     
                    }
                    cout <<"and " << list[queueRear] <<" <-- " << " -1" <<endl;
                    cout << "for data security" <<endl;
                    //last value of the list array:
                    list[queueRear]=-1;
                    count--;
                    
                    queueRear=(queueRear-1)% maxQueueSize; //assing the new value to the queueRear, because the array is circular and some value leave.
                    
                    return; //to escape to the function
                }
                index=(index+1)%maxQueueSize; //advance the index to the next element
            }
        }
    }
    else
        cout<<"The element of "<< queueElement <<" is not in the queue."<<endl;
}//end of delate_on_Queue function


template<class Type>
queueType<Type>::~queueType()
{
    delete []list;
}

#endif // QUEUE_H_INCLUDED
