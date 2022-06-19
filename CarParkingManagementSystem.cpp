#include <iostream>


class parking{

	public:
	int bike = 0;
	int car = 0;
	int cycle = 0;
	int rick = 0;
	int bus = 0;
	int com = 0;
	int count = 0;
	int amount = 0;
	const int space = 100;
	char aId;
	int nId = 0;
	
	void bikef(){

		bike++;
		count++;
		std::cout << "Your bike is safe with us" << std::endl;
		std::cout << "Your bill amount is 20 rupees" << std::endl;
		aId = 'B';
		nId++;
		std::cout << "Your Vehicle Id is " << aId << nId << std::endl;
		amount += 20;
	}

	void carf(){

		car++;
                count++;
                std::cout << "Your car is safe with us" << std::endl;
                std::cout << "Your bill amount is 50 rupees" << std::endl;
		aId = 'C';
                nId++;
                std::cout << "Your Vehicle Id is " << aId << nId << std::endl;
                amount += 50;
	} 

	void cyclef(){

                cycle++;
                count++;
                std::cout << "Your cycle is safe with us" << std::endl;
                std::cout << "Your bill amount is 10 rupees" << std::endl;
		aId = 'A';
                nId++;
                std::cout << "Your Vehicle Id is " << aId << nId << std::endl;
                amount += 10;
        }

	void rickshawf(){

                rick++;
                count++;
                std::cout << "Your rickshaw is safe with us" << std::endl;
                std::cout << "Your bill amount is 30 rupees" << std::endl;
		aId = 'D';
                nId++;
                std::cout << "Your Vehicle Id is " << aId << nId << std::endl;
                amount += 30;
        }

	void busf(){

               	bus++;
                count++;
                std::cout << "Your bus is safe with us" << std::endl;
                std::cout << "Your bill amount is 70 rupees" << std::endl;
		aId = 'E';
                nId++;
                std::cout << "Your Vehicle Id is " << aId << nId << std::endl;
                amount += 70;
        }

	void commercial(){

		com++;
                count++;
                std::cout << "Your commercial vehicle is safe with us" << std::endl;
                std::cout << "Your bill amount is 100 rupees" << std::endl;
		aId = 'F';
                nId++;
                std::cout << "Your Vehicle Id is " << aId << nId << std::endl;
                amount += 100;
	}

	int board(){
	
		int x = 0;
		std::cout<<"**************************************************"<<std::endl;
		std::cout<<"Welcome to Premium Parking!!"<<std::endl;
		std::cout<<"--------------------------------------------------"<<std::endl;
		std::cout<<"Press the number corresponding to your vehicle: "<<std::endl;
		std::cout<<"1) Bike                 | Rs.20  |"<<std::endl;
		std::cout<<"2) Car                  | Rs.50  |"<<std::endl;
		std::cout<<"3) Cycle                | Rs.10  |"<<std::endl;
		std::cout<<"4) Riskshaw             | Rs.30  |"<<std::endl;
		std::cout<<"5) Bus                  | Rs.70  |"<<std::endl;
		std::cout<<"6) Commercial Vehicle   | Rs.100 |"<<std::endl;
		std::cout<<"--------------------------------------------------"<<std::endl;
		std::cout<<"Total Vehicles in parking : "<<count<<std::endl;
		std::cout<<"Available Space in parking : "<<(space-count)<<std::endl;
		std::cout<<"--------------------------------------------------"<<std::endl;
		std::cout<<"Press 7 to get details about parking"<<std::endl;
		std::cout<<"press 8 to delete all details"<<std::endl;
		std::cout<<"--------------------------------------------------"<<std::endl;
		std::cout<<"Press 9 to remove your vehicle"<<std::endl;
		std::cout<<"press 10 to exit"<<std::endl;
		std::cout<<"**************************************************"<<std::endl;
		std::cin >> x;

		return x;
	}

