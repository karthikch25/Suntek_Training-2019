/*
input :
5
madam

output:
Palindrome

*/

#include<stdio.h>
#include<stdlib.h>
struct Node
{
char data;
struct Node * next;
};
bool isPalindrome(struct Node* head)
{
struct Node* p=head;
if(p==NULL)
{
return 0;
}
else
{
while(p->next!=NULL)
{
p=p->next;
}
}
if(head->data==p->data)
{
return 1;
}
else
{
return 0;
}
}
struct Node * addNode(struct Node* h)
{
struct Node * newnode=(struct Node*)malloc(sizeof(struct Node));
scanf("%c ",&newnode->data);
newnode->next=NULL;
h->next=newnode;
return newnode;
}
int main()
{
int size,bool1;
struct Node * head=NULL;
struct Node * head1=NULL;
scanf("%d ",&head->data);
head->next=NULL;
size--;
while(size>0)
{
head1=addNode(head1);
size--;
}
bool1=isPalindrome(head);
if(bool1)
printf("Palindrome\n");
return 0;
}




