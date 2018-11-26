using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project17
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = double.Parse(textBox1.Text);
            double x1 = Math.Floor(x);
            double x2 = Math.Ceiling(x);
            label1.Text = "Интервалът е [" + x1.ToString() + ";" + x2.ToString() + "]";
        }
    }
}
