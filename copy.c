#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	int fd1,fd2;
	char *c = (char *) calloc(100, sizeof(char));
	fd1=creat("e1.txt",S_IRWXU);
	fd1=open("e1.txt",O_RDWR);
	printf("fd1=%d\n",fd1);
	write(fd1,"Hello CHANAKYA",14);
	close(fd1);
	fd1=open("e1.txt",O_RDWR);
	fd2=creat("e2.txt",S_IRWXU);	
	fd2=open("e2.txt",O_RDWR);
	printf("fd2=%d\n",fd2);
	if(fd1<0 || fd2<0)
	{
		printf("error\n");
	}
	
	while(read(fd1,c,1)>0)
	{
		write(fd2,c,1);
		printf("position=%ld ",lseek(fd1,0,SEEK_CUR));
		printf("char=%s\n",c);
	}
	close(fd1);
	close(fd2);
	return 0;
}
