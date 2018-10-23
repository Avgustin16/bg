using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (double.Parse(textBox1.Text) % 1 != 0 || (int.Parse(textBox1.Text) < 99 || int.Parse(textBox1.Text) > 999))
            {
                MessageBox.Show("Въведи правилно число!");
                textBox1.Clear();
            }
            int firstNumber = int.Parse(textBox1.Text) / 100;
            int secondNumber = (int.Parse(textBox1.Text) % 100) / 10;
            int thirdNumber = int.Parse(textBox1.Text) % 10;
            int sum = firstNumber + secondNumber + thirdNumber;
            textBox2.Text = sum.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (double.Parse(textBox1.Text) % 1 != 0 || (int.Parse(textBox1.Text) < 99 || int.Parse(textBox1.Text) > 999))
            {
                MessageBox.Show("Въведи правилно число!");
                textBox1.Clear();
            }
            int firstNumber = int.Parse(textBox1.Text) / 100;
            int secondNumber = (int.Parse(textBox1.Text) % 100) / 10;
            int thirdNumber = int.Parse(textBox1.Text) % 10;
            int proizvedenie = firstNumber * secondNumber * thirdNumber;
            textBox3.Text = proizvedenie.ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
