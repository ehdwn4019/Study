using System;
using System.IO;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AsyncfileIOWinForm
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
            this.lblSource = new System.Windows.Forms.Label();
            this.lblTarget = new System.Windows.Forms.Label();
            this.btnAsyncCopy = new System.Windows.Forms.Button();
            this.btnSyncCopy = new System.Windows.Forms.Button();
            this.btnCancel = new System.Windows.Forms.Button();
            this.pbCopy = new System.Windows.Forms.ProgressBar();
            this.btnFindSource = new System.Windows.Forms.Button();
            this.btnFindTarget = new System.Windows.Forms.Button();
            this.txtSource = new System.Windows.Forms.TextBox();
            this.txtTarget = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // lblSource
            // 
            this.lblSource.AutoSize = true;
            this.lblSource.Location = new System.Drawing.Point(12, 12);
            this.lblSource.Name = "lblSource";
            this.lblSource.Size = new System.Drawing.Size(45, 12);
            this.lblSource.TabIndex = 0;
            this.lblSource.Text = "Source";
            // 
            // lblTarget
            // 
            this.lblTarget.AutoSize = true;
            this.lblTarget.Location = new System.Drawing.Point(12, 40);
            this.lblTarget.Name = "lblTarget";
            this.lblTarget.Size = new System.Drawing.Size(41, 12);
            this.lblTarget.TabIndex = 1;
            this.lblTarget.Text = "Target";
            // 
            // btnAsyncCopy
            // 
            this.btnAsyncCopy.Location = new System.Drawing.Point(14, 83);
            this.btnAsyncCopy.Name = "btnAsyncCopy";
            this.btnAsyncCopy.Size = new System.Drawing.Size(81, 23);
            this.btnAsyncCopy.TabIndex = 2;
            this.btnAsyncCopy.Text = "AsyncCopy";
            this.btnAsyncCopy.UseVisualStyleBackColor = true;
            this.btnAsyncCopy.Click += new System.EventHandler(this.btnAsyncCopy_Click);
            // 
            // btnSyncCopy
            // 
            this.btnSyncCopy.Location = new System.Drawing.Point(123, 83);
            this.btnSyncCopy.Name = "btnSyncCopy";
            this.btnSyncCopy.Size = new System.Drawing.Size(77, 23);
            this.btnSyncCopy.TabIndex = 3;
            this.btnSyncCopy.Text = "Sync Copy";
            this.btnSyncCopy.UseVisualStyleBackColor = true;
            this.btnSyncCopy.Click += new System.EventHandler(this.btnSyncCopy_Click);
            // 
            // btnCancel
            // 
            this.btnCancel.Location = new System.Drawing.Point(234, 83);
            this.btnCancel.Name = "btnCancel";
            this.btnCancel.Size = new System.Drawing.Size(75, 23);
            this.btnCancel.TabIndex = 4;
            this.btnCancel.Text = "Cancel";
            this.btnCancel.UseVisualStyleBackColor = true;
            this.btnCancel.Click += new System.EventHandler(this.btnCancel_Click);
            // 
            // pbCopy
            // 
            this.pbCopy.Location = new System.Drawing.Point(14, 142);
            this.pbCopy.Name = "pbCopy";
            this.pbCopy.Size = new System.Drawing.Size(295, 23);
            this.pbCopy.TabIndex = 5;
            // 
            // btnFindSource
            // 
            this.btnFindSource.Location = new System.Drawing.Point(244, 12);
            this.btnFindSource.Name = "btnFindSource";
            this.btnFindSource.Size = new System.Drawing.Size(75, 23);
            this.btnFindSource.TabIndex = 6;
            this.btnFindSource.Text = "...";
            this.btnFindSource.UseVisualStyleBackColor = true;
            this.btnFindSource.Click += new System.EventHandler(this.btnFindSource_Click);
            // 
            // btnFindTarget
            // 
            this.btnFindTarget.Location = new System.Drawing.Point(244, 41);
            this.btnFindTarget.Name = "btnFindTarget";
            this.btnFindTarget.Size = new System.Drawing.Size(75, 23);
            this.btnFindTarget.TabIndex = 7;
            this.btnFindTarget.Text = "...";
            this.btnFindTarget.UseVisualStyleBackColor = true;
            this.btnFindTarget.Click += new System.EventHandler(this.btnFindTarget_Click);
            // 
            // txtSource
            // 
            this.txtSource.Location = new System.Drawing.Point(63, 9);
            this.txtSource.Name = "txtSource";
            this.txtSource.Size = new System.Drawing.Size(175, 21);
            this.txtSource.TabIndex = 8;
            // 
            // txtTarget
            // 
            this.txtTarget.Location = new System.Drawing.Point(63, 37);
            this.txtTarget.Name = "txtTarget";
            this.txtTarget.Size = new System.Drawing.Size(175, 21);
            this.txtTarget.TabIndex = 9;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(331, 211);
            this.Controls.Add(this.txtTarget);
            this.Controls.Add(this.txtSource);
            this.Controls.Add(this.btnFindTarget);
            this.Controls.Add(this.btnFindSource);
            this.Controls.Add(this.pbCopy);
            this.Controls.Add(this.btnCancel);
            this.Controls.Add(this.btnSyncCopy);
            this.Controls.Add(this.btnAsyncCopy);
            this.Controls.Add(this.lblTarget);
            this.Controls.Add(this.lblSource);
            this.Name = "MainForm";
            this.Text = "Async File Copy";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblSource;
        private System.Windows.Forms.Label lblTarget;
        private System.Windows.Forms.Button btnAsyncCopy;
        private System.Windows.Forms.Button btnSyncCopy;
        private System.Windows.Forms.Button btnCancel;
        private System.Windows.Forms.ProgressBar pbCopy;
        private System.Windows.Forms.Button btnFindSource;
        private System.Windows.Forms.Button btnFindTarget;
        private System.Windows.Forms.TextBox txtSource;
        private System.Windows.Forms.TextBox txtTarget;

        private async Task<long> CopyAsync(string FromPath, string ToPath)
        {
            btnAsyncCopy.Enabled = false;
            long totalCopied = 0;

            using(FileStream fromStream = new FileStream(FromPath, FileMode.Open))
            {
                using(FileStream toStream = new FileStream(ToPath, FileMode.Create))
                {
                    byte[] buffer = new byte[1024 * 1024];
                    int nRead = 0;
                    while((nRead = await fromStream.ReadAsync(buffer, 0, buffer.Length)) != 0)
                    {
                        await toStream.WriteAsync(buffer, 0, nRead);
                        totalCopied += nRead;

                        pbCopy.Value = (int)(((double)totalCopied / (double)fromStream.Length) * pbCopy.Maximum);
                    }
                }
            }

            btnSyncCopy.Enabled = true;
            return totalCopied;
        }

        private long CopySync(string FromPath, string ToPath)
        {
            btnAsyncCopy.Enabled = false;
            long totalCopied = 0;

            using(FileStream fromStream = new FileStream(FromPath, FileMode.Open))
            {
                using(FileStream toStream = new FileStream(ToPath, FileMode.Create))
                {
                    byte[] buffer = new byte[1024 * 1024];
                    int nRead = 0;
                    while((nRead = fromStream.Read(buffer, 0, nRead)) != 0)
                    {
                        toStream.Write(buffer, 0, nRead);
                        totalCopied += nRead;

                        pbCopy.Value = (int)(((double)totalCopied / (double)fromStream.Length) * pbCopy.Maximum);
                    }
                }
            }

            btnAsyncCopy.Enabled = true;
            return totalCopied;
        }

        private void btnFindSource_Click(object sender, EventArgs e)
        {
            OpenFileDialog dlg = new OpenFileDialog();
            if(dlg.ShowDialog() == DialogResult.OK)
            {
                txtSource.Text = dlg.FileName;
            }
        }

        private void btnFindTarget_Click(object sender, EventArgs e)
        {
            OpenFileDialog dlg = new OpenFileDialog();
            if (dlg.ShowDialog() == DialogResult.OK) ;
            {
                txtTarget.Text = dlg.FileName;
            }
        }

        private async void btnAsyncCopy_Click(object sender, EventArgs e)
        {
            long totalCopied = await CopyAsync(txtSource.Text, txtTarget.Text);
        }

        private void btnSyncCopy_Click(object sender, EventArgs e)
        {
            long totalCopied = CopySync(txtSource.Text, txtTarget.Text);
        }

        private void btnCancel_Click(object sender, EventArgs e)
        {
            MessageBox.Show("UI 반응 테스트 성공");
        }
    }
}