#include<stdlib.h>
#include<stdio.h>


struct Node{
    int data;
    Node* next;
};

struct Node* Head;

void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = Head;
        Head = temp1;
        return;
    }

    Node* temp2 = Head;
    for(int i = 0; i<n-2 ; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print(){
    Node* temp = Head;
    printf("List of number is : ");
    while (temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    Head = NULL;
    Insert(2,1); // 2
    Insert(3,2); // 2 3
    Insert(4,1); // 4 2 3 
    Insert(5,2); // 4 5 2 3
    Insert(5,5); // 4 5 2 3 5
    Print();

}