#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(void){
	char *cp=(char*)malloc(sizeof(long long));
	free(cp);
	
	
	//rand();α����� 
	srand((int)time(0));
	printf("%d\n",rand());
	 for(int i=0;i<10;i++)
             printf("%d\n",rand());
	 
	//system("ping www.baidu.com");//ִ��cmd���� 
	//printf("%s",getenv("sys"));//?
	exit(0);
	abort();
	return 0;
} 
