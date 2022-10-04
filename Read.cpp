#include <iostream>
#include <stdlib.h>
#include "Read.hpp"
using namespace std;

Read::Read(int channel, float frecuencia, int res, int opcion, int ack): 
Canal(channel,frecuencia,res,opcion,ack){}
Read::Read():Canal(){}
void Read::captura(){
Canal::captura();
if(_opcion==2){
  do{
   cout<<"Inserte ACK (2,4,8,16,32,64)";
    cout<<"\n";
    cin>>_ack;
    if( _ack!=2 && _ack!=4 && _ack!=8 && _ack!=16 && _ack!=32 &&_ack!=64){
  cout<<"Inserte un valor valido";
      cout<<"\n";
  }
  }while(_ack!=2 && _ack!=4 && _ack!=8 && _ack!=16 && _ack!=32 &&_ack!=64);
  
}
}