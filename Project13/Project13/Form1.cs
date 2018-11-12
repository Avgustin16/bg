using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project13
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int points=0;
            if (radioButton3.Checked == true)
            {
                points += 2;
            }
            if (radioButton5.Checked == true)
            {
                points += 2;
            }
            if (radioButton8.Checked == true)
            {
                points += 2;
            }
            textBox1.Text = points.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            radioButton1.Checked = false;
            radioButton2.Checked = false;
            radioButton3.Checked = false;
            radioButton4.Checked = false;
            radioButton5.Checked = false;
            radioButton6.Checked = false;
            radioButton7.Checked = false;
            radioButton8.Checked = false;
            radioButton9.Checked = false;
        }
    }
}
