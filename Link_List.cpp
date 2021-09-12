#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node* link;
};

struct node* Head; 

void insert(int x){

    node* temp = new node;
    temp->data = x;
    temp->link = Head;
    Head = temp;
}

void Print(){

    node* temp1 = Head;
    printf("List is : ");
    while (temp1 != NULL)
    {
        printf("%d ",temp1->data);
        temp1 = temp1->link;
    }   
    printf("\n");
}

int main(){
    Head = NULL;
    int n , i , x;
    printf("Enter how many number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the number : ");
        scanf("%d",&x);
        insert(x);
        Print();
    }
    return 0;
}