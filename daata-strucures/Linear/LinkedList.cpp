#include <iostream>
using namespace std;

class LinkedList
{
public:
    int data;
    LinkedList *next;
};

int main(int argc, char const *argv[])
{
    LinkedList node;
    node.data = 10;
    cout << node.data << endl;
    cout << &node.next << endl;

    return 0;
}
