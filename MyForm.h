#pragma once
#include<iostream>
#include<string>
#include"ContactsBook.h"
#include"Contact.h"
#include"Address.h"
#include"list.h"
#include"HistoryObject.h"
#include"Group.h"
#include<cstdlib>
#include<ctime>

namespace Bomb {
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

		ContactsBook* Contact_book;

		std::string *useful;
		bool side;
		bool group_slide;

	private: System::Windows::Forms::Panel^ side_bar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ list_side_bar;
	private: System::Windows::Forms::Button^ Update_button;
	private: System::Windows::Forms::Button^ menu_button;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ delete_contact_button;
	private: System::Windows::Forms::Panel^ group_container;
	private: System::Windows::Forms::Button^ show_groups_button;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::TextBox^ Search_tbox;
	private: System::Windows::Forms::Label^ last_name_label;
	private: System::Windows::Forms::Label^ first_name_label;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ City_label;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ Street_label;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ House_label;
	private: System::Windows::Forms::Label^ mail_label;
	private: System::Windows::Forms::Label^ p_label;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ Phone_label;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ View_details_ok_button;
	private: System::Windows::Forms::Label^ Country_label;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ update_contact_pane;
	private: System::Windows::Forms::TextBox^ update_city;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ update_country;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ update_done_button;
	private: System::Windows::Forms::TextBox^ update_street;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ update_phone;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ update_last_name;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ update_house;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ update_email;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ update_first_name;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Timer^ timer5;
	private: System::Windows::Forms::Panel^ search_history_panel;
	private: System::Windows::Forms::ListView^ searched_history_list;


	private: System::Windows::Forms::ColumnHeader^ strings_column;
	private: System::Windows::Forms::ColumnHeader^ fname_column;
	private: System::Windows::Forms::ColumnHeader^ history_Phone_column;
	private: System::Windows::Forms::ColumnHeader^ date_column;
	private: System::Windows::Forms::Panel^ search_contact_panel;
	private: System::Windows::Forms::ListView^ search_results_list;

	private: System::Windows::Forms::ColumnHeader^ searched_fname;
	private: System::Windows::Forms::ColumnHeader^ searched_phone;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ search_view_contact;

	private: System::Windows::Forms::Panel^ add_grp_panel;

	private: System::Windows::Forms::Button^ add_done_group;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ grp_name_tbox;

	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Panel^ Group_contacts_panel;







	private: System::Windows::Forms::Label^ group_name_label;
	private: System::Windows::Forms::ListView^ groups_list;

