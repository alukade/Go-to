#include<stdio.h>
int main()
{
	int i =50;
		while (i++)
		{
			if (i > 10)
			{
				goto Label;//label是标签，goto相当于break
			}
		}
	Label:  printf("你好你好哈哈%d\n",i);
		
	return 0;
}