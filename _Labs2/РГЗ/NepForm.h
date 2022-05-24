#pragma once
#include "hdr.h"
#define S 300

int* k = new int;

namespace РГЗ {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для forma
	/// </summary>
	public ref class NepForm : public System::Windows::Forms::Form
	{
	public:
		NepForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~NepForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ cipher;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ decipher;
	private: System::Windows::Forms::Button^ сaesar;


	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ atbash;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ scan;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NepForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->cipher = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->decipher = (gcnew System::Windows::Forms::Button());
			this->сaesar = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->atbash = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->scan = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 57);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(569, 174);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &NepForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->AcceptsTab = true;
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 286);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(569, 174);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &NepForm::textBox2_TextChanged);
			// 
			// cipher
			// 
			this->cipher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cipher->Location = System::Drawing::Point(12, 237);
			this->cipher->Name = L"cipher";
			this->cipher->Size = System::Drawing::Size(139, 43);
			this->cipher->TabIndex = 2;
			this->cipher->Text = L"Зашифровать";
			this->cipher->UseVisualStyleBackColor = true;
			this->cipher->Click += gcnew System::EventHandler(this, &NepForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(157, 19);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(285, 35);
			this->label2->TabIndex = 5;
			this->label2->Text = L"*Шифр не выбран*";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// decipher
			// 
			this->decipher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->decipher->Location = System::Drawing::Point(157, 237);
			this->decipher->Name = L"decipher";
			this->decipher->Size = System::Drawing::Size(139, 43);
			this->decipher->TabIndex = 6;
			this->decipher->Text = L"Разшифровать";
			this->decipher->UseVisualStyleBackColor = true;
			this->decipher->Click += gcnew System::EventHandler(this, &NepForm::decipher_Click);
			// 
			// сaesar
			// 
			this->сaesar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->сaesar->Location = System::Drawing::Point(587, 57);
			this->сaesar->Name = L"сaesar";
			this->сaesar->Size = System::Drawing::Size(139, 43);
			this->сaesar->TabIndex = 7;
			this->сaesar->Text = L"Шифр Цезаря";
			this->сaesar->UseVisualStyleBackColor = true;
			this->сaesar->Click += gcnew System::EventHandler(this, &NepForm::сaesar_Click);
			// 
			// save
			// 
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->Location = System::Drawing::Point(587, 350);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(139, 43);
			this->save->TabIndex = 9;
			this->save->Text = L"Сохранить";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &NepForm::save_Click);
			// 
			// atbash
			// 
			this->atbash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->atbash->Location = System::Drawing::Point(587, 123);
			this->atbash->Name = L"atbash";
			this->atbash->Size = System::Drawing::Size(139, 43);
			this->atbash->TabIndex = 10;
			this->atbash->Text = L"Шифр Атбаша";
			this->atbash->UseVisualStyleBackColor = true;
			this->atbash->Click += gcnew System::EventHandler(this, &NepForm::atbash_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(587, 188);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(139, 43);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Шифр ROT13";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &NepForm::ROT13_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(597, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 48);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Доступные\nшифры:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// scan
			// 
			this->scan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->scan->Location = System::Drawing::Point(462, 237);
			this->scan->Name = L"scan";
			this->scan->Size = System::Drawing::Size(119, 43);
			this->scan->TabIndex = 13;
			this->scan->Text = L"Сканировать";
			this->scan->UseVisualStyleBackColor = true;
			this->scan->Click += gcnew System::EventHandler(this, &NepForm::scan_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(358, 237);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(46, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &NepForm::pictureBox1_Click);
			// 
			// NepForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(732, 478);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->scan);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->atbash);
			this->Controls->Add(this->save);
			this->Controls->Add(this->сaesar);
			this->Controls->Add(this->decipher);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cipher);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"NepForm";
			this->Text = L"NepForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		wchar_t stop = '*';
		String^ space = nullptr;
		textBox2->Text = space;
		textBox1->Text += stop;

		int s = 0;
		while (textBox1->Text[s] != stop)
			s++;
		wchar_t* a = new wchar_t[s];

		if (*k == 1)
			for (int i = 0; textBox1->Text[i] != stop; i++) {
				*(a + i) = textBox1->Text[i];
				cipher_caesar(a + i);
				textBox2->Text += *(a + i);
			}
		if (*k == 2)
			for (int i = 0; textBox1->Text[i] != stop; i++) {
				a[i] = textBox1->Text[i];
				cipher_atbosh(a + i);
				textBox2->Text += *(a + i);
			}
		if (*k == 3)
			for (int i = 0; textBox1->Text[i] != stop; i++) {
				a[i] = textBox1->Text[i];
				cipher_rot13(a + i);
				textBox2->Text += *(a + i);
			}
		textBox1->Text = space;
		delete[] a;
	}
	
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void decipher_Click(System::Object^ sender, System::EventArgs^ e) {
		wchar_t stop = '*';
		String^ space = nullptr;
		textBox2->Text = space;
		textBox1->Text += stop;

		int s = 0;
		while (textBox1->Text[s] != stop)
			s++;
		wchar_t* a = new wchar_t [s];

		if (*k == 1)
			for (int i = 0; textBox1->Text[i] != stop; i++) {
				*(a + i) = textBox1->Text[i];
				decipher_caesar(a + i);
				textBox2->Text += *(a + i);
			}
		if (*k == 2)
			for (int i = 0; textBox1->Text[i] != stop; i++) {
				a[i] = textBox1->Text[i];
				cipher_atbosh(a + i);
				textBox2->Text += *(a + i);
			}
		if (*k == 3)
			for (int i = 0; textBox1->Text[i] != stop; i++) {
				a[i] = textBox1->Text[i];
				decipher_rot13(a + i);
				textBox2->Text += *(a + i);
			}
		textBox1->Text = space;
		delete[] a;
	}
	private: System::Void swap_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ swap = textBox2->Text;
		textBox2->Text = textBox1->Text;
		textBox1->Text = swap;
	}
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
		FILE* f;
		fopen_s(&f, "t1.txt", "w");
		fprintf(f, "%s\n", textBox2->Text);
		fclose(f);
	}
	private: System::Void сaesar_Click(System::Object^ sender, System::EventArgs^ e) {
		*k = 1;
		label2->Text = "Выбран Шифр Цезаря";
		label2->AutoSize = false;//285, 35
		label2->Size = System::Drawing::Size(340, 35);
		label2->Location = System::Drawing::Point(157 - (340 - 285)/2, 19);
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void atbash_Click(System::Object^ sender, System::EventArgs^ e) {
		*k = 2;
		label2->Text = "Выбран Шифр Атбаша";
		label2->AutoSize = false;//285, 35
		label2->Size = System::Drawing::Size(350, 35);
		label2->Location = System::Drawing::Point(157 - (340 - 285) / 2, 19);
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void ROT13_Click(System::Object^ sender, System::EventArgs^ e) {
		*k = 3;
		label2->Text = "Выбран Шифр ROT13";
		label2->AutoSize = false;//285, 35
		label2->Size = System::Drawing::Size(350, 35);
		label2->Location = System::Drawing::Point(157 - (340 - 285) / 2, 19);
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ swap = textBox2->Text;
	textBox2->Text = textBox1->Text;
	textBox1->Text = swap;
}

private: System::Void scan_Click(System::Object^ sender, System::EventArgs^ e) {
	wchar_t stop = '*';
	String^ space = nullptr;
	textBox2->Text = space;
	String^ txt = textBox1->Text;
	txt += stop;
	String^ temp;

	int s = 0;
	while (txt[s] != stop)
		s++;
	wchar_t* a = new wchar_t[s];
	int iffy = 0;

	if (*k == 1) {
		temp = space;
		for (int i = 0; txt[i] != stop; i++) {
			*(a + i) = txt[i];
			cipher_caesar(a + i);
			cipher_atbosh(a + i);
			temp += *(a + i);
		}
		if (temp == textBox1->Text) {
			textBox2->Text += "*После шифрования, данный текст возможно расшифровать используя ключ шифра АТБОША*\t";
			iffy = 1;
		}
		temp = space;
		for (int i = 0; txt[i] != stop; i++) {
			*(a + i) = txt[i];
			cipher_caesar(a + i);
			decipher_rot13(a + i);
			temp += *(a + i);
		}
		if (temp == textBox1->Text) {
			textBox2->Text += "*После шифрования, данный текст возможно расшифровать используя ключ шифра ROT13*";
			iffy = 1;
		}
		if (iffy != 1)
			textBox2->Text = "*После шифрования, данный текст возможно расшифровать лишь используя ключ выбранного шифра*";
	}
	if (*k == 2) {
		temp = space;
		for (int i = 0; txt[i] != stop; i++) {
			*(a + i) = txt[i];
			cipher_atbosh(a + i);
			decipher_caesar(a + i);
			temp += *(a + i);
		}
		if (temp == textBox1->Text) {
			textBox2->Text += "*После шифрования, данный текст возможно расшифровать используя ключ шифра ЦЕЗАРЯ*\t";
			iffy = 1;
		}
		temp = space;
		for (int i = 0; txt[i] != stop; i++) {
			*(a + i) = txt[i];
			cipher_atbosh(a + i);
			decipher_rot13(a + i);
			temp += *(a + i);
		}
		if (temp == textBox1->Text) {
			textBox2->Text += "*После шифрования, данный текст возможно расшифровать используя ключ шифра ROT13*";
			iffy = 1;
		}
		if (iffy != 1)
			textBox2->Text = "*После шифрования, данный текст возможно расшифровать лишь используя ключ выбранного шифра*";
	}
	if (*k == 3) {
		temp = space;
		for (int i = 0; txt[i] != stop; i++) {
			*(a + i) = txt[i];
			cipher_rot13(a + i);
			decipher_caesar(a + i);
			temp += *(a + i);
		}
		if (temp == textBox1->Text) {
			textBox2->Text += "*После шифрования, данный текст возможно расшифровать используя ключ шифра ЦЕЗАРЯ*\t";
			iffy = 1;
		}
		temp = space;
		for (int i = 0; txt[i] != stop; i++) {
			*(a + i) = txt[i];
			cipher_rot13(a + i);
			cipher_atbosh(a + i);
			temp += *(a + i);
		}
		if (temp == textBox1->Text) {
			textBox2->Text += "*После шифрования, данный текст возможно расшифровать используя ключ шифра АТБОША*";
			iffy = 1;
		}
		if (iffy != 1)
			textBox2->Text = "*После шифрования, данный текст возможно расшифровать лишь используя ключ выбранного шифра*";
	}
	delete[] a;
}
};
}
