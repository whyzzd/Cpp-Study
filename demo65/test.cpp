#include "test.h"
Q_GLOBAL_STATIC(Rule, rule)
#include<iostream>
Rule* Rule::instance()
{
	return rule;
}
void Rule::test()
{
	//todo
}