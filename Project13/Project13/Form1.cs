using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project13
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int points=0;
            if (radioButton3.Checked == true)
            {
                points += 2;
            }
            if (radioButton5.Checked == true)
            {
                points += 2;
            }
            if (radioButton8.Checked == true)
            {
                points += 2;
            }
            textBox1.Text = points.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            //дълъг, бавен и тромав метод
            //radioButton1.Checked = false;
            //radioButton2.Checked = false;
            //radioButton3.Checked = false;
            //...
            var groupBox1Items = groupBox1.Controls;
            var groupBox2Items = groupBox2.Controls;
            var groupBox3Items = groupBox3.Controls;
            UnCheck(groupBox1Items);
            UnCheck(groupBox2Items);
            UnCheck(groupBox3Items);

        }

        private void UnCheck(Control.ControlCollection buttons)
        {
            foreach(var item in buttons)
            {
                var button = (RadioButton)item;
                button.Checked = false;
            }
        }
    }
}
