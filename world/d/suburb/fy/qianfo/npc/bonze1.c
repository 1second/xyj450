// 
// 

inherit NPC;
void create()
{
        set_name("����", ({ "fengqing" }) );
        set("gender", "����" );
        set("class", "bonze");
	set("title","�˹����·��ֱ���ʦ");
        set("age", random(40)+20);
        set("cor", 24);
        set("cps", 29);
        set("int", 25);
        set("long", "�����˹����������������ķ��ֱ���ʦ\n");
        set("combat_exp", 6);
        set("attitude", "friendly");
        set("max_force", 500);
        set("force", 500);
        set("force_factor", 5);
        set("chat_chance", 1);
        set("chat_msg", ({
                "���忴�˿��Լ��Ķ��ȣ���Ц��һ�¡�\n",
        }) );
        set("inquiry", ([
                "����" : "�ҵ������ڻ����б�һ�����ĵ����ϵġ�\n",
                "leg" : "�ҵ������ڻ����б�һ�����ĵ����ϵġ�\n",
	]));
        setup();
        carry_object(__DIR__"obj/monk_cloth")->wear();
        carry_object(__DIR__"obj/shoe2")->wear();
}
int accept_fight(object me)
{
        command("say �����ӷ�ƶɮ�书��΢��ʩ����Ҫ��������Ц��\n");
        return 0;
}