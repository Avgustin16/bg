using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project26
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string text = textBox1.Text.ToLower();
            textBox2.Text = text;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            string text = textBox1.Text.ToUpper();
            textBox3.Text = text;
        }
    }
}
