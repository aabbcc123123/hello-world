#include <stdio.h>
#include <string.h>

int main ()
{
	//���ʳ���
	/*
��ĳ���Ҫ����һ���ı��������Կո�ָ�Ϊ���ɸ����ʣ��ԡ�.����������Ҫ��������ı���ÿ�����ʵĳ��ȡ�
����ĵ����������޹أ����԰������ַ��ţ����硰it's����һ�����ʣ�����Ϊ4��ע�⣬���п��ܳ��������Ŀո�
�����ʽ:
������һ���и���һ���ı����ԡ�.����������β�ľ�Ų��ܼ��������һ�����ʵĳ����ڡ�
�����ʽ��
��һ������������ı���Ӧ�ĵ��ʵĳ��ȣ�ÿ������֮���Կո��������ĩû�����Ŀո�
����������
It's great to see you here.
���������
4 5 2 3 3 4
	*/ 
	
	
	char s[100];
	int num=0;//���ʳ��� 
	int total=0;//���ַ��� 
	int space=1;//�Ƿ������ո� 
	int rubbish=1;//����û������� 
	
	
	//�����ı�
	for (int i=0;i<100;i++){
		scanf("%c",&s[i]);
		if (s[i]=='.'){
			total=i;
			break;
		}
	}
	
	
	//�������
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
	
	//������ . ǰû�пո�Ļ�
	if (s[total-1]!=' '){
		if (rubbish==1){
			printf("%d",num);
		} else{
			printf(" %d",num);
		}
		rubbish=0;
	} 
	
	//������������rubbish�Ļ�
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
	

