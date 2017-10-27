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
    public partial class Ejercicio13_c : Form
    {
        public Ejercicio13_c()
        {
            InitializeComponent();
        }

        private void Ejercicio13_c_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'base_de_datos_TC1019DataSet.Ejercicio_Salon13_c' Puede moverla o quitarla según sea necesario.
            this.ejercicio_Salon13_cTableAdapter.Fill(this.base_de_datos_TC1019DataSet.Ejercicio_Salon13_c);

        }

        private void button7_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
