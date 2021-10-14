//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.ImgList.hpp>
#include <System.ImageList.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Styles.Objects.hpp>
#include <FMX.Menus.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.ExtCtrls.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Colors.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TComboBox *ComboBox3;
	TImage *Image1;
	TRadioButton *spades1;
	TRadioButton *clubs1;
	TImage *Image4;
	TRadioButton *diamonds1;
	TImage *Image3;
	TRadioButton *spades2;
	TImage *Image5;
	TRadioButton *hearts2;
	TImage *Image6;
	TRadioButton *clubs2;
	TImage *Image7;
	TRadioButton *diamonds2;
	TImage *Image8;
	TRadioButton *spades3;
	TImage *Image9;
	TRadioButton *hearts3;
	TImage *Image10;
	TRadioButton *clubs3;
	TImage *Image11;
	TRadioButton *diamonds3;
	TImage *Image12;
	TButton *View;
	TLabel *Label4;
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TRadioButton *hearts1;
	TImage *Image2;
	TGroupBox *GroupBox3;
	TLabel *Label5;
	TComboBox *ComboBox4;
	TGroupBox *GroupBox4;
	TRadioButton *clubs4;
	TImage *Image13;
	TRadioButton *hearts4;
	TImage *Image14;
	TRadioButton *spades4;
	TImage *Image15;
	TRadioButton *diamonds4;
	TImage *Image16;
	TImageControl *ImageControl1;
	TImage *Image17;
	TImageList *ImageList1;
	TWrapEffect *WrapEffect1;
	void __fastcall card1(TObject *Sender);
	void __fastcall clubs1Click(TObject *Sender);
	void __fastcall hearts1Click(TObject *Sender);
	void __fastcall spades1Click(TObject *Sender);
	void __fastcall diamonds1Click(TObject *Sender);
	void __fastcall card2(TObject *Sender);
	void __fastcall clubs2Click(TObject *Sender);
	void __fastcall hearts2Click(TObject *Sender);
	void __fastcall spades2Click(TObject *Sender);
	void __fastcall diamonds2Click(TObject *Sender);
	void __fastcall card3(TObject *Sender);
	void __fastcall clubs3Click(TObject *Sender);
	void __fastcall hearts3Click(TObject *Sender);
	void __fastcall spades3Click(TObject *Sender);
	void __fastcall diamonds3Click(TObject *Sender);
	void __fastcall card4(TObject *Sender);
	void __fastcall clubs4Click(TObject *Sender);
	void __fastcall hearts4Click(TObject *Sender);
	void __fastcall spades4Click(TObject *Sender);
	void __fastcall diamonds4Click(TObject *Sender);
	void __fastcall ViewClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
