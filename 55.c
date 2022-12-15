#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void help()
{
	printf("\n*******************");
	printf("\n*输入过程无法退出！*");
	printf("请按所给字母敲击看盘！");
	printf("按任意键开始测试，按下首字母开始计时！*");
	printf("*输入出错则以——表示  *");
	printf("\n**********\n"); 
}
int main()
{
	char ch;
	char str[51];
	int i,count;
	while(1)
	{
		system("cls");
        help();
		count=0;
		ch=_getch();
		srand(time(NULL));
		for(i=0;i<50;i++)
		{
			str[i]=rand()%26+'a';
		}
		str[50]='\0';
		printf("%s\n",str);
		for(i=0;i<50;i++)
		{
			ch=_getch();
			if(ch==str[i])
			{
				count++;
				printf("%c",str[i]);
			}
			else
			printf("_");
		}
		printf("\ncount=%d%%\n",count*100/50);
        while(1)
        {
            ch=_getch();
            if(ch==' ')
            break;
            if(ch==27)
            return 0;
        }
	}
	return 0;
}
