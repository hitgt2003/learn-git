#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	if(write(2,"my name is sys\n",18)!=18)
	{
		printf("1\n");
		write(2,"超出的没有写入！\n",50);
	}
	exit(0);
}

