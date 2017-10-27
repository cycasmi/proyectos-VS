namespace Tarea_El_buho_inteligente
{
    partial class Equipos
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.Label_title_Equipos = new System.Windows.Forms.Label();
            this.button3_new_product = new System.Windows.Forms.Button();
            this.button1_register_product = new System.Windows.Forms.Button();
            this.button2_details_product = new System.Windows.Forms.Button();
            this.button4_return_equipos = new System.Windows.Forms.Button();
            this.Logo_equipos = new System.Windows.Forms.PictureBox();
            this.label2_seleccion_cliente = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.Logo_equipos)).BeginInit();
            this.SuspendLayout();
            // 
            // Label_title_Equipos
            // 
            this.Label_title_Equipos.AutoSize = true;
            this.Label_title_Equipos.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_Equipos.Location = new System.Drawing.Point(57, 20);
            this.Label_title_Equipos.Name = "Label_title_Equipos";
            this.Label_title_Equipos.Size = new System.Drawing.Size(209, 25);
            this.Label_title_Equipos.TabIndex = 6;
            this.Label_title_Equipos.Text = "El Búho inteligente";
            // 
            // button3_new_product
            // 
            this.button3_new_product.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button3_new_product.Location = new System.Drawing.Point(51, 254);
            this.button3_new_product.Name = "button3_new_product";
            this.button3_new_product.Size = new System.Drawing.Size(272, 34);
            this.button3_new_product.TabIndex = 9;
            this.button3_new_product.Text = "Adquirir nuevo equipo";
            this.button3_new_product.UseVisualStyleBackColor = true;
            this.button3_new_product.Click += new System.EventHandler(this.button3_new_product_Click);
            // 
            // button1_register_product
            // 
            this.button1_register_product.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1_register_product.Location = new System.Drawing.Point(51, 129);
            this.button1_register_product.Name = "button1_register_product";
            this.button1_register_product.Size = new System.Drawing.Size(272, 34);
            this.button1_register_product.TabIndex = 8;
            this.button1_register_product.Text = "Registrar un nuevo equipo";
            this.button1_register_product.UseVisualStyleBackColor = true;
            this.button1_register_product.Click += new System.EventHandler(this.button1_register_product_Click);
            // 
            // button2_details_product
            // 
            this.button2_details_product.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2_details_product.Location = new System.Drawing.Point(51, 190);
            this.button2_details_product.Name = "button2_details_product";
            this.button2_details_product.Size = new System.Drawing.Size(272, 34);
            this.button2_details_product.TabIndex = 10;
            this.button2_details_product.Text = "Consultar equipo existente";
            this.button2_details_product.UseVisualStyleBackColor = true;
            this.button2_details_product.Click += new System.EventHandler(this.button2_details_product_Click);
            // 
            // button4_return_equipos
            // 
            this.button4_return_equipos.Location = new System.Drawing.Point(138, 318);
            this.button4_return_equipos.Name = "button4_return_equipos";
            this.button4_return_equipos.Size = new System.Drawing.Size(82, 24);
            this.button4_return_equipos.TabIndex = 15;
            this.button4_return_equipos.Text = "Regresar";
            this.button4_return_equipos.UseVisualStyleBackColor = true;
            this.button4_return_equipos.Click += new System.EventHandler(this.button4_return_equipos_Click);
            // 
            // Logo_equipos
            // 
            this.Logo_equipos.Image = global::Tarea_El_buho_inteligente.Properties.Resources.education_29_512;
            this.Logo_equipos.Location = new System.Drawing.Point(8, 11);
            this.Logo_equipos.Name = "Logo_equipos";
            this.Logo_equipos.Size = new System.Drawing.Size(43, 43);
            this.Logo_equipos.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.Logo_equipos.TabIndex = 7;
            this.Logo_equipos.TabStop = false;
            // 
            // label2_seleccion_cliente
            // 
            this.label2_seleccion_cliente.AutoSize = true;
            this.label2_seleccion_cliente.Font = new System.Drawing.Font("Modern No. 20", 14.25F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2_seleccion_cliente.Location = new System.Drawing.Point(12, 85);
            this.label2_seleccion_cliente.Name = "label2_seleccion_cliente";
            this.label2_seleccion_cliente.Size = new System.Drawing.Size(185, 21);
            this.label2_seleccion_cliente.TabIndex = 16;
            this.label2_seleccion_cliente.Text = "Seleccione una opción:";
            // 
            // Equipos
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(371, 370);
            this.Controls.Add(this.label2_seleccion_cliente);
            this.Controls.Add(this.button4_return_equipos);
            this.Controls.Add(this.button2_details_product);
            this.Controls.Add(this.button3_new_product);
            this.Controls.Add(this.button1_register_product);
            this.Controls.Add(this.Logo_equipos);
            this.Controls.Add(this.Label_title_Equipos);
            this.Name = "Equipos";
            this.Text = "Equipos";
            ((System.ComponentModel.ISupportInitialize)(this.Logo_equipos)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox Logo_equipos;
        private System.Windows.Forms.Label Label_title_Equipos;
        private System.Windows.Forms.Button button3_new_product;
        private System.Windows.Forms.Button button1_register_product;
        private System.Windows.Forms.Button button2_details_product;
        private System.Windows.Forms.Button button4_return_equipos;
        private System.Windows.Forms.Label label2_seleccion_cliente;
    }
}