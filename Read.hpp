#ifndef READ_HPP
#define READ_HPP
#include<iostream>
#include "Canal.hpp"
using namespace std;

class Read: public Canal{
private:
public:
Read(int, float,int, int, int);
Read();
void captura();

};
#endif