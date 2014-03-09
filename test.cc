#include <stdio.h>
#include <string.h>

int main ()
{
	char buffer[1024]= {0};
	strcat(buffer,"i am ");
	strcat(buffer,"kundan");
	printf("%s\n",buffer);
  return 0;
}
