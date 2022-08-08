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
using Microsoft.Office.Interop.Excel;

namespace Form_3
{
    public partial class Registration : Form
    {
        //string connection
        string path = "Data Source =LAPTOP;Initial Catalog=registration;Integrated Security=True";
        SqlConnection con;
        SqlCommand cmd;
        SqlDataAdapter adpt;
        System.Data.DataTable dt;
        int ID;
        public Registration()
        {   
            InitializeComponent();
            con = new SqlConnection(path);
            display();
            button2.Enabled = false;
            button3.Enabled = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (txtName.Text == ""||txtFName.Text==""||txtDesignation.Text==""||txtEmail.Text==""||txtID.Text==""||txtAdd.Text=="")
            {
                MessageBox.Show(" Please Fill The Blanks");
            }
            else
            {
                try
                {

                    string gender;
                    if (rbtnMale.Checked)
                    {
                        gender = "Male";
                    }
                    else
                    {
                        gender = "Female";
                    }
                    con.Open();
                    cmd = new SqlCommand("insert into Employeee (Employee_Name,Employee_FName,Employee_Designation,Employee_Email,Emp_ID,Gender,Addrss) values ('" + txtName.Text + "','" + txtFName.Text + "','" + txtDesignation.Text + "','" + txtEmail.Text + "','" + txtID.Text + "','" + gender + "','" + txtAdd.Text + "')", con);
                    cmd.ExecuteNonQuery();

                    MessageBox.Show(" Your Data Has Been Saved In DataBase ");
                    clear();
                    display();
                }
                catch (Exception ex)
                {
                    MessageBox.Show(ex.Message);
                }
            }

        }
        public void clear()
        {
            txtAdd.Text = " ";
            txtDesignation.Text = " ";
            txtEmail.Text = "";
            txtName.Text = "";
            txtFName.Text = "";
            txtID.Text = "";
        }
        public void display()
        {
            try
            {
                dt = new System.Data.DataTable();
                con.Open();
                adpt = new SqlDataAdapter("select * from Employeee", con);
                adpt.Fill(dt);
                dataGridView1.DataSource = dt;
                con.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }
        private void Registration_Load(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellDoubleClick(object sender, DataGridViewCellEventArgs e)
        {
            ID = int.Parse(dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString());
            txtName.Text = dataGridView1.Rows[e.RowIndex].Cells[1].Value.ToString();
            txtFName.Text = dataGridView1.Rows[e.RowIndex].Cells[2].Value.ToString();
            txtDesignation.Text = dataGridView1.Rows[e.RowIndex].Cells[3].Value.ToString();
            txtEmail.Text = dataGridView1.Rows[e.RowIndex].Cells[4].Value.ToString();
            txtID.Text = dataGridView1.Rows[e.RowIndex].Cells[5].Value.ToString();
            
            rbtnMale.Checked = true;
            rbtnFemle.Checked = false;
            if (dataGridView1.Rows[e.RowIndex].Cells[6].Value.ToString()=="Female")
            {
                rbtnMale.Checked=false;
                rbtnFemle.Checked = true;
            }
            txtAdd.Text = dataGridView1.Rows[e.RowIndex].Cells[7].Value.ToString();
            button2.Enabled = true;
            button3.Enabled = true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                string gender;
                if (rbtnMale.Checked)
                {
                    gender = "Male";
                }
                else
                {
                    gender = "Female";
                }
                con.Open();
                cmd = new SqlCommand("update Employeee set Employee_Name='" + txtName.Text + "', Employee_FName='" + txtFName.Text + "',Employee_Designation='" + txtDesignation.Text + "', Employee_Email='"+txtEmail.Text+ "',Emp_ID='"+txtID.Text+ "',Gender ='"+gender+ "',Addrss='"+txtAdd.Text+ "' where Employee_Id='" + ID + "' ", con);
                cmd.ExecuteNonQuery();
                con.Close();
                MessageBox.Show(" Your Data Has Been Updated");
                display();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
                    
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                con.Open();
                cmd = new SqlCommand("delete from Employeee where Employee_Id='" + ID + "'", con);
                cmd.ExecuteNonQuery();
                con.Close();
                MessageBox.Show(" Your Record Has Been Deleted");
                display();
            } 
            catch(Exception ex){
                MessageBox.Show(ex.Message);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {

                Microsoft.Office.Interop.Excel.Application Excell = new Microsoft.Office.Interop.Excel.Application();
                Workbook wb = Excell.Workbooks.Add(XlSheetType.xlWorksheet);
                Worksheet ws = (Worksheet)Excell.ActiveSheet;
                Excell.Visible = true;
                for (int j = 2; j <= dataGridView1.Rows.Count; j++)
                {
                    for (int i = 1; i <= 1; i++)
                    {
                        ws.Cells[j, i] = dataGridView1.Rows[j - 2].Cells[i - 1].Value;
                    }
                }
                for (int i = 1; i < dataGridView1.Columns.Count + 1; i++)
                {
                    ws.Cells[1, i] = dataGridView1.Columns[i - 1].HeaderText;
                }

                for (int i = 0; i < dataGridView1.Columns.Count - 1; i++)
                {
                    for (int j = 0; j < dataGridView1.Columns.Count; j++)
                    {
                        ws.Cells[i + 2, j + 1] = dataGridView1.Rows[i].Cells[j].Value.ToString();
                    }
                }
            }

            catch (Exception)
            {
                
            }
        }




        private void txtSearch_TextChanged(object sender, EventArgs e)
        {
            con.Open();
            adpt = new SqlDataAdapter("select * from Employeee where Employee_Name like '%" + txtSearch.Text + "%' ", con);
            dt=new System.Data.DataTable();
            adpt.Fill(dt);
            dataGridView1.DataSource = dt;
            con.Close();

        }
    } 
}
