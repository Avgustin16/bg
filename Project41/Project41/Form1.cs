using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project41
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int n;
        string[] Array;
        string[] SortedArray;
        int i = 0;

        private void button1_Click(object sender, EventArgs e)
        {
            n = int.Parse(textBox1.Text);
            if (n < 5 || n > 10)
            {
                MessageBox.Show("not correct");
                textBox1.Clear();
            }
            Array = new string[n];
            SortedArray = new string[n];
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (i < n)
            {
                Array[i] = textBox2.Text;
                i++;
                textBox2.Clear();
            }
            else
            {
                button2.Enabled = false;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            for (int i = 0; i < n; i++)
            {
                listBox1.Items.Add(Array[i]);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            /*int n = Array.Length;
            for (int i = 1; i < n; i++)
            {
                int buf = Array[i];
                int j = i - 1;
                while (j >= 0 && Array[j] > buf)
                {
                    Array[j + 1] = Array[j];
                    j = j - 1;
                }
                Array[j + 1] = buf;
            }*/
        }
    }
}
