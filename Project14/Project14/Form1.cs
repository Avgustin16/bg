using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project14
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
            if (checkBox1.Checked == true)
            {
                points++;
                checkBox1.ForeColor = Color.Blue;
            }
            else
            {
                checkBox1.ForeColor = Color.Red;
            }
            if (checkBox2.Checked == true)
            {
                points++;
                checkBox2.ForeColor = Color.Blue;
            }
            else
            {
                checkBox2.ForeColor = Color.Red;
            }
            if (checkBox3.Checked == true)
            {
                points++;
                checkBox3.ForeColor = Color.Blue;
            }
            else
            {
                checkBox3.ForeColor = Color.Red;
            }
            if (checkBox4.Checked == true)
            {
                points++;
                checkBox4.ForeColor = Color.Blue;
            }
            else
            {
                checkBox4.ForeColor = Color.Red;
            }
            if (checkBox5.Checked == true)
            {
                points++;
                checkBox5.ForeColor = Color.Blue;
            }
            else
            {
                checkBox5.ForeColor = Color.Red;
            }
            textBox1.Text = points.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            checkBox1.Checked = false;
            checkBox1.ForeColor = Color.Black;
            checkBox2.Checked = false;
            checkBox2.ForeColor = Color.Black;
            checkBox3.Checked = false;
            checkBox2.ForeColor = Color.Black;
            checkBox4.Checked = false;
            checkBox4.ForeColor = Color.Black;
            checkBox5.Checked = false;
            checkBox5.ForeColor = Color.Black;
            checkBox6.Checked = false;
            checkBox6.ForeColor = Color.Black;
            checkBox7.Checked = false;
            checkBox7.ForeColor = Color.Black;
            checkBox8.Checked = false;
            checkBox8.ForeColor = Color.Black;
            checkBox9.Checked = false;
            checkBox9.ForeColor = Color.Black;
        }
    }
}
