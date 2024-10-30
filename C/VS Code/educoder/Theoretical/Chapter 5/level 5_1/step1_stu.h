/*
任务描述
本关任务（习题5.1）：模拟掷双骰子游戏，游戏规则：每轮投两次骰子，取两次的和，第一轮若和为7或11则获胜，游戏结束。

例一：
和为11，则显示：'Round 1:  Score:11  Success!'
若和为2、3或12则输了，失败结束，

例二：
和为12，则显示：'Round 1:  Score:12  Failed!'
若和为其他数字，则将第一轮两次骰子点数的和（假定为8）作为自己的点数，继续第二轮，第三轮，……，直到某轮两次骰子点数的和等于该点数（第一轮两次投掷点数和）则获胜，若中间某轮两次投掷骰子点数的和为7，则输掉游戏。对应显示：

'Round 1:  Score:8  Continue!'
'Next rounds: Score 8:Success, Score 7:Failed, others:Continue'
'Round 2:  Score:4  Continue!'
'Round 3:  Score:6  Continue!'
'Round 4:  Score:9  Continue!'
'Round 5:  Score:7  Failed!'
相关知识
为了完成本关任务，你需要掌握：

C语言函数定义与调用；

C语言函数参数传递与返回；

C语言生成指定范围的随机数。

编程要求
在右侧编辑器完成diceGame(int randSeed)函数，其中参数randSeed为随机数种子，为方便测试，种子在测试文件中由键盘输入。

测试说明
平台会对你编写的代码进行测试，由于rand()函数返回的随机数在windows和Linux（平台环境）下的值不同，为方便同学们测试，分别给出两种环境的测试结果：

Linux环境
测试输入：1    //随机数种子：用于初始化随机数生成器
预期输出：Round 1:  Score:7  Success!

测试输入：18
预期输出：

'Round 1:  Score:8  Continue!'
'Next rounds: Score 8:Success, Score 7:Failed, others:Continue'
'Round 2:  Score:4  Continue!'
'Round 3:  Score:6  Continue!'
'Round 4:  Score:9  Continue!'
'Round 5:  Score:7  Failed!'
windows环境
测试输入：100   //随机数种子：用于初始化随机数生成器
预期输出：Round 1:  Score:11  Success!

测试输入：10
预期输出：

'Round 1:  Score:10  Continue!'
'Next rounds: Score 10:Success, Score 7:Failed, others:Continue'
'Round 2:  Score:6  Continue!'
'Round 3:  Score:9  Continue!'
'Round 4:  Score:4  Continue!'
'Round 5:  Score:7  Failed!'
开始你的任务吧，祝你成功！
*/
#include<stdio.h>
#include<stdlib.h>

void diceGame(int randSeed)
{
    int a[100];
    srand((unsigned) randSeed);
    for(int i=0; ; i++)
    {
        a[i] = rand() %13;
        if((a[0] == 7 || a[0] == 11) && i == 0)
            printf("'Round 1:  Score:%d  Continue!'", a[0]);
        else if()
        
    }

}