using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project43
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int x, y, z;
        int r;

        int NOD(int x, int y)
        {
            r = x % y;
            while (r > 0)
            {
                x = y;
                y = r;
                r = x % y;
            } 
            return y;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            x=int.Parse(textBox1.Text);
            y=int.Parse(textBox2.Text);

            if (NOD(x, y) == 1)
            {
                textBox3.Text = "Да";
            }
            else 
            {
                textBox3.Text = "Не";
            }
        }
    }
}
