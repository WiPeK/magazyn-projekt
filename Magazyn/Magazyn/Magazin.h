#include "databaseDriver.h"
#include<string>
#pragma once

namespace Magazyn {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace dbDriverSpace;

	/// <summary>
	/// Summary for Magazin
	/// </summary>
	public ref class Magazin : public System::Windows::Forms::Form
	{
	public:
		Magazin(int userIdFromLogin)
		{
			InitializeComponent();
			this->userId = userIdFromLogin;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Magazin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  labelLogedAs;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelLogedUser;

	private:
		int userId;
		int rowId;
		bool userType;
		int relEmployersToCommonData;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::DataGridView^  tableEmployers;
	private: System::Windows::Forms::Button^  btnShowEmployers;
	private: System::Windows::Forms::Button^  btnSearchEmployers;
	private: System::Windows::Forms::TextBox^  txtBoxSearchEmployers;
	private: System::Windows::Forms::Label^  labelLastLogoutVal;


	private: System::Windows::Forms::Label^  labelLastLoginVal;

	private: System::Windows::Forms::Button^  btnSaveEmployer;
	private: System::Windows::Forms::TextBox^  textBoxEmployerOtherInfo;

	private: System::Windows::Forms::TextBox^  textBoxEmployerPhone;

	private: System::Windows::Forms::TextBox^  textBoxEmployerEmail;

	private: System::Windows::Forms::TextBox^  textBoxEmployerAddress;

	private: System::Windows::Forms::TextBox^  textBoxEmployerSurname;

	private: System::Windows::Forms::TextBox^  textBoxEmployerName;

	private: System::Windows::Forms::TextBox^  textBoxEmployerLogin;

	private: System::Windows::Forms::Label^  labelEmployerLastlogout;
	private: System::Windows::Forms::Label^  labelEmployerLastlogin;
	private: System::Windows::Forms::Label^  labelEmployerInfo;
	private: System::Windows::Forms::Label^  labelEmployerPhone;
	private: System::Windows::Forms::Label^  labelEmployerEmail;
	private: System::Windows::Forms::Label^  labelEmployerAddress;
	private: System::Windows::Forms::Label^  labelEmployerSurname;
	private: System::Windows::Forms::Label^  labelEmployerName;
	private: System::Windows::Forms::Label^  labelEmployerLogin;
	private: System::Windows::Forms::Label^  labelEmplID;
	private: System::Windows::Forms::Label^  labelEmployerId;
	private: System::Windows::Forms::Button^  buttonEmployerDelete;
	private: System::Windows::Forms::CheckBox^  checkBoxIsAdmin;

	private: System::Windows::Forms::Label^  labelIsAdmin;
	private: System::Windows::Forms::TextBox^  textBoxEmployerPassword;
	private: System::Windows::Forms::Label^  labelEmployerPassword;
	private: System::Windows::Forms::Button^  buttonClearForm;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::Label^  labelASOtherInfoVal;
	private: System::Windows::Forms::Label^  labelASAddressVal;
	private: System::Windows::Forms::Label^  labelASSurnameVal;
	private: System::Windows::Forms::Label^  labelASNameVal;
	private: System::Windows::Forms::Label^  labelASLoginVal;
	private: System::Windows::Forms::Label^  labelASIsAdminVal;
	private: System::Windows::Forms::TextBox^  textBoxASRNewPassword;
	private: System::Windows::Forms::Label^  labelASRNewPassword;
	private: System::Windows::Forms::TextBox^  textBoxASNewPassword;
	private: System::Windows::Forms::Label^  labelASNewPassword;
	private: System::Windows::Forms::TextBox^  textBoxASOldPassword;
	private: System::Windows::Forms::Label^  labelASOldPassword;
	private: System::Windows::Forms::CheckBox^  checkBoxASIsAdmin;

	private: System::Windows::Forms::Label^  labelASIsAdmin;
	private: System::Windows::Forms::Label^  labelASLastlogoutVal;
	private: System::Windows::Forms::Label^  labelASLastloginVal;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBoxASPhone;
	private: System::Windows::Forms::TextBox^  textBoxASEmail;
	private: System::Windows::Forms::Label^  labelASLastlogout;
	private: System::Windows::Forms::Label^  labelASLastlogin;
	private: System::Windows::Forms::Label^  labelASOtherInfo;
	private: System::Windows::Forms::Label^  labelASPhone;
	private: System::Windows::Forms::Label^  labelASEmail;
	private: System::Windows::Forms::Label^  labelASAddress;
	private: System::Windows::Forms::Label^  labelASSurname;
	private: System::Windows::Forms::Label^  labelASName;
	private: System::Windows::Forms::Label^  labelASLogin;
	private: System::Windows::Forms::Label^  labelASIDVal;
	private: System::Windows::Forms::Label^  labelASID;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->buttonClearForm = (gcnew System::Windows::Forms::Button());
			this->textBoxEmployerPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelEmployerPassword = (gcnew System::Windows::Forms::Label());
			this->checkBoxIsAdmin = (gcnew System::Windows::Forms::CheckBox());
			this->labelIsAdmin = (gcnew System::Windows::Forms::Label());
			this->buttonEmployerDelete = (gcnew System::Windows::Forms::Button());
			this->labelLastLogoutVal = (gcnew System::Windows::Forms::Label());
			this->labelLastLoginVal = (gcnew System::Windows::Forms::Label());
			this->btnSaveEmployer = (gcnew System::Windows::Forms::Button());
			this->textBoxEmployerOtherInfo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployerPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployerEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployerAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployerSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployerName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployerLogin = (gcnew System::Windows::Forms::TextBox());
			this->labelEmployerLastlogout = (gcnew System::Windows::Forms::Label());
			this->labelEmployerLastlogin = (gcnew System::Windows::Forms::Label());
			this->labelEmployerInfo = (gcnew System::Windows::Forms::Label());
			this->labelEmployerPhone = (gcnew System::Windows::Forms::Label());
			this->labelEmployerEmail = (gcnew System::Windows::Forms::Label());
			this->labelEmployerAddress = (gcnew System::Windows::Forms::Label());
			this->labelEmployerSurname = (gcnew System::Windows::Forms::Label());
			this->labelEmployerName = (gcnew System::Windows::Forms::Label());
			this->labelEmployerLogin = (gcnew System::Windows::Forms::Label());
			this->labelEmplID = (gcnew System::Windows::Forms::Label());
			this->labelEmployerId = (gcnew System::Windows::Forms::Label());
			this->btnSearchEmployers = (gcnew System::Windows::Forms::Button());
			this->txtBoxSearchEmployers = (gcnew System::Windows::Forms::TextBox());
			this->btnShowEmployers = (gcnew System::Windows::Forms::Button());
			this->tableEmployers = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->labelASOtherInfoVal = (gcnew System::Windows::Forms::Label());
			this->labelASAddressVal = (gcnew System::Windows::Forms::Label());
			this->labelASSurnameVal = (gcnew System::Windows::Forms::Label());
			this->labelASNameVal = (gcnew System::Windows::Forms::Label());
			this->labelASLoginVal = (gcnew System::Windows::Forms::Label());
			this->labelASIsAdminVal = (gcnew System::Windows::Forms::Label());
			this->textBoxASRNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelASRNewPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxASNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelASNewPassword = (gcnew System::Windows::Forms::Label());
			this->textBoxASOldPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelASOldPassword = (gcnew System::Windows::Forms::Label());
			this->checkBoxASIsAdmin = (gcnew System::Windows::Forms::CheckBox());
			this->labelASIsAdmin = (gcnew System::Windows::Forms::Label());
			this->labelASLastlogoutVal = (gcnew System::Windows::Forms::Label());
			this->labelASLastloginVal = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxASPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxASEmail = (gcnew System::Windows::Forms::TextBox());
			this->labelASLastlogout = (gcnew System::Windows::Forms::Label());
			this->labelASLastlogin = (gcnew System::Windows::Forms::Label());
			this->labelASOtherInfo = (gcnew System::Windows::Forms::Label());
			this->labelASPhone = (gcnew System::Windows::Forms::Label());
			this->labelASEmail = (gcnew System::Windows::Forms::Label());
			this->labelASAddress = (gcnew System::Windows::Forms::Label());
			this->labelASSurname = (gcnew System::Windows::Forms::Label());
			this->labelASName = (gcnew System::Windows::Forms::Label());
			this->labelASLogin = (gcnew System::Windows::Forms::Label());
			this->labelASIDVal = (gcnew System::Windows::Forms::Label());
			this->labelASID = (gcnew System::Windows::Forms::Label());
			this->labelLogedAs = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelLogedUser = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableEmployers))->BeginInit();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(13, 61);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(938, 539);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->buttonClearForm);
			this->tabPage1->Controls->Add(this->textBoxEmployerPassword);
			this->tabPage1->Controls->Add(this->labelEmployerPassword);
			this->tabPage1->Controls->Add(this->checkBoxIsAdmin);
			this->tabPage1->Controls->Add(this->labelIsAdmin);
			this->tabPage1->Controls->Add(this->buttonEmployerDelete);
			this->tabPage1->Controls->Add(this->labelLastLogoutVal);
			this->tabPage1->Controls->Add(this->labelLastLoginVal);
			this->tabPage1->Controls->Add(this->btnSaveEmployer);
			this->tabPage1->Controls->Add(this->textBoxEmployerOtherInfo);
			this->tabPage1->Controls->Add(this->textBoxEmployerPhone);
			this->tabPage1->Controls->Add(this->textBoxEmployerEmail);
			this->tabPage1->Controls->Add(this->textBoxEmployerAddress);
			this->tabPage1->Controls->Add(this->textBoxEmployerSurname);
			this->tabPage1->Controls->Add(this->textBoxEmployerName);
			this->tabPage1->Controls->Add(this->textBoxEmployerLogin);
			this->tabPage1->Controls->Add(this->labelEmployerLastlogout);
			this->tabPage1->Controls->Add(this->labelEmployerLastlogin);
			this->tabPage1->Controls->Add(this->labelEmployerInfo);
			this->tabPage1->Controls->Add(this->labelEmployerPhone);
			this->tabPage1->Controls->Add(this->labelEmployerEmail);
			this->tabPage1->Controls->Add(this->labelEmployerAddress);
			this->tabPage1->Controls->Add(this->labelEmployerSurname);
			this->tabPage1->Controls->Add(this->labelEmployerName);
			this->tabPage1->Controls->Add(this->labelEmployerLogin);
			this->tabPage1->Controls->Add(this->labelEmplID);
			this->tabPage1->Controls->Add(this->labelEmployerId);
			this->tabPage1->Controls->Add(this->btnSearchEmployers);
			this->tabPage1->Controls->Add(this->txtBoxSearchEmployers);
			this->tabPage1->Controls->Add(this->btnShowEmployers);
			this->tabPage1->Controls->Add(this->tableEmployers);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(930, 513);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Pracownicy";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// buttonClearForm
			// 
			this->buttonClearForm->Location = System::Drawing::Point(425, 474);
			this->buttonClearForm->Name = L"buttonClearForm";
			this->buttonClearForm->Size = System::Drawing::Size(151, 29);
			this->buttonClearForm->TabIndex = 30;
			this->buttonClearForm->Text = L"Wyczyœæ formularz";
			this->buttonClearForm->UseVisualStyleBackColor = true;
			this->buttonClearForm->Click += gcnew System::EventHandler(this, &Magazin::buttonClearForm_Click);
			// 
			// textBoxEmployerPassword
			// 
			this->textBoxEmployerPassword->Location = System::Drawing::Point(605, 430);
			this->textBoxEmployerPassword->Name = L"textBoxEmployerPassword";
			this->textBoxEmployerPassword->PasswordChar = '*';
			this->textBoxEmployerPassword->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerPassword->TabIndex = 29;
			// 
			// labelEmployerPassword
			// 
			this->labelEmployerPassword->AutoSize = true;
			this->labelEmployerPassword->Location = System::Drawing::Point(547, 433);
			this->labelEmployerPassword->Name = L"labelEmployerPassword";
			this->labelEmployerPassword->Size = System::Drawing::Size(52, 18);
			this->labelEmployerPassword->TabIndex = 28;
			this->labelEmployerPassword->Text = L"Has³o:";
			// 
			// checkBoxIsAdmin
			// 
			this->checkBoxIsAdmin->AutoSize = true;
			this->checkBoxIsAdmin->Location = System::Drawing::Point(613, 396);
			this->checkBoxIsAdmin->Name = L"checkBoxIsAdmin";
			this->checkBoxIsAdmin->Size = System::Drawing::Size(15, 14);
			this->checkBoxIsAdmin->TabIndex = 27;
			this->checkBoxIsAdmin->UseVisualStyleBackColor = true;
			// 
			// labelIsAdmin
			// 
			this->labelIsAdmin->AutoSize = true;
			this->labelIsAdmin->Location = System::Drawing::Point(440, 394);
			this->labelIsAdmin->Name = L"labelIsAdmin";
			this->labelIsAdmin->Size = System::Drawing::Size(161, 18);
			this->labelIsAdmin->TabIndex = 26;
			this->labelIsAdmin->Text = L"Prawa administratora:";
			// 
			// buttonEmployerDelete
			// 
			this->buttonEmployerDelete->Location = System::Drawing::Point(610, 474);
			this->buttonEmployerDelete->Name = L"buttonEmployerDelete";
			this->buttonEmployerDelete->Size = System::Drawing::Size(107, 29);
			this->buttonEmployerDelete->TabIndex = 25;
			this->buttonEmployerDelete->Text = L"Usuñ";
			this->buttonEmployerDelete->UseVisualStyleBackColor = true;
			this->buttonEmployerDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonEmployerDelete_Click);
			// 
			// labelLastLogoutVal
			// 
			this->labelLastLogoutVal->AutoSize = true;
			this->labelLastLogoutVal->Location = System::Drawing::Point(607, 360);
			this->labelLastLogoutVal->Name = L"labelLastLogoutVal";
			this->labelLastLogoutVal->Size = System::Drawing::Size(163, 18);
			this->labelLastLogoutVal->TabIndex = 24;
			this->labelLastLogoutVal->Text = L"Ostatnie wylogowanie:";
			// 
			// labelLastLoginVal
			// 
			this->labelLastLoginVal->AutoSize = true;
			this->labelLastLoginVal->Location = System::Drawing::Point(607, 329);
			this->labelLastLoginVal->Name = L"labelLastLoginVal";
			this->labelLastLoginVal->Size = System::Drawing::Size(161, 18);
			this->labelLastLoginVal->TabIndex = 23;
			this->labelLastLoginVal->Text = L"Ostatnie zalogowanie:";
			// 
			// btnSaveEmployer
			// 
			this->btnSaveEmployer->Location = System::Drawing::Point(791, 474);
			this->btnSaveEmployer->Name = L"btnSaveEmployer";
			this->btnSaveEmployer->Size = System::Drawing::Size(107, 29);
			this->btnSaveEmployer->TabIndex = 22;
			this->btnSaveEmployer->Text = L"Dodaj";
			this->btnSaveEmployer->UseVisualStyleBackColor = true;
			this->btnSaveEmployer->Click += gcnew System::EventHandler(this, &Magazin::btnSaveEmployer_Click);
			// 
			// textBoxEmployerOtherInfo
			// 
			this->textBoxEmployerOtherInfo->Location = System::Drawing::Point(605, 286);
			this->textBoxEmployerOtherInfo->Name = L"textBoxEmployerOtherInfo";
			this->textBoxEmployerOtherInfo->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerOtherInfo->TabIndex = 21;
			// 
			// textBoxEmployerPhone
			// 
			this->textBoxEmployerPhone->Location = System::Drawing::Point(605, 254);
			this->textBoxEmployerPhone->Name = L"textBoxEmployerPhone";
			this->textBoxEmployerPhone->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerPhone->TabIndex = 20;
			// 
			// textBoxEmployerEmail
			// 
			this->textBoxEmployerEmail->Location = System::Drawing::Point(605, 222);
			this->textBoxEmployerEmail->Name = L"textBoxEmployerEmail";
			this->textBoxEmployerEmail->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerEmail->TabIndex = 19;
			// 
			// textBoxEmployerAddress
			// 
			this->textBoxEmployerAddress->Location = System::Drawing::Point(605, 190);
			this->textBoxEmployerAddress->Name = L"textBoxEmployerAddress";
			this->textBoxEmployerAddress->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerAddress->TabIndex = 18;
			// 
			// textBoxEmployerSurname
			// 
			this->textBoxEmployerSurname->Location = System::Drawing::Point(605, 158);
			this->textBoxEmployerSurname->Name = L"textBoxEmployerSurname";
			this->textBoxEmployerSurname->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerSurname->TabIndex = 17;
			// 
			// textBoxEmployerName
			// 
			this->textBoxEmployerName->Location = System::Drawing::Point(605, 123);
			this->textBoxEmployerName->Name = L"textBoxEmployerName";
			this->textBoxEmployerName->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerName->TabIndex = 16;
			// 
			// textBoxEmployerLogin
			// 
			this->textBoxEmployerLogin->Location = System::Drawing::Point(605, 91);
			this->textBoxEmployerLogin->Name = L"textBoxEmployerLogin";
			this->textBoxEmployerLogin->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerLogin->TabIndex = 15;
			// 
			// labelEmployerLastlogout
			// 
			this->labelEmployerLastlogout->AutoSize = true;
			this->labelEmployerLastlogout->Location = System::Drawing::Point(438, 360);
			this->labelEmployerLastlogout->Name = L"labelEmployerLastlogout";
			this->labelEmployerLastlogout->Size = System::Drawing::Size(163, 18);
			this->labelEmployerLastlogout->TabIndex = 14;
			this->labelEmployerLastlogout->Text = L"Ostatnie wylogowanie:";
			// 
			// labelEmployerLastlogin
			// 
			this->labelEmployerLastlogin->AutoSize = true;
			this->labelEmployerLastlogin->Location = System::Drawing::Point(440, 329);
			this->labelEmployerLastlogin->Name = L"labelEmployerLastlogin";
			this->labelEmployerLastlogin->Size = System::Drawing::Size(161, 18);
			this->labelEmployerLastlogin->TabIndex = 13;
			this->labelEmployerLastlogin->Text = L"Ostatnie zalogowanie:";
			// 
			// labelEmployerInfo
			// 
			this->labelEmployerInfo->AutoSize = true;
			this->labelEmployerInfo->Location = System::Drawing::Point(485, 290);
			this->labelEmployerInfo->Name = L"labelEmployerInfo";
			this->labelEmployerInfo->Size = System::Drawing::Size(116, 18);
			this->labelEmployerInfo->TabIndex = 12;
			this->labelEmployerInfo->Text = L"Inne informacje:";
			// 
			// labelEmployerPhone
			// 
			this->labelEmployerPhone->AutoSize = true;
			this->labelEmployerPhone->Location = System::Drawing::Point(540, 259);
			this->labelEmployerPhone->Name = L"labelEmployerPhone";
			this->labelEmployerPhone->Size = System::Drawing::Size(61, 18);
			this->labelEmployerPhone->TabIndex = 11;
			this->labelEmployerPhone->Text = L"Telefon:";
			// 
			// labelEmployerEmail
			// 
			this->labelEmployerEmail->AutoSize = true;
			this->labelEmployerEmail->Location = System::Drawing::Point(549, 226);
			this->labelEmployerEmail->Name = L"labelEmployerEmail";
			this->labelEmployerEmail->Size = System::Drawing::Size(52, 18);
			this->labelEmployerEmail->TabIndex = 10;
			this->labelEmployerEmail->Text = L"Email:";
			// 
			// labelEmployerAddress
			// 
			this->labelEmployerAddress->AutoSize = true;
			this->labelEmployerAddress->Location = System::Drawing::Point(547, 193);
			this->labelEmployerAddress->Name = L"labelEmployerAddress";
			this->labelEmployerAddress->Size = System::Drawing::Size(54, 18);
			this->labelEmployerAddress->TabIndex = 9;
			this->labelEmployerAddress->Text = L"Adres:";
			// 
			// labelEmployerSurname
			// 
			this->labelEmployerSurname->AutoSize = true;
			this->labelEmployerSurname->Location = System::Drawing::Point(522, 162);
			this->labelEmployerSurname->Name = L"labelEmployerSurname";
			this->labelEmployerSurname->Size = System::Drawing::Size(79, 18);
			this->labelEmployerSurname->TabIndex = 8;
			this->labelEmployerSurname->Text = L"Nazwisko:";
			// 
			// labelEmployerName
			// 
			this->labelEmployerName->AutoSize = true;
			this->labelEmployerName->Location = System::Drawing::Point(560, 127);
			this->labelEmployerName->Name = L"labelEmployerName";
			this->labelEmployerName->Size = System::Drawing::Size(41, 18);
			this->labelEmployerName->TabIndex = 7;
			this->labelEmployerName->Text = L"Imiê:";
			// 
			// labelEmployerLogin
			// 
			this->labelEmployerLogin->AutoSize = true;
			this->labelEmployerLogin->Location = System::Drawing::Point(550, 95);
			this->labelEmployerLogin->Name = L"labelEmployerLogin";
			this->labelEmployerLogin->Size = System::Drawing::Size(51, 18);
			this->labelEmployerLogin->TabIndex = 6;
			this->labelEmployerLogin->Text = L"Login:";
			// 
			// labelEmplID
			// 
			this->labelEmplID->AutoSize = true;
			this->labelEmplID->Location = System::Drawing::Point(607, 57);
			this->labelEmplID->Name = L"labelEmplID";
			this->labelEmplID->Size = System::Drawing::Size(17, 18);
			this->labelEmplID->TabIndex = 5;
			this->labelEmplID->Text = L"#";
			// 
			// labelEmployerId
			// 
			this->labelEmployerId->AutoSize = true;
			this->labelEmployerId->Location = System::Drawing::Point(422, 57);
			this->labelEmployerId->Name = L"labelEmployerId";
			this->labelEmployerId->Size = System::Drawing::Size(179, 18);
			this->labelEmployerId->TabIndex = 4;
			this->labelEmployerId->Text = L"Identyfikator pracownika:";
			// 
			// btnSearchEmployers
			// 
			this->btnSearchEmployers->Location = System::Drawing::Point(791, 17);
			this->btnSearchEmployers->Name = L"btnSearchEmployers";
			this->btnSearchEmployers->Size = System::Drawing::Size(120, 26);
			this->btnSearchEmployers->TabIndex = 3;
			this->btnSearchEmployers->Text = L"Wyszukaj";
			this->btnSearchEmployers->UseVisualStyleBackColor = true;
			this->btnSearchEmployers->Click += gcnew System::EventHandler(this, &Magazin::btnSearchEmployers_Click);
			// 
			// txtBoxSearchEmployers
			// 
			this->txtBoxSearchEmployers->Location = System::Drawing::Point(534, 17);
			this->txtBoxSearchEmployers->Name = L"txtBoxSearchEmployers";
			this->txtBoxSearchEmployers->Size = System::Drawing::Size(251, 26);
			this->txtBoxSearchEmployers->TabIndex = 2;
			// 
			// btnShowEmployers
			// 
			this->btnShowEmployers->Location = System::Drawing::Point(21, 9);
			this->btnShowEmployers->Name = L"btnShowEmployers";
			this->btnShowEmployers->Size = System::Drawing::Size(219, 34);
			this->btnShowEmployers->TabIndex = 1;
			this->btnShowEmployers->Text = L"Poka¿ pracowników";
			this->btnShowEmployers->UseVisualStyleBackColor = true;
			this->btnShowEmployers->Click += gcnew System::EventHandler(this, &Magazin::btnShowEmployers_Click);
			// 
			// tableEmployers
			// 
			this->tableEmployers->AllowUserToOrderColumns = true;
			this->tableEmployers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableEmployers->Location = System::Drawing::Point(21, 49);
			this->tableEmployers->Name = L"tableEmployers";
			this->tableEmployers->ReadOnly = true;
			this->tableEmployers->Size = System::Drawing::Size(382, 458);
			this->tableEmployers->TabIndex = 0;
			this->tableEmployers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::tableEmployers_CellClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(930, 513);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Klienci";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(930, 513);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Dostawcy";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(930, 513);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Zwroty";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(930, 513);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Asortyment";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(930, 513);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Transakcje";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(930, 513);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Ustawienia";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->labelASOtherInfoVal);
			this->tabPage8->Controls->Add(this->labelASAddressVal);
			this->tabPage8->Controls->Add(this->labelASSurnameVal);
			this->tabPage8->Controls->Add(this->labelASNameVal);
			this->tabPage8->Controls->Add(this->labelASLoginVal);
			this->tabPage8->Controls->Add(this->labelASIsAdminVal);
			this->tabPage8->Controls->Add(this->textBoxASRNewPassword);
			this->tabPage8->Controls->Add(this->labelASRNewPassword);
			this->tabPage8->Controls->Add(this->textBoxASNewPassword);
			this->tabPage8->Controls->Add(this->labelASNewPassword);
			this->tabPage8->Controls->Add(this->textBoxASOldPassword);
			this->tabPage8->Controls->Add(this->labelASOldPassword);
			this->tabPage8->Controls->Add(this->checkBoxASIsAdmin);
			this->tabPage8->Controls->Add(this->labelASIsAdmin);
			this->tabPage8->Controls->Add(this->labelASLastlogoutVal);
			this->tabPage8->Controls->Add(this->labelASLastloginVal);
			this->tabPage8->Controls->Add(this->button1);
			this->tabPage8->Controls->Add(this->textBoxASPhone);
			this->tabPage8->Controls->Add(this->textBoxASEmail);
			this->tabPage8->Controls->Add(this->labelASLastlogout);
			this->tabPage8->Controls->Add(this->labelASLastlogin);
			this->tabPage8->Controls->Add(this->labelASOtherInfo);
			this->tabPage8->Controls->Add(this->labelASPhone);
			this->tabPage8->Controls->Add(this->labelASEmail);
			this->tabPage8->Controls->Add(this->labelASAddress);
			this->tabPage8->Controls->Add(this->labelASSurname);
			this->tabPage8->Controls->Add(this->labelASName);
			this->tabPage8->Controls->Add(this->labelASLogin);
			this->tabPage8->Controls->Add(this->labelASIDVal);
			this->tabPage8->Controls->Add(this->labelASID);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(930, 513);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Ustawienia konta";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// labelASOtherInfoVal
			// 
			this->labelASOtherInfoVal->AutoSize = true;
			this->labelASOtherInfoVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASOtherInfoVal->Location = System::Drawing::Point(207, 315);
			this->labelASOtherInfoVal->Name = L"labelASOtherInfoVal";
			this->labelASOtherInfoVal->Size = System::Drawing::Size(17, 18);
			this->labelASOtherInfoVal->TabIndex = 64;
			this->labelASOtherInfoVal->Text = L"#";
			// 
			// labelASAddressVal
			// 
			this->labelASAddressVal->AutoSize = true;
			this->labelASAddressVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASAddressVal->Location = System::Drawing::Point(207, 218);
			this->labelASAddressVal->Name = L"labelASAddressVal";
			this->labelASAddressVal->Size = System::Drawing::Size(17, 18);
			this->labelASAddressVal->TabIndex = 63;
			this->labelASAddressVal->Text = L"#";
			// 
			// labelASSurnameVal
			// 
			this->labelASSurnameVal->AutoSize = true;
			this->labelASSurnameVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASSurnameVal->Location = System::Drawing::Point(207, 187);
			this->labelASSurnameVal->Name = L"labelASSurnameVal";
			this->labelASSurnameVal->Size = System::Drawing::Size(17, 18);
			this->labelASSurnameVal->TabIndex = 62;
			this->labelASSurnameVal->Text = L"#";
			// 
			// labelASNameVal
			// 
			this->labelASNameVal->AutoSize = true;
			this->labelASNameVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASNameVal->Location = System::Drawing::Point(207, 152);
			this->labelASNameVal->Name = L"labelASNameVal";
			this->labelASNameVal->Size = System::Drawing::Size(17, 18);
			this->labelASNameVal->TabIndex = 61;
			this->labelASNameVal->Text = L"#";
			// 
			// labelASLoginVal
			// 
			this->labelASLoginVal->AutoSize = true;
			this->labelASLoginVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASLoginVal->Location = System::Drawing::Point(207, 119);
			this->labelASLoginVal->Name = L"labelASLoginVal";
			this->labelASLoginVal->Size = System::Drawing::Size(17, 18);
			this->labelASLoginVal->TabIndex = 60;
			this->labelASLoginVal->Text = L"#";
			// 
			// labelASIsAdminVal
			// 
			this->labelASIsAdminVal->AutoSize = true;
			this->labelASIsAdminVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASIsAdminVal->Location = System::Drawing::Point(234, 408);
			this->labelASIsAdminVal->Name = L"labelASIsAdminVal";
			this->labelASIsAdminVal->Size = System::Drawing::Size(17, 18);
			this->labelASIsAdminVal->TabIndex = 59;
			this->labelASIsAdminVal->Text = L"#";
			// 
			// textBoxASRNewPassword
			// 
			this->textBoxASRNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxASRNewPassword->Location = System::Drawing::Point(606, 187);
			this->textBoxASRNewPassword->Name = L"textBoxASRNewPassword";
			this->textBoxASRNewPassword->PasswordChar = '*';
			this->textBoxASRNewPassword->Size = System::Drawing::Size(293, 26);
			this->textBoxASRNewPassword->TabIndex = 58;
			// 
			// labelASRNewPassword
			// 
			this->labelASRNewPassword->AutoSize = true;
			this->labelASRNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASRNewPassword->Location = System::Drawing::Point(509, 191);
			this->labelASRNewPassword->Name = L"labelASRNewPassword";
			this->labelASRNewPassword->Size = System::Drawing::Size(93, 18);
			this->labelASRNewPassword->TabIndex = 57;
			this->labelASRNewPassword->Text = L"Nowe has³o:";
			// 
			// textBoxASNewPassword
			// 
			this->textBoxASNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxASNewPassword->Location = System::Drawing::Point(606, 152);
			this->textBoxASNewPassword->Name = L"textBoxASNewPassword";
			this->textBoxASNewPassword->PasswordChar = '*';
			this->textBoxASNewPassword->Size = System::Drawing::Size(293, 26);
			this->textBoxASNewPassword->TabIndex = 56;
			// 
			// labelASNewPassword
			// 
			this->labelASNewPassword->AutoSize = true;
			this->labelASNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASNewPassword->Location = System::Drawing::Point(509, 155);
			this->labelASNewPassword->Name = L"labelASNewPassword";
			this->labelASNewPassword->Size = System::Drawing::Size(93, 18);
			this->labelASNewPassword->TabIndex = 55;
			this->labelASNewPassword->Text = L"Nowe has³o:";
			// 
			// textBoxASOldPassword
			// 
			this->textBoxASOldPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxASOldPassword->Location = System::Drawing::Point(606, 116);
			this->textBoxASOldPassword->Name = L"textBoxASOldPassword";
			this->textBoxASOldPassword->PasswordChar = '*';
			this->textBoxASOldPassword->Size = System::Drawing::Size(293, 26);
			this->textBoxASOldPassword->TabIndex = 54;
			// 
			// labelASOldPassword
			// 
			this->labelASOldPassword->AutoSize = true;
			this->labelASOldPassword->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASOldPassword->Location = System::Drawing::Point(509, 119);
			this->labelASOldPassword->Name = L"labelASOldPassword";
			this->labelASOldPassword->Size = System::Drawing::Size(91, 18);
			this->labelASOldPassword->TabIndex = 53;
			this->labelASOldPassword->Text = L"Stare has³o:";
			// 
			// checkBoxASIsAdmin
			// 
			this->checkBoxASIsAdmin->AutoSize = true;
			this->checkBoxASIsAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxASIsAdmin->Location = System::Drawing::Point(213, 412);
			this->checkBoxASIsAdmin->Name = L"checkBoxASIsAdmin";
			this->checkBoxASIsAdmin->Size = System::Drawing::Size(15, 14);
			this->checkBoxASIsAdmin->TabIndex = 52;
			this->checkBoxASIsAdmin->UseVisualStyleBackColor = true;
			// 
			// labelASIsAdmin
			// 
			this->labelASIsAdmin->AutoSize = true;
			this->labelASIsAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASIsAdmin->Location = System::Drawing::Point(40, 410);
			this->labelASIsAdmin->Name = L"labelASIsAdmin";
			this->labelASIsAdmin->Size = System::Drawing::Size(161, 18);
			this->labelASIsAdmin->TabIndex = 51;
			this->labelASIsAdmin->Text = L"Prawa administratora:";
			// 
			// labelASLastlogoutVal
			// 
			this->labelASLastlogoutVal->AutoSize = true;
			this->labelASLastlogoutVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASLastlogoutVal->Location = System::Drawing::Point(207, 382);
			this->labelASLastlogoutVal->Name = L"labelASLastlogoutVal";
			this->labelASLastlogoutVal->Size = System::Drawing::Size(17, 18);
			this->labelASLastlogoutVal->TabIndex = 50;
			this->labelASLastlogoutVal->Text = L"#";
			// 
			// labelASLastloginVal
			// 
			this->labelASLastloginVal->AutoSize = true;
			this->labelASLastloginVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASLastloginVal->Location = System::Drawing::Point(207, 351);
			this->labelASLastloginVal->Name = L"labelASLastloginVal";
			this->labelASLastloginVal->Size = System::Drawing::Size(17, 18);
			this->labelASLastloginVal->TabIndex = 49;
			this->labelASLastloginVal->Text = L"#";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(451, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 29);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Zapisz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Magazin::button1_Click);
			// 
			// textBoxASPhone
			// 
			this->textBoxASPhone->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxASPhone->Location = System::Drawing::Point(205, 279);
			this->textBoxASPhone->Name = L"textBoxASPhone";
			this->textBoxASPhone->Size = System::Drawing::Size(293, 26);
			this->textBoxASPhone->TabIndex = 46;
			// 
			// textBoxASEmail
			// 
			this->textBoxASEmail->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxASEmail->Location = System::Drawing::Point(205, 247);
			this->textBoxASEmail->Name = L"textBoxASEmail";
			this->textBoxASEmail->Size = System::Drawing::Size(293, 26);
			this->textBoxASEmail->TabIndex = 45;
			// 
			// labelASLastlogout
			// 
			this->labelASLastlogout->AutoSize = true;
			this->labelASLastlogout->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASLastlogout->Location = System::Drawing::Point(38, 382);
			this->labelASLastlogout->Name = L"labelASLastlogout";
			this->labelASLastlogout->Size = System::Drawing::Size(163, 18);
			this->labelASLastlogout->TabIndex = 40;
			this->labelASLastlogout->Text = L"Ostatnie wylogowanie:";
			// 
			// labelASLastlogin
			// 
			this->labelASLastlogin->AutoSize = true;
			this->labelASLastlogin->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASLastlogin->Location = System::Drawing::Point(40, 351);
			this->labelASLastlogin->Name = L"labelASLastlogin";
			this->labelASLastlogin->Size = System::Drawing::Size(161, 18);
			this->labelASLastlogin->TabIndex = 39;
			this->labelASLastlogin->Text = L"Ostatnie zalogowanie:";
			// 
			// labelASOtherInfo
			// 
			this->labelASOtherInfo->AutoSize = true;
			this->labelASOtherInfo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASOtherInfo->Location = System::Drawing::Point(85, 315);
			this->labelASOtherInfo->Name = L"labelASOtherInfo";
			this->labelASOtherInfo->Size = System::Drawing::Size(116, 18);
			this->labelASOtherInfo->TabIndex = 38;
			this->labelASOtherInfo->Text = L"Inne informacje:";
			// 
			// labelASPhone
			// 
			this->labelASPhone->AutoSize = true;
			this->labelASPhone->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASPhone->Location = System::Drawing::Point(140, 284);
			this->labelASPhone->Name = L"labelASPhone";
			this->labelASPhone->Size = System::Drawing::Size(61, 18);
			this->labelASPhone->TabIndex = 37;
			this->labelASPhone->Text = L"Telefon:";
			// 
			// labelASEmail
			// 
			this->labelASEmail->AutoSize = true;
			this->labelASEmail->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASEmail->Location = System::Drawing::Point(149, 251);
			this->labelASEmail->Name = L"labelASEmail";
			this->labelASEmail->Size = System::Drawing::Size(52, 18);
			this->labelASEmail->TabIndex = 36;
			this->labelASEmail->Text = L"Email:";
			// 
			// labelASAddress
			// 
			this->labelASAddress->AutoSize = true;
			this->labelASAddress->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASAddress->Location = System::Drawing::Point(147, 218);
			this->labelASAddress->Name = L"labelASAddress";
			this->labelASAddress->Size = System::Drawing::Size(54, 18);
			this->labelASAddress->TabIndex = 35;
			this->labelASAddress->Text = L"Adres:";
			// 
			// labelASSurname
			// 
			this->labelASSurname->AutoSize = true;
			this->labelASSurname->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASSurname->Location = System::Drawing::Point(122, 187);
			this->labelASSurname->Name = L"labelASSurname";
			this->labelASSurname->Size = System::Drawing::Size(79, 18);
			this->labelASSurname->TabIndex = 34;
			this->labelASSurname->Text = L"Nazwisko:";
			// 
			// labelASName
			// 
			this->labelASName->AutoSize = true;
			this->labelASName->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASName->Location = System::Drawing::Point(160, 152);
			this->labelASName->Name = L"labelASName";
			this->labelASName->Size = System::Drawing::Size(41, 18);
			this->labelASName->TabIndex = 33;
			this->labelASName->Text = L"Imiê:";
			// 
			// labelASLogin
			// 
			this->labelASLogin->AutoSize = true;
			this->labelASLogin->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASLogin->Location = System::Drawing::Point(150, 120);
			this->labelASLogin->Name = L"labelASLogin";
			this->labelASLogin->Size = System::Drawing::Size(51, 18);
			this->labelASLogin->TabIndex = 32;
			this->labelASLogin->Text = L"Login:";
			// 
			// labelASIDVal
			// 
			this->labelASIDVal->AutoSize = true;
			this->labelASIDVal->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASIDVal->Location = System::Drawing::Point(207, 82);
			this->labelASIDVal->Name = L"labelASIDVal";
			this->labelASIDVal->Size = System::Drawing::Size(17, 18);
			this->labelASIDVal->TabIndex = 31;
			this->labelASIDVal->Text = L"#";
			// 
			// labelASID
			// 
			this->labelASID->AutoSize = true;
			this->labelASID->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelASID->Location = System::Drawing::Point(22, 82);
			this->labelASID->Name = L"labelASID";
			this->labelASID->Size = System::Drawing::Size(179, 18);
			this->labelASID->TabIndex = 30;
			this->labelASID->Text = L"Identyfikator pracownika:";
			// 
			// labelLogedAs
			// 
			this->labelLogedAs->AutoSize = true;
			this->labelLogedAs->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelLogedAs->Location = System::Drawing::Point(662, 31);
			this->labelLogedAs->Name = L"labelLogedAs";
			this->labelLogedAs->Size = System::Drawing::Size(157, 22);
			this->labelLogedAs->TabIndex = 1;
			this->labelLogedAs->Text = L"Zalogowano jako:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(804, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 22);
			this->label1->TabIndex = 2;
			// 
			// labelLogedUser
			// 
			this->labelLogedUser->AutoSize = true;
			this->labelLogedUser->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelLogedUser->Location = System::Drawing::Point(825, 31);
			this->labelLogedUser->Name = L"labelLogedUser";
			this->labelLogedUser->Size = System::Drawing::Size(0, 22);
			this->labelLogedUser->TabIndex = 3;
			// 
			// Magazin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 612);
			this->Controls->Add(this->labelLogedUser);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelLogedAs);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(979, 569);
			this->Name = L"Magazin";
			this->Text = L"Magazyn";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Magazin::Magazin_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Magazin::Magazin_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableEmployers))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Magazin_Load(System::Object^  sender, System::EventArgs^  e) {
			
		tableEmployers->AllowUserToAddRows = false;
			 String^ query = "Select login, type from employers where id_employers ='" + this->userId + "' LIMIT 1";
			 dbDriver db;
			 db.selectOne(query);

			 if (db.getStatus())
			 {
				this->labelLogedUser->Text = db.result->GetString(0);
				this->userType = db.result->GetBoolean(1);
				this->buttonEmployerDelete->Enabled = false;
				disableComponents();
				db.closeConnection();
				accountSettings();

				String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data";
				bindTable(ManyQuery, tableEmployers);
			 }
			 else
			 {
				 MessageBox::Show(db.getError());
				 db.closeConnection();
			 }
	}

	private: Void disableComponents()
	{
		if (!this->userType)
		{
			
			this->btnSaveEmployer->Enabled = false;
		}
	}

	private: Void bindTable(String^ query, System::Windows::Forms::DataGridView^ table)
	{
		dbDriver dbMany;
		dbMany.selectMany(query);

		if (dbMany.getStatus())
		{
			DataTable^ tab = gcnew DataTable();
			dbMany.resultMany->Fill(tab);

			BindingSource^ source = gcnew BindingSource();
			source->DataSource = tab;
			table->DataSource = source;
			dbMany.closeConnection();
		}
		else
		{
			MessageBox::Show(dbMany.getError());
			dbMany.closeConnection();
		}
	}

	private: System::Void btnSearchEmployers_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE employers.name LIKE '%" + txtBoxSearchEmployers->Text + "%' OR employers.surname LIKE '%" + txtBoxSearchEmployers->Text + "%' OR employers.login LIKE '%" + txtBoxSearchEmployers->Text + "%' OR common_data.email LIKE '%" + txtBoxSearchEmployers->Text + "%'";
		bindTable(ManyQuery, tableEmployers);
	}

	private: System::Void btnShowEmployers_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data";
		bindTable(ManyQuery, tableEmployers);
	}
	private: System::Void tableEmployers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowId = Convert::ToInt32(tableEmployers->Rows[e->RowIndex]->Cells[0]->Value);
			labelEmployerPassword->Visible = false;
			textBoxEmployerPassword->Visible = false;
			String^ query = "Select * from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data where employers.id_employers ='" + this->rowId + "' LIMIT 1";
			dbDriver db;
			db.selectOne(query);

			if (db.getStatus())
			{
				relEmployersToCommonData = db.result->GetInt32(7);
				this->labelEmplID->Text = db.result->GetString(0);
				this->textBoxEmployerName->Text = db.result->GetString(1);
				this->textBoxEmployerSurname->Text = db.result->GetString(2);
				this->textBoxEmployerLogin->Text = db.result->GetString(3);
				this->textBoxEmployerAddress->Text = db.result->GetString(10);
				this->textBoxEmployerEmail->Text = db.result->GetString(12);
				this->textBoxEmployerPhone->Text = db.result->GetString(11);
				this->textBoxEmployerOtherInfo->Text = db.result->GetString(13);
				//this->labelEmployerLastlogin->Text = "";
				//this->labelEmployerLastlogout->Text =
				this->checkBoxIsAdmin->Checked = db.result->GetBoolean(8);
				db.closeConnection();
				if (userType)
					this->buttonEmployerDelete->Enabled = true;
				btnSaveEmployer->Text = "Zapisz";
			}
			else
			{
				MessageBox::Show(db.getError());
				db.closeConnection();
			}
		}
	}
	private: System::Void btnSaveEmployer_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (this->textBoxEmployerName->Text->Length > 3 
			&& textBoxEmployerName->Text->Length < 50 
			&& textBoxEmployerSurname->Text->Length > 2 
			&& textBoxEmployerSurname->Text->Length < 50 
			&& textBoxEmployerLogin->Text->Length > 3 
			&& textBoxEmployerLogin->Text->Length < 25
			&& textBoxEmployerAddress->Text->Length > 10
			&& textBoxEmployerAddress->Text->Length < 255
			&& textBoxEmployerEmail->Text->Length > 5
			&& textBoxEmployerEmail->Text->Length < 255
			&& textBoxEmployerPhone->Text->Length > 4
			&& textBoxEmployerPhone->Text->Length < 20
			)
		{
			int type;
			if (this->checkBoxIsAdmin->Checked)
				type = 1;
			else
				type = 0;
			if (this->rowId > 0)
			{
				String^ query = "UPDATE employers SET name='" + textBoxEmployerName->Text
					+ "', surname='" + textBoxEmployerSurname->Text
					+ "', login='" + textBoxEmployerLogin->Text
					+ "', type='" + type
					+ "' WHERE id_employers ='" + rowId + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ cquery = "UPDATE common_data SET address='" + textBoxEmployerAddress->Text
						+ "', phone='" + textBoxEmployerPhone->Text
						+ "', email='" + textBoxEmployerEmail->Text
						+"', other_info='" + textBoxEmployerOtherInfo->Text
						+ "' WHERE id_common_data ='" + relEmployersToCommonData + "'";

					db.update(cquery);

					if (db.getStatus())
					{
						String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data";
						bindTable(ManyQuery, tableEmployers);
						db.closeConnection();
					}
					else
					{
						MessageBox::Show(db.getError());
						db.closeConnection();
					}
				}
				else
				{
					MessageBox::Show(db.getError());
					db.closeConnection();
				}

				clearForm();
			}
			else
			{
				if (textBoxEmployerPassword->Text->Length > 3 && textBoxEmployerPassword->Text->Length < 100)
				{
					String^ cquery = "INSERT INTO common_data(address, phone, email, other_info) VALUES('"
						+ textBoxEmployerAddress->Text + "', '"
						+ textBoxEmployerPhone->Text + "', '"
						+ textBoxEmployerEmail->Text + "', '"
						+ textBoxEmployerOtherInfo->Text + "')";
					dbDriver db;
					db.insert(cquery);

					if (db.getStatus())
					{
						
						db.closeConnection();
						dbDriver dbs;
						String^ squery = "SELECT id_common_data FROM common_data WHERE address='"
							+ textBoxEmployerAddress->Text + "'AND phone='"
							+ textBoxEmployerPhone->Text + "'AND email='"
							+ textBoxEmployerEmail->Text + "'";
						dbs.selectOne(squery);
						if (dbs.getStatus())
						{	
							String^ equery = "INSERT INTO employers(name, surname, login, password, cdata, type) VALUES('"
								+ textBoxEmployerName->Text + "', '"
								+ textBoxEmployerSurname->Text + "', '"
								+ textBoxEmployerLogin->Text + "',password('"
								+ textBoxEmployerPassword->Text + "'),'"
								+ dbs.result->GetInt32(0) + "','"
								+ type + "')";
							dbs.closeConnection();
							dbDriver dbi;
							dbi.insert(equery);

							if (dbi.getStatus())
							{
								String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data";
								bindTable(ManyQuery, tableEmployers);
								dbi.closeConnection();
							}
							else
							{
								MessageBox::Show(db.getError());
								dbi.closeConnection();
							}
						}
						else
						{
							MessageBox::Show(db.getError());
							dbs.closeConnection();
						}						
					}
					else
					{
						MessageBox::Show(db.getError());
						db.closeConnection();
					}
				}
				else
				{
					MessageBox::Show("Has³o za krótkie lub za d³ugie 4-99 znaków.");
				}
				
				clearForm();
			}
		}
		else
		{
			MessageBox::Show("Wprowadzone dane s¹ nieprawdi³owe.");
		}
	}
	private: System::Void buttonClearForm_Click(System::Object^  sender, System::EventArgs^  e) {
		clearForm();
	}
	private: Void clearForm()
	{
		this->labelEmplID->Text = "#";
		this->textBoxEmployerName->Text = "";
		this->textBoxEmployerSurname->Text = "";
		this->textBoxEmployerLogin->Text = "";
		this->textBoxEmployerAddress->Text = "";
		this->textBoxEmployerEmail->Text = "";
		this->textBoxEmployerPhone->Text = "";
		this->textBoxEmployerOtherInfo->Text = "";
		this->labelLastLogoutVal->Text = "";
		this->labelLastLoginVal->Text = "";
		this->checkBoxIsAdmin->Checked = false;
		this->buttonEmployerDelete->Enabled = false;
		btnSaveEmployer->Text = "Dodaj";
		labelEmployerPassword->Visible = true;
		textBoxEmployerPassword->Visible = true;
	}

	private: System::Void buttonEmployerDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (rowId > 1 && userId != rowId)
		{
			if (MessageBox::Show("Czy chcesz usun¹æ u¿ytkownika?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE employers, common_data FROM employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE employers.id_employers='" + rowId + "'";
				dbDriver db;
				db.deleteFromSql(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data";
					bindTable(ManyQuery, tableEmployers);
					clearForm();
					MessageBox::Show("Usuniêto u¿ytkownika");
				}
				else
				{
					MessageBox::Show(db.getError());
					db.closeConnection();
				}
			}
		}
		else
		{
			MessageBox::Show("Nie mo¿na usun¹æ swojego konta lub G³ównego Administratora");
		}
		
	}

	private: System::Void Magazin_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (MessageBox::Show("Czy chcesz zamkn¹æ program?", "Magazyn", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
		{
			this->Close();
		}
	}

	private: Void accountSettings()
	{
		String^ query = "Select * from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data where employers.id_employers ='" + this->userId + "' LIMIT 1";
		dbDriver db;
		db.selectOne(query);

		if (db.getStatus())
		{
			labelASIDVal->Text = db.result->GetString(0);
			labelASNameVal->Text = db.result->GetString(1);
			labelASSurnameVal->Text = db.result->GetString(2);
			labelASLoginVal->Text = db.result->GetString(3);
			//labelASLastloginVal->Text = ;
			//labelASLastlogoutVal->Text = ;
			relEmployersToCommonData = db.result->GetInt32(7);
			int type = db.result->GetInt32(8);
			if (type = 1)
			{
				labelASIsAdminVal->Text = "Posiada";
				checkBoxASIsAdmin->Checked = true;
			}
			else
				labelASIsAdminVal->Text = "Brak";
			labelASAddressVal->Text = db.result->GetString(10);
			textBoxASPhone->Text = db.result->GetString(11);
			textBoxASEmail->Text = db.result->GetString(12);
			labelASOtherInfoVal->Text = db.result->GetString(13);
			db.closeConnection();
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (
			textBoxASEmail->Text->Length > 5
			&& textBoxASEmail->Text->Length < 255
			&& textBoxASPhone->Text->Length > 4
			&& textBoxASPhone->Text->Length < 20
			)
		{
			if (textBoxASOldPassword->Text == "" && textBoxASNewPassword->Text == "" && textBoxASRNewPassword->Text == "")
			{
				String^ cquery = "UPDATE common_data SET phone='" + textBoxASPhone->Text
					+ "', email='" + textBoxASEmail->Text
					+ "' WHERE id_common_data ='" + relEmployersToCommonData + "'";
				dbDriver db;
				db.update(cquery);

				if (db.getStatus())
				{
					MessageBox::Show("Dane zosta³y zaktualizowane");
					db.closeConnection();
				}
				else
				{
					MessageBox::Show(db.getError());
					db.closeConnection();
				}
			}
			else if (textBoxASOldPassword->Text != "" && textBoxASNewPassword->Text != "" && textBoxASRNewPassword->Text != "")
			{
				String^ query = "Select count(id_employers) from employers WHERE id_employers='" + userId + "' AND password=password('" + textBoxASOldPassword->Text + "')";
				dbDriver db;
				db.selectOne(query);
				if (db.getStatus())
				{
					
					if (db.result->GetInt32(0) == 1)
					{
						db.closeConnection();
						if (textBoxASNewPassword->Text->Length > 3 && textBoxASNewPassword->Text->Length < 100
							&& textBoxASRNewPassword->Text->Length > 3 && textBoxASRNewPassword->Text->Length < 100
							&& (textBoxASNewPassword->Text == textBoxASRNewPassword->Text)
							)
						{
							String^ cquery = "UPDATE employers SET password=password('" + textBoxASNewPassword->Text
								+ ")' WHERE id_employers ='" + userId + "'";

							db.update(cquery);
							db.closeConnection();

							cquery = "UPDATE common_data SET common_data.phone='" + textBoxASPhone->Text
								+ "', email='" + textBoxASEmail->Text + "' WHERE id_common_data ='" + relEmployersToCommonData + "'";
							db.update(cquery);

							if (db.getStatus())
							{
								MessageBox::Show("Dane zosta³y zaktualizowane");
								db.closeConnection();
							}
							else
							{
								MessageBox::Show(db.getError());
								db.closeConnection();
							}
						}
						else
						{
							db.closeConnection();
							MessageBox::Show("Nowe has³o i potwierdzenie nowego has³a maj¹ ró¿ne wartoœci");
						}
					}
					else
					{
						MessageBox::Show(db.getError());
						db.closeConnection();
					}
				}
				else
					MessageBox::Show("Wprowadzono niepoprawne dane.");
			}
		}
	}
};
}
