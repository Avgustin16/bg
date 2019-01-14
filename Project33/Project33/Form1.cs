using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project33
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox1.Text);
            int d = int.Parse(textBox2.Text);
            int n = int.Parse(textBox3.Text);
            int[] Array = new int[n];
            Array[0]=a;
            for (int i = 1; i < n; i++)
            {
                Array[i] = a + d;
                a = a + d;
            }
            for (int i = 0; i < n; i++)
            {
                textBox4.Text += Array[i];
                if (i != n - 1)
                {
                    textBox4.Text += " , ";
                }
            }
        }
    }
}
