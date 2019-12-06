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
      So like the system defined data type we can also declared used defined data type :

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

How to create a structure?
==========================
	  struct address 
		{ 
		char name[50]; 
		char street[100]; 
		char city[50];             //Hetrogenius Member or Field of the structure
		char state[20]; 
		int pin; 
		};

	struct --> Used to define what type data type ;
        address -->Tag/structure tag ;

How to declare structure variables?
=================================
	//A structure variable can either be declared with structure declaration or as a separate declaration like basic types.
	Case 01 : // A variable declaration with structure declaration. 
		struct Point
		{ 
   		int x, y; 
		}
	Case 02 : // A variable declaration like basic data types 
		struct Point 
		{ 
   		int x, y; 
		};  
  
		int main() 
		{ 
   		struct Point p1;  // The variable p1 is declared like a normal variable 
		}





