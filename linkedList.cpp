#include <iostream>

using namespace std;

class LinkedList() {
  private:
    struct node {
      int data;
      node * next;
    }
  public:
    addNode(int);
    printList();
}

int main() {
  return 0;
}
