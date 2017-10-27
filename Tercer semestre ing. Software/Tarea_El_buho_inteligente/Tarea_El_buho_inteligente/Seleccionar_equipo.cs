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
    public partial class Seleccionar_equipo : Form
    {
        public Seleccionar_equipo()
        {
            InitializeComponent();
        }

        private void label2_seleccion_cliente_Click(object sender, EventArgs e)
        {

        }

        private void return_select_client_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void accept_select_client_Click(object sender, EventArgs e)
        {
            Informacion_Equipo datos = new Informacion_Equipo();
            datos.Show();
        }

        private void equipoBindingNavigatorSaveItem_Click(object sender, EventArgs e)
        {
            this.Validate();
            this.equipoBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.practica_lab12DataSet);

        }

        private void Seleccionar_equipo_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'practica_lab12DataSet.Equipo' Puede moverla o quitarla según sea necesario.
            this.equipoTableAdapter.Fill(this.practica_lab12DataSet.Equipo);

        }
    }
}
