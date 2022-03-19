#ifndef __POLYNOME__
	#define	__POLYNOME__
		//created by Achraf TAFFAH
	    struct node{
			double coeff;
			int degre;
			struct node* next_monome;
		};
		struct node* create(struct node* head,double coeff,int degre);
		void display(struct node* head);
	#endif
