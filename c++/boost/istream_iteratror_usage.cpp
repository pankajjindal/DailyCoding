// istream_iterator example
#include <iostream>     // std::cin, std::cout
#include <iterator>     // std::istream_iterator

int main () {
  double value1, value2;
  std::cout << "Please, insert two values: ";
  int i =0;

  std::istream_iterator<double> eos;              // end-of-stream iterator
  std::istream_iterator<double> iit (std::cin);   // stdin iterator

  if (iit!=eos) value1=*iit;

  while( i < 3)
  {
      ++iit;
      if (iit!=eos) value2=*iit;
      std::cout << value1 << "*" << value2 << "=" << (value1*value2) << '\n';
      i++;
  }

  return 0;
}

