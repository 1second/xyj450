// 
// 

inherit NPC;
void create()
{
        set_name("��ɽ��", ({ "climber" }) );
        set("gender", "����" );
        set("age", 52);
        set("long", "һ���۵ò����˵ĵ�ɽ�ߣ�����Ъ�ţ�\n");
        set("combat_exp", 600);
        set("attitude", "friendly");
        set_skill("unarmed", 50);
        setup();
        carry_object("/obj/cloth")->wear();
}

int accept_fight(object me)
{
        command("say ���ž��أ����ɷ�����\n");
        return 0;
}
