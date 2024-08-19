#include<stdio.h>
main()
{
	char name[20];
	char c;
	float amt=0,qty1=0,qty2=0,qty3=0,bill,camt,tqty;
	int op;
	printf("\t\t\tCozy Tea Stall\n");
	puts("----------------------------------------------------------------------");
	
	printf("Enter your name:");
	gets(name);
	start:
	printf("\nHello %s ,Welcome to our Tea stall Counter !\n\t\t Our menu:",name);
	puts("\n----------------------------------------------------------------------");
	puts("\t1.Tea-----10/-");
	puts("\t2.Coffee---20/-");
	puts("\t3.Cold coffee----50/-");
	puts("\t4.Bill");
	puts("\t5.Exit");
	start1:
	printf("\tPlease enter a choice [ ]\b\b");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		printf("\nHow many Cups of refreshing tea?:");
		scanf("%f",&qty1);//2
		amt=amt+qty1*10;
		tqty=qty1+qty2+qty3;
		goto start1;
		break;
		case 2:
		printf("\nHow many Cups of aromatic  coffee?:");
		scanf("%f",&qty2);
		amt=amt+qty2*20;
		tqty=qty1+qty2+qty3;
		goto start1;
		break;
		case 3:
		printf("\nHow many cups of chilled cold coffee?:");
		scanf("%f",&qty3);//4
		amt=amt+qty3*50;
		tqty=qty1+qty2+qty3;
		goto start1;
		break;
		case 4:
		printf("\nTotal for [%.2f] cup(s):Rs.%.2f /-",tqty,amt);
	    printf("\nEnter your payment amount:");
	    scanf("%f",&camt);
	    printf("\nChange:%.2f /-",camt-amt);
	    amt=0;
	    goto end;
		case 5:
		return 0;
		default:
		printf("Invalid Option");
	}
	end:
	printf("\nExplore more or finalize?\n(Type Y for yes or  N for no):");
	scanf(" %c",&c);
	if(c=='y'||c=='Y')
	{
		printf("\nCertainly,let's explore");
		amt=0;
		tqty=0;
		goto start;
		
		
	}
	else if(c=='n' || c=='N')
	{
		printf("Thank you for visiting!We look forward to serving you again soon!");
	}
	else
	{
		puts("Invalid selection");
	}
	
	
	
	
	

	
}
