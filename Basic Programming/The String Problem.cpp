#include <bits/stdc++.h>

using namespace std;
int Hashresult(string str)
{
  
    int hash[5] = { 0 };
  
    
    for (int i = 0; i < str.length(); i++) {
  
        if (str[i] == 'A' || str[i] == 'a')
            hash[0] = 1;
  
        else if (str[i] == 'E' || str[i] == 'e')
            hash[1] = 1;
  
        else if (str[i] == 'I' || str[i] == 'i')
            hash[2] = 1;
  
        else if (str[i] == 'O' || str[i] == 'o')
            hash[3] = 1;
  
        else if (str[i] == 'U' || str[i] == 'u')
            hash[4] = 1;
    }
  
    
    for (int i = 0; i < 5; i++) {
        if (hash[i] == 0) {
            return 1;
        }
    }
    return 0;
}
  

int check(string S)
{
  
    if (Hashresult(S))
        cout<<"ugly string"<<"\n";
    else
        cout<<"lovely string"<<"\n";
}

int main() 
{
	int T,i,j;							
	cin>>T;								//input 
	string S;
	for(i=0 ; i<T ; i++)
	{
		cin>>S;           //input 
		check(S);
	}
	return 0;

}


