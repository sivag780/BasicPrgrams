#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,count,k=0;

	char a[]="Hello!GoodMorning";
	char b[]="Morning";
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[k])
		{
			count=0;
			for(j=0;b[j]!='\0';j++)
			{
				if(a[i]==b[j])
				{
					count++;
					i++;
				}
			}
			i--;

			if(count==strlen(b))
			{
			printf("Substring found \nSubstring is %s\n",b);
			break;
			}
		}
	}
	return 0;
}
