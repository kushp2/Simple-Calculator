#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ clearEverything;
	private: System::Windows::Forms::Button^ digit9;
	private: System::Windows::Forms::Button^ digit8;
	private: System::Windows::Forms::Button^ digit7;
	private: System::Windows::Forms::Button^ digit4;
	private: System::Windows::Forms::Button^ digit5;
	private: System::Windows::Forms::Button^ digit6;
	private: System::Windows::Forms::Button^ digit1;
	private: System::Windows::Forms::Button^ digit2;
	private: System::Windows::Forms::Button^ digit3;
	private: System::Windows::Forms::Button^ digit0;
	private: System::Windows::Forms::Button^ plusMinus;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ subtract;
	private: System::Windows::Forms::Button^ add;
	private: System::Windows::Forms::Button^ decimal;
	private: System::Windows::Forms::Button^ equals;


	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->clearEverything = (gcnew System::Windows::Forms::Button());
			this->plusMinus = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->digit9 = (gcnew System::Windows::Forms::Button());
			this->digit8 = (gcnew System::Windows::Forms::Button());
			this->digit7 = (gcnew System::Windows::Forms::Button());
			this->digit4 = (gcnew System::Windows::Forms::Button());
			this->digit5 = (gcnew System::Windows::Forms::Button());
			this->digit6 = (gcnew System::Windows::Forms::Button());
			this->subtract = (gcnew System::Windows::Forms::Button());
			this->digit1 = (gcnew System::Windows::Forms::Button());
			this->digit2 = (gcnew System::Windows::Forms::Button());
			this->digit3 = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->digit0 = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::Color::AliceBlue;
			this->backspace->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->Location = System::Drawing::Point(42, 118);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(80, 80);
			this->backspace->TabIndex = 0;
			this->backspace->Text = L"⌫";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 26);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(402, 72);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::AliceBlue;
			this->clear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(128, 118);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(80, 80);
			this->clear->TabIndex = 2;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// clearEverything
			// 
			this->clearEverything->BackColor = System::Drawing::Color::AliceBlue;
			this->clearEverything->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearEverything->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearEverything->Location = System::Drawing::Point(213, 118);
			this->clearEverything->Name = L"clearEverything";
			this->clearEverything->Size = System::Drawing::Size(80, 80);
			this->clearEverything->TabIndex = 3;
			this->clearEverything->Text = L"CE";
			this->clearEverything->UseVisualStyleBackColor = false;
			this->clearEverything->Click += gcnew System::EventHandler(this, &MyForm::clearEverything_Click);
			// 
			// plusMinus
			// 
			this->plusMinus->BackColor = System::Drawing::Color::AliceBlue;
			this->plusMinus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->plusMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusMinus->Location = System::Drawing::Point(309, 118);
			this->plusMinus->Name = L"plusMinus";
			this->plusMinus->Size = System::Drawing::Size(80, 80);
			this->plusMinus->TabIndex = 4;
			this->plusMinus->Text = L"±";
			this->plusMinus->UseVisualStyleBackColor = false;
			this->plusMinus->Click += gcnew System::EventHandler(this, &MyForm::plusMinus_Click);
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::Color::AliceBlue;
			this->add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->Location = System::Drawing::Point(309, 214);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(80, 80);
			this->add->TabIndex = 10;
			this->add->Text = L"+";
			this->add->UseVisualStyleBackColor = false;
			this->add->Click += gcnew System::EventHandler(this, &MyForm::enterOperator);
			// 
			// digit9
			// 
			this->digit9->BackColor = System::Drawing::Color::AliceBlue;
			this->digit9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit9->Location = System::Drawing::Point(213, 214);
			this->digit9->Name = L"digit9";
			this->digit9->Size = System::Drawing::Size(80, 80);
			this->digit9->TabIndex = 9;
			this->digit9->Text = L"9";
			this->digit9->UseVisualStyleBackColor = false;
			this->digit9->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// digit8
			// 
			this->digit8->BackColor = System::Drawing::Color::AliceBlue;
			this->digit8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit8->Location = System::Drawing::Point(128, 214);
			this->digit8->Name = L"digit8";
			this->digit8->Size = System::Drawing::Size(80, 80);
			this->digit8->TabIndex = 8;
			this->digit8->Text = L"8";
			this->digit8->UseVisualStyleBackColor = false;
			this->digit8->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// digit7
			// 
			this->digit7->BackColor = System::Drawing::Color::AliceBlue;
			this->digit7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit7->Location = System::Drawing::Point(42, 214);
			this->digit7->Name = L"digit7";
			this->digit7->Size = System::Drawing::Size(80, 80);
			this->digit7->TabIndex = 7;
			this->digit7->Text = L"7";
			this->digit7->UseVisualStyleBackColor = false;
			this->digit7->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// digit4
			// 
			this->digit4->BackColor = System::Drawing::Color::AliceBlue;
			this->digit4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit4->Location = System::Drawing::Point(42, 300);
			this->digit4->Name = L"digit4";
			this->digit4->Size = System::Drawing::Size(80, 80);
			this->digit4->TabIndex = 7;
			this->digit4->Text = L"4";
			this->digit4->UseVisualStyleBackColor = false;
			this->digit4->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// digit5
			// 
			this->digit5->BackColor = System::Drawing::Color::AliceBlue;
			this->digit5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit5->Location = System::Drawing::Point(128, 300);
			this->digit5->Name = L"digit5";
			this->digit5->Size = System::Drawing::Size(80, 80);
			this->digit5->TabIndex = 8;
			this->digit5->Text = L"5";
			this->digit5->UseVisualStyleBackColor = false;
			this->digit5->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// digit6
			// 
			this->digit6->BackColor = System::Drawing::Color::AliceBlue;
			this->digit6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit6->Location = System::Drawing::Point(213, 300);
			this->digit6->Name = L"digit6";
			this->digit6->Size = System::Drawing::Size(80, 80);
			this->digit6->TabIndex = 9;
			this->digit6->Text = L"6";
			this->digit6->UseVisualStyleBackColor = false;
			this->digit6->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// subtract
			// 
			this->subtract->BackColor = System::Drawing::Color::AliceBlue;
			this->subtract->Cursor = System::Windows::Forms::Cursors::Hand;
			this->subtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtract->Location = System::Drawing::Point(309, 300);
			this->subtract->Name = L"subtract";
			this->subtract->Size = System::Drawing::Size(80, 80);
			this->subtract->TabIndex = 10;
			this->subtract->Text = L"-";
			this->subtract->UseVisualStyleBackColor = false;
			this->subtract->Click += gcnew System::EventHandler(this, &MyForm::enterOperator);
			// 
			// digit1
			// 
			this->digit1->BackColor = System::Drawing::Color::AliceBlue;
			this->digit1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit1->Location = System::Drawing::Point(42, 386);
			this->digit1->Name = L"digit1";
			this->digit1->Size = System::Drawing::Size(80, 80);
			this->digit1->TabIndex = 7;
			this->digit1->Text = L"1";
			this->digit1->UseVisualStyleBackColor = false;
			this->digit1->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// digit2
			// 
			this->digit2->BackColor = System::Drawing::Color::AliceBlue;
			this->digit2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit2->Location = System::Drawing::Point(128, 386);
			this->digit2->Name = L"digit2";
			this->digit2->Size = System::Drawing::Size(80, 80);
			this->digit2->TabIndex = 8;
			this->digit2->Text = L"2";
			this->digit2->UseVisualStyleBackColor = false;
			this->digit2->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// digit3
			// 
			this->digit3->BackColor = System::Drawing::Color::AliceBlue;
			this->digit3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit3->Location = System::Drawing::Point(213, 386);
			this->digit3->Name = L"digit3";
			this->digit3->Size = System::Drawing::Size(80, 80);
			this->digit3->TabIndex = 9;
			this->digit3->Text = L"3";
			this->digit3->UseVisualStyleBackColor = false;
			this->digit3->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// multiply
			// 
			this->multiply->BackColor = System::Drawing::Color::AliceBlue;
			this->multiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->Location = System::Drawing::Point(309, 386);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(80, 80);
			this->multiply->TabIndex = 10;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = false;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::enterOperator);
			// 
			// decimal
			// 
			this->decimal->BackColor = System::Drawing::Color::AliceBlue;
			this->decimal->Cursor = System::Windows::Forms::Cursors::Hand;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->Location = System::Drawing::Point(42, 472);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(80, 80);
			this->decimal->TabIndex = 7;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = false;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::decimalClick);
			// 
			// digit0
			// 
			this->digit0->BackColor = System::Drawing::Color::AliceBlue;
			this->digit0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->digit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->digit0->Location = System::Drawing::Point(128, 472);
			this->digit0->Name = L"digit0";
			this->digit0->Size = System::Drawing::Size(80, 80);
			this->digit0->TabIndex = 8;
			this->digit0->Text = L"0";
			this->digit0->UseVisualStyleBackColor = false;
			this->digit0->Click += gcnew System::EventHandler(this, &MyForm::enterNumber);
			// 
			// equals
			// 
			this->equals->BackColor = System::Drawing::Color::AliceBlue;
			this->equals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->equals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->Location = System::Drawing::Point(213, 472);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(80, 80);
			this->equals->TabIndex = 9;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = false;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equals_Click);
			// 
			// divide
			// 
			this->divide->BackColor = System::Drawing::Color::AliceBlue;
			this->divide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->Location = System::Drawing::Point(309, 472);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(80, 80);
			this->divide->TabIndex = 10;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = false;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::enterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(426, 571);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->subtract);
			this->Controls->Add(this->add);
			this->Controls->Add(this->equals);
			this->Controls->Add(this->digit3);
			this->Controls->Add(this->digit6);
			this->Controls->Add(this->digit0);
			this->Controls->Add(this->digit9);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->digit2);
			this->Controls->Add(this->digit1);
			this->Controls->Add(this->digit5);
			this->Controls->Add(this->digit4);
			this->Controls->Add(this->digit8);
			this->Controls->Add(this->digit7);
			this->Controls->Add(this->plusMinus);
			this->Controls->Add(this->clearEverything);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->backspace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		//variables
		double firstDigit, secondDigit, result;					//holds the first and second number value, and the result
		bool boolOperator = false;								//holds if each double is filled for the eqaution
		String^ currentNum = "";								//holds the current number being typed out. txtDisplay->Text holds the text that is displayed
		String^ afterOperator = "";								//holds the button inputs after the operator
		String^ operators;										//holds what kind of operation the calculator will perform

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		//button press for the number buttons
		private: System::Void enterNumber(System::Object^ sender, System::EventArgs^ e) {
			Button^ inputNumbers = safe_cast<Button^>(sender);

			//gets the input and adds it to the textbox string, also adds to currentNum
			if (txtDisplay->Text == "0")
				txtDisplay->Text = inputNumbers->Text;
			else
				txtDisplay->Text += inputNumbers->Text;

			currentNum += inputNumbers->Text;
		}

		//button press for operator buttons
		private: System::Void enterOperator(System::Object^ sender, System::EventArgs^ e) {
			Button^ inputOperators = safe_cast<Button^>(sender);

			//if an operator isnt selected yet
			if (!boolOperator){
				//gets the first digit and the operation, then clears the display
				firstDigit = Double::Parse(currentNum);
				currentNum = "";
				operators = inputOperators->Text;
				txtDisplay->Text += " " + inputOperators->Text + " ";
				boolOperator = true;

			}else{
				//removes the last operator and adds the current to display
				operators = inputOperators->Text;
				txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 3);
				txtDisplay->Text += " " + inputOperators->Text + " ";
			}
		}

		//button press for decimal
		private: System::Void decimalClick(System::Object^ sender, System::EventArgs^ e) {

			//adds the decimal to the text if the string does not contain a decimal
			if (!currentNum->Contains(".")){
				txtDisplay->Text += ".";
				currentNum += ".";
			}
		}
	
		//button press for the equal button
		private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e) {
			
			//gets the second digit from the number being typed out
			secondDigit = Double::Parse(currentNum);

			//performs the operation and saves it to result
			if (operators == "+"){
				result = firstDigit + secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);

			}else if (operators == "-"){
				result = firstDigit - secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);

			}else if (operators == "*"){
				result = firstDigit * secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);

			}else if (operators == "/"){
				result = firstDigit / secondDigit;
				txtDisplay->Text = System::Convert::ToString(result);
			}
			currentNum = txtDisplay->Text;
			boolOperator = false;
		}
	
		//clear button, will clear the current thing being typed
		private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
			
			//erases the whole thing if the first value is still being inputted
			if (boolOperator)
				txtDisplay->Text = txtDisplay->Text->Substring(0, txtDisplay->Text->LastIndexOf(" ")+1);
			else
				txtDisplay->Text = "0";
			currentNum = "";
		}
		
		//clear everything button, will clear everything
		private: System::Void clearEverything_Click(System::Object^ sender, System::EventArgs^ e) {

			boolOperator = false;
			currentNum = "";
			txtDisplay->Text = "0";
		}
		
		//sets a value the typed negative/positive
		private: System::Void plusMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		
			//removes the '-' character if present, else it adds '-' to the current value being typed
			if (currentNum->Contains("-")){
				currentNum = currentNum->Remove(0, 1);
				txtDisplay->Text = txtDisplay->Text->Substring(0, txtDisplay->Text->LastIndexOf(" ") + 1);
				txtDisplay->Text += currentNum;

			}else {
				currentNum = "-" + currentNum;
				txtDisplay->Text = txtDisplay->Text->Substring(0, txtDisplay->Text->LastIndexOf(" ") + 1);
				txtDisplay->Text += currentNum;
			}		
		}

		//backspaces the current value
		private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {

			//backspaces if the current num has a character in it, does nothing otherwise
			if (currentNum->Length > 0)
			{
				txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
				currentNum = currentNum->Remove(currentNum->Length - 1, 1);

				if (txtDisplay->Text == "")
					txtDisplay->Text = "0";
			}
		}
};
}
