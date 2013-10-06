#define true 1
#define false 0

#define VSoft 0
#define VArmor 1
#define VAir 2

// type scope
#define private 0
#define protected 1
#define public 2

#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

class CfgPatches
{
     class axion950
     {
         units[] = {"axion950"};
         weapons[] = {};
         requiredVersion = 0.1;
		 requiredAddons[] = {};
     };

};

class CfgModels {
	class Car;	// External class reference

	class axion950 : Car {
		sectionsInherit = "";
		sections[] = {
			"n1", "n2", "n3", "n4", "n5", "n6", "pruh", "light_brake", "pravy predni", "pravy dalsi", "pravy zadni", "pravy prostredni", 
			"levy predni", "levy dalsi", "levy zadni", "levy prostredni", "L svetlo", "P svetlo", "clan",
			"Light_L", "Light_L_end", "Light_R", "Light_R_end"};
	};
};

class CfgVehicleClasses
{
	class Test
	{
		displayName = "Addon Test";
	};
};

class CfgVehicles
{
	class Car;
	class axion950 : Car
	{
		scope = public;
		
		displayName = "Claas Axion 950";
		author = "cpt. Darling";
		model = "\axion950\axion950.p3d";
		Icon = "\axion950\axion_01_ca.paa";
		picture = "\axion950\axion_01_base_ca.paa";
		mapSize = 8;
		
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";

		terrainCoef = 0.5;
		
		maxSpeed = 50;	// max speed on level road, km/h
		
		hasDriver=true;
		driverAction = "driver_offroad01";
		enableGPS = true;
		
		threat[] = {0,0,0};
		
		//soundGetIn A3\Sounds_F\vehicles\soft\Truck_02\getin
		//soundGetOut A3\Sounds_F\vehicles\soft\Truck_02\getout
		//soundDammage 
		//soundEngineOnInt A3\Sounds_F\vehicles\soft\Truck_02\int_start
		//soundEngineOnExt A3\Sounds_F\vehicles\soft\Truck_02\ext_start
		//soundEngineOffInt A3\Sounds_F\vehicles\soft\Truck_02\int_stop
		//soundEngineOffExt A3\Sounds_F\vehicles\soft\Truck_02\ext_stop
		//sound=A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00
		//frequency=0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15
		//volume=engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))
		
		// Weapon and ammo
		weapons[]={}; // none
		magazines[]={}; // none
		
		class Reflectors {
		class Left
		{
			color[] = {1900,1800,1700};
			ambient[] = {5,5,5};
			position = "Light_L";
			direction = "Light_L_end";
			hitpoint = "Light_L";
			selection = "Light_L";
			size = 1;
			innerAngle = 100;
			outerAngle = 179;
			coneFadeCoef = 10;
			intensity = 1;
			useFlare = 0;
			dayLight = 0;
			flareSize = 1.0;
			class Attenuation
			{
				start = 1.0;
				constant = 0;
				linear = 0;
				quadratic = 0.25;
				hardLimitStart = 60;
				hardLimitEnd = 120;
			};
		};
		class Right: Left
		{
			position = "Light_R";
			direction = "Light_R_end";
			hitpoint = "Light_R";
			selection = "Light_R";
		};
		
		};
	};
};