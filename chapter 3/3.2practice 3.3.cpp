# include<iostream>
# include<string>
using namespace std;
int main()
{
	string name;
	while (cin >> name)
	{
		cout << name << endl;
	}
	while (getline(cin, name))
	{
		cout << name << endl;
	}


}
//3.3 类似 is >> s 的读取，string对象会忽略开头的空白并从第一个真正的字符开始，直到遇见下一空白为止。
//类似 getline(is, s) 的读取，string对象会从输入流中读取字符，直到遇见换行符为止。
