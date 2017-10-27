namespace Practica_laboratorio_14
{
    partial class Ejercicio14
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
            System.Windows.Forms.Label hombresLabel;
            System.Windows.Forms.Label mujeresLabel;
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Ejercicio14));
            this.base_de_datos_TC1019DataSet = new Practica_laboratorio_14.Base_de_datos_TC1019DataSet();
            this.ejercicio_Salon14_bBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.ejercicio_Salon14_bTableAdapter = new Practica_laboratorio_14.Base_de_datos_TC1019DataSetTableAdapters.Ejercicio_Salon14_bTableAdapter();
            this.tableAdapterManager = new Practica_laboratorio_14.Base_de_datos_TC1019DataSetTableAdapters.TableAdapterManager();
            this.ejercicio_Salon14_bBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
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
            this.ejercicio_Salon14_bBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.hombresTextBox = new System.Windows.Forms.TextBox();
            this.mujeresTextBox = new System.Windows.Forms.TextBox();
            this.button7 = new System.Windows.Forms.Button();
            hombresLabel = new System.Windows.Forms.Label();
            mujeresLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.base_de_datos_TC1019DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_bBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_bBindingNavigator)).BeginInit();
            this.ejercicio_Salon14_bBindingNavigator.SuspendLayout();
            this.SuspendLayout();
            // 
            // hombresLabel
            // 
            hombresLabel.AutoSize = true;
            hombresLabel.Location = new System.Drawing.Point(31, 68);
            hombresLabel.Name = "hombresLabel";
            hombresLabel.Size = new System.Drawing.Size(52, 13);
            hombresLabel.TabIndex = 1;
            hombresLabel.Text = "Hombres:";
            // 
            // mujeresLabel
            // 
            mujeresLabel.AutoSize = true;
            mujeresLabel.Location = new System.Drawing.Point(31, 94);
            mujeresLabel.Name = "mujeresLabel";
            mujeresLabel.Size = new System.Drawing.Size(47, 13);
            mujeresLabel.TabIndex = 3;
            mujeresLabel.Text = "Mujeres:";
            // 
            // base_de_datos_TC1019DataSet
            // 
            this.base_de_datos_TC1019DataSet.DataSetName = "Base_de_datos_TC1019DataSet";
            this.base_de_datos_TC1019DataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // ejercicio_Salon14_bBindingSource
            // 
            this.ejercicio_Salon14_bBindingSource.DataMember = "Ejercicio_Salon14_b";
            this.ejercicio_Salon14_bBindingSource.DataSource = this.base_de_datos_TC1019DataSet;
            // 
            // ejercicio_Salon14_bTableAdapter
            // 
            this.ejercicio_Salon14_bTableAdapter.ClearBeforeFill = true;
            // 
            // tableAdapterManager
            // 
            this.tableAdapterManager.BackupDataSetBeforeUpdate = false;
            this.tableAdapterManager.Connection = null;
            this.tableAdapterManager.UpdateOrder = Practica_laboratorio_14.Base_de_datos_TC1019DataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete;
            // 
            // ejercicio_Salon14_bBindingNavigator
            // 
            this.ejercicio_Salon14_bBindingNavigator.AddNewItem = this.bindingNavigatorAddNewItem;
            this.ejercicio_Salon14_bBindingNavigator.BindingSource = this.ejercicio_Salon14_bBindingSource;
            this.ejercicio_Salon14_bBindingNavigator.CountItem = this.bindingNavigatorCountItem;
            this.ejercicio_Salon14_bBindingNavigator.DeleteItem = this.bindingNavigatorDeleteItem;
            this.ejercicio_Salon14_bBindingNavigator.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
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
            this.ejercicio_Salon14_bBindingNavigatorSaveItem});
            this.ejercicio_Salon14_bBindingNavigator.Location = new System.Drawing.Point(0, 0);
            this.ejercicio_Salon14_bBindingNavigator.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
            this.ejercicio_Salon14_bBindingNavigator.MoveLastItem = this.bindingNavigatorMoveLastItem;
            this.ejercicio_Salon14_bBindingNavigator.MoveNextItem = this.bindingNavigatorMoveNextItem;
            this.ejercicio_Salon14_bBindingNavigator.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
            this.ejercicio_Salon14_bBindingNavigator.Name = "ejercicio_Salon14_bBindingNavigator";
            this.ejercicio_Salon14_bBindingNavigator.PositionItem = this.bindingNavigatorPositionItem;
            this.ejercicio_Salon14_bBindingNavigator.Size = new System.Drawing.Size(230, 25);
            this.ejercicio_Salon14_bBindingNavigator.TabIndex = 0;
            this.ejercicio_Salon14_bBindingNavigator.Text = "bindingNavigator1";
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
            this.bindingNavigatorDeleteItem.Size = new System.Drawing.Size(23, 20);
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
            // ejercicio_Salon14_bBindingNavigatorSaveItem
            // 
            this.ejercicio_Salon14_bBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.ejercicio_Salon14_bBindingNavigatorSaveItem.Enabled = false;
            this.ejercicio_Salon14_bBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("ejercicio_Salon14_bBindingNavigatorSaveItem.Image")));
            this.ejercicio_Salon14_bBindingNavigatorSaveItem.Name = "ejercicio_Salon14_bBindingNavigatorSaveItem";
            this.ejercicio_Salon14_bBindingNavigatorSaveItem.Size = new System.Drawing.Size(23, 20);
            this.ejercicio_Salon14_bBindingNavigatorSaveItem.Text = "Guardar datos";
            // 
            // hombresTextBox
            // 
            this.hombresTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.ejercicio_Salon14_bBindingSource, "Hombres", true));
            this.hombresTextBox.Location = new System.Drawing.Point(89, 65);
            this.hombresTextBox.Name = "hombresTextBox";
            this.hombresTextBox.Size = new System.Drawing.Size(100, 20);
            this.hombresTextBox.TabIndex = 2;
            // 
            // mujeresTextBox
            // 
            this.mujeresTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.ejercicio_Salon14_bBindingSource, "Mujeres", true));
            this.mujeresTextBox.Location = new System.Drawing.Point(89, 91);
            this.mujeresTextBox.Name = "mujeresTextBox";
            this.mujeresTextBox.Size = new System.Drawing.Size(100, 20);
            this.mujeresTextBox.TabIndex = 4;
            // 
            // button7
            // 
            this.button7.Location = new System.Drawing.Point(75, 151);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(87, 27);
            this.button7.TabIndex = 10;
            this.button7.Text = "Salir";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            // 
            // Ejercicio14
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(230, 211);
            this.Controls.Add(this.button7);
            this.Controls.Add(hombresLabel);
            this.Controls.Add(this.hombresTextBox);
            this.Controls.Add(mujeresLabel);
            this.Controls.Add(this.mujeresTextBox);
            this.Controls.Add(this.ejercicio_Salon14_bBindingNavigator);
            this.Name = "Ejercicio14";
            this.Text = "Ejercicio14";
            this.Load += new System.EventHandler(this.Ejercicio14_Load);
            ((System.ComponentModel.ISupportInitialize)(this.base_de_datos_TC1019DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_bBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.ejercicio_Salon14_bBindingNavigator)).EndInit();
            this.ejercicio_Salon14_bBindingNavigator.ResumeLayout(false);
            this.ejercicio_Salon14_bBindingNavigator.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private Base_de_datos_TC1019DataSet base_de_datos_TC1019DataSet;
        private System.Windows.Forms.BindingSource ejercicio_Salon14_bBindingSource;
        private Base_de_datos_TC1019DataSetTableAdapters.Ejercicio_Salon14_bTableAdapter ejercicio_Salon14_bTableAdapter;
        private Base_de_datos_TC1019DataSetTableAdapters.TableAdapterManager tableAdapterManager;
        private System.Windows.Forms.BindingNavigator ejercicio_Salon14_bBindingNavigator;
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
        private System.Windows.Forms.ToolStripButton ejercicio_Salon14_bBindingNavigatorSaveItem;
        private System.Windows.Forms.TextBox hombresTextBox;
        private System.Windows.Forms.TextBox mujeresTextBox;
        private System.Windows.Forms.Button button7;
    }
}