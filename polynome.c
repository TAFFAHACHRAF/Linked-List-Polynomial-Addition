#include<stdio.h>
#include<stdlib.h>
#include"polynome.h"
//created by Achraf TAFFAH
struct node* create(struct node* head,double coeff,int degre){
	struct node *temp,*flag;
	// ila kanet polynome vide
	if(head == NULL){
		temp=(struct node*) malloc (sizeof(struct node)) ;
		temp->coeff=coeff;
		temp->degre=degre;
		temp->next_monome=NULL;
		head=temp;
	}
	// ila kan l3aks
	else{
		temp=head;
		while(temp->next_monome != NULL)
			temp=temp->next_monome;
		flag=(struct node*) malloc (sizeof(struct node));
		flag->coeff=coeff;
		flag->degre=degre;
		flag->next_monome=NULL;
		temp->next_monome=flag;
	}
	return head;	
};
void display(struct node* head){
	struct node *temp=head;
	while(temp != NULL){
		printf("%.2lf^%d+",temp->coeff,temp->degre);
		temp=temp->next_monome;
	}
	printf("\n");
}
struct node* polynomeAddition(struct node* poly1,struct node* poly2,struct node* sum){
	struct node* p1=poly1,p2,poly2;
//	if the first and the seconde polynome are empty
	if(poly1 == NULL && poly2 == NULL){
		return sum;
	}
//	if juste the first is empty
	if(poly1 != NULL && poly2 == NULL){
		sum=poly2;
		return sum;
	}
//	if just the seconde is empty
	if(poly1 == NULL && poly2 != NULL){
		sum=poly1;
		return sum;
	}
}
