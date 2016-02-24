class CfgPatches
{
	class weap_StreetYou_pp_kiparis
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_far_optics1;
class single_far_optics2;
class fullauto_medium;
class SlotInfo;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class SMG_02_F;
	class hgun_ACPC2_F;
	class str_oc_kipa: SMG_02_F
	{
		author="Vostok Games";
		displayname="$STR_oc02_name";
		model="wpn_r_f7\kipa\ris.p3d";
		picture="\wpn_r_f7\kipa\gear_kipa_x_ca";
		reloadAction="GestureReloadSMG_02";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Gamma\Smgs\pdw2000\data\Anim\SMG_03.rtm"
		};
		maxZeroing=200;
		initspeed=320;
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		dexterity=3.1919999;
		magazines[]=
		{
			"30Rnd_mag_kedr",
			"30rnd_mag_trs_kedr"
		};
		descriptionshort="$STR_oc02_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Reloads\reload_sting",
			1,
			1,
			30
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",
					1,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",
							1.4125376,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.075000003;
			dispersion=0.0044999998;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_auto_prone_smg_01";
			minRange=5;
			minRangeProbab=0.5;
			midRange=85;
			midRangeProbab=0.69999999;
			maxRange=160;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",
					1,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\9mm_kedr.wav",
					1.1,
					1,
					1100
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",
							1.4125376,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.059999999;
			dispersion=0.0044999998;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_auto_prone_smg_01";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=25;
			midRangeProbab=0.80000001;
			maxRange=55;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=35;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1456009442";
};