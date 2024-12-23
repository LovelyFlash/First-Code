任务描述
本关任务：使用选择法排序编写一个能为数组进行升序排序的程序。

相关知识
选择法排序
选择法排序，是从n个数中先找出最大或者最小的数放到数组的最前面或最后面，再在剩余的n-1个数中找出最大或者最小的数放到数组的次前面或倒数第2单元，以此类推，直至排序完毕。

下图显示了从n个数中寻找最大值进行升序的排序过程：



进行升序排序时，也可以寻找最小值并将其与最前面的数进行交换。

遍历数组
通俗的理解，遍历数组就是：把数组中的元素都看一遍。

示例如下：

int arr[5] = {1,3,5,7,9};
int length = 5;
for(int i = 0 ; i<length ; i++){
    printf(" %d ",arr[i]);
}
输出：1 3 5 7 9

如何交换数组的值
交换数组中的两个值，需要借助中间变量。（优化：请自行思考，如何不使用中间变量交换两个变量的值）

示例如下，交换数组的第二个和第三个值：

int arr[5] = {1,3,5,7,9};
int temp;
temp = arr[1];
arr[1] = arr[2];
arr[2] = temp;
数组长度
题目要求数组长度不大于n时，可以使用固定数组，示例如下：

#define SIZE 100
...
int arr[SIZE];
...
但往往会造成空间浪费，为了节省空间我们可以使用malloc创建动态数组，感兴趣的同学可以去了解一下，此处使用固定数组即可。

编程要求
根据提示，在右侧编辑器补充void inArray(int arr[],int n)、void selectSort(int arr[],int n)和void outArray(int arr[],int n)的函数定义，这三个函数的输入均是一个长度不大于100的无序数组arr，以及数组的长度n，请在函数selectSort中使用选择法对数组元素进行升序排序，函数inArray用于输入数组的n个元素，函数outArray用于输出数组的n个元素。

测试说明
平台会对你编写的代码进行测试，比对你输出的数值与实际正确数值，只有所有数据全部计算正确才能通过测试：

测试输入：

5              //数组长度
11 6 24 20 3   //数组的每个元素
预期输出：
3 6 11 20 24 

提示：输出和输入之间均用空格隔开，即在输出数组时，数字之间用空格隔开，在输出末尾也输出空格。示例代码：

for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
}
开始你的任务吧，祝你成功！