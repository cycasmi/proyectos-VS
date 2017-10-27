namespace Tarea_El_buho_inteligente
{
    partial class Pag_Inicio
    {
        /// <summary>
        /// Variable del diseñador requerida.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén utilizando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido del método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.Label_title_Inicio = new System.Windows.Forms.Label();
            this.button1_new_client = new System.Windows.Forms.Button();
            this.button2_existent_client = new System.Windows.Forms.Button();
            this.Label_bienvenido = new System.Windows.Forms.Label();
            this.button3_report = new System.Windows.Forms.Button();
            this.logo_inicio = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.logo_inicio)).BeginInit();
            this.SuspendLayout();
            // 
            // Label_title_Inicio
            // 
            this.Label_title_Inicio.AutoSize = true;
            this.Label_title_Inicio.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_Inicio.Location = new System.Drawing.Point(62, 18);
            this.Label_title_Inicio.Name = "Label_title_Inicio";
            this.Label_title_Inicio.Size = new System.Drawing.Size(209, 25);
            this.Label_title_Inicio.TabIndex = 0;
            this.Label_title_Inicio.Text = "El Búho inteligente";
            this.Label_title_Inicio.Click += new System.EventHandler(this.label1_Click);
            // 
            // button1_new_client
            // 
            this.button1_new_client.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1_new_client.Location = new System.Drawing.Point(85, 129);
            this.button1_new_client.Name = "button1_new_client";
            this.button1_new_client.Size = new System.Drawing.Size(234, 34);
            this.button1_new_client.TabIndex = 1;
            this.button1_new_client.Text = "Nuevo Cliente";
            this.button1_new_client.UseVisualStyleBackColor = true;
            this.button1_new_client.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2_existent_client
            // 
            this.button2_existent_client.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2_existent_client.Location = new System.Drawing.Point(85, 197);
            this.button2_existent_client.Name = "button2_existent_client";
            this.button2_existent_client.Size = new System.Drawing.Size(234, 34);
            this.button2_existent_client.TabIndex = 2;
            this.button2_existent_client.Text = "Cliente existente";
            this.button2_existent_client.UseVisualStyleBackColor = true;
            this.button2_existent_client.Click += new System.EventHandler(this.button2_Click);
            // 
            // Label_bienvenido
            // 
            this.Label_bienvenido.AutoSize = true;
            this.Label_bienvenido.Font = new System.Drawing.Font("Modern No. 20", 16F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_bienvenido.Location = new System.Drawing.Point(12, 84);
            this.Label_bienvenido.Name = "Label_bienvenido";
            this.Label_bienvenido.Size = new System.Drawing.Size(112, 24);
            this.Label_bienvenido.TabIndex = 6;
            this.Label_bienvenido.Text = "Bienvenido";
            // 
            // button3_report
            // 
            this.button3_report.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button3_report.Location = new System.Drawing.Point(85, 259);
            this.button3_report.Name = "button3_report";
            this.button3_report.Size = new System.Drawing.Size(234, 34);
            this.button3_report.TabIndex = 7;
            this.button3_report.Text = "Consultar Reporte";
            this.button3_report.UseVisualStyleBackColor = true;
            this.button3_report.Click += new System.EventHandler(this.button3_report_Click);
            // 
            // logo_inicio
            // 
            this.logo_inicio.Image = global::Tarea_El_buho_inteligente.Properties.Resources.education_29_512;
            this.logo_inicio.Location = new System.Drawing.Point(13, 9);
            this.logo_inicio.Name = "logo_inicio";
            this.logo_inicio.Size = new System.Drawing.Size(43, 43);
            this.logo_inicio.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.logo_inicio.TabIndex = 3;
            this.logo_inicio.TabStop = false;
            // 
            // Pag_Inicio
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 14F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(398, 336);
            this.Controls.Add(this.button3_report);
            this.Controls.Add(this.Label_bienvenido);
            this.Controls.Add(this.logo_inicio);
            this.Controls.Add(this.button2_existent_client);
            this.Controls.Add(this.button1_new_client);
            this.Controls.Add(this.Label_title_Inicio);
            this.Font = new System.Drawing.Font("Modern No. 20", 8.249999F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Name = "Pag_Inicio";
            this.Text = "El búho inteligente - Pág. inicio";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_inicio)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Label_title_Inicio;
        private System.Windows.Forms.Button button1_new_client;
        private System.Windows.Forms.Button button2_existent_client;
        private System.Windows.Forms.PictureBox logo_inicio;
        private System.Windows.Forms.Label Label_bienvenido;
        private System.Windows.Forms.Button button3_report;
    }
}

