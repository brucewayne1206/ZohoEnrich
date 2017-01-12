# ZohoEnrich
#include <stdio.h>
#include <unistd.h>
int main() {
    int i;
    char* str="Happy Pongal";
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
        setbuf(stdout, NULL);
        usleep(100000);
    }
    return 0;
}
