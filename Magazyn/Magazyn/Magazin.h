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
			rowId = -1;
			rowIdClients = -1;
			rowIdProviders = -1;
			rowIdItems = -1;
			rowIdSales = -1;
			rowIdDelivery = -1;
			relEmployersToCommonData = -1;
			relClientsToCommonData = -1;
			relProvidersToCommonData = -1;
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
		int rowIdSales;
		int rowIdDelivery;
		int relEmployersToCommonData;
		int relClientsToCommonData;
		int relProvidersToCommonData;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;

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
private: System::Windows::Forms::DataGridView^  dataGridViewSalesEmployers;

private: System::Windows::Forms::DataGridView^  dataGridViewSalesItems;


private: System::Windows::Forms::Button^  buttonSellsShow;
private: System::Windows::Forms::DataGridView^  dataGridViewSales;
private: System::Windows::Forms::DataGridView^  dataGridViewSalesClients;


private: System::Windows::Forms::TabPage^  tabPage9;
private: System::Windows::Forms::Button^  buttonSalesHelp;
private: System::Windows::Forms::Button^  buttonSalesClose;
private: System::Windows::Forms::Button^  buttonSalesAddItem;
private: System::Windows::Forms::Button^  buttonSalesClearForm;
private: System::Windows::Forms::Button^  buttonSalesDelete;
private: System::Windows::Forms::Button^  buttonSalesSave;
private: System::Windows::Forms::Button^  buttonSalesDeleteItem;
private: System::Windows::Forms::Button^  buttonDeliveryDeleteItem;
private: System::Windows::Forms::Button^  buttonDeliveryHelp;


private: System::Windows::Forms::Button^  buttonDeliveryClose;

private: System::Windows::Forms::Button^  buttonDeliveryAddItem;
private: System::Windows::Forms::Button^  buttonDeliveryClearForm;
private: System::Windows::Forms::Button^  buttonDeliveryDelete;
private: System::Windows::Forms::Button^  buttonDeliverySave;




private: System::Windows::Forms::DataGridView^  dataGridViewDeliveryProviders;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxDeliveryQuantity;


private: System::Windows::Forms::Label^  labelDeliveryQuantity;

private: System::Windows::Forms::ComboBox^  comboBoxDeliveryItem;

private: System::Windows::Forms::Label^  labelDeliveryItem;

private: System::Windows::Forms::ComboBox^  comboBoxDeliveryProvider;

private: System::Windows::Forms::Label^  labelDeliveryProvider;

private: System::Windows::Forms::Label^  labelDeliveryIDVal;

private: System::Windows::Forms::Label^  labelDeliveryID;

private: System::Windows::Forms::DataGridView^  dataGridViewDeliveryEmployers;

private: System::Windows::Forms::DataGridView^  dataGridViewDeliveryItems;

