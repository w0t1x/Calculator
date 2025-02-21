#pragma once

namespace websitecreation1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Button_exit;
	private: System::Windows::Forms::Label^ rezult_label;
	private: System::Windows::Forms::Button^ btn_sbr;


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn_proc;

	private: System::Windows::Forms::Button^ btn_del;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btn_umn;

	private: System::Windows::Forms::Button^ btn_min;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btn_pls;
	private: System::Windows::Forms::Button^ btn_toch;



	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ btn_rvn;
	private: float first_name;
	private: char user_action = ' ';
	private: bool is_equal = false;

	protected:

	protected:

	protected:

	protected:


	protected:







	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Button_exit = (gcnew System::Windows::Forms::Button());
			this->rezult_label = (gcnew System::Windows::Forms::Label());
			this->btn_sbr = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_proc = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btn_umn = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btn_pls = (gcnew System::Windows::Forms::Button());
			this->btn_toch = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->btn_rvn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Button_exit
			// 
			this->Button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->Button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Button_exit->ForeColor = System::Drawing::Color::White;
			this->Button_exit->Location = System::Drawing::Point(312, 9);
			this->Button_exit->Name = L"Button_exit";
			this->Button_exit->Size = System::Drawing::Size(31, 31);
			this->Button_exit->TabIndex = 0;
			this->Button_exit->Text = L"X";
			this->Button_exit->UseVisualStyleBackColor = false;
			this->Button_exit->Click += gcnew System::EventHandler(this, &MyForm::Button_exit_Click);
			// 
			// rezult_label
			// 
			this->rezult_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rezult_label->Location = System::Drawing::Point(12, 9);
			this->rezult_label->Name = L"rezult_label";
			this->rezult_label->Size = System::Drawing::Size(254, 74);
			this->rezult_label->TabIndex = 1;
			this->rezult_label->Text = L"0";
			// 
			// btn_sbr
			// 
			this->btn_sbr->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->btn_sbr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sbr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sbr->ForeColor = System::Drawing::Color::White;
			this->btn_sbr->Location = System::Drawing::Point(21, 86);
			this->btn_sbr->Name = L"btn_sbr";
			this->btn_sbr->Size = System::Drawing::Size(65, 55);
			this->btn_sbr->TabIndex = 2;
			this->btn_sbr->Text = L"AC";
			this->btn_sbr->UseVisualStyleBackColor = false;
			this->btn_sbr->Click += gcnew System::EventHandler(this, &MyForm::btn_sbr_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(103, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"+/-";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btn_proc
			// 
			this->btn_proc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->btn_proc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_proc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_proc->ForeColor = System::Drawing::Color::White;
			this->btn_proc->Location = System::Drawing::Point(190, 86);
			this->btn_proc->Name = L"btn_proc";
			this->btn_proc->Size = System::Drawing::Size(65, 55);
			this->btn_proc->TabIndex = 4;
			this->btn_proc->Text = L"%";
			this->btn_proc->UseVisualStyleBackColor = false;
			this->btn_proc->Click += gcnew System::EventHandler(this, &MyForm::btn_proc_Click);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->btn_del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_del->ForeColor = System::Drawing::Color::White;
			this->btn_del->Location = System::Drawing::Point(278, 86);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(65, 55);
			this->btn_del->TabIndex = 5;
			this->btn_del->Text = L"/";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm::btn_del_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(190, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(103, 253);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 7;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(21, 253);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 8;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(21, 174);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 9;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(103, 174);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 55);
			this->button9->TabIndex = 10;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(190, 174);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 55);
			this->button10->TabIndex = 11;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_umn
			// 
			this->btn_umn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->btn_umn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_umn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_umn->ForeColor = System::Drawing::Color::White;
			this->btn_umn->Location = System::Drawing::Point(278, 174);
			this->btn_umn->Name = L"btn_umn";
			this->btn_umn->Size = System::Drawing::Size(65, 55);
			this->btn_umn->TabIndex = 12;
			this->btn_umn->Text = L"*";
			this->btn_umn->UseVisualStyleBackColor = false;
			this->btn_umn->Click += gcnew System::EventHandler(this, &MyForm::btn_umn_Click);
			// 
			// btn_min
			// 
			this->btn_min->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_min->ForeColor = System::Drawing::Color::White;
			this->btn_min->Location = System::Drawing::Point(278, 253);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(65, 55);
			this->btn_min->TabIndex = 13;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = false;
			this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(21, 409);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(147, 55);
			this->button13->TabIndex = 14;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(21, 330);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 55);
			this->button14->TabIndex = 15;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(190, 330);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 16;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_pls
			// 
			this->btn_pls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->btn_pls->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_pls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_pls->ForeColor = System::Drawing::Color::White;
			this->btn_pls->Location = System::Drawing::Point(278, 331);
			this->btn_pls->Name = L"btn_pls";
			this->btn_pls->Size = System::Drawing::Size(65, 55);
			this->btn_pls->TabIndex = 17;
			this->btn_pls->Text = L"+";
			this->btn_pls->UseVisualStyleBackColor = false;
			this->btn_pls->Click += gcnew System::EventHandler(this, &MyForm::btn_pls_Click);
			// 
			// btn_toch
			// 
			this->btn_toch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->btn_toch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_toch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_toch->Location = System::Drawing::Point(190, 409);
			this->btn_toch->Name = L"btn_toch";
			this->btn_toch->Size = System::Drawing::Size(65, 55);
			this->btn_toch->TabIndex = 18;
			this->btn_toch->Text = L",";
			this->btn_toch->UseVisualStyleBackColor = false;
			this->btn_toch->Click += gcnew System::EventHandler(this, &MyForm::btn_toch_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(112)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(108)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(103, 331);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(65, 55);
			this->button19->TabIndex = 20;
			this->button19->Text = L"2";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_rvn
			// 
			this->btn_rvn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(110)),
				static_cast<System::Int32>(static_cast<System::Byte>(5)));
			this->btn_rvn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_rvn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_rvn->ForeColor = System::Drawing::Color::White;
			this->btn_rvn->Location = System::Drawing::Point(278, 409);
			this->btn_rvn->Name = L"btn_rvn";
			this->btn_rvn->Size = System::Drawing::Size(65, 55);
			this->btn_rvn->TabIndex = 21;
			this->btn_rvn->Text = L"=";
			this->btn_rvn->UseVisualStyleBackColor = false;
			this->btn_rvn->Click += gcnew System::EventHandler(this, &MyForm::btn_rvn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->ClientSize = System::Drawing::Size(353, 485);
			this->Controls->Add(this->btn_rvn);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->btn_toch);
			this->Controls->Add(this->btn_pls);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->btn_umn);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_proc);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_sbr);
			this->Controls->Add(this->Button_exit);
			this->Controls->Add(this->rezult_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			   this->rezult_label->ForeColor = Color::White;
			   Button^ button = safe_cast<Button^>(sender);

			   if (this->rezult_label->Text == "0" || is_equal) {
				   this->rezult_label->Text = button->Text;
				   is_equal = false;
			   }
			   else {
				   this->rezult_label->Text = this->rezult_label->Text + button->Text;
			   }

		   }

	private: System::Void btn_pls_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void btn_umn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}

	   private: System::Void math_action(char action) {
		   this->first_name = System::Convert::ToDouble(this->rezult_label->Text);
		   this->user_action = action;
		   this->rezult_label->Text = "0";

	   }

private: System::Void btn_rvn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
		return;

		int second = System::Convert::ToDouble(this->rezult_label->Text);
	int res;
	switch (this->user_action) {
	case '+': res = this->first_name + second; break;
	case '-': res = this->first_name - second; break;
	case '*': res = this->first_name * second; break;
	case '%': res = this->first_name * second / 100; break;
	case '/':
		if (second == 0) {
			res = 0;
			this->rezult_label->ForeColor = Color::Red;
			MessageBox::Show(this, "Действие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = this->first_name / second;
		break;
	}
	this->is_equal = true;
	this->rezult_label->Text = System::Convert::ToString(res);
}
private: System::Void btn_sbr_Click(System::Object^ sender, System::EventArgs^ e) {
	this->rezult_label->Text = "0";
	this->rezult_label->ForeColor = Color::White;
	this->first_name = 0;
	this->user_action = ' ';
	is_equal = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->rezult_label->Text);
	num *= -1;
	this->rezult_label->Text = System::Convert::ToString(num);
}
private: System::Void btn_proc_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
	
}
private: System::Void btn_toch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->rezult_label->Text;
	if(!text->Contains(","))
		this->rezult_label->Text = text + ",";
}
};
}
