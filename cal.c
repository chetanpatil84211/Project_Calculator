#include<stdio.h>
#include<stdlib.h>    // exit(0)   successfully terminated program
#include<math.h>

void bodmas(int y,int num1,int num2);
void power();
void square_root();


int main()
{  
   int x;

   // always enter loop (true)  and zero (false)
    while(1)
   {
printf("\n-----------------------------------------------------------------------\n");
     printf("\n1.Calulate BODMAS");
	 printf("\n2.Exit");
	 printf("\n3.Power");
         printf("\n4.Square root");

printf("\n---------------------------------------------------------------------\n");
     printf("\nEnter your choice : ");
	 scanf("%d",&x);
printf("\n-------------------------------------------------------------------------\n");


	 switch(x)
	  {
        case 1 :   int y;
		           printf("\n1.addition");
		           printf("\n2.subtreaction");
		           printf("\n3.multiplacti");
			   printf("\n4.Division");
printf("\n----------------------------------------------------------------------------------------\n");
                          printf("Enter Your Choice :  ");
                          scanf("%d",&y);
printf("------------------------------------------------------------------------------------------\n");  
				   int num1,num2,result;

				  
				   printf("Enter a num1 and num2 :  ");
				   scanf("%d%d",&num1,&num2);          
                  
				   bodmas(y,num1,num2);

		          break;
		case 2 :
		        exit(0);//work end of the program
		        
		case 3 :
		        
		        power();
                        break;
                case 4 : 
                        square_root();
                        break;

      }//end of switch 
    } //end of while loop


  return 0;
}


void  bodmas(int y,int num1,int num2)
   {  
      int result;

		switch(y)
       {
          case 1 :
                  result=num1+num2;
                  printf("sum is : %d\n",result);
                  break;
          case 2 :
                  result=num1-num2;
                  printf("subtraction is : %d\n",result);
                  break;
          case 3 :
                  result=num1*num2;
                  printf("multiplaction is : %d\n",result);
                  break;
          case 4 :
                                 if(num2 !=0)
                                 {
                                   result=num1/num2;
                                   printf("Division is : %d\n",result);
                                  }
                                  else
                                  {
                                    printf("Denometer is zero\n");
 
                                  }
                                  break;
           default:printf("Not a valid Operation\n");
                   break;
        }
  }

  void power()
  {
           int ans,base,power;
           printf("Enter base and power :  ");
           scanf("%d%d",&base,&power);
  
           ans=pow(base,power);
  
           printf("Power is : %d ",ans);
  }

  void square_root()
    {
         double number,squareRoot;
         printf("Enter a number : ");
         scanf("%lf",&number);

         squareRoot=sqrt(number);
         printf("Square root of %.2lf =  %.4lf", number, squareRoot);
    }



