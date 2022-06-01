#pragma once
#include "hdr.h"
#define S 300

int* type = new int;
int* size = new int;
wchar_t stop = 3;

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
	private: System::Windows::Forms::Button^ read;


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
			this->read = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 57);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(692, 237);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->AcceptsTab = true;
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 349);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(692, 258);
			this->textBox2->TabIndex = 1;
			// 
			// cipher
			// 
			this->cipher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cipher->Location = System::Drawing::Point(12, 300);
			this->cipher->Name = L"cipher";
			this->cipher->Size = System::Drawing::Size(180, 43);
			this->cipher->TabIndex = 2;
			this->cipher->Text = L"Зашифровать";
			this->cipher->UseVisualStyleBackColor = true;
			this->cipher->Click += gcnew System::EventHandler(this, &NepForm::cipher_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(222, 19);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(285, 35);
			this->label2->TabIndex = 5;
			this->label2->Text = L"*Шифр не выбран*";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// decipher
			// 
			this->decipher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->decipher->Location = System::Drawing::Point(198, 300);
			this->decipher->Name = L"decipher";
			this->decipher->Size = System::Drawing::Size(180, 43);
			this->decipher->TabIndex = 6;
			this->decipher->Text = L"Расшифровать";
			this->decipher->UseVisualStyleBackColor = true;
			this->decipher->Click += gcnew System::EventHandler(this, &NepForm::decipher_Click);
			// 
			// сaesar
			// 
			this->сaesar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->сaesar->Location = System::Drawing::Point(710, 57);
			this->сaesar->Name = L"сaesar";
			this->сaesar->Size = System::Drawing::Size(139, 54);
			this->сaesar->TabIndex = 7;
			this->сaesar->Text = L"Шифр Цезаря";
			this->сaesar->UseVisualStyleBackColor = true;
			this->сaesar->Click += gcnew System::EventHandler(this, &NepForm::сaesar_Click);
			// 
			// save
			// 
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->Location = System::Drawing::Point(710, 409);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(139, 54);
			this->save->TabIndex = 9;
			this->save->Text = L"Сохранить в файл";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &NepForm::save_Click);
			// 
			// atbash
			// 
			this->atbash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->atbash->Location = System::Drawing::Point(710, 114);
			this->atbash->Name = L"atbash";
			this->atbash->Size = System::Drawing::Size(139, 54);
			this->atbash->TabIndex = 10;
			this->atbash->Text = L"Шифр Атбаша";
			this->atbash->UseVisualStyleBackColor = true;
			this->atbash->Click += gcnew System::EventHandler(this, &NepForm::atbash_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(710, 174);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(139, 54);
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
			this->label1->Location = System::Drawing::Point(729, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 48);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Доступные\nшифры:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// scan
			// 
			this->scan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->scan->Location = System::Drawing::Point(524, 300);
			this->scan->Name = L"scan";
			this->scan->Size = System::Drawing::Size(180, 43);
			this->scan->TabIndex = 13;
			this->scan->Text = L"Сканировать";
			this->scan->UseVisualStyleBackColor = true;
			this->scan->Click += gcnew System::EventHandler(this, &NepForm::scan_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(425, 291);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &NepForm::pictureBox1_Click);
			// 
			// read
			// 
			this->read->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->read->Location = System::Drawing::Point(710, 349);
			this->read->Name = L"read";
			this->read->Size = System::Drawing::Size(139, 54);
			this->read->TabIndex = 15;
			this->read->Text = L"Считать с файла";
			this->read->UseVisualStyleBackColor = true;
			this->read->Click += gcnew System::EventHandler(this, &NepForm::read_Click);
			// 
			// NepForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Menu;
			this->ClientSize = System::Drawing::Size(851, 616);
			this->Controls->Add(this->read);
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
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"NepForm";
			this->Text = L"NepForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void cipher_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ space = nullptr;
		textBox2->Text = space;
		String^ txt = textBox1->Text;
		txt += stop;

		*size = 0;
		while (txt[*size] != stop)
			*size += 1;
		wchar_t* txt_proc = new wchar_t[*size];

		switch (*type) {
		case 1:
			textBox2->Text = cipher_caesar(txt_proc, txt, stop);
			break;
		case 2:
			textBox2->Text = cipher_atbash(txt_proc, txt, stop);
			break;
		case 3:
			textBox2->Text = cipher_rot13(txt_proc, txt, stop);
			break;
		default:
			textBox2->Text = "*Выберите шифр*";
		}

		delete[] txt_proc;
	}

	private: System::Void decipher_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ space = nullptr;
		textBox2->Text = space;
		String^ txt = textBox1->Text;
		txt += stop;

		*size = 0;
		while (txt[*size] != stop)
			*size += 1;
		wchar_t* txt_proc = new wchar_t[*size];

		switch (*type) {
		case 1:
			textBox2->Text = decipher_caesar(txt_proc, txt, stop);
			break;
		case 2:
			textBox2->Text = cipher_atbash(txt_proc, txt, stop);
			break;
		case 3:
			textBox2->Text = decipher_rot13(txt_proc, txt, stop);
			break;
		default:
			textBox2->Text = "*Выберите шифр*";
		}

		delete[] txt_proc;
	}
	private: System::Void swap_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ swap = textBox2->Text;
		textBox2->Text = textBox1->Text;
		textBox1->Text = swap;
	}
	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
			System::IO::File::WriteAllText("t1.txt", textBox2->Text);
			textBox2->Text = " *Данные успешно записаны*";
	}
	private: System::Void сaesar_Click(System::Object^ sender, System::EventArgs^ e) {
		*type = 1;
		label2->Text = "Выбран Шифр Цезаря";
		label2->AutoSize = false;
		label2->Size = System::Drawing::Size(340, 35);
		label2->Location = System::Drawing::Point(190, 19);
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void atbash_Click(System::Object^ sender, System::EventArgs^ e) {
		*type = 2;
		label2->Text = "Выбран Шифр Атбаша";
		label2->AutoSize = false;
		label2->Size = System::Drawing::Size(340, 35);
		label2->Location = System::Drawing::Point(190, 19);
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}
	private: System::Void ROT13_Click(System::Object^ sender, System::EventArgs^ e) {
		*type = 3;
		label2->Text = "Выбран Шифр ROT13";
		label2->AutoSize = false;
		label2->Size = System::Drawing::Size(340, 35);
		label2->Location = System::Drawing::Point(190, 19);
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
	}

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox2->Text;
		textBox2->Text = nullptr;
	}

	private: System::Void scan_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ space = nullptr;
		textBox2->Text = space;
		String^ txt = textBox1->Text;
		txt += stop;

		*size = 0;
		while (txt[*size] != stop)
			*size += 1;
		wchar_t* txt_proc = new wchar_t[*size];
		int iffy = 0;


		String^ temp;
		if (*size > 0) {
			switch (*type) {
			case 1:
				temp = space;
				temp = cipher_caesar(txt_proc, txt, stop);
				textBox2->Text += "Зашифрованный текст (Шифр Цезаря): " + temp + "\r\n";
				temp += stop;
				temp = cipher_atbash(txt_proc, temp, stop);
				textBox2->Text += "\r\n-Результат попытки разшифровать шифр используя ключ шифра Атбаша:\r\n" + temp;
				if (temp == textBox1->Text)
					textBox2->Text += "\r\n\t*Равен исходному тексту*\r\n";
				else
					textBox2->Text += "\r\n\t*Отличен от исходного текста*\r\n";

				temp = space;
				temp = cipher_caesar(txt_proc, txt, stop) + stop;
				temp = decipher_rot13(txt_proc, temp, stop);
				textBox2->Text += "\r\n-Результат попытки разшифровать шифр используя ключ шифра ROT13:\r\n" + temp;
				if (temp == textBox1->Text)
					textBox2->Text += "\r\n\t*Равен исходному тексту*\r\n";
				else
					textBox2->Text += "\r\n\t*Отличен от исходного текста*\r\n";

				break;

			case 2:
				temp = space;
				temp = cipher_atbash(txt_proc, txt, stop);
				textBox2->Text += "Зашифрованный текст (Шифр Атбаша): " + temp + "\r\n";
				temp += stop;
				temp = decipher_caesar(txt_proc, temp, stop);
				textBox2->Text += "\r\n-Результат попытки разшифровать шифр используя ключ шифра Цезаря:\r\n" + temp;
				if (temp == textBox1->Text)
					textBox2->Text += "\r\n\t*Равен исходному тексту*\r\n";
				else
					textBox2->Text += "\r\n\t*Отличен от исходного текста*\r\n";

				temp = space;
				temp = cipher_atbash(txt_proc, txt, stop) + stop;
				temp = decipher_rot13(txt_proc, temp, stop);
				textBox2->Text += "\r\n-Результат попытки разшифровать шифр используя ключ шифра ROT13:\r\n" + temp;
				if (temp == textBox1->Text)
					textBox2->Text += "\r\n\t*Равен исходному тексту*\r\n";
				else
					textBox2->Text += "\r\n\t*Отличен от исходного текста*\r\n";

				break;

			case 3:
				temp = space;
				temp = cipher_rot13(txt_proc, txt, stop);
				textBox2->Text += "Зашифрованный текст (Шифр ROT13): " + temp + "\r\n";
				temp += stop;
				temp = decipher_caesar(txt_proc, temp, stop);
				textBox2->Text += "\r\n-Результат попытки разшифровать шифр используя ключ шифра Цезаря:\r\n" + temp;
				if (temp == textBox1->Text)
					textBox2->Text += "\r\n\t*Равен исходному тексту*\r\n";
				else
					textBox2->Text += "\r\n\t*Отличен от исходного текста*\r\n";

				temp = space;
				temp = cipher_rot13(txt_proc, txt, stop) + stop;
				temp = cipher_atbash(txt_proc, temp, stop);
				textBox2->Text += "\r\n-Результат попытки разшифровать шифр используя ключ шифра Атбаша:\r\n" + temp;
				if (temp == textBox1->Text)
					textBox2->Text += "\r\n\t*Равен исходному тексту*\r\n";
				else
					textBox2->Text += "\r\n\t*Отличен от исходного текста*\r\n";

				break;

			default:
				textBox2->Text = "*Выберите шифр*";
			}
		}
		else
				textBox2->Text += " *Вы должны ввести текст*\r\n";
		delete[] txt_proc;
	}
private: System::Void read_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* f;
	if (f = fopen("t1.txt", "r")) {
		fclose(f);
		textBox1->Text = System::IO::File::ReadAllText("t1.txt");
		textBox2->Text = " *Данные успешно считаны*";
	}
	else {
		textBox2->Text = " *Файла не существует*";
	}
}

};
}
