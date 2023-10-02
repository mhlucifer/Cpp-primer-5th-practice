//4.1 105
//4.2 //a *(vec.begin()) b (*vec.begin()) + 1
//对于没有指定执行顺序的运算符来说，如果表达式指向并修改了同一个对象，
// 将会引发错误并产生未定义的行为
# include<iostream>
using namespace std;
int main()
{
	int i = 0;
	/*cout << i << " " << ++i << endl;*///无法确定是i先运行还是++i先运行
}

//处理复合表达式两条建议：1.拿不准的时候用括号括起来
//2.如果改变了某个运算对象的值，在表达式的其他地方不要再使用这个运算对象

//4.3 可以接受。C++的设计思想是尽可能地“相信”程序员，将效率最大化。然而这种思想却有着潜在的危害，就是无法控制程序员自身引发的错误

//算数运算符的求值结果和运算对象都是右值

//取余运算的对象必须是整数类型，不管是正数还是负数一律向0取整

