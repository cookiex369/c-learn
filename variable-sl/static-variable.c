#include <stdio.h>

int	main(void){
	int f(int);
	int a = 2, i;
	for (i = 0; i < 3; i++){
		printf("%d\n", f(a));
	}
}
int	f(int a){
	auto int b = 0;
	static int c = 3;
	b = b + 1;
	c = c + 1;
	printf("%d\n",c);
	return (a + b + c);
}
// 如果需要函数中的局部变量的值在函数调用后不消失、继续保留原值，即占用存储单元不释放。
// 需要制定该局部变量为“静态局部变量”，使用关键字static进行声明。