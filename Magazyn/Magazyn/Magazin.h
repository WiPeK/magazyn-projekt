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
		int rowIdClients;
		int rowIdProviders;
		int rowIdItems;
		bool userType;
		int relEmployersToCommonData;
		int relClientsToCommonData;
		int relProvidersToCommonData;
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

private: System::Windows::Forms::Button^  buttonSearchClients;


private: System::Windows::Forms::Button^  buttonClearFormClient;

private: System::Windows::Forms::Button^  buttonDeleteClient;

private: System::Windows::Forms::Button^  buttonSaveClient;

private: System::Windows::Forms::TextBox^  textBoxClientOtherInfo;
private: System::Windows::Forms::TextBox^  textBoxClientPhone;
private: System::Windows::Forms::TextBox^  textBoxClientEmail;
private: System::Windows::Forms::TextBox^  textBoxClientAddress;

private: System::Windows::Forms::TextBox^  textBoxClientREGON;
private: System::Windows::Forms::TextBox^  textBoxClientNIP;
private: System::Windows::Forms::TextBox^  textBoxClientName;
private: System::Windows::Forms::Label^  labelClientOtherInfo;
private: System::Windows::Forms::Label^  labelClientPhone;
private: System::Windows::Forms::Label^  labelClientEmail;
private: System::Windows::Forms::Label^  labelClientAddress;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  labelClientNIP;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  labelClientID;

private: System::Windows::Forms::Label^  labelIdClient;
private: System::Windows::Forms::TextBox^  textBoxSearchClients;
private: System::Windows::Forms::Button^  buttonShowClients;
private: System::Windows::Forms::DataGridView^  dataGridViewClients;
private: System::Windows::Forms::Button^  buttonSearchProviders;

private: System::Windows::Forms::Button^  buttonClearProviderForm;
private: System::Windows::Forms::Button^  buttonProviderDelete;
private: System::Windows::Forms::Button^  buttonProviderSave;





private: System::Windows::Forms::TextBox^  textBoxProviderOtherInfo;

private: System::Windows::Forms::TextBox^  textBoxProviderPhone;

private: System::Windows::Forms::TextBox^  textBoxProviderEmail;

private: System::Windows::Forms::TextBox^  textBoxProviderAddress;

private: System::Windows::Forms::TextBox^  textBoxProviderREGON;

private: System::Windows::Forms::TextBox^  textBoxProviderNIP;

private: System::Windows::Forms::TextBox^  textBoxProviderName;
private: System::Windows::Forms::Label^  labelProviderOtherInfo;


private: System::Windows::Forms::Label^  labelProviderPhone;

private: System::Windows::Forms::Label^  labelProviderEmail;

private: System::Windows::Forms::Label^  labelProviderAddress;

private: System::Windows::Forms::Label^  labelProviderREGON;

private: System::Windows::Forms::Label^  labelProviderNIP;

private: System::Windows::Forms::Label^  labelProviderName;

private: System::Windows::Forms::Label^  labelProviderIDVal;

private: System::Windows::Forms::Label^  labelProviderID;

private: System::Windows::Forms::TextBox^  textBoxSearchProviders;

private: System::Windows::Forms::Button^  buttonShowProviders;
private: System::Windows::Forms::DataGridView^  dataGridViewProviders;
private: System::Windows::Forms::Button^  buttonItemsSearch;

private: System::Windows::Forms::Button^  buttonItemClearForm;
private: System::Windows::Forms::Button^  buttonItemDelete;
private: System::Windows::Forms::Button^  buttonItemSave;




private: System::Windows::Forms::TextBox^  textBoxItemModel;






private: System::Windows::Forms::TextBox^  textBoxItemName;




private: System::Windows::Forms::Label^  labelItemPrice;

private: System::Windows::Forms::Label^  labelItemQuantity;

private: System::Windows::Forms::Label^  labelItemModel;

private: System::Windows::Forms::Label^  labelItemName;
private: System::Windows::Forms::Label^  labelItemIDVal;


private: System::Windows::Forms::Label^  labelItemID;

private: System::Windows::Forms::TextBox^  textBoxItemsSearch;
private: System::Windows::Forms::Button^  buttonItemsShow;
private: System::Windows::Forms::DataGridView^  dataGridViewItems;
private: System::Windows::Forms::Label^  labelItemQuantityVal;
private: System::Windows::Forms::DataGridView^  dataGridViewParams;
private: System::Windows::Forms::DataGridView^  dataGridViewProducers;


private: System::Windows::Forms::MaskedTextBox^  TextBoxItemPrice;
private: System::Windows::Forms::Button^  buttonItemParamAdd;



private: System::Windows::Forms::Label^  labelItemParam;
private: System::Windows::Forms::TextBox^  textBoxItemParamVal;


private: System::Windows::Forms::ComboBox^  comboBoxItemParam;
private: System::Windows::Forms::Label^  labelItemProducer;
private: System::Windows::Forms::Button^  buttonItemProducerAdd;



private: System::Windows::Forms::ComboBox^  comboBoxItemProducer;
private: System::Windows::Forms::Button^  buttonItemProducerHelp;

private: System::Windows::Forms::Button^  buttonItemParamHelp;

private: System::Windows::Forms::Button^  buttonItemHelp;
private: System::Windows::Forms::Button^  buttonItemProducerDelete;

private: System::Windows::Forms::Button^  buttonItemParamDelete;


private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxSellQuantity;

private: System::Windows::Forms::Label^  labelSellQuantity;

private: System::Windows::Forms::ComboBox^  comboBoxSellItem;

private: System::Windows::Forms::Label^  labelSellItem;


private: System::Windows::Forms::ComboBox^  comboBoxSellClient;

private: System::Windows::Forms::Label^  labelSellClient;

private: System::Windows::Forms::Label^  labelSellIDVal;





private: System::Windows::Forms::Label^  labelSellID;
private: System::Windows::Forms::DataGridView^  dataGridViewSalesClients;


private: System::Windows::Forms::DataGridView^  dataGridViewSalesItems;



private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Button^  buttonSellsShow;
private: System::Windows::Forms::DataGridView^  dataGridViewSales;



private: System::Windows::Forms::Button^  buttonTransactionFormClear;
private: System::Windows::Forms::Button^  buttonTransactionDelete;
private: System::Windows::Forms::Button^  buttonTransactionSave;
private: System::Windows::Forms::DataGridView^  dataGridViewSalesEmployers;

