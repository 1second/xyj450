// 
// 

#include <weapon.h>
inherit STAFF;
void create()
{
	set_name("��ɳ����", ({ "staff" }) );
	set_weight(40000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 500);
		set("material", "stone");
		set("long", "һ������������\n");
		set("weapon_prop/karma",3);
	}
	init_staff(5);
	setup();
}
