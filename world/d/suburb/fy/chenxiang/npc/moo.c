// 
// 

inherit NPC;
void create()
{
	set_name("ĥ�˵���", ({ "moman" }) );
	set("gender", "����" );
	set("age", 47);
	set("long", "�������ר�Ű���ĥ���Ӻ��ϲ˵��ġ�\n");
	set("combat_exp", 10);
	set("str", 27);
	set("force", 30);
	set("max_force", 30);
	set("force_factor", 1);
	setup();
	set("chat_chance", 10);
	set("chat_msg", ({
		"ĥ�˵��ĸ���ߺ�ȵ���ĥ����ඡ��ϲ˵�������\n",
		(: random_move :)
	}) );
	carry_object("/obj/cloth")->wear();
	add_money("coin", 5);
}

int accept_object(object me, object obj)
{
	command("smile");
	command("say ��л��λ" + RANK_D->query_respect(me) + "��");
	return 1;
}

int accept_fight(object me)
{
	command("say " + RANK_D->query_respect(me) + "������С������뿪��\n");
	return 0;
}
