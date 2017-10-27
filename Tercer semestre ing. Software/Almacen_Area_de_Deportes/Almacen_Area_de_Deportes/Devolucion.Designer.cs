namespace Almacen_Area_de_Deportes
{
    partial class Devolucion
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Devolucion));
            this.button1 = new System.Windows.Forms.Button();
            this.Label_bienvenido = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.accept_select_client = new System.Windows.Forms.Button();
            this.logo_seleccion = new System.Windows.Forms.PictureBox();
            this.Label_title_Seleccion = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.almacen_deportesDataSet = new Almacen_Area_de_Deportes.Almacen_deportesDataSet();
            this.devoluciónBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.devoluciónTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.DevoluciónTableAdapter();
            this.tableAdapterManager = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager();
            this.materialTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.MaterialTableAdapter();
            this.devoluciónBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
            this.bindingNavigatorAddNewItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
            this.bindingNavigatorDeleteItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.devoluciónBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.matrículaTextBox = new System.Windows.Forms.TextBox();
            this.materialBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.materialTextBox = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.devoluciónBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.devoluciónBindingNavigator)).BeginInit();
            this.devoluciónBindingNavigator.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(53, 301);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(82, 24);
            this.button1.TabIndex = 44;
            this.button1.Text = "Cancelar";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Label_bienvenido
            // 
            this.Label_bienvenido.AutoSize = true;
            this.Label_bienvenido.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_bienvenido.ForeColor = System.Drawing.Color.Navy;
            this.Label_bienvenido.Location = new System.Drawing.Point(89, 114);
            this.Label_bienvenido.Name = "Label_bienvenido";
            this.Label_bienvenido.Size = new System.Drawing.Size(176, 22);
            this.Label_bienvenido.TabIndex = 41;
            this.Label_bienvenido.Text = "Registrar devolución";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.label1.Font = new System.Drawing.Font("Modern No. 20", 15F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.Navy;
            this.label1.Location = new System.Drawing.Point(11, 45);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(180, 44);
            this.label1.TabIndex = 40;
            this.label1.Text = "Sistema de Registros\r\nAlmacén de Deportes";
            // 
            // accept_select_client
            // 
            this.accept_select_client.Location = new System.Drawing.Point(203, 301);
            this.accept_select_client.Name = "accept_select_client";
            this.accept_select_client.Size = new System.Drawing.Size(82, 24);
            this.accept_select_client.TabIndex = 39;
            this.accept_select_client.Text = "Aceptar";
            this.accept_select_client.UseVisualStyleBackColor = true;
            this.accept_select_client.Click += new System.EventHandler(this.accept_select_client_Click);
            // 
            // logo_seleccion
            // 
            this.logo_seleccion.Image = ((System.Drawing.Image)(resources.GetObject("logo_seleccion.Image")));
            this.logo_seleccion.Location = new System.Drawing.Point(-1, -15);
            this.logo_seleccion.Name = "logo_seleccion";
            this.logo_seleccion.Size = new System.Drawing.Size(136, 57);
            this.logo_seleccion.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.logo_seleccion.TabIndex = 38;
            this.logo_seleccion.TabStop = false;
            // 
            // Label_title_Seleccion
            // 
            this.Label_title_Seleccion.AutoSize = true;
            this.Label_title_Seleccion.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_Seleccion.ForeColor = System.Drawing.Color.Navy;
            this.Label_title_Seleccion.Location = new System.Drawing.Point(158, 3);
            this.Label_title_Seleccion.Name = "Label_title_Seleccion";
            this.Label_title_Seleccion.Size = new System.Drawing.Size(181, 25);
            this.Label_title_Seleccion.TabIndex = 32;
            this.Label_title_Seleccion.Text = "Campus Santa Fe";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Modern No. 20", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(67, 239);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(65, 17);
            this.label5.TabIndex = 48;
            this.label5.Text = "Material:";
            this.label5.TextAlign = System.Drawing.ContentAlignment.TopRight;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Modern No. 20", 8.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(160, 191);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(133, 30);
            this.label3.TabIndex = 46;
            this.label3.Text = "Matrícula: \"A\" y 8 dígitos.\r\n Ej: A00123456";
            this.label3.TextAlign = System.Drawing.ContentAlignment.TopRight;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Modern No. 20", 11.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(59, 168);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(73, 17);
            this.label2.TabIndex = 45;
            this.label2.Text = "Matrícula:";
            this.label2.TextAlign = System.Drawing.ContentAlignment.TopRight;
            // 
            // almacen_deportesDataSet
            // 
            this.almacen_deportesDataSet.DataSetName = "Almacen_deportesDataSet";
            this.almacen_deportesDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // devoluciónBindingSource
            // 
            this.devoluciónBindingSource.DataMember = "Devolución";
            this.devoluciónBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // devoluciónTableAdapter
            // 
            this.devoluciónTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.MaterialTableAdapter = this.materialTableAdapter;
            this.tableAdapterManager.PréstamoTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            this.tableAdapterManager.UsuarioTableAdapter = null;
            // 
            // materialTableAdapter
            // 
            this.materialTableAdapter.ClearBeforeFill = true;
            // 
            // devoluciónBindingNavigator
            // 
            this.devoluciónBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.devoluciónBindingNavigator.BindingSource = this.devoluciónBindingSource;
            this.devoluciónBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.devoluciónBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.devoluciónBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bindingNavigatorMoveFirstItem,
            this.bindingNavigatorMovePreviousItem,
            this.bindingNavigatorSeparator,
            this.bindingNavigatorPositionItem,
            this.bindingNavigatorCountItem,
            this.bindingNavigatorSeparator1,
            this.bindingNavigatorMoveNextItem,
            this.bindingNavigatorMoveLastItem,
            this.bindingNavigatorSeparator2,
            this.bindingNavigatorAddNewItem,
            this.bindingNavigatorDeleteItem,
            this.devoluciónBindingNavigatorSaveItem});
            this.devoluciónBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.devoluciónBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.devoluciónBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.devoluciónBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.devoluciónBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.devoluciónBindingNavigator.Name = "devoluciónBindingNavigator";
            this.devoluciónBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.devoluciónBindingNavigator.Size = new System.Drawing.Size(340, 25);
            this.devoluciónBindingNavigator.TabIndex = 50;
            this.devoluciónBindingNavigator.Text = "bindingNavigator1";
            // 
            // bindingNavigatorAddNewItem
            // 
            this.bindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorAddNewItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem.Image")));
            this.bindingNavigatorAddNewItem.Name = "bindingNavigatorAddNewItem";
            this.bindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorAddNewItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorAddNewItem.Text = "Agregar nuevo";
            // 
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(37, 22);
            this.bindingNavigatorCountItem.Text = "de {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Número total de elementos";
            // 
            // bindingNavigatorDeleteItem
            // 
            this.bindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorDeleteItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem.Image")));
            this.bindingNavigatorDeleteItem.Name = "bindingNavigatorDeleteItem";
            this.bindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorDeleteItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorDeleteItem.Text = "Eliminar";
            // 
            // bindingNavigatorMoveFirstItem
            // 
            this.bindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveFirstItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
            this.bindingNavigatorMoveFirstItem.Name = "bindingNavigatorMoveFirstItem";
            this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveFirstItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveFirstItem.Text = "Mover primero";
            // 
            // bindingNavigatorMovePreviousItem
            // 
            this.bindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMovePreviousItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
            this.bindingNavigatorMovePreviousItem.Name = "bindingNavigatorMovePreviousItem";
            this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMovePreviousItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMovePreviousItem.Text = "Mover anterior";
            // 
            // bindingNavigatorSeparator
            // 
            this.bindingNavigatorSeparator.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator.Size = new System.Drawing.Size(6, 25);
            // 
            // bindingNavigatorPositionItem
            // 
            this.bindingNavigatorPositionItem.AccessibleName = "Posición";
            this.bindingNavigatorPositionItem.AutoSize = false;
            this.bindingNavigatorPositionItem.Name = "bindingNavigatorPositionItem";
            this.bindingNavigatorPositionItem.Size = new System.Drawing.Size(50, 23);
            this.bindingNavigatorPositionItem.Text = "0";
            this.bindingNavigatorPositionItem.ToolTipText = "Posición actual";
            // 
            // bindingNavigatorSeparator1
            // 
            this.bindingNavigatorSeparator1.Name = "bindingNavigatorSeparator1";
            this.bindingNavigatorSeparator1.Size = new System.Drawing.Size(6, 25);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this.bindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveNextItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
            this.bindingNavigatorMoveNextItem.Name = "bindingNavigatorMoveNextItem";
            this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveNextItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveNextItem.Text = "Mover siguiente";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(23, 22);
            this.bindingNavigatorMoveLastItem.Text = "Mover último";
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator2";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 25);
            // 
            // devoluciónBindingNavigatorSaveItem
            // 
            this.devoluciónBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.devoluciónBindingNavigatorSaveItem.Enabled = false;
            this.devoluciónBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("devoluciónBindingNavigatorSaveItem.Image")));
            this.devoluciónBindingNavigatorSaveItem.Name = "devoluciónBindingNavigatorSaveItem";
            this.devoluciónBindingNavigatorSaveItem.Size = new System.Drawing.Size(23, 22);
            this.devoluciónBindingNavigatorSaveItem.Text = "Guardar datos";
            // 
            // matrículaTextBox
            // 
            this.matrículaTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.devoluciónBindingSource, "Matrícula", true));
            this.matrículaTextBox.Location = new System.Drawing.Point(149, 168);
            this.matrículaTextBox.Name = "matrículaTextBox";
            this.matrículaTextBox.Size = new System.Drawing.Size(144, 20);
            this.matrículaTextBox.TabIndex = 51;
            // 
            // materialBindingSource
            // 
            this.materialBindingSource.DataMember = "Material";
            this.materialBindingSource.DataSource = this.almacen_deportesDataSet;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(331, -1);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(28, 26);
            this.pictureBox1.TabIndex = 75;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // materialTextBox
            // 
            this.materialTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.devoluciónBindingSource, "Material", true));
            this.materialTextBox.Location = new System.Drawing.Point(149, 239);
            this.materialTextBox.Name = "materialTextBox";
            this.materialTextBox.Size = new System.Drawing.Size(144, 20);
            this.materialTextBox.TabIndex = 78;
            // 
            // Devolucion
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(340, 349);
            this.Controls.Add(this.materialTextBox);
            this.Controls.Add(this.devoluciónBindingNavigator);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.matrículaTextBox);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.Label_bienvenido);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.accept_select_client);
            this.Controls.Add(this.logo_seleccion);
            this.Controls.Add(this.Label_title_Seleccion);
            this.Name = "Devolucion";
            this.Text = "Devolucion";
            this.Load += new System.EventHandler(this.Devolucion_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.devoluciónBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.devoluciónBindingNavigator)).EndInit();
            this.devoluciónBindingNavigator.ResumeLayout(false);
            this.devoluciónBindingNavigator.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label Label_bienvenido;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button accept_select_client;
        private System.Windows.Forms.PictureBox logo_seleccion;
        private System.Windows.Forms.Label Label_title_Seleccion;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private Almacen_deportesDataSet almacen_deportesDataSet;
        private System.Windows.Forms.BindingSource devoluciónBindingSource;
        private Almacen_deportesDataSetTableAdapters.DevoluciónTableAdapter devoluciónTableAdapter;
        private Almacen_deportesDataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator devoluciónBindingNavigator;
        private System.Windows.Forms.ToolStripButton bindingNavigatorAddNewItem;
        private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorDeleteItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator;
        private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator1;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem;
        private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem;
        private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator2;
        private System.Windows.Forms.ToolStripButton devoluciónBindingNavigatorSaveItem;
        private System.Windows.Forms.TextBox matrículaTextBox;
        private Almacen_deportesDataSetTableAdapters.MaterialTableAdapter materialTableAdapter;
        private System.Windows.Forms.BindingSource materialBindingSource;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.TextBox materialTextBox;
    }
}