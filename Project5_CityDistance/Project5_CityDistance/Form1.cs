using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project5_CityDistance
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(comboBox1.Text == "Стара Загора")
            {
                textBox1.Text = "33 км";
            }
            else if(comboBox1.Text=="Габрово")
            {
                textBox1.Text = "49 км";
            }
            else if (comboBox1.Text == "Русе")
            {
                textBox1.Text = "199 км";
            }
            else if (comboBox1.Text == "Видин")
            {
                textBox1.Text = "377 км";
            }
            else if (comboBox1.Text == "Свиленград")
            {
                textBox1.Text = "150 км";
            }
            else if (comboBox1.Text == "Пловдив")
            {
                textBox1.Text = "116 км";
            }
            else if (comboBox1.Text == "Варна")
            {
                textBox1.Text = "323 км";
            }
            else if (comboBox1.Text == "Плевен")
            {
                textBox1.Text = "153 км";
            }
        }
    }
}
