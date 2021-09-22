#ifndef RETANGULO_H
#define RETANGULO_H		//em caso de mudar o nome do ficheiro


class Retangulo
{
	private:
		double altura;
		double comp;
		
	public:
		Retangulo();
		Retangulo(double altura, double comp);
		
		void defAltura(double);
		void defComp(double);
		
		double lerAltura() const		//const para prevenir que mudem os valores 
		{
			return altura;
		}
		
		double lerComp() const
		{
			return comp;
		}
		
		double area() const
		{
			double area=  comp*altura;
			return area;
		}
		
		double perimetro() const
		{
			return (altura*2)+(comp*2);
		}
};


#endif					//em caso de mudar o nome do ficheiro




