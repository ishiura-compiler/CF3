#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x14 = UINT64_MAX;
volatile int32_t x18 = -3399;
volatile int16_t x38 = -1;
uint8_t x40 = 74U;
int8_t x41 = INT8_MIN;
uint8_t x53 = UINT8_MAX;
uint16_t x64 = UINT16_MAX;
volatile int64_t t6 = 3900LL;
static int64_t x77 = 1782669907295110LL;
uint32_t x124 = 184087U;
int64_t x131 = INT64_MIN;
int16_t x132 = 11475;
int64_t t17 = 3LL;
int64_t x178 = INT64_MIN;
int32_t x190 = INT32_MIN;
int32_t x245 = INT32_MIN;
static uint64_t x272 = 45LLU;
int64_t x282 = -1919705339LL;
int32_t x296 = -1;
volatile uint64_t x297 = 6LLU;
volatile int8_t x298 = -1;
volatile int64_t x341 = INT64_MAX;
uint64_t x342 = UINT64_MAX;
int64_t x350 = 99113172LL;
int16_t x373 = INT16_MIN;
uint8_t x378 = 0U;
int64_t t35 = -21229564493222385LL;
uint64_t x389 = 470871556053LLU;
uint8_t x399 = UINT8_MAX;
uint8_t x400 = UINT8_MAX;
static uint16_t x408 = 41U;
uint8_t x424 = 4U;
int8_t x428 = -1;
int32_t x433 = INT32_MIN;
volatile uint64_t t44 = 272752421232LLU;
static uint8_t x439 = UINT8_MAX;
static int8_t x444 = INT8_MIN;
volatile int16_t x453 = -1;
int16_t x455 = INT16_MIN;
int64_t t48 = -10525089662922LL;
int16_t x464 = -111;
int64_t t49 = -5451211179893579LL;
int64_t x479 = 1233473145LL;
volatile int8_t x483 = INT8_MIN;
uint64_t t53 = 1787647LLU;
volatile int64_t x529 = -3719770248LL;
int64_t x540 = 1558327034LL;
static volatile uint64_t t59 = 2825561222697201055LLU;
uint64_t x562 = UINT64_MAX;
uint8_t x568 = 5U;
static uint64_t t61 = 40315654539LLU;
int8_t x570 = INT8_MIN;
int64_t x571 = 60940905LL;
static uint64_t x572 = 7454LLU;
int8_t x573 = -1;
int32_t x575 = INT32_MAX;
int16_t x579 = INT16_MAX;
volatile uint32_t t65 = 1697232U;
static int8_t x610 = -1;
int64_t x611 = -722595243LL;
static int8_t x622 = -1;
int64_t x666 = -5LL;
static int8_t x689 = 1;
uint16_t x690 = 5584U;
int16_t x697 = INT16_MAX;
uint32_t x698 = 130952U;
static volatile uint64_t t77 = 4072LLU;
volatile uint64_t t79 = 349243731996LLU;
int64_t x745 = -1221854308LL;
uint64_t x746 = UINT64_MAX;
int16_t x752 = -1;
static volatile int64_t t81 = -1425003597305011220LL;
uint64_t x758 = UINT64_MAX;
static uint16_t x760 = 27510U;
int32_t x762 = INT32_MIN;
static int64_t x773 = INT64_MIN;
volatile int32_t x775 = 18473;
int64_t t86 = -1544296200LL;
static uint16_t x785 = 2U;
int8_t x793 = -1;
int8_t x797 = 1;
int32_t t91 = 0;
int64_t x845 = INT64_MIN;
volatile int64_t x855 = INT64_MIN;
static int32_t x856 = INT32_MIN;
int32_t t95 = -758350;
static int64_t x869 = INT64_MIN;
uint8_t x881 = UINT8_MAX;
volatile int32_t x882 = 14167549;
uint64_t x883 = UINT64_MAX;
uint64_t t98 = 138213679850711688LLU;
volatile int8_t x895 = INT8_MIN;


