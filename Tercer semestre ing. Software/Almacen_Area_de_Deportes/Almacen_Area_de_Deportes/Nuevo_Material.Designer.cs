namespace Almacen_Area_de_Deportes
{
    partial class Nuevo_Material
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Nuevo_Material));
            this.button1 = new System.Windows.Forms.Button();
            this.Label_bienvenido = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.accept_select_client = new System.Windows.Forms.Button();
            this.logo_seleccion = new System.Windows.Forms.PictureBox();
            this.label4 = new System.Windows.Forms.Label();
            this.Label_title_Seleccion = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.comboBox2 = new System.Windows.Forms.ComboBox();
            this.materialBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.almacen_deportesDataSet = new Almacen_Area_de_Deportes.Almacen_deportesDataSet();
            this.label3 = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.materialTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.MaterialTableAdapter();
            this.registrar_materialesBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.registrar_materialesTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.Registrar_materialesTableAdapter();
            this.tableAdapterManager = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.textBox2 = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.registrar_materialesBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(67, 348);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(82, 24);
            this.button1.TabIndex = 55;
            this.button1.Text = "Cancelar";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Label_bienvenido
            // 
            this.Label_bienvenido.AutoSize = true;
            this.Label_bienvenido.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_bienvenido.ForeColor = System.Drawing.Color.Navy;
            this.Label_bienvenido.Location = new System.Drawing.Point(115, 121);
            this.Label_bienvenido.Name = "Label_bienvenido";
            this.Label_bienvenido.Size = new System.Drawing.Size(144, 44);
            this.Label_bienvenido.TabIndex = 54;
            this.Label_bienvenido.Text = "Registrar nuevo\r\n       Material      ";
            this.Label_bienvenido.Click += new System.EventHandler(this.Label_bienvenido_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.label1.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.Navy;
            this.label1.Location = new System.Drawing.Point(12, 60);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(180, 44);
            this.label1.TabIndex = 53;
            this.label1.Text = "Sistema de Registros\r\nAlmacén de Deportes";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // accept_select_client
            // 
            this.accept_select_client.Location = new System.Drawing.Point(217, 348);
            this.accept_select_client.Name = "accept_select_client";
            this.accept_select_client.Size = new System.Drawing.Size(82, 24);
            this.accept_select_client.TabIndex = 52;
            this.accept_select_client.Text = "Aceptar";
            this.accept_select_client.UseVisualStyleBackColor = true;
            this.accept_select_client.Click += new System.EventHandler(this.accept_select_client_Click);
            // 
            // logo_seleccion
            // 
            this.logo_seleccion.Image = ((System.Drawing.Image)(resources.GetObject("logo_seleccion.Image")));
            this.logo_seleccion.Location = new System.Drawing.Point(0, 0);
            this.logo_seleccion.Name = "logo_seleccion";
            this.logo_seleccion.Size = new System.Drawing.Size(136, 57);
            this.logo_seleccion.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.logo_seleccion.TabIndex = 51;
            this.logo_seleccion.TabStop = false;
            this.logo_seleccion.Click += new System.EventHandler(this.logo_seleccion_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Modern No. 20", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(85, 192);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(65, 17);
            this.label4.TabIndex = 49;
            this.label4.Text = "Material:";
            this.label4.TextAlign = System.Drawing.ContentAlignment.TopRight;
            // 
            // Label_title_Seleccion
            // 
            this.Label_title_Seleccion.AutoSize = true;
            this.Label_title_Seleccion.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_Seleccion.ForeColor = System.Drawing.Color.Navy;
            this.Label_title_Seleccion.Location = new System.Drawing.Point(159, 18);
            this.Label_title_Seleccion.Name = "Label_title_Seleccion";
            this.Label_title_Seleccion.Size = new System.Drawing.Size(181, 25);
            this.Label_title_Seleccion.TabIndex = 45;
            this.Label_title_Seleccion.Text = "Campus Santa Fe";
            this.Label_title_Seleccion.Click += new System.EventHandler(this.Label_title_Seleccion_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Modern No. 20", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(77, 239);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(72, 17);
            this.label2.TabIndex = 56;
            this.label2.Text = "Condición:";
            this.label2.TextAlign = System.Drawing.ContentAlignment.TopRight;
            // 
            // comboBox2
            // 
            this.comboBox2.DataSource = this.materialBindingSource;
            this.comboBox2.DisplayMember = "Condición";
            this.comboBox2.FormattingEnabled = true;
            this.comboBox2.Location = new System.Drawing.Point(164, 235);
            this.comboBox2.Name = "comboBox2";
            this.comboBox2.Size = new System.Drawing.Size(121, 21);
            this.comboBox2.TabIndex = 59;
            // 
            // materialBindingSource
            // 
            this.materialBindingSource.DataMember = "Material";
            this.materialBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // almacen_deportesDataSet
            // 
            this.almacen_deportesDataSet.DataSetName = "Almacen_deportesDataSet";
            this.almacen_deportesDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Modern No. 20", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(49, 282);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(100, 17);
            this.label3.TabIndex = 60;
            this.label3.Text = "Características:";
            this.label3.TextAlign = System.Drawing.ContentAlignment.TopRight;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(346, 0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(28, 26);
            this.pictureBox1.TabIndex = 61;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // materialTableAdapter
            // 
            this.materialTableAdapter.ClearBeforeFill = true;
            // 
            // registrar_materialesBindingSource
            // 
            this.registrar_materialesBindingSource.DataMember = "Registrar_materiales";
            this.registrar_materialesBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // registrar_materialesTableAdapter
            // 
            this.registrar_materialesTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.MaterialTableAdapter = this.materialTableAdapter;
            this.tableAdapterManager.PréstamoTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            this.tableAdapterManager.UsuarioTableAdapter = null;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(164, 192);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(121, 20);
            this.textBox1.TabIndex = 67;
            // 
            // textBox2
            // 
            this.textBox2.Location = new System.Drawing.Point(164, 282);
            this.textBox2.Name = "textBox2";
            this.textBox2.Size = new System.Drawing.Size(121, 20);
            this.textBox2.TabIndex = 68;
            // 
            // Nuevo_Material
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(374, 392);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.comboBox2);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.Label_bienvenido);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.accept_select_client);
            this.Controls.Add(this.logo_seleccion);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.Label_title_Seleccion);
            this.Name = "Nuevo_Material";
            this.Text = "Nuevo_Material";
            this.Load += new System.EventHandler(this.Nuevo_Material_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.registrar_materialesBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label Label_bienvenido;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button accept_select_client;
        private System.Windows.Forms.PictureBox logo_seleccion;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label Label_title_Seleccion;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.ComboBox comboBox2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.PictureBox pictureBox1;
        private Almacen_deportesDataSet almacen_deportesDataSet;
        private System.Windows.Forms.BindingSource materialBindingSource;
        private Almacen_deportesDataSetTableAdapters.MaterialTableAdapter materialTableAdapter;
        private System.Windows.Forms.BindingSource registrar_materialesBindingSource;
        private Almacen_deportesDataSetTableAdapters.Registrar_materialesTableAdapter registrar_materialesTableAdapter;
        private Almacen_deportesDataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.TextBox textBox2;
    }
}