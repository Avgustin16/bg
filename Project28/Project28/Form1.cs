using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project28
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string text = textBox1.Text;
            int i=0;
            while (text[i]!=' ')
            {
                i++;
            }
            int k=i+1;
            while(text[k]!=' ')
            {
                k++;
            }
            textBox2.Text = text.Remove(i, k - i);
        }
    }
}
