using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace Form_3
{
    public partial class Login : Form
    {
        SqlConnection con = new SqlConnection("Data Source=LAPTOP;Initial Ctalog=registration;Integrated Security=True;");
        public Login()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                if (txtPassword.Text=="" && txtUName.Text =="")
                {
                    MessageBox.Show("Please enter username and password");
                }
                else
                {
                    SqlCommand cmd = new SqlCommand("select * from LoginUsers where U_Name=@Name and U_Pass=@Pass", con);
                    // cmd.Parameters.Add("@Name", txtUName.Text); database error
                    //cmd.Parameters.Add("@Pass", txtPassword.Text); database error
                    SqlDataAdapter adpt = new SqlDataAdapter(cmd);
                    DataSet ds = new DataSet();
                    adpt.Fill(ds);

                    int count = ds.Tables[0].Rows.Count;
                    if (count == 1)
                    {
                        MessageBox.Show(" You have successfully logged in");
                        Form1 ob = new Form1();
                        this.Hide();
                        ob.Show();


                    }
                    else
                    {
                        MessageBox.Show(" Kindly check username and password ");
                    }
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);

            }

        
        }

        private void Login_Load(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }
    }
}
