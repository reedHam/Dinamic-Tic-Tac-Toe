//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <Classes.hpp>
#include <StdCtrls.hpp>

class TXOButtons : public TButton{
private:
	int buttonNumber;
public:
	_fastcall TXOButtons(TComponent* Owner);
	void setButtonNumber(int x);
	void _fastcall XOOnClick(TObject *Sender);
};
//---------------------------------------------------------------------------
extern PACKAGE TXOButtons *XOButtons[9];
#endif
