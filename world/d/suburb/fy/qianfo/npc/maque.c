// 
// 

inherit NPC;
void create()
{
	set_name("����С��ȸ", ({ "maque", "que" }) );
	set("race", "Ұ��");
	set("gender", "����");
	set("age", 3);
	set("long", "����һֻ����С��ȸ\n");
	set("attitude", "peaceful");
	set("limbs", ({ "ͷ��", "����", "���", "�ҽ�", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
        set("chat_chance", 1);
        set("chat_msg", ({
"С��ȸ��ߴ����ߴߴ���������˼���\n",
        }) );
	set_temp("apply/attack", 60);
	set_temp("apply/armor", 40);
	set_temp("apply/dodge",40);
	setup();
}
