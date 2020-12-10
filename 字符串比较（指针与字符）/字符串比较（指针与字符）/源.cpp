#include<iostream>
#include<string.h>
using namespace std;
int bj(char* S, char* T)
{
	int a, b, i=0, d = 0, x = 0;
	a = strlen(S);
	b = strlen(T);
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else if (a == b)
	{
		while (*(S + i) != '\0')
		{
			if (*(S + i) > * (T + i))
				d++;
			else if (*(S + i) < *(T + i))
				x++;
			i++;
		}
		if (d > x)
			return 1;
		else if (d < x)
			return -1;
		else if (d == x)
			return 0;
	}
}
int main()
{
	int t,s;
	char h[999], k[999];
	char *S, *T;
	cin >> t;
	while (t--)
	{
		cin >> h;
		cin >> k;
		S = h;
		T = k;
		s = bj(S,T);
		if (s == 0)
			cout << 0 << endl;
		else if (s > 0)
			cout << 1 << endl;
		else if (s < 0)
			cout << -1 << endl;
	}
	return 0;
}
/*题目描述
编写一个函数比较两个字符串，参数是两个字符指针（要求显式定义，例如char *S, char *T)，比较字符串S和T的大小。如果S大于T，则返回1，如果S小于T则返回-1，如果S与T相等则返回0。

比较规则：

1.把两个字符串的相同位置上的字符进行比较，字符的大小比较以ASCII值为准

2.在比较中，如果字符串S的字符大于字符串T的字符的数量超过小于的数量，则认为S大于T，如果等于则S等于T，如果小于则S小于T

例如S为aaccdd，T为eebbbb，每个位置比较得到S前两个字母都小于T，但后4个字母都大于T，最终认为S大于T

3.如果两个字符串长度不同，则更长的字符串为大

在主函数中输入两个字符串，并调用该函数进行判断，在判断函数中必须使用函数参数的指针进行字符比较

输入
输入t表示有t个测试实例

接着每两行输入两个字符串

依次输入t个实例

输出
每行输出一个实例的比较结果

样例输入
3
aaccdd
eebbbb
AAbb++
aaEE*-
zznnkk
aaaaaaa
样例输出
1
0
-1*/