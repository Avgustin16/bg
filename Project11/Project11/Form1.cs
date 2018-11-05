using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project11
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            char romanNumber;
            romanNumber = textBox1.Text[0];
            textBox1.Text = romanNumber.ToString();
            switch (romanNumber)
            {
                case 'I':
                    {
                        textBox2.Text = "1";
                        break;
                    }
                case 'V':
                    {
                        textBox2.Text = "5";
                        break;
                    }
                case 'X':
                    {
                        textBox2.Text = "10";
                        break;
                    }
                case 'L':
                    {
                        textBox2.Text = "50";
                        break;
                    }
                case 'C':
                    {
                        textBox2.Text = "100";
                        break;
                    }
                case 'D':
                    {
                        textBox2.Text = "500";
                        break;
                    }
                case 'M':
                    {
                        textBox2.Text = "1000";
                        break;
                    }
                default:
                    {
                        MessageBox.Show("Няма такава римска цифра!");
                        break;
                    }
            }
        }
    }
}
