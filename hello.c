#include <string.h>
#include <stdio.h>
int  main(int argc ,const char *argv[]){
	char *p0;
	printf("hello world|ln命令\n");
	printf("argc= %d \n",argc);
	int a=strlen(argv[0]);
	printf("a= %d \n",a);
	printf("argv[0]=");
	int i=0;
	for(;i<a;i++){
		printf("%c",*(argv[0]+i));
	}
	printf("\n");
	a = strlen(argv[1]);
	printf("argv[1]=");
	for(int i=0;i<a;i++){
		printf("%c",*(argv[1]+i));
	}
	printf("\n----------------------\n");
	int x,y,*p1;
	x=10;
	p1=&x;
	int **p2;
	p2=&p1;
	printf("x=%d\n p1=%p\n p2=%p\n",**p2,p1,p2);
	return 0;
}
