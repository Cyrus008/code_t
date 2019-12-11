														[About Doubly linkedlist....]

This contain the basic information about the doubly linked list.So lets see where we can used these data structure :
	1.Circular linked lists are used in Round Robin Scheduling.
	2.Keep track of the turn in a multi-player game.
	3.Used to define the task structure for process in the linux kernel.
	4.The linked list  used in timesharing problem solved by the operating system.
	5.A stack, hash table, and binary tree can be implemented using a doubly linked list. 
	6. A music player which has next and prev buttons.

[Structure declaration] :
	
			struct node 
        		{
					int info;
					struct node *next;
					struct node *prev;
			   } ;
				struct node *head_ref  =NULL;

[How used in main function]
          
          int main()
			{
				function_01(head_ref); //Here we are using value at the head_ref
				function_02(&head_ref);//Here we are using address of the head_ref
	    
		        return EXIT_SUCCESS;	
			}

Advantage :
         		1->A DLL can be traversed in both forward and backward direction.
				2->The delete operation in DLL is more efficient if pointer to the node to be deleted is given.
				3->We can quickly insert a new node before a given node.
	
