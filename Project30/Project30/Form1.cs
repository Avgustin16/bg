using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project30
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
            for (int i = 0; i < text.Length; i++)
            {
                if (text[i] == '.')
                {
                    listBox1.Items.Add("съобщително");
                }
                else if (text[i] == '?')
                {
                    listBox1.Items.Add("въпросително");
                }
                else if (text[i] == '!')
                {
                    listBox1.Items.Add("възклицателно");
                }
                else if (text[i] == ',')
                {

                    textBox1.Text = text.Replace(',', ';');
                }
            }
        }
    }
}
