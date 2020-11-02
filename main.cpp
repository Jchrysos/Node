#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;
void add(Student * student1);
void print(Node * next);
Node* head = NULL;
int main() {
  Student* pranav = new Student();
  pranav->name = "Pranav";
  add(pranav);
  Student* jalen = new Student();
  jalen->name = "Jalen";
  add(jalen);
  Student* artichoke = new Student();
  artichoke->name = "Artichoke";
  add(artichoke);
  print(head);
  return 0;
}
void add(Student* student){
    Node* current = head;
    if (current == NULL) {
        head = new Node(student);
    }
    else {
        while (current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(new Node(student));
    }
}
void print(Node * next){
  if (next == head) {
    cout << "Students: ";
  }
  if (next != NULL) {
    while (next->getNext() != NULL) {
      cout << next->getStudent()->getName() << " ";
      next = next->getNext();
    }
    cout << next->getStudent()->getName() << " ";
    }
}