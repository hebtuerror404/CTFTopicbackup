#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char*argv[]){
	//Linux 64
	unsigned int multiply = 0;
	unsigned int x, y;
	printf("Only when what you input is satisfying can you ultimately succeed:)\n");
	scanf("%u%u", &x, &y);
	unsigned int max = (x + y) / 2 + abs(x - y) / 2;
	//����ֵ��ʽ���������ֵ���ض�С����󣬲�Ȼ����0��1��......
	//�����Ҳ�Ҳ��������0......
	if (!x || !y){ printf("Too young\n"); exit(0); }

	multiply = x * y;
	//�˴�IDA��ʾx��y����int�����������Ͼ�˵��int��unsigned int���ڴ��в���һ��
	//�������ֻ��multiply��ʾunsigned int

	if (max == multiply){
		//��������ĳ������1
		system("cat ./fakeflag");
	}
	else if (max > multiply){
		system("cat ./flag");
	}
	else{
		printf("Well...but where is the flag?\n");
	}
}