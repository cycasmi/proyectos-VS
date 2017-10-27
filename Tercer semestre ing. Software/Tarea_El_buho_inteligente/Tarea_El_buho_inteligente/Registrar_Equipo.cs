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
    public partial class Registrar_Equipo : Form
    {
        public Registrar_Equipo()
        {
            InitializeComponent();
        }

        private void label2_register_Click(object sender, EventArgs e)
        {

        }

        private void button2_accept_equipo_Click(object sender, EventArgs e)
        {
            Equipos accion_equipo = new Equipos();
            accion_equipo.Show();
        }

        private void button1_return_equipo_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void equipoBindingNavigatorSaveItem_Click(object sender, EventArgs e)
        {
            this.Validate();
            this.equipoBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.practica_lab12DataSet);

        }

        private void equipoBindingNavigatorSaveItem_Click_1(object sender, EventArgs e)
        {
            this.Validate();
            this.equipoBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.practica_lab12DataSet);

        }

        private void Registrar_Equipo_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'practica_lab12DataSet.Equipo' Puede moverla o quitarla según sea necesario.
            this.equipoTableAdapter.Fill(this.practica_lab12DataSet.Equipo);

        }
    }
}
