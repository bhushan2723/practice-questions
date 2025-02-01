#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct node {
    int data;
    struct node *prev;
    struct node *next;
} *head, *tail, *newnode, *temp;

// Function prototypes
void create(int n);
void print();
void addbeg();
void addend();
void addspecific(int pos);
void delbeg();
void delend();
void delspecpos();
void getlength();
void reverse();

int main() {
    int choice, pos, n;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create Doubly Linked List\n");
        printf("2. Add Node at Beginning\n");
        printf("3. Add Node at End\n");
        printf("4. Add Node at Specific Position\n");
        printf("5. Delete First Node\n");
        printf("6. Delete Last Node\n");
        printf("7. Delete Node at Specific Position\n");
        printf("8. Get Length of the List\n");
        printf("9. Reverse the List\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of nodes to create: ");
                scanf("%d", &n);
                create(n);
                print();
                break;
            case 2:
                addbeg();
                print();
                break;
            case 3:
                addend();
                print();
                break;
            case 4:
                printf("Enter position: ");
                scanf("%d", &pos);
                addspecific(pos);
                print();
                break;
            case 5:
                delbeg();
                print();
                break;
            case 6:
                delend();
                print();
                break;
            case 7:
                delspecpos();
                print();
                break;
            case 8:
                getlength();
                break;
            case 9:
                reverse();
                print();
                break;
            case 10:
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Create the doubly linked list
void create(int n) {
    head = tail = NULL;

    for (int i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->prev = newnode->next = NULL;

        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}

// Print the doubly linked list
void print() {
    temp = head;
    printf("\nThe list is: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Add a node at the beginning
void addbeg() {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for the new beginning node: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL) {
        head->prev = newnode;
    }
    head = newnode;
}

// Add a node at the end
void addend() {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for the new last node: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        newnode->prev = NULL;
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

// Add a node at a specific position
void addspecific(int pos) {
    int i;
    temp = head;

    if (pos == 1) {
        addbeg();
        return;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for the new node: ");
    scanf("%d", &newnode->data);

    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newnode);
    } else {
        newnode->next = temp->next;
        newnode->prev = temp;

        if (temp->next != NULL) {
            temp->next->prev = newnode;
        }

        temp->next = newnode;
    }
}

// Delete the first node
void delbeg() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    free(temp);
    printf("First node deleted.\n");
}

// Delete the last node
void delend() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    temp = tail;
    tail = tail->prev;

    if (tail != NULL) {
        tail->next = NULL;
    } else {
        head = NULL;
    }

    free(temp);
    printf("Last node deleted.\n");
}

// Delete a node at a specific position
void delspecpos() {
    int pos, i;
    struct node *nextnode;

    printf("Enter position of the node to delete: ");
    scanf("%d", &pos);

    if (pos == 1) {
        delbeg();
        return;
    }

    temp = head;

    for (i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
    } else {
        nextnode = temp->next;

        if (temp->prev != NULL) {
            temp->prev->next = nextnode;
        }

        if (nextnode != NULL) {
            nextnode->prev = temp->prev;
        }

        if (temp == tail) {
            tail = temp->prev;
        }

        free(temp);
        printf("Node at position %d deleted.\n", pos);
    }
}

// Get the length of the doubly linked list
void getlength() {
    int count = 0;
    temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Length of the list: %d\n", count);
}

// Reverse the doubly linked list
void reverse() {
    struct node *current, *nextnode;
    current = head;

    while (current != NULL) {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }

    current = head;
    head = tail;
    tail = current;

    printf("List reversed.\n");
}
