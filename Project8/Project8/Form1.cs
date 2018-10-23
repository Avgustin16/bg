using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project8
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            /*if()
            {

            }*/
            label3.Text=(int.Parse(textBox1.Text) / 10000).ToString();
            label4.Visible = true;
            label5.Text = ((int.Parse(textBox1.Text) % 10000)/1000).ToString();
            label6.Visible = true;
            label7.Text = ((int.Parse(textBox1.Text) % 1000)/100).ToString();
            label8.Visible = true;
            label9.Text = ((int.Parse(textBox1.Text) % 100)/10).ToString();
            label10.Visible = true;
            label11.Text = (int.Parse(textBox1.Text) % 10).ToString();
            label2.Visible = true;
            listBox1.Items.Add((int.Parse(textBox1.Text) / 10000).ToString());
            listBox1.Items.Add(((int.Parse(textBox1.Text) % 10000) / 1000).ToString());
            listBox1.Items.Add(((int.Parse(textBox1.Text) % 1000) / 100).ToString());
            listBox1.Items.Add(((int.Parse(textBox1.Text) % 100) / 10).ToString());
            listBox1.Items.Add((int.Parse(textBox1.Text) % 10).ToString());
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