	private: System::Windows::Forms::ColumnHeader^ Group_contact_name_column;
	private: System::Windows::Forms::ColumnHeader^ group_phone_column;
	private: System::Windows::Forms::Panel^ view_details_panel1;
	private: System::Windows::Forms::Timer^ timer6;
	private: System::Windows::Forms::Timer^ timer7;
	private: System::Windows::Forms::Panel^ group_list_panel;
	private: System::Windows::Forms::Button^ view_grp_details_button;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::ListView^ groups_list_view;
	private: System::Windows::Forms::ColumnHeader^ group_name_list;
private: System::Windows::Forms::Panel^ Select_contact_panel;

private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::ListView^ Select_contact_list;


private: System::Windows::Forms::ColumnHeader^ columnHeader1;
private: System::Windows::Forms::ColumnHeader^ columnHeader2;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ select_contact_button;
private: System::Windows::Forms::Timer^ timer8;
private: System::Windows::Forms::Timer^ timer9;
private: System::Windows::Forms::Timer^ timer10;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Timer^ timer11;
private: System::Windows::Forms::Timer^ timer12;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::ListView^ listView1;
private: System::Windows::Forms::ColumnHeader^ columnHeader3;
private: System::Windows::Forms::ColumnHeader^ columnHeader4;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::Button^ view_details_button;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Contact_book = new ContactsBook(10);
			useful = new std::string;
		}

		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
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

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Merge_button;
	private: System::Windows::Forms::Button^ Sort_button;
	private: System::Windows::Forms::Button^ search_history_button;
	private: System::Windows::Forms::Button^ Add_grp_button;
	private: System::Windows::Forms::Button^ Search_button;
	private: System::Windows::Forms::Button^ Print_contacts_button;
	private: System::Windows::Forms::Button^ Add_contact_button;
	private: System::Windows::Forms::Panel^ Add_record_panel;
	private: System::Windows::Forms::Button^ Add_Done_button;
	private: System::Windows::Forms::TextBox^ Street_tbox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ Phone_tbox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Last_name_tbox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ house_tbox;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ email_tbox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ first_Name_tbox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Country_tbox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ city_tbox;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ListView^ all_contacts_list;

	private: System::Windows::Forms::ColumnHeader^ Name_column;
	private: System::Windows::Forms::ColumnHeader^ Phone_column;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Merge_button = (gcnew System::Windows::Forms::Button());
			this->Sort_button = (gcnew System::Windows::Forms::Button());
			this->search_history_button = (gcnew System::Windows::Forms::Button());
			this->Add_grp_button = (gcnew System::Windows::Forms::Button());
			this->Search_button = (gcnew System::Windows::Forms::Button());
			this->Print_contacts_button = (gcnew System::Windows::Forms::Button());
			this->Add_contact_button = (gcnew System::Windows::Forms::Button());
			this->Add_record_panel = (gcnew System::Windows::Forms::Panel());
			this->Country_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->city_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Add_Done_button = (gcnew System::Windows::Forms::Button());
			this->Street_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Phone_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Last_name_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->house_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->email_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->first_Name_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->View_details_ok_button = (gcnew System::Windows::Forms::Button());
			this->Country_label = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->City_label = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Street_label = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->House_label = (gcnew System::Windows::Forms::Label());
			this->mail_label = (gcnew System::Windows::Forms::Label());
			this->p_label = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Phone_label = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->last_name_label = (gcnew System::Windows::Forms::Label());
			this->first_name_label = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->all_contacts_list = (gcnew System::Windows::Forms::ListView());
			this->Name_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->Phone_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->side_bar = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->menu_button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->group_container = (gcnew System::Windows::Forms::Panel());
			this->show_groups_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->list_side_bar = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->view_details_button = (gcnew System::Windows::Forms::Button());
			this->delete_contact_button = (gcnew System::Windows::Forms::Button());
			this->Update_button = (gcnew System::Windows::Forms::Button());
			this->Search_tbox = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->update_contact_pane = (gcnew System::Windows::Forms::Panel());
			this->update_city = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->update_country = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->update_done_button = (gcnew System::Windows::Forms::Button());
			this->update_street = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->update_phone = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->update_last_name = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->update_house = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->update_email = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->update_first_name = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->search_history_panel = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->searched_history_list = (gcnew System::Windows::Forms::ListView());
			this->strings_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->fname_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->history_Phone_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->date_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->search_contact_panel = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->search_view_contact = (gcnew System::Windows::Forms::Button());
			this->search_results_list = (gcnew System::Windows::Forms::ListView());
			this->searched_fname = (gcnew System::Windows::Forms::ColumnHeader());
			this->searched_phone = (gcnew System::Windows::Forms::ColumnHeader());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->add_grp_panel = (gcnew System::Windows::Forms::Panel());
			this->add_done_group = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->grp_name_tbox = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->Group_contacts_panel = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->group_name_label = (gcnew System::Windows::Forms::Label());
			this->groups_list = (gcnew System::Windows::Forms::ListView());
			this->Group_contact_name_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->group_phone_column = (gcnew System::Windows::Forms::ColumnHeader());
			this->view_details_panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->group_list_panel = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->view_grp_details_button = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->groups_list_view = (gcnew System::Windows::Forms::ListView());
			this->group_name_list = (gcnew System::Windows::Forms::ColumnHeader());
			this->Select_contact_panel = (gcnew System::Windows::Forms::Panel());
			this->select_contact_button = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->Select_contact_list = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer11 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer12 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->Add_record_panel->SuspendLayout();
			this->side_bar->SuspendLayout();
			this->group_container->SuspendLayout();
			this->list_side_bar->SuspendLayout();
			this->update_contact_pane->SuspendLayout();
			this->search_history_panel->SuspendLayout();
			this->search_contact_panel->SuspendLayout();
			this->add_grp_panel->SuspendLayout();
			this->Group_contacts_panel->SuspendLayout();
			this->view_details_panel1->SuspendLayout();
			this->group_list_panel->SuspendLayout();
			this->Select_contact_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(636, 23);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Contact Book";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Merge_button
			// 
			this->Merge_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Merge_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Merge_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Merge_button->Location = System::Drawing::Point(10, 427);
			this->Merge_button->Margin = System::Windows::Forms::Padding(2);
			this->Merge_button->Name = L"Merge_button";
			this->Merge_button->Size = System::Drawing::Size(257, 71);
			this->Merge_button->TabIndex = 2;
			this->Merge_button->Text = L"Merge Duplicates";
			this->Merge_button->UseVisualStyleBackColor = false;
			this->Merge_button->Click += gcnew System::EventHandler(this, &MyForm::Merge_button_Click);
			// 
			// Sort_button
			// 
			this->Sort_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Sort_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sort_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sort_button->Location = System::Drawing::Point(12, 354);
			this->Sort_button->Margin = System::Windows::Forms::Padding(2);
			this->Sort_button->Name = L"Sort_button";
			this->Sort_button->Size = System::Drawing::Size(257, 69);
			this->Sort_button->TabIndex = 3;
			this->Sort_button->Text = L"Sort Contacts";
			this->Sort_button->UseVisualStyleBackColor = false;
			this->Sort_button->Click += gcnew System::EventHandler(this, &MyForm::Sort_button_Click);
			// 
			// search_history_button
			// 
			this->search_history_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->search_history_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->search_history_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_history_button->Location = System::Drawing::Point(12, 502);
			this->search_history_button->Margin = System::Windows::Forms::Padding(2);
			this->search_history_button->Name = L"search_history_button";
			this->search_history_button->Size = System::Drawing::Size(257, 68);
			this->search_history_button->TabIndex = 4;
			this->search_history_button->Text = L"Search History";
			this->search_history_button->UseVisualStyleBackColor = false;
			this->search_history_button->Click += gcnew System::EventHandler(this, &MyForm::search_history_button_Click);
			// 
			// Add_grp_button
			// 
			this->Add_grp_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Add_grp_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Add_grp_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_grp_button->Location = System::Drawing::Point(11, 177);
			this->Add_grp_button->Margin = System::Windows::Forms::Padding(2);
			this->Add_grp_button->Name = L"Add_grp_button";
			this->Add_grp_button->Size = System::Drawing::Size(255, 91);
			this->Add_grp_button->TabIndex = 10;
			this->Add_grp_button->Text = L"👨‍👩‍👧‍👦      Groups";
			this->Add_grp_button->UseVisualStyleBackColor = false;
			this->Add_grp_button->Click += gcnew System::EventHandler(this, &MyForm::Add_grp_button_Click);
			// 
			// Search_button
			// 
			this->Search_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Search_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Search_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_button->ForeColor = System::Drawing::Color::Snow;
			this->Search_button->Location = System::Drawing::Point(305, 57);
			this->Search_button->Margin = System::Windows::Forms::Padding(2);
			this->Search_button->Name = L"Search_button";
			this->Search_button->Size = System::Drawing::Size(60, 59);
			this->Search_button->TabIndex = 9;
			this->Search_button->Text = L"🔎";
			this->Search_button->UseVisualStyleBackColor = false;
			this->Search_button->Click += gcnew System::EventHandler(this, &MyForm::Search_button_Click);
			// 
			// Print_contacts_button
			// 
			this->Print_contacts_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Print_contacts_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Print_contacts_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Print_contacts_button->Location = System::Drawing::Point(10, 274);
			this->Print_contacts_button->Margin = System::Windows::Forms::Padding(2);
			this->Print_contacts_button->Name = L"Print_contacts_button";
			this->Print_contacts_button->Size = System::Drawing::Size(257, 76);
			this->Print_contacts_button->TabIndex = 8;
			this->Print_contacts_button->Text = L"Contacts";
			this->Print_contacts_button->UseVisualStyleBackColor = false;
			this->Print_contacts_button->Click += gcnew System::EventHandler(this, &MyForm::Print_contacts_button_Click);
			// 
			// Add_contact_button
			// 
			this->Add_contact_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Add_contact_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Add_contact_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_contact_button->Location = System::Drawing::Point(8, 88);
			this->Add_contact_button->Margin = System::Windows::Forms::Padding(2);
			this->Add_contact_button->Name = L"Add_contact_button";
			this->Add_contact_button->Size = System::Drawing::Size(257, 81);
			this->Add_contact_button->TabIndex = 7;
			this->Add_contact_button->Text = L"➕     Add Contact";
			this->Add_contact_button->UseVisualStyleBackColor = false;
			this->Add_contact_button->Click += gcnew System::EventHandler(this, &MyForm::Add_contact_button_Click);
			// 
			// Add_record_panel
			// 
			this->Add_record_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Add_record_panel->Controls->Add(this->Country_tbox);
			this->Add_record_panel->Controls->Add(this->label11);
			this->Add_record_panel->Controls->Add(this->city_tbox);
			this->Add_record_panel->Controls->Add(this->label12);
			this->Add_record_panel->Controls->Add(this->Add_Done_button);
			this->Add_record_panel->Controls->Add(this->Street_tbox);
			this->Add_record_panel->Controls->Add(this->label7);
			this->Add_record_panel->Controls->Add(this->Phone_tbox);
			this->Add_record_panel->Controls->Add(this->label8);
			this->Add_record_panel->Controls->Add(this->Last_name_tbox);
			this->Add_record_panel->Controls->Add(this->label9);
			this->Add_record_panel->Controls->Add(this->house_tbox);
			this->Add_record_panel->Controls->Add(this->label5);
			this->Add_record_panel->Controls->Add(this->email_tbox);
			this->Add_record_panel->Controls->Add(this->label4);
			this->Add_record_panel->Controls->Add(this->first_Name_tbox);
			this->Add_record_panel->Controls->Add(this->label3);
			this->Add_record_panel->Controls->Add(this->label6);
			this->Add_record_panel->Location = System::Drawing::Point(276, 82);
			this->Add_record_panel->Margin = System::Windows::Forms::Padding(2);
			this->Add_record_panel->MaximumSize = System::Drawing::Size(443, 510);
			this->Add_record_panel->MinimumSize = System::Drawing::Size(1, 1);
			this->Add_record_panel->Name = L"Add_record_panel";
			this->Add_record_panel->Size = System::Drawing::Size(1, 1);
			this->Add_record_panel->TabIndex = 12;
			this->Add_record_panel->Visible = false;
			this->Add_record_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Add_record_panel_Paint);
			// 
			// Country_tbox
			// 
			this->Country_tbox->BackColor = System::Drawing::Color::OldLace;
			this->Country_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Country_tbox->Location = System::Drawing::Point(247, 406);
			this->Country_tbox->Margin = System::Windows::Forms::Padding(2);
			this->Country_tbox->Name = L"Country_tbox";
			this->Country_tbox->Size = System::Drawing::Size(161, 29);
			this->Country_tbox->TabIndex = 36;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(15, 355);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(159, 26);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Enter Country";
			// 
			// city_tbox
			// 
			this->city_tbox->BackColor = System::Drawing::Color::OldLace;
			this->city_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->city_tbox->Location = System::Drawing::Point(19, 406);
			this->city_tbox->Margin = System::Windows::Forms::Padding(2);
			this->city_tbox->Name = L"city_tbox";
			this->city_tbox->Size = System::Drawing::Size(161, 29);
			this->city_tbox->TabIndex = 34;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(254, 361);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(113, 26);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Enter city";
			// 
			// Add_Done_button
			// 
			this->Add_Done_button->BackColor = System::Drawing::Color::Chocolate;
			this->Add_Done_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Add_Done_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add_Done_button->ForeColor = System::Drawing::Color::Black;
			this->Add_Done_button->Location = System::Drawing::Point(151, 458);
			this->Add_Done_button->Margin = System::Windows::Forms::Padding(2);
			this->Add_Done_button->Name = L"Add_Done_button";
			this->Add_Done_button->Size = System::Drawing::Size(112, 37);
			this->Add_Done_button->TabIndex = 32;
			this->Add_Done_button->Text = L"Add";
			this->Add_Done_button->UseVisualStyleBackColor = false;
			this->Add_Done_button->Click += gcnew System::EventHandler(this, &MyForm::Add_Done_button_Click);
			// 
			// Street_tbox
			// 
			this->Street_tbox->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->Street_tbox->BackColor = System::Drawing::Color::OldLace;
			this->Street_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Street_tbox->Location = System::Drawing::Point(240, 311);
			this->Street_tbox->Margin = System::Windows::Forms::Padding(2);
			this->Street_tbox->Name = L"Street_tbox";
			this->Street_tbox->Size = System::Drawing::Size(161, 29);
			this->Street_tbox->TabIndex = 31;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(254, 253);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 26);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Enter street";
			// 
			// Phone_tbox
			// 
			this->Phone_tbox->BackColor = System::Drawing::Color::OldLace;
			this->Phone_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone_tbox->Location = System::Drawing::Point(247, 202);
			this->Phone_tbox->Margin = System::Windows::Forms::Padding(2);
			this->Phone_tbox->Name = L"Phone_tbox";
			this->Phone_tbox->Size = System::Drawing::Size(161, 29);
			this->Phone_tbox->TabIndex = 29;
			this->Phone_tbox->TextChanged += gcnew System::EventHandler(this, &MyForm::Phone_tbox_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(254, 161);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 26);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Enter Phone";
			// 
			// Last_name_tbox
			// 
			this->Last_name_tbox->BackColor = System::Drawing::Color::OldLace;
			this->Last_name_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Last_name_tbox->Location = System::Drawing::Point(247, 103);
			this->Last_name_tbox->Margin = System::Windows::Forms::Padding(2);
			this->Last_name_tbox->Name = L"Last_name_tbox";
			this->Last_name_tbox->Size = System::Drawing::Size(161, 29);
			this->Last_name_tbox->TabIndex = 27;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(242, 65);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 26);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Last Name";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// house_tbox
			// 
			this->house_tbox->BackColor = System::Drawing::Color::OldLace;
			this->house_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->house_tbox->Location = System::Drawing::Point(13, 311);
			this->house_tbox->Margin = System::Windows::Forms::Padding(2);
			this->house_tbox->Name = L"house_tbox";
			this->house_tbox->Size = System::Drawing::Size(161, 29);
			this->house_tbox->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 253);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 26);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Enter House ";
			// 
			// email_tbox
			// 
			this->email_tbox->BackColor = System::Drawing::Color::OldLace;
			this->email_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_tbox->Location = System::Drawing::Point(22, 202);
			this->email_tbox->Margin = System::Windows::Forms::Padding(2);
			this->email_tbox->Name = L"email_tbox";
			this->email_tbox->Size = System::Drawing::Size(161, 29);
			this->email_tbox->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 157);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 26);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Email Address";
			// 
			// first_Name_tbox
			// 
			this->first_Name_tbox->BackColor = System::Drawing::Color::OldLace;
			this->first_Name_tbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->first_Name_tbox->Location = System::Drawing::Point(34, 103);
			this->first_Name_tbox->Margin = System::Windows::Forms::Padding(2);
			this->first_Name_tbox->Name = L"first_Name_tbox";
			this->first_Name_tbox->Size = System::Drawing::Size(161, 29);
			this->first_Name_tbox->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 65);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 26);
			this->label3->TabIndex = 20;
			this->label3->Text = L"First Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Chocolate;
			this->label6->Location = System::Drawing::Point(114, 6);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 40);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Add Contact";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(42, 20);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(224, 40);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Contact Details";
			this->label18->Click += gcnew System::EventHandler(this, &MyForm::label18_Click);
			// 
			// View_details_ok_button
			// 
			this->View_details_ok_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->View_details_ok_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->View_details_ok_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->View_details_ok_button->Location = System::Drawing::Point(87, 519);
			this->View_details_ok_button->Margin = System::Windows::Forms::Padding(2);
			this->View_details_ok_button->Name = L"View_details_ok_button";
			this->View_details_ok_button->Size = System::Drawing::Size(94, 48);
			this->View_details_ok_button->TabIndex = 15;
			this->View_details_ok_button->Text = L"OK";
			this->View_details_ok_button->UseVisualStyleBackColor = false;
			this->View_details_ok_button->Click += gcnew System::EventHandler(this, &MyForm::View_details_ok_button_Click);
			// 
			// Country_label
			// 
			this->Country_label->AutoSize = true;
			this->Country_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Country_label->Location = System::Drawing::Point(115, 482);
			this->Country_label->Name = L"Country_label";
			this->Country_label->Size = System::Drawing::Size(101, 25);
			this->Country_label->TabIndex = 14;
			this->Country_label->Text = L"Country  :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(5, 482);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(101, 25);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Country  :";
			// 
			// City_label
			// 
			this->City_label->AutoSize = true;
			this->City_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->City_label->Location = System::Drawing::Point(115, 434);
			this->City_label->Name = L"City_label";
			this->City_label->Size = System::Drawing::Size(56, 25);
			this->City_label->TabIndex = 12;
			this->City_label->Text = L"City :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(5, 434);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(56, 25);
			this->label16->TabIndex = 11;
			this->label16->Text = L"City :";
			// 
			// Street_label
			// 
			this->Street_label->AutoSize = true;
			this->Street_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Street_label->Location = System::Drawing::Point(117, 374);
			this->Street_label->Name = L"Street_label";
			this->Street_label->Size = System::Drawing::Size(75, 25);
			this->Street_label->TabIndex = 10;
			this->Street_label->Text = L"Street :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(5, 374);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 25);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Street :";
			// 
			// House_label
			// 
			this->House_label->AutoSize = true;
			this->House_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->House_label->Location = System::Drawing::Point(117, 314);
			this->House_label->Name = L"House_label";
			this->House_label->Size = System::Drawing::Size(79, 25);
			this->House_label->TabIndex = 8;
			this->House_label->Text = L"House :";
			this->House_label->Click += gcnew System::EventHandler(this, &MyForm::House_label_Click);
			// 
			// mail_label
			// 
			this->mail_label->AutoSize = true;
			this->mail_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mail_label->Location = System::Drawing::Point(117, 247);
			this->mail_label->Name = L"mail_label";
			this->mail_label->Size = System::Drawing::Size(69, 25);
			this->mail_label->TabIndex = 7;
			this->mail_label->Text = L"Email :";
			// 
			// p_label
			// 
			this->p_label->AutoSize = true;
			this->p_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_label->Location = System::Drawing::Point(5, 314);
			this->p_label->Name = L"p_label";
			this->p_label->Size = System::Drawing::Size(79, 25);
			this->p_label->TabIndex = 6;
			this->p_label->Text = L"House :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(5, 247);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 25);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Email :";
			// 
			// Phone_label
			// 
			this->Phone_label->AutoSize = true;
			this->Phone_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone_label->Location = System::Drawing::Point(117, 175);
			this->Phone_label->Name = L"Phone_label";
			this->Phone_label->Size = System::Drawing::Size(79, 25);
			this->Phone_label->TabIndex = 4;
			this->Phone_label->Text = L"Phone :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(5, 182);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 25);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Phone :";
			// 
			// last_name_label
			// 
			this->last_name_label->AutoSize = true;
			this->last_name_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->last_name_label->Location = System::Drawing::Point(233, 122);
			this->last_name_label->Name = L"last_name_label";
			this->last_name_label->Size = System::Drawing::Size(64, 25);
			this->last_name_label->TabIndex = 2;
			this->last_name_label->Text = L"Name";
			// 
			// first_name_label
			// 
			this->first_name_label->AutoSize = true;
			this->first_name_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->first_name_label->Location = System::Drawing::Point(117, 122);
			this->first_name_label->Name = L"first_name_label";
			this->first_name_label->Size = System::Drawing::Size(64, 25);
			this->first_name_label->TabIndex = 1;
			this->first_name_label->Text = L"Name";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(5, 122);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 25);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Name :";
			// 
			// all_contacts_list
			// 
			this->all_contacts_list->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->all_contacts_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->Name_column,
					this->Phone_column
			});
			this->all_contacts_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->all_contacts_list->ForeColor = System::Drawing::Color::Chocolate;
			this->all_contacts_list->HideSelection = false;
			this->all_contacts_list->Location = System::Drawing::Point(12, 26);
			this->all_contacts_list->Margin = System::Windows::Forms::Padding(2);
			this->all_contacts_list->Name = L"all_contacts_list";
			this->all_contacts_list->Size = System::Drawing::Size(275, 544);
			this->all_contacts_list->TabIndex = 13;
			this->all_contacts_list->UseCompatibleStateImageBehavior = false;
			this->all_contacts_list->View = System::Windows::Forms::View::Details;
			this->all_contacts_list->Visible = false;
			this->all_contacts_list->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// Name_column
			// 
			this->Name_column->Text = L"Name";
			this->Name_column->Width = 122;
			// 
			// Phone_column
			// 
			this->Phone_column->Text = L"Phone";
			this->Phone_column->Width = 200;
			// 
			// side_bar
			// 
			this->side_bar->AutoScroll = true;
			this->side_bar->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->side_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->side_bar->Controls->Add(this->button10);
			this->side_bar->Controls->Add(this->button9);
			this->side_bar->Controls->Add(this->menu_button);
			this->side_bar->Controls->Add(this->label2);
			this->side_bar->Controls->Add(this->Add_contact_button);
			this->side_bar->Controls->Add(this->Add_grp_button);
			this->side_bar->Controls->Add(this->Merge_button);
			this->side_bar->Controls->Add(this->search_history_button);
			this->side_bar->Controls->Add(this->Sort_button);
			this->side_bar->Controls->Add(this->Print_contacts_button);
			this->side_bar->Location = System::Drawing::Point(0, 0);
			this->side_bar->Margin = System::Windows::Forms::Padding(2);
			this->side_bar->MaximumSize = System::Drawing::Size(276, 738);
			this->side_bar->MinimumSize = System::Drawing::Size(70, 738);
			this->side_bar->Name = L"side_bar";
			this->side_bar->Size = System::Drawing::Size(276, 738);
			this->side_bar->TabIndex = 13;
			this->side_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(12, 654);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(251, 66);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Load from File";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(10, 576);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(255, 74);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Save To file";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// menu_button
			// 
			this->menu_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->menu_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menu_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->menu_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menu_button->ForeColor = System::Drawing::Color::SeaShell;
			this->menu_button->Location = System::Drawing::Point(11, 14);
			this->menu_button->Margin = System::Windows::Forms::Padding(2);
			this->menu_button->Name = L"menu_button";
			this->menu_button->Size = System::Drawing::Size(55, 61);
			this->menu_button->TabIndex = 12;
			this->menu_button->Text = L"🏛️";
			this->menu_button->UseVisualStyleBackColor = false;
			this->menu_button->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(80, 22);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 40);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Menu";
			// 
			// group_container
			// 
			this->group_container->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->group_container->CausesValidation = false;
			this->group_container->Controls->Add(this->show_groups_button);
			this->group_container->Controls->Add(this->button1);
			this->group_container->Location = System::Drawing::Point(273, 138);
			this->group_container->MaximumSize = System::Drawing::Size(262, 160);
			this->group_container->MinimumSize = System::Drawing::Size(1, 1);
			this->group_container->Name = L"group_container";
			this->group_container->Size = System::Drawing::Size(1, 1);
			this->group_container->TabIndex = 15;
			// 
			// show_groups_button
			// 
			this->show_groups_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->show_groups_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->show_groups_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->show_groups_button->Location = System::Drawing::Point(2, 74);
			this->show_groups_button->Margin = System::Windows::Forms::Padding(2);
			this->show_groups_button->Name = L"show_groups_button";
			this->show_groups_button->Size = System::Drawing::Size(239, 50);
			this->show_groups_button->TabIndex = 12;
			this->show_groups_button->Text = L"👨‍👩‍👧‍👦       Show Groups ";
			this->show_groups_button->UseVisualStyleBackColor = false;
			this->show_groups_button->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(8, 11);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 58);
			this->button1->TabIndex = 11;
			this->button1->Text = L"➕    Add Group";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// list_side_bar
			// 
			this->list_side_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->list_side_bar->Controls->Add(this->button3);
			this->list_side_bar->Controls->Add(this->view_details_button);
			this->list_side_bar->Controls->Add(this->delete_contact_button);
			this->list_side_bar->Controls->Add(this->Update_button);
			this->list_side_bar->Controls->Add(this->all_contacts_list);
			this->list_side_bar->Dock = System::Windows::Forms::DockStyle::Right;
			this->list_side_bar->Location = System::Drawing::Point(1360, 0);
			this->list_side_bar->Margin = System::Windows::Forms::Padding(2);
			this->list_side_bar->MinimumSize = System::Drawing::Size(10, 10);
			this->list_side_bar->Name = L"list_side_bar";
			this->list_side_bar->Size = System::Drawing::Size(10, 749);
			this->list_side_bar->TabIndex = 14;
			this->list_side_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::list_side_bar_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Snow;
			this->button3->Location = System::Drawing::Point(291, 47);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 59);
			this->button3->TabIndex = 20;
			this->button3->Text = L"🔎";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// view_details_button
			// 
			this->view_details_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_details_button->Location = System::Drawing::Point(291, 125);
			this->view_details_button->Margin = System::Windows::Forms::Padding(2);
			this->view_details_button->Name = L"view_details_button";
			this->view_details_button->Size = System::Drawing::Size(141, 51);
			this->view_details_button->TabIndex = 16;
			this->view_details_button->Text = L"View Details";
			this->view_details_button->UseVisualStyleBackColor = true;
			this->view_details_button->Click += gcnew System::EventHandler(this, &MyForm::view_details_button_Click);
			// 
			// delete_contact_button
			// 
			this->delete_contact_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_contact_button->Location = System::Drawing::Point(291, 274);
			this->delete_contact_button->Margin = System::Windows::Forms::Padding(2);
			this->delete_contact_button->Name = L"delete_contact_button";
			this->delete_contact_button->Size = System::Drawing::Size(141, 51);
			this->delete_contact_button->TabIndex = 15;
			this->delete_contact_button->Text = L"Delete Contact";
			this->delete_contact_button->UseVisualStyleBackColor = true;
			this->delete_contact_button->Click += gcnew System::EventHandler(this, &MyForm::delete_contact_button_Click);
			// 
			// Update_button
			// 
			this->Update_button->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Update_button->Location = System::Drawing::Point(291, 197);
			this->Update_button->Margin = System::Windows::Forms::Padding(2);
			this->Update_button->Name = L"Update_button";
			this->Update_button->Size = System::Drawing::Size(143, 52);
			this->Update_button->TabIndex = 14;
			this->Update_button->Text = L"Update Contact";
			this->Update_button->UseVisualStyleBackColor = true;
			this->Update_button->Click += gcnew System::EventHandler(this, &MyForm::Update_button_Click);
			// 
			// Search_tbox
			// 
			this->Search_tbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_tbox->Location = System::Drawing::Point(32, 66);
			this->Search_tbox->Name = L"Search_tbox";
			this->Search_tbox->Size = System::Drawing::Size(238, 35);
			this->Search_tbox->TabIndex = 10;
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 10;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 10;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 10;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// update_contact_pane
			// 
			this->update_contact_pane->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->update_contact_pane->Controls->Add(this->update_city);
			this->update_contact_pane->Controls->Add(this->label19);
			this->update_contact_pane->Controls->Add(this->update_country);
			this->update_contact_pane->Controls->Add(this->label20);
			this->update_contact_pane->Controls->Add(this->update_done_button);
			this->update_contact_pane->Controls->Add(this->update_street);
			this->update_contact_pane->Controls->Add(this->label21);
			this->update_contact_pane->Controls->Add(this->update_phone);
			this->update_contact_pane->Controls->Add(this->label22);
			this->update_contact_pane->Controls->Add(this->update_last_name);
			this->update_contact_pane->Controls->Add(this->label23);
			this->update_contact_pane->Controls->Add(this->update_house);
			this->update_contact_pane->Controls->Add(this->label24);
			this->update_contact_pane->Controls->Add(this->update_email);
			this->update_contact_pane->Controls->Add(this->label25);
			this->update_contact_pane->Controls->Add(this->update_first_name);
			this->update_contact_pane->Controls->Add(this->label26);
			this->update_contact_pane->Controls->Add(this->label27);
			this->update_contact_pane->Location = System::Drawing::Point(290, 82);
			this->update_contact_pane->Margin = System::Windows::Forms::Padding(2);
			this->update_contact_pane->MaximumSize = System::Drawing::Size(443, 510);
			this->update_contact_pane->MinimumSize = System::Drawing::Size(1, 1);
			this->update_contact_pane->Name = L"update_contact_pane";
			this->update_contact_pane->Size = System::Drawing::Size(1, 1);
			this->update_contact_pane->TabIndex = 17;
			this->update_contact_pane->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::update_contact_pane_Paint);
			// 
			// update_city
			// 
			this->update_city->BackColor = System::Drawing::Color::OldLace;
			this->update_city->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_city->Location = System::Drawing::Point(247, 406);
			this->update_city->Margin = System::Windows::Forms::Padding(2);
			this->update_city->Name = L"update_city";
			this->update_city->Size = System::Drawing::Size(161, 29);
			this->update_city->TabIndex = 36;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(15, 355);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(159, 26);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Enter Country";
			// 
			// update_country
			// 
			this->update_country->BackColor = System::Drawing::Color::OldLace;
			this->update_country->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_country->Location = System::Drawing::Point(19, 406);
			this->update_country->Margin = System::Windows::Forms::Padding(2);
			this->update_country->Name = L"update_country";
			this->update_country->Size = System::Drawing::Size(161, 29);
			this->update_country->TabIndex = 34;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(254, 361);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(113, 26);
			this->label20->TabIndex = 33;
			this->label20->Text = L"Enter city";
			// 
			// update_done_button
			// 
			this->update_done_button->BackColor = System::Drawing::Color::Chocolate;
			this->update_done_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->update_done_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_done_button->ForeColor = System::Drawing::Color::Black;
			this->update_done_button->Location = System::Drawing::Point(128, 459);
			this->update_done_button->Margin = System::Windows::Forms::Padding(2);
			this->update_done_button->Name = L"update_done_button";
			this->update_done_button->Size = System::Drawing::Size(155, 37);
			this->update_done_button->TabIndex = 32;
			this->update_done_button->Text = L"Update     ✔";
			this->update_done_button->UseVisualStyleBackColor = false;
			this->update_done_button->Click += gcnew System::EventHandler(this, &MyForm::update_done_button_Click);
			// 
			// update_street
			// 
			this->update_street->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->update_street->BackColor = System::Drawing::Color::OldLace;
			this->update_street->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_street->Location = System::Drawing::Point(240, 311);
			this->update_street->Margin = System::Windows::Forms::Padding(2);
			this->update_street->Name = L"update_street";
			this->update_street->Size = System::Drawing::Size(161, 29);
			this->update_street->TabIndex = 31;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(254, 253);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(136, 26);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Enter street";
			// 
			// update_phone
			// 
			this->update_phone->BackColor = System::Drawing::Color::OldLace;
			this->update_phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_phone->Location = System::Drawing::Point(247, 202);
			this->update_phone->Margin = System::Windows::Forms::Padding(2);
			this->update_phone->Name = L"update_phone";
			this->update_phone->Size = System::Drawing::Size(161, 29);
			this->update_phone->TabIndex = 29;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(254, 161);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(144, 26);
			this->label22->TabIndex = 28;
			this->label22->Text = L"Enter Phone";
			// 
			// update_last_name
			// 
			this->update_last_name->BackColor = System::Drawing::Color::OldLace;
			this->update_last_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_last_name->Location = System::Drawing::Point(247, 103);
			this->update_last_name->Margin = System::Windows::Forms::Padding(2);
			this->update_last_name->Name = L"update_last_name";
			this->update_last_name->Size = System::Drawing::Size(161, 29);
			this->update_last_name->TabIndex = 27;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(242, 65);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(127, 26);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Last Name";
			// 
			// update_house
			// 
			this->update_house->BackColor = System::Drawing::Color::OldLace;
			this->update_house->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_house->Location = System::Drawing::Point(13, 311);
			this->update_house->Margin = System::Windows::Forms::Padding(2);
			this->update_house->Name = L"update_house";
			this->update_house->Size = System::Drawing::Size(161, 29);
			this->update_house->TabIndex = 25;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(29, 253);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(151, 26);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Enter House ";
			// 
			// update_email
			// 
			this->update_email->BackColor = System::Drawing::Color::OldLace;
			this->update_email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_email->Location = System::Drawing::Point(22, 202);
			this->update_email->Margin = System::Windows::Forms::Padding(2);
			this->update_email->Name = L"update_email";
			this->update_email->Size = System::Drawing::Size(161, 29);
			this->update_email->TabIndex = 23;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(15, 157);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(167, 26);
			this->label25->TabIndex = 22;
			this->label25->Text = L"Email Address";
			// 
			// update_first_name
			// 
			this->update_first_name->BackColor = System::Drawing::Color::OldLace;
			this->update_first_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_first_name->Location = System::Drawing::Point(34, 103);
			this->update_first_name->Margin = System::Windows::Forms::Padding(2);
			this->update_first_name->Name = L"update_first_name";
			this->update_first_name->Size = System::Drawing::Size(161, 29);
			this->update_first_name->TabIndex = 21;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(43, 65);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(129, 26);
			this->label26->TabIndex = 20;
			this->label26->Text = L"First Name";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Chocolate;
			this->label27->Location = System::Drawing::Point(62, 6);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(253, 45);
			this->label27->TabIndex = 19;
			this->label27->Text = L"Update Contact";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm::label27_Click);
			// 
			// timer5
			// 
			this->timer5->Interval = 10;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::timer5_Tick);
			// 
			// search_history_panel
			// 
			this->search_history_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->search_history_panel->Controls->Add(this->button11);
			this->search_history_panel->Controls->Add(this->label32);
			this->search_history_panel->Controls->Add(this->listView1);
			this->search_history_panel->Controls->Add(this->button8);
			this->search_history_panel->Controls->Add(this->label29);
			this->search_history_panel->Controls->Add(this->searched_history_list);
			this->search_history_panel->Location = System::Drawing::Point(389, 70);
			this->search_history_panel->Name = L"search_history_panel";
			this->search_history_panel->Size = System::Drawing::Size(460, 624);
			this->search_history_panel->TabIndex = 18;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(358, 20);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(53, 33);
			this->button8->TabIndex = 21;
			this->button8->Text = L"❌";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// searched_history_list
			// 
			this->searched_history_list->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->searched_history_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->strings_column,
					this->fname_column, this->history_Phone_column, this->date_column
			});
			this->searched_history_list->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searched_history_list->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->searched_history_list->HideSelection = false;
			this->searched_history_list->Location = System::Drawing::Point(13, 67);
			this->searched_history_list->MaximumSize = System::Drawing::Size(444, 216);
			this->searched_history_list->MinimumSize = System::Drawing::Size(10, 10);
			this->searched_history_list->Name = L"searched_history_list";
			this->searched_history_list->Size = System::Drawing::Size(444, 216);
			this->searched_history_list->TabIndex = 0;
			this->searched_history_list->UseCompatibleStateImageBehavior = false;
			this->searched_history_list->View = System::Windows::Forms::View::Details;
			this->searched_history_list->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::searched_history_list_SelectedIndexChanged);
			// 
			// strings_column
			// 
			this->strings_column->Text = L"Keywords ";
			this->strings_column->Width = 100;
			// 
			// fname_column
			// 
			this->fname_column->Text = L"Name";
			this->fname_column->Width = 100;
			// 
			// history_Phone_column
			// 
			this->history_Phone_column->Text = L"Phone";
			this->history_Phone_column->Width = 100;
			// 
			// date_column
			// 
			this->date_column->Text = L"Time";
			// 
			// search_contact_panel
			// 
			this->search_contact_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->search_contact_panel->Controls->Add(this->button5);
			this->search_contact_panel->Controls->Add(this->search_view_contact);
			this->search_contact_panel->Controls->Add(this->search_results_list);
			this->search_contact_panel->Controls->Add(this->Search_button);
			this->search_contact_panel->Controls->Add(this->Search_tbox);
			this->search_contact_panel->Controls->Add(this->label28);
			this->search_contact_panel->Location = System::Drawing::Point(525, 80);
			this->search_contact_panel->MaximumSize = System::Drawing::Size(406, 430);
			this->search_contact_panel->MinimumSize = System::Drawing::Size(1, 1);
			this->search_contact_panel->Name = L"search_contact_panel";
			this->search_contact_panel->Size = System::Drawing::Size(1, 1);
			this->search_contact_panel->TabIndex = 19;
			this->search_contact_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::search_contact_panel_Paint);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(329, 9);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 33);
			this->button5->TabIndex = 20;
			this->button5->Text = L"❌";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// search_view_contact
			// 
			this->search_view_contact->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_view_contact->Location = System::Drawing::Point(279, 175);
			this->search_view_contact->Margin = System::Windows::Forms::Padding(2);
			this->search_view_contact->Name = L"search_view_contact";
			this->search_view_contact->Size = System::Drawing::Size(103, 51);
			this->search_view_contact->TabIndex = 19;
			this->search_view_contact->Text = L"View Details";
			this->search_view_contact->UseVisualStyleBackColor = true;
			this->search_view_contact->Click += gcnew System::EventHandler(this, &MyForm::search_view_contact_Click);
			// 
			// search_results_list
			// 
			this->search_results_list->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->search_results_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->searched_fname,
					this->searched_phone
			});
			this->search_results_list->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_results_list->ForeColor = System::Drawing::Color::Chocolate;
			this->search_results_list->HideSelection = false;
			this->search_results_list->Location = System::Drawing::Point(32, 117);
			this->search_results_list->Margin = System::Windows::Forms::Padding(2);
			this->search_results_list->Name = L"search_results_list";
			this->search_results_list->Size = System::Drawing::Size(231, 286);
			this->search_results_list->TabIndex = 18;
			this->search_results_list->UseCompatibleStateImageBehavior = false;
			this->search_results_list->View = System::Windows::Forms::View::Details;
			this->search_results_list->Visible = false;
			this->search_results_list->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView3_SelectedIndexChanged);
			// 
			// searched_fname
			// 
			this->searched_fname->Text = L"Name";
			this->searched_fname->Width = 141;
			// 
			// searched_phone
			// 
			this->searched_phone->Text = L"Phone";
			this->searched_phone->Width = 200;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(61, 18);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(243, 45);
			this->label28->TabIndex = 17;
			this->label28->Text = L"Search Contact";
			this->label28->Click += gcnew System::EventHandler(this, &MyForm::label28_Click);
			// 
			// add_grp_panel
			// 
			this->add_grp_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->add_grp_panel->Controls->Add(this->add_done_group);
			this->add_grp_panel->Controls->Add(this->label30);
			this->add_grp_panel->Controls->Add(this->grp_name_tbox);
			this->add_grp_panel->Controls->Add(this->label31);
			this->add_grp_panel->Location = System::Drawing::Point(535, 278);
			this->add_grp_panel->MaximumSize = System::Drawing::Size(369, 149);
			this->add_grp_panel->MinimumSize = System::Drawing::Size(1, 1);
			this->add_grp_panel->Name = L"add_grp_panel";
			this->add_grp_panel->Size = System::Drawing::Size(1, 1);
			this->add_grp_panel->TabIndex = 14;
			// 
			// add_done_group
			// 
			this->add_done_group->BackColor = System::Drawing::Color::Chocolate;
			this->add_done_group->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add_done_group->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_done_group->ForeColor = System::Drawing::Color::Black;
			this->add_done_group->Location = System::Drawing::Point(279, 93);
			this->add_done_group->Margin = System::Windows::Forms::Padding(2);
			this->add_done_group->Name = L"add_done_group";
			this->add_done_group->Size = System::Drawing::Size(73, 37);
			this->add_done_group->TabIndex = 33;
			this->add_done_group->Text = L" ✔";
			this->add_done_group->UseVisualStyleBackColor = false;
			this->add_done_group->Click += gcnew System::EventHandler(this, &MyForm::add_done_group_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(17, 58);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(74, 25);
			this->label30->TabIndex = 4;
			this->label30->Text = L"Name :";
			// 
			// grp_name_tbox
			// 
			this->grp_name_tbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grp_name_tbox->Location = System::Drawing::Point(12, 95);
			this->grp_name_tbox->Name = L"grp_name_tbox";
			this->grp_name_tbox->Size = System::Drawing::Size(253, 33);
			this->grp_name_tbox->TabIndex = 3;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(81, 8);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(184, 45);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Add group";
			// 
			// Group_contacts_panel
			// 
			this->Group_contacts_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Group_contacts_panel->Controls->Add(this->button7);
			this->Group_contacts_panel->Controls->Add(this->button4);
			this->Group_contacts_panel->Controls->Add(this->button2);
			this->Group_contacts_panel->Controls->Add(this->group_name_label);
			this->Group_contacts_panel->Controls->Add(this->groups_list);
			this->Group_contacts_panel->Location = System::Drawing::Point(282, 336);
			this->Group_contacts_panel->MaximumSize = System::Drawing::Size(274, 373);
			this->Group_contacts_panel->MinimumSize = System::Drawing::Size(1, 1);
			this->Group_contacts_panel->Name = L"Group_contacts_panel";
			this->Group_contacts_panel->Size = System::Drawing::Size(1, 1);
			this->Group_contacts_panel->TabIndex = 21;
			this->Group_contacts_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(203, 21);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(53, 33);
			this->button7->TabIndex = 22;
			this->button7->Text = L"❌";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(13, 315);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 43);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Delete Contact";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(141, 313);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 43);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Add Contact";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			// 
			// group_name_label
			// 
			this->group_name_label->AutoSize = true;
			this->group_name_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->group_name_label->Location = System::Drawing::Point(32, 18);
			this->group_name_label->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->group_name_label->Name = L"group_name_label";
			this->group_name_label->Size = System::Drawing::Size(74, 45);
			this->group_name_label->TabIndex = 18;
			this->group_name_label->Text = L"......";
			// 
			// groups_list
			// 
			this->groups_list->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->groups_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->Group_contact_name_column,
					this->group_phone_column
			});
			this->groups_list->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groups_list->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->groups_list->HideSelection = false;
			this->groups_list->Location = System::Drawing::Point(23, 66);
			this->groups_list->Name = L"groups_list";
			this->groups_list->Size = System::Drawing::Size(233, 233);
			this->groups_list->TabIndex = 0;
			this->groups_list->UseCompatibleStateImageBehavior = false;
			this->groups_list->View = System::Windows::Forms::View::Details;
			this->groups_list->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::groups_list_SelectedIndexChanged);
			// 
			// Group_contact_name_column
			// 
			this->Group_contact_name_column->Text = L"Name";
			this->Group_contact_name_column->Width = 121;
			// 
			// group_phone_column
			// 
			this->group_phone_column->Text = L"Phone";
			this->group_phone_column->Width = 150;
			// 
			// view_details_panel1
			// 
			this->view_details_panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->view_details_panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->view_details_panel1->Controls->Add(this->label18);
			this->view_details_panel1->Controls->Add(this->View_details_ok_button);
			this->view_details_panel1->Controls->Add(this->Country_label);
			this->view_details_panel1->Controls->Add(this->label17);
			this->view_details_panel1->Controls->Add(this->City_label);
			this->view_details_panel1->Controls->Add(this->label16);
			this->view_details_panel1->Controls->Add(this->Street_label);
			this->view_details_panel1->Controls->Add(this->label15);
			this->view_details_panel1->Controls->Add(this->House_label);
			this->view_details_panel1->Controls->Add(this->mail_label);
			this->view_details_panel1->Controls->Add(this->p_label);
			this->view_details_panel1->Controls->Add(this->label14);
			this->view_details_panel1->Controls->Add(this->Phone_label);
			this->view_details_panel1->Controls->Add(this->label13);
			this->view_details_panel1->Controls->Add(this->last_name_label);
			this->view_details_panel1->Controls->Add(this->first_name_label);
			this->view_details_panel1->Controls->Add(this->label10);
			this->view_details_panel1->Location = System::Drawing::Point(633, 2);
			this->view_details_panel1->MaximumSize = System::Drawing::Size(320, 636);
			this->view_details_panel1->MinimumSize = System::Drawing::Size(2, 2);
			this->view_details_panel1->Name = L"view_details_panel1";
			this->view_details_panel1->Size = System::Drawing::Size(2, 2);
			this->view_details_panel1->TabIndex = 22;
			this->view_details_panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// timer6
			// 
			this->timer6->Interval = 10;
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm::timer6_Tick);
			// 
			// timer7
			// 
			this->timer7->Interval = 10;
			this->timer7->Tick += gcnew System::EventHandler(this, &MyForm::timer7_Tick);
			// 
			// group_list_panel
			// 
			this->group_list_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->group_list_panel->Controls->Add(this->button6);
			this->group_list_panel->Controls->Add(this->view_grp_details_button);
			this->group_list_panel->Controls->Add(this->label33);
			this->group_list_panel->Controls->Add(this->groups_list_view);
			this->group_list_panel->Location = System::Drawing::Point(281, 14);
			this->group_list_panel->MaximumSize = System::Drawing::Size(254, 362);
			this->group_list_panel->MinimumSize = System::Drawing::Size(1, 1);
			this->group_list_panel->Name = L"group_list_panel";
			this->group_list_panel->Size = System::Drawing::Size(1, 1);
			this->group_list_panel->TabIndex = 23;
			this->group_list_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::group_list_panel_Paint);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(183, 11);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(53, 33);
			this->button6->TabIndex = 25;
			this->button6->Text = L"❌";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// view_grp_details_button
			// 
			this->view_grp_details_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->view_grp_details_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->view_grp_details_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->view_grp_details_button->Location = System::Drawing::Point(12, 293);
			this->view_grp_details_button->Margin = System::Windows::Forms::Padding(2);
			this->view_grp_details_button->Name = L"view_grp_details_button";
			this->view_grp_details_button->Size = System::Drawing::Size(201, 43);
			this->view_grp_details_button->TabIndex = 19;
			this->view_grp_details_button->Text = L"View Details";
			this->view_grp_details_button->UseVisualStyleBackColor = false;
			this->view_grp_details_button->Click += gcnew System::EventHandler(this, &MyForm::view_grp_details_button_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(33, 6);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(141, 40);
			this->label33->TabIndex = 18;
			this->label33->Text = L"   Groups";
			// 
			// groups_list_view
			// 
			this->groups_list_view->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->groups_list_view->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->group_name_list });
			this->groups_list_view->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groups_list_view->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->groups_list_view->HideSelection = false;
			this->groups_list_view->Location = System::Drawing::Point(5, 49);
			this->groups_list_view->Name = L"groups_list_view";
			this->groups_list_view->Size = System::Drawing::Size(220, 239);
			this->groups_list_view->TabIndex = 0;
			this->groups_list_view->UseCompatibleStateImageBehavior = false;
			this->groups_list_view->View = System::Windows::Forms::View::Details;
			// 
			// group_name_list
			// 
			this->group_name_list->Text = L"              Name";
			this->group_name_list->Width = 250;
			// 
			// Select_contact_panel
			// 
			this->Select_contact_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Select_contact_panel->Controls->Add(this->select_contact_button);
			this->Select_contact_panel->Controls->Add(this->label34);
			this->Select_contact_panel->Controls->Add(this->Select_contact_list);
			this->Select_contact_panel->Location = System::Drawing::Point(562, 337);
			this->Select_contact_panel->MaximumSize = System::Drawing::Size(268, 382);
			this->Select_contact_panel->MinimumSize = System::Drawing::Size(1, 1);
			this->Select_contact_panel->Name = L"Select_contact_panel";
			this->Select_contact_panel->Size = System::Drawing::Size(1, 1);
			this->Select_contact_panel->TabIndex = 24;
			// 
			// select_contact_button
			// 
			this->select_contact_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->select_contact_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->select_contact_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select_contact_button->Location = System::Drawing::Point(79, 328);
			this->select_contact_button->Margin = System::Windows::Forms::Padding(2);
			this->select_contact_button->Name = L"select_contact_button";
			this->select_contact_button->Size = System::Drawing::Size(63, 45);
			this->select_contact_button->TabIndex = 20;
			this->select_contact_button->Text = L"OK";
			this->select_contact_button->UseVisualStyleBackColor = false;
			this->select_contact_button->Click += gcnew System::EventHandler(this, &MyForm::select_contact_button_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(32, 18);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(177, 32);
			this->label34->TabIndex = 18;
			this->label34->Text = L"Select Contact";
			// 
			// Select_contact_list
			// 
			this->Select_contact_list->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Select_contact_list->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeader1,
					this->columnHeader2
			});
			this->Select_contact_list->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Select_contact_list->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Select_contact_list->HideSelection = false;
			this->Select_contact_list->Location = System::Drawing::Point(23, 72);
			this->Select_contact_list->Name = L"Select_contact_list";
			this->Select_contact_list->Size = System::Drawing::Size(229, 252);
			this->Select_contact_list->TabIndex = 0;
			this->Select_contact_list->UseCompatibleStateImageBehavior = false;
			this->Select_contact_list->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 121;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Phone";
			this->columnHeader2->Width = 150;
			// 
			// timer8
			// 
			this->timer8->Interval = 10;
			this->timer8->Tick += gcnew System::EventHandler(this, &MyForm::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Interval = 10;
			this->timer9->Tick += gcnew System::EventHandler(this, &MyForm::timer9_Tick);
			// 
			// timer10
			// 
			this->timer10->Interval = 10;
			this->timer10->Tick += gcnew System::EventHandler(this, &MyForm::timer10_Tick);
			// 
			// timer11
			// 
			this->timer11->Interval = 10;
			this->timer11->Tick += gcnew System::EventHandler(this, &MyForm::timer11_Tick);
			// 
			// timer12
			// 
			this->timer12->Interval = 10;
			this->timer12->Tick += gcnew System::EventHandler(this, &MyForm::timer12_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(512, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(110, 108);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader3, this->columnHeader4 });
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->ForeColor = System::Drawing::Color::Chocolate;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(28, 351);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(412, 229);
			this->listView1->TabIndex = 22;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->Visible = false;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Name";
			this->columnHeader3->Width = 211;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Phone";
			this->columnHeader4->Width = 200;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(32, 18);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(276, 45);
			this->label29->TabIndex = 18;
			this->label29->Text = L"Searched History";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(40, 286);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(352, 45);
			this->label32->TabIndex = 23;
			this->label32->Text = L"5 Frequently Searched";
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(386, 297);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(63, 33);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Show";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1370, 749);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Select_contact_panel);
			this->Controls->Add(this->Group_contacts_panel);
			this->Controls->Add(this->add_grp_panel);
			this->Controls->Add(this->group_list_panel);
			this->Controls->Add(this->view_details_panel1);
			this->Controls->Add(this->Add_record_panel);
			this->Controls->Add(this->search_contact_panel);
			this->Controls->Add(this->search_history_panel);
			this->Controls->Add(this->update_contact_pane);
			this->Controls->Add(this->group_container);
			this->Controls->Add(this->list_side_bar);
			this->Controls->Add(this->side_bar);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Chocolate;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Add_record_panel->ResumeLayout(false);
			this->Add_record_panel->PerformLayout();
			this->side_bar->ResumeLayout(false);
			this->side_bar->PerformLayout();
			this->group_container->ResumeLayout(false);
			this->list_side_bar->ResumeLayout(false);
			this->update_contact_pane->ResumeLayout(false);
			this->update_contact_pane->PerformLayout();
			this->search_history_panel->ResumeLayout(false);
			this->search_history_panel->PerformLayout();
			this->search_contact_panel->ResumeLayout(false);
			this->search_contact_panel->PerformLayout();
			this->add_grp_panel->ResumeLayout(false);
			this->add_grp_panel->PerformLayout();
			this->Group_contacts_panel->ResumeLayout(false);
			this->Group_contacts_panel->PerformLayout();
			this->view_details_panel1->ResumeLayout(false);
			this->view_details_panel1->PerformLayout();
			this->group_list_panel->ResumeLayout(false);
			this->group_list_panel->PerformLayout();
			this->Select_contact_panel->ResumeLayout(false);
			this->Select_contact_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Add_record_panel->Visible = false;
		this->all_contacts_list->Visible = false;

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Add_contact_button_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Add_record_panel->Visible = true;
		this->all_contacts_list->Visible = false;

		timer4->Start();



	}
	private: System::Void Print_contacts_button_Click(System::Object^ sender, System::EventArgs^ e) {


		this->all_contacts_list->Items->Clear();


		Contact* contact_list = Contact_book->get_contact_list();


		for (int i = 0; i < Contact_book->total_contacts(); i++) {



			this->all_contacts_list->Items->Add(gcnew String(contact_list[i].get_first_name().c_str()));
			this->all_contacts_list->Items[i]->SubItems->Add(gcnew String(contact_list[i].get_mobile_number().c_str()));
		}

	

		this->all_contacts_list->Refresh();




		timer2->Start();
		this->all_contacts_list->Visible = true;
		this->Add_record_panel->Visible = false;


	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Add_Done_button_Click(System::Object^ sender, System::EventArgs^ e) {


		Contact temp;
		Address address;
		std::string conv;
		String^ input = this->first_Name_tbox->Text->ToString();
		if (!(input->Length == 0)) {
			MarshalString(input, conv);
			temp.set_first_name(conv);
		}
		input = this->Last_name_tbox->Text->ToString();
		MarshalString(input, conv);
		temp.set_last_name(conv);
		input = this->Phone_tbox->Text->ToString();
		MarshalString(input, conv);
		temp.set_mobile_number(conv);
		input = this->email_tbox->Text->ToString();
		MarshalString(input, conv);
		temp.set_email_address(conv);
		input = this->house_tbox->Text->ToString();
		MarshalString(input, conv);
		address.set_house(conv);
		input = this->Street_tbox->Text->ToString();
		MarshalString(input, conv);
		address.set_street(conv);
		input = this->city_tbox->Text->ToString();
		MarshalString(input, conv);
		address.set_city(conv);
		input = this->Country_tbox->Text->ToString();
		MarshalString(input, conv);
		address.set_country(conv);
		temp.set_address(&address);
		Contact_book->add_contact(temp);

		this->Add_record_panel->Visible = false;
		this->first_Name_tbox->Clear();
		this->Last_name_tbox->Clear();
		this->Phone_tbox->Clear();
		this->email_tbox->Clear();
		this->house_tbox->Clear();
		this->Street_tbox->Clear();
		this->city_tbox->Clear();
		this->Country_tbox->Clear();






		this->timer4->Start();

	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Start();

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (side) {
			side_bar->Width -= 10;
			side_bar->Height -= 10;

			if (side_bar->Width == side_bar->MinimumSize.Width && side_bar->Height == side_bar->MinimumSize.Height) {
				side = false;
				timer1->Stop();
			}
		}
		else {

			side_bar->Width += 10;
			side_bar->Height += 10;

			if (side_bar->Width == side_bar->MaximumSize.Width && side_bar->Height == side_bar->MaximumSize.Height) {
				side = true;
				timer1->Stop();
			}
		}
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (side) {
			list_side_bar->Width -= 10;


			if (list_side_bar->Width == list_side_bar->MinimumSize.Width) {
				side = false;
				timer2->Stop();
			}
		}
		else {

			list_side_bar->Width += 10;


			if (list_side_bar->Width == list_side_bar->MaximumSize.Width) {
				side = true;
				timer2->Stop();
			}
		}
	}
	private: System::Void list_side_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Add_record_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Add_grp_button_Click(System::Object^ sender, System::EventArgs^ e) {

			timer3->Start();
		this->Add_record_panel->Visible = false;
	

	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (side) {

			group_container->Height -= 10;
			group_container->Width -= 10;

			if (group_container->Height == group_container->MinimumSize.Height && group_container->Width == group_container->MinimumSize.Width) {
				side = false;
				timer3->Stop();
			}
		}
		else {

			group_container->Height += 10;
			group_container->Width += 10;

			if (group_container->Height == group_container->MaximumSize.Height && group_container->Width == group_container->MaximumSize.Width) {
				side = true;
				timer3->Stop();
			}
		}

	}
	private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (side) {

			Add_record_panel->Height -= 10;
			Add_record_panel->Width -= 10;

			if (Add_record_panel->Height == Add_record_panel->MinimumSize.Height && Add_record_panel->Width == Add_record_panel->MinimumSize.Width) {
				side = false;
				timer4->Stop();
			}
		}
		else {

			Add_record_panel->Height += 10;
			Add_record_panel->Width += 10;

			if (Add_record_panel->Height == Add_record_panel->MaximumSize.Height && Add_record_panel->Width == Add_record_panel->MaximumSize.Width) {
				side = true;
				timer4->Stop();
			}
		}


	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void House_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer5_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (side) {



			view_details_panel1->Height -= 10;
			view_details_panel1->Width -= 10;

			if (view_details_panel1->Height == view_details_panel1->MinimumSize.Height && view_details_panel1->Width == view_details_panel1->MinimumSize.Width) {
				side = false;
				timer5->Stop();
			}
		}
		else {

			view_details_panel1->Height += 10;
			view_details_panel1->Width += 10;

			if (view_details_panel1->Height == view_details_panel1->MaximumSize.Height && view_details_panel1->Width == view_details_panel1->MaximumSize.Width) {
				side = true;
				timer5->Stop();
			}
		}




	}
	private: System::Void view_details_button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->all_contacts_list->Items->Count < 1) {
			return;
		}

		if (this->all_contacts_list->SelectedItems->Count < 1) {
			return;
		}

	


		int selected_index = this->all_contacts_list->FocusedItem->Index;


		Contact* contact_item = Contact_book->get_contact_list();

		String^ conv = gcnew String(contact_item[selected_index].get_first_name().c_str());
		this->first_name_label->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_last_name().c_str());
		this->last_name_label->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_mobile_number().c_str());
		this->Phone_label->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_address()->get_house().c_str());
		this->House_label->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_address()->get_street().c_str());
		this->Street_label->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_email_address().c_str());
		this->mail_label->Text = conv;


		conv = gcnew String(contact_item[selected_index].get_address()->get_city().c_str());
		this->City_label->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_address()->get_country().c_str());
		this->Country_label->Text = conv;

		this->timer5->Start();
	}
	private: System::Void update_contact_pane_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {


	}
	private: System::Void Merge_button_Click(System::Object^ sender, System::EventArgs^ e) {


		Contact_book->merge_duplicates();

		MessageBox::Show("  Sucessfully Merged ", "Merge Contacts ", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	private: System::Void Sort_button_Click(System::Object^ sender, System::EventArgs^ e) {


		

		MessageBox::Show(" Sucessfully sorted ", "Sort Contact", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	private: System::Void search_history_button_Click(System::Object^ sender, System::EventArgs^ e) {





		this->searched_history_list->Items->Clear();
		
		std::string* ok = Contact_book->get_searched_strings();
		
		std::string* ptr = Contact_book->get_time();

		Contact* temp = Contact_book->get_searched_contacts();

		for (int i = 0; i <Contact_book->get_words_count(); i++) {


			this->searched_history_list->Items->Add(gcnew String(ok[i].c_str()));
			this->searched_history_list->Items[i]->SubItems->Add(gcnew String(temp[i].get_first_name().c_str()));
			this->searched_history_list->Items[i]->SubItems->Add(gcnew String(temp[i].get_mobile_number().c_str()));
			this->searched_history_list->Items[i]->SubItems->Add(gcnew String(ptr[i].c_str()));
		}

		this->timer12->Start();

	}
	private: System::Void listView3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void Search_button_Click(System::Object^ sender, System::EventArgs^ e) {


		this->search_results_list->Items->Clear();
		std::string conv;

		String^ input = this->Search_tbox->Text->ToString();
		
			MarshalString(input, conv);
			this->useful = &conv;
			Contact* Contact_list = Contact_book->search_contact(conv);

		

		for (int i = 0; i < Contact_book->get_county(); i++) {

			this->search_results_list->Items->Add(gcnew String(Contact_list[i].get_first_name().c_str()));
			this->search_results_list->Items[i]->SubItems->Add(gcnew String(Contact_list[i].get_mobile_number().c_str()));

		}
		


		this->search_results_list->Refresh();

		this->search_results_list->Visible = true;

		this->Search_tbox->Clear();


	}
	private: System::Void search_contact_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label27_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label28_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Phone_tbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Update_button_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (this->all_contacts_list->Items->Count < 1) {
			return;
		}

		if (this->all_contacts_list->SelectedItems->Count < 1) {
			return;
		}

		int selected_index = this->all_contacts_list->FocusedItem->Index;
		Contact* contact_item = Contact_book->get_contact_list();

		String^ conv = gcnew String(contact_item[selected_index].get_first_name().c_str());
		this->update_first_name->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_last_name().c_str());
		this->update_last_name->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_mobile_number().c_str());
		this->update_phone->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_address()->get_house().c_str());
		this->update_house->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_address()->get_street().c_str());
		this->update_street->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_address()->get_city().c_str());
		this->update_city->Text = conv;

		conv = gcnew String(contact_item[selected_index].get_address()->get_country().c_str());
		this->update_country->Text = conv;


		this->update_contact_pane->Visible = true;
		timer6->Start();

	}
	private: System::Void timer6_Tick(System::Object^ sender, System::EventArgs^ e)
	{

		if (side) {

			update_contact_pane->Height -= 10;
			update_contact_pane->Width -= 10;

			if (update_contact_pane->Height == update_contact_pane->MinimumSize.Height && update_contact_pane->Width == update_contact_pane->MinimumSize.Width) {
				side = false;
				timer6->Stop();
			}
		}
		else {

			update_contact_pane->Height += 10;
			update_contact_pane->Width += 10;

			if (update_contact_pane->Height == update_contact_pane->MaximumSize.Height && update_contact_pane->Width == update_contact_pane->MaximumSize.Width) {
				side = true;
				timer6->Stop();
			}
		}


	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void update_done_button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Contact temp;
		Address address;
		std::string conv;
		String^ input = this->update_first_name->Text->ToString();
		if (!(input->Length == 0)) {
			MarshalString(input, conv);
			temp.set_first_name(conv);
		}
		input = this->update_last_name->Text->ToString();
		MarshalString(input, conv);
		temp.set_last_name(conv);
		input = this->update_phone->Text->ToString();
		MarshalString(input, conv);
		temp.set_mobile_number(conv);
		input = this->update_email->Text->ToString();
		MarshalString(input, conv);
		temp.set_email_address(conv);
		input = this->update_house->Text->ToString();
		MarshalString(input, conv);
		address.set_house(conv);
		input = this->update_street->Text->ToString();
		MarshalString(input, conv);
		address.set_street(conv);
		input = this->update_city->Text->ToString();
		MarshalString(input, conv);
		address.set_city(conv);
		input = this->update_country->Text->ToString();
		MarshalString(input, conv);
		address.set_country(conv);
		temp.set_address(&address);


		int index = this->all_contacts_list->FocusedItem->Index;

		Contact_book->update_contact(index, temp);

		this->update_contact_pane->Visible = false;
		this->update_first_name->Clear();
		this->update_last_name->Clear();
		this->update_phone->Clear();
		this->update_email->Clear();
		this->update_house->Clear();
		this->update_street->Clear();
		this->update_city->Clear();
		this->update_country->Clear();

		this->timer5->Start();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		this->add_grp_panel->Visible = true;

		this->timer10->Start();
		
		
	}
