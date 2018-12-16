#include <iostream>
#include <cstdlib>

/**************************************** 
  Suggest step:
    - Create struct node
    - Declare head, tail pointer
    - Everytime Add new node (Enque, Deque):  
      + Create new node
      + Check abnormal case
      + Add new node
    - Everytime print node
      + Create pointer travel from head to tail
  EXP:
    - Alway explicit assign value for member in struct
        -> if not -> could lead to SEGMENT FAULT
    - create a node in API -> should put it in heap
    - All function work with linked list should work with pointer to node
        -> Example: 
        Node * Find(int key);
        void AddAfter(Node* node, int key);
*****************************************/

#define ERROR       (-1)
/* Class NODE*/
class Node
{
public:
    int key;
    Node* next;
};

using namespace std;

/* Class Linked-List*/
class LinkedList
{
public:
  Node* head;
  Node* tail;

  LinkedList();
  ~LinkedList();

  // Front
  void PushFront(int key);
  int TopFront();
  int PopFront();

  // Back
  void PushBack(int key);
  int TopBack();
  int PopBack();

  // Find, erase
  Node * Find(int key);
  void Erase(int key);
  int Empty();

  // Other func
  void AddAfter(Node* node, int key);
  void AddBefore(Node* node, int key);
  int print();
};

LinkedList::LinkedList(){
    this->tail = NULL;
    this->head = NULL;
}

LinkedList::~LinkedList(){
    std::cout << "LIST DELETED";
}

/*******************************************
Pseudo code: PushFront(key)
              node ←new node   // normal case
              node.key ← key
              node.next ← head
              head ← node
              if tail = nil:   // empty linked-list
                tail ← head
********************************************/
void LinkedList::PushFront(int key){
    Node *node1 = new Node();
    node1->key = key;
    node1->next = head;
    head = node1;
    if (tail == NULL) tail = head;
}

/*******************************************
Pseudo code: PopFront()
              if head = nil:       // empty linked-list
                ERROR: empty list
              if head = tail:      // 1 element
                head <- tail ← nil
              head ← head.next     // normal
********************************************/
int LinkedList::PopFront(){
    if (head == NULL) return ERROR;
    if(head == tail){
      head = NULL;
      tail = NULL;
      return 0;
    }
    head = head->next;
}

/*******************************************
Pseudo code: PushBack(key)
              node ←new node
              node.key ← key
              node.next =nil
              if tail = nil:        // empty linked-list
                head ← tail ← node
              else:                 // normal case
                tail.next ← node
                tail ← node
********************************************/
void LinkedList::PushBack(int key){
    Node *node1 = new Node();
    node1->key = key;
    node1->next = NULL;
    // move tail
    if(tail == NULL){
      head = node1;
      tail = node1;
    }
    else{
      tail->next = node1;
      tail = node1;
    }
}

/*******************************************
Pseudo code: PopBack(key)
              if head = nil: ERROR:     // empty list
              if head = tail:           // 1 element
                head ← tail ←nil
              else:
                p ← head
                while p.next.next ̸= nil:
                  p ← p.next
                p.next ← nil; tail ← p
********************************************/
int LinkedList::PopBack(){
    if(tail == NULL) return ERROR;
    if (head == tail){
        head = NULL;
        tail = NULL;
        return 0;
    }
    else{
      Node *p = head;
      while(p->next->next != NULL){
        p = p->next;
      }
      p->next = NULL;
      tail = p;
    }
}

/*******************************************
Pseudo code: AddAfter(node, key)
              node2 ←new node
              node2.key ← key
              node2.next = node.next
              node.next = node2
              if tail = node:
                tail ← node2
********************************************/
void LinkedList::AddAfter(Node * node, int key){
  // check this node is tail
  if(node->next == NULL){
    PushBack(key);    
    return;
  }

  // Create new node
  Node *newNode = new Node();
  newNode->key = key;
  newNode->next = node->next;
  node->next = newNode;
}

void LinkedList::AddBefore(Node * node, int key){
  // check this node is head
  Node *p = head;
  if(head->next == node->next){
    PushFront(key);    
  }

  // Create new node
  Node *newNode = new Node();
  newNode->key = key;

  // search from head
  while(p->next->next != node->next){
    p = p->next;
  }
  newNode->next = p->next;
  p->next = newNode;
}

Node * LinkedList::Find(int key){
  // Check emtpy linked list
  if(head == NULL){
    return NULL;
  } 

  Node * p = head;
  while(p != NULL){
    if(p->key == key){
      return p;
    }
    p = p->next;
  }
  return NULL;
}

int LinkedList::print(){
  Node *p = head;
  // Check empty list
  if(head == NULL){
    std::cout << "list empty" << std::endl;
    return 0;
  } 
  
  // Check the end of list
  while(p->next != NULL){
    std::cout << p->key << " ";
    p = p->next;
  }
  std::cout << p->key << " ";
  std::cout << std::endl;
  return 0;
}

/******************************
Main function
******************************/
int main(int argc, char const *argv[])
{
  LinkedList *list = new LinkedList();
  list->print();
  list->PushFront(1);
  list->PushFront(2);
  list->PushFront(3);
  list->print();
  list->PushBack(4);
  list->print();
  list->PopFront();
  list->print();
  list->PopBack();
  list->print();
  list->PushFront(4);
  list->PushFront(5);
  list->PushFront(6);
  list->print();
  Node * node1 = list->Find(4);
  cout << "found node has key = " << node1->key << " and has address = " << node1->next << endl;
  list->AddAfter(node1, 3);
  list->AddBefore(node1, 10);  
  list->print();
}