﻿
namespace UsingControls
{
    partial class MainForm
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.grpFont = new System.Windows.Forms.GroupBox();
            this.chkItalic = new System.Windows.Forms.CheckBox();
            this.cboFont = new System.Windows.Forms.ComboBox();
            this.chkBold = new System.Windows.Forms.CheckBox();
            this.txtSampleText = new System.Windows.Forms.TextBox();
            this.lblFont = new System.Windows.Forms.Label();
            this.grpBar = new System.Windows.Forms.GroupBox();
            this.pgDummy = new System.Windows.Forms.ProgressBar();
            this.tbDummy = new System.Windows.Forms.TrackBar();
            this.grpForm = new System.Windows.Forms.GroupBox();
            this.btnMsgBox = new System.Windows.Forms.Button();
            this.btnModaless2 = new System.Windows.Forms.Button();
            this.btnModal2 = new System.Windows.Forms.Button();
            this.tvDummy = new System.Windows.Forms.TreeView();
            this.lvDummy = new System.Windows.Forms.ListView();
            this.grpTreeList = new System.Windows.Forms.GroupBox();
            this.btnAddChild = new System.Windows.Forms.Button();
            this.btnAddRoot = new System.Windows.Forms.Button();
            this.grpFont.SuspendLayout();
            this.grpBar.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.tbDummy)).BeginInit();
            this.grpForm.SuspendLayout();
            this.grpTreeList.SuspendLayout();
            this.SuspendLayout();
            // 
            // grpFont
            // 
            this.grpFont.Controls.Add(this.chkItalic);
            this.grpFont.Controls.Add(this.cboFont);
            this.grpFont.Controls.Add(this.chkBold);
            this.grpFont.Controls.Add(this.txtSampleText);
            this.grpFont.Controls.Add(this.lblFont);
            this.grpFont.Location = new System.Drawing.Point(12, 12);
            this.grpFont.Name = "grpFont";
            this.grpFont.Size = new System.Drawing.Size(776, 92);
            this.grpFont.TabIndex = 0;
            this.grpFont.TabStop = false;
            this.grpFont.Text = "ComboBox, CheckBox, TextBox";
            this.grpFont.Enter += new System.EventHandler(this.MainForm_Load);
            // 
            // chkItalic
            // 
            this.chkItalic.AutoSize = true;
            this.chkItalic.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Italic, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.chkItalic.Location = new System.Drawing.Point(447, 24);
            this.chkItalic.Name = "chkItalic";
            this.chkItalic.Size = new System.Drawing.Size(60, 16);
            this.chkItalic.TabIndex = 5;
            this.chkItalic.Text = "이탤릭";
            this.chkItalic.UseVisualStyleBackColor = true;
            this.chkItalic.CheckedChanged += new System.EventHandler(this.chkItalic_CheckedChanged);
            // 
            // cboFont
            // 
            this.cboFont.FormattingEnabled = true;
            this.cboFont.Location = new System.Drawing.Point(53, 22);
            this.cboFont.Name = "cboFont";
            this.cboFont.Size = new System.Drawing.Size(332, 20);
            this.cboFont.TabIndex = 4;
            this.cboFont.SelectedIndexChanged += new System.EventHandler(this.cboFont_SelectedIndexChanged);
            // 
            // chkBold
            // 
            this.chkBold.AutoSize = true;
            this.chkBold.Font = new System.Drawing.Font("굴림", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.chkBold.Location = new System.Drawing.Point(391, 26);
            this.chkBold.Name = "chkBold";
            this.chkBold.Size = new System.Drawing.Size(50, 16);
            this.chkBold.TabIndex = 3;
            this.chkBold.Text = "굵게";
            this.chkBold.UseVisualStyleBackColor = true;
            this.chkBold.CheckedChanged += new System.EventHandler(this.chkBold_CheckedChanged);
            // 
            // txtSampleText
            // 
            this.txtSampleText.Location = new System.Drawing.Point(8, 45);
            this.txtSampleText.Name = "txtSampleText";
            this.txtSampleText.Size = new System.Drawing.Size(762, 21);
            this.txtSampleText.TabIndex = 2;
            this.txtSampleText.Text = "Hello, C#";
            // 
            // lblFont
            // 
            this.lblFont.AutoSize = true;
            this.lblFont.Location = new System.Drawing.Point(6, 30);
            this.lblFont.Name = "lblFont";
            this.lblFont.Size = new System.Drawing.Size(41, 12);
            this.lblFont.TabIndex = 1;
            this.lblFont.Text = "Font : ";
            // 
            // grpBar
            // 
            this.grpBar.Controls.Add(this.pgDummy);
            this.grpBar.Controls.Add(this.tbDummy);
            this.grpBar.Location = new System.Drawing.Point(12, 110);
            this.grpBar.Name = "grpBar";
            this.grpBar.Size = new System.Drawing.Size(776, 94);
            this.grpBar.TabIndex = 6;
            this.grpBar.TabStop = false;
            this.grpBar.Text = "TrackBar && ProgressBar";
            // 
            // pgDummy
            // 
            this.pgDummy.Location = new System.Drawing.Point(8, 59);
            this.pgDummy.Maximum = 20;
            this.pgDummy.Name = "pgDummy";
            this.pgDummy.Size = new System.Drawing.Size(762, 23);
            this.pgDummy.TabIndex = 1;
            // 
            // tbDummy
            // 
            this.tbDummy.Location = new System.Drawing.Point(8, 20);
            this.tbDummy.Maximum = 20;
            this.tbDummy.Name = "tbDummy";
            this.tbDummy.Size = new System.Drawing.Size(762, 45);
            this.tbDummy.TabIndex = 0;
            this.tbDummy.Scroll += new System.EventHandler(this.tbDummy_Scroll);
            // 
            // grpForm
            // 
            this.grpForm.Controls.Add(this.btnMsgBox);
            this.grpForm.Controls.Add(this.btnModaless2);
            this.grpForm.Controls.Add(this.btnModal2);
            this.grpForm.Location = new System.Drawing.Point(12, 210);
            this.grpForm.Name = "grpForm";
            this.grpForm.Size = new System.Drawing.Size(776, 52);
            this.grpForm.TabIndex = 2;
            this.grpForm.TabStop = false;
            this.grpForm.Text = "Modal && Modaless";
            // 
            // btnMsgBox
            // 
            this.btnMsgBox.Location = new System.Drawing.Point(470, 20);
            this.btnMsgBox.Name = "btnMsgBox";
            this.btnMsgBox.Size = new System.Drawing.Size(300, 23);
            this.btnMsgBox.TabIndex = 2;
            this.btnMsgBox.Text = "MessageBox";
            this.btnMsgBox.UseVisualStyleBackColor = true;
            this.btnMsgBox.Click += new System.EventHandler(this.btnMsgBox_Click);
            // 
            // btnModaless2
            // 
            this.btnModaless2.Location = new System.Drawing.Point(229, 20);
            this.btnModaless2.Name = "btnModaless2";
            this.btnModaless2.Size = new System.Drawing.Size(235, 23);
            this.btnModaless2.TabIndex = 1;
            this.btnModaless2.Text = "Modaless";
            this.btnModaless2.UseVisualStyleBackColor = true;
            this.btnModaless2.Click += new System.EventHandler(this.btnModaless);
            // 
            // btnModal2
            // 
            this.btnModal2.Location = new System.Drawing.Point(8, 20);
            this.btnModal2.Name = "btnModal2";
            this.btnModal2.Size = new System.Drawing.Size(215, 23);
            this.btnModal2.TabIndex = 0;
            this.btnModal2.Text = "Modal";
            this.btnModal2.UseVisualStyleBackColor = true;
            this.btnModal2.Click += new System.EventHandler(this.btnModal);
            // 
            // tvDummy
            // 
            this.tvDummy.Location = new System.Drawing.Point(8, 20);
            this.tvDummy.Name = "tvDummy";
            this.tvDummy.Size = new System.Drawing.Size(377, 97);
            this.tvDummy.TabIndex = 7;
            // 
            // lvDummy
            // 
            this.lvDummy.HideSelection = false;
            this.lvDummy.Location = new System.Drawing.Point(391, 20);
            this.lvDummy.Name = "lvDummy";
            this.lvDummy.Size = new System.Drawing.Size(379, 97);
            this.lvDummy.TabIndex = 8;
            this.lvDummy.UseCompatibleStateImageBehavior = false;
            this.lvDummy.View = System.Windows.Forms.View.Details;
            // 
            // grpTreeList
            // 
            this.grpTreeList.Controls.Add(this.btnAddChild);
            this.grpTreeList.Controls.Add(this.btnAddRoot);
            this.grpTreeList.Controls.Add(this.tvDummy);
            this.grpTreeList.Controls.Add(this.lvDummy);
            this.grpTreeList.Location = new System.Drawing.Point(12, 268);
            this.grpTreeList.Name = "grpTreeList";
            this.grpTreeList.Size = new System.Drawing.Size(776, 170);
            this.grpTreeList.TabIndex = 9;
            this.grpTreeList.TabStop = false;
            this.grpTreeList.Text = "TreeView && ListView";
            // 
            // btnAddChild
            // 
            this.btnAddChild.Location = new System.Drawing.Point(210, 132);
            this.btnAddChild.Name = "btnAddChild";
            this.btnAddChild.Size = new System.Drawing.Size(175, 23);
            this.btnAddChild.TabIndex = 10;
            this.btnAddChild.Text = "자식 추가";
            this.btnAddChild.UseVisualStyleBackColor = true;
            this.btnAddChild.Click += new System.EventHandler(this.btnAddChild_Click);
            // 
            // btnAddRoot
            // 
            this.btnAddRoot.Location = new System.Drawing.Point(8, 132);
            this.btnAddRoot.Name = "btnAddRoot";
            this.btnAddRoot.Size = new System.Drawing.Size(196, 23);
            this.btnAddRoot.TabIndex = 9;
            this.btnAddRoot.Text = "루트 추가";
            this.btnAddRoot.UseVisualStyleBackColor = true;
            this.btnAddRoot.Click += new System.EventHandler(this.btnAddRoot_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.grpTreeList);
            this.Controls.Add(this.grpForm);
            this.Controls.Add(this.grpBar);
            this.Controls.Add(this.grpFont);
            this.Name = "MainForm";
            this.Text = "Control Test";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.grpFont.ResumeLayout(false);
            this.grpFont.PerformLayout();
            this.grpBar.ResumeLayout(false);
            this.grpBar.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.tbDummy)).EndInit();
            this.grpForm.ResumeLayout(false);
            this.grpTreeList.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox grpFont;
        private System.Windows.Forms.Label lblFont;
        private System.Windows.Forms.CheckBox chkItalic;
        private System.Windows.Forms.ComboBox cboFont;
        private System.Windows.Forms.CheckBox chkBold;
        private System.Windows.Forms.TextBox txtSampleText;
        private System.Windows.Forms.GroupBox grpBar;
        private System.Windows.Forms.ProgressBar pgDummy;
        private System.Windows.Forms.TrackBar tbDummy;
        private System.Windows.Forms.GroupBox grpForm;
        private System.Windows.Forms.Button btnMsgBox;
        private System.Windows.Forms.Button btnModaless2;
        private System.Windows.Forms.Button btnModal2;
        private System.Windows.Forms.TreeView tvDummy;
        private System.Windows.Forms.ListView lvDummy;
        private System.Windows.Forms.GroupBox grpTreeList;
        private System.Windows.Forms.Button btnAddRoot;
        private System.Windows.Forms.Button btnAddChild;
    }
}

