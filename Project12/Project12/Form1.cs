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
            int countOfDaysPerMonth;
            if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
            {
                countOfDaysPerMonth = 31;
            }
            if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
            {
                countOfDaysPerMonth = 30;
            }
        }
    }
}
