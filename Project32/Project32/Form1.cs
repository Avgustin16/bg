using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project32
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int[] A = new int[5];
        int i = 0;

        private void button1_Click(object sender, EventArgs e)
        {
            if (i < 5)
            {
                A[i] = int.Parse(textBox1.Text);
                textBox1.Clear();
                i++;
                if (i == 5)
                {
                    MessageBox.Show("Масивът е въведен!");
                }
                if (i < 5)
                {
                    label1.Text = (i + 1).ToString();
                }
            }
            else
            {
                MessageBox.Show("Масивът е въведен!");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            for (i = 0; i < 5; i++)
            { 
                
            }
        }
    }
}