private: System::Windows::Forms::Button^  buttonDeliveryShow;
private: System::Windows::Forms::DataGridView^  dataGridViewDelivery;





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
			this->buttonSalesDeleteItem = (gcnew System::Windows::Forms::Button());
			this->buttonSalesHelp = (gcnew System::Windows::Forms::Button());
			this->buttonSalesClose = (gcnew System::Windows::Forms::Button());
			this->buttonSalesAddItem = (gcnew System::Windows::Forms::Button());
			this->buttonSalesClearForm = (gcnew System::Windows::Forms::Button());
			this->buttonSalesDelete = (gcnew System::Windows::Forms::Button());
			this->buttonSalesSave = (gcnew System::Windows::Forms::Button());
			this->dataGridViewSalesClients = (gcnew System::Windows::Forms::DataGridView());
			this->maskedTextBoxSellQuantity = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelSellQuantity = (gcnew System::Windows::Forms::Label());
			this->comboBoxSellItem = (gcnew System::Windows::Forms::ComboBox());
			this->labelSellItem = (gcnew System::Windows::Forms::Label());
			this->comboBoxSellClient = (gcnew System::Windows::Forms::ComboBox());
			this->labelSellClient = (gcnew System::Windows::Forms::Label());
			this->labelSellIDVal = (gcnew System::Windows::Forms::Label());
			this->labelSellID = (gcnew System::Windows::Forms::Label());
			this->dataGridViewSalesEmployers = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewSalesItems = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSellsShow = (gcnew System::Windows::Forms::Button());
			this->dataGridViewSales = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->buttonDeliveryDeleteItem = (gcnew System::Windows::Forms::Button());
			this->buttonDeliveryHelp = (gcnew System::Windows::Forms::Button());
			this->buttonDeliveryClose = (gcnew System::Windows::Forms::Button());
			this->buttonDeliveryAddItem = (gcnew System::Windows::Forms::Button());
			this->buttonDeliveryClearForm = (gcnew System::Windows::Forms::Button());
			this->buttonDeliveryDelete = (gcnew System::Windows::Forms::Button());
			this->buttonDeliverySave = (gcnew System::Windows::Forms::Button());
			this->dataGridViewDeliveryProviders = (gcnew System::Windows::Forms::DataGridView());
			this->maskedTextBoxDeliveryQuantity = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelDeliveryQuantity = (gcnew System::Windows::Forms::Label());
			this->comboBoxDeliveryItem = (gcnew System::Windows::Forms::ComboBox());
			this->labelDeliveryItem = (gcnew System::Windows::Forms::Label());
			this->comboBoxDeliveryProvider = (gcnew System::Windows::Forms::ComboBox());
			this->labelDeliveryProvider = (gcnew System::Windows::Forms::Label());
			this->labelDeliveryIDVal = (gcnew System::Windows::Forms::Label());
			this->labelDeliveryID = (gcnew System::Windows::Forms::Label());
			this->dataGridViewDeliveryEmployers = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewDeliveryItems = (gcnew System::Windows::Forms::DataGridView());
			this->buttonDeliveryShow = (gcnew System::Windows::Forms::Button());
			this->dataGridViewDelivery = (gcnew System::Windows::Forms::DataGridView());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesClients))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesEmployers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesItems))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSales))->BeginInit();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeliveryProviders))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeliveryEmployers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeliveryItems))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDelivery))->BeginInit();
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
			this->buttonClearForm->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonClearForm->Location = System::Drawing::Point(590, 512);
			this->buttonClearForm->Name = L"buttonClearForm";
			this->buttonClearForm->Size = System::Drawing::Size(146, 29);
			this->buttonClearForm->TabIndex = 30;
			this->buttonClearForm->Text = L"Wyczyœæ formularz";
			this->buttonClearForm->UseVisualStyleBackColor = true;
			this->buttonClearForm->Click += gcnew System::EventHandler(this, &Magazin::buttonClearForm_Click);
			// 
			// textBoxEmployerPassword
			// 
			this->textBoxEmployerPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerPassword->Location = System::Drawing::Point(670, 474);
			this->textBoxEmployerPassword->Name = L"textBoxEmployerPassword";
			this->textBoxEmployerPassword->PasswordChar = '*';
			this->textBoxEmployerPassword->Size = System::Drawing::Size(293, 23);
			this->textBoxEmployerPassword->TabIndex = 29;
			// 
			// labelEmployerPassword
			// 
			this->labelEmployerPassword->AutoSize = true;
			this->labelEmployerPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerPassword->Location = System::Drawing::Point(616, 477);
			this->labelEmployerPassword->Name = L"labelEmployerPassword";
			this->labelEmployerPassword->Size = System::Drawing::Size(47, 16);
			this->labelEmployerPassword->TabIndex = 28;
			this->labelEmployerPassword->Text = L"Has³o:";
			// 
			// checkBoxIsAdmin
			// 
			this->checkBoxIsAdmin->AutoSize = true;
			this->checkBoxIsAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->checkBoxIsAdmin->Location = System::Drawing::Point(678, 440);
			this->checkBoxIsAdmin->Name = L"checkBoxIsAdmin";
			this->checkBoxIsAdmin->Size = System::Drawing::Size(15, 14);
			this->checkBoxIsAdmin->TabIndex = 27;
			this->checkBoxIsAdmin->UseVisualStyleBackColor = true;
			// 
			// labelIsAdmin
			// 
			this->labelIsAdmin->AutoSize = true;
			this->labelIsAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelIsAdmin->Location = System::Drawing::Point(517, 438);
			this->labelIsAdmin->Name = L"labelIsAdmin";
			this->labelIsAdmin->Size = System::Drawing::Size(145, 16);
			this->labelIsAdmin->TabIndex = 26;
			this->labelIsAdmin->Text = L"Prawa administratora:";
			// 
			// buttonEmployerDelete
			// 
			this->buttonEmployerDelete->Enabled = false;
			this->buttonEmployerDelete->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonEmployerDelete->Location = System::Drawing::Point(742, 512);
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
			this->labelLastLogoutVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelLastLogoutVal->Location = System::Drawing::Point(672, 404);
			this->labelLastLogoutVal->Name = L"labelLastLogoutVal";
			this->labelLastLogoutVal->Size = System::Drawing::Size(16, 16);
			this->labelLastLogoutVal->TabIndex = 24;
			this->labelLastLogoutVal->Text = L"#";
			// 
			// labelLastLoginVal
			// 
			this->labelLastLoginVal->AutoSize = true;
			this->labelLastLoginVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelLastLoginVal->Location = System::Drawing::Point(672, 373);
			this->labelLastLoginVal->Name = L"labelLastLoginVal";
			this->labelLastLoginVal->Size = System::Drawing::Size(16, 16);
			this->labelLastLoginVal->TabIndex = 23;
			this->labelLastLoginVal->Text = L"#";
			// 
			// btnSaveEmployer
			// 
			this->btnSaveEmployer->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->textBoxEmployerOtherInfo->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerOtherInfo->Location = System::Drawing::Point(670, 286);
			this->textBoxEmployerOtherInfo->Multiline = true;
			this->textBoxEmployerOtherInfo->Name = L"textBoxEmployerOtherInfo";
			this->textBoxEmployerOtherInfo->Size = System::Drawing::Size(293, 73);
			this->textBoxEmployerOtherInfo->TabIndex = 21;
			// 
			// textBoxEmployerPhone
			// 
			this->textBoxEmployerPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerPhone->Location = System::Drawing::Point(670, 254);
			this->textBoxEmployerPhone->Name = L"textBoxEmployerPhone";
			this->textBoxEmployerPhone->Size = System::Drawing::Size(293, 23);
			this->textBoxEmployerPhone->TabIndex = 20;
			// 
			// textBoxEmployerEmail
			// 
			this->textBoxEmployerEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerEmail->Location = System::Drawing::Point(670, 222);
			this->textBoxEmployerEmail->Name = L"textBoxEmployerEmail";
			this->textBoxEmployerEmail->Size = System::Drawing::Size(293, 23);
			this->textBoxEmployerEmail->TabIndex = 19;
			// 
			// textBoxEmployerAddress
			// 
			this->textBoxEmployerAddress->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerAddress->Location = System::Drawing::Point(670, 190);
			this->textBoxEmployerAddress->Name = L"textBoxEmployerAddress";
			this->textBoxEmployerAddress->Size = System::Drawing::Size(293, 23);
			this->textBoxEmployerAddress->TabIndex = 18;
			// 
			// textBoxEmployerSurname
			// 
			this->textBoxEmployerSurname->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerSurname->Location = System::Drawing::Point(670, 158);
			this->textBoxEmployerSurname->Name = L"textBoxEmployerSurname";
			this->textBoxEmployerSurname->Size = System::Drawing::Size(293, 23);
			this->textBoxEmployerSurname->TabIndex = 17;
			// 
			// textBoxEmployerName
			// 
			this->textBoxEmployerName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerName->Location = System::Drawing::Point(670, 123);
			this->textBoxEmployerName->Name = L"textBoxEmployerName";
			this->textBoxEmployerName->Size = System::Drawing::Size(293, 23);
			this->textBoxEmployerName->TabIndex = 16;
			// 
			// textBoxEmployerLogin
			// 
			this->textBoxEmployerLogin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxEmployerLogin->Location = System::Drawing::Point(670, 91);
			this->textBoxEmployerLogin->Name = L"textBoxEmployerLogin";
			this->textBoxEmployerLogin->Size = System::Drawing::Size(293, 23);
			this->textBoxEmployerLogin->TabIndex = 15;
			// 
			// labelEmployerLastlogout
			// 
			this->labelEmployerLastlogout->AutoSize = true;
			this->labelEmployerLastlogout->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerLastlogout->Location = System::Drawing::Point(515, 404);
			this->labelEmployerLastlogout->Name = L"labelEmployerLastlogout";
			this->labelEmployerLastlogout->Size = System::Drawing::Size(148, 16);
			this->labelEmployerLastlogout->TabIndex = 14;
			this->labelEmployerLastlogout->Text = L"Ostatnie wylogowanie:";
			// 
			// labelEmployerLastlogin
			// 
			this->labelEmployerLastlogin->AutoSize = true;
			this->labelEmployerLastlogin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerLastlogin->Location = System::Drawing::Point(516, 373);
			this->labelEmployerLastlogin->Name = L"labelEmployerLastlogin";
			this->labelEmployerLastlogin->Size = System::Drawing::Size(146, 16);
			this->labelEmployerLastlogin->TabIndex = 13;
			this->labelEmployerLastlogin->Text = L"Ostatnie zalogowanie:";
			// 
			// labelEmployerInfo
			// 
			this->labelEmployerInfo->AutoSize = true;
			this->labelEmployerInfo->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerInfo->Location = System::Drawing::Point(554, 289);
			this->labelEmployerInfo->Name = L"labelEmployerInfo";
			this->labelEmployerInfo->Size = System::Drawing::Size(108, 16);
			this->labelEmployerInfo->TabIndex = 12;
			this->labelEmployerInfo->Text = L"Inne informacje:";
			// 
			// labelEmployerPhone
			// 
			this->labelEmployerPhone->AutoSize = true;
			this->labelEmployerPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerPhone->Location = System::Drawing::Point(605, 257);
			this->labelEmployerPhone->Name = L"labelEmployerPhone";
			this->labelEmployerPhone->Size = System::Drawing::Size(58, 16);
			this->labelEmployerPhone->TabIndex = 11;
			this->labelEmployerPhone->Text = L"Telefon:";
			// 
			// labelEmployerEmail
			// 
			this->labelEmployerEmail->AutoSize = true;
			this->labelEmployerEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerEmail->Location = System::Drawing::Point(616, 225);
			this->labelEmployerEmail->Name = L"labelEmployerEmail";
			this->labelEmployerEmail->Size = System::Drawing::Size(46, 16);
			this->labelEmployerEmail->TabIndex = 10;
			this->labelEmployerEmail->Text = L"Email:";
			// 
			// labelEmployerAddress
			// 
			this->labelEmployerAddress->AutoSize = true;
			this->labelEmployerAddress->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerAddress->Location = System::Drawing::Point(614, 193);
			this->labelEmployerAddress->Name = L"labelEmployerAddress";
			this->labelEmployerAddress->Size = System::Drawing::Size(49, 16);
			this->labelEmployerAddress->TabIndex = 9;
			this->labelEmployerAddress->Text = L"Adres:";
			// 
			// labelEmployerSurname
			// 
			this->labelEmployerSurname->AutoSize = true;
			this->labelEmployerSurname->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerSurname->Location = System::Drawing::Point(593, 161);
			this->labelEmployerSurname->Name = L"labelEmployerSurname";
			this->labelEmployerSurname->Size = System::Drawing::Size(69, 16);
			this->labelEmployerSurname->TabIndex = 8;
			this->labelEmployerSurname->Text = L"Nazwisko:";
			// 
			// labelEmployerName
			// 
			this->labelEmployerName->AutoSize = true;
			this->labelEmployerName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerName->Location = System::Drawing::Point(623, 126);
			this->labelEmployerName->Name = L"labelEmployerName";
			this->labelEmployerName->Size = System::Drawing::Size(37, 16);
			this->labelEmployerName->TabIndex = 7;
			this->labelEmployerName->Text = L"Imiê:";
			// 
			// labelEmployerLogin
			// 
			this->labelEmployerLogin->AutoSize = true;
			this->labelEmployerLogin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerLogin->Location = System::Drawing::Point(616, 94);
			this->labelEmployerLogin->Name = L"labelEmployerLogin";
			this->labelEmployerLogin->Size = System::Drawing::Size(47, 16);
			this->labelEmployerLogin->TabIndex = 6;
			this->labelEmployerLogin->Text = L"Login:";
			// 
			// labelEmplID
			// 
			this->labelEmplID->AutoSize = true;
			this->labelEmplID->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmplID->Location = System::Drawing::Point(672, 57);
			this->labelEmplID->Name = L"labelEmplID";
			this->labelEmplID->Size = System::Drawing::Size(16, 16);
			this->labelEmplID->TabIndex = 5;
			this->labelEmplID->Text = L"#";
			// 
			// labelEmployerId
			// 
			this->labelEmployerId->AutoSize = true;
			this->labelEmployerId->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelEmployerId->Location = System::Drawing::Point(498, 57);
			this->labelEmployerId->Name = L"labelEmployerId";
			this->labelEmployerId->Size = System::Drawing::Size(164, 16);
			this->labelEmployerId->TabIndex = 4;
			this->labelEmployerId->Text = L"Identyfikator pracownika:";
			// 
			// btnSearchEmployers
			// 
			this->btnSearchEmployers->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->txtBoxSearchEmployers->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->txtBoxSearchEmployers->Location = System::Drawing::Point(582, 18);
			this->txtBoxSearchEmployers->Name = L"txtBoxSearchEmployers";
			this->txtBoxSearchEmployers->Size = System::Drawing::Size(251, 23);
			this->txtBoxSearchEmployers->TabIndex = 2;
			// 
			// btnShowEmployers
			// 
			this->btnShowEmployers->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonSearchClients->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonClearFormClient->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonClearFormClient->Location = System::Drawing::Point(585, 476);
			this->buttonClearFormClient->Name = L"buttonClearFormClient";
			this->buttonClearFormClient->Size = System::Drawing::Size(146, 29);
			this->buttonClearFormClient->TabIndex = 53;
			this->buttonClearFormClient->Text = L"Wyczyœæ formularz";
			this->buttonClearFormClient->UseVisualStyleBackColor = true;
			this->buttonClearFormClient->Click += gcnew System::EventHandler(this, &Magazin::buttonClearFormClient_Click);
			// 
			// buttonDeleteClient
			// 
			this->buttonDeleteClient->Enabled = false;
			this->buttonDeleteClient->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeleteClient->Location = System::Drawing::Point(737, 476);
			this->buttonDeleteClient->Name = L"buttonDeleteClient";
			this->buttonDeleteClient->Size = System::Drawing::Size(107, 29);
			this->buttonDeleteClient->TabIndex = 52;
			this->buttonDeleteClient->Text = L"Usuñ";
			this->buttonDeleteClient->UseVisualStyleBackColor = true;
			this->buttonDeleteClient->Click += gcnew System::EventHandler(this, &Magazin::buttonDeleteClient_Click);
			// 
			// buttonSaveClient
			// 
			this->buttonSaveClient->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->textBoxClientOtherInfo->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxClientOtherInfo->Location = System::Drawing::Point(667, 284);
			this->textBoxClientOtherInfo->Multiline = true;
			this->textBoxClientOtherInfo->Name = L"textBoxClientOtherInfo";
			this->textBoxClientOtherInfo->Size = System::Drawing::Size(293, 108);
			this->textBoxClientOtherInfo->TabIndex = 50;
			// 
			// textBoxClientPhone
			// 
			this->textBoxClientPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxClientPhone->Location = System::Drawing::Point(667, 252);
			this->textBoxClientPhone->Name = L"textBoxClientPhone";
			this->textBoxClientPhone->Size = System::Drawing::Size(293, 23);
			this->textBoxClientPhone->TabIndex = 49;
			// 
			// textBoxClientEmail
			// 
			this->textBoxClientEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxClientEmail->Location = System::Drawing::Point(667, 220);
			this->textBoxClientEmail->Name = L"textBoxClientEmail";
			this->textBoxClientEmail->Size = System::Drawing::Size(293, 23);
			this->textBoxClientEmail->TabIndex = 48;
			// 
			// textBoxClientAddress
			// 
			this->textBoxClientAddress->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxClientAddress->Location = System::Drawing::Point(667, 188);
			this->textBoxClientAddress->Name = L"textBoxClientAddress";
			this->textBoxClientAddress->Size = System::Drawing::Size(293, 23);
			this->textBoxClientAddress->TabIndex = 47;
			// 
			// textBoxClientREGON
			// 
			this->textBoxClientREGON->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxClientREGON->Location = System::Drawing::Point(667, 156);
			this->textBoxClientREGON->Name = L"textBoxClientREGON";
			this->textBoxClientREGON->Size = System::Drawing::Size(293, 23);
			this->textBoxClientREGON->TabIndex = 46;
			// 
			// textBoxClientNIP
			// 
			this->textBoxClientNIP->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxClientNIP->Location = System::Drawing::Point(667, 121);
			this->textBoxClientNIP->Name = L"textBoxClientNIP";
			this->textBoxClientNIP->Size = System::Drawing::Size(293, 23);
			this->textBoxClientNIP->TabIndex = 45;
			// 
			// textBoxClientName
			// 
			this->textBoxClientName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxClientName->Location = System::Drawing::Point(667, 89);
			this->textBoxClientName->Name = L"textBoxClientName";
			this->textBoxClientName->Size = System::Drawing::Size(293, 23);
			this->textBoxClientName->TabIndex = 44;
			// 
			// labelClientOtherInfo
			// 
			this->labelClientOtherInfo->AutoSize = true;
			this->labelClientOtherInfo->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelClientOtherInfo->Location = System::Drawing::Point(550, 287);
			this->labelClientOtherInfo->Name = L"labelClientOtherInfo";
			this->labelClientOtherInfo->Size = System::Drawing::Size(108, 16);
			this->labelClientOtherInfo->TabIndex = 43;
			this->labelClientOtherInfo->Text = L"Inne informacje:";
			// 
			// labelClientPhone
			// 
			this->labelClientPhone->AutoSize = true;
			this->labelClientPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelClientPhone->Location = System::Drawing::Point(600, 255);
			this->labelClientPhone->Name = L"labelClientPhone";
			this->labelClientPhone->Size = System::Drawing::Size(58, 16);
			this->labelClientPhone->TabIndex = 42;
			this->labelClientPhone->Text = L"Telefon:";
			// 
			// labelClientEmail
			// 
			this->labelClientEmail->AutoSize = true;
			this->labelClientEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelClientEmail->Location = System::Drawing::Point(612, 223);
			this->labelClientEmail->Name = L"labelClientEmail";
			this->labelClientEmail->Size = System::Drawing::Size(46, 16);
			this->labelClientEmail->TabIndex = 41;
			this->labelClientEmail->Text = L"Email:";
			// 
			// labelClientAddress
			// 
			this->labelClientAddress->AutoSize = true;
			this->labelClientAddress->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelClientAddress->Location = System::Drawing::Point(609, 191);
			this->labelClientAddress->Name = L"labelClientAddress";
			this->labelClientAddress->Size = System::Drawing::Size(49, 16);
			this->labelClientAddress->TabIndex = 40;
			this->labelClientAddress->Text = L"Adres:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label6->Location = System::Drawing::Point(596, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 16);
			this->label6->TabIndex = 39;
			this->label6->Text = L"REGON:";
			// 
			// labelClientNIP
			// 
			this->labelClientNIP->AutoSize = true;
			this->labelClientNIP->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelClientNIP->Location = System::Drawing::Point(625, 124);
			this->labelClientNIP->Name = L"labelClientNIP";
			this->labelClientNIP->Size = System::Drawing::Size(33, 16);
			this->labelClientNIP->TabIndex = 38;
			this->labelClientNIP->Text = L"NIP:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->label8->Location = System::Drawing::Point(606, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 16);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Nazwa:";
			// 
			// labelClientID
			// 
			this->labelClientID->AutoSize = true;
			this->labelClientID->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelClientID->Location = System::Drawing::Point(669, 55);
			this->labelClientID->Name = L"labelClientID";
			this->labelClientID->Size = System::Drawing::Size(16, 16);
			this->labelClientID->TabIndex = 36;
			this->labelClientID->Text = L"#";
			// 
			// labelIdClient
			// 
			this->labelIdClient->AutoSize = true;
			this->labelIdClient->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelIdClient->Location = System::Drawing::Point(519, 55);
			this->labelIdClient->Name = L"labelIdClient";
			this->labelIdClient->Size = System::Drawing::Size(134, 16);
			this->labelIdClient->TabIndex = 35;
			this->labelIdClient->Text = L"Identyfikator klienta:";
			// 
			// textBoxSearchClients
			// 
			this->textBoxSearchClients->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxSearchClients->Location = System::Drawing::Point(583, 15);
			this->textBoxSearchClients->Name = L"textBoxSearchClients";
			this->textBoxSearchClients->Size = System::Drawing::Size(251, 23);
			this->textBoxSearchClients->TabIndex = 34;
			// 
			// buttonShowClients
			// 
			this->buttonShowClients->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonShowClients->Location = System::Drawing::Point(27, 7);
			this->buttonShowClients->Name = L"buttonShowClients";
			this->buttonShowClients->Size = System::Drawing::Size(219, 34);
			this->buttonShowClients->TabIndex = 33;
			this->buttonShowClients->Text = L"Poka¿ klientów";
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
			this->buttonSearchProviders->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonClearProviderForm->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonClearProviderForm->Location = System::Drawing::Point(596, 476);
			this->buttonClearProviderForm->Name = L"buttonClearProviderForm";
			this->buttonClearProviderForm->Size = System::Drawing::Size(146, 29);
			this->buttonClearProviderForm->TabIndex = 77;
			this->buttonClearProviderForm->Text = L"Wyczyœæ formularz";
			this->buttonClearProviderForm->UseVisualStyleBackColor = true;
			this->buttonClearProviderForm->Click += gcnew System::EventHandler(this, &Magazin::buttonClearProviderForm_Click);
			// 
			// buttonProviderDelete
			// 
			this->buttonProviderDelete->Enabled = false;
			this->buttonProviderDelete->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonProviderDelete->Location = System::Drawing::Point(748, 476);
			this->buttonProviderDelete->Name = L"buttonProviderDelete";
			this->buttonProviderDelete->Size = System::Drawing::Size(107, 29);
			this->buttonProviderDelete->TabIndex = 76;
			this->buttonProviderDelete->Text = L"Usuñ";
			this->buttonProviderDelete->UseVisualStyleBackColor = true;
			this->buttonProviderDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonProviderDelete_Click);
			// 
			// buttonProviderSave
			// 
			this->buttonProviderSave->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->textBoxProviderOtherInfo->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxProviderOtherInfo->Location = System::Drawing::Point(676, 283);
			this->textBoxProviderOtherInfo->Multiline = true;
			this->textBoxProviderOtherInfo->Name = L"textBoxProviderOtherInfo";
			this->textBoxProviderOtherInfo->Size = System::Drawing::Size(293, 105);
			this->textBoxProviderOtherInfo->TabIndex = 74;
			// 
			// textBoxProviderPhone
			// 
			this->textBoxProviderPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxProviderPhone->Location = System::Drawing::Point(676, 251);
			this->textBoxProviderPhone->Name = L"textBoxProviderPhone";
			this->textBoxProviderPhone->Size = System::Drawing::Size(293, 23);
			this->textBoxProviderPhone->TabIndex = 73;
			// 
			// textBoxProviderEmail
			// 
			this->textBoxProviderEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxProviderEmail->Location = System::Drawing::Point(676, 219);
			this->textBoxProviderEmail->Name = L"textBoxProviderEmail";
			this->textBoxProviderEmail->Size = System::Drawing::Size(293, 23);
			this->textBoxProviderEmail->TabIndex = 72;
			// 
			// textBoxProviderAddress
			// 
			this->textBoxProviderAddress->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxProviderAddress->Location = System::Drawing::Point(676, 187);
			this->textBoxProviderAddress->Name = L"textBoxProviderAddress";
			this->textBoxProviderAddress->Size = System::Drawing::Size(293, 23);
			this->textBoxProviderAddress->TabIndex = 71;
			// 
			// textBoxProviderREGON
			// 
			this->textBoxProviderREGON->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxProviderREGON->Location = System::Drawing::Point(676, 155);
			this->textBoxProviderREGON->Name = L"textBoxProviderREGON";
			this->textBoxProviderREGON->Size = System::Drawing::Size(293, 23);
			this->textBoxProviderREGON->TabIndex = 70;
			// 
			// textBoxProviderNIP
			// 
			this->textBoxProviderNIP->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxProviderNIP->Location = System::Drawing::Point(676, 120);
			this->textBoxProviderNIP->Name = L"textBoxProviderNIP";
			this->textBoxProviderNIP->Size = System::Drawing::Size(293, 23);
			this->textBoxProviderNIP->TabIndex = 69;
			// 
			// textBoxProviderName
			// 
			this->textBoxProviderName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxProviderName->Location = System::Drawing::Point(676, 88);
			this->textBoxProviderName->Name = L"textBoxProviderName";
			this->textBoxProviderName->Size = System::Drawing::Size(293, 23);
			this->textBoxProviderName->TabIndex = 68;
			// 
			// labelProviderOtherInfo
			// 
			this->labelProviderOtherInfo->AutoSize = true;
			this->labelProviderOtherInfo->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderOtherInfo->Location = System::Drawing::Point(561, 286);
			this->labelProviderOtherInfo->Name = L"labelProviderOtherInfo";
			this->labelProviderOtherInfo->Size = System::Drawing::Size(108, 16);
			this->labelProviderOtherInfo->TabIndex = 67;
			this->labelProviderOtherInfo->Text = L"Inne informacje:";
			// 
			// labelProviderPhone
			// 
			this->labelProviderPhone->AutoSize = true;
			this->labelProviderPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderPhone->Location = System::Drawing::Point(611, 254);
			this->labelProviderPhone->Name = L"labelProviderPhone";
			this->labelProviderPhone->Size = System::Drawing::Size(58, 16);
			this->labelProviderPhone->TabIndex = 66;
			this->labelProviderPhone->Text = L"Telefon:";
			// 
			// labelProviderEmail
			// 
			this->labelProviderEmail->AutoSize = true;
			this->labelProviderEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderEmail->Location = System::Drawing::Point(623, 222);
			this->labelProviderEmail->Name = L"labelProviderEmail";
			this->labelProviderEmail->Size = System::Drawing::Size(46, 16);
			this->labelProviderEmail->TabIndex = 65;
			this->labelProviderEmail->Text = L"Email:";
			// 
			// labelProviderAddress
			// 
			this->labelProviderAddress->AutoSize = true;
			this->labelProviderAddress->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderAddress->Location = System::Drawing::Point(620, 190);
			this->labelProviderAddress->Name = L"labelProviderAddress";
			this->labelProviderAddress->Size = System::Drawing::Size(49, 16);
			this->labelProviderAddress->TabIndex = 64;
			this->labelProviderAddress->Text = L"Adres:";
			// 
			// labelProviderREGON
			// 
			this->labelProviderREGON->AutoSize = true;
			this->labelProviderREGON->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderREGON->Location = System::Drawing::Point(607, 158);
			this->labelProviderREGON->Name = L"labelProviderREGON";
			this->labelProviderREGON->Size = System::Drawing::Size(62, 16);
			this->labelProviderREGON->TabIndex = 63;
			this->labelProviderREGON->Text = L"REGON:";
			// 
			// labelProviderNIP
			// 
			this->labelProviderNIP->AutoSize = true;
			this->labelProviderNIP->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderNIP->Location = System::Drawing::Point(636, 123);
			this->labelProviderNIP->Name = L"labelProviderNIP";
			this->labelProviderNIP->Size = System::Drawing::Size(33, 16);
			this->labelProviderNIP->TabIndex = 62;
			this->labelProviderNIP->Text = L"NIP:";
			// 
			// labelProviderName
			// 
			this->labelProviderName->AutoSize = true;
			this->labelProviderName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderName->Location = System::Drawing::Point(617, 91);
			this->labelProviderName->Name = L"labelProviderName";
			this->labelProviderName->Size = System::Drawing::Size(52, 16);
			this->labelProviderName->TabIndex = 61;
			this->labelProviderName->Text = L"Nazwa:";
			// 
			// labelProviderIDVal
			// 
			this->labelProviderIDVal->AutoSize = true;
			this->labelProviderIDVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderIDVal->Location = System::Drawing::Point(678, 54);
			this->labelProviderIDVal->Name = L"labelProviderIDVal";
			this->labelProviderIDVal->Size = System::Drawing::Size(16, 16);
			this->labelProviderIDVal->TabIndex = 60;
			this->labelProviderIDVal->Text = L"#";
			// 
			// labelProviderID
			// 
			this->labelProviderID->AutoSize = true;
			this->labelProviderID->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelProviderID->Location = System::Drawing::Point(535, 54);
			this->labelProviderID->Name = L"labelProviderID";
			this->labelProviderID->Size = System::Drawing::Size(134, 16);
			this->labelProviderID->TabIndex = 59;
			this->labelProviderID->Text = L"Identyfikator klienta:";
			// 
			// textBoxSearchProviders
			// 
			this->textBoxSearchProviders->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxSearchProviders->Location = System::Drawing::Point(592, 15);
			this->textBoxSearchProviders->Name = L"textBoxSearchProviders";
			this->textBoxSearchProviders->Size = System::Drawing::Size(251, 23);
			this->textBoxSearchProviders->TabIndex = 58;
			// 
			// buttonShowProviders
			// 
			this->buttonShowProviders->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonShowProviders->Location = System::Drawing::Point(20, 7);
			this->buttonShowProviders->Name = L"buttonShowProviders";
			this->buttonShowProviders->Size = System::Drawing::Size(219, 34);
			this->buttonShowProviders->TabIndex = 57;
			this->buttonShowProviders->Text = L"Poka¿ dostawców";
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
			this->buttonItemHelp->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonItemProducerDelete->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonItemParamDelete->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonItemProducerHelp->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonItemParamHelp->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->labelItemProducer->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemProducer->Location = System::Drawing::Point(579, 277);
			this->labelItemProducer->Name = L"labelItemProducer";
			this->labelItemProducer->Size = System::Drawing::Size(77, 16);
			this->labelItemProducer->TabIndex = 114;
			this->labelItemProducer->Text = L"Producent:";
			this->labelItemProducer->Visible = false;
			// 
			// buttonItemProducerAdd
			// 
			this->buttonItemProducerAdd->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->comboBoxItemProducer->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->comboBoxItemProducer->FormattingEnabled = true;
			this->comboBoxItemProducer->Location = System::Drawing::Point(664, 273);
			this->comboBoxItemProducer->Name = L"comboBoxItemProducer";
			this->comboBoxItemProducer->Size = System::Drawing::Size(121, 24);
			this->comboBoxItemProducer->TabIndex = 112;
			this->comboBoxItemProducer->Visible = false;
			// 
			// buttonItemParamAdd
			// 
			this->buttonItemParamAdd->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->labelItemParam->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemParam->Location = System::Drawing::Point(463, 234);
			this->labelItemParam->Name = L"labelItemParam";
			this->labelItemParam->Size = System::Drawing::Size(70, 16);
			this->labelItemParam->TabIndex = 110;
			this->labelItemParam->Text = L"Parametr:";
			this->labelItemParam->Visible = false;
			// 
			// textBoxItemParamVal
			// 
			this->textBoxItemParamVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxItemParamVal->Location = System::Drawing::Point(664, 231);
			this->textBoxItemParamVal->Name = L"textBoxItemParamVal";
			this->textBoxItemParamVal->Size = System::Drawing::Size(221, 23);
			this->textBoxItemParamVal->TabIndex = 109;
			this->textBoxItemParamVal->Visible = false;
			// 
			// comboBoxItemParam
			// 
			this->comboBoxItemParam->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->comboBoxItemParam->FormattingEnabled = true;
			this->comboBoxItemParam->Location = System::Drawing::Point(540, 231);
			this->comboBoxItemParam->Name = L"comboBoxItemParam";
			this->comboBoxItemParam->Size = System::Drawing::Size(121, 24);
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
			this->TextBoxItemPrice->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->TextBoxItemPrice->Location = System::Drawing::Point(664, 189);
			this->TextBoxItemPrice->Mask = L"####0.00";
			this->TextBoxItemPrice->Name = L"TextBoxItemPrice";
			this->TextBoxItemPrice->Size = System::Drawing::Size(92, 23);
			this->TextBoxItemPrice->TabIndex = 104;
			// 
			// labelItemQuantityVal
			// 
			this->labelItemQuantityVal->AutoSize = true;
			this->labelItemQuantityVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemQuantityVal->Location = System::Drawing::Point(666, 160);
			this->labelItemQuantityVal->Name = L"labelItemQuantityVal";
			this->labelItemQuantityVal->Size = System::Drawing::Size(16, 16);
			this->labelItemQuantityVal->TabIndex = 103;
			this->labelItemQuantityVal->Text = L"#";
			// 
			// buttonItemsSearch
			// 
			this->buttonItemsSearch->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->buttonItemClearForm->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonItemClearForm->Location = System::Drawing::Point(592, 352);
			this->buttonItemClearForm->Name = L"buttonItemClearForm";
			this->buttonItemClearForm->Size = System::Drawing::Size(146, 29);
			this->buttonItemClearForm->TabIndex = 100;
			this->buttonItemClearForm->Text = L"Wyczyœæ formularz";
			this->buttonItemClearForm->UseVisualStyleBackColor = true;
			this->buttonItemClearForm->Click += gcnew System::EventHandler(this, &Magazin::buttonItemClearForm_Click);
			// 
			// buttonItemDelete
			// 
			this->buttonItemDelete->Enabled = false;
			this->buttonItemDelete->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonItemDelete->Location = System::Drawing::Point(744, 352);
			this->buttonItemDelete->Name = L"buttonItemDelete";
			this->buttonItemDelete->Size = System::Drawing::Size(107, 29);
			this->buttonItemDelete->TabIndex = 99;
			this->buttonItemDelete->Text = L"Usuñ";
			this->buttonItemDelete->UseVisualStyleBackColor = true;
			this->buttonItemDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonItemDelete_Click);
			// 
			// buttonItemSave
			// 
			this->buttonItemSave->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->textBoxItemModel->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxItemModel->Location = System::Drawing::Point(664, 122);
			this->textBoxItemModel->Name = L"textBoxItemModel";
			this->textBoxItemModel->Size = System::Drawing::Size(293, 23);
			this->textBoxItemModel->TabIndex = 92;
			// 
			// textBoxItemName
			// 
			this->textBoxItemName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxItemName->Location = System::Drawing::Point(664, 90);
			this->textBoxItemName->Name = L"textBoxItemName";
			this->textBoxItemName->Size = System::Drawing::Size(293, 23);
			this->textBoxItemName->TabIndex = 91;
			// 
			// labelItemPrice
			// 
			this->labelItemPrice->AutoSize = true;
			this->labelItemPrice->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemPrice->Location = System::Drawing::Point(607, 192);
			this->labelItemPrice->Name = L"labelItemPrice";
			this->labelItemPrice->Size = System::Drawing::Size(46, 16);
			this->labelItemPrice->TabIndex = 87;
			this->labelItemPrice->Text = L"Cena:";
			// 
			// labelItemQuantity
			// 
			this->labelItemQuantity->AutoSize = true;
			this->labelItemQuantity->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemQuantity->Location = System::Drawing::Point(615, 160);
			this->labelItemQuantity->Name = L"labelItemQuantity";
			this->labelItemQuantity->Size = System::Drawing::Size(40, 16);
			this->labelItemQuantity->TabIndex = 86;
			this->labelItemQuantity->Text = L"Iloœæ:";
			// 
			// labelItemModel
			// 
			this->labelItemModel->AutoSize = true;
			this->labelItemModel->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemModel->Location = System::Drawing::Point(603, 125);
			this->labelItemModel->Name = L"labelItemModel";
			this->labelItemModel->Size = System::Drawing::Size(50, 16);
			this->labelItemModel->TabIndex = 85;
			this->labelItemModel->Text = L"Model:";
			// 
			// labelItemName
			// 
			this->labelItemName->AutoSize = true;
			this->labelItemName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemName->Location = System::Drawing::Point(601, 93);
			this->labelItemName->Name = L"labelItemName";
			this->labelItemName->Size = System::Drawing::Size(52, 16);
			this->labelItemName->TabIndex = 84;
			this->labelItemName->Text = L"Nazwa:";
			// 
			// labelItemIDVal
			// 
			this->labelItemIDVal->AutoSize = true;
			this->labelItemIDVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemIDVal->Location = System::Drawing::Point(666, 56);
			this->labelItemIDVal->Name = L"labelItemIDVal";
			this->labelItemIDVal->Size = System::Drawing::Size(16, 16);
			this->labelItemIDVal->TabIndex = 83;
			this->labelItemIDVal->Text = L"#";
			// 
			// labelItemID
			// 
			this->labelItemID->AutoSize = true;
			this->labelItemID->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelItemID->Location = System::Drawing::Point(480, 56);
			this->labelItemID->Name = L"labelItemID";
			this->labelItemID->Size = System::Drawing::Size(162, 16);
			this->labelItemID->TabIndex = 82;
			this->labelItemID->Text = L"Identyfikator przedmiotu:";
			// 
			// textBoxItemsSearch
			// 
			this->textBoxItemsSearch->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxItemsSearch->Location = System::Drawing::Point(588, 15);
			this->textBoxItemsSearch->Name = L"textBoxItemsSearch";
			this->textBoxItemsSearch->Size = System::Drawing::Size(251, 23);
			this->textBoxItemsSearch->TabIndex = 81;
			// 
			// buttonItemsShow
			// 
			this->buttonItemsShow->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonItemsShow->Location = System::Drawing::Point(27, 7);
			this->buttonItemsShow->Name = L"buttonItemsShow";
			this->buttonItemsShow->Size = System::Drawing::Size(219, 34);
			this->buttonItemsShow->TabIndex = 80;
			this->buttonItemsShow->Text = L"Poka¿ asortyment";
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
			this->tabPage6->Controls->Add(this->buttonSalesDeleteItem);
			this->tabPage6->Controls->Add(this->buttonSalesHelp);
			this->tabPage6->Controls->Add(this->buttonSalesClose);
			this->tabPage6->Controls->Add(this->buttonSalesAddItem);
			this->tabPage6->Controls->Add(this->buttonSalesClearForm);
			this->tabPage6->Controls->Add(this->buttonSalesDelete);
			this->tabPage6->Controls->Add(this->buttonSalesSave);
			this->tabPage6->Controls->Add(this->dataGridViewSalesClients);
			this->tabPage6->Controls->Add(this->maskedTextBoxSellQuantity);
			this->tabPage6->Controls->Add(this->labelSellQuantity);
			this->tabPage6->Controls->Add(this->comboBoxSellItem);
			this->tabPage6->Controls->Add(this->labelSellItem);
			this->tabPage6->Controls->Add(this->comboBoxSellClient);
			this->tabPage6->Controls->Add(this->labelSellClient);
			this->tabPage6->Controls->Add(this->labelSellIDVal);
			this->tabPage6->Controls->Add(this->labelSellID);
			this->tabPage6->Controls->Add(this->dataGridViewSalesEmployers);
			this->tabPage6->Controls->Add(this->dataGridViewSalesItems);
			this->tabPage6->Controls->Add(this->buttonSellsShow);
			this->tabPage6->Controls->Add(this->dataGridViewSales);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(979, 550);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Sprzeda¿e";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// buttonSalesDeleteItem
			// 
			this->buttonSalesDeleteItem->Enabled = false;
			this->buttonSalesDeleteItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSalesDeleteItem->Location = System::Drawing::Point(705, 207);
			this->buttonSalesDeleteItem->Name = L"buttonSalesDeleteItem";
			this->buttonSalesDeleteItem->Size = System::Drawing::Size(241, 29);
			this->buttonSalesDeleteItem->TabIndex = 132;
			this->buttonSalesDeleteItem->Text = L"Usuñ przedmiot z transakcji";
			this->buttonSalesDeleteItem->UseVisualStyleBackColor = true;
			this->buttonSalesDeleteItem->Click += gcnew System::EventHandler(this, &Magazin::buttonSalesDeleteItem_Click);
			// 
			// buttonSalesHelp
			// 
			this->buttonSalesHelp->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSalesHelp->Location = System::Drawing::Point(417, 316);
			this->buttonSalesHelp->Name = L"buttonSalesHelp";
			this->buttonSalesHelp->Size = System::Drawing::Size(84, 29);
			this->buttonSalesHelp->TabIndex = 131;
			this->buttonSalesHelp->Text = L"Pomoc";
			this->buttonSalesHelp->UseVisualStyleBackColor = true;
			this->buttonSalesHelp->Click += gcnew System::EventHandler(this, &Magazin::buttonSalesHelp_Click);
			// 
			// buttonSalesClose
			// 
			this->buttonSalesClose->Enabled = false;
			this->buttonSalesClose->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSalesClose->Location = System::Drawing::Point(826, 281);
			this->buttonSalesClose->Name = L"buttonSalesClose";
			this->buttonSalesClose->Size = System::Drawing::Size(150, 29);
			this->buttonSalesClose->TabIndex = 130;
			this->buttonSalesClose->Text = L"Zamknij transakcje";
			this->buttonSalesClose->UseVisualStyleBackColor = true;
			this->buttonSalesClose->Click += gcnew System::EventHandler(this, &Magazin::buttonSalesClose_Click);
			// 
			// buttonSalesAddItem
			// 
			this->buttonSalesAddItem->Enabled = false;
			this->buttonSalesAddItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSalesAddItem->Location = System::Drawing::Point(705, 172);
			this->buttonSalesAddItem->Name = L"buttonSalesAddItem";
			this->buttonSalesAddItem->Size = System::Drawing::Size(241, 29);
			this->buttonSalesAddItem->TabIndex = 129;
			this->buttonSalesAddItem->Text = L"Dodaj przedmiot do transakcji";
			this->buttonSalesAddItem->UseVisualStyleBackColor = true;
			this->buttonSalesAddItem->Click += gcnew System::EventHandler(this, &Magazin::buttonSalesAddItem_Click);
			// 
			// buttonSalesClearForm
			// 
			this->buttonSalesClearForm->Enabled = false;
			this->buttonSalesClearForm->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSalesClearForm->Location = System::Drawing::Point(542, 316);
			this->buttonSalesClearForm->Name = L"buttonSalesClearForm";
			this->buttonSalesClearForm->Size = System::Drawing::Size(146, 29);
			this->buttonSalesClearForm->TabIndex = 128;
			this->buttonSalesClearForm->Text = L"Wyczyœæ formularz";
			this->buttonSalesClearForm->UseVisualStyleBackColor = true;
			this->buttonSalesClearForm->Click += gcnew System::EventHandler(this, &Magazin::buttonSalesClearForm_Click);
			// 
			// buttonSalesDelete
			// 
			this->buttonSalesDelete->Enabled = false;
			this->buttonSalesDelete->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSalesDelete->Location = System::Drawing::Point(694, 316);
			this->buttonSalesDelete->Name = L"buttonSalesDelete";
			this->buttonSalesDelete->Size = System::Drawing::Size(126, 29);
			this->buttonSalesDelete->TabIndex = 127;
			this->buttonSalesDelete->Text = L"Usuñ transakcje";
			this->buttonSalesDelete->UseVisualStyleBackColor = true;
			this->buttonSalesDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonSalesDelete_Click);
			// 
			// buttonSalesSave
			// 
			this->buttonSalesSave->Enabled = false;
			this->buttonSalesSave->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSalesSave->Location = System::Drawing::Point(826, 316);
			this->buttonSalesSave->Name = L"buttonSalesSave";
			this->buttonSalesSave->Size = System::Drawing::Size(150, 29);
			this->buttonSalesSave->TabIndex = 126;
			this->buttonSalesSave->Text = L"Dodaj transakcje";
			this->buttonSalesSave->UseVisualStyleBackColor = true;
			this->buttonSalesSave->Click += gcnew System::EventHandler(this, &Magazin::buttonSalesSave_Click);
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
			this->dataGridViewSalesClients->Size = System::Drawing::Size(271, 193);
			this->dataGridViewSalesClients->TabIndex = 125;
			this->dataGridViewSalesClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewSalesClients_CellClick);
			// 
			// maskedTextBoxSellQuantity
			// 
			this->maskedTextBoxSellQuantity->Enabled = false;
			this->maskedTextBoxSellQuantity->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->maskedTextBoxSellQuantity->Location = System::Drawing::Point(630, 175);
			this->maskedTextBoxSellQuantity->Mask = L"00000";
			this->maskedTextBoxSellQuantity->Name = L"maskedTextBoxSellQuantity";
			this->maskedTextBoxSellQuantity->Size = System::Drawing::Size(55, 23);
			this->maskedTextBoxSellQuantity->TabIndex = 119;
			this->maskedTextBoxSellQuantity->ValidatingType = System::Int32::typeid;
			// 
			// labelSellQuantity
			// 
			this->labelSellQuantity->AutoSize = true;
			this->labelSellQuantity->Enabled = false;
			this->labelSellQuantity->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelSellQuantity->Location = System::Drawing::Point(541, 178);
			this->labelSellQuantity->Name = L"labelSellQuantity";
			this->labelSellQuantity->Size = System::Drawing::Size(76, 16);
			this->labelSellQuantity->TabIndex = 118;
			this->labelSellQuantity->Text = L"Iloœæ sztuk:";
			// 
			// comboBoxSellItem
			// 
			this->comboBoxSellItem->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSellItem->Enabled = false;
			this->comboBoxSellItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->comboBoxSellItem->FormattingEnabled = true;
			this->comboBoxSellItem->Location = System::Drawing::Point(630, 129);
			this->comboBoxSellItem->Name = L"comboBoxSellItem";
			this->comboBoxSellItem->Size = System::Drawing::Size(316, 24);
			this->comboBoxSellItem->TabIndex = 117;
			this->comboBoxSellItem->SelectedIndexChanged += gcnew System::EventHandler(this, &Magazin::comboBoxSellItem_SelectedIndexChanged);
			// 
			// labelSellItem
			// 
			this->labelSellItem->AutoSize = true;
			this->labelSellItem->Enabled = false;
			this->labelSellItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelSellItem->Location = System::Drawing::Point(543, 129);
			this->labelSellItem->Name = L"labelSellItem";
			this->labelSellItem->Size = System::Drawing::Size(74, 16);
			this->labelSellItem->TabIndex = 116;
			this->labelSellItem->Text = L"Przedmiot:";
			// 
			// comboBoxSellClient
			// 
			this->comboBoxSellClient->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSellClient->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->comboBoxSellClient->FormattingEnabled = true;
			this->comboBoxSellClient->Location = System::Drawing::Point(630, 84);
			this->comboBoxSellClient->Name = L"comboBoxSellClient";
			this->comboBoxSellClient->Size = System::Drawing::Size(316, 24);
			this->comboBoxSellClient->TabIndex = 115;
			this->comboBoxSellClient->SelectedIndexChanged += gcnew System::EventHandler(this, &Magazin::comboBoxSellClient_SelectedIndexChanged);
			// 
			// labelSellClient
			// 
			this->labelSellClient->AutoSize = true;
			this->labelSellClient->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelSellClient->Location = System::Drawing::Point(570, 84);
			this->labelSellClient->Name = L"labelSellClient";
			this->labelSellClient->Size = System::Drawing::Size(47, 16);
			this->labelSellClient->TabIndex = 114;
			this->labelSellClient->Text = L"Klient:";
			// 
			// labelSellIDVal
			// 
			this->labelSellIDVal->AutoSize = true;
			this->labelSellIDVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelSellIDVal->Location = System::Drawing::Point(627, 56);
			this->labelSellIDVal->Name = L"labelSellIDVal";
			this->labelSellIDVal->Size = System::Drawing::Size(16, 16);
			this->labelSellIDVal->TabIndex = 110;
			this->labelSellIDVal->Text = L"#";
			// 
			// labelSellID
			// 
			this->labelSellID->AutoSize = true;
			this->labelSellID->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelSellID->Location = System::Drawing::Point(456, 56);
			this->labelSellID->Name = L"labelSellID";
			this->labelSellID->Size = System::Drawing::Size(156, 16);
			this->labelSellID->TabIndex = 109;
			this->labelSellID->Text = L"Identyfikator sprzeda¿y:";
			// 
			// dataGridViewSalesEmployers
			// 
			this->dataGridViewSalesEmployers->AllowUserToAddRows = false;
			this->dataGridViewSalesEmployers->AllowUserToDeleteRows = false;
			this->dataGridViewSalesEmployers->AllowUserToOrderColumns = true;
			this->dataGridViewSalesEmployers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSalesEmployers->Location = System::Drawing::Point(695, 351);
			this->dataGridViewSalesEmployers->Name = L"dataGridViewSalesEmployers";
			this->dataGridViewSalesEmployers->ReadOnly = true;
			this->dataGridViewSalesEmployers->Size = System::Drawing::Size(282, 193);
			this->dataGridViewSalesEmployers->TabIndex = 108;
			this->dataGridViewSalesEmployers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewSalesEmployers_CellClick);
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
			this->dataGridViewSalesItems->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewSalesItems_CellClick);
			// 
			// buttonSellsShow
			// 
			this->buttonSellsShow->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonSellsShow->Location = System::Drawing::Point(8, 7);
			this->buttonSellsShow->Name = L"buttonSellsShow";
			this->buttonSellsShow->Size = System::Drawing::Size(219, 34);
			this->buttonSellsShow->TabIndex = 104;
			this->buttonSellsShow->Text = L"Poka¿ sprzeda¿e";
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
			this->dataGridViewSales->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewSales_CellClick);
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->buttonDeliveryDeleteItem);
			this->tabPage9->Controls->Add(this->buttonDeliveryHelp);
			this->tabPage9->Controls->Add(this->buttonDeliveryClose);
			this->tabPage9->Controls->Add(this->buttonDeliveryAddItem);
			this->tabPage9->Controls->Add(this->buttonDeliveryClearForm);
			this->tabPage9->Controls->Add(this->buttonDeliveryDelete);
			this->tabPage9->Controls->Add(this->buttonDeliverySave);
			this->tabPage9->Controls->Add(this->dataGridViewDeliveryProviders);
			this->tabPage9->Controls->Add(this->maskedTextBoxDeliveryQuantity);
			this->tabPage9->Controls->Add(this->labelDeliveryQuantity);
			this->tabPage9->Controls->Add(this->comboBoxDeliveryItem);
			this->tabPage9->Controls->Add(this->labelDeliveryItem);
			this->tabPage9->Controls->Add(this->comboBoxDeliveryProvider);
			this->tabPage9->Controls->Add(this->labelDeliveryProvider);
			this->tabPage9->Controls->Add(this->labelDeliveryIDVal);
			this->tabPage9->Controls->Add(this->labelDeliveryID);
			this->tabPage9->Controls->Add(this->dataGridViewDeliveryEmployers);
			this->tabPage9->Controls->Add(this->dataGridViewDeliveryItems);
			this->tabPage9->Controls->Add(this->buttonDeliveryShow);
			this->tabPage9->Controls->Add(this->dataGridViewDelivery);
			this->tabPage9->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(979, 550);
			this->tabPage9->TabIndex = 8;
			this->tabPage9->Text = L"Dostawy";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// buttonDeliveryDeleteItem
			// 
			this->buttonDeliveryDeleteItem->Enabled = false;
			this->buttonDeliveryDeleteItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliveryDeleteItem->Location = System::Drawing::Point(702, 207);
			this->buttonDeliveryDeleteItem->Name = L"buttonDeliveryDeleteItem";
			this->buttonDeliveryDeleteItem->Size = System::Drawing::Size(241, 29);
			this->buttonDeliveryDeleteItem->TabIndex = 152;
			this->buttonDeliveryDeleteItem->Text = L"Usuñ przedmiot z transakcji";
			this->buttonDeliveryDeleteItem->UseVisualStyleBackColor = true;
			this->buttonDeliveryDeleteItem->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliveryDeleteItem_Click);
			// 
			// buttonDeliveryHelp
			// 
			this->buttonDeliveryHelp->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliveryHelp->Location = System::Drawing::Point(414, 316);
			this->buttonDeliveryHelp->Name = L"buttonDeliveryHelp";
			this->buttonDeliveryHelp->Size = System::Drawing::Size(84, 29);
			this->buttonDeliveryHelp->TabIndex = 151;
			this->buttonDeliveryHelp->Text = L"Pomoc";
			this->buttonDeliveryHelp->UseVisualStyleBackColor = true;
			this->buttonDeliveryHelp->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliveryHelp_Click);
			// 
			// buttonDeliveryClose
			// 
			this->buttonDeliveryClose->Enabled = false;
			this->buttonDeliveryClose->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliveryClose->Location = System::Drawing::Point(823, 281);
			this->buttonDeliveryClose->Name = L"buttonDeliveryClose";
			this->buttonDeliveryClose->Size = System::Drawing::Size(150, 29);
			this->buttonDeliveryClose->TabIndex = 150;
			this->buttonDeliveryClose->Text = L"Zamknij transakcje";
			this->buttonDeliveryClose->UseVisualStyleBackColor = true;
			this->buttonDeliveryClose->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliveryClose_Click);
			// 
			// buttonDeliveryAddItem
			// 
			this->buttonDeliveryAddItem->Enabled = false;
			this->buttonDeliveryAddItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliveryAddItem->Location = System::Drawing::Point(702, 172);
			this->buttonDeliveryAddItem->Name = L"buttonDeliveryAddItem";
			this->buttonDeliveryAddItem->Size = System::Drawing::Size(241, 29);
			this->buttonDeliveryAddItem->TabIndex = 149;
			this->buttonDeliveryAddItem->Text = L"Dodaj przedmiot do transakcji";
			this->buttonDeliveryAddItem->UseVisualStyleBackColor = true;
			this->buttonDeliveryAddItem->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliveryAddItem_Click);
			// 
			// buttonDeliveryClearForm
			// 
			this->buttonDeliveryClearForm->Enabled = false;
			this->buttonDeliveryClearForm->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliveryClearForm->Location = System::Drawing::Point(539, 316);
			this->buttonDeliveryClearForm->Name = L"buttonDeliveryClearForm";
			this->buttonDeliveryClearForm->Size = System::Drawing::Size(146, 29);
			this->buttonDeliveryClearForm->TabIndex = 148;
			this->buttonDeliveryClearForm->Text = L"Wyczyœæ formularz";
			this->buttonDeliveryClearForm->UseVisualStyleBackColor = true;
			this->buttonDeliveryClearForm->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliveryClearForm_Click);
			// 
			// buttonDeliveryDelete
			// 
			this->buttonDeliveryDelete->Enabled = false;
			this->buttonDeliveryDelete->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliveryDelete->Location = System::Drawing::Point(691, 316);
			this->buttonDeliveryDelete->Name = L"buttonDeliveryDelete";
			this->buttonDeliveryDelete->Size = System::Drawing::Size(126, 29);
			this->buttonDeliveryDelete->TabIndex = 147;
			this->buttonDeliveryDelete->Text = L"Usuñ transakcje";
			this->buttonDeliveryDelete->UseVisualStyleBackColor = true;
			this->buttonDeliveryDelete->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliveryDelete_Click);
			// 
			// buttonDeliverySave
			// 
			this->buttonDeliverySave->Enabled = false;
			this->buttonDeliverySave->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliverySave->Location = System::Drawing::Point(823, 316);
			this->buttonDeliverySave->Name = L"buttonDeliverySave";
			this->buttonDeliverySave->Size = System::Drawing::Size(150, 29);
			this->buttonDeliverySave->TabIndex = 146;
			this->buttonDeliverySave->Text = L"Dodaj transakcje";
			this->buttonDeliverySave->UseVisualStyleBackColor = true;
			this->buttonDeliverySave->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliverySave_Click);
			// 
			// dataGridViewDeliveryProviders
			// 
			this->dataGridViewDeliveryProviders->AllowUserToAddRows = false;
			this->dataGridViewDeliveryProviders->AllowUserToDeleteRows = false;
			this->dataGridViewDeliveryProviders->AllowUserToOrderColumns = true;
			this->dataGridViewDeliveryProviders->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDeliveryProviders->Location = System::Drawing::Point(414, 351);
			this->dataGridViewDeliveryProviders->Name = L"dataGridViewDeliveryProviders";
			this->dataGridViewDeliveryProviders->ReadOnly = true;
			this->dataGridViewDeliveryProviders->Size = System::Drawing::Size(271, 193);
			this->dataGridViewDeliveryProviders->TabIndex = 145;
			this->dataGridViewDeliveryProviders->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewDeliveryProviders_CellClick);
			// 
			// maskedTextBoxDeliveryQuantity
			// 
			this->maskedTextBoxDeliveryQuantity->Enabled = false;
			this->maskedTextBoxDeliveryQuantity->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->maskedTextBoxDeliveryQuantity->Location = System::Drawing::Point(627, 175);
			this->maskedTextBoxDeliveryQuantity->Mask = L"00000";
			this->maskedTextBoxDeliveryQuantity->Name = L"maskedTextBoxDeliveryQuantity";
			this->maskedTextBoxDeliveryQuantity->Size = System::Drawing::Size(55, 23);
			this->maskedTextBoxDeliveryQuantity->TabIndex = 144;
			this->maskedTextBoxDeliveryQuantity->ValidatingType = System::Int32::typeid;
			// 
			// labelDeliveryQuantity
			// 
			this->labelDeliveryQuantity->AutoSize = true;
			this->labelDeliveryQuantity->Enabled = false;
			this->labelDeliveryQuantity->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelDeliveryQuantity->Location = System::Drawing::Point(538, 178);
			this->labelDeliveryQuantity->Name = L"labelDeliveryQuantity";
			this->labelDeliveryQuantity->Size = System::Drawing::Size(76, 16);
			this->labelDeliveryQuantity->TabIndex = 143;
			this->labelDeliveryQuantity->Text = L"Iloœæ sztuk:";
			// 
			// comboBoxDeliveryItem
			// 
			this->comboBoxDeliveryItem->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxDeliveryItem->Enabled = false;
			this->comboBoxDeliveryItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->comboBoxDeliveryItem->FormattingEnabled = true;
			this->comboBoxDeliveryItem->Location = System::Drawing::Point(627, 129);
			this->comboBoxDeliveryItem->Name = L"comboBoxDeliveryItem";
			this->comboBoxDeliveryItem->Size = System::Drawing::Size(316, 24);
			this->comboBoxDeliveryItem->TabIndex = 142;
			this->comboBoxDeliveryItem->SelectedIndexChanged += gcnew System::EventHandler(this, &Magazin::comboBoxDeliveryItem_SelectedIndexChanged);
			// 
			// labelDeliveryItem
			// 
			this->labelDeliveryItem->AutoSize = true;
			this->labelDeliveryItem->Enabled = false;
			this->labelDeliveryItem->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelDeliveryItem->Location = System::Drawing::Point(538, 132);
			this->labelDeliveryItem->Name = L"labelDeliveryItem";
			this->labelDeliveryItem->Size = System::Drawing::Size(74, 16);
			this->labelDeliveryItem->TabIndex = 141;
			this->labelDeliveryItem->Text = L"Przedmiot:";
			// 
			// comboBoxDeliveryProvider
			// 
			this->comboBoxDeliveryProvider->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxDeliveryProvider->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->comboBoxDeliveryProvider->FormattingEnabled = true;
			this->comboBoxDeliveryProvider->Location = System::Drawing::Point(627, 84);
			this->comboBoxDeliveryProvider->Name = L"comboBoxDeliveryProvider";
			this->comboBoxDeliveryProvider->Size = System::Drawing::Size(316, 24);
			this->comboBoxDeliveryProvider->TabIndex = 140;
			this->comboBoxDeliveryProvider->SelectedIndexChanged += gcnew System::EventHandler(this, &Magazin::comboBoxDeliveryProvider_SelectedIndexChanged);
			// 
			// labelDeliveryProvider
			// 
			this->labelDeliveryProvider->AutoSize = true;
			this->labelDeliveryProvider->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelDeliveryProvider->Location = System::Drawing::Point(541, 87);
			this->labelDeliveryProvider->Name = L"labelDeliveryProvider";
			this->labelDeliveryProvider->Size = System::Drawing::Size(73, 16);
			this->labelDeliveryProvider->TabIndex = 139;
			this->labelDeliveryProvider->Text = L"Dostawca:";
			// 
			// labelDeliveryIDVal
			// 
			this->labelDeliveryIDVal->AutoSize = true;
			this->labelDeliveryIDVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelDeliveryIDVal->Location = System::Drawing::Point(624, 56);
			this->labelDeliveryIDVal->Name = L"labelDeliveryIDVal";
			this->labelDeliveryIDVal->Size = System::Drawing::Size(16, 16);
			this->labelDeliveryIDVal->TabIndex = 138;
			this->labelDeliveryIDVal->Text = L"#";
			// 
			// labelDeliveryID
			// 
			this->labelDeliveryID->AutoSize = true;
			this->labelDeliveryID->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelDeliveryID->Location = System::Drawing::Point(470, 56);
			this->labelDeliveryID->Name = L"labelDeliveryID";
			this->labelDeliveryID->Size = System::Drawing::Size(144, 16);
			this->labelDeliveryID->TabIndex = 137;
			this->labelDeliveryID->Text = L"Identyfikator dostawy:";
			// 
			// dataGridViewDeliveryEmployers
			// 
			this->dataGridViewDeliveryEmployers->AllowUserToAddRows = false;
			this->dataGridViewDeliveryEmployers->AllowUserToDeleteRows = false;
			this->dataGridViewDeliveryEmployers->AllowUserToOrderColumns = true;
			this->dataGridViewDeliveryEmployers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDeliveryEmployers->Location = System::Drawing::Point(692, 351);
			this->dataGridViewDeliveryEmployers->Name = L"dataGridViewDeliveryEmployers";
			this->dataGridViewDeliveryEmployers->ReadOnly = true;
			this->dataGridViewDeliveryEmployers->Size = System::Drawing::Size(282, 193);
			this->dataGridViewDeliveryEmployers->TabIndex = 136;
			this->dataGridViewDeliveryEmployers->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewDeliveryEmployers_CellClick);
			// 
			// dataGridViewDeliveryItems
			// 
			this->dataGridViewDeliveryItems->AllowUserToAddRows = false;
			this->dataGridViewDeliveryItems->AllowUserToDeleteRows = false;
			this->dataGridViewDeliveryItems->AllowUserToOrderColumns = true;
			this->dataGridViewDeliveryItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDeliveryItems->Location = System::Drawing::Point(5, 351);
			this->dataGridViewDeliveryItems->Name = L"dataGridViewDeliveryItems";
			this->dataGridViewDeliveryItems->ReadOnly = true;
			this->dataGridViewDeliveryItems->Size = System::Drawing::Size(403, 193);
			this->dataGridViewDeliveryItems->TabIndex = 135;
			this->dataGridViewDeliveryItems->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewDeliveryItems_CellClick);
			// 
			// buttonDeliveryShow
			// 
			this->buttonDeliveryShow->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->buttonDeliveryShow->Location = System::Drawing::Point(5, 7);
			this->buttonDeliveryShow->Name = L"buttonDeliveryShow";
			this->buttonDeliveryShow->Size = System::Drawing::Size(219, 34);
			this->buttonDeliveryShow->TabIndex = 134;
			this->buttonDeliveryShow->Text = L"Poka¿ dostawy";
			this->buttonDeliveryShow->UseVisualStyleBackColor = true;
			this->buttonDeliveryShow->Click += gcnew System::EventHandler(this, &Magazin::buttonDeliveryShow_Click);
			// 
			// dataGridViewDelivery
			// 
			this->dataGridViewDelivery->AllowUserToAddRows = false;
			this->dataGridViewDelivery->AllowUserToDeleteRows = false;
			this->dataGridViewDelivery->AllowUserToOrderColumns = true;
			this->dataGridViewDelivery->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDelivery->Location = System::Drawing::Point(5, 47);
			this->dataGridViewDelivery->Name = L"dataGridViewDelivery";
			this->dataGridViewDelivery->ReadOnly = true;
			this->dataGridViewDelivery->Size = System::Drawing::Size(403, 298);
			this->dataGridViewDelivery->TabIndex = 133;
			this->dataGridViewDelivery->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Magazin::dataGridViewDelivery_CellClick);
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
			this->labelASOtherInfoVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASOtherInfoVal->Location = System::Drawing::Point(207, 315);
			this->labelASOtherInfoVal->Name = L"labelASOtherInfoVal";
			this->labelASOtherInfoVal->Size = System::Drawing::Size(16, 16);
			this->labelASOtherInfoVal->TabIndex = 64;
			this->labelASOtherInfoVal->Text = L"#";
			// 
			// labelASAddressVal
			// 
			this->labelASAddressVal->AutoSize = true;
			this->labelASAddressVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASAddressVal->Location = System::Drawing::Point(207, 218);
			this->labelASAddressVal->Name = L"labelASAddressVal";
			this->labelASAddressVal->Size = System::Drawing::Size(16, 16);
			this->labelASAddressVal->TabIndex = 63;
			this->labelASAddressVal->Text = L"#";
			// 
			// labelASSurnameVal
			// 
			this->labelASSurnameVal->AutoSize = true;
			this->labelASSurnameVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASSurnameVal->Location = System::Drawing::Point(207, 187);
			this->labelASSurnameVal->Name = L"labelASSurnameVal";
			this->labelASSurnameVal->Size = System::Drawing::Size(16, 16);
			this->labelASSurnameVal->TabIndex = 62;
			this->labelASSurnameVal->Text = L"#";
			// 
			// labelASNameVal
			// 
			this->labelASNameVal->AutoSize = true;
			this->labelASNameVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASNameVal->Location = System::Drawing::Point(207, 152);
			this->labelASNameVal->Name = L"labelASNameVal";
			this->labelASNameVal->Size = System::Drawing::Size(16, 16);
			this->labelASNameVal->TabIndex = 61;
			this->labelASNameVal->Text = L"#";
			// 
			// labelASLoginVal
			// 
			this->labelASLoginVal->AutoSize = true;
			this->labelASLoginVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASLoginVal->Location = System::Drawing::Point(207, 119);
			this->labelASLoginVal->Name = L"labelASLoginVal";
			this->labelASLoginVal->Size = System::Drawing::Size(16, 16);
			this->labelASLoginVal->TabIndex = 60;
			this->labelASLoginVal->Text = L"#";
			// 
			// labelASIsAdminVal
			// 
			this->labelASIsAdminVal->AutoSize = true;
			this->labelASIsAdminVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASIsAdminVal->Location = System::Drawing::Point(234, 411);
			this->labelASIsAdminVal->Name = L"labelASIsAdminVal";
			this->labelASIsAdminVal->Size = System::Drawing::Size(16, 16);
			this->labelASIsAdminVal->TabIndex = 59;
			this->labelASIsAdminVal->Text = L"#";
			// 
			// textBoxASRNewPassword
			// 
			this->textBoxASRNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxASRNewPassword->Location = System::Drawing::Point(606, 187);
			this->textBoxASRNewPassword->Name = L"textBoxASRNewPassword";
			this->textBoxASRNewPassword->PasswordChar = '*';
			this->textBoxASRNewPassword->Size = System::Drawing::Size(293, 23);
			this->textBoxASRNewPassword->TabIndex = 58;
			// 
			// labelASRNewPassword
			// 
			this->labelASRNewPassword->AutoSize = true;
			this->labelASRNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASRNewPassword->Location = System::Drawing::Point(509, 191);
			this->labelASRNewPassword->Name = L"labelASRNewPassword";
			this->labelASRNewPassword->Size = System::Drawing::Size(84, 16);
			this->labelASRNewPassword->TabIndex = 57;
			this->labelASRNewPassword->Text = L"Nowe has³o:";
			// 
			// textBoxASNewPassword
			// 
			this->textBoxASNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxASNewPassword->Location = System::Drawing::Point(606, 152);
			this->textBoxASNewPassword->Name = L"textBoxASNewPassword";
			this->textBoxASNewPassword->PasswordChar = '*';
			this->textBoxASNewPassword->Size = System::Drawing::Size(293, 23);
			this->textBoxASNewPassword->TabIndex = 56;
			// 
			// labelASNewPassword
			// 
			this->labelASNewPassword->AutoSize = true;
			this->labelASNewPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASNewPassword->Location = System::Drawing::Point(509, 155);
			this->labelASNewPassword->Name = L"labelASNewPassword";
			this->labelASNewPassword->Size = System::Drawing::Size(84, 16);
			this->labelASNewPassword->TabIndex = 55;
			this->labelASNewPassword->Text = L"Nowe has³o:";
			// 
			// textBoxASOldPassword
			// 
			this->textBoxASOldPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxASOldPassword->Location = System::Drawing::Point(606, 116);
			this->textBoxASOldPassword->Name = L"textBoxASOldPassword";
			this->textBoxASOldPassword->PasswordChar = '*';
			this->textBoxASOldPassword->Size = System::Drawing::Size(293, 23);
			this->textBoxASOldPassword->TabIndex = 54;
			// 
			// labelASOldPassword
			// 
			this->labelASOldPassword->AutoSize = true;
			this->labelASOldPassword->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASOldPassword->Location = System::Drawing::Point(509, 119);
			this->labelASOldPassword->Name = L"labelASOldPassword";
			this->labelASOldPassword->Size = System::Drawing::Size(84, 16);
			this->labelASOldPassword->TabIndex = 53;
			this->labelASOldPassword->Text = L"Stare has³o:";
			// 
			// checkBoxASIsAdmin
			// 
			this->checkBoxASIsAdmin->AutoSize = true;
			this->checkBoxASIsAdmin->Enabled = false;
			this->checkBoxASIsAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->checkBoxASIsAdmin->Location = System::Drawing::Point(213, 412);
			this->checkBoxASIsAdmin->Name = L"checkBoxASIsAdmin";
			this->checkBoxASIsAdmin->Size = System::Drawing::Size(15, 14);
			this->checkBoxASIsAdmin->TabIndex = 52;
			this->checkBoxASIsAdmin->UseVisualStyleBackColor = true;
			// 
			// labelASIsAdmin
			// 
			this->labelASIsAdmin->AutoSize = true;
			this->labelASIsAdmin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASIsAdmin->Location = System::Drawing::Point(48, 410);
			this->labelASIsAdmin->Name = L"labelASIsAdmin";
			this->labelASIsAdmin->Size = System::Drawing::Size(145, 16);
			this->labelASIsAdmin->TabIndex = 51;
			this->labelASIsAdmin->Text = L"Prawa administratora:";
			// 
			// labelASLastlogoutVal
			// 
			this->labelASLastlogoutVal->AutoSize = true;
			this->labelASLastlogoutVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASLastlogoutVal->Location = System::Drawing::Point(207, 382);
			this->labelASLastlogoutVal->Name = L"labelASLastlogoutVal";
			this->labelASLastlogoutVal->Size = System::Drawing::Size(16, 16);
			this->labelASLastlogoutVal->TabIndex = 50;
			this->labelASLastlogoutVal->Text = L"#";
			// 
			// labelASLastloginVal
			// 
			this->labelASLastloginVal->AutoSize = true;
			this->labelASLastloginVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASLastloginVal->Location = System::Drawing::Point(207, 351);
			this->labelASLastloginVal->Name = L"labelASLastloginVal";
			this->labelASLastloginVal->Size = System::Drawing::Size(16, 16);
			this->labelASLastloginVal->TabIndex = 49;
			this->labelASLastloginVal->Text = L"#";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10));
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
			this->textBoxASPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxASPhone->Location = System::Drawing::Point(205, 279);
			this->textBoxASPhone->Name = L"textBoxASPhone";
			this->textBoxASPhone->Size = System::Drawing::Size(293, 23);
			this->textBoxASPhone->TabIndex = 46;
			// 
			// textBoxASEmail
			// 
			this->textBoxASEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->textBoxASEmail->Location = System::Drawing::Point(205, 247);
			this->textBoxASEmail->Name = L"textBoxASEmail";
			this->textBoxASEmail->Size = System::Drawing::Size(293, 23);
			this->textBoxASEmail->TabIndex = 45;
			// 
			// labelASLastlogout
			// 
			this->labelASLastlogout->AutoSize = true;
			this->labelASLastlogout->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASLastlogout->Location = System::Drawing::Point(45, 382);
			this->labelASLastlogout->Name = L"labelASLastlogout";
			this->labelASLastlogout->Size = System::Drawing::Size(148, 16);
			this->labelASLastlogout->TabIndex = 40;
			this->labelASLastlogout->Text = L"Ostatnie wylogowanie:";
			// 
			// labelASLastlogin
			// 
			this->labelASLastlogin->AutoSize = true;
			this->labelASLastlogin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASLastlogin->Location = System::Drawing::Point(47, 351);
			this->labelASLastlogin->Name = L"labelASLastlogin";
			this->labelASLastlogin->Size = System::Drawing::Size(146, 16);
			this->labelASLastlogin->TabIndex = 39;
			this->labelASLastlogin->Text = L"Ostatnie zalogowanie:";
			// 
			// labelASOtherInfo
			// 
			this->labelASOtherInfo->AutoSize = true;
			this->labelASOtherInfo->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASOtherInfo->Location = System::Drawing::Point(85, 315);
			this->labelASOtherInfo->Name = L"labelASOtherInfo";
			this->labelASOtherInfo->Size = System::Drawing::Size(108, 16);
			this->labelASOtherInfo->TabIndex = 38;
			this->labelASOtherInfo->Text = L"Inne informacje:";
			// 
			// labelASPhone
			// 
			this->labelASPhone->AutoSize = true;
			this->labelASPhone->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASPhone->Location = System::Drawing::Point(135, 286);
			this->labelASPhone->Name = L"labelASPhone";
			this->labelASPhone->Size = System::Drawing::Size(58, 16);
			this->labelASPhone->TabIndex = 37;
			this->labelASPhone->Text = L"Telefon:";
			// 
			// labelASEmail
			// 
			this->labelASEmail->AutoSize = true;
			this->labelASEmail->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASEmail->Location = System::Drawing::Point(147, 250);
			this->labelASEmail->Name = L"labelASEmail";
			this->labelASEmail->Size = System::Drawing::Size(46, 16);
			this->labelASEmail->TabIndex = 36;
			this->labelASEmail->Text = L"Email:";
			// 
			// labelASAddress
			// 
			this->labelASAddress->AutoSize = true;
			this->labelASAddress->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASAddress->Location = System::Drawing::Point(144, 218);
			this->labelASAddress->Name = L"labelASAddress";
			this->labelASAddress->Size = System::Drawing::Size(49, 16);
			this->labelASAddress->TabIndex = 35;
			this->labelASAddress->Text = L"Adres:";
			// 
			// labelASSurname
			// 
			this->labelASSurname->AutoSize = true;
			this->labelASSurname->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASSurname->Location = System::Drawing::Point(124, 187);
			this->labelASSurname->Name = L"labelASSurname";
			this->labelASSurname->Size = System::Drawing::Size(69, 16);
			this->labelASSurname->TabIndex = 34;
			this->labelASSurname->Text = L"Nazwisko:";
			// 
			// labelASName
			// 
			this->labelASName->AutoSize = true;
			this->labelASName->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASName->Location = System::Drawing::Point(156, 152);
			this->labelASName->Name = L"labelASName";
			this->labelASName->Size = System::Drawing::Size(37, 16);
			this->labelASName->TabIndex = 33;
			this->labelASName->Text = L"Imiê:";
			// 
			// labelASLogin
			// 
			this->labelASLogin->AutoSize = true;
			this->labelASLogin->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASLogin->Location = System::Drawing::Point(146, 119);
			this->labelASLogin->Name = L"labelASLogin";
			this->labelASLogin->Size = System::Drawing::Size(47, 16);
			this->labelASLogin->TabIndex = 32;
			this->labelASLogin->Text = L"Login:";
			// 
			// labelASIDVal
			// 
			this->labelASIDVal->AutoSize = true;
			this->labelASIDVal->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASIDVal->Location = System::Drawing::Point(207, 82);
			this->labelASIDVal->Name = L"labelASIDVal";
			this->labelASIDVal->Size = System::Drawing::Size(16, 16);
			this->labelASIDVal->TabIndex = 31;
			this->labelASIDVal->Text = L"#";
			// 
			// labelASID
			// 
			this->labelASID->AutoSize = true;
			this->labelASID->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelASID->Location = System::Drawing::Point(29, 82);
			this->labelASID->Name = L"labelASID";
			this->labelASID->Size = System::Drawing::Size(164, 16);
			this->labelASID->TabIndex = 30;
			this->labelASID->Text = L"Identyfikator pracownika:";
			// 
			// labelLogedAs
			// 
			this->labelLogedAs->AutoSize = true;
			this->labelLogedAs->Font = (gcnew System::Drawing::Font(L"Arial", 10));
			this->labelLogedAs->Location = System::Drawing::Point(707, 37);
			this->labelLogedAs->Name = L"labelLogedAs";
			this->labelLogedAs->Size = System::Drawing::Size(118, 16);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesClients))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesEmployers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalesItems))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSales))->EndInit();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeliveryProviders))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeliveryEmployers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDeliveryItems))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDelivery))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Magazin_Load(System::Object^  sender, System::EventArgs^  e) {
			 String^ query = "Select employers.login, employers.type from employers INNER JOIN common_data ON common_data.id_common_data = employers.cdata where common_data.status = 1 and employers.id_employers ='" + this->userId + "' LIMIT 1";
			 dbDriver db;
			 db.selectOne(query);
			 if (db.getStatus())
			 {
				if (userType)
					 this->btnSaveEmployer->Enabled = true;
				this->labelLogedUser->Text = db.result->GetString(0);
				this->userType = db.result->GetBoolean(1);
				db.closeConnection();
				this->accountSettings();
				this->bindAllTables();
			 }
			 else
			 {
				 MessageBox::Show(db.getError());
				 db.closeConnection();
			 }

			 String^ clToCombo = "SELECT clients.name from clients INNER JOIN common_data ON common_data.id_common_data = clients.cdata where common_data.status = 1";
			 dbDriver dbc;
			 dbc.selectOne(clToCombo);
			 if (dbc.getStatus())
			 {
				 this->comboBoxSellClient->Items->Add(dbc.result->GetString(0));
				 while (dbc.result->Read())
					 this->comboBoxSellClient->Items->Add(dbc.result->GetString(0));
				 dbc.closeConnection();
			 }
			 else
			 {
				 MessageBox::Show(dbc.getError());
				 dbc.closeConnection();
			 }

			 String^ prToCombo = "SELECT providers.name from providers INNER JOIN common_data ON common_data.id_common_data = providers.cdata where common_data.status = 1";
			 dbDriver dbp;
			 dbp.selectOne(prToCombo);
			 if (dbp.getStatus())
			 {
				 this->comboBoxDeliveryProvider->Items->Add(dbp.result->GetString(0));
				 while (dbp.result->Read())
					 this->comboBoxDeliveryProvider->Items->Add(dbp.result->GetString(0));
				 dbp.closeConnection();
			 }
			 else
			 {
				 MessageBox::Show(dbp.getError());
				 dbp.closeConnection();
			 }
	}

	private: Void bindAllTables()
	{
		String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		bindTable(ManyQuery, this->tableEmployers);
		
		ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ManyQuery, this->dataGridViewClients);
		
		ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ManyQuery, this->dataGridViewProviders);
		
		String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		this->bindTable(ItemsQuery, this->dataGridViewItems);

		String^ ParamsQuery = "Select name as Parametry from features";
		this->bindTable(ParamsQuery, this->dataGridViewParams);

		String^ ProducersQuery = "Select name as Producenci from producers";
		this->bindTable(ProducersQuery, this->dataGridViewProducers);

		String^ SalesQuery = "SELECT id_sales as Id_sprzedazy, id_employers as Id_sprzedawcy, id_clients as Id_klienta, date as Data, price as Kwota_transakcji, status from sales";
		this->bindTable(SalesQuery, this->dataGridViewSales);

		ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		this->bindTable(ItemsQuery, this->dataGridViewSalesItems);

		String^ ClientsQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ClientsQuery, this->dataGridViewSalesClients);

		String^ EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(EmployersQuery, this->dataGridViewSalesEmployers);

		String^ DeliveryQuery = "SELECT id_provides as Id_sprzedazy, id_employers as Id_sprzedawcy, id_providers as Id_dostawcy, date as Data, price as Kwota_transakcji, status from provides";
		this->bindTable(DeliveryQuery, this->dataGridViewDelivery);

		ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		this->bindTable(ItemsQuery, this->dataGridViewDeliveryItems);

		String^ ProvidersQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ProvidersQuery, this->dataGridViewDeliveryProviders);

		EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(EmployersQuery, this->dataGridViewDeliveryEmployers);
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
		String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE employers.name LIKE '%" + this->txtBoxSearchEmployers->Text + "%' OR employers.surname LIKE '%" + this->txtBoxSearchEmployers->Text + "%' OR employers.login LIKE '%" + this->txtBoxSearchEmployers->Text + "%' OR common_data.email LIKE '%" + this->txtBoxSearchEmployers->Text + "%' WHERE common_data.status = 1";
		this->bindTable(ManyQuery, this->tableEmployers);
	}

	private: System::Void btnShowEmployers_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ManyQuery, this->tableEmployers);
	}

	private: System::Void tableEmployers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowId = Convert::ToInt32(tableEmployers->Rows[e->RowIndex]->Cells[0]->Value);
			this->labelEmployerPassword->Visible = false;
			this->textBoxEmployerPassword->Visible = false;
			String^ query = "Select * from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data where common_data.status = 1 and employers.id_employers ='" + this->rowId + "' LIMIT 1";
			dbDriver db;
			db.selectOne(query);

			if (db.getStatus())
			{
				this->relEmployersToCommonData = db.result->GetInt32(7);
				this->labelEmplID->Text = db.result->GetString(0);
				this->textBoxEmployerName->Text = db.result->GetString(1);
				this->textBoxEmployerSurname->Text = db.result->GetString(2);
				this->textBoxEmployerLogin->Text = db.result->GetString(3);
				this->textBoxEmployerAddress->Text = db.result->GetString(10);
				this->textBoxEmployerEmail->Text = db.result->GetString(12);
				this->textBoxEmployerPhone->Text = db.result->GetString(11);
				this->textBoxEmployerOtherInfo->Text = db.result->GetString(13);
				this->labelLastLoginVal->Text = Convert::ToString(db.result->GetDateTime(5));
				this->labelLastLogoutVal->Text = Convert::ToString(db.result->GetDateTime(6));
				this->checkBoxIsAdmin->Checked = db.result->GetBoolean(8);
				db.closeConnection();
				if (userType)
					this->buttonEmployerDelete->Enabled = true; 
				this->btnSaveEmployer->Text = "Zapisz";
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
			&& this->textBoxEmployerName->Text->Length < 50
			&& this->textBoxEmployerSurname->Text->Length > 2
			&& this->textBoxEmployerSurname->Text->Length < 50
			&& this->textBoxEmployerLogin->Text->Length > 3
			&& this->textBoxEmployerLogin->Text->Length < 25
			&& this->textBoxEmployerAddress->Text->Length > 10
			&& this->textBoxEmployerAddress->Text->Length < 255
			&& this->textBoxEmployerEmail->Text->Length > 5
			&& this->textBoxEmployerEmail->Text->Length < 255
			&& this->textBoxEmployerPhone->Text->Length > 4
			&& this->textBoxEmployerPhone->Text->Length < 20
			)
		{
			int type;
			if (this->checkBoxIsAdmin->Checked)
				type = 1;
			else
				type = 0;
			if (this->rowId > 0)
			{
				String^ query = "UPDATE employers SET name='" + this->textBoxEmployerName->Text
					+ "', surname='" + this->textBoxEmployerSurname->Text
					+ "', login='" + this->textBoxEmployerLogin->Text
					+ "', type='" + type
					+ "' WHERE id_employers ='" + this->rowId + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ cquery = "UPDATE common_data SET address='" + this->textBoxEmployerAddress->Text
						+ "', phone='" + this->textBoxEmployerPhone->Text
						+ "', email='" + this->textBoxEmployerEmail->Text
						+"', other_info='" + this->textBoxEmployerOtherInfo->Text
						+ "' WHERE id_common_data ='" + this->relEmployersToCommonData + "'";

					db.update(cquery);

					if (db.getStatus())
					{
						String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
						this->bindTable(ManyQuery, this->tableEmployers);
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

				this->clearForm();
			}
			else
			{
				if (this->textBoxEmployerPassword->Text->Length > 3 && this->textBoxEmployerPassword->Text->Length < 100)
				{
					String^ cquery = "INSERT INTO common_data(address, phone, email, other_info) VALUES('"
						+ this->textBoxEmployerAddress->Text + "', '"
						+ this->textBoxEmployerPhone->Text + "', '"
						+ this->textBoxEmployerEmail->Text + "', '"
						+ this->textBoxEmployerOtherInfo->Text + "')";
					dbDriver db;
					db.insert(cquery);

					if (db.getStatus())
					{
						
						db.closeConnection();
						dbDriver dbs;
						String^ squery = "SELECT id_common_data FROM common_data WHERE address='"
							+ this->textBoxEmployerAddress->Text + "'AND phone='"
							+ this->textBoxEmployerPhone->Text + "'AND email='"
							+ this->textBoxEmployerEmail->Text + "' AND common_data.status = 1";
						dbs.selectOne(squery);
						if (dbs.getStatus())
						{	
							String^ equery = "INSERT INTO employers(name, surname, login, password, cdata, type) VALUES('"
								+ this->textBoxEmployerName->Text + "', '"
								+ this->textBoxEmployerSurname->Text + "', '"
								+ this->textBoxEmployerLogin->Text + "',password('"
								+ this->textBoxEmployerPassword->Text + "'),'"
								+ dbs.result->GetInt32(0) + "','"
								+ type + "')";
							dbs.closeConnection();
							dbDriver dbi;
							dbi.insert(equery);

							if (dbi.getStatus())
							{
								String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
								this->bindTable(ManyQuery, this->tableEmployers);
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
				
				this->clearForm();
			}
		}
		else
		{
			MessageBox::Show("Wprowadzone dane s¹ nieprawdi³owe.");
		}
	}
	
	private: System::Void buttonClearForm_Click(System::Object^  sender, System::EventArgs^  e) {
		this->clearForm();
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
		this->btnSaveEmployer->Text = "Dodaj";
		this->labelEmployerPassword->Visible = true;
		this->textBoxEmployerPassword->Visible = true;
		this->rowId = -1;
	}

	private: System::Void buttonEmployerDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->rowId > 1 && this->userId != this->rowId)
		{
			if (MessageBox::Show("Czy chcesz usun¹æ u¿ytkownika?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "UPDATE common_data SET status = 0 FROM common_data INNER JOIN employers ON employers.cdata = common_data.id_common_data WHERE employers.id_employers = '" + this->rowId + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ ManyQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
					this->bindTable(ManyQuery, this->tableEmployers);
					this->clearForm();
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
		if (MessageBox::Show("Czy na pewno chcesz zamkn¹æ program?", "Magazyn", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ query = "UPDATE employers set last_log_out=now() WHERE id_employers='" + this->userId + "'";
			dbDriver db;
			db.update(query);
			if (!db.getStatus())
				MessageBox::Show(db.getError());
			db.closeConnection();
			this->Close();
		}
	}

	private: Void accountSettings()
	{
		String^ query = "Select * from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data where common_data.status = 1 AND employers.id_employers ='" + this->userId + "' LIMIT 1";
		dbDriver db;
		db.selectOne(query);

		if (db.getStatus())
		{
			this->labelASIDVal->Text = db.result->GetString(0);
			this->labelASNameVal->Text = db.result->GetString(1);
			this->labelASSurnameVal->Text = db.result->GetString(2);
			this->labelASLoginVal->Text = db.result->GetString(3);
			this->labelASLastloginVal->Text = Convert::ToString(db.result->GetDateTime(5));
			this->labelASLastlogoutVal->Text = Convert::ToString(db.result->GetDateTime(6));
			this->relEmployersToCommonData = db.result->GetInt32(7);
			int type = db.result->GetInt32(8);
			if (type = 1)
			{
				this->labelASIsAdminVal->Text = "Posiada";
				this->checkBoxASIsAdmin->Checked = true;
			}
			else
				this->labelASIsAdminVal->Text = "Brak";
			this->labelASAddressVal->Text = db.result->GetString(10);
			this->textBoxASPhone->Text = db.result->GetString(11);
			this->textBoxASEmail->Text = db.result->GetString(12);
			this->labelASOtherInfoVal->Text = db.result->GetString(13);
			db.closeConnection();
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (
			this->textBoxASEmail->Text->Length > 5
			&& this->textBoxASEmail->Text->Length < 255
			&& this->textBoxASPhone->Text->Length > 4
			&& this->textBoxASPhone->Text->Length < 20
			)
		{
			if (this->textBoxASOldPassword->Text == "" && this->textBoxASNewPassword->Text == "" && this->textBoxASRNewPassword->Text == "")
			{
				String^ cquery = "UPDATE common_data SET phone='" + this->textBoxASPhone->Text
					+ "', email='" + this->textBoxASEmail->Text
					+ "' WHERE id_common_data ='" + this->relEmployersToCommonData + "'";
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
			else if (this->textBoxASOldPassword->Text != "" && this->textBoxASNewPassword->Text != "" && this->textBoxASRNewPassword->Text != "")
			{
				String^ query = "Select count(employers.id_employers) from employers INNER JOIN common_data ON common_data.id_common_data = employers.cdata WHERE common_data.status = 1 AND employers.id_employers='" + this->userId + "' AND password=password('" + this->textBoxASOldPassword->Text + "')";
				dbDriver db;
				db.selectOne(query);
				if (db.getStatus())
				{
					
					if (db.result->GetInt32(0) == 1)
					{
						db.closeConnection();
						if (this->textBoxASNewPassword->Text->Length > 3 && this->textBoxASNewPassword->Text->Length < 100
							&& this->textBoxASRNewPassword->Text->Length > 3 && this->textBoxASRNewPassword->Text->Length < 100
							&& (this->textBoxASNewPassword->Text == this->textBoxASRNewPassword->Text)
							)
						{
							String^ cquery = "UPDATE employers SET password=password('" + this->textBoxASNewPassword->Text
								+ "') WHERE id_employers ='" + this->userId + "'";

							db.update(cquery);
							db.closeConnection();

							cquery = "UPDATE common_data SET common_data.phone='" + this->textBoxASPhone->Text
								+ "', email='" + this->textBoxASEmail->Text + "' WHERE id_common_data ='" + this->relEmployersToCommonData + "'";
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
						MessageBox::Show("Podane stare has³o jest nieprawid³owe");
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
		String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ManyQuery, this->dataGridViewClients);
	}

	private: System::Void buttonSearchClients_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select clients.id_clients as id, clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE clients.name LIKE '%" + this->textBoxSearchClients->Text + "%' OR clients.nip LIKE '%" + this->textBoxSearchClients->Text + "%' OR clients.regon LIKE '%" + this->textBoxSearchClients->Text + "%' OR common_data.email LIKE '%" + this->textBoxSearchClients + "%' OR common_data.phone LIKE '%" + this->textBoxSearchClients + "%' AND common_data.status = 1";
		this->bindTable(ManyQuery, this->dataGridViewClients);
	}
	
	private: System::Void dataGridViewClients_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowIdClients = Convert::ToInt32(this->dataGridViewClients->Rows[e->RowIndex]->Cells[0]->Value);
			String^ query = "Select * from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data where common_data.status = 1 and clients.id_clients ='" + this->rowIdClients + "' LIMIT 1";
			dbDriver db;
			db.selectOne(query);

			if (db.getStatus())
			{
				this->relClientsToCommonData = db.result->GetInt32(5);
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
				this->buttonSaveClient->Text = "Zapisz";
			}
			else
			{
				MessageBox::Show(db.getError());
				db.closeConnection();
			}
		}
	}

	private: System::Void buttonClearFormClient_Click(System::Object^  sender, System::EventArgs^  e) {
		this->clearFormClients();
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
		this->buttonSaveClient->Text = "Dodaj";
		this->buttonDeleteClient->Enabled = false;
		this->rowIdClients = -1;
	}

	private: System::Void buttonSaveClient_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (this->textBoxClientName->Text->Length < 2) throw 1;
			if (this->textBoxClientName->Text->Length > 255) throw 2;
			if (this->textBoxClientNIP->Text->Length != 10) throw 3;
			if (this->textBoxClientREGON->Text->Length != 9) throw 4;
			if (this->textBoxClientAddress->Text->Length < 10) throw 5;
			if (this->textBoxClientAddress->Text->Length > 255) throw 6;
			if (this->textBoxClientEmail->Text->Length < 5) throw 7;
			if (this->textBoxClientEmail->Text->Length > 255) throw 8;
			if (this->textBoxClientPhone->Text->Length < 4) throw 9;
			if (this->textBoxClientPhone->Text->Length > 20) throw 10;

			if (this->rowIdClients > 0)
			{
				String^ query = "UPDATE clients SET name='" + this->textBoxClientName->Text
					+ "', nip='" + this->textBoxClientNIP->Text
					+ "', regon='" + this->textBoxClientREGON->Text
					+ "' WHERE id_clients ='" + this->rowIdClients + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ cquery = "UPDATE common_data SET address='" + this->textBoxClientAddress->Text
						+ "', phone='" + this->textBoxClientPhone->Text
						+ "', email='" + this->textBoxClientEmail->Text
						+ "', other_info='" + this->textBoxClientOtherInfo->Text
						+ "' WHERE id_common_data ='" + this->relClientsToCommonData + "'";

					db.update(cquery);

					if (db.getStatus())
					{
						String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data where common_data.status = 1";
						this->bindTable(ManyQuery, this->dataGridViewClients);
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

				this->clearFormClients();
			}
			else
			{
				String^ cquery = "INSERT INTO common_data(address, phone, email, other_info) VALUES('"
					+ this->textBoxClientAddress->Text + "', '"
					+ this->textBoxClientPhone->Text + "', '"
					+ this->textBoxClientEmail->Text + "', '"
					+ this->textBoxClientOtherInfo->Text + "')";
				dbDriver db;
				db.insert(cquery);

				if (db.getStatus())
				{
					db.closeConnection();
					dbDriver dbs;
					String^ squery = "SELECT id_common_data FROM common_data WHERE address='"
						+ this->textBoxClientAddress->Text + "'AND phone='"
						+ this->textBoxClientPhone->Text + "'AND email='"
						+ this->textBoxClientEmail->Text + "' AND common_data.status = 1";
					dbs.selectOne(squery);
					if (dbs.getStatus())
					{
						String^ equery = "INSERT INTO clients(name, nip, regon, cdata) VALUES('"
							+ this->textBoxClientName->Text + "', '"
							+ this->textBoxClientNIP->Text + "', '"
							+ this->textBoxClientREGON->Text + "', '"
							+ dbs.result->GetInt32(0) + "')";
						dbs.closeConnection();
						dbDriver dbi;
						dbi.insert(equery);

						if (dbi.getStatus())
						{
							String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE common_data.status = 1";
							this->bindTable(ManyQuery, this->dataGridViewClients);
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
				this->clearFormClients();
			}
		}
		catch (int err)
		{
			String^ error;
			switch (err)
			{
			case 1:
				error = "Nazwa klienta jest za krótka: minimum 2 znaki";
				break;
			case 2:
				error = "Nazwa klienta jest za d³uga: maksymalnie 255 znaków";
				break;
			case 3:
				error = "NIP musi mieæ 10 cyfr";
				break;
			case 4:
				error = "REGON musi mieæ 9 cyfr";
				break;
			case 5:
				error = "Adres jest za krótki: minimum 10 znaków";
				break;
			case 6:
				error = "Adres jest za krótki: maksimum 255 znaków";
				break;
			case 7:
				error = "Email jest za krótki: minimum 5 znaków";
				break;
			case 8:
				error = "Email jest za d³ugi: maksimum 255 znaków";
				break;
			case 9:
				error = "Nr telefonu jest za krótki: minimum 4 znaki";
				break;
			case 10:
				error = "Nr telefonu jest za d³ugi: maksimum 20 znaków";
				break;
			default:
				error = "Wyst¹pi³ nieznany b³¹d.";
				break;
			}
			MessageBox::Show(error);
		}
	}
	
	private: System::Void buttonDeleteClient_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->rowIdClients > 0 && this->userType)
		{
			if (MessageBox::Show("Czy chcesz usun¹æ klienta?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "UPDATE common_data SET status = 0 FROM common_data INNER JOIN clients ON clients.cdata = common_data.id_common_data WHERE clients.id_clients='" + this->rowIdClients + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ ManyQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE common_data.status = 1";
					this->bindTable(ManyQuery, this->dataGridViewClients);
					this->clearFormClients();
					MessageBox::Show("Usuniêto klienta");
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
			MessageBox::Show("Nie mo¿na usun¹æ klienta");
		}
	}
	
	/* clients end */

	/* providers*/

	private: System::Void buttonShowProviders_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ManyQuery, this->dataGridViewProviders);
	}

	private: System::Void buttonSearchProviders_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select providers.id_providers as id, providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE providers.name LIKE '%" + this->textBoxSearchClients->Text + "%' OR providers.nip LIKE '%" + this->textBoxSearchClients->Text + "%' OR providers.regon LIKE '%" + this->textBoxSearchClients->Text + "%' OR common_data.email LIKE '%" + this->textBoxSearchClients + "%' OR common_data.phone LIKE '%" + this->textBoxSearchClients + "%' AND common_data.status = 1";
		this->bindTable(ManyQuery, this->dataGridViewProviders);
	}

	private: System::Void dataGridViewProviders_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowIdProviders = Convert::ToInt32(dataGridViewProviders->Rows[e->RowIndex]->Cells[0]->Value);
			String^ query = "Select * from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data where providers.id_providers ='" + this->rowIdProviders + "' AND common_data.status = 1 LIMIT 1";
			dbDriver db;
			db.selectOne(query);

			if (db.getStatus())
			{
				this->relProvidersToCommonData = db.result->GetInt32(5);
				this->labelProviderIDVal->Text = db.result->GetString(0);
				this->textBoxProviderName->Text = db.result->GetString(1);
				this->textBoxProviderNIP->Text = db.result->GetString(2);
				this->textBoxProviderREGON->Text = db.result->GetString(3);
				this->textBoxProviderAddress->Text = db.result->GetString(6);
				this->textBoxProviderEmail->Text = db.result->GetString(8);
				this->textBoxProviderPhone->Text = db.result->GetString(7);
				this->textBoxProviderOtherInfo->Text = db.result->GetString(9);

				if (this->userType)
					this->buttonProviderDelete->Enabled = true;
				this->buttonProviderSave->Text = "Zapisz";
			}
			else
				MessageBox::Show(db.getError());
			
			db.closeConnection();
		}
	}

	private: System::Void buttonClearProviderForm_Click(System::Object^  sender, System::EventArgs^  e) {
		this->clearFormProviders();
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
		this->buttonProviderSave->Text = "Dodaj";
		this->buttonProviderDelete->Enabled = false;
		this->rowIdProviders = -1;
	}

	private: System::Void buttonProviderSave_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (this->textBoxProviderName->Text->Length < 2) throw 1;
			if (this->textBoxProviderName->Text->Length > 255) throw 2;
			if (this->textBoxProviderNIP->Text->Length != 10) throw 3;
			if (this->textBoxProviderREGON->Text->Length != 9) throw 4;
			if (this->textBoxProviderAddress->Text->Length < 10) throw 5;
			if (this->textBoxProviderAddress->Text->Length > 255) throw 6;
			if (this->textBoxProviderEmail->Text->Length < 5) throw 7;
			if (this->textBoxProviderEmail->Text->Length > 255) throw 8;
			if (this->textBoxProviderPhone->Text->Length < 4) throw 9;
			if (this->textBoxProviderPhone->Text->Length > 20) throw 10;

			if (this->rowIdProviders > 0)
			{
				String^ query = "UPDATE providers SET name='" + this->textBoxProviderName->Text
					+ "', nip='" + this->textBoxProviderNIP->Text
					+ "', regon='" + this->textBoxProviderREGON->Text
					+ "' WHERE id_providers ='" + this->rowIdProviders + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ cquery = "UPDATE common_data SET address='" + this->textBoxProviderAddress->Text
						+ "', phone='" + this->textBoxProviderPhone->Text
						+ "', email='" + this->textBoxProviderEmail->Text
						+ "', other_info='" + this->textBoxProviderOtherInfo->Text
						+ "' WHERE id_common_data ='" + this->relProvidersToCommonData + "'";
					MessageBox::Show(cquery);
					db.update(cquery);

					if (db.getStatus())
					{
						String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE common_data.status = 1";
						this->bindTable(ManyQuery, this->dataGridViewProviders);
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

				this->clearFormProviders();
			}
			else
			{
				String^ cquery = "INSERT INTO common_data(address, phone, email, other_info) VALUES('"
					+ this->textBoxProviderAddress->Text + "', '"
					+ this->textBoxProviderPhone->Text + "', '"
					+ this->textBoxProviderEmail->Text + "', '"
					+ this->textBoxProviderOtherInfo->Text + "')";
				dbDriver db;
				db.insert(cquery);

				if (db.getStatus())
				{
					db.closeConnection();
					dbDriver dbs;
					String^ squery = "SELECT id_common_data FROM common_data WHERE address='"
						+ this->textBoxProviderAddress->Text + "'AND phone='"
						+ this->textBoxProviderPhone->Text + "'AND email='"
						+ this->textBoxProviderEmail->Text + "' AND common_data.status = 1";
					dbs.selectOne(squery);
					if (dbs.getStatus())
					{
						String^ equery = "INSERT INTO providers(name, nip, regon, cdata) VALUES('"
							+ this->textBoxProviderName->Text + "', '"
							+ this->textBoxProviderNIP->Text + "', '"
							+ this->textBoxProviderREGON->Text + "', '"
							+ dbs.result->GetInt32(0) + "')";
						dbs.closeConnection();
						dbDriver dbi;
						dbi.insert(equery);

						if (dbi.getStatus())
						{
							String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE common_data.status = 1";
							this->bindTable(ManyQuery, this->dataGridViewProviders);
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
				this->clearFormProviders();
			}
		}
		catch (int err)
		{
			String^ error;
			switch (err)
			{
			case 1:
				error = "Nazwa klienta jest za krótka: minimum 2 znaki";
				break;
			case 2:
				error = "Nazwa klienta jest za d³uga: maksymalnie 255 znaków";
				break;
			case 3:
				error = "NIP musi mieæ 10 cyfr";
				break;
			case 4:
				error = "REGON musi mieæ 9 cyfr";
				break;
			case 5:
				error = "Adres jest za krótki: minimum 10 znaków";
				break;
			case 6:
				error = "Adres jest za krótki: maksimum 255 znaków";
				break;
			case 7:
				error = "Email jest za krótki: minimum 5 znaków";
				break;
			case 8:
				error = "Email jest za d³ugi: maksimum 255 znaków";
				break;
			case 9:
				error = "Nr telefonu jest za krótki: minimum 4 znaki";
				break;
			case 10:
				error = "Nr telefonu jest za d³ugi: maksimum 20 znaków";
				break;
			default:
				error = "Wyst¹pi³ nieznany b³¹d.";
				break;
			}
			MessageBox::Show(error);
		}
	}

	private: System::Void buttonProviderDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->rowIdProviders > 0 && this->userType)
		{
			if (MessageBox::Show("Czy chcesz usun¹æ dostawce?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "UPDATE common_data SET status = 0 FROM common_data INNER JOIN providers ON providers.cdata = common_data.id_common_data WHERE providers.id_providers ='" + this->rowIdProviders + "'";
				dbDriver db;
				db.update(query);

				if (db.getStatus())
				{
					db.closeConnection();
					String^ ManyQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE common_data.status = 1";
					this->bindTable(ManyQuery, this->dataGridViewProviders);
					this->clearFormProviders();
					MessageBox::Show("Usuniêto dostawce");
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
			MessageBox::Show("Nie mo¿na usun¹æ dostawcy");
		}
	}

	/* providers end */

	/* items*/
	private: System::Void buttonItemsShow_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		this->bindTable(ItemsQuery, this->dataGridViewItems);

		String^ ParamsQuery = "Select name as Parametry from features";
		this->bindTable(ParamsQuery, this->dataGridViewParams);

		String^ ProducersQuery = "Select name as Producenci from producers";
		this->bindTable(ProducersQuery, this->dataGridViewProducers);
	}

	private: System::Void buttonItemsSearch_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ ManyQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers WHERE items.name LIKE '%" + this->textBoxItemsSearch->Text + "%' OR items.model LIKE '%" + this->textBoxItemsSearch->Text + "%' OR producers.name LIKE '%" + this->textBoxItemsSearch->Text + "%'";
		this->bindTable(ManyQuery, this->dataGridViewItems);
	}

	private: System::Void dataGridViewItems_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->rowIdItems = Convert::ToInt32(this->dataGridViewItems->Rows[e->RowIndex]->Cells[0]->Value);
			
			String^ ParamsQuery = "Select features.name as Parametr, products_features.value as 'Wartoœæ' from features INNER JOIN products_features ON products_features.id_features = features.id_features INNER JOIN items ON products_features.id_items = items.id_items WHERE products_features.id_items='" + this->rowIdItems + "'";
			this->bindTable(ParamsQuery, this->dataGridViewParams);

			String^ ProducersQuery = "Select producers.name as Producenci from producers INNER JOIN items ON items.id_producers = producers.id_producers WHERE items.id_items='" + this->rowIdItems + "'";
			this->bindTable(ProducersQuery, this->dataGridViewProducers);

			String^ query = "Select * FROM items WHERE id_items='" + this->rowIdItems + "'";
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
				this->buttonItemSave->Text = "Zapisz";
				this->labelItemParam->Visible = true;
				this->comboBoxItemParam->Visible = true;
				this->textBoxItemParamVal->Visible = true;
				this->labelItemProducer->Visible = true;
				this->comboBoxItemProducer->Visible = true;
				this->comboBoxItemProducer->Visible = true;
				this->buttonItemParamAdd->Visible = true;
				this->buttonItemProducerAdd->Visible = true;
				this->comboBoxItemParam->Items->Clear();
				this->comboBoxItemProducer->Items->Clear();
				this->comboBoxItemParam->Text = "Dodaj nowy";
				this->comboBoxItemProducer->Text = "Dodaj nowy";
				this->buttonItemClearForm->Enabled = true;
				this->buttonItemParamHelp->Visible = true;
				this->buttonItemParamDelete->Visible = true;
				this->buttonItemParamHelp->Visible = true;
				this->buttonItemProducerDelete->Visible = true;
				this->textBoxItemParamVal->Text = "";
				this->buttonItemProducerHelp->Visible = true;

				String^ ParamsQueryToBox = "Select features.name as Parametry, products_features.value as 'Wartoœæ' from features INNER JOIN products_features ON products_features.id_features = features.id_features INNER JOIN items ON products_features.id_items = items.id_items";
				dbDriver db;
				db.selectOne(ParamsQueryToBox);
				if (db.getStatus())
				{
					while(db.result->Read())
						this->comboBoxItemParam->Items->Add(db.result->GetString(0));

					String^ ProducerQueryToBox = "Select producers.name FROM producers INNER JOIN items ON items.id_producers = producers.id_producers WHERE items.id_items='" + this->rowIdItems + "'";
					dbDriver dbp;
					dbp.selectOne(ProducerQueryToBox);
					if (dbp.getStatus())
					{
						this->comboBoxItemProducer->Text = dbp.result->GetString(0);
						String^ AllProducerQueryToBox = "Select name From producers";
						dbDriver dbpa;
						dbpa.selectOne(AllProducerQueryToBox);
						if (dbpa.getStatus())
						{
							this->comboBoxItemProducer->Items->Add(dbpa.result->GetString(0));
							while (dbpa.result->Read())
								this->comboBoxItemProducer->Items->Add(dbpa.result->GetString(0));
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
		this->textBoxItemParamVal->Text = "";
		String^ query = "SELECT products_features.value FROM products_features INNER JOIN features ON products_features.id_features = features.id_features WHERE products_features.id_items='" + this->rowIdItems +
			"' AND products_features.id_features=(SELECT features.id_features FROM features WHERE features.name='" + this->comboBoxItemParam->Text + "')";
		dbDriver db;
		db.selectOne(query);
		if (db.getStatus())
		{
			this->textBoxItemParamVal->Text = db.result->GetString(0);
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void buttonItemClearForm_Click(System::Object^  sender, System::EventArgs^  e) {
		this->clearItemForm();
	}

	private: Void clearItemForm()
	{
		this->rowIdItems = -1;
		this->labelItemIDVal->Text = "#";
		this->textBoxItemName->Text = "";
		this->textBoxItemModel->Text = "";
		this->labelItemQuantityVal->Text = "";
		this->TextBoxItemPrice->Text = "";
		this->buttonItemDelete->Enabled = false;
		this->buttonItemSave->Text = "Dodaj";
		this->labelItemParam->Visible = false;
		this->comboBoxItemParam->Visible = false;
		this->textBoxItemParamVal->Visible = false;
		this->labelItemProducer->Visible = false;
		this->comboBoxItemProducer->Visible = false;
		this->comboBoxItemProducer->Visible = false;
		this->buttonItemParamAdd->Visible = false;
		this->buttonItemProducerAdd->Visible = false;
		this->comboBoxItemParam->Items->Clear();
		this->comboBoxItemProducer->Items->Clear();
		this->comboBoxItemParam->Text = "Dodaj nowy";
		this->comboBoxItemProducer->Text = "Dodaj nowy";
		this->buttonItemClearForm->Enabled = false;
		this->buttonItemParamHelp->Visible = false;
		this->buttonItemParamDelete->Visible = false;
		this->buttonItemParamHelp->Visible = false;
		this->buttonItemProducerDelete->Visible = false;
		this->buttonItemParamHelp->Visible = false;
	}

	private: System::Void buttonItemSave_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			String^ price = this->TextBoxItemPrice->Text->Replace(",", ".");
			if (this->textBoxItemName->Text->Length < 2) throw 1;
			if (this->textBoxItemName->Text->Length > 255) throw 2;
			if (this->textBoxItemModel->Text->Length < 2) throw 3;
			if (this->textBoxItemModel->Text->Length > 255) throw 4;
			
			if (this->rowIdItems > 0)
			{
				String^ query = "UPDATE items SET name='" + this->textBoxItemName->Text + "', model='" + this->textBoxItemModel->Text + "', price='" + price + "' WHERE id_items='" + this->rowIdItems + "'";
				dbDriver db;
				db.update(query); MessageBox::Show(query);
				if (!db.getStatus())
					MessageBox::Show(db.getError());
				else
					MessageBox::Show("Dane przedmiotu zosta³y zaktualizowane");
				db.closeConnection();
				this->clearItemForm();
			}
			else
			{
				String^ query = "INSERT INTO items(name, model, price, id_producers) VALUES('" + this->textBoxItemName->Text + "','" + this->textBoxItemModel->Text + "','" + price + "', '1')";
				dbDriver db;
				db.insert(query);
				if (!db.getStatus())
					MessageBox::Show(db.getError());
				else
					MessageBox::Show("Przedmiot zosta³ dodany");
				db.closeConnection();
				this->clearItemForm();
			}
			
			String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price AS Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
			this->bindTable(ItemsQuery, this->dataGridViewItems);

			String^ ParamsQuery = "Select name as Parametry from features";
			this->bindTable(ParamsQuery, this->dataGridViewParams);

			String^ ProducersQuery = "Select name as Producenci from producers";
			this->bindTable(ProducersQuery, this->dataGridViewProducers);

		}
		catch (int ex)
		{
			if (ex == 1)
				MessageBox::Show("Nazwa przedmiotu powinna mieæ przynajmniej 2 znaki");
			if (ex == 2)
				MessageBox::Show("Nazwa przedmiotu powinna mieæ najwiêcej 255 znaków");
			if (ex == 3)
				MessageBox::Show("Nazwa modelu powinna mieæ przynajmniej 2 znaki");
			if (ex == 4)
				MessageBox::Show("Nazwa modelu powinna mieæ najwiêcej 255 znaków");
		}	
	}

	private: System::Void buttonItemParamAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (this->comboBoxItemParam->Text->Length < 2) throw 1;
			if (this->comboBoxItemParam->Text->Length > 255) throw 2;
			if (this->textBoxItemParamVal->Text->Length == 0) throw 4;
			if (this->textBoxItemParamVal->Text->Length > 255) throw 5;
			String^ query = "SELECT count(id_features) AS ct, id_features FROM features WHERE name='" + this->comboBoxItemParam->Text + "'";
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

				String^ squery = "SELECT count(id_items) as ct FROM products_features WHERE id_features='" + id_features + "' AND id_items='" + this->rowIdItems + "'";
				dbDriver dbs;
				dbs.selectOne(squery);
				if (!dbs.getStatus()) {
					MessageBox::Show(dbs.getError());
					throw 0;
				}
				if (dbs.result->GetInt32(0) == 1)
				{
					String^ uquery = "UPDATE products_features INNER JOIN features ON products_features.id_features = features.id_features SET products_features.value='" + this->textBoxItemParamVal->Text + "' WHERE products_features.id_features='" + id_features + "' AND products_features.id_items='" + this->rowIdItems + "'";
					dbDriver dbu;
					dbu.update(uquery);
					if (!dbu.getStatus()) {
						MessageBox::Show(dbu.getError());
					}
					else
						MessageBox::Show("Zaktualizowano wartoœæ parametru");
					dbu.closeConnection();
				}
				else if (dbs.result->GetInt32(0) == 0)
				{
					String^ iquery = "INSERT INTO products_features(id_items, id_features, value) VALUES('" + this->rowIdItems + "', '" + id_features + "', '" + this->textBoxItemParamVal->Text + "')";
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
				String^ iquery = "INSERT INTO features(name) VALUES('" + this->comboBoxItemParam->Text + "')";
				dbDriver dbi;
				dbi.insert(iquery);
				if (!dbi.getStatus()) {
					MessageBox::Show(dbi.getError());
					dbi.closeConnection();
				}
				else
				{
					dbi.closeConnection();
					String^ iiquery = "INSERT INTO products_features(id_items, id_features, value) VALUES('" + this->rowIdItems + "', (SELECT id_features FROM features WHERE name='" + this->comboBoxItemParam->Text + "'), '" + this->textBoxItemParamVal->Text + "')";
					dbDriver dbii;
					dbii.insert(iiquery);
					if (!dbii.getStatus())
					{
						MessageBox::Show(dbii.getError());
					}
					else
						MessageBox::Show("Parametr zosta³ dodany");
					dbii.closeConnection();
				}
			}
			else
				throw 3;
		}
		catch (int ex)
		{
			if (ex == 1)
				MessageBox::Show("Nazwa parametru powinna mieæ przynajmniej 2 znaki");
			if (ex == 2)
				MessageBox::Show("Nazwa parametru powinna mieæ najwiêcej 255 znaków");
			if (ex == 3)
				MessageBox::Show("Nazwa parametru jest niepoprawna");
			if (ex == 4)
				MessageBox::Show("Wartoœæ parametru nie mo¿e byæ pusta");
			if (ex == 4)
				MessageBox::Show("D³ugoœæ wartoœci parametru powinna mieæ najwiêcej 255 znaków");
		}
	}

	private: System::Void buttonItemParamDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->textBoxItemParamVal->Text == "")
		{
			if (MessageBox::Show("Czy chcesz na sta³e usun¹æ parametr?\n Zostanie on usuniêty ze wszystkich przedmiotów w magazynie!", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE features, products_features FROM features INNER JOIN products_features ON products_features.id_features = features.id_features WHERE features.name='" + this->comboBoxItemParam->Text + "'";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Parametr zosta³ usuniêty ze wszystkich przedmiotów w magazynie");
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();

			}
		}
		else if(this->textBoxItemParamVal->Text != "")
		{
			if (MessageBox::Show("Czy chcesz na sta³e usun¹æ parametr z przedmiotu?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE FROM products_features WHERE products_features.id_features=(SELECT id_features FROM features WHERE name='" + this->comboBoxItemParam->Text + "')";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Parametr zosta³ usuniêty z przedmiotu");
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
			if (this->comboBoxItemProducer->Text->Length < 2) throw 1;
			if (this->comboBoxItemProducer->Text->Length > 255) throw 2;
			String^ query = "SELECT count(id_producers), id_producers FROM producers WHERE name='" + this->comboBoxItemProducer->Text + "'";
			dbDriver db;
			db.selectOne(query);
			if (!db.getStatus())
			{
				MessageBox::Show(db.getError());
			}

			if (db.result->GetInt32(0) == 1)
			{
				db.closeConnection();
				String^ uquery = "UPDATE items SET id_producers=(SELECT id_producers FROM producers WHERE name='" + this->comboBoxItemProducer->Text + "') WHERE id_items='" + this->rowIdItems + "'";
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
				String^ upquery = "INSERT INTO producers(name) VALUES('" + this->comboBoxItemProducer->Text + "')";
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
					String^ uquery = "UPDATE items SET id_producers=(SELECT id_producers FROM producers WHERE name='" + this->comboBoxItemProducer->Text + "') WHERE id_items='" + this->rowIdItems + "'";
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
				MessageBox::Show("Nazwa producenta powinna mieæ przynajmniej 2 znaki");
			if (ex == 2)
				MessageBox::Show("Nazwa producenta powinna mieæ najwiêcej 255 znaków");
			if (ex == 3)
				MessageBox::Show("Wyst¹pi³ nieznany b³¹d");
		}
	}

	private: System::Void buttonItemProducerDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Czy chcesz na sta³e usun¹æ producenta?\n Zostanie on usuniêty ze wszystkich przedmiotów w magazynie!", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ uquery = "UPDATE items SET id_producers=1 WHERE id_producers=(SELECT id_producers FROM producers WHERE name='" + this->comboBoxItemProducer->Text + "')";
			dbDriver dbu;
			dbu.update(uquery);
			if (dbu.getStatus())
			{
				String^ query = "DELETE FROM producers WHERE name ='" + this->comboBoxItemProducer->Text + "'";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Parametr zosta³ usuniêty ze wszystkich przedmiotów w magazynie");
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
		if (this->userType)
		{
			if (MessageBox::Show("Czy chcesz na sta³e usun¹æ przedmiot?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ query = "DELETE items, products_features FROM items INNER JOIN products_features ON products_features.id_items = items.id_items WHERE items.id_items='" + this->rowIdItems + "'";

				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price from items INNER JOIN producers ON items.id_producers = producers.id_producers";
					this->bindTable(ItemsQuery, this->dataGridViewItems);

					String^ ParamsQuery = "Select name as Parametry from features";
					this->bindTable(ParamsQuery, this->dataGridViewParams);

					String^ ProducersQuery = "Select name as Producenci from producers";
					this->bindTable(ProducersQuery, this->dataGridViewProducers);
					this->clearItemForm();
					MessageBox::Show("Przedmiot zosta³ usuniêty z bazy dancyh");
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();
			}
		}
	}

	private: System::Void buttonItemHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("INSTRUKCJA DODAWANIA PRZEDMIOTU\n"
			+ "1. Uzupe³nij odpowiednio pola i nastêpnie naciœnij przycisk Dodaj\n"
			+ "2. Wyszukaj dodany przedmiot i dodaj mu parametry i producenta");
	}

	private: System::Void buttonItemParamHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("INSTRUKCJA DODAWANIA PARAMETRU\n" 
			+ "Je¿eli chcesz dodaj istniej¹cy parametr wybierz go z rozwijanej listy i obok wpisz jego wartoœæ\n"
			+ "Je¿eli chcesz dodaj nieistniej¹cy parametr wpisz go w pierwszym polu oraz jego wartoœæ w drugim polu\n\n"
			+ "Aby usun¹æ parametr z przedmiotu wybierz go w rozwijanej listy i naciœniæ przycisk X\n"
			+ "Aby usun¹æ parametr ze wszystkich przedmiotów wybierz go z rozwijanej listy nastêpnie usuñ jego wartoœæ i naciœnij przycisk X");
	}

	private: System::Void buttonItemProducerHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("INSTRUKCJA DODAWANIA PRODUCENTA\n"
		+ "Aby dodaæ nowego producenta wpisz jego nazwê a nastêpnie naciœnij przycisk Dodaj\n"
		+ "Aby ustawiæ istniej¹cego producenta wybierz go z rozwijanej listy a nastêpnie naciœnij przycisk Dodaj\n"
		+ "Aby usun¹æ producenta wybierz go z rozwijanej listy a nastêpnie naciœnij przycisk X");
	}

	/* Sales */
	
	private: System::Void buttonSellsShow_Click(System::Object^  sender, System::EventArgs^  e) {
		this->rowIdSales = -1;
		String^ SalesQuery = "SELECT id_sales as Id_sprzedazy, id_employers as Id_sprzedawcy, id_clients as Id_klienta, date as Data, price as Kwota_transakcji, status from sales";
		this->bindTable(SalesQuery, this->dataGridViewSales);

		String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		this->bindTable(ItemsQuery, this->dataGridViewSalesItems);

		String^ ClientsQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(ClientsQuery, this->dataGridViewSalesClients);

		String^ EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(EmployersQuery, this->dataGridViewSalesEmployers);
	}

	private: System::Void buttonSalesSave_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "INSERT INTO sales(id_employers, id_clients, date) VALUES ('" + this->userId + "', (SELECT id_clients FROM clients WHERE name='" + this->comboBoxSellClient->Text + "'), now())";
		dbDriver db;
		db.insert(query);
		if (db.getStatus())
		{
			MessageBox::Show("Transakcja zosta³a dodana przejdŸ do jej konfiguracji");
			String^ SalesQuery = "SELECT id_sales as Id_sprzedazy, id_employers as Id_sprzedawcy, id_clients as Id_klienta, date as Data, price as Kwota_transakcji, status from sales WHERE id_employers='" + this->userId + "' ORDER BY id_sales DESC Limit 1";
			this->bindTable(SalesQuery, this->dataGridViewSales);
			this->dataGridViewSalesClients->DataSource = nullptr;
			this->dataGridViewSalesItems->DataSource = nullptr;
			this->dataGridViewSalesEmployers->DataSource = nullptr;
			this->dataGridViewSalesClients->Rows->Clear();
			this->dataGridViewSalesItems->Rows->Clear();
			this->dataGridViewSalesEmployers->Rows->Clear();
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void dataGridViewSales_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->buttonSalesClearForm->Enabled = true;
			this->maskedTextBoxSellQuantity->Text = "";
			this->rowIdSales = Convert::ToInt32(this->dataGridViewSales->Rows[e->RowIndex]->Cells[0]->Value);
			String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, sales_items.quantity as Ilosc, items.price * sales_items.quantity as Cena from items INNER JOIN sales_items ON sales_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN sales on sales.id_sales = sales_items.id_sales WHERE sales_items.id_sales='" + this->rowIdSales + "'";
			this->bindTable(ItemsQuery, this->dataGridViewSalesItems);

			String^ ClientsQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE clients.id_clients='" + this->dataGridViewSales->Rows[e->RowIndex]->Cells[2]->Value + "' AND common_data.status = 1";
			this->bindTable(ClientsQuery, this->dataGridViewSalesClients);

			String^ EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email, common_data.phone as NrTelefonu as NrTelefonu from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE employers.id_employers = '" + this->dataGridViewSales->Rows[e->RowIndex]->Cells[1]->Value + "' AND common_data.status = 1";
			this->bindTable(EmployersQuery, this->dataGridViewSalesEmployers);

			if (Convert::ToInt32(this->dataGridViewSales->Rows[e->RowIndex]->Cells[5]->Value) == 1)
			{
				this->labelSellIDVal->Text = this->dataGridViewSales->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				this->comboBoxSellClient->Text = this->dataGridViewSalesClients->Rows[0]->Cells[1]->Value->ToString();
				this->comboBoxSellClient->Enabled = false;
				this->buttonSalesDelete->Enabled = true;

			}
			else if (Convert::ToInt32(dataGridViewSales->Rows[e->RowIndex]->Cells[5]->Value) == 0)
			{
				this->labelSellIDVal->Text = this->dataGridViewSales->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				this->comboBoxSellClient->Text = this->dataGridViewSalesClients->Rows[0]->Cells[1]->Value->ToString();
				this->labelSellItem->Enabled = true;
				this->comboBoxSellItem->Enabled = true;
				this->labelSellQuantity->Enabled = true;
				this->maskedTextBoxSellQuantity->Enabled = true;
				this->buttonSalesAddItem->Enabled = true;
				this->buttonSalesAddItem->Enabled = true;
				this->comboBoxSellClient->Enabled = false;
				this->buttonSalesAddItem->Enabled = true;
				this->buttonSalesClose->Enabled = true;
				this->buttonSalesSave->Enabled = false;
				this->maskedTextBoxSellQuantity->Enabled = true;
				this->buttonSalesDelete->Enabled = true;
				this->comboBoxSellItem->Enabled = true;
				
				String^ query = "Select concat(name, ' ', model) FROM items";
				dbDriver db;
				db.selectOne(query);
				if (db.getStatus())
				{
					this->comboBoxSellItem->Items->Clear();
					this->comboBoxSellItem->Items->Add(db.result->GetString(0));
					while (db.result->Read())
						this->comboBoxSellItem->Items->Add(db.result->GetString(0));
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();
			}
		}
	}

	private: System::Void comboBoxSellClient_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->buttonSalesSave->Enabled = true;
	}

	private: System::Void buttonSalesAddItem_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (Convert::ToInt32(this->maskedTextBoxSellQuantity->Text) <= 0) throw 1;
			if (this->comboBoxSellItem->Text == "") throw 2;

			String^ squery = "SELECT count(sales_items.id_sales), items.id_items, sales_items.quantity FROM sales_items inner join items on sales_items.id_items = items.id_items WHERE concat(items.name, ' ', items.model) = '" + this->comboBoxSellItem->Text + "' AND sales_items.id_sales='" + this->rowIdSales + "'";
			dbDriver dbs;
			dbs.selectOne(squery);
			String^ qry = "SELECT quantity from items where concat(name, ' ', model) = '" + this->comboBoxSellItem->Text + "'";
			dbDriver dbq;
			dbq.selectOne(qry);
			if (dbs.getStatus())
			{
				if (dbq.result->GetInt32(0) < Convert::ToInt32(this->maskedTextBoxSellQuantity->Text)) throw 3;
				if (dbs.result->GetInt32(0) == 1)
				{
					String^ query = "UPDATE sales_items SET quantity = '" + this->maskedTextBoxSellQuantity->Text + "' WHERE id_sales = '" + this->rowIdSales + "' AND id_items='" + dbs.result->GetInt32(1) + "'";
					dbDriver db;
					db.update(query);
					if (db.getStatus())
					{
						String^ qquery = "UPDATE items SET quantity=(quantity + ('" + dbs.result->GetInt32(2) + "'-'" + this->maskedTextBoxSellQuantity->Text + "')) WHERE id_items='" + dbs.result->GetInt32(1) + "'";
						dbDriver ddb;
						ddb.update(qquery);
						if (ddb.getStatus())
						{
							MessageBox::Show("Przedmiot zosta³ zaktualizowany");
							String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, sales_items.quantity as Ilosc, items.price * sales_items.quantity as Cena from items INNER JOIN sales_items ON sales_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN sales on sales.id_sales = sales_items.id_sales WHERE sales_items.id_sales='" + this->rowIdSales + "'";
							this->bindTable(ItemsQuery, this->dataGridViewSalesItems);
						}
						else
							MessageBox::Show(ddb.getError());
						ddb.closeConnection();
					}
					else
						MessageBox::Show(db.getError());
					db.closeConnection();
				}
				else if (dbs.result->GetInt32(0) == 0)
				{
					String^ query = "INSERT INTO sales_items(id_sales, id_items, quantity) VALUES('" + this->rowIdSales + "', (SELECT id_items from items WHERE concat(name, ' ', model) = '" + this->comboBoxSellItem->Text + "'), '" + this->maskedTextBoxSellQuantity->Text + "')";
					dbDriver db;
					db.insert(query);
					if (db.getStatus())
					{
						String^ qquery = "UPDATE items SET quantity=quantity - '" + this->maskedTextBoxSellQuantity->Text + "' WHERE concat(name, ' ', model) = '" + this->comboBoxSellItem->Text + "'";
						dbDriver ddb;
						ddb.update(qquery);
						if (ddb.getStatus())
						{
							MessageBox::Show("Przedmiot dodany");
							String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, sales_items.quantity as Ilosc, items.price * sales_items.quantity as Cena from items INNER JOIN sales_items ON sales_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN sales on sales.id_sales = sales_items.id_sales WHERE sales_items.id_sales='" + this->rowIdSales + "'";
							this->bindTable(ItemsQuery, this->dataGridViewSalesItems);
						}
						else
							MessageBox::Show(ddb.getError());
						ddb.closeConnection();
					}
					else
						MessageBox::Show(db.getError());
					db.closeConnection();
				}		
			}
			else
			{
				MessageBox::Show(dbs.getError());
				dbs.closeConnection();
			}
		}
		catch (int ex)
		{
			if (ex == 1)
				MessageBox::Show("Iloœæ sprzedawanego przedmiotu musi byæ wiêksza od 0");
			if (ex == 2)
				MessageBox::Show("Wybierz przedmiot który chcesz sprzedaæ");
			if (ex == 3)
				MessageBox::Show("Nie posiadasz tyle sztuk przedmiotu w magazynie");
		}
	}

	private: System::Void comboBoxSellItem_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->buttonSalesDeleteItem->Enabled = true;
		String^ query = "SELECT count(sales_items.id_sales), sales_items.quantity FROM sales_items inner join items on items.id_items = sales_items.id_items WHERE concat(items.name, ' ', items.model) = '" + this->comboBoxSellItem->Text + "'";
		dbDriver db;
		db.selectOne(query);
		if (db.getStatus())
		{
			if (db.result->GetInt32(0) == 1)
			{
				this->maskedTextBoxSellQuantity->Text = db.result->GetString(1);
				this->buttonSalesDeleteItem->Enabled = true;
			}
		}
		else
		{
			MessageBox::Show(db.getError());
			db.closeConnection();
		}		
	}

	private: System::Void buttonSalesDeleteItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Czy chcesz usun¹æ przedmiot z transakcji?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ qquery = "SELECT sales_items.quantity FROM sales_items INNER JOIN items on items.id_items = sales_items.id_items WHERE concat(items.name, ' ', items.model) = '" + this->comboBoxSellItem->Text + "' and sales_items.id_sales = '" + this->rowIdSales + "'";
			dbDriver dbqq;
			dbqq.selectOne(qquery);
			if (dbqq.getStatus())
			{
				String^ query = "DELETE sales_items FROM sales_items INNER JOIN items on items.id_items = sales_items.id_items WHERE sales_items.id_sales = '" + this->rowIdSales + "' and sales_items.id_items=(SELECT id_items from items where concat(items.name, ' ', items.model) = '" + this->comboBoxSellItem->Text + "')";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Przedmiot zosta³ usuniêty z transakcji");
					String^ qquery = "UPDATE items SET quantity = quantity + '" + dbqq.result->GetString(0) + "' WHERE concat(name, ' ', model) = '" + this->comboBoxSellItem->Text + "'";
					dbDriver dbq;
					dbq.update(qquery);
					if (dbq.getStatus())
					{
						String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, sales_items.quantity as Ilosc, items.price * sales_items.quantity as Cena from items INNER JOIN sales_items ON sales_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN sales on sales.id_sales = sales_items.id_sales WHERE sales_items.id_sales='" + rowIdSales + "'";
						this->bindTable(ItemsQuery, this->dataGridViewSalesItems);
					}
					else
						MessageBox::Show(dbq.getError());
					dbq.closeConnection();
				}
				else
				{
					MessageBox::Show(db.getError());
					db.closeConnection();
				}
			}
			else
				MessageBox::Show(dbqq.getError());
			dbqq.closeConnection();
		}
	}

	private: System::Void dataGridViewSalesItems_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (this->rowIdSales >= 0)
		{
			this->comboBoxSellItem->Text = this->dataGridViewSalesItems->Rows[e->RowIndex]->Cells[1]->Value->ToString() + " " + this->dataGridViewSalesItems->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			this->maskedTextBoxSellQuantity->Text = this->dataGridViewSalesItems->Rows[e->RowIndex]->Cells[4]->Value->ToString();
		}
		else
		{
			String^ SalesQuery = "SELECT sales.id_sales as Id_sprzedazy, sales.id_employers as Id_sprzedawcy, sales.id_clients as Id_klienta, sales.date as Data, sales.price as Kwota_transakcji, sales.status from sales INNER JOIN sales_items ON sales.id_sales = sales_items.id_sales WHERE sales_items.id_items = '" + dataGridViewSalesItems->Rows[e->RowIndex]->Cells[0]->Value->ToString() + "'";
			this->bindTable(SalesQuery, this->dataGridViewSales);
		}
	}
	
	private: System::Void buttonSalesClose_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "UPDATE sales SET status = 1, price=(SELECT SUM(sales_items.quantity*items.price) from sales_items INNER JOIN items ON sales_items.id_items = items.id_items WHERE sales_items.id_sales = '" + this->rowIdSales + "')  WHERE id_sales = '" + this->rowIdSales + "'";
		dbDriver db;
		db.update(query);
		if (db.getStatus())
		{
			MessageBox::Show("Transakcja zosta³a zamkniêta");
			this->labelSellItem->Enabled = false;
			this->comboBoxSellItem->Enabled = false;
			this->labelSellQuantity->Enabled = false;
			this->maskedTextBoxSellQuantity->Enabled = false;
			this->buttonSalesAddItem->Enabled = false;
			this->buttonSalesDeleteItem->Enabled = false;
			this->buttonSalesClose->Enabled = false;
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void buttonSalesDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "Select status, count(sales_items.id_sales) from sales INNER JOIN sales_items ON sales.id_sales = sales_items.id_sales where sales.id_sales='" + this->rowIdSales + "'";
		dbDriver db;
		db.selectOne(query);
		if (db.getStatus())
		{
			if (db.result->GetInt32(0) == 1)
			{
				if (MessageBox::Show("Czy chcesz usun¹æ transakcje?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					String^ dquery;
					if(db.result->GetInt32(1) > 0)
						dquery = "DELETE sales, sales_items FROM sales_items INNER JOIN sales ON sales_items.id_sales = sales.id_sales WHERE sales.id_sales = '" + this->rowIdSales + "'";
					else if(db.result->GetInt32(1) == 0)
						dquery = "DELETE FROM sales WHERE id_sales = '" + this->rowIdSales + "'";
					dbDriver dbd;
					dbd.deleteFromSql(dquery);
					if (dbd.getStatus())
					{
						MessageBox::Show("Transakcja zosta³a usuniêta");
						String^ SalesQuery = "SELECT id_sales as Id_sprzedazy, id_employers as Id_sprzedawcy, id_clients as Id_klienta, date as Data, price as Kwota_transakcji, status from sales";
						this->bindTable(SalesQuery, this->dataGridViewSales);

						String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
						this->bindTable(ItemsQuery, this->dataGridViewSalesItems);

						String^ ClientsQuery = "Select clients.id_clients as id , clients.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from clients INNER JOIN common_data ON clients.cdata = common_data.id_common_data WHERE common_data.status = 1";
						this->bindTable(ClientsQuery, this->dataGridViewSalesClients);

						String^ EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
						this->bindTable(EmployersQuery, this->dataGridViewSalesEmployers);
						this->clearFormSales();
					}
					else
						MessageBox::Show(dbd.getError());
					dbd.closeConnection();
				}
			}
			else
				MessageBox::Show("Musisz zamkn¹æ transakcje przed usuniêciem");
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void buttonSalesClearForm_Click(System::Object^  sender, System::EventArgs^  e) {
		this->clearFormSales();
	}

	private: Void clearFormSales(){
		this->labelSellIDVal->Text = "#";
		this->comboBoxSellClient->Enabled = true;
		this->rowIdSales = -1;
		this->maskedTextBoxSellQuantity->Text = "";
		this->buttonSalesSave->Enabled = true;
		this->comboBoxSellItem->Items->Clear();
		this->comboBoxSellItem->Enabled = false;
		this->maskedTextBoxSellQuantity->Enabled = false;
		this->buttonSalesAddItem->Enabled = false;
		this->buttonSalesDeleteItem->Enabled = false;
		this->buttonSalesClose->Enabled = false;
		this->buttonSalesDelete->Enabled = false;
		this->buttonSalesClearForm->Enabled = false;
	}

	private: System::Void dataGridViewSalesClients_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (this->rowIdSales < 0)
		{
			String^ Query = "SELECT sales.id_sales as Id_sprzedazy, sales.id_employers as Id_sprzedawcy, sales.id_clients as Id_klienta, sales.date as Data, sales.price as Kwota_transakcji, sales.status from sales WHERE sales.id_clients = '" + this->dataGridViewSalesClients->Rows[e->RowIndex]->Cells[0]->Value->ToString() + "'";
			this->bindTable(Query, this->dataGridViewSales);
		}
	}

	private: System::Void dataGridViewSalesEmployers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		String^ Query = "SELECT sales.id_sales as Id_sprzedazy, sales.id_employers as Id_sprzedawcy, sales.id_clients as Id_klienta, sales.date as Data, sales.price as Kwota_transakcji, sales.status from sales WHERE sales.id_employers = '" + this->dataGridViewSalesEmployers->Rows[e->RowIndex]->Cells[0]->Value->ToString() + "'";
		this->bindTable(Query, this->dataGridViewSales);
	}

	private: System::Void buttonSalesHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(
			"Sprzeda¿ - Instrukcja obs³ugi\n"
			+ "Wybierz klienta z listy a nastêpnie naciœnij Dodaj transakcje\n"
			+ "Po dodaniu transakcji mo¿esz dodawaæ do niej przedmioty i okreœlaæ ich iloœæ oraz je usuwaæ\n"
			+ "Aby usun¹æ ca³¹ transakcje nale¿y j¹ wczeœniej zamkn¹æ\n"
			+ "Po zakmniêciu transakcji nie ma mo¿liwoœæ dodawania do niej przedmiotów\n"
		);
	}

	/* Deliveries */

	private: System::Void buttonDeliveryShow_Click(System::Object^  sender, System::EventArgs^  e) {
		this->rowIdDelivery = -1;
		String^ DeliveryQuery = "SELECT id_provides as Id_sprzedazy, id_employers as Id_sprzedawcy, id_providers as Id_dostawcy, date as Data, price as Kwota_transakcji, status from provides";
		this->bindTable(DeliveryQuery, this->dataGridViewDelivery);

		String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
		this->bindTable(ItemsQuery, this->dataGridViewDeliveryItems);

		String^ ProvidersQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data  WHERE common_data.status = 1";
		this->bindTable(ProvidersQuery, this->dataGridViewDeliveryProviders);

		String^ EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE common_data.status = 1";
		this->bindTable(EmployersQuery, this->dataGridViewDeliveryEmployers);
	}

	private: System::Void buttonDeliverySave_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "INSERT INTO provides(id_employers, id_providers, date) VALUES ('" + this->userId + "', (SELECT id_providers FROM providers WHERE name='" + this->comboBoxDeliveryProvider->Text + "'), now())";
		dbDriver db;
		db.insert(query);
		if (db.getStatus())
		{
			MessageBox::Show("Transakcja zosta³a dodana przejdŸ do jej konfiguracji");
			String^ DeliveryQuery = "SELECT id_provides as Id_dostawy, id_employers as Id_sprzedawcy, id_providers as Id_dostawcy, date as Data, price as Kwota_transakcji, status from provides WHERE id_employers='" + this->userId + "' ORDER BY id_provides DESC Limit 1";
			this->bindTable(DeliveryQuery, dataGridViewDelivery);
			this->dataGridViewDeliveryProviders->DataSource = nullptr;
			this->dataGridViewDeliveryItems->DataSource = nullptr;
			this->dataGridViewDeliveryEmployers->DataSource = nullptr;
			this->dataGridViewDeliveryProviders->Rows->Clear();
			this->dataGridViewDeliveryItems->Rows->Clear();
			this->dataGridViewDeliveryEmployers->Rows->Clear();
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void dataGridViewDelivery_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (Convert::ToInt32(e->RowIndex) >= 0)
		{
			this->buttonDeliveryClearForm->Enabled = true;
			this->maskedTextBoxDeliveryQuantity->Text = "";
			this->rowIdDelivery = Convert::ToInt32(this->dataGridViewDelivery->Rows[e->RowIndex]->Cells[0]->Value);
			String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, provides_items.quantity as Ilosc, items.price * provides_items.quantity as Cena from items INNER JOIN provides_items ON provides_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN provides on provides.id_provides = provides_items.id_provides WHERE provides_items.id_provides='" + rowIdDelivery + "'";
			this->bindTable(ItemsQuery, this->dataGridViewDeliveryItems);

			String^ ProvidersQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data WHERE providers.id_providers='" + this->dataGridViewDelivery->Rows[e->RowIndex]->Cells[2]->Value + "' AND common_data.status = 1";
			this->bindTable(ProvidersQuery, this->dataGridViewDeliveryProviders);

			String^ EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email, common_data.phone as NrTelefonu as NrTelefonu from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data WHERE employers.id_employers = '" + this->dataGridViewDelivery->Rows[e->RowIndex]->Cells[1]->Value + "' AND common_data.status = 1";
			this->bindTable(EmployersQuery, this->dataGridViewDeliveryEmployers);

			if (Convert::ToInt32(this->dataGridViewDelivery->Rows[e->RowIndex]->Cells[5]->Value) == 1)
			{
				this->labelDeliveryIDVal->Text = this->dataGridViewDelivery->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				this->comboBoxDeliveryProvider->Text = this->dataGridViewDeliveryProviders->Rows[0]->Cells[1]->Value->ToString();
				this->comboBoxDeliveryProvider->Enabled = false;
				this->buttonDeliveryDelete->Enabled = true;

			}
			else if (Convert::ToInt32(dataGridViewDelivery->Rows[e->RowIndex]->Cells[5]->Value) == 0)
			{
				this->labelDeliveryIDVal->Text = this->dataGridViewDelivery->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				this->comboBoxDeliveryProvider->Text = this->dataGridViewDeliveryProviders->Rows[0]->Cells[1]->Value->ToString();
				this->comboBoxDeliveryItem->Enabled = true;
				this->maskedTextBoxDeliveryQuantity->Enabled = true;
				this->buttonDeliveryAddItem->Enabled = true;
				this->buttonDeliveryAddItem->Enabled = true;
				this->comboBoxDeliveryProvider->Enabled = false;
				this->buttonDeliveryAddItem->Enabled = true;
				this->buttonDeliveryClose->Enabled = true;
				this->buttonDeliverySave->Enabled = false;
				this->maskedTextBoxDeliveryQuantity->Enabled = true;
				this->buttonDeliveryDelete->Enabled = true;
				this->comboBoxDeliveryItem->Enabled = true;

				String^ query = "Select concat(name, ' ', model) FROM items";
				dbDriver db;
				db.selectOne(query);
				if (db.getStatus())
				{
					this->comboBoxDeliveryItem->Items->Clear();
					this->comboBoxDeliveryItem->Items->Add(db.result->GetString(0));
					while (db.result->Read())
						this->comboBoxDeliveryItem->Items->Add(db.result->GetString(0));
				}
				else
					MessageBox::Show(db.getError());
				db.closeConnection();
			}
		}
	}

	private: System::Void comboBoxDeliveryProvider_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->buttonDeliverySave->Enabled = true;
	}

	private: System::Void buttonDeliveryAddItem_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (Convert::ToInt32(this->maskedTextBoxDeliveryQuantity->Text) <= 0) throw 1;
			if (this->comboBoxDeliveryItem->Text == "") throw 2;

			String^ squery = "SELECT count(provides_items.id_provides), provides_items.id_items, provides_items.quantity FROM provides_items inner join items on provides_items.id_items = items.id_items WHERE concat(items.name, ' ', items.model) = '" + this->comboBoxDeliveryItem->Text + "'";
			dbDriver dbs;
			dbs.selectOne(squery);
			if (dbs.getStatus())
			{
				if (dbs.result->GetInt32(0) == 1)
				{
					String^ query = "UPDATE provides_items SET quantity = '" + this->maskedTextBoxDeliveryQuantity->Text + "' WHERE id_provides = '" + this->rowIdDelivery + "' AND id_items='" + dbs.result->GetInt32(1) + "'";
					dbDriver db;
					db.update(query);
					if (db.getStatus())
					{
						String^ qquery;
						if (Convert::ToInt32(this->maskedTextBoxDeliveryQuantity->Text) >= dbs.result->GetInt32(2))
						{
							qquery = "UPDATE items SET quantity=(quantity + ('" + this->maskedTextBoxDeliveryQuantity->Text + "'-'" + dbs.result->GetInt32(2) + "')) WHERE id_items='" + dbs.result->GetInt32(1) + "'";
						}
						else if (Convert::ToInt32(this->maskedTextBoxDeliveryQuantity->Text) < dbs.result->GetInt32(2))
						{
							qquery = "UPDATE items SET quantity=(quantity - ('" + dbs.result->GetInt32(2) + "'-'" + this->maskedTextBoxDeliveryQuantity->Text + "')) WHERE id_items='" + dbs.result->GetInt32(1) + "'";
						}

						dbDriver ddb;
						ddb.update(qquery);
						if (ddb.getStatus())
						{
							MessageBox::Show("Przedmiot zosta³ zaktualizowany");
							String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, provides_items.quantity as Ilosc, items.price * provides_items.quantity as Cena from items INNER JOIN provides_items ON provides_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN provides on provides.id_provides = provides_items.id_provides WHERE provides_items.id_provides ='" + this->rowIdDelivery + "'";
							this->bindTable(ItemsQuery, this->dataGridViewDeliveryItems);
						}
						else
							MessageBox::Show(ddb.getError());
						ddb.closeConnection();
					}
					else
						MessageBox::Show(db.getError());
					db.closeConnection();
				}
				else if (dbs.result->GetInt32(0) == 0)
				{
					String^ query = "INSERT INTO provides_items(id_provides, id_items, quantity) VALUES('" + this->rowIdDelivery + "', (SELECT id_items from items WHERE concat(name, ' ', model) = '" + this->comboBoxDeliveryItem->Text + "'), '" + this->maskedTextBoxDeliveryQuantity->Text + "')";
					dbDriver db;
					db.insert(query);
					if (db.getStatus())
					{
						String^ qquery = "UPDATE items SET quantity=quantity + '" + this->maskedTextBoxDeliveryQuantity->Text + "' WHERE concat(name, ' ', model) = '" + this->comboBoxDeliveryItem->Text + "'";
						dbDriver ddb;
						ddb.update(qquery);
						if (ddb.getStatus())
						{
							MessageBox::Show("Przedmiot dodany");
							String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, provides_items.quantity as Ilosc, items.price * provides_items.quantity as Cena from items INNER JOIN provides_items ON provides_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN provides on provides.id_provides = provides_items.id_provides WHERE provides_items.id_provides='" + this->rowIdDelivery + "'";
							this->bindTable(ItemsQuery, this->dataGridViewDeliveryItems);
						}
						else
							MessageBox::Show(ddb.getError());
						ddb.closeConnection();
					}
					else
						MessageBox::Show(db.getError());
					db.closeConnection();
				}
			}
			else
			{
				MessageBox::Show(dbs.getError());
				dbs.closeConnection();
			}
		}
		catch (int ex)
		{
			if (ex == 1)
				MessageBox::Show("Iloœæ dostarczonego przedmiotu musi byæ wiêksza od 0");
			if (ex == 2)
				MessageBox::Show("Wybierz przedmiot który jest dostarczony");
		}
	}

	private: System::Void comboBoxDeliveryItem_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		this->buttonDeliveryDeleteItem->Enabled = true;
		String^ query = "SELECT count(provides_items.id_provides), provides_items.quantity FROM provides_items inner join items on items.id_items = provides_items.id_items WHERE concat(items.name, ' ', items.model) = '" + this->comboBoxDeliveryItem->Text + "'";
		dbDriver db;
		db.selectOne(query);
		if (db.getStatus())
		{
			if (db.result->GetInt32(0) == 1)
			{
				this->maskedTextBoxDeliveryQuantity->Text = db.result->GetString(1);
				this->buttonDeliveryDeleteItem->Enabled = true;
			}
		}
		else
		{
			MessageBox::Show(db.getError());
			db.closeConnection();
		}
	}

	private: System::Void buttonDeliveryDeleteItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Czy chcesz usun¹æ przedmiot z transakcji?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ qquery = "SELECT provides_items.quantity FROM provides_items INNER JOIN items on items.id_items = provides_items.id_items WHERE concat(items.name, ' ', items.model) = '" + this->comboBoxDeliveryItem->Text + "' and provides_items.id_provides= '" + this->rowIdDelivery + "'";
			dbDriver dbqq;
			dbqq.selectOne(qquery);
			if (dbqq.getStatus())
			{
				String^ query = "DELETE provides_items FROM provides_items INNER JOIN items on items.id_items = provides_items.id_items WHERE provides_items.id_provides = '" + this->rowIdDelivery + "' and provides_items.id_items=(SELECT id_items from items where concat(items.name, ' ', items.model) = '" + this->comboBoxDeliveryItem->Text + "')";
				dbDriver db;
				db.deleteFromSql(query);
				if (db.getStatus())
				{
					MessageBox::Show("Przedmiot zosta³ usuniêty z transakcji");
					String^ qquery = "UPDATE items SET quantity = quantity - '" + dbqq.result->GetString(0) + "' WHERE concat(name, ' ', model) = '" + this->comboBoxDeliveryItem->Text + "'";
					dbDriver dbq;
					dbq.update(qquery);
					if (dbq.getStatus())
					{
						String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, provides_items.quantity as Ilosc, items.price * provides_items.quantity as Cena from items INNER JOIN provides_items ON provides_items.id_items = items.id_items INNER JOIN producers ON producers.id_producers = items.id_producers INNER JOIN provides on provides.id_provides = provides_items.id_provides WHERE provides_items.id_provides ='" + this->rowIdDelivery + "'";
						this->bindTable(ItemsQuery, this->dataGridViewDeliveryItems);
					}
					else
						MessageBox::Show(dbq.getError());
					dbq.closeConnection();
				}
				else
				{
					MessageBox::Show(db.getError());
					db.closeConnection();
				}
			}
			else
				MessageBox::Show(dbqq.getError());
			dbqq.closeConnection();
		}
	}

	private: System::Void dataGridViewDeliveryItems_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (this->rowIdDelivery >= 0)
		{
			this->comboBoxDeliveryItem->Text = this->dataGridViewDeliveryItems->Rows[e->RowIndex]->Cells[1]->Value->ToString() + " " + this->dataGridViewDeliveryItems->Rows[e->RowIndex]->Cells[2]->Value->ToString();
			this->maskedTextBoxDeliveryQuantity->Text = this->dataGridViewDeliveryItems->Rows[e->RowIndex]->Cells[4]->Value->ToString();
		}
		else
		{
			String^ DeliveryQuery = "SELECT provides.id_provides as Id_sprzedazy, provides.id_employers as Id_sprzedawcy, provides.id_providers as Id_klienta, provides.date as Data, provides.price as Kwota_transakcji, provides.status from provides INNER JOIN provides_items ON provides.id_provides= provides_items.id_provides WHERE provides_items.id_items = '" + this->dataGridViewDeliveryItems->Rows[e->RowIndex]->Cells[0]->Value->ToString() + "'";
			this->bindTable(DeliveryQuery, this->dataGridViewDelivery);
		}
	}

	private: System::Void buttonDeliveryClose_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "UPDATE provides SET status = 1, price=(SELECT SUM(provides_items.quantity*items.price) from provides_items INNER JOIN items ON provides_items.id_items = items.id_items WHERE provides_items.id_provides = '" + this->rowIdDelivery + "')  WHERE id_provides = '" + this->rowIdDelivery + "'";
		dbDriver db;
		db.update(query);
		if (db.getStatus())
		{
			MessageBox::Show("Transakcja zosta³a zamkniêta");
			this->comboBoxDeliveryItem->Enabled = false;
			this->maskedTextBoxDeliveryQuantity->Enabled = false;
			this->buttonDeliveryAddItem->Enabled = false;
			this->buttonDeliveryDeleteItem->Enabled = false;
			this->buttonDeliveryClose->Enabled = false;
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void buttonDeliveryDelete_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ query = "Select status, count(provides_items.id_provides) from provides INNER JOIN provides_items ON provides.id_provides = provides_items.id_provides where provides.id_provides='" + this->rowIdDelivery + "'";
		dbDriver db;
		db.selectOne(query);
		if (db.getStatus())
		{
			if (db.result->GetInt32(0) == 1)
			{
				if (MessageBox::Show("Czy chcesz usun¹æ transakcje?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					String^ dquery;
					if (db.result->GetInt32(1) > 0)
						dquery = "DELETE provides, provides_items FROM provides_items INNER JOIN provides ON provides_items.id_provides = provides.id_provides WHERE provides.id_provides = '" + this->rowIdDelivery + "'";
					else if (db.result->GetInt32(1) == 0)
						dquery = "DELETE FROM provides WHERE id_provides = '" + this->rowIdDelivery + "'";
					dbDriver dbd;
					dbd.deleteFromSql(dquery);
					if (dbd.getStatus())
					{
						MessageBox::Show("Transakcja zosta³a usuniêta");
						String^ DeliveryQuery = "SELECT id_provides as Id_dostawy, id_employers as Id_sprzedawcy, id_providers as Id_klienta, date as Data, price as Kwota_transakcji, status from provides";
						this->bindTable(DeliveryQuery, this->dataGridViewDelivery);

						String^ ItemsQuery = "Select items.id_items as id , items.name as Nazwa, items.model, producers.name as Producent, items.quantity as Ilosc, items.price as Cena from items INNER JOIN producers ON items.id_producers = producers.id_producers";
						this->bindTable(ItemsQuery, this->dataGridViewDeliveryItems);

						String^ ProvidersQuery = "Select providers.id_providers as id , providers.name as Nazwa, common_data.email, common_data.phone as NrTelefonu from providers INNER JOIN common_data ON providers.cdata = common_data.id_common_data";
						this->bindTable(ProvidersQuery, this->dataGridViewDeliveryProviders);

						String^ EmployersQuery = "Select employers.id_employers as id , employers.login, employers.name as Imie, employers.surname as Nazwisko, common_data.email from employers INNER JOIN common_data ON employers.cdata = common_data.id_common_data";
						bindTable(EmployersQuery, this->dataGridViewDeliveryEmployers);
						this->clearFormDelivery();
					}
					else
						MessageBox::Show(dbd.getError());
					dbd.closeConnection();
				}
			}
			else
				MessageBox::Show("Musisz zamkn¹æ transakcje przed usuniêciem");
		}
		else
			MessageBox::Show(db.getError());
		db.closeConnection();
	}

	private: System::Void buttonDeliveryClearForm_Click(System::Object^  sender, System::EventArgs^  e) {
		this->clearFormDelivery();
	}

	private: Void clearFormDelivery() {
		this->labelDeliveryIDVal->Text = "#";
		this->comboBoxDeliveryProvider->Enabled = true;
		this->rowIdDelivery = -1;
		this->maskedTextBoxDeliveryQuantity->Text = "";
		this->buttonDeliverySave->Enabled = true;
		this->comboBoxDeliveryItem->Items->Clear();
		this->comboBoxDeliveryItem->Enabled = false;
		this->maskedTextBoxDeliveryQuantity->Enabled = false;
		this->buttonDeliveryAddItem->Enabled = false;
		this->buttonDeliveryDeleteItem->Enabled = false;
		this->buttonDeliveryClose->Enabled = false;
		this->buttonDeliveryDelete->Enabled = false;
		this->buttonDeliveryClearForm->Enabled = false;
	}
	
	private: System::Void dataGridViewDeliveryProviders_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (this->rowIdDelivery < 0)
		{
			String^ Query = "SELECT provides.id_provides as Id_sprzedazy, provides.id_employers as Id_sprzedawcy, provides.id_providers as Id_dostawcy, provides.date as Data, provides.price as Kwota_transakcji, provides.status from provides WHERE provides.id_providers = '" + this->dataGridViewDeliveryProviders->Rows[e->RowIndex]->Cells[0]->Value->ToString() + "'";
			this->bindTable(Query, this->dataGridViewDelivery);
		}
	}

	private: System::Void dataGridViewDeliveryEmployers_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (this->rowIdDelivery < 0)
		{
			String^ Query = "SELECT provides.id_provides as Id_sprzedazy, provides.id_employers as Id_sprzedawcy, provides.id_providers as Id_dostawcy, provides.date as Data, provides.price as Kwota_transakcji, provides.status from provides WHERE provides.id_employers = '" + this->dataGridViewDeliveryEmployers->Rows[e->RowIndex]->Cells[0]->Value->ToString() + "'";
			this->bindTable(Query, this->dataGridViewDelivery);
		}
	}

	private: System::Void buttonDeliveryHelp_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show(
			"Dostawa - Instrukcja obs³ugi\n"
			+ "Wybierz dostawce z listy a nastêpnie naciœnij Dodaj transakcje\n"
			+ "Po dodaniu transakcji mo¿esz dodawaæ do niej przedmioty i okreœlaæ ich iloœæ oraz je usuwaæ\n"
			+ "Aby usun¹æ ca³¹ transakcje nale¿y j¹ wczeœniej zamkn¹æ\n"
			+ "Po zakmniêciu transakcji nie ma mo¿liwoœæ dodawania do niej przedmiotów\n"
		);
	}
};
}
