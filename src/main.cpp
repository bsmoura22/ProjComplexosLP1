#include <iostream> 
#include "./../include/complexo.h"
#include <iomanip>
#include <string>

using namespace std;
using std::cout; 
using std::cin; 
using std::endl;
using std::fixed;
using std::setprecision; 

int main(int argc, char* argv[])
{
    Complexo n1(atof(argv[1]), atof(argv[2])); //complexo 1 (a+bi)
	Complexo n2(atof(argv[3]), atof(argv[4])); //complexo 2 (c+di)
	 
	
	//argv 5 = operador	
	if(*argv[5] == '+')
	{
		Complexo resultado(n1 + n2);
		cout << resultado; 			 
	}
	else if(*argv[5] == '-')
	{
		Complexo resultado(n1 - n2);
		cout << resultado;  
	}
	else if(*argv[5] == '*')
	{
		Complexo resultado(n1 * n2);
		cout << resultado;  
	}
	else if(*argv[5] == '|')
	{
		float resultado1 = n1|n2;
		float resultado2 = n2|n1;   
		
		cout << setprecision(2) << fixed;
		cout << resultado1 << ";" << resultado2 << endl; 
	}	
	return 0; 
}
