#include <stdio.h>
int main(void) {
  
 float num1,num2;
 float total=0;
 char maths;
  
 for (int i=1;i>0;i++){
  
   printf("input number 1: ");
   scanf("%f",&num1);
   printf("input number 2: ");
   scanf("%f",&num2);
  
   puts("\n");
   puts("Add (+) =           a");
   puts("Subtract (-) =      s");
   puts("Divide (/) =        d");
   puts("Multiply (*) =      m");
   puts("\n");
   
  printf("Enter Maths : ");
  scanf(" %c", &maths);
  puts("\n");
  
  switch(maths){
      
	  case 'a':
	     total = num1+num2;
		 printf("Answer for Add: %.2f",total);
	     break;
	  case 's':
	     total = num1-num2;
		 printf("Answer for Subtract: %.2f",total);
	     break;
	  case 'd':
	     total = num1/num2;
		 printf("Answer for Divide: %.2f",total);
	     break;
	  case 'm':
	     total = num1*num2;
		 printf("Answer for Multiply: %.2f",total);
	     break;
	  default:
	      printf("Your Input is wrong, try again..!!");
	  
  }
    puts("\n");
  }
  return 0;
}
