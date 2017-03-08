//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
TXOButtons *XOButtons[9];
//---------------------------------------------------------------------------
_fastcall TXOButtons::TXOButtons(TComponent* Owner) : TButton(Owner){
	Height = 50;
	Width = 50;
	OnClick = XOOnClick;
}

void _fastcall TXOButtons::XOOnClick(TObject *Sender){
	TButton *pressed = (TButton *) Sender;
	if (pressed->Caption == "") {
		if (Form1->turn) {
			pressed->Caption = "X";
		} else {
			pressed->Caption = "O";

		}
		Form1->turn = !Form1->turn;
	}
}

void TXOButtons::setButtonNumber(int x){
	 buttonNumber = x;
}

