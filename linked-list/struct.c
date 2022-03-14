What is a structure?
====================
	A structure is a user defined data type in C.Consider the following example
	 
		int a : This will create int data type that will store in variable 'a' with size:4Bytes
		char b :This will create char data type that will store in variable 'b' with size:1Bytes
		float c : This will create float data type that will store in variable 'c' with size:4Bytes
		unsigned int A: This will create int data type that will store in variable 'A' with size:8 Bytes
       Note : They are  system defined data type.So like the system define data type  we can also defined user define data type
               structure is the one of the,

      So finally we can say struct is user define data type in linux.That creates a data type that can be used store hetrogenius element in oneshot.
      So like the system defined data type we can also declared used defined data type.The structure declaration systax is given below:

       struct geekforgeek
        {
	  element_1;
          element_2;
	  element_3;                 //Hetrogenius Member or Field of the structure
          element_4;
	  element_N-1;
          element_N;
       }
	
	struct --> Used to define what type data type ;
	geekforgeek -->Tag/structure tag ;

1.Structure Varaible Declaration:
=================================
	
1.0 With structure  declaration(Without tagname).
1.1 Using the Structure tagname

1.0 With structure  declaration(Without tagname).
***********************************************************************
	struct  
		{ 
		char name[50]; 
		int rollno; 
		float marks             //Hetrogenius Member or Field of the structure
		} node1,node2,node3;


 	struct  student
		{ 
		char name[50]; 
		int rollno; 
		float marks             //Hetrogenius Member or Field of the structure
		} node1,node2,node3;
   
***********************************************************************
Here: node1,node2,node3 are structure varaible 


1.1 Using structure tag(Withtagname).
***********************************************************************
	struct  
		{ 
		char name[50]; 
		int rollno; 
		float marks             //Hetrogenius Member or Field of the structure
		}; struct node1,node2,node3;


 	struct  student
		{ 
		char name[50]; 
		int rollno; 
		float marks             //Hetrogenius Member or Field of the structure
		}; struct student node1,node2,node3;
   
***********************************************************************

Note:
    Declaring a structure varaible reserves space in memory.The compiler will reserved sufficient space for each structure member to hold all the members.

1.Structure Varaible Initalization:
===================================

	struct  student
		{ 
		char name[50]; 
		int rollno; 
		float marks             //Hetrogenius Member or Field of the structure
		} node1 = {"Pramod Maurya",89.34,1028};
                struct  student node2={"Pramod Maurya",89.34,1028};

