Accessing the structure member using dot(.) and arrow operator:

Arrow Operator:
===============

1. /*accessing value of a,b in structure  using arrow operator*/
struct Node 
{
	int a;
	int b;	
};struct Node q = {1,2};


int main()
{
	struct Node *p =&q ;
	printf("%d %d ",p->a,p->b); 	
	return 0;
}

2. /*Storing a,b in structure  using arrow operator*/
struct Node 
{
	int a;
	int b;	
};struct Node q;


int main()
{
	struct Node *p =&q ;
	p->a=2;               
	p->b=5;
	printf("%d %d ",p->a,p->b); 	
	return 0;
}


dot Operator:
===============
1. /*accessing value of a,b in structure  using dot operator*/
struct Node 
{
	int a;
	int b;	
};
struct Node p = {1,2} ;
int main()
{

	printf("%d %d ",p.a,p.b); 
	
	return 0;
}
struct Node 
{
	int a;
	int b;	
};
1. /*Storing value of a,b in structure  using dot operator*/
int main()
{
	struct Node p ;
	p.a =1;
	p.b= 2;            //Storing a,b in structure  using dot operator
	printf("%d %d ",p.a,p.b); 
	
	return 0;
}
