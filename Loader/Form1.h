#pragma once
#include "CppCLR_WinformsProjekt.h"


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	protected:
	private: System::Windows::Forms::SplitContainer^ splitContainer2;



	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ TextboxPath;
	private: System::Windows::Forms::OpenFileDialog^ FileDialog;
		   //private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxDevice;

	private: System::Windows::Forms::TextBox^ textBoxService;
	private: System::Windows::Forms::Label^ TextStatus;
	private: System::Windows::Forms::Label^ TextMode;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Label^ label6;

	private: System::ComponentModel::IContainer^ components;









	protected:


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxDevice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxService = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TextMode = (gcnew System::Windows::Forms::Label());
			this->TextStatus = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->TextboxPath = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->TextMode);
			this->splitContainer1->Panel2->Controls->Add(this->TextStatus);
			this->splitContainer1->Panel2->Controls->Add(this->button2);
			this->splitContainer1->Panel2->Controls->Add(this->TextboxPath);
			this->splitContainer1->Panel2->Controls->Add(this->label5);
			this->splitContainer1->Panel2->Controls->Add(this->label4);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Size = System::Drawing::Size(529, 218);
			this->splitContainer1->SplitterDistance = 96;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->label6);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxDevice);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxService);
			this->splitContainer2->Panel1->Controls->Add(this->label7);
			this->splitContainer2->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->button1);
			this->splitContainer2->Size = System::Drawing::Size(529, 96);
			this->splitContainer2->SplitterDistance = 211;
			this->splitContainer2->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Service Name: ";
			// 
			// textBoxDevice
			// 
			this->textBoxDevice->Location = System::Drawing::Point(96, 71);
			this->textBoxDevice->Name = L"textBoxDevice";
			this->textBoxDevice->Size = System::Drawing::Size(100, 20);
			this->textBoxDevice->TabIndex = 7;
			// 
			// textBoxService
			// 
			this->textBoxService->Location = System::Drawing::Point(96, 36);
			this->textBoxService->Name = L"textBoxService";
			this->textBoxService->Size = System::Drawing::Size(100, 20);
			this->textBoxService->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Device Name: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Setup:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(79, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Select Driver";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::onClickEvent);
			// 
			// TextMode
			// 
			this->TextMode->AutoSize = true;
			this->TextMode->Location = System::Drawing::Point(57, 68);
			this->TextMode->Name = L"TextMode";
			this->TextMode->Size = System::Drawing::Size(27, 13);
			this->TextMode->TabIndex = 8;
			this->TextMode->Text = L"N/A";
			// 
			// TextStatus
			// 
			this->TextStatus->AutoSize = true;
			this->TextStatus->Location = System::Drawing::Point(57, 93);
			this->TextStatus->Name = L"TextStatus";
			this->TextStatus->Size = System::Drawing::Size(27, 13);
			this->TextStatus->TabIndex = 7;
			this->TextStatus->Text = L"N/A";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(295, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Load Driver";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::onExecuteEvent);
			// 
			// TextboxPath
			// 
			this->TextboxPath->AutoSize = true;
			this->TextboxPath->Location = System::Drawing::Point(57, 43);
			this->TextboxPath->Name = L"TextboxPath";
			this->TextboxPath->Size = System::Drawing::Size(27, 13);
			this->TextboxPath->TabIndex = 5;
			this->TextboxPath->Text = L"C:\\\\";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Status: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Mode: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Path: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Information:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 218);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Driver Loader";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->ResumeLayout(false);

		}

	private: System::Void onClickEvent(System::Object^ sender, System::EventArgs^ e) {
		//OpenFileDialog^ OF = openFileDialog1;
		if (this->textBoxService->Text == "" || this->textBoxDevice->Text == "")
		{
			System::String^ msg = L"Service Name / Device Name \nCan not be empty!";
			System::String^ caption = L"ERROR";
			MessageBox::Show(msg, caption);
			return;
		}
		this->openFileDialog1->InitialDirectory = "C:\\";
		this->openFileDialog1->Filter = "Driver files (.sys) | *.sys";
		if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->openFileDialog1->FilterIndex = 0;
			this->openFileDialog1->RestoreDirectory = true;
			this->TextboxPath->Text = (this->openFileDialog1->FileName);

			// Free managed memory region of pointer to text input to unmanaged memory to later convert to desired type
			IntPtr ptrService = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBoxService->Text);
			IntPtr ptrDevice = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->textBoxDevice->Text);
			IntPtr ptrDriver = System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->TextboxPath->Text);
			this->TextStatus->Text = L"Ready!";
			this->TextStatus->ForeColor.Green;
		}
	}

	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void onExecuteEvent(System::Object^ sender, System::EventArgs^ e) {
		System::String^ msg;
		System::String^ caption = L"ERROR";
		if (this->textBoxService->Text == "" || this->textBoxDevice->Text == "") {
			msg = L"Service Name / Device Name \nCan not be empty!";
			MessageBox::Show(msg, caption);
			this->TextStatus->Text = L"N/A";
			this->TextStatus->ForeColor.Red;
			return;
		}
		if (this->TextboxPath->Text->Contains(L".sys")) {
			this->TextStatus->Text = L"Call to DLL. Loading Driver!";
			this->TextStatus->ForeColor.Green;

			LPCWSTR ptrService = (LPCWSTR)System::Runtime::InteropServices::Marshal::StringToHGlobalUni(this->textBoxService->Text).ToPointer();
			LPCWSTR ptrDevice = (LPCWSTR)System::Runtime::InteropServices::Marshal::StringToHGlobalUni(this->textBoxDevice->Text).ToPointer();
			LPCWSTR ptrDriver = (LPCWSTR)System::Runtime::InteropServices::Marshal::StringToHGlobalUni(this->TextboxPath->Text).ToPointer();

			callDLL(ptrService, ptrDevice, ptrDriver);
			return;
		}

		msg = L"Select a driver to load!";
		MessageBox::Show(msg, caption);
		this->TextStatus->Text = L"N/A";
		this->TextStatus->ForeColor.Red;
		return;
	};
	};
}
