// 
// 

#include <armor.h>
inherit CLOTH;
void create()
{
        set_name("�߲�˿�д�", ({ "silk" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
		set("long","�����߲�˿�д���������������ֹ�ã��һ�����ǲ���֮Ʒ��\n");
                set("material", "cloth");
		set("realsilk",1);
		set("value",50000);
                set("armor_prop/armor", 5);
                set("armor_prop/dodge", 5);
		set("armor_prop/spirituality",3);
        }
        setup();
}
