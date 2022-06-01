/*
  code : cmp.cc
  user : Aziz Faozi
*/


#include <iostream>
#include <Eigen/Dense>

void basic();
void add_sub();
void matrix_multi();
int main(){

	add_sub();

	matrix_multi();
	return 0;

}


/* check matrix multiplication */
void matrix_multi(){
  Eigen::Matrix2d p;
  p<<1,2,3,4;
  std::cout<<"p*p : \n"<<p*p<<std::endl;
  
}

/* add and sub matrics */
void add_sub(){

	Eigen::Matrix2d a;
	a<<1,2,3,4;
	Eigen::MatrixXd b(2,2);
	b<<2,3,1,4;

	std::cout <<"a+b=\n"<<a+b<<std::endl;

}


/* 
   basic code for eigen
*/
void basic()
{
  Eigen::MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << "Here is the matrix m:\n" << m << std::endl;
  Eigen::VectorXd v(2);
  v(0) = 4;
  v(1) = v(0) - 1;
  std::cout << "Here is the vector v:\n" << v << std::endl;
  //return 0;
}
