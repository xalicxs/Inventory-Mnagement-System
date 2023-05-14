// INVENTORY MANAGEMENT SYSTEM
#include<stdio.h>
#include<string.h>
int main()
{
	int i,quantity[10],y;
	float price,value,total_value,x=0,m=0;
	char code[10][10];
	float SBP01=22.05,SBP02=30.00,SBP03=5.00,SBP04=200.00,SBP05=99.99,SBP06=26.25,SBP07=25.65,SBP08=34.43,SBP09=19.99,SBP10=83.38;
 
	
	printf("How Many Items? : ");
	scanf("%d",&y);
	
	//READ VALUES //
	for(i=1;i<=y;i++)
	{
		printf("Enter Product Code:");
		fflush(stdin);
		scanf("%s",&code[i]);
		printf("Enter Product Quantity:");
		fflush(stdin);
		scanf("%d",&quantity[i]);
		}	
		printf("\n\n\n");
		printf(":WELCOME TO SMART BAZAR DEPARTMENTAL STORE:\n");
		printf("----------------------------------------------------------\n");
		printf("CODE     QUANTITY       PRICE        VALUE\n");
		printf("------------------------------------------------------------\n");
		
		//INVENTORY SEARCH
		total_value=0;
		i=1;
		while(i<=y)
		{
			if(strcmp(code[i],"SBP01")==0)
			{
				price=SBP01;
			}
			if(strcmp(code[i],"SBP02")==0)
			{
				price=SBP02;
			}
			if(strcmp(code[i],"SBP03")==0)
			{
				price=SBP03;
			}
			if(strcmp(code[i],"SBP04")==0)
			{
				price=SBP04;
			}
			if(strcmp(code[i],"SBP05")==0)
			{
				price=SBP05;
			}
			if(strcmp(code[i],"SBP06")==0)
			{
				price=SBP06;
			}
			if(strcmp(code[i],"SBP07")==0)
			{
				price=SBP07;
			}
			if(strcmp(code[i],"SBP08")==0)
			{
				price=SBP08;
			}
			if(strcmp(code[i],"SBP09")==0)
			{
				price=SBP09;
			}
			if(strcmp(code[i],"SBP10")==0)
			{
				price=SBP10;
			}
			value=quantity[1]*price;
			printf("%s  	%d	    %.2f	      %.2f\n",code[i],quantity[i],price,value);
			total_value=total_value+value;
			i++;
		}
		x=(total_value/100)*15;
		m=total_value+x;
		
		// END PART
		printf("---------------------------------------------------------------\n");
		printf("\tTotal value\t\t=\t%.2f\n",total_value);
		printf("\t(+)15% vat\t\t=\t%.2f\n",x);
  printf("---------------------------------------------------------------\n");
  printf("\tTotal\t\t=\t%.2f\n",m);
  return 0;
 } 
