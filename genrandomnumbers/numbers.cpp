#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
double R = 18;//7858;
double Sum=0;
double disp = 0;
double col1=0,col2=0,col3=0,col4=0,col5=0,col6=0,col7=0,col8=0,col9=0,col10=0;
double res = 0;
int i = 0;
double matoj=0;
double r = 0;
 double m = 8192;
  double deviation(double disp);
  double disperse();
  double mat();
double randomix()
{
  
	res = R * (R + 1);
	  R = fmod(res, m);
	  Sum +=( R/m );
	 // mat();
	  r = R / m;
	if(r>0 && r<=0.1)
	{
		col1++;

	}
	if(r>0.1 && r<=0.2){
	
	col2++;
	}
	if(r>0.2 && r<=0.3){
	
	col3++;
	}
	if(r>0.3 && r<=0.4){
	
	col4++;
	}
	if(r>0.4 && r<=0.5){
	
	col5++;
	}
	if(r>0.5 && r<=0.6){
	
	col6++;
	}
	if(r>0.6 && r<=0.7){
	
	col7++;
	}
	if(r>0.7 && r<=0.8){
	
	col8++;
	}
	if(r>0.8 && r<=0.9){
	
	col9++;
	}
	if(r>0.9 && r<=1){
	
	col10++;
	}
	/*col1=((col1-50)*(col1-50))/50;
	col2=((col2-50)*(col2-50))/50;
	col3=((col3-50)*(col3-50))/50;
	col4=((col4-50)*(col4-50))/50;
	col5=((col5-50)*(col5-50))/50;
	col6=((col6-50)*(col6-50))/50;
	col7=((col7-50)*(col7-50))/50;
	col8=((col8-50)*(col8-50))/50;
	col9=((col9-50)*(col9-50))/50;
	col10=((col10-50)*(col10-50))/50;*/
	
  //  prev = A * prev + fmod(C, RAND_MAX);
	
	 // открываем файл
	
    return (R/m);
	
}
double mat()
{
	matoj=Sum/600;
//disperse();
	Sum=0;
	Sum=col1+col2+col3+col4+col5+col6+col7+col8+col8+col9+col10;
	return matoj;
}
double disperse()
{
	for (i = 0; i<600; i++)
	{

		std::cout << randomix() << "\n";
		disp+=((R/m)-matoj)*((R/m)-matoj);
	
	}
	
	return disp;
}
double deviation(double disp){

	double dev=0;
	dev=sqrt(disp);
	return dev;
}
void count()
{ double leftax=0;
 std::  ofstream out("D:\\projects VS c++\\genrandomnumbers\\numbers.txt"); // // создаем объект класса ifstream
	 // открываем файл
std::cout<<"/n This is vertical  axis";
	for (double i=1;i<600;i++)
	{
		leftax = ((i/600));
		std::cout<<leftax  <<std::endl;
		  out << leftax << '\n'; 
	}
	 out.close();
}


int main(int argc, char **argv)
{std::  ofstream out("D:\\projects VS c++\\genrandomnumbers\\numbers1.txt"); // // создаем объект класса ifstream
    for(i=0; i<600; i++)
	{	
  
    std::cout <<randomix() << "\n";
	out<<randomix()<<"\n";
	}
	std::cout<<"Sum" << Sum << "\n" << col1 << "\n";
	std::cout << col2 << "\n";;
	std::cout << col3 << "\n";;
	std::cout << col4 << "\n";;
	std::cout << col5 << "\n";;
	std::cout << col6 << "\n";;
	std::cout << col7 << "\n";;
	std::cout << col8 << "\n";;
	std::cout << col9 << "\n";;
	std::cout << col10;
	std::cout<<"Matoj";
	std::cout<< mat()<<"\n:";
	std::cout << "Disperse";
	disperse();
	disp = disp / 600;
	std::cout << disp << "\n";
	deviation(disp);
out.close();
	//count();
	
    
  system ("pause"); //Чтобы сразу не пропадало окно
 return 0;
}

