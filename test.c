#include <stdio.h>
#include<string.h>
//#define tokenpaster(n) printf ("token" #n " = %d\n", token##n)
#pragma pack(2)
struct node{
	char r;
	int a;
	double d;
	char c;
};
int main(void)
{
	printf("%llu\n",sizeof(struct node));
	
	return 0;
}





