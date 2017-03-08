//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	bool turn;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StartClick(TObject *Sender)
{
	for (int i = 0; i < 9; i++) {
		// Add buttons if they do not exist
		if(XOButtons[i] == NULL){
		XOButtons[i] = new TXOButtons(this);
		XOButtons[i]->Parent = this;
		XOButtons[i]->Top = 50 + ((i%3)* 55);

		// Draw the buttons on a grid
		if (i <= 2) {
			XOButtons[i]->Left = Start->Left;
		}
		else if (i >= 3 && i <=5){
			XOButtons[i]->Left = Start->Left + 55;
		}
		else{
			XOButtons[i]->Left = Start->Left + 110;
		}

		XOButtons[i]->setButtonNumber(i);
		}
		else{
			XOButtons[i]->Enabled = True;
			XOButtons[i]->Caption = "";
		}
	}


}
//---------------------------------------------------------------------------
