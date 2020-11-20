//gcc -o bof_example2 bof_example2.c -m32 -mpreferred-stack-boundary=2 -z execstack -no-pie

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char binsh[8] = "/bin/sh";
void win(void)
{
    system("use_it");
}

int main(void)
{

    char buf[20];
    gets(buf);
    printf("your input : %s\n", buf);
    return 0;
}