using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project18
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            listBox1.Items.Clear();
            label6.Text = "";

            string [] points = new string[3];
            double [] distance = new double[3];
            int x1 = int.Parse(textBox1.Text);
            int y1 = int.Parse(textBox2.Text);
            distance[0] = Math.Sqrt(Math.Pow(x1, 2) + Math.Pow(y1, 2));
            points[0]="Точка 1";
            int x2 = int.Parse(textBox3.Text);
            int y2 = int.Parse(textBox4.Text);
            distance[1] = Math.Sqrt(Math.Pow(x2, 2) + Math.Pow(y2, 2));
            points[1]="Точка 2";
            int x3 = int.Parse(textBox5.Text);
            int y3 = int.Parse(textBox6.Text);
            distance[2] = Math.Sqrt(Math.Pow(x3, 2) + Math.Pow(y3, 2));
            points[2]="Точка 3";
            string buf2; double buf1;
            for (int k = 1; k < 3; k++)
            {
                for (int i = 1; i < 3; i++)
                {
                    if (distance[i] < distance[i - 1])
                    {
                        buf1 = distance[i];
                        distance[i] = distance[i - 1];
                        distance[i - 1] = buf1;

                        buf2 = points[i];
                        points[i] = points[i - 1];
                        points[i - 1] = buf2;
                    }
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (i != 2)
                {
                    label6.Text += points[i] + " ; ";
                    listBox1.Items.Add(points[i]);
                }
                else
                {
                    label6.Text += points[i];
                    listBox1.Items.Add(points[i]);
                }
            }
        }
    }
}
