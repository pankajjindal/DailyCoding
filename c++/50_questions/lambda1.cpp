constexpr auto l = [] (auto ... k) -> int {
    return (k + ...);
};
/*
classes
objects
mutable
const
templates 
operator overloading
constexpr
trailing return
auto 
template deduction rules 
folding expressions
variadic templates
RVO
NRVO
IIFE IILE
ODR used
Compile time context


*/

int main(){
    l(1);
    l(2);
    l(3.5);
}
