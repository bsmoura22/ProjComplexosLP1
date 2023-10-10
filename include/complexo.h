#include <ostream> 
#include <iostream> 
class Complexo
{
	private: 
    //atributos da classe
		double real;  
		double imaginario;  
	public: 
		Complexo(double x, double y); //construtor
		Complexo();
		~Complexo();
		
		//sobrecarga de operadores
		Complexo operator+(Complexo &c); 
		Complexo operator-(Complexo &c);
		Complexo operator*(Complexo &c); 
		float operator|(Complexo &c); 		

		 
		friend std::ostream& operator<<(std::ostream &o, Complexo const &c);
		  
		
}; 