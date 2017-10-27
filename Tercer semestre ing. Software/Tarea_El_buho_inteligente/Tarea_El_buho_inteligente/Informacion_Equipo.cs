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
    public partial class Informacion_Equipo : Form
    {
        public Informacion_Equipo()
        {
            InitializeComponent();
        }

        private void return_select_client_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void accept_select_client_Click(object sender, EventArgs e)
        {
            Pag_Inicio regresar = new Pag_Inicio();
            regresar.Show();
        }

        private void garantiaBindingNavigatorSaveItem_Click(object sender, EventArgs e)
        {
            this.Validate();
            this.garantiaBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.practica_lab12DataSet);

        }

        private void Informacion_Equipo_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'practica_lab12DataSet.Garantia' Puede moverla o quitarla según sea necesario.
            this.garantiaTableAdapter.Fill(this.practica_lab12DataSet.Garantia);

        }
    }
}
