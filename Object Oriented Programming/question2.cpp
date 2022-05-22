#include<iostream>
#include <string>

using std::string;




string data ; 


class Gift 
{
    private : 
        string gift_name[3];

    public :

        void setter_gifts(){

            std::cout << "Enter the GIFT names" << std::endl;

            for(int i = 0 ; i < 3 ; i++)
            {
                std::cout << "The name of gift number " << i+1 << " :";
                std::cin >> gift_name[i];
            }
            std::cout << std::endl;

        }

        


        string return_gift_data ()
        {
            return gift_name[3];
        }


};


class Event 
{
    private : 
        string event_name[3];
    public :

         void setter_event(){

            std::cout << "Enter the event names" << std::endl;

            for(int i = 0 ; i < 3 ; i++)
            {
                std::cout << "The name of EVENT number " << i+1 << " :";
                std::cin >> event_name[i];
            }
            std::cout << std::endl;
        }
        
           string return_event_data ()
        {
            return event_name[3];
        }

};





int main()
{
    Gift obj_gift ;
    Event obj_event;

    

    obj_event.setter_event();
    obj_gift.setter_gifts();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << " Enter the name of the event : " << std::endl;
    std::cin>>data ; 

  
    // string one[3] ; 
    // one[3] = obj_event.return_event_data();

    // for(int i = 0 ; i < 3 ; i ++ )
    // {
    //     std::cout << one[i] << std::endl;
    // }

}