// sword.c

#include <ansi.h>

#include <weapon.h>

inherit SWORD;

void create()
{
        set_name( HIR "�佣����" NOR, ({ "sword" }) );
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
                        
"����һ����ľ��ɵĹŽ�����������һ����ζ�����������������δ��������\n"
                        "�ģ�ֻ�н���������������ϡ���Ա��ϵ�׭�֣��� �� �� 
��\n");
                set("value", 18000);
                set("material", "steel");
                set("wield_msg", "$N��ৡ���һ�����һ��$n�������С�\n");
                set("unequip_msg", "$N�����е�$n��������Ľ��ʡ�\n");
        }

        init_sword(44);
        setup();

        set("weapon_prop/spirituality", 30);
}

mixed hit_ob(object me, object victim, int damage_bonus)
{
        int damage;

        if( victim->is_ghost() ) {
                if( random(me->query("max_atman")) > 
(int)victim->query("atman")/2 ) {
                        damage = me->query_spi();
                        victim->receive_wound("gin", damage);
                        me->receive_heal("gin", damage);
                        me->receive_heal("kee", damage);
                        me->receive_heal("sen", damage);
                        return HIY 
"����������һ�ɽ�ɫ�����������$N��ȫ����\n" NOR;
                }
                return random(me->query_spi());
        }
}
 