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
    public partial class Ejercicio13_a : Form
    {
        public Ejercicio13_a()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'base_de_datos_TC1019DataSet.Ejercicio_Salon13_a' Puede moverla o quitarla según sea necesario.
            this.ejercicio_Salon13_aTableAdapter.Fill(this.base_de_datos_TC1019DataSet.Ejercicio_Salon13_a);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            Ejercicio13_b ej13 = new Ejercicio13_b();
            ej13.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Ejercicio13_c ej13 = new Ejercicio13_c();
            ej13.Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Ejercicio13_d ej13 = new Ejercicio13_d();
            ej13.Show();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Ejercicio14_a ej14a = new Ejercicio14_a();
            ej14a.Show();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            Ejercicio14 ej14b = new Ejercicio14();
            ej14b.Show();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            Ejercicio14_c ej14c = new Ejercicio14_c();
            ej14c.Show();
        }

        private void button7_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
