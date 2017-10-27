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
    public partial class Editar_Material : Form
    {
        public Editar_Material()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void accept_select_client_Click(object sender, EventArgs e)
        {
            Menu_Principal continuar = new Menu_Principal();
            continuar.Show();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void materialBindingNavigatorSaveItem_Click(object sender, EventArgs e)
        {
            this.Validate();
            this.materialBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.almacen_deportesDataSet);

        }

        private void Editar_Material_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Registrar_materiales' Puede moverla o quitarla según sea necesario.
            this.registrar_materialesTableAdapter.Fill(this.almacen_deportesDataSet.Registrar_materiales);
            // TODO: esta línea de código carga datos en la tabla 'almacen_deportesDataSet.Material' Puede moverla o quitarla según sea necesario.
            this.materialTableAdapter.Fill(this.almacen_deportesDataSet.Material);

        }
    }
}
