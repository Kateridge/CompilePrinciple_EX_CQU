#include <iostream>
#include <string>
using namespace std;

string input;
string boundarys[]={"(",")","{","}",",",";","#"};
string operators[]={"+","-","*","/","<",">",">=","<=","!=","==","="};
string reserves[]={"main","int","bool","if","else","while","true","false"};
char character;

class tuple_output{
public:
    tuple_output(string a,string b){
        symbol = a;
        value = b;
    }
    tuple_output(string a){
        symbol = a;
        value = "";
    }
    void printout(){
        cout << " " << endl;
    }
private:
    string symbol;
    string value;
};

bool isletter() {//判断是否为字母
	if ((character >= 'A'&&character <= 'Z') || (character >= 'a'&&character <= 'z'))
		return true;
	return false;
}
bool isdigit() {//判断是否为数字
	if (character >= '0'&&character <= '9')
		return true;
	return false;
}

int main(){
    return 0;
}