namespace Practica_laboratorio_14
{
    partial class Ejercicio14_c
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Ejercicio14_c));
            System.Windows.Forms.Label utilidadesLabel;
            this.base_de_datos_TC1019DataSet = new Practica_laboratorio_14.Base_de_datos_TC1019DataSet();
            this.ejercicio_Salon14_cBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.ejercicio_Salon14_cTableAdapter = new Practica_laboratorio_14.Base_de_datos_TC1019DataSetTableAdapters.Ejercicio_Salon14_cTableAdapter();
            this.tableAdapterManager = new Practica_laboratorio_14.Base_de_datos_TC1019DataSetTableAdapters.TableAdapterManager();
            this.ejercicio_Salon14_cBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
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
            this.ejercicio_Salon14_cBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.utilidadesTextBox = new System.Windows.Forms.TextBox();
            this.button7 = new System.Windows.Forms.Button();
            utilidadesLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.base_de_datos_TC1019DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_cBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_cBindingNavigator)).BeginInit();
            this.ejercicio_Salon14_cBindingNavigator.SuspendLayout();
            this.SuspendLayout();
            // 
            // base_de_datos_TC1019DataSet
            // 
            this.base_de_datos_TC1019DataSet.DataSetName = "Base_de_datos_TC1019DataSet";
            this.base_de_datos_TC1019DataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // ejercicio_Salon14_cBindingSource
            // 
            this.ejercicio_Salon14_cBindingSource.DataMember = "Ejercicio_Salon14_c";
            this.ejercicio_Salon14_cBindingSource.DataSource = this.base_de_datos_TC1019DataSet;
            // 
            // ejercicio_Salon14_cTableAdapter
            // 
            this.ejercicio_Salon14_cTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.Connection = null;
            this.tableAdapterManager.UpdateOrder = Practica_laboratorio_14.Base_de_datos_TC1019DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // ejercicio_Salon14_cBindingNavigator
            // 
            this.ejercicio_Salon14_cBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.ejercicio_Salon14_cBindingNavigator.BindingSource = this.ejercicio_Salon14_cBindingSource;
            this.ejercicio_Salon14_cBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.ejercicio_Salon14_cBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.ejercicio_Salon14_cBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.ejercicio_Salon14_cBindingNavigatorSaveItem});
            this.ejercicio_Salon14_cBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.ejercicio_Salon14_cBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.ejercicio_Salon14_cBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.ejercicio_Salon14_cBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.ejercicio_Salon14_cBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.ejercicio_Salon14_cBindingNavigator.Name = "ejercicio_Salon14_cBindingNavigator";
            this.ejercicio_Salon14_cBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.ejercicio_Salon14_cBindingNavigator.Size = new System.Drawing.Size(213, 25);
            this.ejercicio_Salon14_cBindingNavigator.TabIndex = 0;
            this.ejercicio_Salon14_cBindingNavigator.Text = "bindingNavigator1";
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
            // ejercicio_Salon14_cBindingNavigatorSaveItem
            // 
            this.ejercicio_Salon14_cBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.ejercicio_Salon14_cBindingNavigatorSaveItem.Enabled = false;
            this.ejercicio_Salon14_cBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("ejercicio_Salon14_cBindingNavigatorSaveItem.Image")));
            this.ejercicio_Salon14_cBindingNavigatorSaveItem.Name = "ejercicio_Salon14_cBindingNavigatorSaveItem";
            this.ejercicio_Salon14_cBindingNavigatorSaveItem.Size = new System.Drawing.Size(23, 20);
            this.ejercicio_Salon14_cBindingNavigatorSaveItem.Text = "Guardar datos";
            // 
            // utilidadesLabel
            // 
            utilidadesLabel.AutoSize = true;
            utilidadesLabel.Location = new System.Drawing.Point(22, 54);
            utilidadesLabel.Name = "utilidadesLabel";
            utilidadesLabel.Size = new System.Drawing.Size(56, 13);
            utilidadesLabel.TabIndex = 1;
            utilidadesLabel.Text = "Utilidades:";
            // 
            // utilidadesTextBox
            // 
            this.utilidadesTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.ejercicio_Salon14_cBindingSource, "Utilidades", true));
            this.utilidadesTextBox.Location = new System.Drawing.Point(84, 51);
            this.utilidadesTextBox.Name = "utilidadesTextBox";
            this.utilidadesTextBox.Size = new System.Drawing.Size(100, 20);
            this.utilidadesTextBox.TabIndex = 2;
            // 
            // button7
            // 
            this.button7.Location = new System.Drawing.Point(65, 101);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(87, 27);
            this.button7.TabIndex = 10;
            this.button7.Text = "Salir";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            // 
            // Ejercicio14_c
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(213, 156);
            this.Controls.Add(this.button7);
            this.Controls.Add(utilidadesLabel);
            this.Controls.Add(this.utilidadesTextBox);
            this.Controls.Add(this.ejercicio_Salon14_cBindingNavigator);
            this.Name = "Ejercicio14_c";
            this.Text = "Ejercicio14_c";
            this.Load += new System.EventHandler(this.Ejercicio14_c_Load);
            ((System.ComponentModel.ISupportInitialize)(this.base_de_datos_TC1019DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_cBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_cBindingNavigator)).EndInit();
            this.ejercicio_Salon14_cBindingNavigator.ResumeLayout(false);
            this.ejercicio_Salon14_cBindingNavigator.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Base_de_datos_TC1019DataSet base_de_datos_TC1019DataSet;
        private System.Windows.Forms.BindingSource ejercicio_Salon14_cBindingSource;
        private Base_de_datos_TC1019DataSetTableAdapters.Ejercicio_Salon14_cTableAdapter ejercicio_Salon14_cTableAdapter;
        private Base_de_datos_TC1019DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator ejercicio_Salon14_cBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton ejercicio_Salon14_cBindingNavigatorSaveItem;
        private System.Windows.Forms.TextBox utilidadesTextBox;
        private System.Windows.Forms.Button button7;
    }
}