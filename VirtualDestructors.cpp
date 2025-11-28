#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = nullptr;
    }
};

int main(){

    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    Node* n5 = new Node(50);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    cout << "Node 1 is still accessible: " <<n1->next<<endl;
    cout << "Node 2 is still accessible: " <<n2->next<<endl;
    cout << "Node 3 is still accessible: " <<n3->next<<endl;
    cout << "Node 4 is still accessible: " <<n4->next<<endl;
    cout << "Node 5 is still accessible: " <<n5->next<<endl;
    delete n1;
    delete n2;
    delete n2;
    delete n3;
    delete n4;
    delete n5;
    return 0;
}