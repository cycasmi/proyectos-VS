namespace Tarea_El_buho_inteligente
{
    partial class Registrar_Equipo
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
            System.Windows.Forms.Label noSerieLabel;
            System.Windows.Forms.Label modeloLabel;
            System.Windows.Forms.Label costoLabel;
            System.Windows.Forms.Label fecha_AdquisicionLabel;
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Registrar_Equipo));
            this.button2_accept_equipo = new System.Windows.Forms.Button();
            this.button1_return_equipo = new System.Windows.Forms.Button();
            this.label2_datos_equipo = new System.Windows.Forms.Label();
            this.Label_title_regist_equipo = new System.Windows.Forms.Label();
            this.logo_registro_datos_equipo = new System.Windows.Forms.PictureBox();
            this.practica_lab12DataSet = new Tarea_El_buho_inteligente.Practica_lab12DataSet();
            this.equipoBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.equipoTableAdapter = new Tarea_El_buho_inteligente.Practica_lab12DataSetTableAdapters.EquipoTableAdapter();
            this.tableAdapterManager = new Tarea_El_buho_inteligente.Practica_lab12DataSetTableAdapters.TableAdapterManager();
            this.equipoBindingNavigator = new System.Windows.Forms.BindingNavigator(this.components);
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
            this.equipoBindingNavigatorSaveItem = new System.Windows.Forms.ToolStripButton();
            this.noSerieTextBox = new System.Windows.Forms.TextBox();
            this.modeloTextBox = new System.Windows.Forms.TextBox();
            this.costoTextBox = new System.Windows.Forms.TextBox();
            this.fecha_AdquisicionTextBox = new System.Windows.Forms.TextBox();
            noSerieLabel = new System.Windows.Forms.Label();
            modeloLabel = new System.Windows.Forms.Label();
            costoLabel = new System.Windows.Forms.Label();
            fecha_AdquisicionLabel = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.logo_registro_datos_equipo)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.practica_lab12DataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingNavigator)).BeginInit();
            this.equipoBindingNavigator.SuspendLayout();
            this.SuspendLayout();
            // 
            // noSerieLabel
            // 
            noSerieLabel.AutoSize = true;
            noSerieLabel.Font = new System.Drawing.Font("Modern No. 20", 13F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            noSerieLabel.Location = new System.Drawing.Point(16, 136);
            noSerieLabel.Name = "noSerieLabel";
            noSerieLabel.Size = new System.Drawing.Size(75, 21);
            noSerieLabel.TabIndex = 29;
            noSerieLabel.Text = "No Serie:";
            // 
            // modeloLabel
            // 
            modeloLabel.AutoSize = true;
            modeloLabel.Font = new System.Drawing.Font("Modern No. 20", 13F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            modeloLabel.Location = new System.Drawing.Point(16, 227);
            modeloLabel.Name = "modeloLabel";
            modeloLabel.Size = new System.Drawing.Size(67, 21);
            modeloLabel.TabIndex = 31;
            modeloLabel.Text = "Modelo:";
            // 
            // costoLabel
            // 
            costoLabel.AutoSize = true;
            costoLabel.Font = new System.Drawing.Font("Modern No. 20", 13F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            costoLabel.Location = new System.Drawing.Point(16, 276);
            costoLabel.Name = "costoLabel";
            costoLabel.Size = new System.Drawing.Size(52, 21);
            costoLabel.TabIndex = 33;
            costoLabel.Text = "Costo:";
            // 
            // fecha_AdquisicionLabel
            // 
            fecha_AdquisicionLabel.AutoSize = true;
            fecha_AdquisicionLabel.Font = new System.Drawing.Font("Modern No. 20", 13F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            fecha_AdquisicionLabel.Location = new System.Drawing.Point(15, 175);
            fecha_AdquisicionLabel.Name = "fecha_AdquisicionLabel";
            fecha_AdquisicionLabel.Size = new System.Drawing.Size(149, 21);
            fecha_AdquisicionLabel.TabIndex = 35;
            fecha_AdquisicionLabel.Text = "Fecha Adquisicion:";
            // 
            // button2_accept_equipo
            // 
            this.button2_accept_equipo.Location = new System.Drawing.Point(254, 372);
            this.button2_accept_equipo.Name = "button2_accept_equipo";
            this.button2_accept_equipo.Size = new System.Drawing.Size(82, 24);
            this.button2_accept_equipo.TabIndex = 28;
            this.button2_accept_equipo.Text = "Aceptar";
            this.button2_accept_equipo.UseVisualStyleBackColor = true;
            this.button2_accept_equipo.Click += new System.EventHandler(this.button2_accept_equipo_Click);
            // 
            // button1_return_equipo
            // 
            this.button1_return_equipo.Location = new System.Drawing.Point(106, 372);
            this.button1_return_equipo.Name = "button1_return_equipo";
            this.button1_return_equipo.Size = new System.Drawing.Size(82, 24);
            this.button1_return_equipo.TabIndex = 27;
            this.button1_return_equipo.Text = "Regresar";
            this.button1_return_equipo.UseVisualStyleBackColor = true;
            this.button1_return_equipo.Click += new System.EventHandler(this.button1_return_equipo_Click);
            // 
            // label2_datos_equipo
            // 
            this.label2_datos_equipo.AutoSize = true;
            this.label2_datos_equipo.Font = new System.Drawing.Font("Modern No. 20", 16F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2_datos_equipo.Location = new System.Drawing.Point(15, 77);
            this.label2_datos_equipo.Name = "label2_datos_equipo";
            this.label2_datos_equipo.Size = new System.Drawing.Size(156, 24);
            this.label2_datos_equipo.TabIndex = 18;
            this.label2_datos_equipo.Text = "Datos del equipo";
            this.label2_datos_equipo.Click += new System.EventHandler(this.label2_register_Click);
            // 
            // Label_title_regist_equipo
            // 
            this.Label_title_regist_equipo.AutoSize = true;
            this.Label_title_regist_equipo.Font = new System.Drawing.Font("Modern No. 20", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Label_title_regist_equipo.Location = new System.Drawing.Point(64, 20);
            this.Label_title_regist_equipo.Name = "Label_title_regist_equipo";
            this.Label_title_regist_equipo.Size = new System.Drawing.Size(209, 25);
            this.Label_title_regist_equipo.TabIndex = 16;
            this.Label_title_regist_equipo.Text = "El Búho inteligente";
            // 
            // logo_registro_datos_equipo
            // 
            this.logo_registro_datos_equipo.Image = global::Tarea_El_buho_inteligente.Properties.Resources.education_29_512;
            this.logo_registro_datos_equipo.Location = new System.Drawing.Point(15, 11);
            this.logo_registro_datos_equipo.Name = "logo_registro_datos_equipo";
            this.logo_registro_datos_equipo.Size = new System.Drawing.Size(43, 43);
            this.logo_registro_datos_equipo.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.logo_registro_datos_equipo.TabIndex = 17;
            this.logo_registro_datos_equipo.TabStop = false;
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
            this.equipoBindingNavigator.Size = new System.Drawing.Size(417, 25);
            this.equipoBindingNavigator.TabIndex = 29;
            this.equipoBindingNavigator.Text = "bindingNavigator1";
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
            // equipoBindingNavigatorSaveItem
            // 
            this.equipoBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.equipoBindingNavigatorSaveItem.Image = ((System.Drawing.Image)(resources.GetObject("equipoBindingNavigatorSaveItem.Image")));
            this.equipoBindingNavigatorSaveItem.Name = "equipoBindingNavigatorSaveItem";
            this.equipoBindingNavigatorSaveItem.Size = new System.Drawing.Size(23, 22);
            this.equipoBindingNavigatorSaveItem.Text = "Guardar datos";
            this.equipoBindingNavigatorSaveItem.Click += new System.EventHandler(this.equipoBindingNavigatorSaveItem_Click_1);
            // 
            // noSerieTextBox
            // 
            this.noSerieTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.equipoBindingSource, "NoSerie", true));
            this.noSerieTextBox.Location = new System.Drawing.Point(183, 137);
            this.noSerieTextBox.Name = "noSerieTextBox";
            this.noSerieTextBox.Size = new System.Drawing.Size(184, 20);
            this.noSerieTextBox.TabIndex = 30;
            // 
            // modeloTextBox
            // 
            this.modeloTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.equipoBindingSource, "Modelo", true));
            this.modeloTextBox.Location = new System.Drawing.Point(183, 229);
            this.modeloTextBox.Name = "modeloTextBox";
            this.modeloTextBox.Size = new System.Drawing.Size(184, 20);
            this.modeloTextBox.TabIndex = 32;
            // 
            // costoTextBox
            // 
            this.costoTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.equipoBindingSource, "Costo", true));
            this.costoTextBox.Location = new System.Drawing.Point(183, 277);
            this.costoTextBox.Name = "costoTextBox";
            this.costoTextBox.Size = new System.Drawing.Size(184, 20);
            this.costoTextBox.TabIndex = 34;
            // 
            // fecha_AdquisicionTextBox
            // 
            this.fecha_AdquisicionTextBox.DataBindings.Add(new System.Windows.Forms.Binding("Text", this.equipoBindingSource, "Fecha_Adquisicion", true));
            this.fecha_AdquisicionTextBox.Location = new System.Drawing.Point(183, 177);
            this.fecha_AdquisicionTextBox.Name = "fecha_AdquisicionTextBox";
            this.fecha_AdquisicionTextBox.Size = new System.Drawing.Size(184, 20);
            this.fecha_AdquisicionTextBox.TabIndex = 36;
            // 
            // Registrar_Equipo
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(417, 423);
            this.Controls.Add(noSerieLabel);
            this.Controls.Add(this.noSerieTextBox);
            this.Controls.Add(modeloLabel);
            this.Controls.Add(this.modeloTextBox);
            this.Controls.Add(costoLabel);
            this.Controls.Add(this.costoTextBox);
            this.Controls.Add(fecha_AdquisicionLabel);
            this.Controls.Add(this.fecha_AdquisicionTextBox);
            this.Controls.Add(this.equipoBindingNavigator);
            this.Controls.Add(this.button2_accept_equipo);
            this.Controls.Add(this.button1_return_equipo);
            this.Controls.Add(this.label2_datos_equipo);
            this.Controls.Add(this.logo_registro_datos_equipo);
            this.Controls.Add(this.Label_title_regist_equipo);
            this.Name = "Registrar_Equipo";
            this.Text = "Registrar_Equipo";
            this.Load += new System.EventHandler(this.Registrar_Equipo_Load);
            ((System.ComponentModel.ISupportInitialize)(this.logo_registro_datos_equipo)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.practica_lab12DataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.equipoBindingNavigator)).EndInit();
            this.equipoBindingNavigator.ResumeLayout(false);
            this.equipoBindingNavigator.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button2_accept_equipo;
        private System.Windows.Forms.Button button1_return_equipo;
        private System.Windows.Forms.Label label2_datos_equipo;
        private System.Windows.Forms.PictureBox logo_registro_datos_equipo;
        private System.Windows.Forms.Label Label_title_regist_equipo;
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
        private System.Windows.Forms.TextBox noSerieTextBox;
        private System.Windows.Forms.TextBox modeloTextBox;
        private System.Windows.Forms.TextBox costoTextBox;
        private System.Windows.Forms.TextBox fecha_AdquisicionTextBox;
    }
}