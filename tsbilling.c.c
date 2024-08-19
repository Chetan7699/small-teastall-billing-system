#include<stdio.h>
main()
{
	int age;
	float hei;
	char st;
	puts("Enter Age:");
	scanf("%d",&age);
	puts("Enter Height in centimetres:");
	scanf("%f",&hei);
	puts("Do you have any VIP pass(Y for yes N for no):");
	scanf(" %c",&st);
	if(age<=3)
	{
		puts("Free entry for childrens under 3 years");
	}
	else if(age>=4 && age<=12)
	{
		printf("Children aged 4 to 12 Pay Rs.20/-");
	}
	else if(age>=13 && age<=64)
	{
		puts("Adults Pay Rs.100/-");
	}
	else if()
}
