i/**
 * @subject:  A variable declaration like basic data types .
 * @author:Pramod Maurya
 * @brief :
 * @date : 2019-12-05 
 * @method: This is implemented using the array  and pointer   
 * */
#include<stdio.h>
#include<stdlib.h>

struct Point
 {
 	char name[20];
	int rollno;
	float mark;
};    

int main()
{
    	struct Point data   = { "PRAMOD MAURYA",1000,89.89 };
    	struct Point *sdata  = &data;
    	printf("%s %d %0.2f\n", data.name,data.rollno,data.mark);
    	printf("%s %d %0.2f\n", (sdata->name),(sdata->rollno),(sdata->mark));
    	return EXIT_SUCCESS;
}
