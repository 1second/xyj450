// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// lumber_axe.c

#include <weapon.h>

inherit AXE;

void create()
{
        set_name("����", ({ "lumber axe", "axe" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long", "����һ�����ص���������������\n");
                set("value", 200);
                set("wield_msg",
"$N�ó�һ�ѿ����õ�$n���������е���������\n");
                set("unwield_msg", "$N�������е�$n��\n");
        }
        init_axe(15, TWO_HANDED);
        setup();
}
