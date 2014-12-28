#include<iostream>
#include"fenju.h"
#include<queue>
#include<string>
using namespace std;

fenju::fenju(){
	this->sentense = NULL;
}

fenju::fenju(char* input){
	if (input != NULL)
		this->sentense = input;
	else
		this->sentense = NULL;
}

fenju::fenju(string input){
	this->sentense = const_cast<char*>(input.c_str());


}

fenju::~fenju(){
	this->sentense = NULL;
	

}

void fenju::parse(){
	queue<char> q;
	int i = 0;
	int index;
	while (fenju::sentense[i] != '\0'){
		if (sentense[i] != ',' && sentense[i] != '.'){
			q.push(sentense[i]);
		}
		else{
			index = i;
			while(!q.empty()){
				cout <<q.front();
				q.pop();
			}
			cout << endl;
		}
		i++;
	}
}