//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//	class of Cards to store their numeric value with their corresponding suit

class Cards
{
public:
int number;
char pattern;

//-------------------------------------------------------

 // To compare numeric values and suits of two cards

int compare(Cards b){
  if (this->number>b.number)
  {
	return 1;
  }
  else if (b.number>this->number)
  {
	return 0;
  }
  else if(s2n(this->pattern)>s2n(b.pattern)){
	return 1;
  }
  else{return 0;}
}

//-------------------------------------------------------

 // To compare suits : diamonds > spades > hearts > clubs

int s2n(char s){
  switch(s){
	case 'c':
	return 1;
	case 'h':
	return 2;
	case 's':
	return 3;
	default:
	return 4;
  }
}
}a[5];    // Creating array of five global objects of type Cards

//---------------------------------------------------------------------------

  /*
	  Adding index value to image list Bitmap for indicating suit
	  amoung four same pairs
  */

int s2t(char s){
  switch (s)
  {
  case 'c':
	return 0;
  case 'h':
	return 1;
  case 's':
	return 2;
	default:
	return 3;
  }
}

//---------------------------------------------------------------------------

int orderOf()
{
  if(a[1].compare(a[2]))
  {

  // 2nd > 3rd

	if(a[1].compare(a[3]))
	{

	//card 2nd is largest

	  if (a[2].compare(a[3]))
	  {

	  // 2nd > 3rd > 4th

        return 6;
      }
      else {return 5;}
    }
	else {return 3;}
  }
  else {

	// 3rd > 2nd

	if (a[2].compare(a[3]))
	{
	  // card 3rd is largest

	  if(a[1].compare(a[3]))
	  {
		return 4;
	  } else {
        return 2;
      }
    } else {
      return 1;
    }
    }
}

//---------------------------------------------------------------------------

/*
	Numeric value of 1st visible card
	-starting from numeric value = 2, having index value = 0
*/

void __fastcall TForm1::card1(TObject *Sender)
{
	a[0].number=ComboBox1->ItemIndex+2;
}

//---------------------------------------------------------------------------

/*
	Suit of 1st visible card
	- Clubs->'c'
	- Hearts->'h'
	- Spades->'s'
	- Diamonds->'d'
*/

void __fastcall TForm1::clubs1Click(TObject *Sender)
{
	a[0].pattern='c';
}
//-------------------------------------------------------
void __fastcall TForm1::hearts1Click(TObject *Sender)
{
	a[0].pattern='h';
}
//--------------------------------------------------------
void __fastcall TForm1::spades1Click(TObject *Sender)
{
	a[0].pattern='s';
}
//--------------------------------------------------------
void __fastcall TForm1::diamonds1Click(TObject *Sender)
{
	a[0].pattern='d';
}

//---------------------------------------------------------------------------


//	Numeric value of 2nd visible card

void __fastcall TForm1::card2(TObject *Sender)
{
	a[1].number=ComboBox2->ItemIndex+2;
}

//---------------------------------------------------------------------------

 //  Suit of 2nd visible card

void __fastcall TForm1::clubs2Click(TObject *Sender)
{
	a[1].pattern='c';
}
//-------------------------------------------------------

void __fastcall TForm1::hearts2Click(TObject *Sender)
{
	a[1].pattern='h';
}
//-------------------------------------------------------

void __fastcall TForm1::spades2Click(TObject *Sender)
{
	a[1].pattern='s';
}
//--------------------------------------------------------

void __fastcall TForm1::diamonds2Click(TObject *Sender)
{
	a[1].pattern='d';
}

//---------------------------------------------------------------------------

//	Numeric value of 3rd visible card

void __fastcall TForm1::card3(TObject *Sender)
{
	a[2].number=ComboBox3->ItemIndex+2;
}

//---------------------------------------------------------------------------

 //  Suit of 3rd visible card

void __fastcall TForm1::clubs3Click(TObject *Sender)
{
	a[2].pattern='c';
}
//-------------------------------------------------------

void __fastcall TForm1::hearts3Click(TObject *Sender)
{
	a[2].pattern='h';
}
//-------------------------------------------------------

void __fastcall TForm1::spades3Click(TObject *Sender)
{
	a[2].pattern='s';
}
//--------------------------------------------------------

void __fastcall TForm1::diamonds3Click(TObject *Sender)
{
	a[2].pattern='d';
}

//---------------------------------------------------------------------------

//	Numeric value of final visible card

void __fastcall TForm1::card4(TObject *Sender)
{
	a[3].number=ComboBox4->ItemIndex+2;
}

//---------------------------------------------------------------------------

 //  Suit of final visible card

void __fastcall TForm1::clubs4Click(TObject *Sender)
{
	a[3].pattern='c';
}
//--------------------------------------------------------

void __fastcall TForm1::hearts4Click(TObject *Sender)
{
	a[3].pattern='h';
}
//--------------------------------------------------------

void __fastcall TForm1::spades4Click(TObject *Sender)
{
	a[3].pattern='s';
}
//--------------------------------------------------------

void __fastcall TForm1::diamonds4Click(TObject *Sender)
{
	a[3].pattern='d';
}

//---------------------------------------------------------------------------

 // Executing code when View button is clicked

void __fastcall TForm1::ViewClick(TObject *Sender)
{
	int ans;
	a[4].pattern=a[0].pattern; // Suit of hidden card
	int offset=orderOf();
	a[4].number=offset+a[0].number;
	if(a[4].number>=15)
	{
		a[4].number=a[4].number-13;
	}

	// To point initial card of same pairs stored in image list, i.e., (card_number-2)*4

	ans=(a[4].number-2)*4+s2t(a[4].pattern);
	ImageControl1->Visible=false;

	// To assign Image17 component an image from image list by passing Bitmap index

	Image17->Bitmap->Assign(ImageList1->Bitmap(Image17->Size->Size, ans));
}
//---------------------------------------------------------------------------


