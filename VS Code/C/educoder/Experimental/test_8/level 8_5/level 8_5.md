任务描述
本关任务：对实验七程序设计第2题的程序，增加文件保存和文件打开的功能选项，用函数实现这两个功能。在原有功能选项的基础上，增加6、7两项功能。
0.退出
1.输入每个学生的各项信息
2.输出每个学生的各项信息
3.修改指定学生的指定数据项的内容：
    1.修改英语成绩
    2.修改高等数学成绩
    3.修改普通物理成绩
    4.修改C语言成绩
4.统计每个学生的平均成绩（保留2位小数）
5.输出各位学生的学号、姓名、4门课程的总成绩和平均成绩
6.文件保存功能：将链表结点中学生的各项信息保存到二进制文件stu.dat
7.文件打开功能：从文件stu.dat中读取学生信息到内存建立链表。

可以选择原题中的输出功能将这些信息显示在平面上，以验证读写操作的正确性。

编程要求
根据提示，在右侧编辑器补充代码。

测试说明
平台会对你编写的代码进行测试，输入为功能编号，：

测试输入：
依次输入功能编号1，学生数量n，每个学生的学号、姓名和成绩；功能编号3，指定学生的学号，修改的数据项，数据；功能编号6，保存文件；功能编号7，从文件中读数据；功能编号4；功能编号5：
1    （功能编号）
4    （学生人数）
U202012345 Jack 99 100 80 96    （学号 姓名 英语 数学 物理 C语言成绩）
U202054321 Rose 89 94 85 100
U202056789 Tom 12 34 56 78
U202098765 Jerry 98 76 54 32
3    （功能编号）
U202054321 1 66    （将学号为U202054321的同学的英语成绩修改为66）
6    （功能编号）
7    （功能编号）
4    （功能编号）
5    （功能编号）

预期输出：

U202012345 Jack 93.75
U202054321 Rose 86.25
U202056789 Tom 45.00
U202098765 Jerry 65.00
U202012345 Jack 375 93.75
U202054321 Rose 345 86.25
U202056789 Tom 180 45.00
U202098765 Jerry 260 65.00

开始你的任务吧，祝你成功！