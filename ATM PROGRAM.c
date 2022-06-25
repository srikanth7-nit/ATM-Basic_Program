#include<stdio.h>
int main(){
	
	int notes,n,ch;
	printf("**************************************************************\n");
	
	printf("Enter the required amount \n");
	scanf("%d",&n);
	
// to enter the particular amount**************//
   printf("****************************************************************\n");
   
   printf("Enter the which kind of notes required Eg: 10,20,50....2000;\n");
   scanf("%d",&ch);
   // to switch the particular notes ***********//
   if(ch!=0)
   switch(ch){
                 
		default : printf("Please enter the valuable number \n");
		break;
		
		case 100:notes=n/100;
		printf("**********************************************************\n");
		printf("the total number of 100  notes are=%d\n",notes);
		n=n%100;  
		
		case 50:notes=n/50;
		printf("**********************************************************\n");
		printf("the total number of 50  notes are=%d\n",notes);
		n=n%50; 
		
		case 20:notes=n/20;
		printf("**********************************************************\n");
		printf("the total number of 20  notes are=%d\n",notes);
		n=n%20; 
		
		case 10:notes=n/10;
		printf("**********************************************************\n");
		printf("the total number of 10  notes are=%d\n",notes);
		if(n!=0){
		n=n%10; 
	}
	else{
		printf("change is not availabel sorry \n ");
	}
		
		case 5:notes=n/5;
		printf("**********************************************************\n");
		printf("the total number of 5  change are=%d\n",notes);
		if(n!=0){
			n=n%5; 
		}
		else{
		printf("change is not availabel sorry \n ");	
		}
		
		
		case 2:notes=n/2;
		printf("**********************************************************\n");
		printf("the total number of 2 change are=%d\n",notes);
		if(n!=0){
			n=n%2; 
		}
		else{
		printf("change is not availabel sorry \n ");	
		}
		
		
		case 1:notes=n/1;
		printf("**********************************************************\n");
		printf("the total number of 1 change are=%d\n",notes);
		if(n!=0){
			n=n%1; 
		}
		else{
		printf("change is not availabel sorry \n ");	
		} 
			
   }
   else{
   	
   	printf(" \t \a not available\r\n ");
   
   return 0;
   }
}
   
   

