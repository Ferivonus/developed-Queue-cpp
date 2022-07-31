#include <iostream>
#include <cstdio>
#include "queue.h"

using namespace std;

int main()
{

cout << "------------------------------------"<< endl;
cout << "....... leaveQueue() Test begins...."<< endl;
cout << "------------------------------------"<< endl;

//create an object
queueType <int> q3(6);
q3.initializeQueue();
cout << "-------------------------"<< endl;
q3.addQueue(1);
q3.addQueue(2);
q3.addQueue(3);
q3.addQueue(4);
q3.addQueue(5);
q3.addQueue(6);
cout << "after adding 1,2,3,4,5,6....." << endl;

cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;
cout << "-------------------------"<< endl;
cout << "leave queue element= 1"<< endl;
q3.leaveQueue(1);
cout << "-------------------------"<< endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;
cout << "-------------------------"<< endl;
cout << "leave queue element= 2"<< endl;
q3.leaveQueue(2);
cout << "-------------------------"<< endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;
cout << "leave queue element= 4"<< endl;
q3.leaveQueue(4);
cout << "-------------------------"<< endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;

q3.addQueue(7);
q3.addQueue(8);
q3.addQueue(9);
q3.addQueue(10);

cout << "after adding 7,8,9,10....." << endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;
cout << "leave queue element= 3"<< endl;
q3.leaveQueue(3);
cout << "-------------------------"<< endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();

cout << "-------------------------"<< endl;
cout << "leave queue element= 8"<< endl;
q3.leaveQueue(8);
cout << "-------------------------"<< endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "--------delate from start-------"<< endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "--------delate from start-------"<< endl;
q3.deleteQueue();
cout << "-------------------------"<< endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.addQueue(11);
q3.addQueue(12);
q3.addQueue(13);
q3.addQueue(14);
q3.addQueue(15);

cout << "after adding 11,12,13,14,15....." << endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;

cout << "--------delate from start-------"<< endl;
q3.deleteQueue();
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "--------delate from start-------"<< endl;
q3.deleteQueue();
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();

cout <<"leave queue element= 11"<< endl;
q3.leaveQueue(11);
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();

cout <<"leave queue element= 12"<< endl;
q3.leaveQueue(12);
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;

cout <<"leave queue element= 13"<< endl;
q3.leaveQueue(13);
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();

cout << "-------------------------"<< endl;

q3.addQueue(16);
q3.addQueue(17);
q3.addQueue(18);

cout << "after adding 16,17,18....." << endl;
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();
cout << "-------------------------"<< endl;

cout <<"leave queue element= 14"<< endl;
q3.leaveQueue(14);
cout << "print queue elements:"<< endl;
q3.printQueue();
cout << "-------------------------"<< endl;
q3.PrintEveryVeriable();

cout << "Enter to exit...."<< endl;
return 0;
}
