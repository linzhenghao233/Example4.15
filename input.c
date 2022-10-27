// input.c	--	 何时使用&
#include <stdio.h>
int main(void) {
	int age;				//变量
	float assets;		//变量
	char pet[30];		//字符数组，用于储存字符串

	printf("Enter your age, assets, and favorite pet.\n");
	scanf_s("%d %f", &age, &assets);	//这里要使用&
	scanf_s("%s", pet, 30);						//字符组不适用&
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}

//输出结果：
//Enter your age, assets, and favorite pet.
//38
//92360.88 llama
//38 $92360.88 llama