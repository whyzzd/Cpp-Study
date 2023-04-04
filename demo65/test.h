#pragma once
#include <QGlobalStatic>
#define RULE Rule::instance()
class Rule
{
public:
	Rule() {}
	virtual ~Rule() {}
public:
	static Rule* instance();
public:
	void test();
};