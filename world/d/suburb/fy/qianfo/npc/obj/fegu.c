// 
// 

#include <weapon.h>
inherit HAMMER;
void create()
{
	set_name("ͭ���", ({ "fegu" }) );
	set_weight(40000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 500);
		set("material", "wood");
		set("long", "һ���̰߰ߵ�ͭ���\n");
		set("weapon_prop/karma",1);
	}
	init_hammer(5);
	setup();
}
