using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tarea_El_buho_inteligente
{
    public partial class Pag_Inicio : Form
    {
        public Pag_Inicio()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            Registro Registrar_Nuevo = new Registro();
            Registrar_Nuevo.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Seleccion_cliente cliente_Existente = new Seleccion_cliente();

            cliente_Existente.Show();
        }

        private void button3_report_Click(object sender, EventArgs e)
        {
            Reporte_semanal regresar = new Reporte_semanal();
            regresar.Show();
        }
    }
}
