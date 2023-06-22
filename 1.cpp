
#include<iostream>
#include<vector>
#include<string>
#include"BigNums.h"

/*class num
{
public:
	std::vector<char> v;
	num(int n){
		while(n>0){
			v.push_back(n%10);
			n=n/10;
		}
		std::cout<<size(v);
	}
	num(std::string str){
		for(int i=0; i<size(str); i++){
			v.push_back(str[i]);
			std::cout<<v[i];

		}
	}
	
};*/
 int main()
{
	int a;
	//std::cout<<"hello ";
	num nume("23534665823582365239856239630730478769053890250245645634862318644678721316793486794664874623846583469026365325697");
	num n2("3229236498234646464213465875111111111111111111111111111111111111111111111111111111111111111111111111111");
	num n=nume+n2;
	std::cout<<n;
	std::cin>>a;
	return 0;
}