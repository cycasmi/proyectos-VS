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
    public partial class Confirmacion : Form
    {
        public Confirmacion()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
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

        private void Confirmacion_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Confirmación' Puede moverla o quitarla según sea necesario.
            this.confirmaciónTableAdapter.Fill(this.almacen_deportesDataSet.Confirmación);

        }
    }
}
