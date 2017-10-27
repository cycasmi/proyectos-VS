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
    public partial class Prestamo : Form
    {
        public Prestamo()
        {
            InitializeComponent();
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
            Confirmacion permitir = new Confirmacion();
            permitir.Show();
        }

        private void Prestamo_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Usuario' Puede moverla o quitarla según sea necesario.
            this.usuarioTableAdapter.Fill(this.almacen_deportesDataSet.Usuario);
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Préstamos' Puede moverla o quitarla según sea necesario.
            this.préstamosTableAdapter.Fill(this.almacen_deportesDataSet.Préstamos);
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Material' Puede moverla o quitarla según sea necesario.
            this.materialTableAdapter.Fill(this.almacen_deportesDataSet.Material);

        }

        private void pictureBox1_Click_1(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void matrículaTextBox_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
