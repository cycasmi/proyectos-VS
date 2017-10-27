namespace Almacen_Area_de_Deportes
{
    partial class Control_prestamos
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Control_prestamos));
            this.accept_select_client = new System.Windows.Forms.Button();
            this.logo_seleccion = new System.Windows.Forms.PictureBox();
            this.Label_title_Seleccion = new System.Windows.Forms.Label();
            this.Label_bienvenido = new System.Windows.Forms.Label();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.almacen_deportesDataSet = new Almacen_Area_de_Deportes.Almacen_deportesDataSet();
            this.préstamoBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.préstamoTableAdapter = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.PréstamoTableAdapter();
            this.tableAdapterManager = new Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager();
            this.préstamoBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
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
            this.préstamoBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.préstamoDataGridView = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewCheckBoxColumn1 = new System.Windows.Forms.DataGridViewCheckBoxColumn();
            this.dataGridViewTextBoxColumn4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoBindingNavigator)).BeginInit();
            this.préstamoBindingNavigator.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoDataGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // accept_select_client
            // 
            this.accept_select_client.Location = new System.Drawing.Point(163, 362);
            this.accept_select_client.Name = "accept_select_client";
            this.accept_select_client.Size = new System.Drawing.Size(82, 24);
            this.accept_select_client.TabIndex = 64;
            this.accept_select_client.Text = "Regresar";
            this.accept_select_client.UseVisualStyleBackColor = true;
            this.accept_select_client.Click += new System.EventHandler(this.accept_select_client_Click);
            // 
            // logo_seleccion
            // 
            this.logo_seleccion.Image = ((System.Drawing.Image)(resources.GetObject("logo_seleccion.Image")));
            this.logo_seleccion.Location = new System.Drawing.Point(-1, -2);
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
            this.Label_title_Seleccion.Location = new System.Drawing.Point(158, 16);
            this.Label_title_Seleccion.Name = "Label_title_Seleccion";
            this.Label_title_Seleccion.Size = new System.Drawing.Size(181, 25);
            this.Label_title_Seleccion.TabIndex = 61;
            this.Label_title_Seleccion.Text = "Campus Santa Fe";
            // 
            // Label_bienvenido
            // 
            this.Label_bienvenido.AutoSize = true;
            this.Label_bienvenido.Font = new System.Drawing.Font("Modern No. 20", 15.75F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_bienvenido.ForeColor = System.Drawing.Color.Navy;
            this.Label_bienvenido.Location = new System.Drawing.Point(22, 70);
            this.Label_bienvenido.Name = "Label_bienvenido";
            this.Label_bienvenido.Size = new System.Drawing.Size(165, 24);
            this.Label_bienvenido.TabIndex = 69;
            this.Label_bienvenido.Text = "Lista de préstamos";
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(345, -2);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(28, 26);
            this.pictureBox1.TabIndex = 71;
            this.pictureBox1.TabStop = false;
            this.pictureBox1.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // almacen_deportesDataSet
            // 
            this.almacen_deportesDataSet.DataSetName = "Almacen_deportesDataSet";
            this.almacen_deportesDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
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
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.MaterialTableAdapter = null;
            this.tableAdapterManager.PréstamoTableAdapter = this.préstamoTableAdapter;
            this.tableAdapterManager.UpdateOrder = Almacen_Area_de_Deportes.Almacen_deportesDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            this.tableAdapterManager.UsuarioTableAdapter = null;
            // 
            // préstamoBindingNavigator
            // 
            this.préstamoBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.préstamoBindingNavigator.BindingSource = this.préstamoBindingSource;
            this.préstamoBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.préstamoBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.préstamoBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.préstamoBindingNavigatorSaveItem});
            this.préstamoBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.préstamoBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.préstamoBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.préstamoBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.préstamoBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.préstamoBindingNavigator.Name = "préstamoBindingNavigator";
            this.préstamoBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.préstamoBindingNavigator.Size = new System.Drawing.Size(396, 25);
            this.préstamoBindingNavigator.TabIndex = 72;
            this.préstamoBindingNavigator.Text = "bindingNavigator1";
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
            // préstamoBindingNavigatorSaveItem
            // 
            this.préstamoBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.préstamoBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("préstamoBindingNavigatorSaveItem.Image")));
            this.préstamoBindingNavigatorSaveItem.Name = "préstamoBindingNavigatorSaveItem";
            this.préstamoBindingNavigatorSaveItem.Size = new System.Drawing.Size(23, 22);
            this.préstamoBindingNavigatorSaveItem.Text = "Guardar datos";
            this.préstamoBindingNavigatorSaveItem.Click += new System.EventHandler(this.préstamoBindingNavigatorSaveItem_Click);
            // 
            // préstamoDataGridView
            // 
            this.préstamoDataGridView.AutoGenerateColumns = false;
            this.préstamoDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.préstamoDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.dataGridViewTextBoxColumn2,
            this.dataGridViewTextBoxColumn3,
            this.dataGridViewCheckBoxColumn1,
            this.dataGridViewTextBoxColumn4});
            this.préstamoDataGridView.DataSource = this.préstamoBindingSource;
            this.préstamoDataGridView.Location = new System.Drawing.Point(53, 114);
            this.préstamoDataGridView.Name = "préstamoDataGridView";
            this.préstamoDataGridView.Size = new System.Drawing.Size(300, 220);
            this.préstamoDataGridView.TabIndex = 72;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.DataPropertyName = "ID Préstamo";
            this.dataGridViewTextBoxColumn1.HeaderText = "ID Préstamo";
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.DataPropertyName = "Fecha de préstamo";
            this.dataGridViewTextBoxColumn2.HeaderText = "Fecha de préstamo";
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            // 
            // dataGridViewTextBoxColumn3
            // 
            this.dataGridViewTextBoxColumn3.DataPropertyName = "Fecha de devolución";
            this.dataGridViewTextBoxColumn3.HeaderText = "Fecha de devolución";
            this.dataGridViewTextBoxColumn3.Name = "dataGridViewTextBoxColumn3";
            // 
            // dataGridViewCheckBoxColumn1
            // 
            this.dataGridViewCheckBoxColumn1.DataPropertyName = "Devuelto";
            this.dataGridViewCheckBoxColumn1.HeaderText = "Devuelto";
            this.dataGridViewCheckBoxColumn1.Name = "dataGridViewCheckBoxColumn1";
            // 
            // dataGridViewTextBoxColumn4
            // 
            this.dataGridViewTextBoxColumn4.DataPropertyName = "Matrícula";
            this.dataGridViewTextBoxColumn4.HeaderText = "Matrícula";
            this.dataGridViewTextBoxColumn4.Name = "dataGridViewTextBoxColumn4";
            // 
            // Control_prestamos
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(396, 399);
            this.Controls.Add(this.préstamoDataGridView);
            this.Controls.Add(this.préstamoBindingNavigator);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.Label_bienvenido);
            this.Controls.Add(this.accept_select_client);
            this.Controls.Add(this.logo_seleccion);
            this.Controls.Add(this.Label_title_Seleccion);
            this.Name = "Control_prestamos";
            this.Text = "Lista de prestamos";
            this.Load += new System.EventHandler(this.Control_prestamos_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.almacen_deportesDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoBindingNavigator)).EndInit();
            this.préstamoBindingNavigator.ResumeLayout(false);
            this.préstamoBindingNavigator.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.préstamoDataGridView)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button accept_select_client;
        private System.Windows.Forms.PictureBox logo_seleccion;
        private System.Windows.Forms.Label Label_title_Seleccion;
        private System.Windows.Forms.Label Label_bienvenido;
        private System.Windows.Forms.PictureBox pictureBox1;
        private Almacen_deportesDataSet almacen_deportesDataSet;
        private System.Windows.Forms.BindingSource préstamoBindingSource;
        private Almacen_deportesDataSetTableAdapters.PréstamoTableAdapter préstamoTableAdapter;
        private Almacen_deportesDataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator préstamoBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton préstamoBindingNavigatorSaveItem;
        private System.Windows.Forms.DataGridView préstamoDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn3;
        private System.Windows.Forms.DataGridViewCheckBoxColumn dataGridViewCheckBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn4;
    }
}