using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project19
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int x1 = int.Parse(textBox1.Text);
            int y1 = int.Parse(textBox2.Text);
            double angle1 = Math.Atan2(y1, x1) * (180 / Math.PI);
            int x2 = int.Parse(textBox3.Text);
            int y2 = int.Parse(textBox4.Text);
            double angle2 = Math.Atan2(y2, x2) * (180 / Math.PI);

            if(angle1<angle2)
            {
                label5.Text = "Точка 1";
            }
            else if(angle2<angle1)
            {
                label5.Text = "Точка 2";
            }

          
        }
    }
}
