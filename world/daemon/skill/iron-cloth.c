// iron-cloth.c

inherit SKILL;
#include <ansi.h>
void skill_improved(object me)
{
        int s;

        s = me->query_skill("iron-cloth", 1);
        if( (int)me->query("fle") < s/5) {
                tell_object(me, HIW "����������������������������ˡ�\n" NOR);
                me->add("fle", 1);
        }
}
string *absorb_msg = ({
	"$n����׼�������Ų�æ��������������\n",
        "$n��Ŀ��������ȫ��������Ӳ���ﵽ�۷�״̬��\n",
        "$n���١���һ�������㲻��������������ӭ��$N��\n",
});

string query_absorb_msg()
{
	return absorb_msg[random(sizeof(absorb_msg))];
}

int learn_bonus()
{
	return 10;
}
int practice_bonus()
{
	return 0;
}
int black_white_ness()
{
	return 0;
}
