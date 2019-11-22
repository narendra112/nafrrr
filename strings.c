#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char fun(char *p[]);
void main()
{
int j;
	char *p[5],str[10];
	int i;
	printf("enter strings\n");
	for(i=0;i<5;i++)
	{
		p[i]=(char *)malloc(sizeof(str));
	//	scanf("%s",str);
				gets(str);
	//			strcpy(p[i],str);
			for( j=0;str[j]!='\0';j++)
			{
				p[i]=str;
				}
		//	fun(str);
j=0;
	}
	fun(p);


}
char fun(char *p[])
{
for(int j=0;j<5;j++)
 {
	
		printf("%s\t",p[j]);
}	
}



/*char fun(char *p)
  {


  printf("%s\t",p);
  }*/
