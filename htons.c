#include <stdio.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <cstring>
int main(void) { 
	short int test = 23;
	long int test2 = 23;
	char *test3;
	test3=(char *)malloc(1000);
	printf("ntohs(%d)= %d\n", test, htons(test));
	printf("ntohl(%d)= %d\n", test2, htonl(test2));
	printf("ntohs(%d)= %d\n", test, ntohs(test));
	printf("ntohl(%d)= %d\n", test2, ntohl(test2));
	snprintf(test3,10000,"%s-%d","2022-5-19-9",0);
	printf("%s",test3);
	free(test3);
	
	return 0;
}
