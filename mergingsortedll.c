//ctrl shift h opens git-plus menu
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* link;
};

typedef struct node NODE;

NODE* head1=NULL;
NODE* head2=NULL;
NODE* current=NULL;
NODE* temp=NULL;

int CreateList(NODE** head); //**pointer of pointer of type NODE
int MergeList();
int PrintList();

int main()
{
  int choice;
  printf("Do you want to create both linked list? Enter 1 for yes ");
  scanf("%d",&choice);

  if(choice==1)
  {
  	CreateList(&head1);
  	CreateList(&head2);

  }

  choice=0;

  printf("Enter 1 to merge and display the linked list ");
  scanf("%d",&choice);

  if(choice==1)
  {
    MergeList();
    PrintList();
  }
}


int CreateList(NODE** head)
{
	int n,loop,value;


	printf("How many nodes do you want to add? ");
	scanf("%d",&n);  // ASKING USER THE LENGTH OF THE LIST

		for(loop=0;loop<n;loop++){
				temp=(NODE*)malloc(sizeof(NODE));
				temp->link=NULL;
				printf("\n Enter value at node %d= ",loop+1);
				scanf("%d",&temp->data);

				if(*head==NULL)
					{
						*head=temp;//*head is used to access head1 and head2
					}
				else{

					current->link=temp;
				}

				current=temp;
			}//end of for

}

int MergeList()
{
  current=(NODE*)malloc(sizeof(NODE));
  current=head1;

  while(current->link!=NULL)
  {   printf("This is working\n");
    current=current->link;
    printf("%d -> \n",current->data);
  }
  current->link=head2;
  printf("This is working\n");
}

int PrintList(){
      current=(NODE*)malloc(sizeof(NODE));
			current=head1;
			while(current!=NULL){ //condition such that current will reach last block and become equal to NULL and then stop
			printf("%d ->" ,current->data );
			current=current->link;
		}
}
