#include <ostream> 

class Complexo
{
	private: 
		double real; //atributo do numero real  
		double imaginario;  //atributo do numero imaginario 
	public: 
		Complexo(double x, double y); // Construtor
		Complexo(); //Construtor padrão  
		~Complexo(); // Destrutor 
		
		//Sobrecarga de operadores: 
		Complexo operator+(Complexo &c); 
		Complexo operator-(Complexo &c);
		Complexo operator*(Complexo &c); 
		float operator|(Complexo &c); 		

		//Sobrecarga para impressao: 
		friend std::ostream& operator<<(std::ostream &o, Complexo const &c);
		  
		
}; 