namespace Almacen_Area_de_Deportes
{
    partial class Prestamo
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
            System.Windows.Forms.Label matrículaLabel;
            System.Windows.Forms.Label materialLabel;
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Prestamo));
            this.accept_select_client = new System.Windows.Forms.Button();
            this.logo_seleccion = new System.Windows.Forms.PictureBox();
            this.Label_title_Seleccion = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.Label_bienvenido = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.almacen_deportesDataSet = new Almacen_Area_de_Deportes.Almacen_deportesDataSet();
            this.materialBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.materialTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.MaterialTableAdapter();
            this.materialBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.materialBindingSource2 = new System.Windows.Forms.BindingSource(this.components);
            this.préstamosBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.préstamosTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.PréstamosTableAdapter();
            this.tableAdapterManager = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.materialBindingSource3 = new System.Windows.Forms.BindingSource(this.components);
            this.usuarioBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.usuarioTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.UsuarioTableAdapter();
            this.préstamoBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.préstamoTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.PréstamoTableAdapter();
            this.textBox1 = new System.Windows.Forms.TextBox();
            matrículaLabel = new System.Windows.Forms.Label();
            materialLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamosBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource3)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.usuarioBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // matrículaLabel
            // 
            matrículaLabel.AutoSize = true;
            matrículaLabel.Font = new System.Drawing.Font("Modern No. 20", 11.25F);
            matrículaLabel.Location = new System.Drawing.Point(68, 195);
            matrículaLabel.Name = "matrículaLabel";
            matrículaLabel.Size = new System.Drawing.Size(73, 17);
            matrículaLabel.TabIndex = 31;
            matrículaLabel.Text = "Matrícula:";
            // 
            // materialLabel
            // 
            materialLabel.AutoSize = true;
            materialLabel.Font = new System.Drawing.Font("Modern No. 20", 11.25F);
            materialLabel.Location = new System.Drawing.Point(76, 258);
            materialLabel.Name = "materialLabel";
            materialLabel.Size = new System.Drawing.Size(65, 17);
            materialLabel.TabIndex = 33;
            materialLabel.Text = "Material:";
            // 
            // accept_select_client
            // 
            this.accept_select_client.Location = new System.Drawing.Point(231, 327);
            this.accept_select_client.Name = "accept_select_client";
            this.accept_select_client.Size = new System.Drawing.Size(82, 24);
            this.accept_select_client.TabIndex = 26;
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
            this.logo_seleccion.TabIndex = 25;
            this.logo_seleccion.TabStop = false;
            // 
            // Label_title_Seleccion
            // 
            this.Label_title_Seleccion.AutoSize = true;
            this.Label_title_Seleccion.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_Seleccion.ForeColor = System.Drawing.Color.Navy;
            this.Label_title_Seleccion.Location = new System.Drawing.Point(159, 18);
            this.Label_title_Seleccion.Name = "Label_title_Seleccion";
            this.Label_title_Seleccion.Size = new System.Drawing.Size(181, 25);
            this.Label_title_Seleccion.TabIndex = 18;
            this.Label_title_Seleccion.Text = "Campus Santa Fe";
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
            this.label1.TabIndex = 27;
            this.label1.Text = "Sistema de Registros\r\nAlmacén de Deportes";
            // 
            // Label_bienvenido
            // 
            this.Label_bienvenido.AutoSize = true;
            this.Label_bienvenido.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_bienvenido.ForeColor = System.Drawing.Color.Navy;
            this.Label_bienvenido.Location = new System.Drawing.Point(106, 136);
            this.Label_bienvenido.Name = "Label_bienvenido";
            this.Label_bienvenido.Size = new System.Drawing.Size(162, 22);
            this.Label_bienvenido.TabIndex = 28;
            this.Label_bienvenido.Text = "Registrar préstamo";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(81, 327);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(82, 24);
            this.button1.TabIndex = 31;
            this.button1.Text = "Cancelar";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Modern No. 20", 8.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(161, 218);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(133, 30);
            this.label3.TabIndex = 21;
            this.label3.Text = "Matrícula: \"A\" y 8 dígitos.\r\n Ej: A00123456";
            this.label3.TextAlign = System.Drawing.ContentAlignment.TopRight;
            // 
            // almacen_deportesDataSet
            // 
            this.almacen_deportesDataSet.DataSetName = "Almacen_deportesDataSet";
            this.almacen_deportesDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // materialBindingSource
            // 
            this.materialBindingSource.DataMember = "Material";
            this.materialBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // materialTableAdapter
            // 
            this.materialTableAdapter.ClearBeforeFill = true;
            // 
            // materialBindingSource1
            // 
            this.materialBindingSource1.DataMember = "Material";
            this.materialBindingSource1.DataSource = this.almacen_deportesDataSet;
            // 
            // materialBindingSource2
            // 
            this.materialBindingSource2.DataMember = "Material";
            this.materialBindingSource2.DataSource = this.almacen_deportesDataSet;
            // 
            // préstamosBindingSource
            // 
            this.préstamosBindingSource.DataMember = "Préstamos";
            this.préstamosBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // préstamosTableAdapter
            // 
            this.préstamosTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.MaterialTableAdapter = this.materialTableAdapter;
            this.tableAdapterManager.PréstamoTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            this.tableAdapterManager.UsuarioTableAdapter = null;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(346, 0);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(28, 26);
            this.pictureBox1.TabIndex = 70;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click_1);
            // 
            // comboBox1
            // 
            this.comboBox1.DataSource = this.materialBindingSource;
            this.comboBox1.DisplayMember = "Material";
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(164, 258);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(130, 21);
            this.comboBox1.TabIndex = 71;
            this.comboBox1.ValueMember = "Material";
            // 
            // materialBindingSource3
            // 
            this.materialBindingSource3.DataMember = "Material";
            this.materialBindingSource3.DataSource = this.almacen_deportesDataSet;
            // 
            // usuarioBindingSource
            // 
            this.usuarioBindingSource.DataMember = "Usuario";
            this.usuarioBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // usuarioTableAdapter
            // 
            this.usuarioTableAdapter.ClearBeforeFill = true;
            // 
            // préstamoBindingSource
            // 
            this.préstamoBindingSource.DataMember = "Préstamo";
            this.préstamoBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // préstamoTableAdapter
            // 
            this.préstamoTableAdapter.ClearBeforeFill = true;
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(164, 195);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(130, 20);
            this.textBox1.TabIndex = 72;
            // 
            // Prestamo
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(373, 373);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(matrículaLabel);
            this.Controls.Add(materialLabel);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.Label_bienvenido);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.accept_select_client);
            this.Controls.Add(this.logo_seleccion);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.Label_title_Seleccion);
            this.Name = "Prestamo";
            this.Text = "Prestamo";
            this.Load += new System.EventHandler(this.Prestamo_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamosBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource3)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.usuarioBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button accept_select_client;
        private System.Windows.Forms.PictureBox logo_seleccion;
        private System.Windows.Forms.Label Label_title_Seleccion;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label Label_bienvenido;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label3;
        private Almacen_deportesDataSet almacen_deportesDataSet;
        private System.Windows.Forms.BindingSource materialBindingSource;
        private Almacen_deportesDataSetTableAdapters.MaterialTableAdapter materialTableAdapter;
        private System.Windows.Forms.BindingSource materialBindingSource2;
        private System.Windows.Forms.BindingSource materialBindingSource1;
        private System.Windows.Forms.BindingSource préstamosBindingSource;
        private Almacen_deportesDataSetTableAdapters.PréstamosTableAdapter préstamosTableAdapter;
        private Almacen_deportesDataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.BindingSource materialBindingSource3;
        private System.Windows.Forms.BindingSource usuarioBindingSource;
        private Almacen_deportesDataSetTableAdapters.UsuarioTableAdapter usuarioTableAdapter;
        private System.Windows.Forms.BindingSource préstamoBindingSource;
        private Almacen_deportesDataSetTableAdapters.PréstamoTableAdapter préstamoTableAdapter;
        private System.Windows.Forms.TextBox textBox1;
    }
}