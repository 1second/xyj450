// 
// 

#include <weapon.h>
inherit STAFF;
void create()
{
	set_name("������", ({ "qin" }) );
	set_weight(40000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("value", 500);
		set("material", "wood");
		set("long", "һ����ɫ����Ĺ�����\n");
		set("weapon_prop/karma",3);
	}
	init_staff(5);
	setup();
}
void init()
{
add_action("do_play","play");
}
int do_play()
{
	object me;
	me = this_player();
message_vision("$Nһ�������٣�����һ������ˮ������ӣ�\n",me);
me->set_temp("played_qin",1);
	return 1;
}
