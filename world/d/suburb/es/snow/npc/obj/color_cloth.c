// color_cloth.c

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("�޺����", ({ "cloth cloth", "cloth" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("long",
			"һ�����ɫ��Ů���������������е����޵ù���\n");
		set("unit", "��");
		set("value", 500);
		set("material", "cloth");
		set("armor_prop/armor", 1);
		set("armor_prop/personality", 1);
		set("female_only", 1);
	}
	setup();
}
