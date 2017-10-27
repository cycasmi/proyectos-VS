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
    public partial class Reporte_semanal : Form
    {
        public Reporte_semanal()
        {
            InitializeComponent();
        }

        private void return_select_client_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void reporteBindingNavigatorSaveItem_Click(object sender, EventArgs e)
        {
            this.Validate();
            this.reporteBindingSource.EndEdit();
            this.tableAdapterManager.UpdateAll(this.practica_lab12DataSet);

        }

        private void Reporte_semanal_Load(object sender, EventArgs e)
        {
            // TODO: esta línea de código carga datos en la tabla 'practica_lab12DataSet.Garantia' Puede moverla o quitarla según sea necesario.
            this.garantiaTableAdapter.Fill(this.practica_lab12DataSet.Garantia);
            // TODO: esta línea de código carga datos en la tabla 'practica_lab12DataSet.Reporte' Puede moverla o quitarla según sea necesario.
            this.reporteTableAdapter.Fill(this.practica_lab12DataSet.Reporte);

        }

        private void reporteDataGridView_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
