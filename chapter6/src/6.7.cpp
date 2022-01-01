/*编写一个程序，它每次读取一个单词，直到用户只输入q。然后，该程序指出有多少个单词以元音打头，有多少个单词
以辅音打头，还有多少个单词不属于这两类。为此，方法之一是，使用isalpha()来区分以字母和其他字符打头的单词，然后对于
通过了isalpha()测试的单词，使用if或switch语句来确定哪些以元音打头。该程序的运行情况如下：
Enter words (q to quit) :
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "Enter words (q to quit) :" << endl;
	string ch;
	int num1 = 0 , num2 = 0 , num3 = 0;
	while(cin >> ch){
		if(ch[0] == 'q' && ch[1] == 0)
			break;
		if(ch[0] == 'a' || ch[0] == 'A' || ch[0] == 'e' || ch[0] == 'E' || ch[0] == 'i' || ch[0] =='I' || ch[0] == 'o' || ch[0] == 'O' || ch[0] == 'u' || ch[0] == 'U')
			++ num1;
		else if(ch[0] >= 'a' && ch[0] <='z' || ch[0] >= 'A' && ch[0] <='Z')
			++ num2;
		else ++ num3;
	}
	cout << num1 << " words beginning with vowels" << endl << num2 << " words beginning with consonants" << endl << num3 << " others" << endl;
	return 0;

}