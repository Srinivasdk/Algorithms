#include<bits/stdc++.h>
using namespace std;
void solve(string s,string D,string O,string S,string A,string N)
{
	for(int i = 0;i<s.length();i++)
	{
		if(65<=s[i]<=90)
		{
			// if(s[i]==D[0])
			// {
			// 	for(int j=0;j<D.lenght())
			// 	{
			// 		if(s[i]==D[j])
			// 		{
			// 			flag = 1;
			// 			continue;
			// 		}
			// 		else
			// 		{
			// 			flag =0;
			// 			break;
			// 		}
			// 		i=i+1;
			// 	}
			// 	if(flag==1)
			// 	 count = count+1;
			// }
			switch (s[i])
			{
				case D[i]:
					if(s[i]==D[0])
					{
					for(int j=0;j<D.lenght())
					{
						if(s[i]==D[j])
						{
							flag = 1;
							continue;
						}
						else
						{
							flag =0;
							break;
						}
						i=i+1;
					}
					if(flag==1)
				 	count = count+1;
				    break;
				case O[i]:

					if(s[i]==O[0])
					{
					for(int j=0;j<O.lenght())
					{
						if(s[i]==O[j])
						{
							flag = 1;
							continue;
						}
						else
						{
							flag =0;
							break;
						}
						i=i+1;
					}
					if(flag==1)
				 	count = count+1;
				    break;

			}

			}

		}
	}
}