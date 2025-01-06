#include "mapping.hpp"

#include <string>

namespace mapping{

   const std::string KEYSTONES_JSON = R"(
   {
      "8369":"First Strike",
      "8124":"Predator",
      "8112":"Electrocute",
      "8360":"Unsealed Spellbook",
      "8128":"Dark Harvest",
      "8214":"Summon Aery",
      "8008":"Lethal Tempo",
      "8010":"Conqueror",
      "8005":"Press the Attack",
      "8351":"Glacial Augment",
      "8439":"Aftershock",
      "8021":"Fleet Footwork",
      "8230":"Phase Rush",
      "8465":"Guardian",
      "8437":"Grasp of the Undying",
      "9923":"Hail of Blades",
      "8229":"Arcane Comet"
   }
   )";

   const std::string SECONDARY_RUNES_JSON = R"(
   {
      "8000":"Precision",
      "8100":"Domination",
      "8200":"Sorcery",
      "8300":"Inspiration",
      "8400":"Resolve"
   }
   )";

   const std::string SUMMMONERS_JSON = R"(
   {
   "1": "Cleanse",
   "3": "Exhaust",
   "4": "Flash",
   "6": "Ghost",
   "7": "Heal",
   "11": "Smite",
   "12": "Teleport",
   "14": "Ignite",
   "21": "Barrier"
   }
   )";

   const std::string ITEMS_JSON = R"(
   {"0":"Empty","1001":"Boots","1004":"Faerie Charm","1006":"Rejuvenation Bead","1011":"Giant's Belt","1018":"Cloak of Agility","1026":"Blasting Wand","1027":"Sapphire Crystal","1028":"Ruby Crystal","1029":"Cloth Armor","1031":"Chain Vest","1033":"Null-Magic Mantle","1035":"Emberknife","1036":"Long Sword","1037":"Pickaxe","1038":"B. F. Sword","1039":"Hailblade","1040":"Obsidian Edge","1042":"Dagger","1043":"Recurve Bow","1052":"Amplifying Tome","1053":"Vampiric Scepter","1054":"Doran's Shield","1055":"Doran's Blade","1056":"Doran's Ring","1057":"Negatron Cloak","1058":"Needlessly Large Rod","1082":"Dark Seal","1083":"Cull","1101":"Scorchclaw Pup","1102":"Gustwalker Hatchling","1103":"Mosstomper Seedling","1104":"Eye of the Herald","1500":"Penetrating Bullets","1501":"Fortification","1502":"Reinforced Armor","1503":"Warden's Eye","1504":"Vanguard","1506":"Reinforced Armor","1507":"Overcharged","1508":"Anti-tower Socks","1509":"Gusto","1510":"Phreakish Gusto","1511":"Super Mech Armor","1512":"Super Mech Power Field","1515":"Turret Plating","1516":"Structure Bounty","1517":"Structure Bounty","1518":"Structure Bounty","1519":"Structure Bounty","1520":"OvererchargedHA","1521":"Fortification","1522":"Tower Power-Up","2003":"Health Potion","2010":"Total Biscuit of Everlasting Will","2015":"Kircheis Shard","2019":"Steel Sigil","2020":"The Brutalizer","2021":"Tunneler","2022":"Glowing Mote","2031":"Refillable Potion","2033":"Corrupting Potion","2049":"Guardian's Amulet","2050":"Guardian's Shroud","2051":"Guardian's Horn","2052":"Poro-Snax","2055":"Control Ward","2056":"Stealth Ward","2065":"Shurelya's Battlesong","2138":"Elixir of Iron","2139":"Elixir of Sorcery","2140":"Elixir of Wrath","2141":"Cappa Juice","2142":"Juice of Power","2143":"Juice of Vitality","2144":"Juice of Haste","2150":"Elixir of Skill","2151":"Elixir of Avarice","2152":"Elixir of Force","2403":"Minion Dematerializer","2419":"Commencing Stopwatch","2420":"Seeker's Armguard","2421":"Shattered Armguard","2422":"Slightly Magical Footwear","2423":"Perfectly Timed Stopwatch","2502":"Unending Despair","2504":"Kaenic Rookern","3001":"Evenshroud","3002":"Trailblazer","3003":"Archangel's Staff","3004":"Manamune","3005":"Ghostcrawlers","3006":"Berserker's Greaves","3009":"Boots of Swiftness","3011":"Chemtech Putrifier","3012":"Chalice of Blessing","3020":"Sorcerer's Shoes","3023":"Lifewell Pendant","3024":"Glacial Buckler","3026":"Guardian Angel","3031":"Infinity Edge","3033":"Mortal Reminder","3035":"Last Whisper","3036":"Lord Dominik's Regards","3039":"Atma's Reckoning","3040":"Seraph's Embrace","3041":"Mejai's Soulstealer","3042":"Muramana","3044":"Phage","3046":"Phantom Dancer","3047":"Plated Steelcaps","3050":"Zeke's Convergence","3051":"Hearthbound Axe","3053":"Sterak's Gage","3057":"Sheen","3065":"Spirit Visage","3066":"Winged Moonplate","3067":"Kindlegem","3068":"Sunfire Aegis","3070":"Tear of the Goddess","3071":"Black Cleaver","3072":"Bloodthirster","3073":"Experimental Hexplate","3074":"Ravenous Hydra","3075":"Thornmail","3076":"Bramble Vest","3077":"Tiamat","3078":"Trinity Force","3082":"Warden's Mail","3083":"Warmog's Armor","3084":"Heartsteel","3085":"Runaan's Hurricane","3086":"Zeal","3087":"Statikk Shiv","3089":"Rabadon's Deathcap","3091":"Wit's End","3094":"Rapid Firecannon","3095":"Stormrazor","3100":"Lich Bane","3102":"Banshee's Veil","3105":"Aegis of the Legion","3107":"Redemption","3108":"Fiendish Codex","3109":"Knight's Vow","3110":"Frozen Heart","3111":"Mercury's Treads","3112":"Guardian's Orb","3113":"Aether Wisp","3114":"Forbidden Idol","3115":"Nashor's Tooth","3116":"Rylai's Crystal Scepter","3117":"Mobility Boots","3118":"Malignance","3119":"Winter's Approach","3121":"Fimbulwinter","3123":"Executioner's Calling","3124":"Guinsoo's Rageblade","3128":"Deathfire Grasp","3131":"Sword of the Divine","3133":"Caulfield's Warhammer","3134":"Serrated Dirk","3135":"Void Staff","3137":"Cryptbloom","3139":"Mercurial Scimitar","3140":"Quicksilver Sash","3142":"Youmuu's Ghostblade","3143":"Randuin's Omen","3145":"Hextech Alternator","3146":"Hextech Gunblade","3147":"Haunting Guise","3152":"Hextech Rocketbelt","3153":"Blade of The Ruined King","3155":"Hexdrinker","3156":"Maw of Malmortius","3157":"Zhonya's Hourglass","3158":"Ionian Boots of Lucidity","3161":"Spear of Shojin","3165":"Morellonomicon","3172":"Zephyr","3177":"Guardian's Blade","3179":"Umbral Glaive","3181":"Hullbreaker","3184":"Guardian's Hammer","3190":"Locket of the Iron Solari","3191":"PlaceholderItem","3193":"Gargoyle Stoneplate","3211":"Spectre's Cowl","3222":"Mikael's Blessing","3302":"Terminus","3330":"Scarecrow Effigy","3340":"Stealth Ward","3348":"Arcane Sweeper","3349":"Lucent Singularity","3363":"Farsight Alteration","3364":"Oracle Lens","3400":"Your Cut","3430":"Rite Of Ruin","3504":"Ardent Censer","3508":"Essence Reaver","3513":"Eye of the Herald","3599":"Kalista's Black Spear","3600":"Kalista's Black Spear","3742":"Dead Man's Plate","3748":"Titanic Hydra","3801":"Crystalline Bracer","3802":"Lost Chapter","3803":"Catalyst of Aeons","3814":"Edge of Night","3850":"Spellthief's Edge","3851":"Frostfang","3853":"Shard of True Ice","3854":"Steel Shoulderguards","3855":"Runesteel Spaulders","3857":"Pauldrons of Whiterock","3858":"Relic Shield","3859":"Targon's Buckler","3860":"Bulwark of the Mountain","3862":"Spectral Sickle","3863":"Harrowing Crescent","3864":"Black Mist Scythe","3865":"World Atlas","3866":"Runic Compass","3867":"Bounty of Worlds","3869":"Celestial Opposition","3870":"Dream Maker","3871":"Zaz'Zak's Realmspike","3876":"Solstice Sleigh","3877":"Bloodsong","3901":"Fire at Will","3902":"Death's Daughter","3903":"Raise Morale","3916":"Oblivion Orb","4003":"Lifeline","4004":"Spectral Cutlass","4005":"Imperial Mandate","4010":"Bloodletter's Curse","4011":"Sword of Blossoming Dawn","4012":"Sin Eater","4013":"Lightning Braid","4014":"Frozen Mallet","4015":"Perplexity","4016":"Wordless Promise","4017":"Hellfire Hatchet","4401":"Force of Nature","4402":"Innervating Locket","4403":"The Golden Spatula","4628":"Horizon Focus","4629":"Cosmic Drive","4630":"Blighting Jewel","4632":"Verdant Barrier","4633":"Riftmaker","4635":"Leeching Leer","4636":"Night Harvester","4637":"Demonic Embrace","4638":"Watchful Wardstone","4641":"Stirring Wardstone","4642":"Bandleglass Mirror","4643":"Vigilant Wardstone","4644":"Crown of the Shattered Queen","4645":"Shadowflame","4646":"Stormsurge","6029":"Ironspike Whip","6035":"Silvermere Dawn","6333":"Death's Dance","6609":"Chempunk Chainsword","6610":"Sundered Sky","6616":"Staff of Flowing Water","6617":"Moonstone Renewer","6620":"Echoes of Helia","6621":"Dawncore","6630":"Goredrinker","6631":"Stridebreaker","6632":"Divine Sunderer","6653":"Liandry's Torment","6655":"Luden's Companion","6656":"Everfrost","6657":"Rod of Ages","6660":"Bami's Cinder","6662":"Iceborn Gauntlet","6664":"Hollow Radiance","6665":"Jak'Sho, The Protean","6667":"Radiant Virtue","6670":"Noonquiver","6671":"Galeforce","6672":"Kraken Slayer","6673":"Immortal Shieldbow","6675":"Navori Quickblades","6676":"The Collector","6677":"Rageknife","6690":"Rectrix","6691":"Duskblade of Draktharr","6692":"Eclipse","6693":"Prowler's Claw","6694":"Serylda's Grudge","6695":"Serpent's Fang","6696":"Axiom Arc","6697":"Hubris","6698":"Profane Hydra","6699":"Voltaic Cyclosword","6700":"Shield of the Rakkor","6701":"Opportunity","7000":"Sandshrike's Claw","7001":"Syzygy","7002":"Draktharr's Shadowcarver","7003":"Rabadon's Deathcrown","7004":"Enmity of the Masses","7005":"Frozen Fist","7006":"Typhoon","7007":"Swordnado","7008":"Ataraxia","7009":"Icathia's Curse","7010":"Vespertide","7011":"Upgraded Aeropack","7012":"Liandry's Lament","7013":"Force of Arms","7014":"Eternal Winter","7015":"Ceaseless Hunger","7016":"Dreamshatter","7017":"Deicide","7018":"Infinity Force","7019":"Reliquary of the Golden Dawn","7020":"Shurelya's Requiem","7021":"Starcaster","7022":"Certainty","7023":"Equinox","7024":"Caesura","7025":"Leviathan","7026":"The Unspoken Parasite","7027":"Primordial Dawn","7028":"Infinite Convergence","7029":"Youmuu's Wake","7030":"Seething Sorrow","7031":"Edge of Finality","7032":"Flicker","7033":"Cry of the Shrieking City","7034":"Hope Adrift","7035":"Daybreak","7036":"T.U.R.B.O.","7037":"Obsidian Cleaver","7038":"Shojin's Resolve","7039":"Heavensfall","7040":"Eye of the Storm","7041":"Wyrmfallen Sacrifice","7042":"The Baron's Gift","7050":"Gangplank Placeholder","8001":"Anathema's Chains","8020":"Abyssal Mask","221038":"B. F. Sword","221053":"Vampiric Scepter","221058":"Needlessly Large Rod","222051":"Guardian's Horn","222065":"Shurelya's Battlesong","223001":"Evenshroud","223003":"Archangel's Staff","223004":"Manamune","223005":"Ghostcrawlers","223006":"Berserker's Greaves","223009":"Boots of Swiftness","223011":"Chemtech Putrifier","223020":"Sorcerer's Shoes","223026":"Guardian Angel","223031":"Infinity Edge","223033":"Mortal Reminder","223036":"Lord Dominik's Regards","223039":"Atma's Reckoning","223040":"Seraph's Embrace","223042":"Muramana","223046":"Phantom Dancer","223047":"Plated Steelcaps","223050":"Zeke's Convergence","223053":"Sterak's Gage","223057":"Sheen","223065":"Spirit Visage","223067":"Kindlegem","223068":"Sunfire Aegis","223071":"Black Cleaver","223072":"Bloodthirster","223074":"Ravenous Hydra","223075":"Thornmail","223078":"Trinity Force","223084":"Heartsteel","223085":"Runaan's Hurricane","223087":"Statikk Shiv","223089":"Rabadon's Deathcap","223091":"Wit's End","223094":"Rapid Firecannon","223095":"Stormrazor","223100":"Lich Bane","223102":"Banshee's Veil","223105":"Aegis of the Legion","223107":"Redemption","223109":"Knight's Vow","223110":"Frozen Heart","223111":"Mercury's Treads","223112":"Guardian's Orb","223115":"Nashor's Tooth","223116":"Rylai's Crystal Scepter","223119":"Winter's Approach","223121":"Fimbulwinter","223124":"Guinsoo's Rageblade","223135":"Void Staff","223139":"Mercurial Scimitar","223142":"Youmuu's Ghostblade","223143":"Randuin's Omen","223146":"Hextech Gunblade","223152":"Hextech Rocketbelt","223153":"Blade of The Ruined King","223156":"Maw of Malmortius","223157":"Zhonya's Hourglass","223158":"Ionian Boots of Lucidity","223161":"Spear of Shojin","223165":"Morellonomicon","223172":"Zephyr","223177":"Guardian's Blade","223181":"Hullbreaker","223184":"Guardian's Hammer","223185":"Guardian's Dirk","223190":"Locket of the Iron Solari","223193":"Gargoyle Stoneplate","223222":"Mikael's Blessing","223504":"Ardent Censer","223508":"Essence Reaver","223742":"Dead Man's Plate","223748":"Titanic Hydra","223814":"Edge of Night","224004":"Spectral Cutlass","224005":"Imperial Mandate","224401":"Force of Nature","224403":"The Golden Spatula","224628":"Horizon Focus","224629":"Cosmic Drive","224633":"Riftmaker","224636":"Night Harvester","224637":"Demonic Embrace","224644":"Crown of the Shattered Queen","224645":"Shadowflame","226035":"Silvermere Dawn","226333":"Death's Dance","226609":"Chempunk Chainsword","226616":"Staff of Flowing Water","226617":"Moonstone Renewer","226620":"Echoes of Helia","226630":"Goredrinker","226631":"Stridebreaker","226632":"Divine Sunderer","226653":"Liandry's Anguish","226655":"Luden's Tempest","226656":"Everfrost","226657":"Rod of Ages","226662":"Iceborn Gauntlet","226664":"Turbo Chemtank","226665":"Jak'Sho, The Protean","226667":"Radiant Virtue","226671":"Galeforce","226672":"Kraken Slayer","226673":"Immortal Shieldbow","226675":"Navori Quickblades","226676":"The Collector","226691":"Duskblade of Draktharr","226692":"Eclipse","226693":"Prowler's Claw","226694":"Serylda's Grudge","226695":"Serpent's Fang","226696":"Axiom Arc","227001":"Syzygy","227002":"Draktharr's Shadowcarver","227005":"Frozen Fist","227006":"Typhoon","227009":"Icathia's Curse","227010":"Vespertide","227011":"Upgraded Aeropack","227012":"Liandry's Lament","227013":"Force of Arms","227014":"Eternal Winter","227015":"Ceaseless Hunger","227016":"Dreamshatter","227017":"Deicide","227018":"Infinity Force","227019":"Reliquary of the Golden Dawn","227020":"Shurelya's Requiem","227021":"Starcaster","227023":"Equinox","227024":"Caesura","227025":"Leviathan","227026":"The Unspoken Parasite","227027":"Primordial Dawn","227028":"Infinite Convergence","227029":"Youmuu's Wake","227030":"Seething Sorrow","227031":"Edge of Finality","227032":"Flicker","227033":"Cry of the Shrieking City","228001":"Anathema's Chains","228002":"Wooglet's Witchcap","228003":"Deathblade","228004":"Adaptive Helm","228005":"Obsidian Cleaver","228006":"Sanguine Blade","228008":"Runeglaive","228020":"Abyssal Mask"}
   )";

   const std::string CHAMPSIONS_JSON = R"(
   {"Aatrox":"266","Ahri":"103","Akali":"84","Akshan":"166","Alistar":"12","Ambessa":"799","Amumu":"32","Anivia":"34","Annie":"1","Aphelios":"523","Ashe":"22","AurelionSol":"136","Aurora":"893","Azir":"268","Bard":"432","Belveth":"200","Blitzcrank":"53","Brand":"63","Braum":"201","Briar":"233","Caitlyn":"51","Camille":"164","Cassiopeia":"69","Chogath":"31","Corki":"42","Darius":"122","Diana":"131","Draven":"119","DrMundo":"36","Ekko":"245","Elise":"60","Evelynn":"28","Ezreal":"81","Fiddlesticks":"9","Fiora":"114","Fizz":"105","Galio":"3","Gangplank":"41","Garen":"86","Gnar":"150","Gragas":"79","Graves":"104","Gwen":"887","Hecarim":"120","Heimerdinger":"74","Hwei":"910","Illaoi":"420","Irelia":"39","Ivern":"427","Janna":"40","JarvanIV":"59","Jax":"24","Jayce":"126","Jhin":"202","Jinx":"222","Kaisa":"145","Kalista":"429","Karma":"43","Karthus":"30","Kassadin":"38","Katarina":"55","Kayle":"10","Kayn":"141","Kennen":"85","Khazix":"121","Kindred":"203","Kled":"240","KogMaw":"96","KSante":"897","Leblanc":"7","LeeSin":"64","Leona":"89","Lillia":"876","Lissandra":"127","Lucian":"236","Lulu":"117","Lux":"99","Malphite":"54","Malzahar":"90","Maokai":"57","MasterYi":"11","Milio":"902","MissFortune":"21","MonkeyKing":"62","Mordekaiser":"82","Morgana":"25","Naafiri":"950","Nami":"267","Nasus":"75","Nautilus":"111","Neeko":"518","Nidalee":"76","Nilah":"895","Nocturne":"56","Nunu":"20","Olaf":"2","Orianna":"61","Ornn":"516","Pantheon":"80","Poppy":"78","Pyke":"555","Qiyana":"246","Quinn":"133","Rakan":"497","Rammus":"33","RekSai":"421","Rell":"526","Renata":"888","Renekton":"58","Rengar":"107","Riven":"92","Rumble":"68","Ryze":"13","Samira":"360","Sejuani":"113","Senna":"235","Seraphine":"147","Sett":"875","Shaco":"35","Shen":"98","Shyvana":"102","Singed":"27","Sion":"14","Sivir":"15","Skarner":"72","Smolder":"901","Sona":"37","Soraka":"16","Swain":"50","Sylas":"517","Syndra":"134","TahmKench":"223","Taliyah":"163","Talon":"91","Taric":"44","Teemo":"17","Thresh":"412","Tristana":"18","Trundle":"48","Tryndamere":"23","TwistedFate":"4","Twitch":"29","Udyr":"77","Urgot":"6","Varus":"110","Vayne":"67","Veigar":"45","Velkoz":"161","Vex":"711","Vi":"254","Viego":"234","Viktor":"112","Vladimir":"8","Volibear":"106","Warwick":"19","Xayah":"498","Xerath":"101","XinZhao":"5","Yasuo":"157","Yone":"777","Yorick":"83","Yuumi":"350","Zac":"154","Zed":"238","Zeri":"221","Ziggs":"115","Zilean":"26","Zoe":"142","Zyra":"143"}
   )";

   const std::string OCEAN_PAYLOAD_TEMPLATE = R"(
   {
      "overrides":{
         "business_unit":{
            "name":"{PLACEHOLDER}"
         },
         "application":{
            "name":"{PLACEHOLDER}"
         },
         "project":{
            "name":"{PLACEHOLDER}"
         }
      }
   }
   )";

   const std::string SPORTS_CARS = R"(
   {
   "1": "Ferrari F8 Tributo",
   "2": "Lamborghini Huracán",
   "3": "Porsche 911 Turbo S",
   "4": "McLaren 720S",
   "5": "Chevrolet Corvette Stingray",
   "6": "Ford Mustang Shelby GT500",
   "7": "Audi R8 V10 Performance",
   "8": "Nissan GT-R Nismo",
   "9": "Dodge Viper ACR",
   "10": "Aston Martin Vantage",
   "11": "BMW M8 Competition",
   "12": "Mercedes-AMG GT R",
   "13": "Jaguar F-Type R",
   "14": "Alfa Romeo 4C Spider",
   "15": "Lotus Evora GT",
   "16": "Maserati GranTurismo",
   "17": "Toyota Supra GR",
   "18": "Acura NSX",
   "19": "Koenigsegg Jesko",
   "20": "Pagani Huayra",
   "21": "Bugatti Chiron",
   "22": "Tesla Roadster",
   "23": "Ferrari SF90 Stradale",
   "24": "Lamborghini Aventador SVJ",
   "25": "Porsche 718 Cayman GT4",
   "26": "Chevrolet Camaro ZL1",
   "27": "Ford GT",
   "28": "McLaren Artura",
   "29": "Ariel Atom",
   "30": "KTM X-Bow",
   "31": "Shelby Cobra",
   "32": "BMW Z4 M40i",
   "33": "Mercedes-Benz SL-Class",
   "34": "Aston Martin DB11",
   "35": "Lexus LC 500",
   "36": "Hyundai N Vision 74",
   "37": "Alpine A110",
   "38": "Rimac Nevera",
   "39": "Hennessey Venom F5",
   "40": "Saleen S7",
   "41": "SSC Tuatara",
   "42": "Gordon Murray T.50",
   "43": "De Tomaso P72",
   "44": "Rezvani Beast",
   "45": "Ferrari Portofino M",
   "46": "Lamborghini Urus Performante",
   "47": "Porsche Taycan Turbo S",
   "48": "McLaren Senna",
   "49": "Chevrolet Corvette Z06",
   "50": "Ford Mustang Mach 1",
   "51": "Audi RS5 Coupe",
   "52": "Nissan 370Z Nismo",
   "53": "Dodge Challenger SRT Hellcat",
   "54": "Aston Martin Valhalla",
   "55": "BMW i8",
   "56": "Mercedes-AMG One",
   "57": "Jaguar XK",
   "58": "Pagani Zonda",
   "59": "Bugatti Veyron",
   "60": "Ferrari 488 Pista",
   "61": "Lamborghini Gallardo",
   "62": "Porsche Carrera GT",
   "63": "McLaren P1",
   "64": "Chevrolet Corvette C7",
   "65": "Ford Shelby GT350",
   "66": "Audi TT RS",
   "67": "Nissan Silvia S15",
   "68": "Dodge Demon",
   "69": "Aston Martin DBS Superleggera",
   "70": "Lotus Elise",
   "71": "Lexus RC F",
   "72": "Hyundai Veloster N",
   "73": "Alfa Romeo Giulia Quadrifoglio",
   "74": "Maserati MC20",
   "75": "Toyota MR2",
   "76": "Acura Integra Type R",
   "77": "Koenigsegg Regera",
   "78": "Ferrari Enzo",
   "79": "Lamborghini Diablo",
   "80": "Porsche Boxster Spyder",
   "81": "McLaren F1",
   "82": "Chevrolet Camaro SS",
   "83": "Ford Falcon GT",
   "84": "Audi S5",
   "85": "Nissan Skyline GT-R R34",
   "86": "Dodge Charger Daytona",
   "87": "Aston Martin Virage",
   "88": "BMW M4",
   "89": "Mercedes-Benz CLK GTR",
   "90": "Jaguar E-Type",
   "91": "Pagani Imola",
   "92": "Bugatti Divo",
   "93": "Ferrari LaFerrari",
   "94": "Lamborghini Sian",
   "95": "Porsche Panamera Turbo S",
   "96": "McLaren 765LT",
   "97": "Tesla Model S Plaid",
   "98": "Chevrolet Corvette C8",
   "99": "Ford Escort RS Cosworth"
   }
   )";

   const std::string MATCH_TEMPLATE_JSON_MINIFIED = R"(
   {"metadata":{"matchId":"NA1_5145792127","participants":["KOoUw3saDj7oRcxBRg-TcfhZAljqeKxx-2TiWXCeL2GnAJv96FNrPuyk-wCfqaoaIB-7UDloBYPjKA","BmvxukXtM3Hibb35XTFiCSXermhSls_NpAU6dEanq8gl3Rkv_PLTfNRVhXoI9Wtz-aPuJJHd-6ZIcw","zyC8IZTyqys09axqJ_asCHm4ixeibmB0Na1M7oAZsc5gfcxNybKdEG-uXN5CyE0kvMgWxkeuiX8MBA","HgWwc6_3QYsDbqi4TmEMdhscy7MDTAIr2iBEoh8Nn-HkqHhe1PZDh442GuUNa6ipV8dqgJUNN2KlpQ","NxMkIOXNd6R9yw5mBYDmtOKtezuncNbk47wzjiJM4ceMT9vl2zcdFJA_mju-vUJzG4lrTvGv8Jvluw","P3yk6p4CAkgEmj95_z8HcSOE2Gr28GYvhvCKMsnwiBClMpeColdNiqNft1lbf48wLBHVi175fVIGLg","gy9yJBWgXHveXQrfIAZavHOVN1P43hiRsEvSupkk-5yQ2ama8KE7sxRz80vZ8hFsbzy4UTabeqHBHQ","guoyUTvltKgL6GeWftdxiO9Deh8tJqKsR-2dqNaEV5gY94bbUZokCI1OgFaTOT80JZLzU4r4MdXF9Q","8WERYNXBBwjVwzE38uWj4ugodnsaluWcAaHazqVkN04_HJtCrUHrb0AfhSs7FaDDJGJG1vriwQdNOA","LepPib_UQAs0c13EQVzX5Gpp1FkPkEUSkyDAewvqCogtj5wbv2Sa6oz4xb_vzPoGbtSDCVtizRQcVQ"]},"info":{"gameCreation":1730593150712,"gameDuration":1339,"gameEndTimestamp":1730594505293,"gameVersion":"14.21.630.3012","gameId":5145792127,"participants":[{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":100,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":100,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":100,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":100,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":100,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":200,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":200,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":200,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":200,"visionScore":5},{"assists":5,"champExperience":1200,"champLevel":10,"championId":1,"championName":"ExampleChampion","deaths":3,"goldEarned":5000,"item0":1001,"item1":1029,"item2":1033,"item3":1051,"item4":1052,"item5":1053,"item6":3364,"kills":2,"perks":{"styles":[{"selections":[{"perk":8100}]},{"style":8200}]},"riotIdGameName":"SummonerName","riotIdTagline":"NA","summoner1Id":4,"totalMinionsKilled":150,"neutralMinionsKilled":134,"totalAllyJungleMinionsKilled":10,"totalEnemyJungleMinionsKilled":15,"summoner2Id":7,"summonerName":"ExampleSummoner","totalDamageDealtToChampions":15000,"win":true,"teamId":200,"visionScore":5}]}}
   )";

}