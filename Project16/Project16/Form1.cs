using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Project16
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("овен1.jpg");
            label3.Text = "Овен";
            textBox1.Text = "Всичко е възможно, ако имате достатъчно търпение. – Дж. К. Роулинг";
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("телец1.jpg");
            label3.Text = "Телец";
            textBox1.Text = "За да бъдете успешни, трябва да вложите сърце в бизнеса и бизнеса в сърцето си. – Томас Уотсън";
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("близнаци1.jpg");
            label3.Text = "Близнаци";
            textBox1.Text = "Развитието на собствената личност е повече задължение, отколкото жертва. – Елизабет Кейди Стентън";
        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("рак1.jpg");
            label3.Text = "Рак";
            textBox1.Text = "Внимавайте за вашите мисли, защото те стават думи. Наблюдавайте вашите думи, защото те стават действия. Имайте предвид вашите действия, защото те стават навици. Гледайте навиците, за да станат ваш характер. Наблюдавайте вашия характер, за да стане ваша съдба. – Мерил Стрийп";
        }

        private void radioButton5_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("лъв1.jpg");
            label3.Text = "Лъв";
            textBox1.Text = "Трябва да се интересувате. Ако не се интересувате, вие не сте интересни. – Айрис Апфел";
        }

        private void radioButton6_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("дева1.jpg");
            label3.Text = "Лъв";
            textBox1.Text = "Трябва да се интересувате. Ако не се интересувате, вие не сте интересни. – Айрис Апфел";
        }

        private void radioButton7_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("везни1.jpg");
            label3.Text = "Везни";
            textBox1.Text = "Вие получавате от живота това, което ви стига куражът да си поискате. – Опра Уинфри";
        }

        private void radioButton8_CheckedChanged(object sender, EventArgs e)
        {
            pictureBox1.Image = Image.FromFile("скорпион1.jpg");
            label3.Text = "Скорпион";
            textBox1.Text = "Хората, които са достатъчно луди да мислят, че могат да променят света, са тези, които успяват в това. – Стив Джобс";
        }
    }
}
