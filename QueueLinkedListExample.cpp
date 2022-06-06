////Last exercise - learn how to build a queue (First In First Out - FIFO) using a linked list structure
//
//#include <iostream>
//using namespace std;
//
////step 1: create the queue node structure (student name queue storage)
//struct queue	//doubly linked list with tail pointer for queue concept
//{
//	string studentName;
//	queue* nextaddress;
//	queue* prevaddress;
//} *front, *rear;
//
////step 2: create enqueue function
//void enqueue(string studentName)	//choose insert to the end of linked list
//{
//	queue* newnode = new queue;
//	newnode->studentName = studentName;
//	newnode->nextaddress = NULL;
//	newnode->prevaddress = NULL;
//
//	if (front == NULL)
//	{
//		front = rear = newnode;
//	}
//	else
//	{
//		rear->nextaddress = newnode;
//		newnode->prevaddress = rear;
//		rear = newnode;
//	}
//}
//
////step 3: create the dequeue function
//void dequeue()	//choose delete from the front of linked list
//{
//	if (front == NULL)
//	{
//		return;
//	}
//
//	queue* current = front;
//	front = front->nextaddress;
//
//	if (front != NULL)
//	{
//		front->prevaddress = NULL;
//	}
//	else
//	{
//		rear = NULL;
//	}
//	cout << "Item deleted from the queue is " << current->studentName << endl << endl;
//	delete current;
//}
//
////4. create function to view the queue from 1st item to last item in the queue
//void displayQueueItems()
//{
//	queue* current = front;
//
//	while (current != NULL)
//	{
//		cout << "Student Name: " << current->studentName << endl;
//		current = current->nextaddress;
//	}
//
//	cout << endl;
//}
//
//int main()
//{
//	front = rear = NULL;
//
//	enqueue("Ali");
//	enqueue("Ahmad");
//	enqueue("Jessica");
//	dequeue();
//	dequeue();
//	enqueue("John");
//
//	cout << "The queue members are: " << endl;
//	displayQueueItems();
//	cout << endl;
//}