//  -----------------------------------------------------------------------------------------
//    �g�� x264/x265 �o��(GUI) Ex  v1.xx/2.xx/3.xx by rigaya
//  -----------------------------------------------------------------------------------------
//   �\�[�X�R�[�h�ɂ���
//   �E���ۏ؂ł��B
//   �E�{�\�[�X�R�[�h���g�p�������Ƃɂ�邢���Ȃ鑹�Q�E�g���u���ɂ���rigaya�͐ӔC�𕉂��܂���B
//   �ȏ�ɗ������Ē�����ꍇ�A�{�\�[�X�R�[�h�̎g�p�A�����A���ρA�ĔЕz���s���Ē����č\���܂���B
//  -----------------------------------------------------------------------------------------

#pragma once

#include "frmConfig_helper.h"

namespace svtAV1guiEx {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Threading;

    /// <summary>
    /// frmUpdate �̊T�v
    /// </summary>
    public ref class frmUpdate : public System::Windows::Forms::Form
    {
    public:
        frmUpdate(void)
        {

            InitializeComponent();
            //
            //TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
            //
        }

    protected:
        /// <summary>
        /// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
        /// </summary>
        ~frmUpdate()
        {
            //�E�B���h�E�Ɋ֘A�Â��Ă���Delegate�Ȃǂ����݂���\���̂���auoSetupCtrl���܂�delete
            if (nullptr != auoSetupCtrl) {
                delete auoSetupCtrl;
            }
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::DataGridView^  fruDGExeFiles;
    private: System::Windows::Forms::ProgressBar^  fruPBUpdate;
    private: System::Windows::Forms::Label^  fruLBUpdate;
    protected:



    private: System::Windows::Forms::Button^  fruBTUpdate;

    private: System::Windows::Forms::TextBox^  fruTXUpdate;

    protected:

    private:
        /// <summary>
        /// �K�v�ȃf�U�C�i�[�ϐ��ł��B
        /// </summary>
        System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
        /// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
        /// </summary>
        void InitializeComponent(void)
        {
            this->fruDGExeFiles = (gcnew System::Windows::Forms::DataGridView());
            this->fruPBUpdate = (gcnew System::Windows::Forms::ProgressBar());
            this->fruLBUpdate = (gcnew System::Windows::Forms::Label());
            this->fruBTUpdate = (gcnew System::Windows::Forms::Button());
            this->fruTXUpdate = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fruDGExeFiles))->BeginInit();
            this->SuspendLayout();
            // 
            // fruDGExeFiles
            // 
            this->fruDGExeFiles->AllowUserToAddRows = false;
            this->fruDGExeFiles->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->fruDGExeFiles->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->fruDGExeFiles->BackgroundColor = System::Drawing::SystemColors::Control;
            this->fruDGExeFiles->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->fruDGExeFiles->Location = System::Drawing::Point(18, 65);
            this->fruDGExeFiles->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->fruDGExeFiles->Name = L"fruDGExeFiles";
            this->fruDGExeFiles->ReadOnly = true;
            this->fruDGExeFiles->RowTemplate->Height = 21;
            this->fruDGExeFiles->Size = System::Drawing::Size(519, 159);
            this->fruDGExeFiles->TabIndex = 0;
            // 
            // fruPBUpdate
            // 
            this->fruPBUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->fruPBUpdate->Location = System::Drawing::Point(18, 466);
            this->fruPBUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->fruPBUpdate->Name = L"fruPBUpdate";
            this->fruPBUpdate->Size = System::Drawing::Size(325, 36);
            this->fruPBUpdate->TabIndex = 30;
            this->fruPBUpdate->Visible = false;
            // 
            // fruLBUpdate
            // 
            this->fruLBUpdate->AutoSize = true;
            this->fruLBUpdate->Location = System::Drawing::Point(18, 22);
            this->fruLBUpdate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->fruLBUpdate->Name = L"fruLBUpdate";
            this->fruLBUpdate->Size = System::Drawing::Size(277, 19);
            this->fruLBUpdate->TabIndex = 29;
            this->fruLBUpdate->Text = L"�e����s�t�@�C���̍X�V���s�����Ƃ��ł��܂��B";
            // 
            // fruBTUpdate
            // 
            this->fruBTUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->fruBTUpdate->Location = System::Drawing::Point(355, 454);
            this->fruBTUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->fruBTUpdate->Name = L"fruBTUpdate";
            this->fruBTUpdate->Size = System::Drawing::Size(181, 56);
            this->fruBTUpdate->TabIndex = 28;
            this->fruBTUpdate->Text = L"�X�V�`�F�b�N";
            this->fruBTUpdate->UseVisualStyleBackColor = true;
            this->fruBTUpdate->Click += gcnew System::EventHandler(this, &frmUpdate::fruBTUpdate_Click);
            // 
            // fruTXUpdate
            // 
            this->fruTXUpdate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->fruTXUpdate->Location = System::Drawing::Point(18, 234);
            this->fruTXUpdate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->fruTXUpdate->Multiline = true;
            this->fruTXUpdate->Name = L"fruTXUpdate";
            this->fruTXUpdate->ReadOnly = true;
            this->fruTXUpdate->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->fruTXUpdate->Size = System::Drawing::Size(515, 209);
            this->fruTXUpdate->TabIndex = 31;
            // 
            // frmUpdate
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
            this->ClientSize = System::Drawing::Size(552, 529);
            this->Controls->Add(this->fruTXUpdate);
            this->Controls->Add(this->fruPBUpdate);
            this->Controls->Add(this->fruLBUpdate);
            this->Controls->Add(this->fruBTUpdate);
            this->Controls->Add(this->fruDGExeFiles);
            this->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(128)));
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"frmUpdate";
            this->Text = L"���s�t�@�C���̃A�b�v�f�[�g";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmUpdate::frmUpdate_FormClosing);
            this->Load += gcnew System::EventHandler(this, &frmUpdate::frmUpdate_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fruDGExeFiles))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        bool updateFinWaiting;
        System::Object^ updateFinLockObject;
        ManualResetEvent^ updateFinEvent;
        auoSetupControl^ auoSetupCtrl;
        DataTable^ versionInfo;
        DelegateProcessFin^ checkFin;  //�X�V�`�F�b�N�I������frmConfig���ւ̃R�[���o�b�N
        DelegateProcessFin^ updateFin; //�X�V�I������frmConfig���ւ̃R�[���o�b�N
        System::Void frmUpdate_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
    public:
        System::Boolean waitingForUpdateFinishes() {
            if (updateFinWaiting)
                this->Show();
            return updateFinWaiting;
        }
    public:
        //frmConfig���ւ̃R�[���o�b�N���󂯎���Ă���
        System::Void init(DelegateProcessFin^ progCheckFin, DelegateProcessFin^ progUpdateFin) {
            this->checkFin = progCheckFin;
            this->updateFin = progUpdateFin;
            updateFinEvent = nullptr;
            updateFinLockObject = gcnew System::Object();
            updateFinWaiting = false;

            if (nullptr == auoSetupCtrl) {
                auoSetupCtrl = gcnew auoSetupControl();
                auoSetupCtrl->init();
                versionInfo = auoSetupCtrl->getVersionInfoDataTable();
                fruDGExeFiles->DataSource = versionInfo;
            }
        }
    public:
        //�X�V�`�F�b�N�̊J�n
        System::Void startCheck() {
            //frmConfig���ւ̃R�[���o�b�N�Ǝ���(frmUpdate)�ւ̃R�[���o�b�N�𗼕��n��
            auoSetupCtrl->checkAsync(checkFin + gcnew svtAV1guiEx::DelegateProcessFin(this, &frmUpdate::frmCheckFinished));

            fruTXUpdate->Text = L"�X�V�����擾���Ă��܂�...";
            fruPBUpdate->Minimum = 0;
            fruPBUpdate->Maximum = 100;
            fruPBUpdate->Value = 0;
            fruPBUpdate->Style = ProgressBarStyle::Marquee;
            fruPBUpdate->Visible = true;
            fruBTUpdate->Enabled = false;
        }
    private:
        System::Void frmUpdate_Load(System::Object^  sender, System::EventArgs^  e) {
            if (nullptr == auoSetupCtrl) {
                auoSetupCtrl = gcnew auoSetupControl();
                auoSetupCtrl->init();
                versionInfo = auoSetupCtrl->getVersionInfoDataTable();
                fruDGExeFiles->DataSource = versionInfo;
            }
            if (0 == String::Compare(fruBTUpdate->Text, L"�X�V�`�F�b�N")) {
                startCheck();
            }
        }
    private:
        System::Void frmMessage(String^ message) {
            if (this->InvokeRequired) {
                this->Invoke(gcnew svtAV1guiEx::DelegateMessage(this, &frmUpdate::frmMessage), message);
                return;
            }
            fruTXUpdate->AppendText(message);
            if (this->Visible) {
                fruTXUpdate->ScrollToCaret();
            }
        }
    private:
        //�X�V�`�F�b�N�I���̃R�[���o�b�N
        System::Void frmCheckFinished(String^ message) {
            if (this->InvokeRequired) {
                this->Invoke(gcnew svtAV1guiEx::DelegateMessage(this, &frmUpdate::frmCheckFinished), message);
                return;
            }
            fruPBUpdate->Style = ProgressBarStyle::Continuous;
            fruPBUpdate->Visible = false;

            fruTXUpdate->Clear();
            fruTXUpdate->Text = message;

            fruBTUpdate->Text = L"�X�V";
            fruBTUpdate->Enabled = auoSetupControl::checkIfUpdateAvailable(message);
        }
    private:
        //�X�V�I���̃R�[���o�b�N
        //�v�X�V�̃G���[�`�F�b�N
        System::Void frmUpdateFinished(String^ message) {
            if (this->InvokeRequired) {
                this->Invoke(gcnew svtAV1guiEx::DelegateMessage(this, &frmUpdate::frmUpdateFinished), message);
                return;
            }
            switch (auoSetupControl::strToResult(message)) {
            case auoSetupControl::auoSetupResult::success:
                fruTXUpdate->AppendText("�X�V�I��\r\n");

                //�v���O���X�o�[�ɍX�V�I����\��
                fruPBUpdate->Style = ProgressBarStyle::Continuous;
                fruPBUpdate->Value = 100;

                fruBTUpdate->Text = L"�I��";
                fruBTUpdate->Enabled = true;
                break;
            case auoSetupControl::auoSetupResult::abort:
                fruPBUpdate->Style = ProgressBarStyle::Continuous;
                fruPBUpdate->Visible = false;

                fruBTUpdate->Text = L"�X�V";
                fruBTUpdate->Enabled = true;
                break;
            case auoSetupControl::auoSetupResult::error:
            default:
                fruPBUpdate->Visible = false;

                fruBTUpdate->Text = L"�I��";
                fruBTUpdate->Enabled = true;
                break;
            }
            updateFinWaiting = false;
        }
    private:
        //�X�V�{�^���̃`�F�b�N
        System::Void fruBTUpdate_Click(System::Object^  sender, System::EventArgs^  e) {
            if (0 == String::Compare(fruBTUpdate->Text, L"�I��")) {
                this->Close();
            } else if (0 == String::Compare(fruBTUpdate->Text, L"���~")) {
                auoSetupCtrl->abortAuoSetup();
            } else if (0 == String::Compare(fruBTUpdate->Text, L"�X�V")) {
                fruTXUpdate->Clear();
                fruPBUpdate->Minimum = 0;
                fruPBUpdate->Maximum = 100;
                fruPBUpdate->Value = 0;
                fruPBUpdate->Style = ProgressBarStyle::Marquee;
                fruPBUpdate->Visible = true;

                updateFinWaiting = true;

                //frmConfig���ւ̃R�[���o�b�N�Ǝ���(frmUpdate)�ւ̃R�[���o�b�N�𗼕��n��
                auoSetupCtrl->runAsync(
                    gcnew svtAV1guiEx::DelegateMessage(this, &frmUpdate::frmMessage),
                    updateFin + gcnew svtAV1guiEx::DelegateProcessFin(this, &frmUpdate::frmUpdateFinished));
                fruBTUpdate->Text = L"���~";
            } else {
                startCheck();
            }
        }
};
}
