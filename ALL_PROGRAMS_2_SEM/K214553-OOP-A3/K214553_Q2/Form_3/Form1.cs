namespace Form_3
{
    public partial class Form1 : Form
    {
        Registration rg = new Registration();
            
        public Form1()
        {
            InitializeComponent();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            rg.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Login obj = new Login();
            obj.Show();
            this.Hide();    

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}