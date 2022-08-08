namespace Form_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
        
            InitializeComponent();
        }
        string name;
        private void Form1_Load(object sender, EventArgs e)
        {
            cmbCourse.Items.Add("C Programming");
            cmbCourse.Items.Add("C++ Programming");
            cmbCourse.Items.Add("C# Programming");
            cmbCourse.Items.Add("Python Programming");
            cmbCourse.Items.Add("JAVA Programming");
        }
        private void cmbCourse_SelectedIndexChanged(object sender, EventArgs e)
        {
            name = cmbCourse.SelectedItem.ToString();
           
        }
        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            

        }

        private void btnsave_Click(object sender, EventArgs e)
        {
            MessageBox.Show(name);
        }
    }
}