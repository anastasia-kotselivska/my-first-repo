#pragma once
namespace expenses {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Windows::Forms;

	public ref class Expenses : public System::Windows::Forms::Form
	{
	public:
		Expenses(void)
		{
			InitializeComponent();
		}

	protected:
		~Expenses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ sumInput;
	protected:

	private: System::Windows::Forms::Label^ sumLabel;
	protected:

	protected:

	private: System::Windows::Forms::Label^ categoryLabel;
	private: System::Windows::Forms::Label^ descLabel;
	private: System::Windows::Forms::TextBox^ descInput;
	private: System::Windows::Forms::Label^ dateLabel;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker;
	private: System::Windows::Forms::Button^ SaveButton;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ Entering;
	private: System::Windows::Forms::TabPage^ Statistics;
	private: System::Windows::Forms::TabPage^ AboutAuthor;
	private: System::Windows::Forms::Label^ labelText;
	private: System::Windows::Forms::Label^ labelEmail;
	private: System::Windows::Forms::Label^ labelGit;
	private: System::Windows::Forms::Label^ labelPhone;
	private: System::Windows::Forms::ComboBox^ category;
	private: System::Windows::Forms::Button^ CleanButton;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ labelTime2;
	private: System::Windows::Forms::Label^ labelTime1;
	private: System::Windows::Forms::Button^ CalculateStatisticsButton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelTotal;
	private: System::Windows::Forms::Label^ labelMin;
	private: System::Windows::Forms::Label^ labelMax;
	private: System::Windows::Forms::Label^ labelAverage;
	private: System::Windows::Forms::Button^ CleanStatisticsButton;    
	protected:

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Expenses::typeid));
			this->sumInput = (gcnew System::Windows::Forms::TextBox());
			this->sumLabel = (gcnew System::Windows::Forms::Label());
			this->categoryLabel = (gcnew System::Windows::Forms::Label());
			this->descLabel = (gcnew System::Windows::Forms::Label());
			this->descInput = (gcnew System::Windows::Forms::TextBox());
			this->dateLabel = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->SaveButton = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Entering = (gcnew System::Windows::Forms::TabPage());
			this->CleanButton = (gcnew System::Windows::Forms::Button());
			this->category = (gcnew System::Windows::Forms::ComboBox());
			this->Statistics = (gcnew System::Windows::Forms::TabPage());
			this->CleanStatisticsButton = (gcnew System::Windows::Forms::Button());
			this->labelMin = (gcnew System::Windows::Forms::Label());
			this->labelMax = (gcnew System::Windows::Forms::Label());
			this->labelAverage = (gcnew System::Windows::Forms::Label());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CalculateStatisticsButton = (gcnew System::Windows::Forms::Button());
			this->labelTime2 = (gcnew System::Windows::Forms::Label());
			this->labelTime1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->AboutAuthor = (gcnew System::Windows::Forms::TabPage());
			this->labelPhone = (gcnew System::Windows::Forms::Label());
			this->labelGit = (gcnew System::Windows::Forms::Label());
			this->labelEmail = (gcnew System::Windows::Forms::Label());
			this->labelText = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->Entering->SuspendLayout();
			this->Statistics->SuspendLayout();
			this->AboutAuthor->SuspendLayout();
			this->SuspendLayout();
			// 
			// sumInput
			// 
			this->sumInput->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->sumInput->Location = System::Drawing::Point(17, 46);
			this->sumInput->Name = L"sumInput";
			this->sumInput->Size = System::Drawing::Size(189, 27);
			this->sumInput->TabIndex = 1;
			this->sumInput->TextChanged += gcnew System::EventHandler(this, &Expenses::textBox1_TextChanged);
			// 
			// sumLabel
			// 
			this->sumLabel->AutoSize = true;
			this->sumLabel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->sumLabel->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->sumLabel->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->sumLabel->Location = System::Drawing::Point(13, 15);
			this->sumLabel->Name = L"sumLabel";
			this->sumLabel->Size = System::Drawing::Size(193, 19);
			this->sumLabel->TabIndex = 2;
			this->sumLabel->Text = L"Введіть суму витрат";
			this->sumLabel->Click += gcnew System::EventHandler(this, &Expenses::label1_Click);
			// 
			// categoryLabel
			// 
			this->categoryLabel->AutoSize = true;
			this->categoryLabel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->categoryLabel->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->categoryLabel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->categoryLabel->Location = System::Drawing::Point(246, 15);
			this->categoryLabel->Name = L"categoryLabel";
			this->categoryLabel->Size = System::Drawing::Size(252, 19);
			this->categoryLabel->TabIndex = 3;
			this->categoryLabel->Text = L"Виберіть категорію витрат";
			this->categoryLabel->Click += gcnew System::EventHandler(this, &Expenses::label2_Click);
			// 
			// descLabel
			// 
			this->descLabel->AutoSize = true;
			this->descLabel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->descLabel->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->descLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->descLabel->Location = System::Drawing::Point(16, 107);
			this->descLabel->Name = L"descLabel";
			this->descLabel->Size = System::Drawing::Size(190, 19);
			this->descLabel->TabIndex = 4;
			this->descLabel->Text = L"Опис товарів/послуг:";
			this->descLabel->Click += gcnew System::EventHandler(this, &Expenses::label3_Click);
			// 
			// descInput
			// 
			this->descInput->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->descInput->Location = System::Drawing::Point(246, 99);
			this->descInput->Name = L"descInput";
			this->descInput->Size = System::Drawing::Size(252, 27);
			this->descInput->TabIndex = 5;
			this->descInput->TextChanged += gcnew System::EventHandler(this, &Expenses::textBox2_TextChanged);
			// 
			// dateLabel
			// 
			this->dateLabel->AutoSize = true;
			this->dateLabel->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->dateLabel->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dateLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateLabel->Location = System::Drawing::Point(67, 162);
			this->dateLabel->Name = L"dateLabel";
			this->dateLabel->Size = System::Drawing::Size(139, 19);
			this->dateLabel->TabIndex = 6;
			this->dateLabel->Text = L"Дата витрати:";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->CalendarFont = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker->CalendarForeColor = System::Drawing::SystemColors::ControlDark;
			this->dateTimePicker->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker->Location = System::Drawing::Point(250, 159);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(248, 22);
			this->dateTimePicker->TabIndex = 7;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &Expenses::dateTimePicker_ValueChanged);
			// 
			// SaveButton
			// 
			this->SaveButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->SaveButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->SaveButton->Location = System::Drawing::Point(48, 244);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(158, 38);
			this->SaveButton->TabIndex = 8;
			this->SaveButton->Text = L"ЗБЕРЕГТИ";
			this->SaveButton->UseVisualStyleBackColor = false;
			this->SaveButton->Click += gcnew System::EventHandler(this, &Expenses::SaveButton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->AccessibleName = L"Ввід витрат";
			this->tabControl1->Controls->Add(this->Entering);
			this->tabControl1->Controls->Add(this->Statistics);
			this->tabControl1->Controls->Add(this->AboutAuthor);
			this->tabControl1->Location = System::Drawing::Point(27, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeftLayout = true;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(565, 418);
			this->tabControl1->TabIndex = 9;
			// 
			// Entering
			// 
			this->Entering->Controls->Add(this->CleanButton);
			this->Entering->Controls->Add(this->category);
			this->Entering->Controls->Add(this->sumLabel);
			this->Entering->Controls->Add(this->SaveButton);
			this->Entering->Controls->Add(this->sumInput);
			this->Entering->Controls->Add(this->dateTimePicker);
			this->Entering->Controls->Add(this->categoryLabel);
			this->Entering->Controls->Add(this->dateLabel);
			this->Entering->Controls->Add(this->descLabel);
			this->Entering->Controls->Add(this->descInput);
			this->Entering->Location = System::Drawing::Point(4, 25);
			this->Entering->Name = L"Entering";
			this->Entering->Padding = System::Windows::Forms::Padding(3);
			this->Entering->Size = System::Drawing::Size(557, 389);
			this->Entering->TabIndex = 0;
			this->Entering->Text = L"Ввід витрат";
			this->Entering->UseVisualStyleBackColor = true;
			this->Entering->Click += gcnew System::EventHandler(this, &Expenses::tabPage1_Click);
			// 
			// CleanButton
			// 
			this->CleanButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->CleanButton->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->CleanButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->CleanButton->Location = System::Drawing::Point(246, 244);
			this->CleanButton->Name = L"CleanButton";
			this->CleanButton->Size = System::Drawing::Size(158, 38);
			this->CleanButton->TabIndex = 10;
			this->CleanButton->Text = L"ОЧИСТИТИ";
			this->CleanButton->UseVisualStyleBackColor = false;
			this->CleanButton->Click += gcnew System::EventHandler(this, &Expenses::CleanButtonClick);
			// 
			// category
			// 
			this->category->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(13) {
				L"Продукти харчування", L"Житло/комунальні послуги",
					L"Одяг та взуття", L"Здоров\'я", L"Розваги", L"Транспорт", L"Кафе/ресторани", L"Спорт і хобі", L"Навчання", L"Техніка і гаджети",
					L"Подорожі", L"Автомобіль", L"Косметика і догляд"
			});
			this->category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->category->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->category->FormattingEnabled = true;
			this->category->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Продукти харчування", L"Житло/комунальні послуги",
					L"Транспорт", L"Розваги", L"Одяг та взуття", L"Здоров\'я", L"Навчання", L"Спорт і хобі", L"Гаджети та комунікації", L"Косметика і догляд",
					L"Домашні тварини", L"Побутові товари"
			});
			this->category->Location = System::Drawing::Point(246, 46);
			this->category->MaxDropDownItems = 10;
			this->category->Name = L"category";
			this->category->Size = System::Drawing::Size(252, 28);
			this->category->TabIndex = 9;
			this->category->Text = L"Категорія";
			this->category->SelectedIndexChanged += gcnew System::EventHandler(this, &Expenses::category_SelectedIndexChanged);
			// 
			// Statistics
			// 
			this->Statistics->Controls->Add(this->CleanStatisticsButton);
			this->Statistics->Controls->Add(this->labelMin);
			this->Statistics->Controls->Add(this->labelMax);
			this->Statistics->Controls->Add(this->labelAverage);
			this->Statistics->Controls->Add(this->labelTotal);
			this->Statistics->Controls->Add(this->label1);
			this->Statistics->Controls->Add(this->CalculateStatisticsButton);
			this->Statistics->Controls->Add(this->labelTime2);
			this->Statistics->Controls->Add(this->labelTime1);
			this->Statistics->Controls->Add(this->dateTimePicker1);
			this->Statistics->Controls->Add(this->dateTimePicker2);
			this->Statistics->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Statistics->Location = System::Drawing::Point(4, 25);
			this->Statistics->Name = L"Statistics";
			this->Statistics->Padding = System::Windows::Forms::Padding(3);
			this->Statistics->Size = System::Drawing::Size(557, 389);
			this->Statistics->TabIndex = 1;
			this->Statistics->Text = L"Статистика";
			this->Statistics->UseVisualStyleBackColor = true;
			this->Statistics->Click += gcnew System::EventHandler(this, &Expenses::tabPage2_Click);
			// 
			// CleanStatisticsButton
			// 
			this->CleanStatisticsButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->CleanStatisticsButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->CleanStatisticsButton->Location = System::Drawing::Point(349, 129);
			this->CleanStatisticsButton->Name = L"CleanStatisticsButton";
			this->CleanStatisticsButton->Size = System::Drawing::Size(191, 34);
			this->CleanStatisticsButton->TabIndex = 13;
			this->CleanStatisticsButton->Text = L"Очистити";
			this->CleanStatisticsButton->UseVisualStyleBackColor = false;
			this->CleanStatisticsButton->Click += gcnew System::EventHandler(this, &Expenses::CleanStatisticsButton_Click);
			// 
			// labelMin
			// 
			this->labelMin->AutoSize = true;
			this->labelMin->BackColor = System::Drawing::Color::White;
			this->labelMin->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelMin->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->labelMin->Location = System::Drawing::Point(14, 293);
			this->labelMin->Name = L"labelMin";
			this->labelMin->Size = System::Drawing::Size(208, 21);
			this->labelMin->TabIndex = 12;
			this->labelMin->Text = L"Мінімальна витрата:";
			// 
			// labelMax
			// 
			this->labelMax->AutoSize = true;
			this->labelMax->BackColor = System::Drawing::Color::White;
			this->labelMax->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelMax->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->labelMax->Location = System::Drawing::Point(14, 336);
			this->labelMax->Name = L"labelMax";
			this->labelMax->Size = System::Drawing::Size(227, 21);
			this->labelMax->TabIndex = 11;
			this->labelMax->Text = L"Максимальна витрата:";
			// 
			// labelAverage
			// 
			this->labelAverage->AutoSize = true;
			this->labelAverage->BackColor = System::Drawing::Color::White;
			this->labelAverage->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelAverage->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->labelAverage->Location = System::Drawing::Point(14, 248);
			this->labelAverage->Name = L"labelAverage";
			this->labelAverage->Size = System::Drawing::Size(92, 21);
			this->labelAverage->TabIndex = 10;
			this->labelAverage->Text = L"Середнє:";
			// 
			// labelTotal
			// 
			this->labelTotal->AutoSize = true;
			this->labelTotal->BackColor = System::Drawing::Color::White;
			this->labelTotal->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelTotal->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->labelTotal->Location = System::Drawing::Point(14, 203);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Size = System::Drawing::Size(62, 21);
			this->labelTotal->TabIndex = 9;
			this->labelTotal->Text = L"Сума:";
			this->labelTotal->Click += gcnew System::EventHandler(this, &Expenses::labelsum_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkGray;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(14, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 24);
			this->label1->TabIndex = 8;
			// 
			// CalculateStatisticsButton
			// 
			this->CalculateStatisticsButton->BackColor = System::Drawing::Color::WhiteSmoke;
			this->CalculateStatisticsButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->CalculateStatisticsButton->Location = System::Drawing::Point(349, 28);
			this->CalculateStatisticsButton->Name = L"CalculateStatisticsButton";
			this->CalculateStatisticsButton->Size = System::Drawing::Size(191, 77);
			this->CalculateStatisticsButton->TabIndex = 7;
			this->CalculateStatisticsButton->Text = L"Обчислити статистику";
			this->CalculateStatisticsButton->UseVisualStyleBackColor = false;
			this->CalculateStatisticsButton->Click += gcnew System::EventHandler(this, &Expenses::CalculateStatisticsButton_Click);
			// 
			// labelTime2
			// 
			this->labelTime2->AutoSize = true;
			this->labelTime2->BackColor = System::Drawing::Color::DarkGray;
			this->labelTime2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelTime2->Location = System::Drawing::Point(68, 106);
			this->labelTime2->Name = L"labelTime2";
			this->labelTime2->Size = System::Drawing::Size(143, 24);
			this->labelTime2->TabIndex = 6;
			this->labelTime2->Text = L"Кінцева дата";
			this->labelTime2->Click += gcnew System::EventHandler(this, &Expenses::labelTime2_Click);
			// 
			// labelTime1
			// 
			this->labelTime1->AutoSize = true;
			this->labelTime1->BackColor = System::Drawing::Color::DarkGray;
			this->labelTime1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelTime1->Location = System::Drawing::Point(49, 28);
			this->labelTime1->Name = L"labelTime1";
			this->labelTime1->Size = System::Drawing::Size(177, 24);
			this->labelTime1->TabIndex = 5;
			this->labelTime1->Text = L"Початкова дата";
			this->labelTime1->Click += gcnew System::EventHandler(this, &Expenses::labelTime1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker1->Location = System::Drawing::Point(18, 55);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(233, 30);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(18, 133);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(233, 30);
			this->dateTimePicker2->TabIndex = 3;
			// 
			// AboutAuthor
			// 
			this->AboutAuthor->Controls->Add(this->labelPhone);
			this->AboutAuthor->Controls->Add(this->labelGit);
			this->AboutAuthor->Controls->Add(this->labelEmail);
			this->AboutAuthor->Controls->Add(this->labelText);
			this->AboutAuthor->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->AboutAuthor->Location = System::Drawing::Point(4, 25);
			this->AboutAuthor->Name = L"AboutAuthor";
			this->AboutAuthor->Padding = System::Windows::Forms::Padding(3);
			this->AboutAuthor->Size = System::Drawing::Size(557, 389);
			this->AboutAuthor->TabIndex = 2;
			this->AboutAuthor->Text = L"Про автора";
			this->AboutAuthor->UseVisualStyleBackColor = true;
			// 
			// labelPhone
			// 
			this->labelPhone->AutoSize = true;
			this->labelPhone->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelPhone->Location = System::Drawing::Point(278, 231);
			this->labelPhone->Name = L"labelPhone";
			this->labelPhone->Size = System::Drawing::Size(226, 24);
			this->labelPhone->TabIndex = 5;
			this->labelPhone->Text = L"phone: +380684873738";
			// 
			// labelGit
			// 
			this->labelGit->AutoSize = true;
			this->labelGit->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelGit->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGit->Location = System::Drawing::Point(103, 320);
			this->labelGit->Name = L"labelGit";
			this->labelGit->Size = System::Drawing::Size(401, 24);
			this->labelGit->TabIndex = 4;
			this->labelGit->Text = L"Github: github.com/anastasia-kotselivska";
			// 
			// labelEmail
			// 
			this->labelEmail->AutoSize = true;
			this->labelEmail->Font = (gcnew System::Drawing::Font(L"Arial", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelEmail->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->labelEmail->Location = System::Drawing::Point(144, 269);
			this->labelEmail->Name = L"labelEmail";
			this->labelEmail->Size = System::Drawing::Size(360, 24);
			this->labelEmail->TabIndex = 3;
			this->labelEmail->Text = L"e-mail: nastiakotselivska@gmail.com";
			this->labelEmail->Click += gcnew System::EventHandler(this, &Expenses::label8_Click);
			// 
			// labelText
			// 
			this->labelText->AutoSize = true;
			this->labelText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->labelText->Font = (gcnew System::Drawing::Font(L"Arial", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelText->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->labelText->Location = System::Drawing::Point(6, 49);
			this->labelText->Name = L"labelText";
			this->labelText->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->labelText->Size = System::Drawing::Size(505, 85);
			this->labelText->TabIndex = 2;
			this->labelText->Text = resources->GetString(L"labelText.Text");
			this->labelText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelText->Click += gcnew System::EventHandler(this, &Expenses::label7_Click);
			// 
			// Expenses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(593, 454);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Expenses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Expenses";
			this->Load += gcnew System::EventHandler(this, &Expenses::Expenses_Load);
			this->tabControl1->ResumeLayout(false);
			this->Entering->ResumeLayout(false);
			this->Entering->PerformLayout();
			this->Statistics->ResumeLayout(false);
			this->Statistics->PerformLayout();
			this->AboutAuthor->ResumeLayout(false);
			this->AboutAuthor->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dateTimePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Отримуємо введені дані
		double amount = 0.0;
		try {
			amount = Convert::ToDouble(this->sumInput->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Введена сума некоректна!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ category = this->category->Text;
		String^ description = this->descInput->Text;
		DateTime date = this->dateTimePicker->Value;

		// Перевірка, чи всі поля заповнені
		if (String::IsNullOrEmpty(category) || String::IsNullOrEmpty(description) || amount <= 0)
		{
			MessageBox::Show("Заповніть всі поля перед збереженням! Сума має бути більшою за нуль.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Шлях до файлу, де зберігатимуться дані
		String^ filePath = "expenses.txt";

		try {
			// Створення потоку для запису у файл
			FileStream^ fs = gcnew FileStream(filePath, FileMode::Append, FileAccess::Write);

			// Створення StreamWriter для запису
			StreamWriter^ writer = gcnew StreamWriter(fs);

			// Запис у файл
			writer->WriteLine(String::Format("{0};{1};{2};{3}", amount, category, description, date));

			// Закриття потоку після запису
			writer->Close();

			// Повідомлення про успішне збереження
			MessageBox::Show("Витрати успішно збережені!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при збереженні: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void category_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CleanButtonClick(System::Object^ sender, System::EventArgs^ e) {
		// Очищення текстових полів
		this->sumInput->Clear();
		this->descInput->Clear();
		// Скидання вибору категорії (випадаючий список)
		this->category->SelectedIndex = -1; // Очистити вибір категорії
		// Скидання дати до поточної
		this->dateTimePicker->Value = DateTime::Now;
		// Повідомлення про успішне очищення
		MessageBox::Show("Форма успішно очищена!", "Очищення", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelTime1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelTime2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void labelsum_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Expenses_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CalculateStatisticsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		 // Отримання вибраного періоду
		 DateTime startDate = this->dateTimePicker1->Value;
		 DateTime endDate = this->dateTimePicker2->Value;
		 // Завантажуємо витрати з файлу
		 String^ filePath = "expenses.txt";
		 List<array<String^>^>^ expenses = LoadExpensesFromFile(filePath);
		 // Фільтруємо витрати за період
		 List<array<String^>^>^ filteredExpenses = FilterExpensesByDateRange(expenses, startDate, endDate);
		 // Обчислюємо статистику
		 CalculateStatistics(filteredExpenses);
	 }

	private: List<array<String^>^>^ LoadExpensesFromFile(String^ filePath)
			{
				List<array<String^>^>^ expenses = gcnew List<array<String^>^>();
				try
				{
					// Відкриваємо файл
					StreamReader^ reader = gcnew StreamReader(filePath);
					while (!reader->EndOfStream)
					{
						String^ line = reader->ReadLine();
						array<String^>^ parts = line->Split(';');
						if (parts->Length == 4)
						{
							// Додаємо витрату до списку
							expenses->Add(parts);
						}
					}
					reader->Close();
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Помилка при читанні файлу: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				return expenses;
			}

	private: List<array<String^>^>^ FilterExpensesByDateRange(List<array<String^>^>^ expenses, DateTime startDate, DateTime endDate)
		   {
			   List<array<String^>^>^ filteredExpenses = gcnew List<array<String^>^>();
			   for each (array<String^> ^ expense in expenses)
			   {
				   DateTime date = Convert::ToDateTime(expense[3]);
				   if (date >= startDate && date <= endDate)
				   {
					   filteredExpenses->Add(expense);
				   }
			   }
			   return filteredExpenses;
		   }

	private: void CalculateStatistics(List<array<String^>^>^ expenses)
			   {
				   if (expenses->Count == 0)
				   {
					   MessageBox::Show("Немає витрат для цього періоду.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return;
				   }

				   double maxExpense = Double::MinValue; 
				   double minExpense = Double::MaxValue;
				   double total = 0.0;
				   
				   for each (array<String^> ^ expense in expenses)
				   {
					   double amount = Convert::ToDouble(expense[0]);
					   total += amount;
					   if (amount > maxExpense)
					   {
						   maxExpense = amount;
					   }
					   if (amount < minExpense)
					   {
						   minExpense = amount;
					   }
				   }

				   double average = total / expenses->Count;

				   // Виведення результатів на форму
				   this->labelTotal->Text = "Сума: " + total.ToString("F2");
				   this->labelAverage->Text = "Середнє: " + average.ToString("F2");
				   this->labelMax->Text = "Максимальна витрата: " + maxExpense.ToString("F2");
				   this->labelMin->Text = "Мінімальна витрата: " + minExpense.ToString("F2");

			   }

	private: System::Void CleanStatisticsButton_Click(System::Object^ sender, System::EventArgs^ e) {
					 this->labelTotal->Text = "Сума:";
					 this->labelAverage->Text = "Середнє:";
					 this->labelMin->Text = "Мінімальна витрата:";
					 this->labelMax->Text = "Максимальна витрата:";
					 this->dateTimePicker1->Value = DateTime::Now;
					 this->dateTimePicker2->Value = DateTime::Now;
					 MessageBox::Show("Статистика успішно очищена!", "Очищення", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
    };
}

