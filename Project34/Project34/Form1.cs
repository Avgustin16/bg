using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project34
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Random r;
            r = new Random();
            int[] Arr = new int[10];
            listBox1.Items.Clear();
            for (int i = 0; i < 10; i++)
            {
                Arr[i] = r.Next(100);
                listBox1.Items.Add(Arr[i]);
            }
        }
    }
}
