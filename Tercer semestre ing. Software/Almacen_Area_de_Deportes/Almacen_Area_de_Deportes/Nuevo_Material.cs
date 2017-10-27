using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Almacen_Area_de_Deportes
{
    public partial class Nuevo_Material : Form
    {
        public Nuevo_Material()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void Nuevo_Material_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Registrar_materiales' Puede moverla o quitarla según sea necesario.
            this.registrar_materialesTableAdapter.Fill(this.almacen_deportesDataSet.Registrar_materiales);
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Material' Puede moverla o quitarla según sea necesario.
            this.materialTableAdapter.Fill(this.almacen_deportesDataSet.Material);

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void logo_seleccion_Click(object sender, EventArgs e)
        {

        }

        private void Label_title_Seleccion_Click(object sender, EventArgs e)
        {

        }

        private void Label_bienvenido_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void accept_select_client_Click(object sender, EventArgs e)
        {
            Menu_Principal continuar = new Menu_Principal();
            continuar.Show();
        }

        private void materialTextBox_TextChanged(object sender, EventArgs e)
        {

        }

        private void fillToolStripButton_Click(object sender, EventArgs e)
        {
            try
            {
                this.registrar_materialesTableAdapter.Fill(this.almacen_deportesDataSet.Registrar_materiales);
            }
            catch (System.Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }

        private void fillToolStripButton1_Click(object sender, EventArgs e)
        {
            try
            {
                this.registrar_materialesTableAdapter.Fill(this.almacen_deportesDataSet.Registrar_materiales);
            }
            catch (System.Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }

        private void fillByToolStripButton_Click(object sender, EventArgs e)
        {
            try
            {
                this.registrar_materialesTableAdapter.FillBy(this.almacen_deportesDataSet.Registrar_materiales);
            }
            catch (System.Exception ex)
            {
                System.Windows.Forms.MessageBox.Show(ex.Message);
            }

        }
    }
}
