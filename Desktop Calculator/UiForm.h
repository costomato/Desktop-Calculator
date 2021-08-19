#pragma once

namespace DesktopCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UiForm
	/// </summary>
	public ref class UiForm : public System::Windows::Forms::Form
	{
	public:
		UiForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UiForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	private: System::Windows::Forms::Button^ btnBk;
	private: System::Windows::Forms::Button^ btnClr;
	private: System::Windows::Forms::Button^ btnClrAll;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;

	protected:

	protected:







	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnMinus;




	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnProd;
	private: System::Windows::Forms::Button^ btn0;





	private: System::Windows::Forms::Button^ btnDec;

	private: System::Windows::Forms::Button^ btnEqu;

	private: System::Windows::Forms::Button^ btnDIv;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnBk = (gcnew System::Windows::Forms::Button());
			this->btnClr = (gcnew System::Windows::Forms::Button());
			this->btnClrAll = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnProd = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDec = (gcnew System::Windows::Forms::Button());
			this->btnEqu = (gcnew System::Windows::Forms::Button());
			this->btnDIv = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Monospac821 BT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtDisplay->Size = System::Drawing::Size(370, 60);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnBk
			// 
			this->btnBk->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBk->Location = System::Drawing::Point(12, 78);
			this->btnBk->Name = L"btnBk";
			this->btnBk->Size = System::Drawing::Size(88, 72);
			this->btnBk->TabIndex = 1;
			this->btnBk->Text = L"⌫";
			this->btnBk->UseVisualStyleBackColor = true;
			this->btnBk->Click += gcnew System::EventHandler(this, &UiForm::btnBk_Click);
			// 
			// btnClr
			// 
			this->btnClr->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClr->Location = System::Drawing::Point(106, 78);
			this->btnClr->Name = L"btnClr";
			this->btnClr->Size = System::Drawing::Size(88, 72);
			this->btnClr->TabIndex = 1;
			this->btnClr->Text = L"C";
			this->btnClr->UseVisualStyleBackColor = true;
			this->btnClr->Click += gcnew System::EventHandler(this, &UiForm::btnClr_Click);
			// 
			// btnClrAll
			// 
			this->btnClrAll->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClrAll->Location = System::Drawing::Point(200, 78);
			this->btnClrAll->Name = L"btnClrAll";
			this->btnClrAll->Size = System::Drawing::Size(88, 72);
			this->btnClrAll->TabIndex = 1;
			this->btnClrAll->Text = L"CE";
			this->btnClrAll->UseVisualStyleBackColor = true;
			this->btnClrAll->Click += gcnew System::EventHandler(this, &UiForm::btnClrAll_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(294, 78);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(88, 72);
			this->btnPlus->TabIndex = 1;
			this->btnPlus->Text = L"±";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &UiForm::btnPlus_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 156);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(88, 72);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(106, 156);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(88, 72);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(200, 156);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(88, 72);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(294, 156);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 72);
			this->button8->TabIndex = 1;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &UiForm::EnterOperator);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 234);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(88, 72);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(106, 234);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(88, 72);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(200, 234);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(88, 72);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(294, 234);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(88, 72);
			this->btnMinus->TabIndex = 1;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &UiForm::EnterOperator);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 312);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(88, 72);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(106, 312);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(88, 72);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(200, 312);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(88, 72);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btnProd
			// 
			this->btnProd->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProd->Location = System::Drawing::Point(294, 312);
			this->btnProd->Name = L"btnProd";
			this->btnProd->Size = System::Drawing::Size(88, 72);
			this->btnProd->TabIndex = 1;
			this->btnProd->Text = L"x";
			this->btnProd->UseVisualStyleBackColor = true;
			this->btnProd->Click += gcnew System::EventHandler(this, &UiForm::EnterOperator);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 390);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(88, 72);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &UiForm::EnterNumber);
			// 
			// btnDec
			// 
			this->btnDec->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDec->Location = System::Drawing::Point(106, 390);
			this->btnDec->Name = L"btnDec";
			this->btnDec->Size = System::Drawing::Size(88, 72);
			this->btnDec->TabIndex = 1;
			this->btnDec->Text = L".";
			this->btnDec->UseVisualStyleBackColor = true;
			this->btnDec->Click += gcnew System::EventHandler(this, &UiForm::btnDecimalClick);
			// 
			// btnEqu
			// 
			this->btnEqu->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEqu->Location = System::Drawing::Point(200, 390);
			this->btnEqu->Name = L"btnEqu";
			this->btnEqu->Size = System::Drawing::Size(88, 72);
			this->btnEqu->TabIndex = 1;
			this->btnEqu->Text = L"=";
			this->btnEqu->UseVisualStyleBackColor = true;
			this->btnEqu->Click += gcnew System::EventHandler(this, &UiForm::btnEqu_Click);
			// 
			// btnDIv
			// 
			this->btnDIv->Font = (gcnew System::Drawing::Font(L"Stylus BT", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDIv->Location = System::Drawing::Point(294, 390);
			this->btnDIv->Name = L"btnDIv";
			this->btnDIv->Size = System::Drawing::Size(88, 72);
			this->btnDIv->TabIndex = 1;
			this->btnDIv->Text = L"/";
			this->btnDIv->UseVisualStyleBackColor = true;
			this->btnDIv->Click += gcnew System::EventHandler(this, &UiForm::EnterOperator);
			// 
			// UiForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 479);
			this->Controls->Add(this->btnDIv);
			this->Controls->Add(this->btnProd);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnEqu);
			this->Controls->Add(this->btnDec);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnClrAll);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnClr);
			this->Controls->Add(this->btnBk);
			this->Controls->Add(this->txtDisplay);
			this->Name = L"UiForm";
			this->Text = L"Desktop Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void UiForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnBk_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Length > 1) {
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	else {
		txtDisplay->Text = "0";
	}
}
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		if (txtDisplay->Text == "0") {
			txtDisplay->Text = Numbers->Text;
		}
		else {
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
		}
	}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ Ops = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	operators = Ops->Text;

}
private: System::Void btnDecimalClick(System::Object^ sender, System::EventArgs^ e) {
	if (!txtDisplay->Text->Contains(".")) {
		txtDisplay->Text = txtDisplay->Text + ".";
	}
}
private: System::Void btnEqu_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(txtDisplay->Text);
	if (operators == "+") {
		result = firstDigit + secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "-") {
		result = firstDigit - secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "x") {
		result = firstDigit * secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
	else if (operators == "/") {
		result = firstDigit / secondDigit;
		txtDisplay->Text = System::Convert::ToString(result);
	}
}
private: System::Void btnClr_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";

}
private: System::Void btnClrAll_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtDisplay->Text->Contains("-")) {
		txtDisplay->Text = txtDisplay->Text->Remove(0,1);
	}
	else {
		txtDisplay->Text = "-"+txtDisplay->Text;
	}
}
};
}
