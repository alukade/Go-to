#include<stdio.h>
int main()
{
	int i =50;
		while (i++)
		{
			if (i > 10)
			{
				goto Label;//label�Ǳ�ǩ��goto�൱��break
			}
		}
	Label:  printf("�����ù���%d\n",i);
		
	return 0;
}