//---------------------------------------------------------------------------
#include<vcl.h>
#ifndef DMemoriaH
#define DMemoriaH
//---------------------------------------------------------------------------
struct Nodo{
   int dato,siguiente,link;
};
const max=15;
class DMemoria{
 private:
 Nodo M[max+1];
  int libre;
 public:
  DMemoria();
  int PedirEspacio(int nro);
  void LiberarEspacio(int dir);
  void PonerDato(int dir,int lugar, int dato);
  void PonerSiguiente(int dir,int valorsiguientedir);
  int ObtenerDato(int dir);
  int ObtenerSiguiente(int dir);
  bool EsDirLibre(int dir);
  int CantEspLibre();
  int CantEspOcupado();
  bool Estado(int dir);
  void mostrar(int x, int y, TCanvas *t);
  };
  extern DMemoria *Memoria;
#endif
