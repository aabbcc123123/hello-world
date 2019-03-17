#include <stdio.h>
#include <string.h>

int main ()
{
	//单词长度
	/*
你的程序要读入一行文本，其中以空格分隔为若干个单词，以‘.’结束。你要输出这行文本中每个单词的长度。
这里的单词与语言无关，可以包括各种符号，比如“it's”算一个单词，长度为4。注意，行中可能出现连续的空格。
输入格式:
输入在一行中给出一行文本，以‘.’结束，结尾的句号不能计算在最后一个单词的长度内。
输出格式：
在一行中输出这行文本对应的单词的长度，每个长度之间以空格隔开，行末没有最后的空格。
输入样例：
It's great to see you here.
输出样例：
4 5 2 3 3 4
	*/ 
	
	
	char s[100];
	int num=0;//单词长度 
	int total=0;//总字符数 
	int space=1;//是否遇到空格 
	int rubbish=1;//看有没有输出过 
	
	
	//读入文本
	for (int i=0;i<100;i++){
		scanf("%c",&s[i]);
		if (s[i]=='.'){
			total=i;
			break;
		}
	}
	
	
	//输出长度
	for (int i=0;i<total;i++){
		
		if (s[i]!=' '){
			space=0;
			num++;
			
		} else{
			if (space==0){
				if (rubbish==1){
					printf("%d",num);
					rubbish=0;
				}else{
					printf(" %d",num);
					rubbish=0; 
				}
			}
			space=1;
			num=0;
			
		}
		
	} 
	
	//最后，如果 . 前没有空格的话
	if (s[total-1]!=' '){
		if (rubbish==1){
			printf("%d",num);
		} else{
			printf(" %d",num);
		}
		rubbish=0;
	} 
	
	//最后的最后，如果有rubbish的话
	if (rubbish==1){
		printf("0");
	} 
	
	
	
	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 /*
	 
	 
	do {
		scanf("%c",&s[i]);
		if (s[i]!=' '){
			cnt[num]++;
		}else{
			num++;
		}
		
		if (s[i]=='.'){
			cnt[num]--;
			break;
		} 
		
		
		i++;
	}while(1);
	
	
	
	for (int i=0;i<=num;i++){
		printf("%d",cnt[i]);
		if (i<num){
			printf(" ");
		}
	}

	*/



	return 0;
	}
	

