#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
    int fd;
    char buf[10];

    fd = open("Sample.txt", O_RDONLY);

    if(fd < 0)
      perror("open");

    if(read(fd, buf,10)!= 10)
      perror("read");
    buf[10] ='\0';
    printf("%s",buf);
    close(fd);
    return 0;
    
}