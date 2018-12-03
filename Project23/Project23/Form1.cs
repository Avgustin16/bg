using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project23
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string text1 = textBox1.Text;
            string text2 = textBox2.Text;
            if (text1.CompareTo(text2)==1)
            {
                label1.Text = text1;
            }
            else if (text1.CompareTo(text2) == -1)
            {
                label1.Text = text2;
            }
            else
            {
                label1.Text = text1 + " - " + text2;
            }
        }
    }
}
