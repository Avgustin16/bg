using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project27
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string s = textBox1.Text;
            int c = 0, t = 0, z = 0;
            for (int i = 0; i < s.Length; i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    c++;
                }
                if (s[i] == '.')
                {
                    t++;
                }
                if (s[i] == ',') 
                {
                    z++;
                }
            }
            if (c == s.Length)
            {
                label1.Text = "Числото е цяло";
            }
            else
            {
                if (c == s.Length - 1 && t + z == 1)
                {
                    label1.Text = "Числото е реално";
                }
                else
                {
                    label1.Text = "Това не е число";
                }
            }
        }
    }
}
