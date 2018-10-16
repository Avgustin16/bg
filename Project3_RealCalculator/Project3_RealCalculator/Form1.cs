using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project3_RealCalculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        double firstNumber=0, secondNumber=0, Result=0;
        char action=' ';
        bool isComplete=false;
        int tens = 0;
        bool isReal = false;
        int commaControler = 1;

        private void button15_Click(object sender, EventArgs e)
        {
            if(action=='+')
            {
                Result = firstNumber + secondNumber;
            }
            else if(action=='-')
            {
                Result = firstNumber - secondNumber;
            }
            else if (action == '*')
            {
                Result = firstNumber * secondNumber;
            }
            else if (action == '/')
            {
                Result = firstNumber / secondNumber;
            }
            textBox1.Text = textBox1.Text + " = " + Result.ToString();
            isComplete = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.2 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 2;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.2 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 2;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "2";
        }

        private void button16_Click(object sender, EventArgs e)
        {
            textBox1.Text = " ";
            firstNumber = 0;
            secondNumber = 0;
            Result = 0;
            action = ' ';
            isComplete = false;
            tens = 0;
            isReal = false;
            commaControler = 1;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.3 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 3;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.3 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 3;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "3";
        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.4 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 4;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.4 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 4;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "4";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.5 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 5;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.5 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 5;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "5";
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.6 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 6;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.6 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 6;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "6";
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.7 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 7;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.7 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 7;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "7";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.8 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 8;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.8 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 8;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "8";
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.9 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 9;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.9 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 9;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "9";
        }

        private void button10_Click(object sender, EventArgs e)
        {
            if (isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if(action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.0 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 0;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.0 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 0;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "0";
        }

        private void button12_Click(object sender, EventArgs e)
        {
            if (action == ' ')
            {
                textBox1.Text += " ";
            }
            else
            {
                textBox1.Text = " " + firstNumber.ToString() + " ";
            }
            action = '-';
            textBox1.Text += action + " ";
            isReal = false;
            commaControler = 1;
        }

        private void button13_Click(object sender, EventArgs e)
        {
            if (action == ' ')
            {
                textBox1.Text += " ";
            }
            else
            {
                textBox1.Text = " " + firstNumber.ToString() + " ";
            }
            action = '*';
            textBox1.Text += action + " ";
            isReal = false;
            commaControler = 1;
        }

        private void button14_Click(object sender, EventArgs e)
        {
            if (action == ' ')
            {
                textBox1.Text += " ";
            }
            else
            {
                textBox1.Text = " " + firstNumber.ToString() + " ";
            }
            action = '/';
            textBox1.Text += action + " ";
            isReal = false;
            commaControler = 1;
        }

        private void button17_Click(object sender, EventArgs e)
        {
            isReal = true;
            textBox1.Text += ".";
        }

        private void button11_Click(object sender, EventArgs e)
        {
            if (action == ' ')
            {
                textBox1.Text += " ";
            }
            else
            {
                textBox1.Text = " " + firstNumber.ToString() + " ";
            }
            action = '+';
            textBox1.Text += action + " ";
            isReal = false;
            commaControler = 1;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(isComplete)
            {
                textBox1.Text = " ";
                firstNumber = 0;
                secondNumber = 0;
                Result = 0;
                action = ' ';
                isComplete = false;
                tens = 0;
                isReal = false;
                commaControler = 1;
            }
            if (action == ' ')
            {
                if (isReal)
                {
                    firstNumber = firstNumber + 0.1 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    firstNumber = firstNumber * tens + 1;
                    tens = 10;
                }
            }
            else
            {
                if (isReal)
                {
                    secondNumber += 0.1 / commaControler;
                    commaControler *= 10;
                }
                else
                {
                    secondNumber = secondNumber * tens + 1;
                    tens = 10;
                }
            }
            textBox1.Text = textBox1.Text + "1";
        }
    }
}
