# Changelog

## Version 1.4
* **Added** Selling.
    * Stringtable items:
        `"STR_HALS_STORE_ITEM_SELL_NOTEMPTY"
        "STR_HALS_STORE_ITEM_SELL_SOLD"
        "STR_HALS_STORE_CHECKBOX_AVALIABLE"
        "STR_HALS_STORE_BUTTON_SELL"
        "STR_HALS_STORE_CHECKBOX_SELLFILTER"`
    * The no stock and too expensive filters have been combined into one: "Only show items available for purchase"
    * Added filter to enable selling (only sellable items in the current container (eg trader category) are shown).
        * You can only sell an item to a store if the store itself sells the item.
        * If you sell a weapon with attachments, the attachments won't be sold and are added to the container.
    * Global item sell factor is controlled by the variable `HALs_store_sellFactor` whose default value is defined in `config.hpp`.

* **Added** French Translation (thanks to vbr74).
* **Added** "All" category to the dropdown box.
* **Added** a button to alphabetise the listed store items.
* **Fixed** issue where lbValue returned an incorrect value.
* **Fixed** issue which displayed the incorrect description for a store item.
* **Optimised** the functions: `HALs_store_fnc_main`, `HALs_store_fnc_getTraderStock` `HALs_store_fnc_setTraderStock` and  `HALs_store_fnc_updateStock`.
* **Removed** the functions: `HALs_store_fnc_blur`, `HALs_fnc_getModuleRoot` and `HALs_store_fnc_addMoneyOnOpen`.
* **Updated** `defines.hpp` by removing unused class definitions.
* **Updated** `dialog.hpp` by replacing Safezone value with pixelGridNoUIScale values.
* **Updated** `dialog.hpp` by replacing magic numbers with MACROs.
* **Updated** HALs file structure to be compatible with my other projects (moved `HALs\Core` to `HALs\Addons\Core`).
___
## Version 1.3
### Additions
* ADDED: (Function) `HALs_store_fnc_addMoneyOnOpen`
* ADDED: Option to change the currency symbol used.
* CHANGED: Restructured `HALs\Addons` folder. Everything is initialised through `HALs\Addons\main\config.hpp` now.
* CHANGED: Categorised functions in the `HALs\Core` folder.
___
## Version 1.2
### Fixes
* FIXED: The mass of items of containers within containers were not calculated.
* FIXED: Edit box maximum characters set to 6 (credits to: R3vo).
* FIXED: Players couldn't buy items in multiplayer (credits to: Antoine)
* OPTIMISED: Removed the creation of unneccesary private variables.
* OPTIMISED: `HALs_store_fnc_main`, `HALs_store_fnc_initModule`, `HALs_store_fnc_blur`, `HALs_fnc_getModuleRoot`

### Additions
* ADDED: (Function) HALs_store_fnc_getItemType
* ADDED: (Function) HALs_fnc_getModuleSettings
* ADDED: Spanish Translation thanks to Kain181.
* ADDED: French Translation thanks to vbr74.

* CHANGED: (Dialog) Visual changes. Text should be easier to read and dialog should scale better with different resolutions
* CHANGED: (Config) The configuration files for HALs_Money and HALs_Store have been moved from the `description.ext` to `config.hpp` in their respective folders.
  * HALs_Money: `HALs\Addons\Money\config.hpp`
  * HALs_Store: `HALs\Addons\Store\config.hpp`
___
## Version 1.1
### Fixes
* FIXED: Could not equip a sniper/shotgun if the equip checkbox was checked.
* FIXED: Mass of glasses were considered 0.
* FIXED: Could buy items to the inventories of other traders.
* FIXED: Could trade with dead traders.
* FIXED: Could trade with traders while in a vehicle.
* FIXED: Could not equip item if container was completely full/no container existed (Now, the equip checkbox must be checked).
* FIXED: Backpack pictures were not showing.
* FIXED: Backpack stats were not working.

### Additions
* ADDED: German Translation thanks to 7erra.
* ADDED: Items can now have custom structured text descriptions.
* ADDED: fn_purchase added message if player couldnt equip item.
  * Uses new stringtable entry ("STR_HALS_STORE_ITEM_NOEQUIP").

* ADDED: traders can be any type now ("CAManBase", "ReammoBox_F" or "Car_F").
  * NB automatically clears a traders inventory on init if they are not type "CAManBase"
  * If trader is type "CAManBase", can only purchase to player's uniform/vest/backpack.

* ADDED: Stats for weapons, uniform, vests, backpacks and optics.
![](http://i.imgur.com/piowiF0.jpg) ![](http://i.imgur.com/cXhrtyh.jpg) ![](http://i.imgur.com/LyaFDse.jpg)

### Bugs
* TBF
