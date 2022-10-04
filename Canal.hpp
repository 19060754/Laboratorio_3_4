#ifndef CANAL_H
#define CANAL_H

#include <string>
#include <cmath>
using namespace std;
class Canal{
	private:				//Encapsulamiento (como caja negra)
		int _channel;				//DAtos o caracteristicas Abstraidas
		float _frecuencia;
		int _res;
  public:
    int _opcion;
    int _ack;
  private:
		int _num;
		static int n_Canal;			//ATRIBUTO DE LA CLASE

	public:
		Canal( int ,float,int, int, int );
//Constructor de la Clase (inicializa atributos del objeto)
		Canal();				//Constructor 2
		void muestraDatos();
    void menu();
    int valor_canal();
    
    void calculo();
    void setn_Canal(int Canal);	
		// 				Getters & Setters	 Metodos constructores y modificadores
				
		void setCanal(int ,float,int,int, int );
    

//Setter Establecer valores a atributos cuando se requiera y no al inicio con el constructor
		void setchannel(int channel);
		 virtual void captura();
		int getchannel();									//Getter para obtener valores de atributos
		int getres();
		static int getn_Canal();
	
};
#endif
/*???????*/