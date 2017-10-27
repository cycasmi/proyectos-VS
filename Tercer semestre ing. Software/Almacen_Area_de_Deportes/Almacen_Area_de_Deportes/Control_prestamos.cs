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
    public partial class Control_prestamos : Form
    {
        public Control_prestamos()
        {
            InitializeComponent();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void accept_select_client_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void préstamoBindingNavigatorSaveItem_Click(object sender, EventArgs e)
        {
            this.Validate();
            this.préstamoBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.almacen_deportesDataSet);

        }

        private void Control_prestamos_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Préstamo' Puede moverla o quitarla según sea necesario.
            this.préstamoTableAdapter.Fill(this.almacen_deportesDataSet.Préstamo);

        }
    }
}
