#include <iostream>
// #include <ostream>

using namespace std;

class Node {
    public:
        int data;
        Node *nextNode;
};

Node *HEAD = NULL;
int count = 0;

void push_node(struct Node **HEAD, int data) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    count++;
    
    if (HEAD==NULL) {
        newNode->nextNode = (* HEAD);
        (* HEAD) = NULL;
    }

    newNode->nextNode = (* HEAD);
    (* HEAD) = newNode;
}

void print_list(Node *n) {
    if (n == NULL) {
        cout<<"List is empty";
    } else {
        cout<<"Elements of the list:\n";
        while(n!=NULL){
            cout<<n->data<< "->";
            n = n->nextNode;
        }
    }
}

int main () {
    int n,c;
    HEAD = new Node();

    for(;;){
        cout<<"\n1. Insert an element in linked list.\n"<<"\n2. Print length of the list.\n"
            <<"\n3. Display items of the list.\n"<<"\n4. Exit.\n"<<endl;
        cin>>c;

        if(c == 1) {
                printf("Insert an element: ");
                scanf("%d", &n);
                push_node(&HEAD, n);
        }
        else if (c == 2) {
                printf("Currently %d items are stored inside the linked list.", count);
        }
        else if (c == 3) {
                print_list(HEAD);
        }
        else if (c == 4) {
                exit(0);
        }
        else {
                printf("Invalid choice, Please try again.");
        }
    }
    return 0;
}