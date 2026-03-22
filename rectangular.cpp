#include <iostream>
#include <string>
double perimeterOfRectangle(double l,double b){
    return 2*(l+b);
}
double areaOfRectangle(double l ,double b){
    return l*b;
}
int main(){
    double l,b;
    std::cin>>l;
    std::cin>>b;
    std::string n;
    std::cin>>n;
    double result =0.0;
    if (n=="area"||n=="Area"||n=="AREA")
    {
        result=areaOfRectangle(l,b);
        std::cout<<"Area of Rectangle is: "<<result;
    }
    else if (n=="perimeter"||n=="Perimeter"||n=="PERIMETER")
    {
        result=perimeterOfRectangle(l,b);
        std::cout<<"Perimeter of Rectangle is: "<<result;
    }
    else{
        std::cout<<"Invalid option\n";
        return 1;
    }
    return 0;
}