#include <iostream>


#define ERROR 	(-1)

/**************************************** 
	NOTE:
		- create a node in API -> should put it in heap
	Suggest step:
		- Create struct node
		- Declare head, tail pointer
		- Everytime Add new node (Enque, Deque):	
			+ Create new node
			+ Check abnormal case
			+ Add new node
		- Everytime print node
			+ Create pointer travel from head to tail
*****************************************/

/* Declare Node*/
struct Node{
	int key;
	struct Node * next;
};

/* Declare linked list */
struct Node *head = NULL;
struct Node *tail = NULL;


void enqueue(int key){
	// create node in heap
	struct Node * node1 =(struct Node *) malloc(sizeof(struct Node));
	node1->key = key;
	node1->next = NULL;

	// case: empty list
	if(head == NULL){
		head = node1;
		tail = node1;
	}

	// case: normal -> add to tail
	tail->next = node1;
	tail = node1;
}


int dequeue(){
	int key;

	// case: empty list
	if(head == NULL){
		std::cout << "Empty list  - Error";
		return ERROR;
	}

	// case: 1 element in list
	if(head == tail){
		key = head->key;
		head = NULL;
		tail = NULL;
		return key;
	}

	// case: normal -> remove from head
	key = head->key;
	head = head->next;
	return key;
}

int print_queue(){
	struct Node * p;
	if(head == NULL){
		std::cout << "empty queue" << std::endl;
		return 0;
	}
	p = head;
	while(p->next != NULL){
		std::cout << p->key << " ";
		p = p->next;
	}
	std::cout << p->key << " " << std::endl;
}

int main(){
	std::cout << "print queue" << std::endl;
	print_queue();
	enqueue(1);
	enqueue(2);
	enqueue(3);
	std::cout << "print queue" << std::endl;
	print_queue();
	std::cout << "dequeue element: " << dequeue() << std::endl;
	std::cout << "print queue" << std::endl;
	print_queue();
	return 0;
}

