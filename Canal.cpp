#include "Canal.hpp"
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
Canal::Canal( int channel,float frecuencia,int res, int opcion, int ack){
	_channel= channel;
	_frecuencia= frecuencia;
	_res= res;
	_opcion=opcion;
  _ack=ack;
	n_Canal++;
	_num=n_Canal;
 
}
Canal::Canal(){
	_channel=0;
	_res=0;
	n_Canal++;
	_num=n_Canal;
  
}

/************************************************
    METODOS
************************************************/
void Canal::muestraDatos(){
	cout<<endl<<"** Imprimiendo Datos **"<<endl;
	cout<<"Numero de objeto: "<<_num<<endl;
	cout<<"Canal: "<<_channel<<endl;
  if(_opcion==1){
cout<<"Frecuencia: "<<_frecuencia<<endl;
  }
	if(_opcion==2){
    _frecuencia=8000000/_ack;
    	cout<<"Frecuencia: "<<_frecuencia<<endl;

  }
	cout<<"Resolucion: "<<_res<<endl;
}

/************************************************
    SETTER
************************************************/
void Canal::setn_Canal(int Canal){
  n_Canal=Canal;
  
}
void Canal::setchannel(int channel){
	_channel= channel;
}

void Canal::setCanal(int channel,float frecuencia,int res, int opcion, int ack){
	_channel = channel;
	_frecuencia = frecuencia;
	_res =  res;
  _opcion=opcion;
  _ack=ack;
}
void Canal::menu(){
cout<<_channel;
}
void Canal::calculo(){
float adc,vin;
do{  
cout<<"Inserte voltaje de entrada:";
cin>> vin;
if(vin<0||vin>3.3){
  if(vin<0){
    cout<<"Advertencia: El voltaje de entrada es negativo, cambie la polaridad de la señal";
    cout<<"\n";
  }
  else{
    cout<<"Advertencia: El voltaje de entrada excede al soportado, por favor regule";
    cout<<"\n";
  }
}  
}while(vin<0||vin>3.3);  
adc=((((pow(2,_res))-1)/3.3)*vin);
cout<<"Voltaje adc:"<<adc;  
}
void Canal::captura(){
	cout<<endl<<"** Introduce Datos **"<<endl;
  do{
	cout<<"Dame el Canal: ";
	cin>> _channel;
    
  if(_channel<=0||_channel>32){
    cout<<"Inserte un canal valido";
    cout<<"\n";
  }
  }while(_channel<=0||_channel>32);
  do{
	cout<<"Dame la Resolucion: ";
	cin>> _res;
   if(_res!=8&&_res!=10&&_res!=12){
    cout<<"Inserte una resolucion valida";
    cout<<"\n";
  } }while(_res!=8&&_res!=10&&_res!=12);
  do{
  cout<<"Seleccione la forma en que funcionara la frecuencia\n";
  cout<<"1.- Frecuencia Especificada";
  cout<<"\n";
  cout<<"2.- Frecuencia ACK";
  cout<<"\n";
  cin>>_opcion;
    if(_opcion!=1&&_opcion!=2)
  {cout<<"Inserte una opcion valida";
    cout<<"\n";
    } 
  if(_opcion==1)
  {cout<<"Dame la frecuencia en Hz: ";
   cout<<"\n";
	 cin>> _frecuencia;}
   
    }while(_opcion!=1&&_opcion!=2);
}
/************************************************
    GETTER
************************************************/
int Canal::getchannel(){
	return _channel;
}
int Canal::getres(){
	return _res;
}
int Canal::getn_Canal(){
	return n_Canal;
}
/*わたしのソフト*/