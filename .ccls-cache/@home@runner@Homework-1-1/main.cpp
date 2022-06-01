#include <iostream>
using namespace std;

class Complex {
private:
  float real;
  float imag;

public:
  Complex(){}
  Complex(float re, float im) {
    real = re;
    imag = im;
  }
  Complex(const string &str);

  float getReal() const { return real; }
  float getImag() const { return imag; }
  void showReal(){
    cout<<" "<<real<<"+"<<imag<<"i"<<endl;
  }
   Complex(Complex &obj){
   real=obj.real;
   imag=obj.imag;
  }

  Complex add(Complex result){
  Complex Add;
    Add.real = real + result.real;
    Add.imag = imag + result.imag;
    return Add;
  }

Complex sub(Complex result){
  Complex Sub;
  Sub.real = real - result.real;
  Sub.imag = imag - result.imag;
  return Sub;
}

Complex mult(Complex result){
  Complex Mult;
  Mult.real = real*result.real - imag*result.real;
  Mult.imag = imag*result.real - real*result.imag;
  return Mult;
}

Complex div(Complex result){
Complex Div;
  Div.real = (result.real*real + result.imag*imag)/(result.real*result.real + result.imag*result.imag);
  Div.imag = (imag*result.real + real*result.imag)/(result.real*result.real + result.imag*result.imag);
  return Div;
  
}

};

int main(void) {

  float reali, reali2;
  float imagi, imagi2;

  cout << "Enter the first real number: " << endl;
  cin >> reali;
  cout<<"Enter the first imaginary number : "<<endl;
  cin>>imagi;  
  Complex obj1(reali,imagi);
  obj1.showReal();
 
  
  cout << "Enter the first real number: " << endl;
  cin >> reali2;
  cout<<"Enter the first imaginary number : "<<endl;
  cin>>imagi2;  
  Complex obj2(reali2,imagi2);
  obj2.showReal();
  Complex result;

  result = obj1.add(obj2);
  cout<<"The sum result is : "<<endl;
  cout<<"("<<result.getReal()<<"+"<<result.getImag()<<"i)"<<endl;

  result = obj1.sub(obj2);
  cout<<"The sub result is : "<<endl;
  cout<<"("<<result.getReal()<<"+"<<result.getImag()<<"i)"<<endl;



  result = obj1.mult(obj2);
  cout<<"The mult result is : "<<endl;
  cout<<"("<<result.getReal()<<"+"<<result.getImag()<<"i)"<<endl;


  result = obj1.div(obj2);
  cout<<"The div result is : "<<endl;
  cout<<"("<<result.getReal()<<"+"<<result.getImag()<<"i)"<<endl;
  
  
};






