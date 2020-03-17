#define _CRT_SECURE_NO_WARNINGS

int main()
{
	/*int a = 10;
	printf("%p\n", &a);
	return 0;*/


	/*int a = 10;
	int *p = &a;
	printf("%p\n", p);
	printf("%p\n", &a);
	return 0;*/
	/*char ch = 'a';
	char*pc=&ch;

	return 0;*/
	/*int a = 10;
	int *pa = &a;
	*pa = 20;
	printf("%d\n", a);
	return 0;*/
	char ch = 'a';
	int a = 10;
	char *pc = &ch;
	int *pa = &a;
	printf("%d\n",sizeof(pc));
	printf("%d\n",sizeof(pa));



	return 0;
}