private: System::Windows::Forms::TabPage^  tabPage9;
private: System::Windows::Forms::Button^  buttonSalesHelp;
private: System::Windows::Forms::Button^  button3;






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
			this->buttonSearchClients = (gcnew System::Windows::Forms::Button());
			this->buttonClearFormClient = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteClient = (gcnew System::Windows::Forms::Button());
			this->buttonSaveClient = (gcnew System::Windows::Forms::Button());
			this->textBoxClientOtherInfo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientREGON = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientNIP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClientName = (gcnew System::Windows::Forms::TextBox());
			this->labelClientOtherInfo = (gcnew System::Windows::Forms::Label());
			this->labelClientPhone = (gcnew System::Windows::Forms::Label());
			this->labelClientEmail = (gcnew System::Windows::Forms::Label());
			this->labelClientAddress = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelClientNIP = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labelClientID = (gcnew System::Windows::Forms::Label());
			this->labelIdClient = (gcnew System::Windows::Forms::Label());
			this->textBoxSearchClients = (gcnew System::Windows::Forms::TextBox());
			this->buttonShowClients = (gcnew System::Windows::Forms::Button());
			this->dataGridViewClients = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttonSearchProviders = (gcnew System::Windows::Forms::Button());
			this->buttonClearProviderForm = (gcnew System::Windows::Forms::Button());
			this->buttonProviderDelete = (gcnew System::Windows::Forms::Button());
			this->buttonProviderSave = (gcnew System::Windows::Forms::Button());
			this->textBoxProviderOtherInfo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProviderPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProviderEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProviderAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProviderREGON = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProviderNIP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProviderName = (gcnew System::Windows::Forms::TextBox());
			this->labelProviderOtherInfo = (gcnew System::Windows::Forms::Label());
			this->labelProviderPhone = (gcnew System::Windows::Forms::Label());
			this->labelProviderEmail = (gcnew System::Windows::Forms::Label());
			this->labelProviderAddress = (gcnew System::Windows::Forms::Label());
			this->labelProviderREGON = (gcnew System::Windows::Forms::Label());
			this->labelProviderNIP = (gcnew System::Windows::Forms::Label());
			this->labelProviderName = (gcnew System::Windows::Forms::Label());
			this->labelProviderIDVal = (gcnew System::Windows::Forms::Label());
			this->labelProviderID = (gcnew System::Windows::Forms::Label());
			this->textBoxSearchProviders = (gcnew System::Windows::Forms::TextBox());
			this->buttonShowProviders = (gcnew System::Windows::Forms::Button());
			this->dataGridViewProviders = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->buttonItemHelp = (gcnew System::Windows::Forms::Button());
			this->buttonItemProducerDelete = (gcnew System::Windows::Forms::Button());
			this->buttonItemParamDelete = (gcnew System::Windows::Forms::Button());
			this->buttonItemProducerHelp = (gcnew System::Windows::Forms::Button());
			this->buttonItemParamHelp = (gcnew System::Windows::Forms::Button());
			this->labelItemProducer = (gcnew System::Windows::Forms::Label());
			this->buttonItemProducerAdd = (gcnew System::Windows::Forms::Button());
			this->comboBoxItemProducer = (gcnew System::Windows::Forms::ComboBox());
			this->buttonItemParamAdd = (gcnew System::Windows::Forms::Button());
			this->labelItemParam = (gcnew System::Windows::Forms::Label());
			this->textBoxItemParamVal = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxItemParam = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridViewParams = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewProducers = (gcnew System::Windows::Forms::DataGridView());
			this->TextBoxItemPrice = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelItemQuantityVal = (gcnew System::Windows::Forms::Label());
			this->buttonItemsSearch = (gcnew System::Windows::Forms::Button());
			this->buttonItemClearForm = (gcnew System::Windows::Forms::Button());
			this->buttonItemDelete = (gcnew System::Windows::Forms::Button());
			this->buttonItemSave = (gcnew System::Windows::Forms::Button());
			this->textBoxItemModel = (gcnew System::Windows::Forms::TextBox());
			this->textBoxItemName = (gcnew System::Windows::Forms::TextBox());
			this->labelItemPrice = (gcnew System::Windows::Forms::Label());
			this->labelItemQuantity = (gcnew System::Windows::Forms::Label());
			this->labelItemModel = (gcnew System::Windows::Forms::Label());
			this->labelItemName = (gcnew System::Windows::Forms::Label());
			this->labelItemIDVal = (gcnew System::Windows::Forms::Label());
			this->labelItemID = (gcnew System::Windows::Forms::Label());
			this->textBoxItemsSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonItemsShow = (gcnew System::Windows::Forms::Button());
			this->dataGridViewItems = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->buttonSalesHelp = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewSalesEmployers = (gcnew System::Windows::Forms::DataGridView());
			this->buttonTransactionFormClear = (gcnew System::Windows::Forms::Button());
			this->buttonTransactionDelete = (gcnew System::Windows::Forms::Button());
			this->buttonTransactionSave = (gcnew System::Windows::Forms::Button());
			this->maskedTextBoxSellQuantity = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelSellQuantity = (gcnew System::Windows::Forms::Label());
			this->comboBoxSellItem = (gcnew System::Windows::Forms::ComboBox());
			this->labelSellItem = (gcnew System::Windows::Forms::Label());
			this->comboBoxSellClient = (gcnew System::Windows::Forms::ComboBox());
			this->labelSellClient = (gcnew System::Windows::Forms::Label());
			this->labelSellIDVal = (gcnew System::Windows::Forms::Label());
			this->labelSellID = (gcnew System::Windows::Forms::Label());
			this->dataGridViewSalesClients = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewSalesItems = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonSellsShow = (gcnew System::Windows::Forms::Button());
			this->dataGridViewSales = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
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
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClients))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProviders))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewParams))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProducers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewItems))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesEmployers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesClients))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesItems))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSales))->BeginInit();
			this->tabPage8->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(13, 61);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(987, 576);
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
			this->tabPage1->Size = System::Drawing::Size(979, 550);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Pracownicy";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// buttonClearForm
			// 
			this->buttonClearForm->Location = System::Drawing::Point(590, 512);
			this->buttonClearForm->Name = L"buttonClearForm";
			this->buttonClearForm->Size = System::Drawing::Size(146, 29);
			this->buttonClearForm->TabIndex = 30;
			this->buttonClearForm->Text = L"Wyczy�� formularz";
			this->buttonClearForm->UseVisualStyleBackColor = true;
			this->buttonClearForm->Click += gcnew System::EventHandler(this, &Magazin::buttonClearForm_Click);
			// 
			// textBoxEmployerPassword
			// 
			this->textBoxEmployerPassword->Location = System::Drawing::Point(670, 474);
			this->textBoxEmployerPassword->Name = L"textBoxEmployerPassword";
			this->textBoxEmployerPassword->PasswordChar = '*';
			this->textBoxEmployerPassword->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerPassword->TabIndex = 29;
			// 
			// labelEmployerPassword
			// 
			this->labelEmployerPassword->AutoSize = true;
			this->labelEmployerPassword->Location = System::Drawing::Point(612, 477);
			this->labelEmployerPassword->Name = L"labelEmployerPassword";
			this->labelEmployerPassword->Size = System::Drawing::Size(52, 18);
			this->labelEmployerPassword->TabIndex = 28;
			this->labelEmployerPassword->Text = L"Has�o:";
			// 
			// checkBoxIsAdmin
			// 
			this->checkBoxIsAdmin->AutoSize = true;
			this->checkBoxIsAdmin->Location = System::Drawing::Point(678, 440);
			this->checkBoxIsAdmin->Name = L"checkBoxIsAdmin";
			this->checkBoxIsAdmin->Size = System::Drawing::Size(15, 14);
			this->checkBoxIsAdmin->TabIndex = 27;
			this->checkBoxIsAdmin->UseVisualStyleBackColor = true;
			// 
			// labelIsAdmin
			// 
			this->labelIsAdmin->AutoSize = true;
			this->labelIsAdmin->Location = System::Drawing::Point(505, 438);
			this->labelIsAdmin->Name = L"labelIsAdmin";
			this->labelIsAdmin->Size = System::Drawing::Size(161, 18);
			this->labelIsAdmin->TabIndex = 26;
			this->labelIsAdmin->Text = L"Prawa administratora:";
			// 
			// buttonEmployerDelete
			// 
			this->buttonEmployerDelete->Location = System::Drawing::Point(742, 512);
			this->buttonEmployerDelete->Name = L"buttonEmployerDelete";
			this->buttonEmployerDelete->Size = System::Drawing::Size(107, 29);
			this->buttonEmployerDelete->TabIndex = 25;
			this->buttonEmployerDelete->Text = L"Usu�";
			this->buttonEmployerDelete->UseVisualStyleBackColor = true;
			this->buttonEmployerDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonEmployerDelete_Click);
			// 
			// labelLastLogoutVal
			// 
			this->labelLastLogoutVal->AutoSize = true;
			this->labelLastLogoutVal->Location = System::Drawing::Point(672, 404);
			this->labelLastLogoutVal->Name = L"labelLastLogoutVal";
			this->labelLastLogoutVal->Size = System::Drawing::Size(163, 18);
			this->labelLastLogoutVal->TabIndex = 24;
			this->labelLastLogoutVal->Text = L"Ostatnie wylogowanie:";
			// 
			// labelLastLoginVal
			// 
			this->labelLastLoginVal->AutoSize = true;
			this->labelLastLoginVal->Location = System::Drawing::Point(672, 373);
			this->labelLastLoginVal->Name = L"labelLastLoginVal";
			this->labelLastLoginVal->Size = System::Drawing::Size(161, 18);
			this->labelLastLoginVal->TabIndex = 23;
			this->labelLastLoginVal->Text = L"Ostatnie zalogowanie:";
			// 
			// btnSaveEmployer
			// 
			this->btnSaveEmployer->Location = System::Drawing::Point(856, 512);
			this->btnSaveEmployer->Name = L"btnSaveEmployer";
			this->btnSaveEmployer->Size = System::Drawing::Size(107, 29);
			this->btnSaveEmployer->TabIndex = 22;
			this->btnSaveEmployer->Text = L"Dodaj";
			this->btnSaveEmployer->UseVisualStyleBackColor = true;
			this->btnSaveEmployer->Click += gcnew System::EventHandler(this, &Magazin::btnSaveEmployer_Click);
			// 
			// textBoxEmployerOtherInfo
			// 
			this->textBoxEmployerOtherInfo->Location = System::Drawing::Point(670, 286);
			this->textBoxEmployerOtherInfo->Multiline = true;
			this->textBoxEmployerOtherInfo->Name = L"textBoxEmployerOtherInfo";
			this->textBoxEmployerOtherInfo->Size = System::Drawing::Size(293, 73);
			this->textBoxEmployerOtherInfo->TabIndex = 21;
			// 
			// textBoxEmployerPhone
			// 
			this->textBoxEmployerPhone->Location = System::Drawing::Point(670, 254);
			this->textBoxEmployerPhone->Name = L"textBoxEmployerPhone";
			this->textBoxEmployerPhone->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerPhone->TabIndex = 20;
			// 
			// textBoxEmployerEmail
			// 
			this->textBoxEmployerEmail->Location = System::Drawing::Point(670, 222);
			this->textBoxEmployerEmail->Name = L"textBoxEmployerEmail";
			this->textBoxEmployerEmail->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerEmail->TabIndex = 19;
			// 
			// textBoxEmployerAddress
			// 
			this->textBoxEmployerAddress->Location = System::Drawing::Point(670, 190);
			this->textBoxEmployerAddress->Name = L"textBoxEmployerAddress";
			this->textBoxEmployerAddress->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerAddress->TabIndex = 18;
			// 
			// textBoxEmployerSurname
			// 
			this->textBoxEmployerSurname->Location = System::Drawing::Point(670, 158);
			this->textBoxEmployerSurname->Name = L"textBoxEmployerSurname";
			this->textBoxEmployerSurname->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerSurname->TabIndex = 17;
			// 
			// textBoxEmployerName
			// 
			this->textBoxEmployerName->Location = System::Drawing::Point(670, 123);
			this->textBoxEmployerName->Name = L"textBoxEmployerName";
			this->textBoxEmployerName->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerName->TabIndex = 16;
			// 
			// textBoxEmployerLogin
			// 
			this->textBoxEmployerLogin->Location = System::Drawing::Point(670, 91);
			this->textBoxEmployerLogin->Name = L"textBoxEmployerLogin";
			this->textBoxEmployerLogin->Size = System::Drawing::Size(293, 26);
			this->textBoxEmployerLogin->TabIndex = 15;
			// 
			// labelEmployerLastlogout
			// 
			this->labelEmployerLastlogout->AutoSize = true;
			this->labelEmployerLastlogout->Location = System::Drawing::Point(503, 404);
			this->labelEmployerLastlogout->Name = L"labelEmployerLastlogout";
			this->labelEmployerLastlogout->Size = System::Drawing::Size(163, 18);
			this->labelEmployerLastlogout->TabIndex = 14;
			this->labelEmployerLastlogout->Text = L"Ostatnie wylogowanie:";
			// 
			// labelEmployerLastlogin
			// 
			this->labelEmployerLastlogin->AutoSize = true;
			this->labelEmployerLastlogin->Location = System::Drawing::Point(505, 373);
			this->labelEmployerLastlogin->Name = L"labelEmployerLastlogin";
			this->labelEmployerLastlogin->Size = System::Drawing::Size(161, 18);
			this->labelEmployerLastlogin->TabIndex = 13;
			this->labelEmployerLastlogin->Text = L"Ostatnie zalogowanie:";
			// 
			// labelEmployerInfo
			// 
			this->labelEmployerInfo->AutoSize = true;
			this->labelEmployerInfo->Location = System::Drawing::Point(550, 290);
			this->labelEmployerInfo->Name = L"labelEmployerInfo";
			this->labelEmployerInfo->Size = System::Drawing::Size(116, 18);
			this->labelEmployerInfo->TabIndex = 12;
			this->labelEmployerInfo->Text = L"Inne informacje:";
			// 
			// labelEmployerPhone
			// 
			this->labelEmployerPhone->AutoSize = true;
			this->labelEmployerPhone->Location = System::Drawing::Point(605, 259);
			this->labelEmployerPhone->Name = L"labelEmployerPhone";
			this->labelEmployerPhone->Size = System::Drawing::Size(61, 18);
			this->labelEmployerPhone->TabIndex = 11;
			this->labelEmployerPhone->Text = L"Telefon:";
			// 
			// labelEmployerEmail
			// 
			this->labelEmployerEmail->AutoSize = true;
			this->labelEmployerEmail->Location = System::Drawing::Point(614, 226);
			this->labelEmployerEmail->Name = L"labelEmployerEmail";
			this->labelEmployerEmail->Size = System::Drawing::Size(52, 18);
			this->labelEmployerEmail->TabIndex = 10;
			this->labelEmployerEmail->Text = L"Email:";
			// 
			// labelEmployerAddress
			// 
			this->labelEmployerAddress->AutoSize = true;
			this->labelEmployerAddress->Location = System::Drawing::Point(612, 193);
			this->labelEmployerAddress->Name = L"labelEmployerAddress";
			this->labelEmployerAddress->Size = System::Drawing::Size(54, 18);
			this->labelEmployerAddress->TabIndex = 9;
			this->labelEmployerAddress->Text = L"Adres:";
			// 
			// labelEmployerSurname
			// 
			this->labelEmployerSurname->AutoSize = true;
			this->labelEmployerSurname->Location = System::Drawing::Point(587, 162);
			this->labelEmployerSurname->Name = L"labelEmployerSurname";
			this->labelEmployerSurname->Size = System::Drawing::Size(79, 18);
			this->labelEmployerSurname->TabIndex = 8;
			this->labelEmployerSurname->Text = L"Nazwisko:";
			// 
			// labelEmployerName
			// 
			this->labelEmployerName->AutoSize = true;
			this->labelEmployerName->Location = System::Drawing::Point(625, 127);
			this->labelEmployerName->Name = L"labelEmployerName";
			this->labelEmployerName->Size = System::Drawing::Size(41, 18);
			this->labelEmployerName->TabIndex = 7;
			this->labelEmployerName->Text = L"Imi�:";
			// 
			// labelEmployerLogin
			// 
			this->labelEmployerLogin->AutoSize = true;
			this->labelEmployerLogin->Location = System::Drawing::Point(615, 95);
			this->labelEmployerLogin->Name = L"labelEmployerLogin";
			this->labelEmployerLogin->Size = System::Drawing::Size(51, 18);
			this->labelEmployerLogin->TabIndex = 6;
			this->labelEmployerLogin->Text = L"Login:";
			// 
			// labelEmplID
			// 
			this->labelEmplID->AutoSize = true;
			this->labelEmplID->Location = System::Drawing::Point(672, 57);
			this->labelEmplID->Name = L"labelEmplID";
			this->labelEmplID->Size = System::Drawing::Size(17, 18);
			this->labelEmplID->TabIndex = 5;
			this->labelEmplID->Text = L"#";
			// 
			// labelEmployerId
			// 
			this->labelEmployerId->AutoSize = true;
			this->labelEmployerId->Location = System::Drawing::Point(487, 57);
			this->labelEmployerId->Name = L"labelEmployerId";
			this->labelEmployerId->Size = System::Drawing::Size(179, 18);
			this->labelEmployerId->TabIndex = 4;
			this->labelEmployerId->Text = L"Identyfikator pracownika:";
			// 
			// btnSearchEmployers
			// 
			this->btnSearchEmployers->Location = System::Drawing::Point(843, 17);
			this->btnSearchEmployers->Name = L"btnSearchEmployers";
			this->btnSearchEmployers->Size = System::Drawing::Size(120, 26);
			this->btnSearchEmployers->TabIndex = 3;
			this->btnSearchEmployers->Text = L"Wyszukaj";
			this->btnSearchEmployers->UseVisualStyleBackColor = true;
			this->btnSearchEmployers->Click += gcnew System::EventHandler(this, &Magazin::btnSearchEmployers_Click);
			// 
			// txtBoxSearchEmployers
			// 
			this->txtBoxSearchEmployers->Location = System::Drawing::Point(582, 18);
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
			this->btnShowEmployers->Text = L"Poka� pracownik�w";
			this->btnShowEmployers->UseVisualStyleBackColor = true;
			this->btnShowEmployers->Click += gcnew System::EventHandler(this, &Magazin::btnShowEmployers_Click);
			// 
			// tableEmployers
			// 
			this->tableEmployers->AllowUserToAddRows = false;
			this->tableEmployers->AllowUserToDeleteRows = false;
			this->tableEmployers->AllowUserToOrderColumns = true;
			this->tableEmployers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableEmployers->Location = System::Drawing::Point(21, 49);
			this->tableEmployers->Name = L"tableEmployers";
			this->tableEmployers->ReadOnly = true;
			this->tableEmployers->Size = System::Drawing::Size(420, 495);
			this->tableEmployers->TabIndex = 0;
			this->tableEmployers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::tableEmployers_CellClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonSearchClients);
			this->tabPage2->Controls->Add(this->buttonClearFormClient);
			this->tabPage2->Controls->Add(this->buttonDeleteClient);
			this->tabPage2->Controls->Add(this->buttonSaveClient);
			this->tabPage2->Controls->Add(this->textBoxClientOtherInfo);
			this->tabPage2->Controls->Add(this->textBoxClientPhone);
			this->tabPage2->Controls->Add(this->textBoxClientEmail);
			this->tabPage2->Controls->Add(this->textBoxClientAddress);
			this->tabPage2->Controls->Add(this->textBoxClientREGON);
			this->tabPage2->Controls->Add(this->textBoxClientNIP);
			this->tabPage2->Controls->Add(this->textBoxClientName);
			this->tabPage2->Controls->Add(this->labelClientOtherInfo);
			this->tabPage2->Controls->Add(this->labelClientPhone);
			this->tabPage2->Controls->Add(this->labelClientEmail);
			this->tabPage2->Controls->Add(this->labelClientAddress);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->labelClientNIP);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->labelClientID);
			this->tabPage2->Controls->Add(this->labelIdClient);
			this->tabPage2->Controls->Add(this->textBoxSearchClients);
			this->tabPage2->Controls->Add(this->buttonShowClients);
			this->tabPage2->Controls->Add(this->dataGridViewClients);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(979, 550);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Klienci";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttonSearchClients
			// 
			this->buttonSearchClients->Location = System::Drawing::Point(840, 14);
			this->buttonSearchClients->Name = L"buttonSearchClients";
			this->buttonSearchClients->Size = System::Drawing::Size(120, 26);
			this->buttonSearchClients->TabIndex = 55;
			this->buttonSearchClients->Text = L"Wyszukaj";
			this->buttonSearchClients->UseVisualStyleBackColor = true;
			this->buttonSearchClients->Click += gcnew System::EventHandler(this, &Magazin::buttonSearchClients_Click);
			// 
			// buttonClearFormClient
			// 
			this->buttonClearFormClient->Location = System::Drawing::Point(585, 476);
			this->buttonClearFormClient->Name = L"buttonClearFormClient";
			this->buttonClearFormClient->Size = System::Drawing::Size(146, 29);
			this->buttonClearFormClient->TabIndex = 53;
			this->buttonClearFormClient->Text = L"Wyczy�� formularz";
			this->buttonClearFormClient->UseVisualStyleBackColor = true;
			this->buttonClearFormClient->Click += gcnew System::EventHandler(this, &Magazin::buttonClearFormClient_Click);
			// 
			// buttonDeleteClient
			// 
			this->buttonDeleteClient->Location = System::Drawing::Point(737, 476);
			this->buttonDeleteClient->Name = L"buttonDeleteClient";
			this->buttonDeleteClient->Size = System::Drawing::Size(107, 29);
			this->buttonDeleteClient->TabIndex = 52;
			this->buttonDeleteClient->Text = L"Usu�";
			this->buttonDeleteClient->UseVisualStyleBackColor = true;
			this->buttonDeleteClient->Click += gcnew System::EventHandler(this, &Magazin::buttonDeleteClient_Click);
			// 
			// buttonSaveClient
			// 
			this->buttonSaveClient->Location = System::Drawing::Point(851, 476);
			this->buttonSaveClient->Name = L"buttonSaveClient";
			this->buttonSaveClient->Size = System::Drawing::Size(107, 29);
			this->buttonSaveClient->TabIndex = 51;
			this->buttonSaveClient->Text = L"Dodaj";
			this->buttonSaveClient->UseVisualStyleBackColor = true;
			this->buttonSaveClient->Click += gcnew System::EventHandler(this, &Magazin::buttonSaveClient_Click);
			// 
			// textBoxClientOtherInfo
			// 
			this->textBoxClientOtherInfo->Location = System::Drawing::Point(667, 284);
			this->textBoxClientOtherInfo->Multiline = true;
			this->textBoxClientOtherInfo->Name = L"textBoxClientOtherInfo";
			this->textBoxClientOtherInfo->Size = System::Drawing::Size(293, 108);
			this->textBoxClientOtherInfo->TabIndex = 50;
			// 
			// textBoxClientPhone
			// 
			this->textBoxClientPhone->Location = System::Drawing::Point(667, 252);
			this->textBoxClientPhone->Name = L"textBoxClientPhone";
			this->textBoxClientPhone->Size = System::Drawing::Size(293, 26);
			this->textBoxClientPhone->TabIndex = 49;
			// 
			// textBoxClientEmail
			// 
			this->textBoxClientEmail->Location = System::Drawing::Point(667, 220);
			this->textBoxClientEmail->Name = L"textBoxClientEmail";
			this->textBoxClientEmail->Size = System::Drawing::Size(293, 26);
			this->textBoxClientEmail->TabIndex = 48;
			// 
			// textBoxClientAddress
			// 
			this->textBoxClientAddress->Location = System::Drawing::Point(667, 188);
			this->textBoxClientAddress->Name = L"textBoxClientAddress";
			this->textBoxClientAddress->Size = System::Drawing::Size(293, 26);
			this->textBoxClientAddress->TabIndex = 47;
			// 
			// textBoxClientREGON
			// 
			this->textBoxClientREGON->Location = System::Drawing::Point(667, 156);
			this->textBoxClientREGON->Name = L"textBoxClientREGON";
			this->textBoxClientREGON->Size = System::Drawing::Size(293, 26);
			this->textBoxClientREGON->TabIndex = 46;
			// 
			// textBoxClientNIP
			// 
			this->textBoxClientNIP->Location = System::Drawing::Point(667, 121);
			this->textBoxClientNIP->Name = L"textBoxClientNIP";
			this->textBoxClientNIP->Size = System::Drawing::Size(293, 26);
			this->textBoxClientNIP->TabIndex = 45;
			// 
			// textBoxClientName
			// 
			this->textBoxClientName->Location = System::Drawing::Point(667, 89);
			this->textBoxClientName->Name = L"textBoxClientName";
			this->textBoxClientName->Size = System::Drawing::Size(293, 26);
			this->textBoxClientName->TabIndex = 44;
			// 
			// labelClientOtherInfo
			// 
			this->labelClientOtherInfo->AutoSize = true;
			this->labelClientOtherInfo->Location = System::Drawing::Point(547, 288);
			this->labelClientOtherInfo->Name = L"labelClientOtherInfo";
			this->labelClientOtherInfo->Size = System::Drawing::Size(116, 18);
			this->labelClientOtherInfo->TabIndex = 43;
			this->labelClientOtherInfo->Text = L"Inne informacje:";
			// 
			// labelClientPhone
			// 
			this->labelClientPhone->AutoSize = true;
			this->labelClientPhone->Location = System::Drawing::Point(602, 257);
			this->labelClientPhone->Name = L"labelClientPhone";
			this->labelClientPhone->Size = System::Drawing::Size(61, 18);
			this->labelClientPhone->TabIndex = 42;
			this->labelClientPhone->Text = L"Telefon:";
			// 
			// labelClientEmail
			// 
			this->labelClientEmail->AutoSize = true;
			this->labelClientEmail->Location = System::Drawing::Point(611, 224);
			this->labelClientEmail->Name = L"labelClientEmail";
			this->labelClientEmail->Size = System::Drawing::Size(52, 18);
			this->labelClientEmail->TabIndex = 41;
			this->labelClientEmail->Text = L"Email:";
			// 
			// labelClientAddress
			// 
			this->labelClientAddress->AutoSize = true;
			this->labelClientAddress->Location = System::Drawing::Point(609, 191);
			this->labelClientAddress->Name = L"labelClientAddress";
			this->labelClientAddress->Size = System::Drawing::Size(54, 18);
			this->labelClientAddress->TabIndex = 40;
			this->labelClientAddress->Text = L"Adres:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(590, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 18);
			this->label6->TabIndex = 39;
			this->label6->Text = L"REGON:";
			// 
			// labelClientNIP
			// 
			this->labelClientNIP->AutoSize = true;
			this->labelClientNIP->Location = System::Drawing::Point(622, 125);
			this->labelClientNIP->Name = L"labelClientNIP";
			this->labelClientNIP->Size = System::Drawing::Size(37, 18);
			this->labelClientNIP->TabIndex = 38;
			this->labelClientNIP->Text = L"NIP:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(604, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 18);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Nazwa:";
			// 
			// labelClientID
			// 
			this->labelClientID->AutoSize = true;
			this->labelClientID->Location = System::Drawing::Point(669, 55);
			this->labelClientID->Name = L"labelClientID";
			this->labelClientID->Size = System::Drawing::Size(17, 18);
			this->labelClientID->TabIndex = 36;
			this->labelClientID->Text = L"#";
			// 
			// labelIdClient
			// 
			this->labelIdClient->AutoSize = true;
			this->labelIdClient->Location = System::Drawing::Point(519, 55);
			this->labelIdClient->Name = L"labelIdClient";
			this->labelIdClient->Size = System::Drawing::Size(144, 18);
			this->labelIdClient->TabIndex = 35;
			this->labelIdClient->Text = L"Identyfikator klienta:";
			// 
			// textBoxSearchClients
			// 
			this->textBoxSearchClients->Location = System::Drawing::Point(583, 15);
			this->textBoxSearchClients->Name = L"textBoxSearchClients";
			this->textBoxSearchClients->Size = System::Drawing::Size(251, 26);
			this->textBoxSearchClients->TabIndex = 34;
			// 
			// buttonShowClients
			// 
			this->buttonShowClients->Location = System::Drawing::Point(27, 7);
			this->buttonShowClients->Name = L"buttonShowClients";
			this->buttonShowClients->Size = System::Drawing::Size(219, 34);
			this->buttonShowClients->TabIndex = 33;
			this->buttonShowClients->Text = L"Poka� klient�w";
			this->buttonShowClients->UseVisualStyleBackColor = true;
			this->buttonShowClients->Click += gcnew System::EventHandler(this, &Magazin::buttonShowClients_Click);
			// 
			// dataGridViewClients
			// 
			this->dataGridViewClients->AllowUserToAddRows = false;
			this->dataGridViewClients->AllowUserToDeleteRows = false;
			this->dataGridViewClients->AllowUserToOrderColumns = true;
			this->dataGridViewClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewClients->Location = System::Drawing::Point(27, 47);
			this->dataGridViewClients->Name = L"dataGridViewClients";
			this->dataGridViewClients->ReadOnly = true;
			this->dataGridViewClients->Size = System::Drawing::Size(417, 487);
			this->dataGridViewClients->TabIndex = 32;
			this->dataGridViewClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewClients_CellClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->buttonSearchProviders);
			this->tabPage3->Controls->Add(this->buttonClearProviderForm);
			this->tabPage3->Controls->Add(this->buttonProviderDelete);
			this->tabPage3->Controls->Add(this->buttonProviderSave);
			this->tabPage3->Controls->Add(this->textBoxProviderOtherInfo);
			this->tabPage3->Controls->Add(this->textBoxProviderPhone);
			this->tabPage3->Controls->Add(this->textBoxProviderEmail);
			this->tabPage3->Controls->Add(this->textBoxProviderAddress);
			this->tabPage3->Controls->Add(this->textBoxProviderREGON);
			this->tabPage3->Controls->Add(this->textBoxProviderNIP);
			this->tabPage3->Controls->Add(this->textBoxProviderName);
			this->tabPage3->Controls->Add(this->labelProviderOtherInfo);
			this->tabPage3->Controls->Add(this->labelProviderPhone);
			this->tabPage3->Controls->Add(this->labelProviderEmail);
			this->tabPage3->Controls->Add(this->labelProviderAddress);
			this->tabPage3->Controls->Add(this->labelProviderREGON);
			this->tabPage3->Controls->Add(this->labelProviderNIP);
			this->tabPage3->Controls->Add(this->labelProviderName);
			this->tabPage3->Controls->Add(this->labelProviderIDVal);
			this->tabPage3->Controls->Add(this->labelProviderID);
			this->tabPage3->Controls->Add(this->textBoxSearchProviders);
			this->tabPage3->Controls->Add(this->buttonShowProviders);
			this->tabPage3->Controls->Add(this->dataGridViewProviders);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(979, 550);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Dostawcy";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// buttonSearchProviders
			// 
			this->buttonSearchProviders->Location = System::Drawing::Point(849, 14);
			this->buttonSearchProviders->Name = L"buttonSearchProviders";
			this->buttonSearchProviders->Size = System::Drawing::Size(120, 26);
			this->buttonSearchProviders->TabIndex = 79;
			this->buttonSearchProviders->Text = L"Wyszukaj";
			this->buttonSearchProviders->UseVisualStyleBackColor = true;
			this->buttonSearchProviders->Click += gcnew System::EventHandler(this, &Magazin::buttonSearchProviders_Click);
			// 
			// buttonClearProviderForm
			// 
			this->buttonClearProviderForm->Location = System::Drawing::Point(596, 476);
			this->buttonClearProviderForm->Name = L"buttonClearProviderForm";
			this->buttonClearProviderForm->Size = System::Drawing::Size(146, 29);
			this->buttonClearProviderForm->TabIndex = 77;
			this->buttonClearProviderForm->Text = L"Wyczy�� formularz";
			this->buttonClearProviderForm->UseVisualStyleBackColor = true;
			this->buttonClearProviderForm->Click += gcnew System::EventHandler(this, &Magazin::buttonClearProviderForm_Click);
			// 
			// buttonProviderDelete
			// 
			this->buttonProviderDelete->Location = System::Drawing::Point(748, 476);
			this->buttonProviderDelete->Name = L"buttonProviderDelete";
			this->buttonProviderDelete->Size = System::Drawing::Size(107, 29);
			this->buttonProviderDelete->TabIndex = 76;
			this->buttonProviderDelete->Text = L"Usu�";
			this->buttonProviderDelete->UseVisualStyleBackColor = true;
			this->buttonProviderDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonProviderDelete_Click);
			// 
			// buttonProviderSave
			// 
			this->buttonProviderSave->Location = System::Drawing::Point(862, 476);
			this->buttonProviderSave->Name = L"buttonProviderSave";
			this->buttonProviderSave->Size = System::Drawing::Size(107, 29);
			this->buttonProviderSave->TabIndex = 75;
			this->buttonProviderSave->Text = L"Dodaj";
			this->buttonProviderSave->UseVisualStyleBackColor = true;
			this->buttonProviderSave->Click += gcnew System::EventHandler(this, &Magazin::buttonProviderSave_Click);
			// 
			// textBoxProviderOtherInfo
			// 
			this->textBoxProviderOtherInfo->Location = System::Drawing::Point(676, 283);
			this->textBoxProviderOtherInfo->Multiline = true;
			this->textBoxProviderOtherInfo->Name = L"textBoxProviderOtherInfo";
			this->textBoxProviderOtherInfo->Size = System::Drawing::Size(293, 105);
			this->textBoxProviderOtherInfo->TabIndex = 74;
			// 
			// textBoxProviderPhone
			// 
			this->textBoxProviderPhone->Location = System::Drawing::Point(676, 251);
			this->textBoxProviderPhone->Name = L"textBoxProviderPhone";
			this->textBoxProviderPhone->Size = System::Drawing::Size(293, 26);
			this->textBoxProviderPhone->TabIndex = 73;
			// 
			// textBoxProviderEmail
			// 
			this->textBoxProviderEmail->Location = System::Drawing::Point(676, 219);
			this->textBoxProviderEmail->Name = L"textBoxProviderEmail";
			this->textBoxProviderEmail->Size = System::Drawing::Size(293, 26);
			this->textBoxProviderEmail->TabIndex = 72;
			// 
			// textBoxProviderAddress
			// 
			this->textBoxProviderAddress->Location = System::Drawing::Point(676, 187);
			this->textBoxProviderAddress->Name = L"textBoxProviderAddress";
			this->textBoxProviderAddress->Size = System::Drawing::Size(293, 26);
			this->textBoxProviderAddress->TabIndex = 71;
			// 
			// textBoxProviderREGON
			// 
			this->textBoxProviderREGON->Location = System::Drawing::Point(676, 155);
			this->textBoxProviderREGON->Name = L"textBoxProviderREGON";
			this->textBoxProviderREGON->Size = System::Drawing::Size(293, 26);
			this->textBoxProviderREGON->TabIndex = 70;
			// 
			// textBoxProviderNIP
			// 
			this->textBoxProviderNIP->Location = System::Drawing::Point(676, 120);
			this->textBoxProviderNIP->Name = L"textBoxProviderNIP";
			this->textBoxProviderNIP->Size = System::Drawing::Size(293, 26);
			this->textBoxProviderNIP->TabIndex = 69;
			// 
			// textBoxProviderName
			// 
			this->textBoxProviderName->Location = System::Drawing::Point(676, 88);
			this->textBoxProviderName->Name = L"textBoxProviderName";
			this->textBoxProviderName->Size = System::Drawing::Size(293, 26);
			this->textBoxProviderName->TabIndex = 68;
			// 
			// labelProviderOtherInfo
			// 
			this->labelProviderOtherInfo->AutoSize = true;
			this->labelProviderOtherInfo->Location = System::Drawing::Point(556, 287);
			this->labelProviderOtherInfo->Name = L"labelProviderOtherInfo";
			this->labelProviderOtherInfo->Size = System::Drawing::Size(116, 18);
			this->labelProviderOtherInfo->TabIndex = 67;
			this->labelProviderOtherInfo->Text = L"Inne informacje:";
			// 
			// labelProviderPhone
			// 
			this->labelProviderPhone->AutoSize = true;
			this->labelProviderPhone->Location = System::Drawing::Point(611, 256);
			this->labelProviderPhone->Name = L"labelProviderPhone";
			this->labelProviderPhone->Size = System::Drawing::Size(61, 18);
			this->labelProviderPhone->TabIndex = 66;
			this->labelProviderPhone->Text = L"Telefon:";
			// 
			// labelProviderEmail
			// 
			this->labelProviderEmail->AutoSize = true;
			this->labelProviderEmail->Location = System::Drawing::Point(620, 223);
			this->labelProviderEmail->Name = L"labelProviderEmail";
			this->labelProviderEmail->Size = System::Drawing::Size(52, 18);
			this->labelProviderEmail->TabIndex = 65;
			this->labelProviderEmail->Text = L"Email:";
			// 
			// labelProviderAddress
			// 
			this->labelProviderAddress->AutoSize = true;
			this->labelProviderAddress->Location = System::Drawing::Point(618, 190);
			this->labelProviderAddress->Name = L"labelProviderAddress";
			this->labelProviderAddress->Size = System::Drawing::Size(54, 18);
			this->labelProviderAddress->TabIndex = 64;
			this->labelProviderAddress->Text = L"Adres:";
			// 
			// labelProviderREGON
			// 
			this->labelProviderREGON->AutoSize = true;
			this->labelProviderREGON->Location = System::Drawing::Point(599, 158);
			this->labelProviderREGON->Name = L"labelProviderREGON";
			this->labelProviderREGON->Size = System::Drawing::Size(69, 18);
			this->labelProviderREGON->TabIndex = 63;
			this->labelProviderREGON->Text = L"REGON:";
			// 
			// labelProviderNIP
			// 
			this->labelProviderNIP->AutoSize = true;
			this->labelProviderNIP->Location = System::Drawing::Point(631, 124);
			this->labelProviderNIP->Name = L"labelProviderNIP";
			this->labelProviderNIP->Size = System::Drawing::Size(37, 18);
			this->labelProviderNIP->TabIndex = 62;
			this->labelProviderNIP->Text = L"NIP:";
			// 
			// labelProviderName
			// 
			this->labelProviderName->AutoSize = true;
			this->labelProviderName->Location = System::Drawing::Point(613, 91);
			this->labelProviderName->Name = L"labelProviderName";
			this->labelProviderName->Size = System::Drawing::Size(59, 18);
			this->labelProviderName->TabIndex = 61;
			this->labelProviderName->Text = L"Nazwa:";
			// 
			// labelProviderIDVal
			// 
			this->labelProviderIDVal->AutoSize = true;
			this->labelProviderIDVal->Location = System::Drawing::Point(678, 54);
			this->labelProviderIDVal->Name = L"labelProviderIDVal";
			this->labelProviderIDVal->Size = System::Drawing::Size(17, 18);
			this->labelProviderIDVal->TabIndex = 60;
			this->labelProviderIDVal->Text = L"#";
			// 
			// labelProviderID
			// 
			this->labelProviderID->AutoSize = true;
			this->labelProviderID->Location = System::Drawing::Point(528, 54);
			this->labelProviderID->Name = L"labelProviderID";
			this->labelProviderID->Size = System::Drawing::Size(144, 18);
			this->labelProviderID->TabIndex = 59;
			this->labelProviderID->Text = L"Identyfikator klienta:";
			// 
			// textBoxSearchProviders
			// 
			this->textBoxSearchProviders->Location = System::Drawing::Point(592, 15);
			this->textBoxSearchProviders->Name = L"textBoxSearchProviders";
			this->textBoxSearchProviders->Size = System::Drawing::Size(251, 26);
			this->textBoxSearchProviders->TabIndex = 58;
			// 
			// buttonShowProviders
			// 
			this->buttonShowProviders->Location = System::Drawing::Point(20, 7);
			this->buttonShowProviders->Name = L"buttonShowProviders";
			this->buttonShowProviders->Size = System::Drawing::Size(219, 34);
			this->buttonShowProviders->TabIndex = 57;
			this->buttonShowProviders->Text = L"Poka� dostawc�w";
			this->buttonShowProviders->UseVisualStyleBackColor = true;
			this->buttonShowProviders->Click += gcnew System::EventHandler(this, &Magazin::buttonShowProviders_Click);
			// 
			// dataGridViewProviders
			// 
			this->dataGridViewProviders->AllowUserToAddRows = false;
			this->dataGridViewProviders->AllowUserToDeleteRows = false;
			this->dataGridViewProviders->AllowUserToOrderColumns = true;
			this->dataGridViewProviders->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewProviders->Location = System::Drawing::Point(20, 47);
			this->dataGridViewProviders->Name = L"dataGridViewProviders";
			this->dataGridViewProviders->ReadOnly = true;
			this->dataGridViewProviders->Size = System::Drawing::Size(432, 489);
			this->dataGridViewProviders->TabIndex = 56;
			this->dataGridViewProviders->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewProviders_CellClick);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->buttonItemHelp);
			this->tabPage5->Controls->Add(this->buttonItemProducerDelete);
			this->tabPage5->Controls->Add(this->buttonItemParamDelete);
			this->tabPage5->Controls->Add(this->buttonItemProducerHelp);
			this->tabPage5->Controls->Add(this->buttonItemParamHelp);
			this->tabPage5->Controls->Add(this->labelItemProducer);
			this->tabPage5->Controls->Add(this->buttonItemProducerAdd);
			this->tabPage5->Controls->Add(this->comboBoxItemProducer);
			this->tabPage5->Controls->Add(this->buttonItemParamAdd);
			this->tabPage5->Controls->Add(this->labelItemParam);
			this->tabPage5->Controls->Add(this->textBoxItemParamVal);
			this->tabPage5->Controls->Add(this->comboBoxItemParam);
			this->tabPage5->Controls->Add(this->dataGridViewParams);
			this->tabPage5->Controls->Add(this->dataGridViewProducers);
			this->tabPage5->Controls->Add(this->TextBoxItemPrice);
			this->tabPage5->Controls->Add(this->labelItemQuantityVal);
			this->tabPage5->Controls->Add(this->buttonItemsSearch);
			this->tabPage5->Controls->Add(this->buttonItemClearForm);
			this->tabPage5->Controls->Add(this->buttonItemDelete);
			this->tabPage5->Controls->Add(this->buttonItemSave);
			this->tabPage5->Controls->Add(this->textBoxItemModel);
			this->tabPage5->Controls->Add(this->textBoxItemName);
			this->tabPage5->Controls->Add(this->labelItemPrice);
			this->tabPage5->Controls->Add(this->labelItemQuantity);
			this->tabPage5->Controls->Add(this->labelItemModel);
			this->tabPage5->Controls->Add(this->labelItemName);
			this->tabPage5->Controls->Add(this->labelItemIDVal);
			this->tabPage5->Controls->Add(this->labelItemID);
			this->tabPage5->Controls->Add(this->textBoxItemsSearch);
			this->tabPage5->Controls->Add(this->buttonItemsShow);
			this->tabPage5->Controls->Add(this->dataGridViewItems);
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(979, 550);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Asortyment";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// buttonItemHelp
			// 
			this->buttonItemHelp->Location = System::Drawing::Point(318, 9);
			this->buttonItemHelp->Name = L"buttonItemHelp";
			this->buttonItemHelp->Size = System::Drawing::Size(240, 30);
			this->buttonItemHelp->TabIndex = 119;
			this->buttonItemHelp->Text = L"Dodawanie przedmiotu - pomoc";
			this->buttonItemHelp->UseVisualStyleBackColor = true;
			this->buttonItemHelp->Click += gcnew System::EventHandler(this, &Magazin::buttonItemHelp_Click);
			// 
			// buttonItemProducerDelete
			// 
			this->buttonItemProducerDelete->Location = System::Drawing::Point(859, 272);
			this->buttonItemProducerDelete->Name = L"buttonItemProducerDelete";
			this->buttonItemProducerDelete->Size = System::Drawing::Size(21, 29);
			this->buttonItemProducerDelete->TabIndex = 118;
			this->buttonItemProducerDelete->Text = L"X";
			this->buttonItemProducerDelete->UseVisualStyleBackColor = true;
			this->buttonItemProducerDelete->Visible = false;
			this->buttonItemProducerDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonItemProducerDelete_Click);
			// 
			// buttonItemParamDelete
			// 
			this->buttonItemParamDelete->Location = System::Drawing::Point(954, 229);
			this->buttonItemParamDelete->Name = L"buttonItemParamDelete";
			this->buttonItemParamDelete->Size = System::Drawing::Size(21, 29);
			this->buttonItemParamDelete->TabIndex = 117;
			this->buttonItemParamDelete->Text = L"X";
			this->buttonItemParamDelete->UseVisualStyleBackColor = true;
			this->buttonItemParamDelete->Visible = false;
			this->buttonItemParamDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonItemParamDelete_Click);
			// 
			// buttonItemProducerHelp
			// 
			this->buttonItemProducerHelp->Location = System::Drawing::Point(556, 271);
			this->buttonItemProducerHelp->Name = L"buttonItemProducerHelp";
			this->buttonItemProducerHelp->Size = System::Drawing::Size(21, 29);
			this->buttonItemProducerHelp->TabIndex = 116;
			this->buttonItemProducerHelp->Text = L"\?";
			this->buttonItemProducerHelp->UseVisualStyleBackColor = true;
			this->buttonItemProducerHelp->Visible = false;
			this->buttonItemProducerHelp->Click += gcnew System::EventHandler(this, &Magazin::buttonItemProducerHelp_Click);
			// 
			// buttonItemParamHelp
			// 
			this->buttonItemParamHelp->Location = System::Drawing::Point(438, 228);
			this->buttonItemParamHelp->Name = L"buttonItemParamHelp";
			this->buttonItemParamHelp->Size = System::Drawing::Size(21, 29);
			this->buttonItemParamHelp->TabIndex = 115;
			this->buttonItemParamHelp->Text = L"\?";
			this->buttonItemParamHelp->UseVisualStyleBackColor = true;
			this->buttonItemParamHelp->Visible = false;
			this->buttonItemParamHelp->Click += gcnew System::EventHandler(this, &Magazin::buttonItemParamHelp_Click);
			// 
			// labelItemProducer
			// 
			this->labelItemProducer->AutoSize = true;
			this->labelItemProducer->Location = System::Drawing::Point(579, 277);
			this->labelItemProducer->Name = L"labelItemProducer";
			this->labelItemProducer->Size = System::Drawing::Size(83, 18);
			this->labelItemProducer->TabIndex = 114;
			this->labelItemProducer->Text = L"Producent:";
			this->labelItemProducer->Visible = false;
			// 
			// buttonItemProducerAdd
			// 
			this->buttonItemProducerAdd->Location = System::Drawing::Point(791, 272);
			this->buttonItemProducerAdd->Name = L"buttonItemProducerAdd";
			this->buttonItemProducerAdd->Size = System::Drawing::Size(62, 29);
			this->buttonItemProducerAdd->TabIndex = 113;
			this->buttonItemProducerAdd->Text = L"Dodaj";
			this->buttonItemProducerAdd->UseVisualStyleBackColor = true;
			this->buttonItemProducerAdd->Visible = false;
			this->buttonItemProducerAdd->Click += gcnew System::EventHandler(this, &Magazin::buttonItemProducerAdd_Click);
			// 
			// comboBoxItemProducer
			// 
			this->comboBoxItemProducer->FormattingEnabled = true;
			this->comboBoxItemProducer->Location = System::Drawing::Point(664, 273);
			this->comboBoxItemProducer->Name = L"comboBoxItemProducer";
			this->comboBoxItemProducer->Size = System::Drawing::Size(121, 26);
			this->comboBoxItemProducer->TabIndex = 112;
			this->comboBoxItemProducer->Visible = false;
			// 
			// buttonItemParamAdd
			// 
			this->buttonItemParamAdd->Location = System::Drawing::Point(889, 229);
			this->buttonItemParamAdd->Name = L"buttonItemParamAdd";
			this->buttonItemParamAdd->Size = System::Drawing::Size(62, 29);
			this->buttonItemParamAdd->TabIndex = 111;
			this->buttonItemParamAdd->Text = L"Dodaj";
			this->buttonItemParamAdd->UseVisualStyleBackColor = true;
			this->buttonItemParamAdd->Visible = false;
			this->buttonItemParamAdd->Click += gcnew System::EventHandler(this, &Magazin::buttonItemParamAdd_Click);
			// 
			// labelItemParam
			// 
			this->labelItemParam->AutoSize = true;
			this->labelItemParam->Location = System::Drawing::Point(463, 234);
			this->labelItemParam->Name = L"labelItemParam";
			this->labelItemParam->Size = System::Drawing::Size(77, 18);
			this->labelItemParam->TabIndex = 110;
			this->labelItemParam->Text = L"Parametr:";
			this->labelItemParam->Visible = false;
			// 
			// textBoxItemParamVal
			// 
			this->textBoxItemParamVal->Location = System::Drawing::Point(664, 231);
			this->textBoxItemParamVal->Name = L"textBoxItemParamVal";
			this->textBoxItemParamVal->Size = System::Drawing::Size(221, 26);
			this->textBoxItemParamVal->TabIndex = 109;
			this->textBoxItemParamVal->Visible = false;
			// 
			// comboBoxItemParam
			// 
			this->comboBoxItemParam->FormattingEnabled = true;
			this->comboBoxItemParam->Location = System::Drawing::Point(540, 231);
			this->comboBoxItemParam->Name = L"comboBoxItemParam";
			this->comboBoxItemParam->Size = System::Drawing::Size(121, 26);
			this->comboBoxItemParam->TabIndex = 108;
			this->comboBoxItemParam->Text = L"Dodaj nowy";
			this->comboBoxItemParam->Visible = false;
			this->comboBoxItemParam->SelectedIndexChanged += gcnew System::EventHandler(this, &Magazin::comboBoxItemParam_SelectedIndexChanged);
			// 
			// dataGridViewParams
			// 
			this->dataGridViewParams->AllowUserToAddRows = false;
			this->dataGridViewParams->AllowUserToDeleteRows = false;
			this->dataGridViewParams->AllowUserToOrderColumns = true;
			this->dataGridViewParams->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewParams->Location = System::Drawing::Point(27, 324);
			this->dataGridViewParams->Name = L"dataGridViewParams";
			this->dataGridViewParams->ReadOnly = true;
			this->dataGridViewParams->Size = System::Drawing::Size(403, 220);
			this->dataGridViewParams->TabIndex = 106;
			// 
			// dataGridViewProducers
			// 
			this->dataGridViewProducers->AllowUserToAddRows = false;
			this->dataGridViewProducers->AllowUserToDeleteRows = false;
			this->dataGridViewProducers->AllowUserToOrderColumns = true;
			this->dataGridViewProducers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewProducers->Location = System::Drawing::Point(473, 426);
			this->dataGridViewProducers->Name = L"dataGridViewProducers";
			this->dataGridViewProducers->ReadOnly = true;
			this->dataGridViewProducers->Size = System::Drawing::Size(497, 118);
			this->dataGridViewProducers->TabIndex = 105;
			// 
			// TextBoxItemPrice
			// 
			this->TextBoxItemPrice->Location = System::Drawing::Point(664, 189);
			this->TextBoxItemPrice->Mask = L"####0.00";
			this->TextBoxItemPrice->Name = L"TextBoxItemPrice";
			this->TextBoxItemPrice->Size = System::Drawing::Size(92, 26);
			this->TextBoxItemPrice->TabIndex = 104;
			// 
			// labelItemQuantityVal
			// 
			this->labelItemQuantityVal->AutoSize = true;
			this->labelItemQuantityVal->Location = System::Drawing::Point(666, 160);
			this->labelItemQuantityVal->Name = L"labelItemQuantityVal";
			this->labelItemQuantityVal->Size = System::Drawing::Size(17, 18);
			this->labelItemQuantityVal->TabIndex = 103;
			this->labelItemQuantityVal->Text = L"#";
			// 
			// buttonItemsSearch
			// 
			this->buttonItemsSearch->Location = System::Drawing::Point(845, 15);
			this->buttonItemsSearch->Name = L"buttonItemsSearch";
			this->buttonItemsSearch->Size = System::Drawing::Size(120, 26);
			this->buttonItemsSearch->TabIndex = 102;
			this->buttonItemsSearch->Text = L"Wyszukaj";
			this->buttonItemsSearch->UseVisualStyleBackColor = true;
			this->buttonItemsSearch->Click += gcnew System::EventHandler(this, &Magazin::buttonItemsSearch_Click);
			// 
			// buttonItemClearForm
			// 
			this->buttonItemClearForm->Enabled = false;
			this->buttonItemClearForm->Location = System::Drawing::Point(592, 352);
			this->buttonItemClearForm->Name = L"buttonItemClearForm";
			this->buttonItemClearForm->Size = System::Drawing::Size(146, 29);
			this->buttonItemClearForm->TabIndex = 100;
			this->buttonItemClearForm->Text = L"Wyczy�� formularz";
			this->buttonItemClearForm->UseVisualStyleBackColor = true;
			this->buttonItemClearForm->Click += gcnew System::EventHandler(this, &Magazin::buttonItemClearForm_Click);
			// 
			// buttonItemDelete
			// 
			this->buttonItemDelete->Enabled = false;
			this->buttonItemDelete->Location = System::Drawing::Point(744, 352);
			this->buttonItemDelete->Name = L"buttonItemDelete";
			this->buttonItemDelete->Size = System::Drawing::Size(107, 29);
			this->buttonItemDelete->TabIndex = 99;
			this->buttonItemDelete->Text = L"Usu�";
			this->buttonItemDelete->UseVisualStyleBackColor = true;
			this->buttonItemDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonItemDelete_Click);
			// 
			// buttonItemSave
			// 
			this->buttonItemSave->Location = System::Drawing::Point(861, 352);
			this->buttonItemSave->Name = L"buttonItemSave";
			this->buttonItemSave->Size = System::Drawing::Size(107, 29);
			this->buttonItemSave->TabIndex = 98;
			this->buttonItemSave->Text = L"Dodaj";
			this->buttonItemSave->UseVisualStyleBackColor = true;
			this->buttonItemSave->Click += gcnew System::EventHandler(this, &Magazin::buttonItemSave_Click);
			// 
			// textBoxItemModel
			// 
			this->textBoxItemModel->Location = System::Drawing::Point(664, 122);
			this->textBoxItemModel->Name = L"textBoxItemModel";
			this->textBoxItemModel->Size = System::Drawing::Size(293, 26);
			this->textBoxItemModel->TabIndex = 92;
			// 
			// textBoxItemName
			// 
			this->textBoxItemName->Location = System::Drawing::Point(664, 90);
			this->textBoxItemName->Name = L"textBoxItemName";
			this->textBoxItemName->Size = System::Drawing::Size(293, 26);
			this->textBoxItemName->TabIndex = 91;
			// 
			// labelItemPrice
			// 
			this->labelItemPrice->AutoSize = true;
			this->labelItemPrice->Location = System::Drawing::Point(606, 192);
			this->labelItemPrice->Name = L"labelItemPrice";
			this->labelItemPrice->Size = System::Drawing::Size(50, 18);
			this->labelItemPrice->TabIndex = 87;
			this->labelItemPrice->Text = L"Cena:";
			// 
			// labelItemQuantity
			// 
			this->labelItemQuantity->AutoSize = true;
			this->labelItemQuantity->Location = System::Drawing::Point(615, 160);
			this->labelItemQuantity->Name = L"labelItemQuantity";
			this->labelItemQuantity->Size = System::Drawing::Size(43, 18);
			this->labelItemQuantity->TabIndex = 86;
			this->labelItemQuantity->Text = L"Ilo��:";
			// 
			// labelItemModel
			// 
			this->labelItemModel->AutoSize = true;
			this->labelItemModel->Location = System::Drawing::Point(603, 125);
			this->labelItemModel->Name = L"labelItemModel";
			this->labelItemModel->Size = System::Drawing::Size(55, 18);
			this->labelItemModel->TabIndex = 85;
			this->labelItemModel->Text = L"Model:";
			// 
			// labelItemName
			// 
			this->labelItemName->AutoSize = true;
			this->labelItemName->Location = System::Drawing::Point(601, 93);
			this->labelItemName->Name = L"labelItemName";
			this->labelItemName->Size = System::Drawing::Size(59, 18);
			this->labelItemName->TabIndex = 84;
			this->labelItemName->Text = L"Nazwa:";
			// 
			// labelItemIDVal
			// 
			this->labelItemIDVal->AutoSize = true;
			this->labelItemIDVal->Location = System::Drawing::Point(666, 56);
			this->labelItemIDVal->Name = L"labelItemIDVal";
			this->labelItemIDVal->Size = System::Drawing::Size(17, 18);
			this->labelItemIDVal->TabIndex = 83;
			this->labelItemIDVal->Text = L"#";
			// 
			// labelItemID
			// 
			this->labelItemID->AutoSize = true;
			this->labelItemID->Location = System::Drawing::Point(480, 56);
			this->labelItemID->Name = L"labelItemID";
			this->labelItemID->Size = System::Drawing::Size(176, 18);
			this->labelItemID->TabIndex = 82;
			this->labelItemID->Text = L"Identyfikator przedmiotu:";
			// 
			// textBoxItemsSearch
			// 
			this->textBoxItemsSearch->Location = System::Drawing::Point(588, 15);
			this->textBoxItemsSearch->Name = L"textBoxItemsSearch";
			this->textBoxItemsSearch->Size = System::Drawing::Size(251, 26);
			this->textBoxItemsSearch->TabIndex = 81;
			// 
			// buttonItemsShow
			// 
			this->buttonItemsShow->Location = System::Drawing::Point(27, 7);
			this->buttonItemsShow->Name = L"buttonItemsShow";
			this->buttonItemsShow->Size = System::Drawing::Size(219, 34);
			this->buttonItemsShow->TabIndex = 80;
			this->buttonItemsShow->Text = L"Poka� asortyment";
			this->buttonItemsShow->UseVisualStyleBackColor = true;
			this->buttonItemsShow->Click += gcnew System::EventHandler(this, &Magazin::buttonItemsShow_Click);
			// 
			// dataGridViewItems
			// 
			this->dataGridViewItems->AllowUserToAddRows = false;
			this->dataGridViewItems->AllowUserToDeleteRows = false;
			this->dataGridViewItems->AllowUserToOrderColumns = true;
			this->dataGridViewItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewItems->Location = System::Drawing::Point(27, 47);
			this->dataGridViewItems->Name = L"dataGridViewItems";
			this->dataGridViewItems->ReadOnly = true;
			this->dataGridViewItems->Size = System::Drawing::Size(403, 271);
			this->dataGridViewItems->TabIndex = 79;
			this->dataGridViewItems->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewItems_CellClick);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->buttonSalesHelp);
			this->tabPage6->Controls->Add(this->button3);
			this->tabPage6->Controls->Add(this->dataGridViewSalesEmployers);
			this->tabPage6->Controls->Add(this->buttonTransactionFormClear);
			this->tabPage6->Controls->Add(this->buttonTransactionDelete);
			this->tabPage6->Controls->Add(this->buttonTransactionSave);
			this->tabPage6->Controls->Add(this->maskedTextBoxSellQuantity);
			this->tabPage6->Controls->Add(this->labelSellQuantity);
			this->tabPage6->Controls->Add(this->comboBoxSellItem);
			this->tabPage6->Controls->Add(this->labelSellItem);
			this->tabPage6->Controls->Add(this->comboBoxSellClient);
			this->tabPage6->Controls->Add(this->labelSellClient);
			this->tabPage6->Controls->Add(this->labelSellIDVal);
			this->tabPage6->Controls->Add(this->labelSellID);
			this->tabPage6->Controls->Add(this->dataGridViewSalesClients);
			this->tabPage6->Controls->Add(this->dataGridViewSalesItems);
			this->tabPage6->Controls->Add(this->button2);
			this->tabPage6->Controls->Add(this->textBox1);
			this->tabPage6->Controls->Add(this->buttonSellsShow);
			this->tabPage6->Controls->Add(this->dataGridViewSales);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(979, 550);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Sprzeda�e";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// buttonSalesHelp
			// 
			this->buttonSalesHelp->Location = System::Drawing::Point(809, 252);
			this->buttonSalesHelp->Name = L"buttonSalesHelp";
			this->buttonSalesHelp->Size = System::Drawing::Size(153, 34);
			this->buttonSalesHelp->TabIndex = 127;
			this->buttonSalesHelp->Text = L"Pomoc";
			this->buttonSalesHelp->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(691, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(255, 26);
			this->button3->TabIndex = 126;
			this->button3->Text = L"Dodaj przedmiot do transakcji";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// dataGridViewSalesEmployers
			// 
			this->dataGridViewSalesEmployers->AllowUserToAddRows = false;
			this->dataGridViewSalesEmployers->AllowUserToDeleteRows = false;
			this->dataGridViewSalesEmployers->AllowUserToOrderColumns = true;
			this->dataGridViewSalesEmployers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSalesEmployers->Location = System::Drawing::Point(705, 351);
			this->dataGridViewSalesEmployers->Name = L"dataGridViewSalesEmployers";
			this->dataGridViewSalesEmployers->ReadOnly = true;
			this->dataGridViewSalesEmployers->Size = System::Drawing::Size(271, 193);
			this->dataGridViewSalesEmployers->TabIndex = 125;
			// 
			// buttonTransactionFormClear
			// 
			this->buttonTransactionFormClear->Enabled = false;
			this->buttonTransactionFormClear->Location = System::Drawing::Point(514, 311);
			this->buttonTransactionFormClear->Name = L"buttonTransactionFormClear";
			this->buttonTransactionFormClear->Size = System::Drawing::Size(153, 34);
			this->buttonTransactionFormClear->TabIndex = 124;
			this->buttonTransactionFormClear->Text = L"Wyczy�� formularz";
			this->buttonTransactionFormClear->UseVisualStyleBackColor = true;
			// 
			// buttonTransactionDelete
			// 
			this->buttonTransactionDelete->Enabled = false;
			this->buttonTransactionDelete->Location = System::Drawing::Point(673, 311);
			this->buttonTransactionDelete->Name = L"buttonTransactionDelete";
			this->buttonTransactionDelete->Size = System::Drawing::Size(147, 34);
			this->buttonTransactionDelete->TabIndex = 123;
			this->buttonTransactionDelete->Text = L"Usu� transakcje";
			this->buttonTransactionDelete->UseVisualStyleBackColor = true;
			// 
			// buttonTransactionSave
			// 
			this->buttonTransactionSave->Location = System::Drawing::Point(826, 311);
			this->buttonTransactionSave->Name = L"buttonTransactionSave";
			this->buttonTransactionSave->Size = System::Drawing::Size(136, 34);
			this->buttonTransactionSave->TabIndex = 122;
			this->buttonTransactionSave->Text = L"Dodaj transakcje";
			this->buttonTransactionSave->UseVisualStyleBackColor = true;
			this->buttonTransactionSave->Click += gcnew System::EventHandler(this, &Magazin::buttonTransactionSave_Click);
			// 
			// maskedTextBoxSellQuantity
			// 
			this->maskedTextBoxSellQuantity->Location = System::Drawing::Point(630, 175);
			this->maskedTextBoxSellQuantity->Mask = L"00000";
			this->maskedTextBoxSellQuantity->Name = L"maskedTextBoxSellQuantity";
			this->maskedTextBoxSellQuantity->Size = System::Drawing::Size(55, 26);
			this->maskedTextBoxSellQuantity->TabIndex = 119;
			this->maskedTextBoxSellQuantity->ValidatingType = System::Int32::typeid;
			this->maskedTextBoxSellQuantity->Visible = false;
			// 
			// labelSellQuantity
			// 
			this->labelSellQuantity->AutoSize = true;
			this->labelSellQuantity->Location = System::Drawing::Point(539, 178);
			this->labelSellQuantity->Name = L"labelSellQuantity";
			this->labelSellQuantity->Size = System::Drawing::Size(82, 18);
			this->labelSellQuantity->TabIndex = 118;
			this->labelSellQuantity->Text = L"Ilo�� sztuk:";
			this->labelSellQuantity->Visible = false;
			// 
			// comboBoxSellItem
			// 
			this->comboBoxSellItem->FormattingEnabled = true;
			this->comboBoxSellItem->Location = System::Drawing::Point(630, 129);
			this->comboBoxSellItem->Name = L"comboBoxSellItem";
			this->comboBoxSellItem->Size = System::Drawing::Size(316, 26);
			this->comboBoxSellItem->TabIndex = 117;
			this->comboBoxSellItem->Text = L"Wybierz z listy";
			this->comboBoxSellItem->Visible = false;
			// 
			// labelSellItem
			// 
			this->labelSellItem->AutoSize = true;
			this->labelSellItem->Location = System::Drawing::Point(538, 129);
			this->labelSellItem->Name = L"labelSellItem";
			this->labelSellItem->Size = System::Drawing::Size(83, 18);
			this->labelSellItem->TabIndex = 116;
			this->labelSellItem->Text = L"Przedmiot:";
			this->labelSellItem->Visible = false;
			// 
			// comboBoxSellClient
			// 
			this->comboBoxSellClient->FormattingEnabled = true;
			this->comboBoxSellClient->Location = System::Drawing::Point(630, 84);
			this->comboBoxSellClient->Name = L"comboBoxSellClient";
			this->comboBoxSellClient->Size = System::Drawing::Size(316, 26);
			this->comboBoxSellClient->TabIndex = 115;
			this->comboBoxSellClient->Text = L"Wybierz z listy";
			// 
			// labelSellClient
			// 
			this->labelSellClient->AutoSize = true;
			this->labelSellClient->Location = System::Drawing::Point(570, 84);
			this->labelSellClient->Name = L"labelSellClient";
			this->labelSellClient->Size = System::Drawing::Size(51, 18);
			this->labelSellClient->TabIndex = 114;
			this->labelSellClient->Text = L"Klient:";
			// 
			// labelSellIDVal
			// 
			this->labelSellIDVal->AutoSize = true;
			this->labelSellIDVal->Location = System::Drawing::Point(627, 56);
			this->labelSellIDVal->Name = L"labelSellIDVal";
			this->labelSellIDVal->Size = System::Drawing::Size(17, 18);
			this->labelSellIDVal->TabIndex = 110;
			this->labelSellIDVal->Text = L"#";
			// 
			// labelSellID
			// 
			this->labelSellID->AutoSize = true;
			this->labelSellID->Location = System::Drawing::Point(452, 56);
			this->labelSellID->Name = L"labelSellID";
			this->labelSellID->Size = System::Drawing::Size(169, 18);
			this->labelSellID->TabIndex = 109;
			this->labelSellID->Text = L"Identyfikator sprzeda�y:";
			// 
			// dataGridViewSalesClients
			// 
			this->dataGridViewSalesClients->AllowUserToAddRows = false;
			this->dataGridViewSalesClients->AllowUserToDeleteRows = false;
			this->dataGridViewSalesClients->AllowUserToOrderColumns = true;
			this->dataGridViewSalesClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSalesClients->Location = System::Drawing::Point(417, 351);
			this->dataGridViewSalesClients->Name = L"dataGridViewSalesClients";
			this->dataGridViewSalesClients->ReadOnly = true;
			this->dataGridViewSalesClients->Size = System::Drawing::Size(282, 193);
			this->dataGridViewSalesClients->TabIndex = 108;
			// 
			// dataGridViewSalesItems
			// 
			this->dataGridViewSalesItems->AllowUserToAddRows = false;
			this->dataGridViewSalesItems->AllowUserToDeleteRows = false;
			this->dataGridViewSalesItems->AllowUserToOrderColumns = true;
			this->dataGridViewSalesItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSalesItems->Location = System::Drawing::Point(8, 351);
			this->dataGridViewSalesItems->Name = L"dataGridViewSalesItems";
			this->dataGridViewSalesItems->ReadOnly = true;
			this->dataGridViewSalesItems->Size = System::Drawing::Size(403, 193);
			this->dataGridViewSalesItems->TabIndex = 107;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(826, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 26);
			this->button2->TabIndex = 106;
			this->button2->Text = L"Wyszukaj";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(569, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 26);
			this->textBox1->TabIndex = 105;
			// 
			// buttonSellsShow
			// 
			this->buttonSellsShow->Location = System::Drawing::Point(8, 7);
			this->buttonSellsShow->Name = L"buttonSellsShow";
			this->buttonSellsShow->Size = System::Drawing::Size(219, 34);
			this->buttonSellsShow->TabIndex = 104;
			this->buttonSellsShow->Text = L"Poka� sprzeda�e";
			this->buttonSellsShow->UseVisualStyleBackColor = true;
			this->buttonSellsShow->Click += gcnew System::EventHandler(this, &Magazin::buttonSellsShow_Click);
			// 
			// dataGridViewSales
			// 
			this->dataGridViewSales->AllowUserToAddRows = false;
			this->dataGridViewSales->AllowUserToDeleteRows = false;
			this->dataGridViewSales->AllowUserToOrderColumns = true;
			this->dataGridViewSales->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSales->Location = System::Drawing::Point(8, 47);
			this->dataGridViewSales->Name = L"dataGridViewSales";
			this->dataGridViewSales->ReadOnly = true;
			this->dataGridViewSales->Size = System::Drawing::Size(403, 298);
			this->dataGridViewSales->TabIndex = 103;
			// 
			// tabPage9
			// 
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(979, 550);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"Dostawy";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(979, 550);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Zwroty";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(979, 550);
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
			this->tabPage8->Size = System::Drawing::Size(979, 550);
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
			this->labelASRNewPassword->Text = L"Nowe has�o:";
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
			this->labelASNewPassword->Text = L"Nowe has�o:";
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
			this->labelASOldPassword->Text = L"Stare has�o:";
			// 
			// checkBoxASIsAdmin
			// 
			this->checkBoxASIsAdmin->AutoSize = true;
			this->checkBoxASIsAdmin->Enabled = false;
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
			this->labelASName->Text = L"Imi�:";
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
			this->ClientSize = System::Drawing::Size(1006, 639);
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
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewClients))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProviders))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewParams))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProducers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewItems))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesEmployers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesClients))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesItems))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSales))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Magazin_Load(System::Object^  sender, System::EventArgs^  e) {
			 String^ query = "Select login, type from employers where id_employers ='" + this->userId + "' LIMIT 1";
			 dbDriver db;
			 db.selectOne(query);

			 if (db.getStatus())
			 {
				this->labelLogedUser->Text = db.result->GetString(0);
				this->userType = db.result->GetBoolean(1);
				
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

			 String^ clToCombo = "SELECT name from clients";
			 dbDriver dbc;
			 dbc.selectOne(clToCombo);
			 if (dbc.getStatus())
			 {
				 comboBoxSellClient->Items->Add(dbc.result->GetString(0));
				 while (dbc.result->Read())
					 comboBoxSellClient->Items->Add(dbc.result->GetString(0));
				 dbc.closeConnection();
			 }
			 else
			 {
				 MessageBox::Show(dbc.getError());
				 dbc.closeConnection();
			 }
	}

	private: Void disableComponents()
	{
		this->buttonEmployerDelete->Enabled = false;
		this->buttonDeleteClient->Enabled = false;
		this->buttonProviderDelete->Enabled = false;
		if (!this->userType)
		{
			
			this->btnSaveEmployer->Enabled = false;
			this->buttonDeleteClient->Enabled = false;
			this->buttonProviderDelete->Enabled = false;
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
					MessageBox::Show("Has�o za kr�tkie lub za d�ugie 4-99 znak�w.");
				}
				
				clearForm();
			}
		}
		else
		{
			MessageBox::Show("Wprowadzone dane s� nieprawdi�owe.");
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
		rowId = 0;
	}

	private: System::Void buttonEmployerDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (rowId > 1 && userId != rowId)
		{
			if (MessageBox::Show("Czy chcesz usun�� u�ytkownika?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
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
					MessageBox::Show("Usuni�to u�ytkownika");
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
			MessageBox::Show("Nie mo�na usun�� swojego konta lub G��wnego Administratora");
		}
		
	}

	private: System::Void Magazin_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (MessageBox::Show("Czy chcesz zamkn�� program?", "Magazyn", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
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
					MessageBox::Show("Dane zosta�y zaktualizowane");
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
								+ "') WHERE id_employers ='" + userId + "'";

							db.update(cquery);
							db.closeConnection();

							cquery = "UPDATE common_data SET common_data.phone='" + textBoxASPhone->Text
								+ "', email='" + textBoxASEmail->Text + "' WHERE id_common_data ='" + relEmployersToCommonData + "'";
							db.update(cquery);

							if (db.getStatus())
							{
								MessageBox::Show("Dane zosta�y zaktualizowane");
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
							MessageBox::Show("Nowe has�o i potwierdzenie nowego has�a maj� r�ne warto�ci");
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

	/*clients*/

	private: System::Void buttonShowClients_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data";
		bindTable(ManyQuery, dataGridViewClients);
	}

	private: System::Void buttonSearchClients_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select clients.id_clients as id, clients.name as Nazwa, common_data.email, common_data.phone from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE clients.name LIKE '%" + textBoxSearchClients->Text + "%' OR clients.nip LIKE '%" + textBoxSearchClients->Text + "%' OR clients.regon LIKE '%" + textBoxSearchClients->Text + "%' OR common_data.email LIKE '%" + textBoxSearchClients + "%' OR common_data.phone LIKE '%" + textBoxSearchClients + "%'";
		bindTable(ManyQuery, dataGridViewClients);
	}
	
	private: System::Void dataGridViewClients_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowIdClients = Convert::ToInt32(dataGridViewClients->Rows[e->RowIndex]->Cells[0]->Value);
			String^ query = "Select * from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data where clients.id_clients ='" + this->rowIdClients + "' LIMIT 1";
			dbDriver db;
			db.selectOne(query);

			if (db.getStatus())
			{
				relClientsToCommonData = db.result->GetInt32(5);
				this->labelClientID->Text = db.result->GetString(0);
				this->textBoxClientName->Text = db.result->GetString(1);
				this->textBoxClientNIP->Text = db.result->GetString(2);
				this->textBoxClientREGON->Text = db.result->GetString(3);
				this->textBoxClientAddress->Text = db.result->GetString(6);
				this->textBoxClientEmail->Text = db.result->GetString(8);
				this->textBoxClientPhone->Text = db.result->GetString(7);
				this->textBoxClientOtherInfo->Text = db.result->GetString(9);
				db.closeConnection();
				if (userType)
					this->buttonDeleteClient->Enabled = true;
				buttonSaveClient->Text = "Zapisz";
			}
			else
			{
				MessageBox::Show(db.getError());
				db.closeConnection();
			}
		}
	}

	private: System::Void buttonClearFormClient_Click(System::Object^  sender, System::EventArgs^  e) {
		clearFormClients();
	}

	private: Void clearFormClients()
	{
		this->labelClientID->Text = "#";
		this->textBoxClientName->Text = "";
		this->textBoxClientNIP->Text = "";
		this->textBoxClientREGON->Text = "";
		this->textBoxClientAddress->Text = "";
		this->textBoxClientEmail->Text = "";
		this->textBoxClientPhone->Text = "";
		this->textBoxClientOtherInfo->Text = "";
		buttonSaveClient->Text = "Dodaj";
		this->buttonDeleteClient->Enabled = false;
		rowIdClients = 0;
	}

	private: System::Void buttonSaveClient_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (textBoxClientName->Text->Length < 2) throw 1;
			if (textBoxClientName->Text->Length > 255) throw 2;
			if (textBoxClientNIP->Text->Length != 10) throw 3;
			if (textBoxClientREGON->Text->Length != 9) throw 4;
			if (textBoxClientAddress->Text->Length < 10) throw 5;
			if (textBoxClientAddress->Text->Length > 255) throw 6;
			if (textBoxClientEmail->Text->Length < 5) throw 7;
			if (textBoxClientEmail->Text->Length > 255) throw 8;
			if (textBoxClientPhone->Text->Length < 4) throw 9;
			if (textBoxClientPhone->Text->Length > 20) throw 10;

			if (rowIdClients > 0)
			{
				String^ query = "UPDATE clients SET name='" + textBoxClientName->Text
					+ "', nip='" + textBoxClientNIP->Text
					+ "', regon='" + textBoxClientREGON->Text
					+ "' WHERE id_clients ='" + rowIdClients + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ cquery = "UPDATE common_data SET address='" + textBoxClientAddress->Text
						+ "', phone='" + textBoxClientPhone->Text
						+ "', email='" + textBoxClientEmail->Text
						+ "', other_info='" + textBoxClientOtherInfo->Text
						+ "' WHERE id_common_data ='" + relClientsToCommonData + "'";

					db.update(cquery);

					if (db.getStatus())
					{
						String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data";
						bindTable(ManyQuery, dataGridViewClients);
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

				clearFormClients();
			}
			else
			{
				String^ cquery = "INSERT INTO common_data(address, phone, email, other_info) VALUES('"
					+ textBoxClientAddress->Text + "', '"
					+ textBoxClientPhone->Text + "', '"
					+ textBoxClientEmail->Text + "', '"
					+ textBoxClientOtherInfo->Text + "')";
				dbDriver db;
				db.insert(cquery);

				if (db.getStatus())
				{
					db.closeConnection();
					dbDriver dbs;
					String^ squery = "SELECT id_common_data FROM common_data WHERE address='"
						+ textBoxClientAddress->Text + "'AND phone='"
						+ textBoxClientPhone->Text + "'AND email='"
						+ textBoxClientEmail->Text + "'";
					dbs.selectOne(squery);
					if (dbs.getStatus())
					{
						String^ equery = "INSERT INTO clients(name, nip, regon, cdata) VALUES('"
							+ textBoxClientName->Text + "', '"
							+ textBoxClientNIP->Text + "', '"
							+ textBoxClientREGON->Text + "', '"
							+ dbs.result->GetInt32(0) + "')";
						dbs.closeConnection();
						dbDriver dbi;
						dbi.insert(equery);

						if (dbi.getStatus())
						{
							String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data";
							bindTable(ManyQuery, dataGridViewClients);
						}
						else
							MessageBox::Show(db.getError());
						dbi.closeConnection();
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
				clearFormClients();
			}
		}
		catch (int err)
		{
			String^ error;
			switch (err)
			{
			case 1:
				error = "Nazwa klienta jest za kr�tka: minimum 2 znaki";
				break;
			case 2:
				error = "Nazwa klienta jest za d�uga: maksymalnie 255 znak�w";
				break;
			case 3:
				error = "NIP musi mie� 10 cyfr";
				break;
			case 4:
				error = "REGON musi mie� 9 cyfr";
				break;
			case 5:
				error = "Adres jest za kr�tki: minimum 10 znak�w";
				break;
			case 6:
				error = "Adres jest za kr�tki: maksimum 255 znak�w";
				break;
			case 7:
				error = "Email jest za kr�tki: minimum 5 znak�w";
				break;
			case 8:
				error = "Email jest za d�ugi: maksimum 255 znak�w";
				break;
			case 9:
				error = "Nr telefonu jest za kr�tki: minimum 4 znaki";
				break;
			case 10:
				error = "Nr telefonu jest za d�ugi: maksimum 20 znak�w";
				break;
			default:
				error = "Wyst�pi� nieznany b��d.";
				break;
			}
			MessageBox::Show(error);
		}
	}
	
	private: System::Void buttonDeleteClient_Click(System::Object^  sender, System::EventArgs^  e) {
		if (rowIdClients > 0 && userType)
		{
			if (MessageBox::Show("Czy chcesz usun�� klienta?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE clients, common_data FROM clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE clients.id_clients='" + rowIdClients + "'";
				dbDriver db;
				db.deleteFromSql(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data";
					bindTable(ManyQuery, dataGridViewClients);
					clearFormClients();
					MessageBox::Show("Usuni�to klienta");
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
			MessageBox::Show("Nie mo�na usun�� klienta");
		}
	}
	
	/* clients end */

	/* providers*/

	private: System::Void buttonShowProviders_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data";
		bindTable(ManyQuery, dataGridViewProviders);
	}

	private: System::Void buttonSearchProviders_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select providers.id_providers as id, providers.name as Nazwa, common_data.email, common_data.phone from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE providers.name LIKE '%" + textBoxSearchClients->Text + "%' OR providers.nip LIKE '%" + textBoxSearchClients->Text + "%' OR providers.regon LIKE '%" + textBoxSearchClients->Text + "%' OR common_data.email LIKE '%" + textBoxSearchClients + "%' OR common_data.phone LIKE '%" + textBoxSearchClients + "%'";
		bindTable(ManyQuery, dataGridViewProviders);
	}

	private: System::Void dataGridViewProviders_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowIdProviders = Convert::ToInt32(dataGridViewProviders->Rows[e->RowIndex]->Cells[0]->Value);
			String^ query = "Select * from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data where providers.id_providers ='" + this->rowIdProviders + "' LIMIT 1";
			dbDriver db;
			db.selectOne(query);

			if (db.getStatus())
			{
				relProvidersToCommonData = db.result->GetInt32(5);
				this->labelProviderIDVal->Text = db.result->GetString(0);
				this->textBoxProviderName->Text = db.result->GetString(1);
				this->textBoxProviderNIP->Text = db.result->GetString(2);
				this->textBoxProviderREGON->Text = db.result->GetString(3);
				this->textBoxProviderAddress->Text = db.result->GetString(6);
				this->textBoxProviderEmail->Text = db.result->GetString(8);
				this->textBoxProviderPhone->Text = db.result->GetString(7);
				this->textBoxProviderOtherInfo->Text = db.result->GetString(9);

				if (userType)
					this->buttonProviderDelete->Enabled = true;
				buttonProviderSave->Text = "Zapisz";
			}
			else
				MessageBox::Show(db.getError());
			
			db.closeConnection();
		}
	}

	private: System::Void buttonClearProviderForm_Click(System::Object^  sender, System::EventArgs^  e) {
		clearFormProviders();
	}

	private: Void clearFormProviders()
	{
		this->labelProviderIDVal->Text = "#";
		this->textBoxProviderName->Text = "";
		this->textBoxProviderNIP->Text = "";
		this->textBoxProviderREGON->Text = "";
		this->textBoxProviderAddress->Text = "";
		this->textBoxProviderEmail->Text = "";
		this->textBoxProviderPhone->Text = "";
		this->textBoxProviderOtherInfo->Text = "";
		buttonProviderSave->Text = "Dodaj";
		this->buttonProviderDelete->Enabled = false;
		rowIdProviders = 0;
	}

	private: System::Void buttonProviderSave_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (textBoxProviderName->Text->Length < 2) throw 1;
			if (textBoxProviderName->Text->Length > 255) throw 2;
			if (textBoxProviderNIP->Text->Length != 10) throw 3;
			if (textBoxProviderREGON->Text->Length != 9) throw 4;
			if (textBoxProviderAddress->Text->Length < 10) throw 5;
			if (textBoxProviderAddress->Text->Length > 255) throw 6;
			if (textBoxProviderEmail->Text->Length < 5) throw 7;
			if (textBoxProviderEmail->Text->Length > 255) throw 8;
			if (textBoxProviderPhone->Text->Length < 4) throw 9;
			if (textBoxProviderPhone->Text->Length > 20) throw 10;

			if (rowIdProviders > 0)
			{
				String^ query = "UPDATE providers SET name='" + textBoxProviderName->Text
					+ "', nip='" + textBoxProviderNIP->Text
					+ "', regon='" + textBoxProviderREGON->Text
					+ "' WHERE id_providers ='" + rowIdProviders + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ cquery = "UPDATE common_data SET address='" + textBoxProviderAddress->Text
						+ "', phone='" + textBoxProviderPhone->Text
						+ "', email='" + textBoxProviderEmail->Text
						+ "', other_info='" + textBoxProviderOtherInfo->Text
						+ "' WHERE id_common_data ='" + relProvidersToCommonData + "'";
					MessageBox::Show(cquery);
					db.update(cquery);

					if (db.getStatus())
					{
						String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data";
						bindTable(ManyQuery, dataGridViewProviders);
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

				clearFormProviders();
			}
			else
			{
				String^ cquery = "INSERT INTO common_data(address, phone, email, other_info) VALUES('"
					+ textBoxProviderAddress->Text + "', '"
					+ textBoxProviderPhone->Text + "', '"
					+ textBoxProviderEmail->Text + "', '"
					+ textBoxProviderOtherInfo->Text + "')";
				dbDriver db;
				db.insert(cquery);

				if (db.getStatus())
				{
					db.closeConnection();
					dbDriver dbs;
					String^ squery = "SELECT id_common_data FROM common_data WHERE address='"
						+ textBoxProviderAddress->Text + "'AND phone='"
						+ textBoxProviderPhone->Text + "'AND email='"
						+ textBoxProviderEmail->Text + "'";
					dbs.selectOne(squery);
					if (dbs.getStatus())
					{
						String^ equery = "INSERT INTO providers(name, nip, regon, cdata) VALUES('"
							+ textBoxProviderName->Text + "', '"
							+ textBoxProviderNIP->Text + "', '"
							+ textBoxProviderREGON->Text + "', '"
							+ dbs.result->GetInt32(0) + "')";
						dbs.closeConnection();
						dbDriver dbi;
						dbi.insert(equery);

						if (dbi.getStatus())
						{
							String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data";
							bindTable(ManyQuery, dataGridViewProviders);
						}
						else
							MessageBox::Show(db.getError());
						dbi.closeConnection();
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
				clearFormProviders();
			}
		}
		catch (int err)
		{
			String^ error;
			switch (err)
			{
			case 1:
				error = "Nazwa klienta jest za kr�tka: minimum 2 znaki";
				break;
			case 2:
				error = "Nazwa klienta jest za d�uga: maksymalnie 255 znak�w";
				break;
			case 3:
				error = "NIP musi mie� 10 cyfr";
				break;
			case 4:
				error = "REGON musi mie� 9 cyfr";
				break;
			case 5:
				error = "Adres jest za kr�tki: minimum 10 znak�w";
				break;
			case 6:
				error = "Adres jest za kr�tki: maksimum 255 znak�w";
				break;
			case 7:
				error = "Email jest za kr�tki: minimum 5 znak�w";
				break;
			case 8:
				error = "Email jest za d�ugi: maksimum 255 znak�w";
				break;
			case 9:
				error = "Nr telefonu jest za kr�tki: minimum 4 znaki";
				break;
			case 10:
				error = "Nr telefonu jest za d�ugi: maksimum 20 znak�w";
				break;
			default:
				error = "Wyst�pi� nieznany b��d.";
				break;
			}
			MessageBox::Show(error);
		}
	}

	private: System::Void buttonProviderDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (rowIdProviders > 0 && userType)
		{
			if (MessageBox::Show("Czy chcesz usun�� dostawce?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE providers, common_data FROM providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE providers.id_providers='" + rowIdProviders + "'";
				dbDriver db;
				db.deleteFromSql(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data";
					bindTable(ManyQuery, dataGridViewProviders);
					clearFormClients();
					MessageBox::Show("Usuni�to dostawce");
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
			MessageBox::Show("Nie mo�na usun�� dostawcy");
		}
	}

	/* providers end */

	/* items*/
	private: System::Void buttonItemsShow_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		bindTable(ItemsQuery, dataGridViewItems);

		String^ ParamsQuery = "Select name as Parametry from features";
		bindTable(ParamsQuery, dataGridViewParams);

		String^ ProducersQuery = "Select name as Producenci from producers";
		bindTable(ProducersQuery, dataGridViewProducers);
	}

	private: System::Void buttonItemsSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price from items INNER JOIN producers ON items.id_producers = producers.id_producers WHERE items.name LIKE '%" + textBoxItemsSearch->Text + "%' OR items.model LIKE '%" + textBoxItemsSearch->Text + "%' OR producers.name LIKE '%" + textBoxItemsSearch->Text + "%'";
		bindTable(ManyQuery, dataGridViewItems);
	}

	private: System::Void dataGridViewItems_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowIdItems = Convert::ToInt32(dataGridViewItems->Rows[e->RowIndex]->Cells[0]->Value);
			
			String^ ParamsQuery = "Select features.name as Parametry, products_features.value as Wartosc from features INNER JOIN products_features ON products_features.id_features = features.id_features INNER JOIN items ON products_features.id_items = items.id_items WHERE products_features.id_items='" + rowIdItems + "'";
			bindTable(ParamsQuery, dataGridViewParams);

			String^ ProducersQuery = "Select producers.name as Producenci from producers INNER JOIN items ON items.id_producers = producers.id_producers WHERE items.id_items='" + rowIdItems + "'";
			bindTable(ProducersQuery, dataGridViewProducers);

			String^ query = "Select * FROM items WHERE id_items='" + rowIdItems + "'";
			dbDriver db;
			db.selectOne(query);

			if (db.getStatus())
			{
				this->labelItemIDVal->Text = db.result->GetString(0);
				this->textBoxItemName->Text = db.result->GetString(1);
				this->textBoxItemModel->Text = db.result->GetString(2);
				this->labelItemQuantityVal->Text = db.result->GetString(3);
				this->TextBoxItemPrice->Text = db.result->GetDecimal("price").ToString("00000.00");

				if (userType)
					this->buttonItemDelete->Enabled = true;
				buttonItemSave->Text = "Zapisz";
				labelItemParam->Visible = true;
				comboBoxItemParam->Visible = true;
				textBoxItemParamVal->Visible = true;
				labelItemProducer->Visible = true;
				comboBoxItemProducer->Visible = true;
				comboBoxItemProducer->Visible = true;
				buttonItemParamAdd->Visible = true;
				buttonItemProducerAdd->Visible = true;
				comboBoxItemParam->Items->Clear();
				comboBoxItemProducer->Items->Clear();
				comboBoxItemParam->Text = "Dodaj nowy";
				comboBoxItemProducer->Text = "Dodaj nowy";
				buttonItemClearForm->Enabled = true;
				buttonItemParamHelp->Visible = true;
				buttonItemParamDelete->Visible = true;
				buttonItemParamHelp->Visible = true;
				buttonItemProducerDelete->Visible = true;
				textBoxItemParamVal->Text = "";
				buttonItemProducerHelp->Visible = true;

				String^ ParamsQueryToBox = "Select features.name as Parametry, products_features.value as Wartosc from features INNER JOIN products_features ON products_features.id_features = features.id_features INNER JOIN items ON products_features.id_items = items.id_items";
				dbDriver db;
				db.selectOne(ParamsQueryToBox);
				if (db.getStatus())
				{
					while(db.result->Read())
						comboBoxItemParam->Items->Add(db.result->GetString(0));

					String^ ProducerQueryToBox = "Select producers.name FROM producers INNER JOIN items ON items.id_producers = producers.id_producers WHERE items.id_items='" + rowIdItems + "'";
					dbDriver dbp;
					dbp.selectOne(ProducerQueryToBox);
					if (dbp.getStatus())
					{
						comboBoxItemProducer->Text = dbp.result->GetString(0);
						String^ AllProducerQueryToBox = "Select name From producers";
						dbDriver dbpa;
						dbpa.selectOne(AllProducerQueryToBox);
						if (dbpa.getStatus())
						{
							comboBoxItemProducer->Items->Add(dbpa.result->GetString(0));
							while (dbpa.result->Read())
								comboBoxItemProducer->Items->Add(dbpa.result->GetString(0));
						}
						else
							MessageBox::Show(dbp.getError());
						dbpa.closeConnection();
					}
					else
						MessageBox::Show(dbp.getError());
					dbp.closeConnection();
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();

			}
			else
				MessageBox::Show(db.getError());

			db.closeConnection();
		
		}
	}
	
	private: System::Void comboBoxItemParam_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		textBoxItemParamVal->Text = "";
		String^ query = "SELECT products_features.value FROM products_features INNER JOIN features ON products_features.id_features = features.id_features WHERE products_features.id_items='" + rowIdItems +
			"' AND products_features.id_features=(SELECT features.id_features FROM features WHERE features.name='" + comboBoxItemParam->Text + "')";
		dbDriver db;
		db.selectOne(query);
		if (db.getStatus())
		{
			textBoxItemParamVal->Text = db.result->GetString(0);
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void buttonItemClearForm_Click(System::Object^  sender, System::EventArgs^  e) {
		clearItemForm();
	}

	private: Void clearItemForm()
	{
		rowIdItems = 0;
		labelItemIDVal->Text = "#";
		textBoxItemName->Text = "";
		textBoxItemModel->Text = "";
		labelItemQuantityVal->Text = "";
		TextBoxItemPrice->Text = "";
		buttonItemDelete->Enabled = false;
		buttonItemSave->Text = "Dodaj";
		labelItemParam->Visible = false;
		comboBoxItemParam->Visible = false;
		textBoxItemParamVal->Visible = false;
		labelItemProducer->Visible = false;
		comboBoxItemProducer->Visible = false;
		comboBoxItemProducer->Visible = false;
		buttonItemParamAdd->Visible = false;
		buttonItemProducerAdd->Visible = false;
		comboBoxItemParam->Items->Clear();
		comboBoxItemProducer->Items->Clear();
		comboBoxItemParam->Text = "Dodaj nowy";
		comboBoxItemProducer->Text = "Dodaj nowy";
		buttonItemClearForm->Enabled = false;
		buttonItemParamHelp->Visible = false;
		buttonItemParamDelete->Visible = false;
		buttonItemParamHelp->Visible = false;
		buttonItemProducerDelete->Visible = false;
		buttonItemParamHelp->Visible = false;
	}

	private: System::Void buttonItemSave_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			String^ price = TextBoxItemPrice->Text->Replace(",", ".");
			if (textBoxItemName->Text->Length < 2) throw 1;
			if (textBoxItemName->Text->Length > 255) throw 2;
			if (textBoxItemModel->Text->Length < 2) throw 3;
			if (textBoxItemModel->Text->Length > 255) throw 4;
			//if (Convert::ToDouble(price) < 0.00) throw 5;
			
			if (rowIdItems > 0)
			{
				String^ query = "UPDATE items SET name='" + textBoxItemName->Text + "', model='" + textBoxItemModel->Text + "', price='" + price + "' WHERE id_items='" + rowIdItems + "'";
				dbDriver db;
				db.update(query); MessageBox::Show(query);
				if (!db.getStatus())
					MessageBox::Show(db.getError());
				else
					MessageBox::Show("Dane przedmiotu zosta�y zaktualizowane");
				db.closeConnection();
				clearItemForm();
			}
			else
			{
				String^ query = "INSERT INTO items(name, model, price, id_producers) VALUES('" + textBoxItemName->Text + "','" + textBoxItemModel->Text + "','" + price + "', '1')";
				dbDriver db;
				db.insert(query);
				if (!db.getStatus())
					MessageBox::Show(db.getError());
				else
					MessageBox::Show("Przedmiot zosta� dodany");
				db.closeConnection();
				clearItemForm();
			}
			
			String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price AS Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
			bindTable(ItemsQuery, dataGridViewItems);

			String^ ParamsQuery = "Select name as Parametry from features";
			bindTable(ParamsQuery, dataGridViewParams);

			String^ ProducersQuery = "Select name as Producenci from producers";
			bindTable(ProducersQuery, dataGridViewProducers);

		}
		catch (int ex)
		{
			if (ex == 1)
				MessageBox::Show("Nazwa przedmiotu powinna mie� przynajmniej 2 znaki");
			if (ex == 2)
				MessageBox::Show("Nazwa przedmiotu powinna mie� najwi�cej 255 znak�w");
			if (ex == 3)
				MessageBox::Show("Nazwa modelu powinna mie� przynajmniej 2 znaki");
			if (ex == 4)
				MessageBox::Show("Nazwa modelu powinna mie� najwi�cej 255 znak�w");
		}	
	}

	private: System::Void buttonItemParamAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (comboBoxItemParam->Text->Length < 2) throw 1;
			if (comboBoxItemParam->Text->Length > 255) throw 2;
			if (textBoxItemParamVal->Text->Length == 0) throw 4;
			if (textBoxItemParamVal->Text->Length > 255) throw 5;
			String^ query = "SELECT count(id_features) AS ct, id_features FROM features WHERE name='" + comboBoxItemParam->Text + "'";
			dbDriver db;
			db.selectOne(query);
			if (!db.getStatus()) {
				MessageBox::Show(db.getError());
				throw 0;
			}
			if (db.result->GetInt32(0) == 1)
			{
				int id_features = db.result->GetInt32(1);
				db.closeConnection();

				String^ squery = "SELECT count(id_items) as ct FROM products_features WHERE id_features='" + id_features + "' AND id_items='" + rowIdItems + "'";
				dbDriver dbs;
				dbs.selectOne(squery);
				if (!dbs.getStatus()) {
					MessageBox::Show(dbs.getError());
					throw 0;
				}
				if (dbs.result->GetInt32(0) == 1)
				{
					String^ uquery = "UPDATE products_features INNER JOIN features ON products_features.id_features = features.id_features SET products_features.value='" + textBoxItemParamVal->Text + "' WHERE products_features.id_features='" + id_features + "' AND products_features.id_items='" + rowIdItems + "'";
					dbDriver dbu;
					dbu.update(uquery);
					if (!dbu.getStatus()) {
						MessageBox::Show(dbu.getError());
					}
					else
						MessageBox::Show("Zaktualizowano warto�� parametru");
					dbu.closeConnection();
				}
				else if (dbs.result->GetInt32(0) == 0)
				{
					String^ iquery = "INSERT INTO products_features(id_items, id_features, value) VALUES('" + rowIdItems + "', '" + id_features + "', '" + textBoxItemParamVal->Text + "')";
					dbDriver dbi;
					dbi.update(iquery);
					if (!dbi.getStatus()) {
						MessageBox::Show(dbi.getError());
					}
					else
						MessageBox::Show("Dodano parametr do przedmiotu");
					dbi.closeConnection();
				}
				else
					throw 3;
				dbs.closeConnection();
			}
			else if (db.result->GetInt32(0) == 0)
			{
				db.closeConnection();
				String^ iquery = "INSERT INTO features(name) VALUES('" + comboBoxItemParam->Text + "')";
				dbDriver dbi;
				dbi.insert(iquery);
				if (!dbi.getStatus()) {
					MessageBox::Show(dbi.getError());
					dbi.closeConnection();
				}
				else
				{
					dbi.closeConnection();
					String^ iiquery = "INSERT INTO products_features(id_items, id_features, value) VALUES('" + rowIdItems + "', (SELECT id_features FROM features WHERE name='" + comboBoxItemParam->Text + "'), '" + textBoxItemParamVal->Text + "')";
					dbDriver dbii;
					dbii.insert(iiquery);
					if (!dbii.getStatus())
					{
						MessageBox::Show(dbii.getError());
					}
					else
						MessageBox::Show("Parametr zosta� dodany");
					dbii.closeConnection();
				}
			}
			else
				throw 3;
		}
		catch (int ex)
		{
			if (ex == 1)
				MessageBox::Show("Nazwa parametru powinna mie� przynajmniej 2 znaki");
			if (ex == 2)
				MessageBox::Show("Nazwa parametru powinna mie� najwi�cej 255 znak�w");
			if (ex == 3)
				MessageBox::Show("Nazwa parametru jest niepoprawna");
			if (ex == 4)
				MessageBox::Show("Warto�� parametru nie mo�e by� pusta");
			if (ex == 4)
				MessageBox::Show("D�ugo�� warto�ci parametru powinna mie� najwi�cej 255 znak�w");
		}
	}

	private: System::Void buttonItemParamDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBoxItemParamVal->Text == "")
		{
			if (MessageBox::Show("Czy chcesz na sta�e usun�� parametr?\n Zostanie on usuni�ty ze wszystkich przedmiot�w w magazynie!", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE features, products_features FROM features INNER JOIN products_features ON products_features.id_features = features.id_features WHERE features.name='" + comboBoxItemParam->Text + "'";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Parametr zosta� usuni�ty ze wszystkich przedmiot�w w magazynie");
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();

			}
		}
		else if(textBoxItemParamVal->Text != "")
		{
			if (MessageBox::Show("Czy chcesz na sta�e usun�� parametr z przedmiotu?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE FROM products_features WHERE products_features.id_features=(SELECT id_features FROM features WHERE name='" + comboBoxItemParam->Text + "')";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Parametr zosta� usuni�ty z przedmiotu");
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();

			}
		}
	}

	private: System::Void buttonItemProducerAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			if (comboBoxItemProducer->Text->Length < 2) throw 1;
			if (comboBoxItemProducer->Text->Length > 255) throw 2;
			String^ query = "SELECT count(id_producers), id_producers FROM producers WHERE name='" + comboBoxItemProducer->Text + "'";
			dbDriver db;
			db.selectOne(query);
			if (!db.getStatus())
			{
				MessageBox::Show(db.getError());
			}

			if (db.result->GetInt32(0) == 1)
			{
				db.closeConnection();
				String^ uquery = "UPDATE items SET id_producers=(SELECT id_producers FROM producers WHERE name='" + comboBoxItemProducer->Text + "') WHERE id_items='" + rowIdItems + "'";
				dbDriver db;
				db.update(uquery);
				if (!db.getStatus()) {
					MessageBox::Show(db.getError());
				}
				else
					MessageBox::Show("Zaktualizowano producenta");
				db.closeConnection();

			}
			else if (db.result->GetInt32(0) == 0)
			{
				db.closeConnection();
				String^ upquery = "INSERT INTO producers(name) VALUES('" + comboBoxItemProducer->Text + "')";
				dbDriver dbup;
				dbup.insert(upquery);
				if (!dbup.getStatus())
				{
					MessageBox::Show(dbup.getError());
					dbup.closeConnection();
				}
				else
				{
					dbup.closeConnection();
					String^ uquery = "UPDATE items SET id_producers=(SELECT id_producers FROM producers WHERE name='" + comboBoxItemProducer->Text + "') WHERE id_items='" + rowIdItems + "'";
					dbDriver dbu;
					dbu.update(uquery);
					if (!dbu.getStatus()) {
						MessageBox::Show(dbu.getError());
					}
					else
						MessageBox::Show("Zaktualizowano producenta");
					dbu.closeConnection();
				}
			}
			else
			{
				db.closeConnection();
				throw 3;
			}			
		}
		catch (int ex)
		{
			if (ex == 1)
				MessageBox::Show("Nazwa producenta powinna mie� przynajmniej 2 znaki");
			if (ex == 2)
				MessageBox::Show("Nazwa producenta powinna mie� najwi�cej 255 znak�w");
			if (ex == 3)
				MessageBox::Show("Wyst�pi� nieznany b��d");
		}
	}

	private: System::Void buttonItemProducerDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Czy chcesz na sta�e usun�� producenta?\n Zostanie on usuni�ty ze wszystkich przedmiot�w w magazynie!", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ uquery = "UPDATE items SET id_producers=1 WHERE id_producers=(SELECT id_producers FROM producers WHERE name='" + comboBoxItemProducer->Text + "')";
			dbDriver dbu;
			dbu.update(uquery);
			if (dbu.getStatus())
			{
				String^ query = "DELETE FROM producers WHERE name ='" + comboBoxItemProducer->Text + "'";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Parametr zosta� usuni�ty ze wszystkich przedmiot�w w magazynie");
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();
			}
			else
				MessageBox::Show(dbu.getError());
			dbu.closeConnection();
		}
	}

	private: System::Void buttonItemDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (userType)
		{
			if (MessageBox::Show("Czy chcesz na sta�e usun�� przedmiot?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE items, products_features FROM items INNER JOIN products_features ON products_features.id_items = items.id_items WHERE items.id_items='" + rowIdItems + "'";

				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price from items INNER JOIN producers ON items.id_producers = producers.id_producers";
					bindTable(ItemsQuery, dataGridViewItems);

					String^ ParamsQuery = "Select name as Parametry from features";
					bindTable(ParamsQuery, dataGridViewParams);

					String^ ProducersQuery = "Select name as Producenci from producers";
					bindTable(ProducersQuery, dataGridViewProducers);
					clearItemForm();
					MessageBox::Show("Przedmiot zosta� usuni�ty z bazy dancyh");
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();
			}
		}
	}

	private: System::Void buttonItemHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("INSTRUKCJA DODAWANIA PRZEDMIOTU\n"
			+ "1. Uzupe�nij odpowiednio pola i nast�pnie naci�nij przycisk Dodaj\n"
			+ "2. Wyszukaj dodany przedmiot i dodaj mu parametry i producenta");
	}

	private: System::Void buttonItemParamHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("INSTRUKCJA DODAWANIA PARAMETRU\n" 
			+ "Je�eli chcesz dodaj istniej�cy parametr wybierz go z rozwijanej listy i obok wpisz jego warto��\n"
			+ "Je�eli chcesz dodaj nieistniej�cy parametr wpisz go w pierwszym polu oraz jego warto�� w drugim polu\n\n"
			+ "Aby usun�� parametr z przedmiotu wybierz go w rozwijanej listy i naci�ni� przycisk X\n"
			+ "Aby usun�� parametr ze wszystkich przedmiot�w wybierz go z rozwijanej listy nast�pnie usu� jego warto�� i naci�nij przycisk X");
	}

	private: System::Void buttonItemProducerHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("INSTRUKCJA DODAWANIA PRODUCENTA\n"
		+ "Aby doda� nowego producenta wpisz jego nazw� a nast�pnie naci�nij przycisk Dodaj\n"
		+ "Aby ustawi� istniej�cego producenta wybierz go z rozwijanej listy a nast�pnie naci�nij przycisk Dodaj\n"
		+ "Aby usun�� producenta wybierz go z rozwijanej listy a nast�pnie naci�nij przycisk X");
	}
	
	private: System::Void buttonSellsShow_Click(System::Object^  sender, System::EventArgs^  e) {
		//String^ SalesQuery = "SELECT sales.id_sales, employers.name, employers.surname, clients.name, items.name, items.model, sales.quantity_status, sales.date, sales.transaction_price From sales Inner join employers on sales.id_employers = employers.id_employers inner join clients on sales.id_clients = clients.id_clients inner join items on sales.id_items = items.id_items";
		//bindTable(SalesQuery, dataGridViewSales);

		String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		bindTable(ItemsQuery, dataGridViewSalesItems);

		String^ ProvidersQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data";
		bindTable(ProvidersQuery, dataGridViewSalesEmployers);

		String^ ClientsQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data";
		bindTable(ClientsQuery, dataGridViewSalesClients);

		
	}

	private: System::Void buttonTransactionSave_Click(System::Object^  sender, System::EventArgs^  e) {
	
	}
};
}
