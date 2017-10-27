namespace Tarea_El_buho_inteligente
{
    partial class Seleccionar_equipo
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Seleccionar_equipo));
            this.accept_select_client = new System.Windows.Forms.Button();
            this.return_select_client = new System.Windows.Forms.Button();
            this.label2_seleccion_cliente = new System.Windows.Forms.Label();
            this.Label_title_Seleccion = new System.Windows.Forms.Label();
            this.logo_seleccion = new System.Windows.Forms.PictureBox();
            this.practica_lab12DataSet = new Tarea_El_buho_inteligente.Practica_lab12DataSet();
            this.equipoBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.equipoTableAdapter = new Tarea_El_buho_inteligente.Practica_lab12DataSetTableAdapters.EquipoTableAdapter();
            this.tableAdapterManager = new Tarea_El_buho_inteligente.Practica_lab12DataSetTableAdapters.TableAdapterManager();
            this.equipoBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
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
            this.equipoBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.equipoDataGridView = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn3 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn4 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.practica_lab12DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingNavigator)).BeginInit();
            this.equipoBindingNavigator.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.equipoDataGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // accept_select_client
            // 
            this.accept_select_client.Location = new System.Drawing.Point(204, 367);
            this.accept_select_client.Name = "accept_select_client";
            this.accept_select_client.Size = new System.Drawing.Size(82, 24);
            this.accept_select_client.TabIndex = 22;
            this.accept_select_client.Text = "Aceptar";
            this.accept_select_client.UseVisualStyleBackColor = true;
            this.accept_select_client.Click += new System.EventHandler(this.accept_select_client_Click);
            // 
            // return_select_client
            // 
            this.return_select_client.Location = new System.Drawing.Point(51, 367);
            this.return_select_client.Name = "return_select_client";
            this.return_select_client.Size = new System.Drawing.Size(82, 24);
            this.return_select_client.TabIndex = 21;
            this.return_select_client.Text = "Regresar";
            this.return_select_client.UseVisualStyleBackColor = true;
            this.return_select_client.Click += new System.EventHandler(this.return_select_client_Click);
            // 
            // label2_seleccion_cliente
            // 
            this.label2_seleccion_cliente.AutoSize = true;
            this.label2_seleccion_cliente.Font = new System.Drawing.Font("Modern No. 20", 16F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2_seleccion_cliente.Location = new System.Drawing.Point(12, 73);
            this.label2_seleccion_cliente.Name = "label2_seleccion_cliente";
            this.label2_seleccion_cliente.Size = new System.Drawing.Size(290, 24);
            this.label2_seleccion_cliente.TabIndex = 19;
            this.label2_seleccion_cliente.Text = "Seleccione el equipo a consultar";
            this.label2_seleccion_cliente.Click += new System.EventHandler(this.label2_seleccion_cliente_Click);
            // 
            // Label_title_Seleccion
            // 
            this.Label_title_Seleccion.AutoSize = true;
            this.Label_title_Seleccion.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_Seleccion.Location = new System.Drawing.Point(61, 13);
            this.Label_title_Seleccion.Name = "Label_title_Seleccion";
            this.Label_title_Seleccion.Size = new System.Drawing.Size(209, 25);
            this.Label_title_Seleccion.TabIndex = 17;
            this.Label_title_Seleccion.Text = "El Búho inteligente";
            // 
            // logo_seleccion
            // 
            this.logo_seleccion.Image = global::Tarea_El_buho_inteligente.Properties.Resources.education_29_512;
            this.logo_seleccion.Location = new System.Drawing.Point(12, 4);
            this.logo_seleccion.Name = "logo_seleccion";
            this.logo_seleccion.Size = new System.Drawing.Size(43, 43);
            this.logo_seleccion.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.logo_seleccion.TabIndex = 18;
            this.logo_seleccion.TabStop = false;
            // 
            // practica_lab12DataSet
            // 
            this.practica_lab12DataSet.DataSetName = "Practica_lab12DataSet";
            this.practica_lab12DataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // equipoBindingSource
            // 
            this.equipoBindingSource.DataMember = "Equipo";
            this.equipoBindingSource.DataSource = this.practica_lab12DataSet;
            // 
            // equipoTableAdapter
            // 
            this.equipoTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.ClienteTableAdapter = null;
            this.tableAdapterManager.EquipoTableAdapter = this.equipoTableAdapter;
            this.tableAdapterManager.GarantiaTableAdapter = null;
            this.tableAdapterManager.ReporteTableAdapter = null;
            this.tableAdapterManager.UpdateOrder = Tarea_El_buho_inteligente.Practica_lab12DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // equipoBindingNavigator
            // 
            this.equipoBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.equipoBindingNavigator.BindingSource = this.equipoBindingSource;
            this.equipoBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.equipoBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.equipoBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.equipoBindingNavigatorSaveItem});
            this.equipoBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.equipoBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.equipoBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.equipoBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.equipoBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.equipoBindingNavigator.Name = "equipoBindingNavigator";
            this.equipoBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.equipoBindingNavigator.Size = new System.Drawing.Size(358, 25);
            this.equipoBindingNavigator.TabIndex = 23;
            this.equipoBindingNavigator.Text = "bindingNavigator1";
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
            this.bindingNavigatorAddNewItem.Size = new System.Drawing.Size(23, 22);
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
            // equipoBindingNavigatorSaveItem
            // 
            this.equipoBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.equipoBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("equipoBindingNavigatorSaveItem.Image")));
            this.equipoBindingNavigatorSaveItem.Name = "equipoBindingNavigatorSaveItem";
            this.equipoBindingNavigatorSaveItem.Size = new System.Drawing.Size(23, 23);
            this.equipoBindingNavigatorSaveItem.Text = "Guardar datos";
            this.equipoBindingNavigatorSaveItem.Click += new System.EventHandler(this.equipoBindingNavigatorSaveItem_Click);
            // 
            // equipoDataGridView
            // 
            this.equipoDataGridView.AutoGenerateColumns = false;
            this.equipoDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.equipoDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.dataGridViewTextBoxColumn2,
            this.dataGridViewTextBoxColumn3,
            this.dataGridViewTextBoxColumn4});
            this.equipoDataGridView.DataSource = this.equipoBindingSource;
            this.equipoDataGridView.Location = new System.Drawing.Point(28, 120);
            this.equipoDataGridView.Name = "equipoDataGridView";
            this.equipoDataGridView.Size = new System.Drawing.Size(300, 220);
            this.equipoDataGridView.TabIndex = 23;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.DataPropertyName = "NoSerie";
            this.dataGridViewTextBoxColumn1.HeaderText = "NoSerie";
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.DataPropertyName = "Modelo";
            this.dataGridViewTextBoxColumn2.HeaderText = "Modelo";
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            // 
            // dataGridViewTextBoxColumn3
            // 
            this.dataGridViewTextBoxColumn3.DataPropertyName = "Costo";
            this.dataGridViewTextBoxColumn3.HeaderText = "Costo";
            this.dataGridViewTextBoxColumn3.Name = "dataGridViewTextBoxColumn3";
            // 
            // dataGridViewTextBoxColumn4
            // 
            this.dataGridViewTextBoxColumn4.DataPropertyName = "Fecha_Adquisicion";
            this.dataGridViewTextBoxColumn4.HeaderText = "Fecha_Adquisicion";
            this.dataGridViewTextBoxColumn4.Name = "dataGridViewTextBoxColumn4";
            // 
            // Seleccionar_equipo
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(358, 420);
            this.Controls.Add(this.equipoDataGridView);
            this.Controls.Add(this.equipoBindingNavigator);
            this.Controls.Add(this.accept_select_client);
            this.Controls.Add(this.return_select_client);
            this.Controls.Add(this.label2_seleccion_cliente);
            this.Controls.Add(this.logo_seleccion);
            this.Controls.Add(this.Label_title_Seleccion);
            this.Name = "Seleccionar_equipo";
            this.Text = "Seleccionar_equipo";
            this.Load += new System.EventHandler(this.Seleccionar_equipo_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_seleccion)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.practica_lab12DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingNavigator)).EndInit();
            this.equipoBindingNavigator.ResumeLayout(false);
            this.equipoBindingNavigator.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.equipoDataGridView)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button accept_select_client;
        private System.Windows.Forms.Button return_select_client;
        private System.Windows.Forms.Label label2_seleccion_cliente;
        private System.Windows.Forms.PictureBox logo_seleccion;
        private System.Windows.Forms.Label Label_title_Seleccion;
        private Practica_lab12DataSet practica_lab12DataSet;
        private System.Windows.Forms.BindingSource equipoBindingSource;
        private Practica_lab12DataSetTableAdapters.EquipoTableAdapter equipoTableAdapter;
        private Practica_lab12DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator equipoBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton equipoBindingNavigatorSaveItem;
        private System.Windows.Forms.DataGridView equipoDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn3;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn4;
    }
}