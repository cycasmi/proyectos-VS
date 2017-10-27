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
    public partial class Equipos : Form
    {
        public Equipos()
        {
            InitializeComponent();
        }

        private void button1_register_product_Click(object sender, EventArgs e)
        {
            Registrar_Equipo nuevo_equipo = new Registrar_Equipo();
            nuevo_equipo.Show();
        }

        private void button4_return_equipos_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button2_details_product_Click(object sender, EventArgs e)
        {
            Seleccionar_equipo elegir = new Seleccionar_equipo();
            elegir.Show();
        }

        private void button3_new_product_Click(object sender, EventArgs e)
        {
            Nuevos_Equipos vender = new Nuevos_Equipos();
            vender.Show();
        }
    }
}
