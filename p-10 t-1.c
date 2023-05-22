#include<stdio.h>

main()

{
	FILE *p;
	char data[1000];
	p=fopen("p-10 file dixit.txt","w");
	
	if(p==NULL)
	{
		printf("Could not open file");
	}
	else
	{
		printf("Enter Any Value=");
		gets(data);
		fputs(data,p);
		printf("Data Enter Successfully.");
		
        fclose(p);
	}
}
