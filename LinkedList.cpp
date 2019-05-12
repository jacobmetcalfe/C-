#include <iostream>
using namespace std;

// Struct of basic node
struct Node {
    int data;
    struct Node *next;
};
struct Node* head = NULL;

// Insert new node
void insert(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

// Displays the linked list
void display() {
    struct Node* ptr;
    ptr = head;
    while (ptr != NULL) {
        cout<< ptr->data <<"->";
        ptr = ptr->next;
    }
    cout << "null";
}
int main()
{
    int flag = 1;
    int x;

    // While loop that gets user input until 0
    while (flag == 1){
        cout << "Enter a number to add to the linked list: \n";
        cout << "Enter any type other than int to exit and display\n" << endl;
        cin >> x;
        if (cin.fail()){
            flag = 0;
        }
        else {
            insert(x);
        }
    }

    cout<<"The data for the linked list looks like this: ";
    display();
    return 0;
}