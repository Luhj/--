#include<iostream>
#include"fenju.h"
using namespace std;

int main(){
	char * test = "i love you , and i want you.";
	fenju f(test);
	f.parse();
	system("pause");
}