private: System::Void add_done_group_Click(System::Object^ sender, System::EventArgs^ e) {


	std::string c_input;
	String^ input = this->grp_name_tbox->Text->ToString();

	MarshalString(input, c_input);

	this->Contact_book->add_group(c_input);

	MessageBox::Show("sucessfully added Group", "Adding Group", MessageBoxButtons::OK, MessageBoxIcon::Information);

	this->grp_name_tbox->Clear();

	this->timer10->Start();
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {


	this->groups_list_view->Items->Clear();
	Group* grp_list = Contact_book->get_group_list();


	for (int i = 0; i < Contact_book->get_group_counts(); i++) {


		this->groups_list_view->Items->Add(gcnew String(grp_list[i].get_group_name().c_str()));

	}
	this->groups_list_view->Refresh();
	this->groups_list_view->Visible = true;


	


	this->group_container->Visible=false;
	this->timer7->Start();
	
}
private: System::Void view_grp_details_button_Click(System::Object^ sender, System::EventArgs^ e) {

	this->timer8->Start();
	if (this->groups_list_view->Items->Count < 1) {
		return;
	}

	if (this->groups_list_view->SelectedItems->Count < 1) {
		return;
	}
	this->groups_list->Items->Clear();
	int index = this->groups_list_view->FocusedItem->Index;
	Group* grp_list = Contact_book->get_group_list();
    String^ grp_name = gcnew String(grp_list[index].get_group_name().c_str());
	this->group_name_label->Text = grp_name;

	Contact* temp = Contact_book->get_grp_contact_list(index);

	for (int i = 0; i < grp_list[index].get_grp_contacts_count(); i++)
	{
		this->groups_list->Items->Add(gcnew String(temp[i].get_first_name().c_str()));
		this->groups_list->Items[i]->SubItems->Add(gcnew String(temp[i].get_mobile_number().c_str()));

	}
	this->groups_list->Refresh();
	this->groups_list->Visible = true;


	

}
private: System::Void button2_Click_2(System::Object^ sender, System::EventArgs^ e) {


	
	this->Select_contact_list->Items->Clear();
	Contact* contact_list = Contact_book->get_contact_list();


	for (int i = 0; i < Contact_book->total_contacts(); i++) {


		this->Select_contact_list->Items->Add(gcnew String(contact_list[i].get_first_name().c_str()));
		this->Select_contact_list->Items[i]->SubItems->Add(gcnew String(contact_list->get_mobile_number().c_str()));
	}


	this->Select_contact_list->Refresh();

	this->Select_contact_panel->Visible = true;
	this->timer9->Start();

}
private: System::Void select_contact_button_Click(System::Object^ sender, System::EventArgs^ e) {

	this->timer9->Start();
	if (this->Select_contact_list->Items->Count < 1) {
		return;
	}

	if (this->Select_contact_list->SelectedItems->Count < 1) {
		return;
	}
	int contact_index = this->Select_contact_list->FocusedItem->Index;
	int grp_index = this->groups_list_view->FocusedItem->Index;
	Contact* temp = Contact_book->get_contact_list();

	int id = temp[contact_index].get_Contact_id();

	Contact_book->add_contact_in_grp(grp_index, id);

	

//	this->timer9->Start();

}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void group_list_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void groups_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void View_details_ok_button_Click(System::Object^ sender, System::EventArgs^ e) {

	this->timer5->Start();
}
private: System::Void timer7_Tick(System::Object^ sender, System::EventArgs^ e) {


	if (side) {

		group_list_panel->Height -= 10;
		group_list_panel->Width -= 10;

		if (group_list_panel->Height == group_list_panel->MinimumSize.Height && group_list_panel->Width == group_list_panel->MinimumSize.Width) {
			side = false;
			timer7->Stop();
		}
	}
	else {

		group_list_panel->Height += 10;
		group_list_panel->Width += 10;

		if (group_list_panel->Height == group_list_panel->MaximumSize.Height && group_list_panel->Width == group_list_panel->MaximumSize.Width) {
			side = true;
			timer7->Stop();
		}
	}

}
private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (side) {

		Group_contacts_panel->Height -= 10;
	Group_contacts_panel->Width -= 10;

		if (Group_contacts_panel->Height == Group_contacts_panel->MinimumSize.Height && Group_contacts_panel->Width == Group_contacts_panel->MinimumSize.Width) {
			side = false;
			timer8->Stop();
		}
	}
	else {

		Group_contacts_panel->Height += 10;
		Group_contacts_panel->Width += 10;

		if (Group_contacts_panel->Height == Group_contacts_panel->MaximumSize.Height && Group_contacts_panel->Width == Group_contacts_panel->MaximumSize.Width) {
			side = true;
			timer8->Stop();
		}
	}



}
private: System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {


	if (side) {

		Select_contact_panel->Height -= 10;
		Select_contact_panel->Width -= 10;

		if (Select_contact_panel->Height == Select_contact_panel->MinimumSize.Height && Select_contact_panel->Width == Select_contact_panel->MinimumSize.Width) {
			side = false;
			timer9->Stop();
		}
	}
	else {

		Select_contact_panel->Height += 10;
		Select_contact_panel->Width += 10;

		if (Select_contact_panel->Height == Select_contact_panel->MaximumSize.Height && Select_contact_panel->Width == Select_contact_panel->MaximumSize.Width) {
			side = true;
			timer9->Stop();
		}
	}





}
private: System::Void timer10_Tick(System::Object^ sender, System::EventArgs^ e) {


	if (side) {

		add_grp_panel->Height -= 10;
		add_grp_panel->Width -= 10;

		if (add_grp_panel->Height == add_grp_panel->MinimumSize.Height && add_grp_panel->Width == add_grp_panel->MinimumSize.Width) {
			side = false;
			timer10->Stop();
		}
	}
	else {

		add_grp_panel->Height += 10;
		add_grp_panel->Width += 10;

		if (add_grp_panel->Height == add_grp_panel->MaximumSize.Height && add_grp_panel->Width == add_grp_panel->MaximumSize.Width) {
			side = true;
			timer10->Stop();
		}
	}



}
private: System::Void delete_contact_button_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->all_contacts_list->Items->Count < 1) {
		return;
	}

	if (this->all_contacts_list->SelectedItems->Count < 1) {
		return;
	}
	int selected_index = this->all_contacts_list->FocusedItem->Index;
	this->all_contacts_list->Items->RemoveAt(selected_index);
	 
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {


	if (this->groups_list->Items->Count < 1) {
		return;
	}

	if (this->groups_list->SelectedItems->Count < 1) {
		return;
	}

	int index = this->groups_list->FocusedItem->Index;

	this->groups_list->Items->RemoveAt(index);

	Contact_book->delete_grp(index);

}
private: System::Void search_view_contact_Click(System::Object^ sender, System::EventArgs^ e) {


	if (this->search_results_list->Items->Count < 1) {
		return;
	}

	if (this->search_results_list->SelectedItems->Count < 1) {
		return;
	}




	int selected_index = this->search_results_list->FocusedItem->Index;


	Contact* contact_item = Contact_book->search_contact(*useful);

	String^ conv = gcnew String(contact_item[selected_index].get_first_name().c_str());
	this->first_name_label->Text = conv;

	conv = gcnew String(contact_item[selected_index].get_last_name().c_str());
	this->last_name_label->Text = conv;

	conv = gcnew String(contact_item[selected_index].get_mobile_number().c_str());
	this->Phone_label->Text = conv;

	conv = gcnew String(contact_item[selected_index].get_address()->get_house().c_str());
	this->House_label->Text = conv;

	conv = gcnew String(contact_item[selected_index].get_address()->get_street().c_str());
	this->Street_label->Text = conv;

	conv = gcnew String(contact_item[selected_index].get_email_address().c_str());
	this->mail_label->Text = conv;


	conv = gcnew String(contact_item[selected_index].get_address()->get_city().c_str());
	this->City_label->Text = conv;

	conv = gcnew String(contact_item[selected_index].get_address()->get_country().c_str());
	this->Country_label->Text = conv;



	Contact_book->add_contact_in_search(contact_item[selected_index].get_Contact_id());
	this->timer5->Start();
	this->timer11->Start();
	
}
private: System::Void searched_history_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	this->timer7->Start();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->timer8->Start();

}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

	this->timer11->Start();


}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	timer11->Start();
}
private: System::Void timer11_Tick(System::Object^ sender, System::EventArgs^ e) {



	if (side) {

		search_contact_panel->Height -= 10;
		search_contact_panel->Width -= 10;

		if (search_contact_panel->Height == search_contact_panel->MinimumSize.Height && search_contact_panel->Width == search_contact_panel->MinimumSize.Width) {
			side = false;
			timer11->Stop();
		}
	}
	else {

		search_contact_panel->Height += 10;
		search_contact_panel->Width += 10;

		if (search_contact_panel->Height == search_contact_panel->MaximumSize.Height && search_contact_panel->Width == search_contact_panel->MaximumSize.Width) {
			side = true;
			timer11->Stop();
		}
	}






}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	this->timer12->Start();

}
private: System::Void timer12_Tick(System::Object^ sender, System::EventArgs^ e) {


	if (side) {

		search_history_panel->Height -= 10;
		search_history_panel->Width -= 10;

		if (search_history_panel->Height == search_history_panel->MinimumSize.Height && search_history_panel->Width == search_history_panel->MinimumSize.Width) {
			side = false;
			timer12->Stop();
		}
	}
	else {

		search_history_panel->Height += 10;
		search_history_panel->Width += 10;

		if (search_history_panel->Height == search_history_panel->MaximumSize.Height && search_history_panel->Width == search_history_panel->MaximumSize.Width) {
			side = true;
			timer12->Stop();
		}
	}

	

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Contact_book->save_to_file("Data.txt");

	MessageBox::Show(" Sucessfully Saved To file ", "Saving in file", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Contact_book->load_from_file("Data.txt");
	MessageBox::Show(" Sucessfully Loaded ", "Loading in file", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Contact* list = new Contact[5];
	Contact* temp = Contact_book->get_contact_list();
	int* ids = Contact_book->get_frequently_searched_contacts();

	for (int i = 0; i < 5; i++) {


		if (ids[i] == temp[i].get_Contact_id())
			list[i] = temp[i];

	}

	this->listView1->Items->Clear();


	


	for (int i = 0; i < 5; i++) {



		this->listView1->Items->Add(gcnew String(list[i].get_first_name().c_str()));
		this->listView1->Items[i]->SubItems->Add(gcnew String(list[i].get_mobile_number().c_str()));
	}



	this->listView1->Refresh();

}
};
}
