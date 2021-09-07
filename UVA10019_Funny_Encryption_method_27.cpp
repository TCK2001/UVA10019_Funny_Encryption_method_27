/*
Sample Input
3
265
111
1234
Sample Output
3 5
6 3
5 5
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--) //횟수 입력; 
	{
		int input1=0,input2,count1=0,count2=0;
		
		cin>>input1;
		input2=input1; //입력된 값이 바뀌지 않기 위해 다른 함수를 하나 불러서 값 전달; 
		while(input2>0)
		{
			if(input2%2==1) //10진수에서 2진수; 
			{
				count1++;	
			}
			input2/=2;	
		}
			
		input2=input1; 
		while(input2>0)
		{
			int save;
			save=input2%10; //나눠서 계산 하나씩 계산; 
			while(save>0)
			{
				if(save%2==1)
				{
					count2++;
				}
				save/=2;	
			}
			input2/=10;
		}
		cout<<count1<<" "<<count2<<endl;  
	} 

return 0;
}

