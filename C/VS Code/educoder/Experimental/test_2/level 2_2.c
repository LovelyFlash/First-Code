/*
任务描述
本关任务：：**实验教材P63 程序设计第(2)题
输入一个十进制正整数n，求它是几位数并计算各位数字之和。

测试说明
平台会对你编写的代码进行测试：

测试输入：20190223；
预期输出：
20190223是8位数，且各位数字之和为19。

开始你的任务吧，祝你成功！
*/
int main(){
	int a, k = 0, c = 0;
	scanf("%d", &a);
	int b = a;
	for(;a != 0; c++)
	{
		int i = a % 10;
		k += i;
		a = a/10; 
	}
	printf("%d是%d位数，且各位数字之和为%d。",b,c,k);
	return 0;
}