// input.c	--	 ��ʱʹ��&
#include <stdio.h>
int main(void) {
	int age;				//����
	float assets;		//����
	char pet[30];		//�ַ����飬���ڴ����ַ���

	printf("Enter your age, assets, and favorite pet.\n");
	scanf_s("%d %f", &age, &assets);	//����Ҫʹ��&
	scanf_s("%s", pet, 30);						//�ַ��鲻����&
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}

//��������
//Enter your age, assets, and favorite pet.
//38
//92360.88 llama
//38 $92360.88 llama