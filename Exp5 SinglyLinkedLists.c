
#include <stdlib.h>  
struct node{  
    int data;  
    struct node *next;  
};      
   
//Represent the start and end of the singly linked list  
struct node *start, *end = NULL;  
   

void addNode(int data) {  
      
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    //Checks if the list is empty  
    if(start == NULL) {  
        //If list is empty, both head and tail will point to new node  
        start = newNode;  
        end = newNode;  
    }  
    else {  
        //newNode will be added after tail such that tail's next will point to newNode  
        end->next = newNode;  
        //newNode will become new tail of the list  
        end = newNode;  
    }  
}  
   
//display() will display all the nodes present in the list  
void display() {  
    //Node current will point to head  
    struct node *ptr = start;  
      
    if(start == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Nodes of singly linked list: \n");  
    while(ptr != NULL) {  
        //Prints each node by incrementing pointer  
        printf("%d ", ptr->data);  
        ptr = ptr->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
    //Add nodes to the list  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
      
    //Displays the nodes present in the list  
    display();  
   
    return 0;  
}  