#include<iostream>
#include<string>
#include<sstream>
int countwords(const std::string& str);
int main(){
	std::string text = " hello, this is a test string. ";
	int wordcount = countwords(text);
	std::cout << "the number of the words in the given string is: " << wordcount << std::endl;
	return 0;
}
int countwords(const std::string& str){
	std::istringstream stream(str);
	std::string word;
	int wordcount = 0;
	while (stream >> word){
		++wordcount;
	}
	return wordcount;
}
