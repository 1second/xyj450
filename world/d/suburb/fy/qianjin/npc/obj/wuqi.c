// hammer.c

#include <weapon.h>

inherit DAGGER;

void create()
{
        set_name("�������", ({ "wuqi" }) );
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ�Ѻ������\n");
                set("value", 3);
                set("material", "stone");
                set("wield_msg", "$N�ó�һ��$n���������С�\n");
                set("unwield_msg", "$N�������е�$n��\n");
        }

        init_dagger(5);
        setup();
}