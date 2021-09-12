#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node* link;
};

node* insert(node* Head , int x){

    node* temp = new node;
    temp->data = x;
    temp->link = Head;
    Head = temp;
    return Head;
}

void Print(node* Head){
    printf("List is : ");
    while (Head != NULL)
    {
        printf("%d ",Head->data);
        Head = Head->link;
    }   
    printf("\n");
}

int main(){
    node* Head = NULL;
    int n , i , x;
    printf("Enter how many number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter the number : ");
        scanf("%d",&x);
        Head = insert(Head, x);
        Print(Head);
    }
    return 0;
}