void f0(void) {
	int16_t x13 = -1;
	int64_t x15 = 96743713340224252LL;
	volatile uint64_t x16 = 31610673766LLU;
	uint64_t t0 = 1LLU;

	t0 = (x13+(x14%(x15/x16)));

	if (t0 != 1830066LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x17 = -1;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = 3562;
	uint64_t t1 = 834617LLU;

	t1 = (x17+(x18%(x19/x20)));

	if (t1 != 5178760267744374LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = -46226442;
	uint64_t x30 = 1505473365LLU;
	volatile int8_t x31 = 1;
	int8_t x32 = -1;
	uint64_t t2 = 1009519LLU;

	t2 = (x29+(x30%(x31/x32)));

	if (t2 != 1459246923LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x37 = -21415502163685874LL;
	int64_t x39 = INT64_MIN;
	int64_t t3 = -655LL;

	t3 = (x37+(x38%(x39/x40)));

	if (t3 != -21415502163685875LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x42 = 983624108178LLU;
	static int64_t x43 = INT64_MAX;
	static uint8_t x44 = 43U;
	static uint64_t t4 = 5844367767LLU;

	t4 = (x41+(x42%(x43/x44)));

	if (t4 != 983624108050LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 3U;
	uint8_t x56 = 2U;
	volatile int32_t t5 = 14748440;

	t5 = (x53+(x54%(x55/x56)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x61 = -1;
	uint32_t x62 = 32896141U;
	int64_t x63 = INT64_MAX;

	t6 = (x61+(x62%(x63/x64)));

	if (t6 != 32896140LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x65 = INT64_MIN;
	volatile int32_t x66 = -115;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x65+(x66%(x67/x68)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x78 = 6;
	uint64_t x79 = 17515699166509LLU;
	volatile uint16_t x80 = 465U;
	static volatile uint64_t t8 = 840450LLU;

	t8 = (x77+(x78%(x79/x80)));

	if (t8 != 1782669907295116LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x89 = 507673LL;
	uint32_t x90 = 5419822U;
	static volatile int32_t x91 = INT32_MIN;
	static volatile int8_t x92 = INT8_MIN;
	volatile int64_t t9 = 549254962539294808LL;

	t9 = (x89+(x90%(x91/x92)));

	if (t9 != 5927495LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x101 = 1U;
	int16_t x102 = 0;
	uint16_t x103 = 102U;
	uint8_t x104 = 3U;
	int32_t t10 = 229728182;

	t10 = (x101+(x102%(x103/x104)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x105 = 1567LLU;
	int32_t x106 = INT32_MIN;
	uint64_t x107 = 116504290LLU;
	static uint16_t x108 = 3U;
	static volatile uint64_t t11 = 28539050LLU;

	t11 = (x105+(x106%(x107/x108)));

	if (t11 != 35712234LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x113 = UINT8_MAX;
	uint32_t x114 = 41U;
	uint64_t x115 = 129701LLU;
	volatile int8_t x116 = 45;
	volatile uint64_t t12 = 5LLU;

	t12 = (x113+(x114%(x115/x116)));

	if (t12 != 296LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x121 = 1907U;
	volatile int8_t x122 = INT8_MIN;
	int8_t x123 = -28;
	volatile uint32_t t13 = 5U;

	t13 = (x121+(x122%(x123/x124)));

	if (t13 != 11947U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x129 = 4U;
	int32_t x130 = INT32_MIN;
	volatile int64_t t14 = -63LL;

	t14 = (x129+(x130%(x131/x132)));

	if (t14 != -2147483644LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MAX;
	volatile int64_t x135 = INT64_MIN;
	uint8_t x136 = UINT8_MAX;
	int64_t t15 = -16749313053327647LL;

	t15 = (x133+(x134%(x135/x136)));

	if (t15 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x145 = 21398839LL;
	static int8_t x146 = 57;
	int16_t x147 = -338;
	volatile uint64_t x148 = 455LLU;
	volatile uint64_t t16 = 88098577756LLU;

	t16 = (x145+(x146%(x147/x148)));

	if (t16 != 21398896LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x153 = 106U;
	static int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -1LL;

	t17 = (x153+(x154%(x155/x156)));

	if (t17 != 104LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x169 = INT16_MIN;
	int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	int64_t t18 = -227879118650859LL;

	t18 = (x169+(x170%(x171/x172)));

	if (t18 != 2147450879LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x177 = INT32_MAX;
	int16_t x179 = INT16_MIN;
	int8_t x180 = -1;
	volatile int64_t t19 = 9671LL;

	t19 = (x177+(x178%(x179/x180)));

	if (t19 != 2147483647LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x189 = -5589355843694060LL;
	static volatile int64_t x191 = 253972920988LL;
	int32_t x192 = 7208;
	static volatile int64_t t20 = 4233648765092336619LL;

	t20 = (x189+(x190%(x191/x192)));

	if (t20 != -5589355877085748LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x193 = INT16_MIN;
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = -1;
	volatile uint64_t x196 = 7997468604695LLU;
	static volatile uint64_t t21 = 28721258711955561LLU;

	t21 = (x193+(x194%(x195/x196)));

	if (t21 != 117139LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x201 = 114538855379LL;
	uint16_t x202 = 4U;
	static uint16_t x203 = UINT16_MAX;
	int32_t x204 = 14965;
	volatile int64_t t22 = -21334201794LL;

	t22 = (x201+(x202%(x203/x204)));

	if (t22 != 114538855379LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x246 = 1;
	static int32_t x247 = 3782;
	int8_t x248 = INT8_MAX;
	int32_t t23 = 25;

	t23 = (x245+(x246%(x247/x248)));

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x265 = INT64_MIN;
	volatile int64_t x266 = 28LL;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	volatile uint64_t t24 = 3988291LLU;

	t24 = (x265+(x266%(x267/x268)));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x269 = INT32_MIN;
	volatile int8_t x270 = 5;
	volatile int16_t x271 = INT16_MAX;
	static volatile uint64_t t25 = 33994722998033LLU;

	t25 = (x269+(x270%(x271/x272)));

	if (t25 != 18446744071562067973LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x281 = -24;
	static uint64_t x283 = 1818156344877448LLU;
	int64_t x284 = 57LL;
	uint64_t t26 = 1208732252729930LLU;

	t26 = (x281+(x282%(x283/x284)));

	if (t26 != 16873980911657LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x293 = INT32_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int32_t t27 = INT32_MAX;

	t27 = (x293+(x294%(x295/x296)));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x299 = -1;
	int8_t x300 = -1;
	uint64_t t28 = 708LLU;

	t28 = (x297+(x298%(x299/x300)));

	if (t28 != 6LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x301 = INT16_MIN;
	volatile uint8_t x302 = 7U;
	int32_t x303 = INT32_MAX;
	volatile int8_t x304 = INT8_MAX;
	volatile int32_t t29 = 48684;

	t29 = (x301+(x302%(x303/x304)));

	if (t29 != -32761) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x321 = INT64_MAX;
	volatile int16_t x322 = INT16_MIN;
	int64_t x323 = 3974213100LL;
	static int8_t x324 = -8;
	int64_t t30 = 26557LL;

	t30 = (x321+(x322%(x323/x324)));

	if (t30 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x343 = 7107U;
	uint64_t x344 = 1415LLU;
	uint64_t t31 = 20LLU;

	t31 = (x341+(x342%(x343/x344)));

	if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x345 = 1U;
	int16_t x346 = INT16_MAX;
	uint16_t x347 = UINT16_MAX;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t32 = -32593;

	t32 = (x345+(x346%(x347/x348)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x349 = INT16_MAX;
	uint32_t x351 = 745596181U;
	uint32_t x352 = 98U;
	int64_t t33 = 0LL;

	t33 = (x349+(x350%(x351/x352)));

	if (t33 != 240327LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x374 = INT16_MIN;
	uint16_t x375 = UINT16_MAX;
	volatile int8_t x376 = INT8_MAX;
	int32_t t34 = -521218828;

	t34 = (x373+(x374%(x375/x376)));

	if (t34 != -33028) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x377 = INT32_MAX;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;

	t35 = (x377+(x378%(x379/x380)));

	if (t35 != 2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x381 = 263656100295462273LL;
	volatile uint32_t x382 = 19U;
	volatile int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;
	volatile int64_t t36 = 885079371684686LL;

	t36 = (x381+(x382%(x383/x384)));

	if (t36 != 263656100295462292LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x390 = 1989;
	static int8_t x391 = INT8_MIN;
	volatile int8_t x392 = INT8_MIN;
	volatile uint64_t t37 = 161571436899LLU;

	t37 = (x389+(x390%(x391/x392)));

	if (t37 != 470871556053LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x397 = 2571686923LLU;
	int16_t x398 = INT16_MIN;
	uint64_t t38 = 21164161LLU;

	t38 = (x397+(x398%(x399/x400)));

	if (t38 != 2571686923LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x401 = INT64_MAX;
	volatile int32_t x402 = -1;
	static uint32_t x403 = 117557U;
	volatile int64_t x404 = 2385LL;
	static volatile int64_t t39 = 1204171LL;

	t39 = (x401+(x402%(x403/x404)));

	if (t39 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x405 = 9U;
	int16_t x406 = -1;
	static int32_t x407 = INT32_MIN;
	int32_t t40 = 399056;

	t40 = (x405+(x406%(x407/x408)));

	if (t40 != 8) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x417 = INT8_MIN;
	int32_t x418 = -1;
	volatile int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MIN;
	volatile int32_t t41 = 0;

	t41 = (x417+(x418%(x419/x420)));

	if (t41 != -129) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x421 = 695U;
	int16_t x422 = -1;
	int32_t x423 = INT32_MAX;
	volatile uint32_t t42 = 1381956160U;

	t42 = (x421+(x422%(x423/x424)));

	if (t42 != 694U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x425 = 8U;
	uint32_t x426 = 31U;
	int32_t x427 = INT32_MAX;
	uint32_t t43 = 79806U;

	t43 = (x425+(x426%(x427/x428)));

	if (t43 != 39U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x434 = 1U;
	int8_t x435 = -4;
	uint64_t x436 = 1927809070LLU;

	t44 = (x433+(x434%(x435/x436)));

	if (t44 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x437 = 51U;
	static uint64_t x438 = UINT64_MAX;
	int64_t x440 = -5LL;
	static uint64_t t45 = 88817050LLU;

	t45 = (x437+(x438%(x439/x440)));

	if (t45 != 101LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x441 = INT32_MIN;
	uint16_t x442 = UINT16_MAX;
	volatile int64_t x443 = INT64_MIN;
	int64_t t46 = -16317550940LL;

	t46 = (x441+(x442%(x443/x444)));

	if (t46 != -2147418113LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x449 = 504;
	int64_t x450 = 290822593766LL;
	volatile uint32_t x451 = 1921371785U;
	volatile int16_t x452 = INT16_MAX;
	int64_t t47 = -128483341148828LL;

	t47 = (x449+(x450%(x451/x452)));

	if (t47 != 20363LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x454 = -1LL;
	uint32_t x456 = 433860U;

	t48 = (x453+(x454%(x455/x456)));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x461 = INT64_MIN;
	uint16_t x462 = 222U;
	volatile int64_t x463 = -14981889673192249LL;

	t49 = (x461+(x462%(x463/x464)));

	if (t49 != -9223372036854775586LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x465 = 25U;
	uint16_t x466 = 5U;
	uint64_t x467 = 333399507467185LLU;
	uint16_t x468 = 106U;
	uint64_t t50 = 3799798678080081876LLU;

	t50 = (x465+(x466%(x467/x468)));

	if (t50 != 30LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x469 = 3266;
	int8_t x470 = INT8_MIN;
	static uint32_t x471 = UINT32_MAX;
	static int16_t x472 = -1;
	volatile uint32_t t51 = 2U;

	t51 = (x469+(x470%(x471/x472)));

	if (t51 != 3266U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x477 = 9U;
	int8_t x478 = -1;
	volatile uint16_t x480 = UINT16_MAX;
	int64_t t52 = -451LL;

	t52 = (x477+(x478%(x479/x480)));

	if (t52 != 8LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x481 = INT32_MIN;
	static uint64_t x482 = 763LLU;
	static uint64_t x484 = 10LLU;

	t53 = (x481+(x482%(x483/x484)));

	if (t53 != 18446744071562068731LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x489 = 3;
	static int16_t x490 = -13353;
	static int32_t x491 = INT32_MIN;
	static int32_t x492 = INT32_MIN;
	volatile int32_t t54 = 7;

	t54 = (x489+(x490%(x491/x492)));

	if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x497 = -59277LL;
	int64_t x498 = INT64_MIN;
	static volatile int64_t x499 = INT64_MIN;
	static volatile int32_t x500 = INT32_MIN;
	volatile int64_t t55 = -1339991672LL;

	t55 = (x497+(x498%(x499/x500)));

	if (t55 != -59277LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x505 = INT64_MAX;
	int16_t x506 = INT16_MIN;
	uint16_t x507 = 7747U;
	static uint16_t x508 = 117U;
	volatile int64_t t56 = -34553LL;

	t56 = (x505+(x506%(x507/x508)));

	if (t56 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x513 = 10U;
	int16_t x514 = INT16_MIN;
	uint16_t x515 = 27U;
	static int16_t x516 = 6;
	volatile int32_t t57 = -643764596;

	t57 = (x513+(x514%(x515/x516)));

	if (t57 != 10) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x530 = INT32_MIN;
	uint32_t x531 = 2U;
	static volatile int32_t x532 = 2;
	int64_t t58 = -7830356006439LL;

	t58 = (x529+(x530%(x531/x532)));

	if (t58 != -3719770248LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x537 = -3314952LL;
	volatile int8_t x538 = INT8_MAX;
	volatile uint64_t x539 = 224176008621LLU;

	t59 = (x537+(x538%(x539/x540)));

	if (t59 != 18446744073706236791LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x561 = INT32_MIN;
	volatile int16_t x563 = 758;
	int64_t x564 = -62LL;
	uint64_t t60 = 499117995LLU;

	t60 = (x561+(x562%(x563/x564)));

	if (t60 != 18446744071562067979LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x565 = 949069729911LLU;
	int64_t x566 = INT64_MIN;
	uint16_t x567 = 1438U;

	t61 = (x565+(x566%(x567/x568)));

	if (t61 != 949069729903LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x569 = 42U;
	static volatile uint64_t t62 = 502733611248298LLU;

	t62 = (x569+(x570%(x571/x572)));

	if (t62 != 2705LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x574 = UINT8_MAX;
	int16_t x576 = 16;
	int32_t t63 = 28926055;

	t63 = (x573+(x574%(x575/x576)));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x577 = 1944U;
	int32_t x578 = -193366;
	uint32_t x580 = 6U;
	static uint32_t t64 = 10587U;

	t64 = (x577+(x578%(x579/x580)));

	if (t64 != 5190U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x593 = 706;
	volatile int32_t x594 = -85234429;
	int16_t x595 = -1;
	uint32_t x596 = UINT32_MAX;

	t65 = (x593+(x594%(x595/x596)));

	if (t65 != 706U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x597 = -1;
	int64_t x598 = INT64_MIN;
	static uint16_t x599 = 2U;
	static int8_t x600 = -2;
	volatile int64_t t66 = 32834791978340927LL;

	t66 = (x597+(x598%(x599/x600)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x601 = INT32_MIN;
	int32_t x602 = -1;
	static uint32_t x603 = UINT32_MAX;
	int8_t x604 = INT8_MIN;
	volatile uint32_t t67 = 627U;

	t67 = (x601+(x602%(x603/x604)));

	if (t67 != 2147483648U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x609 = 32U;
	int32_t x612 = 14;
	int64_t t68 = 8341321LL;

	t68 = (x609+(x610%(x611/x612)));

	if (t68 != 31LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x621 = INT32_MIN;
	int64_t x623 = 11624892244LL;
	int8_t x624 = INT8_MAX;
	int64_t t69 = -3835884LL;

	t69 = (x621+(x622%(x623/x624)));

	if (t69 != -2147483649LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x625 = INT64_MAX;
	volatile uint64_t x626 = 6957816409374909421LLU;
	int32_t x627 = -5220067;
	int8_t x628 = INT8_MAX;
	uint64_t t70 = 1343425951361335869LLU;

	t70 = (x625+(x626%(x627/x628)));

	if (t70 != 16181188446229685228LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x629 = 37U;
	int32_t x630 = INT32_MIN;
	static int16_t x631 = INT16_MAX;
	static uint8_t x632 = 12U;
	static int32_t t71 = -37;

	t71 = (x629+(x630%(x631/x632)));

	if (t71 != -91) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x633 = UINT16_MAX;
	volatile uint16_t x634 = 99U;
	int64_t x635 = INT64_MIN;
	static int8_t x636 = INT8_MIN;
	int64_t t72 = 43811435741865469LL;

	t72 = (x633+(x634%(x635/x636)));

	if (t72 != 65634LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x665 = -1LL;
	int64_t x667 = INT64_MAX;
	volatile uint32_t x668 = UINT32_MAX;
	static int64_t t73 = -21LL;

	t73 = (x665+(x666%(x667/x668)));

	if (t73 != -6LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x673 = UINT16_MAX;
	int64_t x674 = -7594659285LL;
	int16_t x675 = INT16_MAX;
	static volatile uint64_t x676 = 10426LLU;
	volatile uint64_t t74 = 1895849676LLU;

	t74 = (x673+(x674%(x675/x676)));

	if (t74 != 65536LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x691 = 122817361564567183LLU;
	static uint32_t x692 = 1035088465U;
	uint64_t t75 = 862111560691077048LLU;

	t75 = (x689+(x690%(x691/x692)));

	if (t75 != 5585LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x699 = INT64_MIN;
	int64_t x700 = -130416928744844678LL;
	int64_t t76 = 10136LL;

	t76 = (x697+(x698%(x699/x700)));

	if (t76 != 32819LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x701 = 661114736LLU;
	int8_t x702 = INT8_MIN;
	static int8_t x703 = INT8_MIN;
	int16_t x704 = -26;

	t77 = (x701+(x702%(x703/x704)));

	if (t77 != 661114736LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x705 = 1;
	int64_t x706 = -36226040057074LL;
	int64_t x707 = 44821694LL;
	int16_t x708 = INT16_MIN;
	volatile int64_t t78 = -109947033811746778LL;

	t78 = (x705+(x706%(x707/x708)));

	if (t78 != -484LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x713 = -1;
	volatile uint64_t x714 = 123991371293LLU;
	int16_t x715 = 1934;
	uint64_t x716 = 13LLU;

	t79 = (x713+(x714%(x715/x716)));

	if (t79 != 112LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x747 = INT64_MIN;
	int32_t x748 = INT32_MIN;
	static uint64_t t80 = 56LLU;

	t80 = (x745+(x746%(x747/x748)));

	if (t80 != 3073112987LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x749 = 3;
	int64_t x750 = INT64_MIN;
	uint16_t x751 = 6136U;

	t81 = (x749+(x750%(x751/x752)));

	if (t81 != -3333LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x753 = INT8_MAX;
	static int8_t x754 = -39;
	static uint32_t x755 = UINT32_MAX;
	static volatile uint16_t x756 = UINT16_MAX;
	volatile uint32_t t82 = 16U;

	t82 = (x753+(x754%(x755/x756)));

	if (t82 != 65626U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x757 = INT16_MIN;
	volatile uint16_t x759 = UINT16_MAX;
	uint64_t t83 = 509834465097235465LLU;

	t83 = (x757+(x758%(x759/x760)));

	if (t83 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x761 = INT16_MAX;
	int32_t x763 = -61;
	uint16_t x764 = 25U;
	static volatile int32_t t84 = -63;

	t84 = (x761+(x762%(x763/x764)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x769 = 384U;
	static uint32_t x770 = UINT32_MAX;
	uint32_t x771 = 97551529U;
	volatile int16_t x772 = 28;
	volatile uint32_t t85 = 49U;

	t85 = (x769+(x770%(x771/x772)));

	if (t85 != 2700623U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x774 = 37U;
	static volatile int64_t x776 = -1LL;

	t86 = (x773+(x774%(x775/x776)));

	if (t86 != -9223372036854775771LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x786 = 20LLU;
	volatile int16_t x787 = 9;
	int64_t x788 = -1LL;
	uint64_t t87 = 5528811LLU;

	t87 = (x785+(x786%(x787/x788)));

	if (t87 != 22LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x794 = 6362081588134LL;
	int32_t x795 = INT32_MIN;
	int8_t x796 = INT8_MIN;
	int64_t t88 = -255834LL;

	t88 = (x793+(x794%(x795/x796)));

	if (t88 != 10285989LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x798 = -1LL;
	volatile int32_t x799 = INT32_MAX;
	uint16_t x800 = UINT16_MAX;
	volatile int64_t t89 = 3825371251281LL;

	t89 = (x797+(x798%(x799/x800)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x821 = 2;
	uint64_t x822 = 36402LLU;
	uint32_t x823 = 181221U;
	uint16_t x824 = UINT16_MAX;
	uint64_t t90 = 26580384320894654LLU;

	t90 = (x821+(x822%(x823/x824)));

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x833 = 0U;
	volatile int32_t x834 = INT32_MIN;
	int8_t x835 = INT8_MIN;
	int8_t x836 = INT8_MAX;

	t91 = (x833+(x834%(x835/x836)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x841 = 282U;
	volatile int8_t x842 = INT8_MAX;
	int16_t x843 = INT16_MIN;
	int8_t x844 = 45;
	volatile uint32_t t92 = 474U;

	t92 = (x841+(x842%(x843/x844)));

	if (t92 != 409U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x846 = UINT64_MAX;
	int8_t x847 = 30;
	int8_t x848 = -1;
	static uint64_t t93 = 4LLU;

	t93 = (x845+(x846%(x847/x848)));

	if (t93 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x853 = 1;
	uint8_t x854 = 9U;
	volatile int64_t t94 = 2270500363202LL;

	t94 = (x853+(x854%(x855/x856)));

	if (t94 != 10LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x861 = -23;
	int32_t x862 = INT32_MIN;
	uint16_t x863 = UINT16_MAX;
	int8_t x864 = -1;

	t95 = (x861+(x862%(x863/x864)));

	if (t95 != -32791) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x870 = INT32_MIN;
	static uint64_t x871 = 4320636837179037LLU;
	uint64_t x872 = 13470LLU;
	uint64_t t96 = 3511332132299LLU;

	t96 = (x869+(x870%(x871/x872)));

	if (t96 != 9223372041292601096LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x873 = -20558;
	uint64_t x874 = 5406738405616102760LLU;
	volatile int8_t x875 = INT8_MAX;
	static int64_t x876 = -1LL;
	volatile uint64_t t97 = 330326809LLU;

	t97 = (x873+(x874%(x875/x876)));

	if (t97 != 5406738405616082202LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x884 = UINT8_MAX;

	t98 = (x881+(x882%(x883/x884)));

	if (t98 != 14167804LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x893 = INT32_MIN;
	int32_t x894 = 244908445;
	uint32_t x896 = 1686U;
	uint32_t t99 = 6309029U;

	t99 = (x893+(x894%(x895/x896)));

	if (t99 != 2147838813U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

