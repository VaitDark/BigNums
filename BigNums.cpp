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
			std::cout<<v[i];

	}
}