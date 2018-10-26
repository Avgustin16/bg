using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project9
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(double.Parse(textBox1.Text)%1!=0 || (int.Parse(textBox1.Text)<1000 || int.Parse(textBox1.Text)>9999))
            {
                MessageBox.Show("Въведете правилно число!");
                textBox1.Clear();
                textBox2.Clear();
            }
            int N = int.Parse(textBox1.Text);
            int firstNumber = N / 1000;
            int secondNumber = (N / 100) % 10;
            int thirdNumber = (N / 10) % 10;
            int forthNumber = N % 10;
            int M = forthNumber * 1000 + thirdNumber * 100 + secondNumber * 10 + firstNumber;
            textBox2.Text = M.ToString();
        }
    }
}
