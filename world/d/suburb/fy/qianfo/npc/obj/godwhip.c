// 
// 

#include <weapon.h>
inherit WHIP;
void create()
{
	set_name("�������", ({ "whip" }) );
	set_weight(40000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 500);
		set("material", "stone");
		set("long", "һ�Ѽ����ĳ�����\n");
		set("weapon_prop/constitution",1);
	}
	init_whip(5);
	setup();
}
