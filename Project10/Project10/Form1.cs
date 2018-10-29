using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project10
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        int generatedNumber, inputNumber, countOfTries;

        private void button1_Click(object sender, EventArgs e)
        {
            Random random;
            random = new Random();
            generatedNumber = random.Next(1, 101);
            countOfTries = 10;
            textBox1.Clear();
            label2.Text = "Остават " + countOfTries + " опита";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            inputNumber = int.Parse(textBox1.Text);
            if (countOfTries != 0)
            {
                if (inputNumber == generatedNumber)
                {
                    label4.Text = "Позна!";
                }
                else
                {
                    if (inputNumber > generatedNumber)
                    {
                        label4.Text = "Надолу";
                    }
                    else
                    {
                        label4.Text = "Нагоре";
                    }
                }
                textBox1.Clear();
                countOfTries--;
                label2.Text = "Остават " + countOfTries + " опита";
            }
            else
            {
                label4.Text = "Загуби";
            }
        }
    }
}
