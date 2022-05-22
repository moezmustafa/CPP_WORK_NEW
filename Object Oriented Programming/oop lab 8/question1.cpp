#include<iostream>


class DM 
 {
     private : 
        float DM_centi ;
        float DM_meters ;
    public : 

        DM(){
            DM_centi = 0 ;
            DM_meters = 0 ;
        }

        DM(float num1 , float num2 )
        {
            this->DM_centi = num1 ;
            this->DM_meters = num2 ;

        }

        float getter_DM_centimeters()
        {
            return DM_centi;
        }

        float getter_DM_meters()
        {
            return DM_meters;
        }

        void setter_DM()
        {
            std::cout << "Enter the DM_centi : ";
            std::cin>> DM_centi ;
            std::cout << "Enter the DM_meters : ";
            std::cin>> DM_meters ;
        }

friend DM operator +(DB &obj1 , DM &obj2) ;


 };



 class DB
 {
     private : 
        float DB_feet;
        float DB_inches;
    public : 

        DB(){
            this->DB_feet = 0;
            this->DB_inches = 0 ;
        }
        DB(float num1 , float num2)
        {
            this ->DB_feet = num1;
            this ->DB_inches = num2 ;
        }

        float getter_DB_feets()
        {
            return DB_feet;
        }
        float getter_DB_inches(){
            return DB_inches;
        }

        void setter_DB()
        {   

            std::cout << "Enter the value of feet : ";
            std::cin >> DB_feet ;
            std::cout << "Enter the value of inches : ";
            std::cin >> DB_inches ;

        }


friend DM operator +(DB &obj1 , DM &obj2) ;

 };


 
    DM operator + (DB &obj1 , DM &obj2)
    {
        DM obj3 ;
        obj3.DM_centi = obj1.DB_feet * 30.48 + obj1.DB_inches * 2.54 + obj2.DM_centi ;
        obj3.DM_meters = obj3.DM_centi / 100 ;
        return obj3 ;
    }


 int main()
 {

     DM obj1 ;
    DB obj2 ;

    DM obj3 ;

std::cout << "Enter the value for the DM class : ";
    obj1.setter_DM();
std::cout << std::endl;
std::cout << std::endl;
std::cout << "Enter the value for the DB class : ";
    obj2.setter_DB();
std::cout << std::endl;
std::cout << std::endl;


obj3 = obj1 + obj2 ;



 }

