// 
// 

#include <weapon.h>
inherit BLADE;
void create()
{
	set_name("��߸��", ({ "blade" }) );
	set_weight(40000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 500);
		set("material", "stone");
		set("long", "һ�Ѽ�����ʯ����\n");
		set("weapon_prop/courage",3);
	}
	init_blade(5);
	setup();
}
