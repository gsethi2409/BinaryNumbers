#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char binaryNum[10],onesC[10],twosC[10],rev[10];
	int i=0,num=0,onesCi=0,rem=0,p;
	printf("\n\n\t-----------------------------------------------------");
	printf("\n\tBINARY NUMBERS");
	printf("\n\t-----------------------------------------------------");
	printf("\n\nEnter the binary number: ");
	gets(binaryNum);
	for(i=0;i<=strlen(binaryNum);i++)
	{
		if(binaryNum[i]=='0')
		{
			onesC[i]='1';
		}
		else
		{
			onesC[i]='0';
		}
	}
	onesC[i-1]='\0';
	int j=0;
	//printf("\nLEN ONESC=%d",strlen(onesC));
	for(i=strlen(onesC)-1;i>=0;i--)
	{
		p=pow(2,j);j++;
		if(onesC[i]=='0')
			num=0;
		else 
			num=1;	
;		onesCi=onesCi+num*p;
	}
	printf("\n\n1's complement: %s\n",onesC);
	onesCi+=1;
	i=0;
	do{
		if(onesCi%2 == 0)
			twosC[i]='0';
		else twosC[i]='1';
		onesCi/=2;
		rem=onesCi%2;
		i++;
	}while(onesCi>1);
	if(rem==0)	twosC[i]='0'; else	twosC[i]='1';
	twosC[i+1]='\0';
	//printf("\n\n NUM: %d",onesCi);
	printf("\n\n2's complement: ");
	for(i=strlen(twosC);i>=0;i--)
		printf("%c",twosC[i]);
	return 0;
}
