/*
任务描述
本关任务：输入一个日期（年、月、日），计算并输出该日期是这一年的第几天。

相关知识
分支结构；
平年闰年的判断。

编程要求
根据提示，在右侧Begin-End区域编写一个完整满足任务要求的程序。

测试说明
平台会对你编写的代码进行测试，若是与预期输出相同，则算通关。

测试输入：2004 7 7
预期输出：
189

测试输入：2009 12 30
预期输出：
364

测试输入：2019 2 28
预期输出：
59

开始你的任务吧，祝你成功！
*/
/********** Begin **********/
#include <stdio.h>

int main(){
	int day_of_month[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int Year, Month, Day, i, k = 0;
	scanf("%d %d %d", &Year, &Month, &Day);
	for(i = 0; i < Month-1; i++)
	{
		k += day_of_month[i];
	}
	k += Day;
	if((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) printf("%d", k+1);
	else printf("%d", (k));
	return 0;
}
/**********  End **********/