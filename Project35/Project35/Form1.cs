using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project35
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int n;
        decimal[] Arr;
 
        private void button1_Click(object sender, EventArgs e)
        {
            n = int.Parse(textBox1.Text);
            if (n > 3)
            {
                Arr = new decimal[n+1];
                for (int i = 1; i <= n; i++)
                {
                    Arr[i] = Math.Round((decimal)(i * i + 1) / i, 2);
                }
                button2.Enabled = true;
            }
            else 
            {
                MessageBox.Show("Неправилна стойност");
                textBox1.Clear();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            for (int i = 1; i <= n; i++)
            {
                listBox1.Items.Add(Arr[i]);  
            }
            button3.Enabled = true;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            decimal x = decimal.Parse(textBox2.Text);
            int i=1;
            while (x != Arr[i] && i < n)
            {
                i++;
            }
            if (x == Arr[i])
            {
                label4.Text = "Х се съдържа!";
            }
            else 
            {
                label4.Text = "Х не се съдържа!";
            }
        }
    }
}
