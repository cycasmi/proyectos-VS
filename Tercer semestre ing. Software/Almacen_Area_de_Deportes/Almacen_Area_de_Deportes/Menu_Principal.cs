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
    public partial class Menu_Principal : Form
    {
        public Menu_Principal()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Prestamo nuevo = new Prestamo();
            nuevo.Show();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Devolucion devolver = new Devolucion();
            devolver.Show();
        }

        private void button1_new_client_Click(object sender, EventArgs e)
        {
            Nuevo_Material material = new Nuevo_Material();
            material.Show();
        }

        private void button2_existent_client_Click(object sender, EventArgs e)
        {
            Seleccionar_Material seleccionar = new Seleccionar_Material();
            seleccionar.Show();
        }

        private void button3_report_Click(object sender, EventArgs e)
        {
            Control_prestamos reportes = new Control_prestamos();
            reportes.Show();
        }
    }
}
