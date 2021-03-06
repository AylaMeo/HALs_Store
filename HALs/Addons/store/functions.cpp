class HALs_store {
	class Init {
		file = "HALs\Addons\store\functions";
		class initModule {postInit = 1;};
	};

	class Cargo {
		file = "HALs\Addons\store\functions\system\cargo";
		class addContainerCargo {};
		class getContainerCargo {};
		class getContainerItems {};
		class getPlayerCargo {};
		class getPlayerItems {};
		class clearContainerCargo {};
		class removeContainerItem {};
		class removePlayerItem {};
	};

	class Client {
		file = "HALs\Addons\store\functions\client";
		class addAction {};
		class systemChat {};
	};

	class Config {
		file = "HALs\Addons\store\functions\system\config";
		class getCompatibleItems {};
		class getItemMass {};
		class getItemStats {};
		class getItemType {};
		class getCargoMass {};
	};

	class Server {
		file = "HALs\Addons\store\functions\server";
		class addTrader {};
		class purchase {};
		class sell {};
	};

	class Stock {
		file = "HALs\Addons\store\functions\server\stock";
		class getTraderStock {};
		class setTraderStock {};
		class updateStock {};
	};

	class System {
		file = "HALs\Addons\store\functions\system";
		class addItemCargo {};
		class canAddItem {};
		class canEquipItem {};
		class equipItem {};
	};

	class UI {
		file = "HALs\Addons\store\functions\client\ui";
		class main {};
		class update {};
	};
};
