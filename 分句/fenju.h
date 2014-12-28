#ifndef fenju_h
#define fenju_h
using namespace std;
class fenju{
private: char *sentense;
public:
	fenju();
	fenju(char*);
	fenju(string);
	~fenju();
	void parse();
};


#endif