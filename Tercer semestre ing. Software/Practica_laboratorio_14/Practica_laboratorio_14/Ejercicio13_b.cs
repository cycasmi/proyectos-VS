using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Practica_laboratorio_14
{
    public partial class Ejercicio13_b : Form
    {
        public Ejercicio13_b()
        {
            InitializeComponent();
        }

        private void Ejercicio13_b_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'base_de_datos_TC1019DataSet.Ejercicio_Salon13_b' Puede moverla o quitarla según sea necesario.
            this.ejercicio_Salon13_bTableAdapter.Fill(this.base_de_datos_TC1019DataSet.Ejercicio_Salon13_b);

        }

        private void button7_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
