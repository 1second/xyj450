// 
// 

inherit NPC;
void create()
{
	set_name("�����С����", ({ "fishbuyer" }) );
	set("gender", "Ů��" );
	set("age", 15);
	set("combat_exp", 5);
	set("attitude", "friendly");
	set("per",20);
        set("chat_chance", 15);
        set("chat_msg", ({
                "�����С�����ʵ���������ô����\n",
                "�����С�����������һ����������\n",
        }) );

	setup();
	carry_object("/obj/cloth")->wear();
}
