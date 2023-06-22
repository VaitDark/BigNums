#include"BigNums.h"
#include<iostream>
#include<vector>
#include<string>

num::num(int n){
		while(n>0){
			v.push_back(n%10);
			n=n/10;
		}
		std::cout<<size(v);
	}
num::num(std::string str){
		for(int i=0; i<size(str); i++){
			v.push_back(str[i]);
			//std::cout<<v[i];

	}
}
num operator + (num& num1, num& num2){
	std::vector<char>::iterator itr1=num1.v.end()-1;
	std::vector<char>::iterator itr2=num2.v.end()-1;
	std::vector<char>::iterator itr;
	std::vector<char>::iterator itrb;
	std::vector<char>::iterator itro;
	bool f;
	if (size(num1.v)<=size(num2.v)){
		 itr=itr1;
		 itro=num1.v.begin();
		 itrb=itr2;
		 f=true;
	}else{
		 itr=itr2;
		 itro=num2.v.begin();
		 itrb=itr1;
		 f=false;
	}

	int sn=0;
	for(itr; itr!=itro;--itr){
		int n1=int(*itr+sn)-48;
		int n2=int(*itrb)-48;
		n1+=n2;
		sn=n1/10;
		n1=n1%10;
		*itrb=char(n1+48);
		itrb=itrb-1;
	}
	int n1=int(*itr+sn)-48;
	int n2=int(*itrb)-48;
	n1+=n2;
	sn=n1/10;
	n1=n1%10;
	*itrb=char(n1+48);
	if(sn!=0){
		num1.v.emplace(itrb,sn);
	}
	if(!f){
		return num1;
	}else{
		return num2;
	}

}
std::ostream& operator <<(std::ostream& stream, num& num1){
	for(auto i=num1.v.begin(); i!=num1.v.end(); ++i){
		stream <<*i;
	}
	return stream;
}