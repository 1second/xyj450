// 
// 

inherit NPC;
void create()
{
	set_name("������ĵ�ͷ��", ({ "gangster" }) );
	set("gender", "����" );
	set("age", 27);
	set("long", "�������ר���ڳ���������ҵ�����ط��ߵġ�\n");
	set("combat_exp", 1000);
	set("str", 27);
	set("force", 30);
	set("leave_msg", "���տ���");
	set("max_force", 30);
	set("force_factor", 1);
	setup();
	set("chat_chance", 10);
	set("chat_msg", ({
		"������ĵ�ͷ�ߺȵ������Ӿ��ǿ��㲻˳�ۣ�����ô�ţ�\n",
		(: random_move :)
	}) );
	carry_object("/obj/cloth")->wear();
	add_money("silver", 5);
}
