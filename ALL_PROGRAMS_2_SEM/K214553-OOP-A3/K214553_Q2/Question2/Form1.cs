using System;
using System.Collections.Generic;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Question2
{
    public partial class Form1 : Form
    {
        DataTable dt = new DataTable();
        string name;
        string designation;
        int salary;
        string gender;
        string review;

        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            name = textBox1.Text;
            designation = textBox2.Text;
            salary = int.Parse(textBox3.Text);
            

            if (btnmale.Checked)
            {
                gender = "Male";
            }
            else
            {
                gender = "Female";
            }
            if (check1.Checked)
            {
                review = "Good";
            }
            else
            {
                review = "Very Good"; 
            }
            display();
            empty();
            //MessageBox.Show("Name: " + name + " Designation: " + designation + " Salary: " + salary);
           
            //Label.Text = name +" "+designation+" "+salary+" "+gender+" "+review;

        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }
        public void display()
        {
            dt.Columns.Add(" Name: ");
            dt.Columns.Add(" Designation: "); 
            dt.Columns.Add(" Salary: ");
            dt.Columns.Add(" Gender: ");
            dt.Columns.Add(" Review: ");

            DataRow dr = dt.NewRow();
            dr[0] = name;
            dr[1] = designation;
            dr[2] = salary;
            dr[3] = gender;
            dr[4] = review;
               
            dt.Rows.Add(dr);
            dtgrid.DataSource = dt;
        }
        public void empty()
        {
            textBox2.Text = " ";
            textBox1.Text = " ";
            textBox3.Text = " ";

        }

    }
}