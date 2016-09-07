//---------------------------------------------------------------------------


#pragma hdrstop

#include "DMemoria.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)
DMemoria *Memoria;

//---------------------------------------------------------------------------

DMemoria::DMemoria()
{ libre=1;
  for(int i=1; i<=max; i++)  {
	M[i].link=i+1;
	M[i].dato=0;
  }
	M[max].link=-1;
}

int DMemoria::PedirEspacio(int nro)
{ 	int c=1 ,x=libre;
	while (c<=nro){
	if (x!=-1) {
		libre=M[libre].link;
	}
	c=c+1;
	}
  M[libre-1].link=-1;
  return x;
}

void DMemoria::LiberarEspacio(int dir)
{
   if(dir!=-1){
	   M[dir].link=libre;
	   libre=dir;
   }
   else
   return;
}

int DMemoria::CantEspLibre(){
	int x = libre;
	int c = 0;
	while(x != -1){
		c = c + 1;
		x = M[x].link;
	}
	return c;
}

int DMemoria::CantEspOcupado(){
	int c = (max + 1) - CantEspLibre();
	return c;
}

bool DMemoria::Estado(int dir){
	int x = libre;
	bool c = false;
	while((x != -1) && (c == false)){
		if(x == dir){
			c = true;
		}
		x = M[x].link;
	}
	return c;
}

void DMemoria::PonerDato(int dir,int lugar, int valor){
	int c=1;
	while (c<=lugar){
	 if (c==lugar) {
		M[dir].dato = valor;
		c=c+1;
	 }else{
	 dir=dir+1;
	 c=c+1;
	 }
	}
}

int DMemoria::ObtenerDato(int dir){
	return M[dir].dato;
}

bool DMemoria::EsDirLibre(int dir){
	int i=libre;
	while (i!=dir && i!=-1)
		i=M[i].link;
	return (i==dir);
}

 void DMemoria::mostrar(int x, int y, TCanvas *t)
{
	int and=90, anl=60, al=30;
	 //  X,Y toman el valor de ->   x=770, y=70
	t->Font->Height=20;	//
	t->TextOut(x-200,y-30,"Dir");	//Imprime la palabra Dir
	t->TextOut(x-50,y-30,"Dato");	//Imprime la palabra Dato
	t->TextOut(x+96,y-30, "link");	//Imprime la palabra link
	//t->TextOut(x-39,y+500, "libre = "+IntToStr(libre));	//Imprime la palabra libre
	t->Font->Height=19;
	for(int  i=1; i<=max; i++)
	{
		if(!EsDirLibre(i)){
			t->Brush->Color=clRed;
		}else{
			 t->Brush->Color=clGreen;
		}

		// rectangulo de direccion
		t->Rectangle(x-205,y+(i*al),x-165,y+((i+1)*al));
		t->TextOut(x-195,y+(i*al)+8,IntToStr(i));

		//rectangulo de dato
		t->Rectangle(x-165,y+(i*al),x+and+and-50,y+(i+1)*al);
		t->TextOut(x-30,y+i*al+8,IntToStr(M[i].dato));

		 //rectangulo de links
          t->Rectangle(x+and+and-50,y+(i*al),x+and+and-90,y+(i+1)*al);
			 t->TextOut(x+and+and-75,y+i*al+8,IntToStr(M[i].link));

		//rectangulo de link
		/* if(!EsDirLibre(i)){
			 t->Brush->Color=clRed;
		}else{
			 t->Brush->Color=clGreen;
		}        */
	  //	t->Rectangle(x+and+and-50,y+(i*al),x+and+and-90,y+(i+1)*al);
	   //	t->TextOut(x+150,y+i*al+8,IntToStr(M[i].siguiente));

		//rectangulo de link
	   //	t->Rectangle(x+and+and+and,y+i*al,x+and+and+and+anl,y+(i+1)*al);
	  //	t->TextOut(x+and+and-75,y+i*al+8,IntToStr(M[i].link));

//		t->Rectangle()



}
	}

