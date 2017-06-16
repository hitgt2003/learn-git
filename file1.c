#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	char block[20];
	int in;
	int nread;
	in = open("hello.c",O_RDONLY);
	printf("---hello.c---\n");
	while((nread=read(1,block,sizeof(block)))==sizeof(block)){
		printf("%s",block);
	}

	printf("nread = %d\n",nread);
	exit(0);
}

