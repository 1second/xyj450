// 
// 

inherit ITEM;
void create()
{
	set_name("���վ�", ({ "jinbook" }));
	set_weight(600);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long",
			"���ǲؾ����е�һ�����顣\n");
		set("value", 70);
		set("material", "wood");
		set("skill", ([
			"name": 		"force",	
			"exp_required":		1000,		
			"sen_cost":		30,	
			"difficulty":	20,	
			"max_skill":	70		
		]) );
	}
}
