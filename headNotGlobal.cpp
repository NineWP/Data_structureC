#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    node* link;
};

void insert(node** ptrToHead , int x){  // ptrToHead is pointer to pointer

    node* temp = new node;
    temp->data = x;
    temp->link = NULL;
    if(ptrToHead != NULL)
        temp->link = *ptrToHead;
    *ptrToHead = temp;
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
        //printf("%p %p\n",&Head, Head);
        insert(&Head, x);
        Print(Head);
    }
    return 0;
}