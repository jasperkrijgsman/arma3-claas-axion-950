class CfgModels
{
	class default {};
	class Vehicle: default {};
	class Car: Vehicle {};
	class Jeep: Car {};
	class axion950: Jeep {};
};


class CfgPatches
{
     class axion950
     {
         units[] = {axion950};
         weapons[] = {};
         requiredVersion = 0.1;
		 requiredAddons[] = {};
     };

};

class CfgVehicles
{

     class All {};
     class AllVehicles: All {};
     class Land: AllVehicles {};
     class LandVehicle: Land {};
     class Car: LandVehicle {};
     class Jeep: Car {};

     class axion950: Jeep
     {                               
		displayName="Claas Axion 950";
		model= "\axion950\axion950";
		side = 3;
		icon = "iconStaticObject";
		picture = "pictureStaticObject";
		scope = 2;
              	
		maxSpeed=300;
		transportSoldier=0;                                                                     
      };
}