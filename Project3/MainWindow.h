#pragma once
#include <iostream>

using namespace std;

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  Tab_Geoff;
	protected:


	private: System::Windows::Forms::TabPage^  Tab_Ace;
	private: System::Windows::Forms::TabPage^  Tab_James;



	protected:

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->Tab_Geoff = (gcnew System::Windows::Forms::TabPage());
			this->Tab_Ace = (gcnew System::Windows::Forms::TabPage());
			this->Tab_James = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Tab_Geoff);
			this->tabControl1->Controls->Add(this->Tab_Ace);
			this->tabControl1->Controls->Add(this->Tab_James);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1005, 620);
			this->tabControl1->TabIndex = 0;
			// 
			// Tab_Geoff
			// 
			this->Tab_Geoff->Location = System::Drawing::Point(4, 22);
			this->Tab_Geoff->Name = L"Tab_Geoff";
			this->Tab_Geoff->Padding = System::Windows::Forms::Padding(3);
			this->Tab_Geoff->Size = System::Drawing::Size(997, 594);
			this->Tab_Geoff->TabIndex = 1;
			this->Tab_Geoff->Text = L"Geoff";
			this->Tab_Geoff->UseVisualStyleBackColor = true;
			// 
			// Tab_Ace
			// 
			this->Tab_Ace->Location = System::Drawing::Point(4, 22);
			this->Tab_Ace->Name = L"Tab_Ace";
			this->Tab_Ace->Padding = System::Windows::Forms::Padding(3);
			this->Tab_Ace->Size = System::Drawing::Size(997, 594);
			this->Tab_Ace->TabIndex = 2;
			this->Tab_Ace->Text = L"Ace";
			this->Tab_Ace->UseVisualStyleBackColor = true;
			this->Tab_Ace->Click += gcnew System::EventHandler(this, &MainWindow::tabPage1_Click_1);
			// 
			// Tab_James
			// 
			this->Tab_James->Location = System::Drawing::Point(4, 22);
			this->Tab_James->Name = L"Tab_James";
			this->Tab_James->Padding = System::Windows::Forms::Padding(3);
			this->Tab_James->Size = System::Drawing::Size(997, 594);
			this->Tab_James->TabIndex = 3;
			this->Tab_James->Text = L"James";
			this->Tab_James->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1270, 644);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
	} //DONT FUCK WITH THIS LINE OR THE ONE ABOVE, OR IT WILL BREAK.

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("something new cool lol losasdls");
	}
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tabPage1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
