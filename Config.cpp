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
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 700;
		wheelCircumference = 6.255;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 3;
		antiRollbarSpeedMax = 100;
		idleRpm = 400;
		redRpm = 3500;

		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 0.8;
		predictTurnSimul = 0.6;
		precision = 10;
		brakeDistance = 50;	// vehicle movement precision
		turnCoef = 9.0;
		fireResistance = 5;
		
		hasDriver=true;
		driverAction = "driver_offroad01";
		enableGPS = true;
	
		crew = "C_man_1";
		side = TCivilian;
		faction = CIV_F;
		accuracy = 1.25;	// accuracy needed to recognize type of this target	
		threat[] = {0,0,0};
	
		class complexGearbox {
			GearboxRatios[] = {"R1", -6.575, "N", 0, "D1", 2.367, "D2", 1.67, "D3", 1.238, "D4", 0.99, "D5", 0.802, "D6", 0.601};
			TransmissionRatios[] = {"High", 6.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.8;
			gearDownMaxCoef = 0.5;
			gearUpMinCoef = 0.45;
			gearDownMinCoef = 0.15;
			transmissionDelay = 2;
		};
		simulation = "carx";
		dampersBumpCoef = 3.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 15.0;
		enginePower = 400; // in kW, Conversion factor from HP to kW is 0.745699872
		maxOmega = 370;
		peakTorque = 320;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0, 0.0}, {0.25, 0.65}, {0.3, 0.8}, {0.5, 0.95}, {0.7, 1.0}, {0.8, 0.9}, {0.9, 0.8}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1.5;	
	
		// Weapon and ammo
		weapons[]={}; // none
		magazines[]={}; // none

		class TransportItems {
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 6;
			};
		};

		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\offroad\offroad-int-openclose.wav", db0, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\offroad\offroad-int-openclose.wav", db0, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\offroad\landrover_int_start.wav", 1.0, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\offroad\landrover_ext_start.wav", 1.0, 1.0, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\offroad\landrover_int_stop.wav", 1.0, 1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\offroad\landrover_ext_stop.wav", 1.0, 1.0, 200};

		class RenderTargets {
			class LeftMirror {
				renderTarget = "rendertarget0";
				
				class CameraView1 {
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			
			class RightMirror {
				renderTarget = "rendertarget1";
				
				class CameraView1 {
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		
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
