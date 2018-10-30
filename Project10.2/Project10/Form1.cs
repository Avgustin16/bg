using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Project10
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //if
            int numberOfThought = int.Parse(textBox1.Text);
            int numberOfGuess=-1;
            int countOfGuesses = 0;
            while (numberOfGuess != numberOfThought)
            {
                Random random;
                random = new Random();
                numberOfGuess = random.Next(1, 101);
                textBox2.Text = numberOfGuess.ToString();
                countOfGuesses++;
                if(numberOfGuess==numberOfThought - 1 || numberOfGuess == numberOfThought + 1)
                {
                    listBox1.Items.Add(numberOfGuess + " -> " + countOfGuesses + "-ия път");
                }
            }
            label2.Text = "Компютърър позна числото ти от " + countOfGuesses + "-ия път!";
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            listBox1.Items.Clear();
        }
    }
}
