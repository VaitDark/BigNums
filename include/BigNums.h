#include<iostream>
#include<vector>
#include<string>



class num
{
public:
	std::vector<char> v;
	num(int n);
	num(std::string str);
	friend num operator+(num& num1, num& num2);
	friend std::ostream& operator <<(std::ostream& stream, num& num1);
};
