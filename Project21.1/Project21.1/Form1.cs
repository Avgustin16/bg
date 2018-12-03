using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project21._1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            for (int i = 0; i <= 255; i++)
            {
                listBox1.Items.Add(i + " -> " + (char)i);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            for (char i = 'a'; i <= 'z'; i++)
            {
                listBox2.Items.Add(i + " -> " + (int)i);
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string text = textBox1.Text;
            for (int i = 0; i < text.Length; i++)
            {
                listBox3.Items.Add(text[i]);
            }
        }
    }
}
