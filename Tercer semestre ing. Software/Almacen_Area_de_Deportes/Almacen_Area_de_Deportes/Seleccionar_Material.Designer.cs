namespace Almacen_Area_de_Deportes
{
    partial class Seleccionar_Material
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Seleccionar_Material));
            this.button1 = new System.Windows.Forms.Button();
            this.Label_bienvenido = new System.Windows.Forms.Label();
            this.accept_select_client = new System.Windows.Forms.Button();
            this.logo_seleccion = new System.Windows.Forms.PictureBox();
            this.Label_title_Seleccion = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.almacen_deportesDataSet = new Almacen_Area_de_Deportes.Almacen_deportesDataSet();
            this.materialBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.materialTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.MaterialTableAdapter();
            this.tableAdapterManager = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager();
            this.materialBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
            this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
            this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
            this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.bindingNavigatorAddNewItem = new System.Windows.Forms.ToolStripButton();
            this.bindingNavigatorDeleteItem = new System.Windows.Forms.ToolStripButton();
            this.materialBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.registrar_materialesBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.registrar_materialesTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.Registrar_materialesTableAdapter();
            this.registrar_materialesDataGridView = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingNavigator)).BeginInit();
            this.materialBindingNavigator.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.registrar_materialesBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.registrar_materialesDataGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(82, 367);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(82, 24);
            this.button1.TabIndex = 67;
            this.button1.Text = "Cancelar";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Label_bienvenido
            // 
            this.Label_bienvenido.AutoSize = true;
            this.Label_bienvenido.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_bienvenido.ForeColor = System.Drawing.Color.Navy;
            this.Label_bienvenido.Location = new System.Drawing.Point(12, 78);
            this.Label_bienvenido.Name = "Label_bienvenido";
            this.Label_bienvenido.Size = new System.Drawing.Size(185, 24);
            this.Label_bienvenido.TabIndex = 66;
            this.Label_bienvenido.Text = "Seleccionar Material";
            // 
            // accept_select_client
            // 
            this.accept_select_client.Location = new System.Drawing.Point(232, 367);
            this.accept_select_client.Name = "accept_select_client";
            this.accept_select_client.Size = new System.Drawing.Size(82, 24);
            this.accept_select_client.TabIndex = 64;
            this.accept_select_client.Text = "Aceptar";
            this.accept_select_client.UseVisualStyleBackColor = true;
            this.accept_select_client.Click += new System.EventHandler(this.accept_select_client_Click);
            // 
            // logo_seleccion
            // 
            this.logo_seleccion.Image = ((System.Drawing.Image)(resources.GetObject("logo_seleccion.Image")));
            this.logo_seleccion.Location = new System.Drawing.Point(0, -2);
            this.logo_seleccion.Name = "logo_seleccion";
            this.logo_seleccion.Size = new System.Drawing.Size(136, 57);
            this.logo_seleccion.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.logo_seleccion.TabIndex = 63;
            this.logo_seleccion.TabStop = false;
            // 
            // Label_title_Seleccion
            // 
            this.Label_title_Seleccion.AutoSize = true;
            this.Label_title_Seleccion.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_Seleccion.ForeColor = System.Drawing.Color.Navy;
            this.Label_title_Seleccion.Location = new System.Drawing.Point(159, 16);
            this.Label_title_Seleccion.Name = "Label_title_Seleccion";
            this.Label_title_Seleccion.Size = new System.Drawing.Size(181, 25);
            this.Label_title_Seleccion.TabIndex = 61;
            this.Label_title_Seleccion.Text = "Campus Santa Fe";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(346, -2);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(28, 26);
            this.pictureBox1.TabIndex = 69;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
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
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.MaterialTableAdapter = this.materialTableAdapter;
            this.tableAdapterManager.PréstamoTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            this.tableAdapterManager.UsuarioTableAdapter = null;
            // 
            // materialBindingNavigator
            // 
            this.materialBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.materialBindingNavigator.BindingSource = this.materialBindingSource;
            this.materialBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.materialBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.materialBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.materialBindingNavigatorSaveItem});
            this.materialBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.materialBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.materialBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.materialBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.materialBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.materialBindingNavigator.Name = "materialBindingNavigator";
            this.materialBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.materialBindingNavigator.Size = new System.Drawing.Size(406, 25);
            this.materialBindingNavigator.TabIndex = 70;
            this.materialBindingNavigator.Text = "bindingNavigator1";
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
            // bindingNavigatorCountItem
            // 
            this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
            this.bindingNavigatorCountItem.Size = new System.Drawing.Size(37, 15);
            this.bindingNavigatorCountItem.Text = "de {0}";
            this.bindingNavigatorCountItem.ToolTipText = "Número total de elementos";
            // 
            // bindingNavigatorSeparator1
            // 
            this.bindingNavigatorSeparator1.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator1.Size = new System.Drawing.Size(6, 6);
            // 
            // bindingNavigatorMoveNextItem
            // 
            this.bindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveNextItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
            this.bindingNavigatorMoveNextItem.Name = "bindingNavigatorMoveNextItem";
            this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveNextItem.Size = new System.Drawing.Size(23, 20);
            this.bindingNavigatorMoveNextItem.Text = "Mover siguiente";
            // 
            // bindingNavigatorMoveLastItem
            // 
            this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
            this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
            this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(23, 20);
            this.bindingNavigatorMoveLastItem.Text = "Mover último";
            // 
            // bindingNavigatorSeparator2
            // 
            this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator";
            this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 6);
            // 
            // bindingNavigatorAddNewItem
            // 
            this.bindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorAddNewItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem.Image")));
            this.bindingNavigatorAddNewItem.Name = "bindingNavigatorAddNewItem";
            this.bindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorAddNewItem.Size = new System.Drawing.Size(23, 20);
            this.bindingNavigatorAddNewItem.Text = "Agregar nuevo";
            // 
            // bindingNavigatorDeleteItem
            // 
            this.bindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.bindingNavigatorDeleteItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem.Image")));
            this.bindingNavigatorDeleteItem.Name = "bindingNavigatorDeleteItem";
            this.bindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = true;
            this.bindingNavigatorDeleteItem.Size = new System.Drawing.Size(23, 20);
            this.bindingNavigatorDeleteItem.Text = "Eliminar";
            // 
            // materialBindingNavigatorSaveItem
            // 
            this.materialBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.materialBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("materialBindingNavigatorSaveItem.Image")));
            this.materialBindingNavigatorSaveItem.Name = "materialBindingNavigatorSaveItem";
            this.materialBindingNavigatorSaveItem.Size = new System.Drawing.Size(23, 23);
            this.materialBindingNavigatorSaveItem.Text = "Guardar datos";
            this.materialBindingNavigatorSaveItem.Click += new System.EventHandler(this.materialBindingNavigatorSaveItem_Click_1);
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
            // registrar_materialesDataGridView
            // 
            this.registrar_materialesDataGridView.AutoGenerateColumns = false;
            this.registrar_materialesDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.registrar_materialesDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.dataGridViewTextBoxColumn2,
            this.dataGridViewTextBoxColumn3});
            this.registrar_materialesDataGridView.DataSource = this.registrar_materialesBindingSource;
            this.registrar_materialesDataGridView.Location = new System.Drawing.Point(53, 129);
            this.registrar_materialesDataGridView.Name = "registrar_materialesDataGridView";
            this.registrar_materialesDataGridView.Size = new System.Drawing.Size(300, 220);
            this.registrar_materialesDataGridView.TabIndex = 70;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.DataPropertyName = "Material";
            this.dataGridViewTextBoxColumn1.HeaderText = "Material";
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.DataPropertyName = "Condición";
            this.dataGridViewTextBoxColumn2.HeaderText = "Condición";
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            // 
            // dataGridViewTextBoxColumn3
            // 
            this.dataGridViewTextBoxColumn3.DataPropertyName = "Características";
            this.dataGridViewTextBoxColumn3.HeaderText = "Características";
            this.dataGridViewTextBoxColumn3.Name = "dataGridViewTextBoxColumn3";
            // 
            // Seleccionar_Material
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(406, 403);
            this.Controls.Add(this.registrar_materialesDataGridView);
            this.Controls.Add(this.materialBindingNavigator);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.Label_bienvenido);
            this.Controls.Add(this.accept_select_client);
            this.Controls.Add(this.logo_seleccion);
            this.Controls.Add(this.Label_title_Seleccion);
            this.Name = "Seleccionar_Material";
            this.Text = "Seleccionar_Material";
            this.Load += new System.EventHandler(this.Seleccionar_Material_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.materialBindingNavigator)).EndInit();
            this.materialBindingNavigator.ResumeLayout(false);
            this.materialBindingNavigator.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.registrar_materialesBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.registrar_materialesDataGridView)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label Label_bienvenido;
        private System.Windows.Forms.Button accept_select_client;
        private System.Windows.Forms.PictureBox logo_seleccion;
        private System.Windows.Forms.Label Label_title_Seleccion;
        private System.Windows.Forms.PictureBox pictureBox1;
        private Almacen_deportesDataSet almacen_deportesDataSet;
        private System.Windows.Forms.BindingSource materialBindingSource;
        private Almacen_deportesDataSetTableAdapters.MaterialTableAdapter materialTableAdapter;
        private Almacen_deportesDataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator materialBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton materialBindingNavigatorSaveItem;
        private System.Windows.Forms.BindingSource registrar_materialesBindingSource;
        private Almacen_deportesDataSetTableAdapters.Registrar_materialesTableAdapter registrar_materialesTableAdapter;
        private System.Windows.Forms.DataGridView registrar_materialesDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn3;
    }
}