	void remove(){
	
		std::string x;
		std::cout << "Please enter your Vehicle Id: " << std::endl;
		std::cin >> x;
		switch(x[0]){

			case 'A':
				if(cycle>0){
					cycle = cycle - 1;
					count = count - 1;
					std::cout << "Here is your Cycle, please visit us again" << std::endl;
				}else{
					std::cout << "Sorry we don't have your vehicle" << std::endl;
				}
				break;
			case 'B':
				if(bike>0){
                                        bike = bike - 1;
					count = count - 1;
                                        std::cout << "Here is your Bike, please visit us again" << std::endl;
                                }else{
                                        std::cout << "Sorry we don't have your vehicle" << std::endl;
                                }
                                break;
			case 'C':
				if(car>0){
                                        car = car - 1;
					count = count - 1;
                                        std::cout << "Here is your Car, please visit us again" << std::endl;
                                }else{
                                        std::cout << "Sorry we don't have your vehicle" << std::endl;
                                }
                                break;
			case 'D':
				if(rick>0){
                                        rick = rick - 1;
					count = count - 1;
                                        std::cout << "Here is your Rickshaw, please visit us again" << std::endl;
                                }else{
                                        std::cout << "Sorry we don't have your vehicle" << std::endl;
                                }
                                break;
			case 'E':
				if(bus>0){
                                        bus = bus - 1;
					count = count - 1;
                                        std::cout<< "Here is your Bus, please visit us again" <<std::endl;
                                }else{
                                        std::cout<< "Sorry we don't have your vehicle" << std::endl;
                                }
                                break;
			case 'F':
				if(com>0){
                                        com = com - 1;
					count = count - 1;
                                        std::cout<< "Here is your Commercial vehicle, please visit us again" <<std::endl;
                                }else{
                                        std::cout<< "Sorry we don't have your vehicle" <<std::endl;
                                }
                                break;
			default:
				std::cout<< "Invalid Id" <<std::endl;
		}
	}
	void showData(){
		
		std::cout<< "Total number of vehicles in parking : " << count <<std::endl;
		std::cout<< "Total number of available space : "<< (space-count) <<std::endl;
		std::cout<< "Total number of bikes : "<< bike <<std::endl;
		std::cout<< "Total number of cars : "<< car <<std::endl;
		std::cout<< "Total number of cycles : "<< cycle <<std::endl;
		std::cout<< "Total number of rickshaws : "<< rick <<std::endl;
		std::cout<< "Total number of buses : "<< bus <<std::endl;
		std::cout<< "Total number of commercial vehicles : "<< com <<std::endl;
		std::cout<< "Total Amount collected today : "<< amount <<std::endl;

	}
	void deleteData(){

		bike = 0;
        	car = 0;
        	cycle = 0;
        	rick = 0;
        	bus = 0;
        	com = 0;
        	count = 0;
        	amount = 0;
        	nId = 0;
		std::cout << "All data erased..." << std::endl;
	}
};
parking obj;

	int main(){

		int ch = 0;
		int x = 0;
		do{
			if(obj.count<100){
				ch = obj.board();
				switch(ch){

					case 1:
						obj.bikef();
						break;
					case 2:
						obj.carf();
                                                break;
					case 3:
						obj.cyclef();;
                                                break;
					case 4:
						obj.rickshawf();
                                                break;
					case 5:
						obj.busf();
                                                break;
					case 6:
						obj.commercial();
                                                break;
					case 7:
						obj.showData();
                                                break;
					case 8:
						obj.deleteData();
                                                break;
					case 9:
						obj.remove();
                                                break;
					case 10:
						std::cout<<"Exiting......."<<std::endl;
                                                break;
					default:
						std::cout<<"Invalid Input!!"<<std::endl;
						break;
				}
				std::cout << "Want to return to main menu?(Press 0 if yes, any other key if no)" << std::endl;
				std::cin>>x;
				if(x!=0){
                                	std::cout << "Thank You, Please visit us again!!" << std::endl;
				}
			}else{
				std::cout << "Sorry for inconvinience, Parking space full!!" << std::endl;
			}	
		}while(x==0);

		return 0;
	}
