#include <stdio.h>
#include <string.h>

int main()    // 65 = A , 97 = a
{
	char word[1000001] , print='A';    // save word
	int save_num[26] = { 0, }, max = 0, max_cnt = 0;
	scanf("%s", word);    // input word
	int len = strlen(word);
	for (int i = 0; i < len; i++)    // save_num 배열에 A~Z 사용된 갯수를 증가
	{
		if (word[i] < 'a')
		{
			save_num[word[i] - 65]++;
		}
		else
		{
			save_num[word[i] - 97]++;
		}
	}
	max = save_num[0];
	for (int i = 1; i < 26; i++)
	{
		if (max == save_num[i] && save_num[i] != 0)
		{
			print = '?';
		}
		if (max < save_num[i])
		{
			max = save_num[i];
			print = i + 65;
		}
	}
	printf("%c", print);
	return 0;
}