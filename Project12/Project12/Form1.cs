using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project12
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int day = int.Parse(textBox1.Text);
            int month = int.Parse(textBox2.Text);
            int year = int.Parse(textBox3.Text);
            int countOfDaysPerMonth=0;
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                countOfDaysPerMonth = 31;
            }
            if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
            {
                countOfDaysPerMonth = 30;
            }
            if (day < countOfDaysPerMonth)
            {
                day++;
            }
            else
            {
                if (month < 12)
                {
                    day = 1;
                    month++;
                }
                else
                {
                    day = 1;
                    month = 1;
                    year++;
                }
            }
            textBox4.Text = day + "." + month + "." + year;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int day = int.Parse(textBox1.Text);
            int month = int.Parse(textBox2.Text);
            int year = int.Parse(textBox3.Text);
            int countOfDaysPerMonth = 0;
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                countOfDaysPerMonth = 31;
            }
            if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
            {
                countOfDaysPerMonth = 30;
            }
            if (day > 1)
            {
                day--;
            }
            else
            {
                if (month > 1)
                {
                    if (month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11)
                    {
                        month = 4;
                        countOfDaysPerMonth = 31;
                        month--;
                    }
                    else if (month == 5 || month == 7 || month == 10 || month == 12)
                    {
                        month = 5;
                        countOfDaysPerMonth = 30;
                        month--;
                    }
                    else if (month == 3)
                    {
                        if (year % 4 == 0)
                        {
                            countOfDaysPerMonth = 29;
                            month--;
                        }
                        else
                        {
                            countOfDaysPerMonth = 28;
                            month--;
                        }
                    }
                }
                else
                {
                    day = 31;
                    month = 12;
                    year--;
                }
            }
            textBox5.Text = day + "." + month + "." + year;
        }
    }
}
