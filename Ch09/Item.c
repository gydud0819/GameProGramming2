#include "Item.h"

char itemImage[STAGE_COL2][STAGE_ROW2+1] =
{
	"@@@@@@;@@@",
	"@@@@~~*@@@",	
	"@@@~!!!@@@",
	"@-- !-.;;@",
	"@- .   .;@",
	"@- ..  .*@",
	"@;......*@",
	"@!;....!=@",
	"@@*----*@@",
	"@@@*;;*@@@",

};

void SetItem(Item* itemptr, int index2)
{
	switch (index2)
	{
	case 1:
		itemptr->itemName = "황금사과";
		itemptr->itemImage = itemImage;
		itemptr->itemStat = "허기 + 4, 포만감 + 9.6";
		break;
	default:
		break;
	}
}

char CharImage[STAGE_COL3][STAGE_ROW3 + 1] =
{

"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@$=$@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@$!~!@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@$!~-~!@@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@$@$:---~:$@@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@;*$:~---~~;#@@@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@;~:;~~~~~~-~:!#@@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@!~-~~-----~~~~~-!@@@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@#:~-~~-~-~--~~~~~-::!$@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@!~~~~-~~-~-~-~~~~~~~~~*@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@;~~~~~~--~~~~~~~~-~~~-~*@@@@@@@@@@@@@@",
"@@@@@@@@@@@$:-~~~~~~~-~~-~-~~~~~-~-~@@@@@@@@@@@@@@",
"@@@@@@@@@@@=~--~--~~~-~~~~~~-~~~-~~~@@@@@@@@@@@@@@",
"@@@@@@@@@$@=:-----~~~~~:-~~-~-~~-~~~#@@@@@@@@@@@@@",
"@@@@@@@@@!:!:~~--~~--~-~~--~~~~~--:~;@@@@@@@@@@@@@",
"@@@@@@@@@=-~~~:~~-----~-,~~~~~~~~:~-~@@@@@@@@@@@@@",
"@@@@@@@@@$~~~~-~~~~~--~-..,~-.,~-~~-:@@@@@@@@@@@@@",
"@@@@@@@@@$:~-~-~~~:-,,--.,,.-.,-.--~;@@@@@@@@@@@@@",
"@@@@@@@@@=-~~~~~~--,.....~~,,....~~= @@@@@@@@@@@@@",
"@@@@@@@@@*,~~~~~- .......:*; ~....-*@@@@@@@@@@@@@@",
"@@@@@@!:==. - ~~--.  .... ~*: ....:#@@@@@@@@@@@@@@",
"@@@@@@# ,. ~~~~~..    .  .; ,.   .;#@@@@@@@@@@@@@@",
"@@@@@@@~..~~- :!...,...   .......*@@@@@@@@@@@@@@@@",
"@@@@@@@@~..-;~:!,..,; !; ... !!-.,*@@@@@@@@@@@@@@@",
"@@@@@@@@#;:~,:-;=:..-: ~... ~: -.:$@@@@@@@@@@@@@@@",
"@@@@@@@@@#$$;!!;=*~.. ,, ....,,.~=@@@@@@@@@@@@@@@@",
"@@@@@@@@@$$=!*!!*=*-.....,.,...~*=#@@@@@@@@@@@@@@@",
"@@@@@@@@@*;;;;!!!!!*-......-!!::;=@@@@@@@@@@@@@@@@",
"@@@@@@@@!:;;:::*!:!;;;!!!;;:::;!*@@@@@@@@@@@@@@@@@",
"@@@@@@@#:;;::;;*..:!;~;;:::;;!;!#@@@@@@@@@@@@@@@@@",
"@@@@@@@=;;::!==*-.-*; ,;:::::!*$@@#####@@@@@@@@@@@",
"@@@@@@@#;;:;$#==*~.:;  ~:;;!~:$$$=*****=$@@@@@@@@@",
"@@@@@@@@!::*@@#$=!-.~~,~!;*,,$*!!!!!!!*!!**= @@@@@",
"@@@@$$@@=::=@@@#==:,.!.~$#$*.,*~-,,,,--~:::~:$@@@@",
"@@#;~~;@#!:!*!:~,.;!*!.:=#@!.,$!;;;;*;::::;$$@@@@@",
"@@$;;;-;#$;!=@@@@#===~.-=;~;.-$!!*=@@#!!!!;=@@@@@@",
"@@@@@@;~$@=;!*=$##$==~-.,--;.-$**#@#=;::;;:*@@@@@@",
"@@@@@@#:;$$*!!!!****!;~,.~::.-$$@@#!;;;=!::=@@@@@@",
"@@@@@@@*:~!=*!!!!!!!$$*!--=;.-=$$=;;-;*#$;:#@@@@@@",
"@@@@@@@@$!;:;;:::;;;!!!*~.;:.-*:::;;:;*##;!@@@@@@@",
"@@@@@@@@@@=;;:~~~~~~~~~~-,,:.,!:!$$*!*#@@!#@@@@@@@",
"@@@@@@@@@@@######$=:;:;:::.,,,*#@@@@;=@@@#@@@@@@@@",
"@@@@@@@@@@@@@@@@@@$~.~#@@@~!; ~#@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@;,.$@@@@@-,,,:@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@#:.-#@@@@#; ..-=@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@=-.!@@@@@@;.  .:#@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@*~:$@@@@@@@!,.;;#@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@#$#@@@@@@@@@=;=@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@##@@@@@@@@@@@@@@@@@@",
"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@",

	

};
void SetCharacter(Character* characterptr, int index3)
{
	switch (index3)
	{
	case 1:
		characterptr->characterName = "바람궁수";
		characterptr->characterImage = CharImage;
		break;
	default:
		break;
	}
}
