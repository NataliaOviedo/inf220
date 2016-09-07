//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormularioM.h"
#include "DMemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
 Memoria = new DMemoria ();
 Memoria->mostrar(770,70,Canvas);

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
int r (StrToInt(InputBox("Liberar Espacio","Espacio a liberar =","1")));
Memoria->LiberarEspacio(r);
Memoria->mostrar(770,70,Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
int r (StrToInt(InputBox("Pedir Espacio", "Cuantos espacios necesita =","2")));
Memoria->PedirEspacio(r);
Memoria->mostrar(770,70,Canvas);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button4Click(TObject *Sender)
{
int r (StrToInt(InputBox("","","")));
int s (StrToInt(InputBox("","","")));
int d (StrToInt(InputBox("","","")));
Memoria->PonerDato(r,s,d);
}
//---------------------------------------------------------------------------

