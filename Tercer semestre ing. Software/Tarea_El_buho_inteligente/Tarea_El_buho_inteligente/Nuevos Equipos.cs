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
    public partial class Nuevos_Equipos : Form
    {
        public Nuevos_Equipos()
        {
            InitializeComponent();
        }

        private void label5_Click(object sender, EventArgs e)
        {

        }

        private void accept_select_client_Click(object sender, EventArgs e)
        {
            Pag_Inicio regresar = new Pag_Inicio();
            regresar.Show();
        }

        private void return_select_client_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
