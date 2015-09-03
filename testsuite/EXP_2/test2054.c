#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int64_t t0 = 87034330712922954LL;
static uint32_t x11 = 12762U;
int64_t x17 = -76LL;
int64_t x24 = -1LL;
volatile uint32_t x28 = 295976U;
static int32_t x35 = INT32_MAX;
int32_t x42 = INT32_MAX;
volatile int8_t x43 = 4;
int8_t x64 = INT8_MIN;
uint16_t x65 = UINT16_MAX;
int8_t x68 = INT8_MAX;
volatile uint32_t t14 = 742667577U;
int16_t x69 = -1;
int64_t x79 = -1LL;
volatile int64_t t17 = 342LL;
uint64_t x86 = UINT64_MAX;
volatile uint64_t t20 = 18991310610688689LLU;
uint64_t x103 = UINT64_MAX;
int32_t x104 = -518;
uint32_t x110 = 283118U;
uint32_t x112 = 1U;
uint32_t x119 = UINT32_MAX;
static int64_t t26 = -11526699309LL;
static volatile int64_t t28 = 785792963788673706LL;
int64_t t29 = -4LL;
static int64_t x135 = 3363978181LL;
int64_t t30 = 3044288LL;
volatile uint64_t t32 = 701901822042765557LLU;
volatile uint8_t x150 = 0U;
int64_t x151 = INT64_MIN;
static int32_t x156 = 778723;
static int16_t x157 = INT16_MIN;
uint64_t x168 = 4325842932875487728LLU;
volatile uint16_t x170 = UINT16_MAX;
uint64_t x174 = UINT64_MAX;
uint32_t t42 = 342125U;
volatile int8_t x185 = 1;
volatile int32_t t43 = -1714;
uint16_t x194 = 0U;
uint64_t x196 = 800265360635604LLU;
static int32_t x198 = INT32_MIN;
volatile uint64_t t46 = 5379321499472LLU;
int32_t x202 = -1;
int64_t x208 = INT64_MIN;
int64_t x218 = -1LL;
static uint32_t x219 = 62U;
volatile int32_t t52 = 0;
volatile int16_t x225 = INT16_MIN;
volatile int8_t x228 = INT8_MIN;
int8_t x229 = -1;
volatile int8_t x232 = INT8_MAX;
static int32_t x241 = 229719;
volatile uint8_t x246 = 2U;
uint64_t x254 = 173580LLU;
volatile int64_t t59 = 444747469LL;
static int64_t x262 = INT64_MIN;
int16_t x271 = -200;
volatile int32_t x280 = INT32_MIN;
uint32_t x285 = UINT32_MAX;
int16_t x287 = INT16_MAX;
int64_t x289 = 2013655466973976984LL;
static uint32_t x294 = 0U;
uint8_t x299 = 6U;
int32_t t67 = -1;
uint32_t x304 = UINT32_MAX;
int64_t x306 = INT64_MIN;
int16_t x307 = -1;
int16_t x308 = INT16_MIN;
static int64_t t69 = 2210274LL;
static uint64_t x311 = UINT64_MAX;
int32_t x321 = INT32_MIN;
int64_t x324 = INT64_MAX;
int64_t x325 = -1LL;
uint64_t x328 = 5451LLU;
uint64_t t74 = 1462LLU;
static int64_t x333 = -1LL;
uint16_t x336 = UINT16_MAX;
static int64_t x339 = 7190839967671307LL;
int8_t x341 = -2;
volatile uint32_t t78 = 366U;
static uint8_t x352 = 4U;
int32_t t80 = 82984;
int8_t x359 = -1;
static int16_t x366 = INT16_MIN;
uint8_t x367 = 26U;
int32_t x379 = -1;
uint16_t x380 = UINT16_MAX;
uint8_t x383 = 29U;
int32_t x387 = INT32_MIN;
static int8_t x399 = INT8_MAX;
uint64_t x400 = 7803354865121LLU;
int16_t x403 = 59;
int16_t x406 = INT16_MAX;
int16_t x407 = -184;
volatile uint32_t x411 = 37U;
int32_t x412 = -1;
volatile int64_t x424 = 1726943407LL;
uint8_t x426 = UINT8_MAX;
static uint64_t t98 = 68550374534263LLU;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int64_t x3 = -1LL;
	uint8_t x4 = 67U;

	t0 = ((x1-(x2^x3))^x4);

	if (t0 != -9223372036854710205LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 33236353U;
	static int16_t x6 = INT16_MAX;
	volatile int8_t x7 = INT8_MAX;
	static int16_t x8 = INT16_MIN;
	static volatile uint32_t t1 = 7419U;

	t1 = ((x5-(x6^x7))^x8);

	if (t1 != 4261750273U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	int16_t x10 = INT16_MIN;
	volatile int8_t x12 = 32;
	static volatile uint32_t t2 = 0U;

	t2 = ((x9-(x10^x11))^x12);

	if (t2 != 85509U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 6U;
	volatile int32_t x14 = INT32_MAX;
	uint64_t x15 = UINT64_MAX;
	volatile int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 31198LLU;

	t3 = ((x13-(x14^x15))^x16);

	if (t3 != 18446744071562035206LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x18 = 510773LLU;
	static int64_t x19 = INT64_MAX;
	volatile int32_t x20 = -1;
	static uint64_t t4 = 69991LLU;

	t4 = ((x17-(x18^x19))^x20);

	if (t4 != 9223372036854265109LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	volatile int64_t t5 = 213LL;

	t5 = ((x21-(x22^x23))^x24);

	if (t5 != 2147450878LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	volatile int8_t x26 = 0;
	int64_t x27 = -47973LL;
	int64_t t6 = 4259LL;

	t6 = ((x25-(x26^x27))^x28);

	if (t6 != 278350LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = -1;
	int64_t x34 = INT64_MAX;
	volatile int64_t x36 = INT64_MIN;
	volatile int64_t t7 = -121898516656859LL;

	t7 = ((x33-(x34^x35))^x36);

	if (t7 != 2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = 11305086258LLU;
	int64_t x38 = INT64_MIN;
	static uint16_t x39 = 3U;
	volatile int32_t x40 = -425533;
	volatile uint64_t t8 = 2716530526050799669LLU;

	t8 = ((x37-(x38^x39))^x40);

	if (t8 != 9223372025549843692LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = -3;
	volatile uint8_t x44 = 25U;
	int32_t t9 = 1;

	t9 = ((x41-(x42^x43))^x44);

	if (t9 != -2147483621) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 0;
	static uint64_t x50 = 0LLU;
	int16_t x51 = 23;
	static volatile uint16_t x52 = 3U;
	uint64_t t10 = 68771943500420LLU;

	t10 = ((x49-(x50^x51))^x52);

	if (t10 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 4217419098656LL;
	int64_t x54 = 7LL;
	uint32_t x55 = 1153U;
	uint32_t x56 = UINT32_MAX;
	int64_t t11 = 2270440360254457251LL;

	t11 = ((x53-(x54^x55))^x56);

	if (t11 != 4213601704549LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	volatile uint16_t x58 = 43U;
	int64_t x59 = 25896286414827662LL;
	uint32_t x60 = 1521814415U;
	volatile int64_t t12 = 2569129858LL;

	t12 = ((x57-(x58^x59))^x60);

	if (t12 != -25896289798781740LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 0U;
	int64_t x62 = -182317187710304LL;
	static uint8_t x63 = UINT8_MAX;
	static int64_t t13 = 3515220320LL;

	t13 = ((x61-(x62^x63))^x64);

	if (t13 != -182317187710431LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x66 = 22U;
	volatile uint32_t x67 = UINT32_MAX;

	t14 = ((x65-(x66^x67))^x68);

	if (t14 != 65641U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x70 = INT16_MAX;
	volatile int64_t x71 = 211120379986180LL;
	int32_t x72 = -1;
	volatile int64_t t15 = 2768982935911417LL;

	t15 = ((x69-(x70^x71))^x72);

	if (t15 != 211120380018427LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	static uint8_t x74 = 1U;
	volatile int64_t x75 = -1166230181871LL;
	volatile int8_t x76 = INT8_MAX;
	int64_t t16 = 235756668850198LL;

	t16 = ((x73-(x74^x75))^x76);

	if (t16 != 1166230149007LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 28086222804243195LL;
	int16_t x78 = 6;
	static int8_t x80 = INT8_MIN;

	t17 = ((x77-(x78^x79))^x80);

	if (t17 != -28086222804243326LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = INT16_MIN;
	uint8_t x87 = 1U;
	uint32_t x88 = 12112214U;
	uint64_t t18 = 1710LLU;

	t18 = ((x85-(x86^x87))^x88);

	if (t18 != 18446744073697448276LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	static uint32_t x90 = 1639989U;
	volatile int64_t x91 = -18LL;
	int8_t x92 = INT8_MAX;
	volatile uint64_t t19 = 217857404808873509LLU;

	t19 = ((x89-(x90^x91))^x92);

	if (t19 != 1640027LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	static int64_t x94 = -4052195LL;
	volatile uint64_t x95 = 0LLU;
	volatile int64_t x96 = -1LL;

	t20 = ((x93-(x94^x95))^x96);

	if (t20 != 18446744069410532125LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = 17687684483LL;
	static int32_t x98 = 22402;
	volatile int64_t x99 = -1LL;
	volatile int8_t x100 = INT8_MIN;
	volatile int64_t t21 = 45530490191121954LL;

	t21 = ((x97-(x98^x99))^x100);

	if (t21 != -17687707002LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = -29510LL;
	int32_t x102 = INT32_MAX;
	uint64_t t22 = 22914793099574484LLU;

	t22 = ((x101-(x102^x103))^x104);

	if (t22 != 18446744071562096960LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 3634290557LL;
	int64_t x106 = 321920793933LL;
	int64_t x107 = 0LL;
	int32_t x108 = INT32_MAX;
	volatile int64_t t23 = -912962337522118LL;

	t23 = ((x105-(x106^x107))^x108);

	if (t23 != -319516140081LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -431645408889838LL;
	static uint64_t x111 = UINT64_MAX;
	uint64_t t24 = 3381LLU;

	t24 = ((x109-(x110^x111))^x112);

	if (t24 != 18446312428300944896LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 0U;
	int64_t x114 = INT64_MIN;
	int64_t x115 = -801777707LL;
	int8_t x116 = 1;
	volatile int64_t t25 = -1481142635LL;

	t25 = ((x113-(x114^x115))^x116);

	if (t25 != -9223372036052998102LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	volatile int64_t x118 = -1LL;
	int16_t x120 = INT16_MIN;

	t26 = ((x117-(x118^x119))^x120);

	if (t26 != -4294934656LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 13520U;
	volatile int16_t x122 = -1;
	int32_t x123 = -1;
	static int32_t x124 = INT32_MAX;
	uint32_t t27 = 9U;

	t27 = ((x121-(x122^x123))^x124);

	if (t27 != 2147470127U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = -2;
	int64_t x126 = INT64_MIN;
	int8_t x127 = 4;
	int32_t x128 = 6256362;

	t28 = ((x125-(x126^x127))^x128);

	if (t28 != 9223372036848519440LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MAX;
	int64_t x132 = -1LL;

	t29 = ((x129-(x130^x131))^x132);

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x133 = UINT32_MAX;
	volatile int8_t x134 = INT8_MIN;
	int32_t x136 = INT32_MIN;

	t30 = ((x133-(x134^x135))^x136);

	if (t30 != -7373440070LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = INT16_MAX;
	static int32_t x139 = -589802;
	volatile uint8_t x140 = 98U;
	volatile int32_t t31 = -260403872;

	t31 = ((x137-(x138^x139))^x140);

	if (t31 != 557300) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	volatile uint16_t x142 = 9U;
	uint64_t x143 = 64095953265LLU;
	static uint8_t x144 = 2U;

	t32 = ((x141-(x142^x143))^x144);

	if (t32 != 18446744009613598218LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x145 = 21225605644LLU;
	volatile int32_t x146 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	volatile uint64_t x148 = 9759LLU;
	uint64_t t33 = 46151500LLU;

	t33 = ((x145-(x146^x147))^x148);

	if (t33 != 9223372060227873811LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x149 = INT32_MIN;
	uint16_t x152 = UINT16_MAX;
	static volatile int64_t t34 = 63758885056575LL;

	t34 = ((x149-(x150^x151))^x152);

	if (t34 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = 4406707888060LL;
	int16_t x154 = INT16_MAX;
	uint64_t x155 = UINT64_MAX;
	uint64_t t35 = 40111723LLU;

	t35 = ((x153-(x154^x155))^x156);

	if (t35 != 4406708371039LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x158 = INT32_MAX;
	uint32_t x159 = 20U;
	uint32_t x160 = 1U;
	uint32_t t36 = 19U;

	t36 = ((x157-(x158^x159))^x160);

	if (t36 != 2147450900U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = -1;
	int8_t x162 = INT8_MAX;
	int64_t x163 = 420722249461608LL;
	uint8_t x164 = UINT8_MAX;
	int64_t t37 = 20023LL;

	t37 = ((x161-(x162^x163))^x164);

	if (t37 != -420722249461737LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MIN;
	static uint64_t t38 = 113662053039LLU;

	t38 = ((x165-(x166^x167))^x168);

	if (t38 != 4897529103979276785LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x169 = 508U;
	int8_t x171 = INT8_MIN;
	int16_t x172 = -1;
	volatile int32_t t39 = 12;

	t39 = ((x169-(x170^x171))^x172);

	if (t39 != -65918) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	int8_t x175 = INT8_MAX;
	uint32_t x176 = 7U;
	uint64_t t40 = 5LLU;

	t40 = ((x173-(x174^x175))^x176);

	if (t40 != 7LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x177 = 6U;
	int64_t x178 = INT64_MIN;
	int64_t x179 = -90273382LL;
	int64_t x180 = INT64_MIN;
	int64_t t41 = 528698962LL;

	t41 = ((x177-(x178^x179))^x180);

	if (t41 != 90273388LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = INT32_MAX;
	static int16_t x182 = INT16_MIN;
	volatile int32_t x183 = INT32_MIN;
	uint32_t x184 = UINT32_MAX;

	t42 = ((x181-(x182^x183))^x184);

	if (t42 != 4294934528U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x186 = INT16_MIN;
	static uint16_t x187 = 466U;
	static int32_t x188 = 120;

	t43 = ((x185-(x186^x187))^x188);

	if (t43 != 32343) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 24U;
	uint64_t x190 = 284399770LLU;
	int8_t x191 = INT8_MIN;
	int16_t x192 = -1;
	uint64_t t44 = 15013679524LLU;

	t44 = ((x189-(x190^x191))^x192);

	if (t44 != 18446744073425151745LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1571470LL;
	static uint64_t x195 = 11330796166LLU;
	volatile uint64_t t45 = 1927178025831LLU;

	t45 = ((x193-(x194^x195))^x196);

	if (t45 != 18445943814196706360LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x197 = -1;
	static int16_t x199 = 1;
	static uint64_t x200 = UINT64_MAX;

	t46 = ((x197-(x198^x199))^x200);

	if (t46 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MAX;
	int16_t x203 = INT16_MIN;
	int64_t x204 = 4335725LL;
	int64_t t47 = 280657949262LL;

	t47 = ((x201-(x202^x203))^x204);

	if (t47 != 9223372036850428013LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x205 = INT32_MIN;
	int64_t x206 = -1LL;
	int32_t x207 = INT32_MIN;
	volatile int64_t t48 = -111884LL;

	t48 = ((x205-(x206^x207))^x208);

	if (t48 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = UINT8_MAX;
	int64_t x211 = -132685556737102LL;
	int32_t x212 = -34537;
	volatile int64_t t49 = -42012402LL;

	t49 = ((x209-(x210^x211))^x212);

	if (t49 != -132683409220188LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x213 = INT16_MAX;
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = -22568291;
	volatile int64_t x216 = -1LL;
	int64_t t50 = 61540LL;

	t50 = ((x213-(x214^x215))^x216);

	if (t50 != -22601118LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	static uint32_t x220 = 634802411U;
	int64_t t51 = -5LL;

	t51 = ((x217-(x218^x219))^x220);

	if (t51 != -634802348LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MAX;
	static int8_t x222 = 5;
	int8_t x223 = INT8_MAX;
	uint16_t x224 = 149U;

	t52 = ((x221-(x222^x223))^x224);

	if (t52 != 144) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = -1;
	int8_t x227 = -1;
	volatile int32_t t53 = -1025239812;

	t53 = ((x225-(x226^x227))^x228);

	if (t53 != 32640) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x230 = INT32_MIN;
	static int16_t x231 = INT16_MAX;
	int32_t t54 = 20232;

	t54 = ((x229-(x230^x231))^x232);

	if (t54 != 2147451007) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -45920921LL;
	static int16_t x238 = -1;
	uint8_t x239 = 3U;
	int16_t x240 = INT16_MAX;
	static volatile int64_t t55 = 0LL;

	t55 = ((x237-(x238^x239))^x240);

	if (t55 != -45927788LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x242 = -1;
	volatile int32_t x243 = INT32_MIN;
	int32_t x244 = -1;
	static volatile int32_t t56 = 3931;

	t56 = ((x241-(x242^x243))^x244);

	if (t56 != 2147253927) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 5U;
	int16_t x247 = INT16_MAX;
	int8_t x248 = -1;
	volatile uint32_t t57 = 241759663U;

	t57 = ((x245-(x246^x247))^x248);

	if (t57 != 32759U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MAX;
	int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t58 = 4488LLU;

	t58 = ((x253-(x254^x255))^x256);

	if (t58 != 18446744071562241548LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x257 = INT8_MIN;
	int32_t x258 = 1130;
	static volatile uint8_t x259 = UINT8_MAX;
	static int64_t x260 = INT64_MIN;

	t59 = ((x257-(x258^x259))^x260);

	if (t59 != 9223372036854774507LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x261 = 3U;
	volatile uint32_t x263 = 2705420U;
	volatile int64_t x264 = INT64_MAX;
	int64_t t60 = -532970LL;

	t60 = ((x261-(x262^x263))^x264);

	if (t60 != 2705416LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x269 = 0U;
	uint16_t x270 = UINT16_MAX;
	int16_t x272 = 465;
	int32_t t61 = 8535643;

	t61 = ((x269-(x270^x271))^x272);

	if (t61 != 65256) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int16_t x278 = 2;
	static int32_t x279 = INT32_MAX;
	static int32_t t62 = -280;

	t62 = ((x277-(x278^x279))^x280);

	if (t62 != 258) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MAX;
	static uint8_t x282 = 7U;
	volatile uint16_t x283 = 1U;
	int16_t x284 = -1;
	volatile int32_t t63 = 221;

	t63 = ((x281-(x282^x283))^x284);

	if (t63 != -2147483642) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x286 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	volatile int64_t t64 = 907114538030LL;

	t64 = ((x285-(x286^x287))^x288);

	if (t64 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x290 = -1LL;
	static int32_t x291 = INT32_MIN;
	int16_t x292 = INT16_MIN;
	int64_t t65 = 457421908LL;

	t65 = ((x289-(x290^x291))^x292);

	if (t65 != -2013655464826480231LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x293 = -108;
	volatile int8_t x295 = INT8_MIN;
	volatile int8_t x296 = 0;
	uint32_t t66 = 5589215U;

	t66 = ((x293-(x294^x295))^x296);

	if (t66 != 20U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x297 = 124U;
	int8_t x298 = -18;
	int32_t x300 = -134520656;

	t67 = ((x297-(x298^x299))^x300);

	if (t67 != -134520796) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	static int64_t x302 = INT64_MAX;
	static int16_t x303 = INT16_MAX;
	int64_t t68 = 546896986511486062LL;

	t68 = ((x301-(x302^x303))^x304);

	if (t68 != -9223372032559841153LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x305 = INT64_MAX;

	t69 = ((x305-(x306^x307))^x308);

	if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x309 = INT8_MIN;
	int16_t x310 = -472;
	static int8_t x312 = INT8_MIN;
	uint64_t t70 = 319543088064LLU;

	t70 = ((x309-(x310^x311))^x312);

	if (t70 != 553LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x313 = INT64_MIN;
	static uint8_t x314 = UINT8_MAX;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	int64_t t71 = -254151640LL;

	t71 = ((x313-(x314^x315))^x316);

	if (t71 != -9223372032559841026LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = 22287;
	int64_t x318 = -120LL;
	uint32_t x319 = UINT32_MAX;
	static uint8_t x320 = UINT8_MAX;
	static volatile int64_t t72 = -941940266698820447LL;

	t72 = ((x317-(x318^x319))^x320);

	if (t72 != 4294989415LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x322 = INT64_MAX;
	uint64_t x323 = 1LLU;
	uint64_t t73 = 65697633089795724LLU;

	t73 = ((x321-(x322^x323))^x324);

	if (t73 != 2147483645LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x326 = -37;
	static int8_t x327 = INT8_MAX;

	t74 = ((x325-(x326^x327))^x328);

	if (t74 != 5392LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x334 = -1;
	int64_t x335 = 22070920452LL;
	static volatile int64_t t75 = 1623465211295532002LL;

	t75 = ((x333-(x334^x335))^x336);

	if (t75 != 22070917883LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = -7233;
	uint64_t x338 = 54694934LLU;
	int16_t x340 = INT16_MIN;
	volatile uint64_t t76 = 1203LLU;

	t76 = ((x337-(x338^x339))^x340);

	if (t76 != 7190839980389282LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	volatile int64_t t77 = 1223213131520594LL;

	t77 = ((x341-(x342^x343))^x344);

	if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x345 = 593U;
	uint16_t x346 = UINT16_MAX;
	volatile uint32_t x347 = 5494652U;
	int8_t x348 = INT8_MAX;

	t78 = ((x345-(x346^x347))^x348);

	if (t78 != 4289518001U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = 66698074420LL;
	volatile int32_t x350 = 638518;
	static uint16_t x351 = UINT16_MAX;
	volatile int64_t t79 = -279518092LL;

	t79 = ((x349-(x350^x351))^x352);

	if (t79 != 66697467759LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x353 = UINT8_MAX;
	volatile int32_t x354 = INT32_MAX;
	int32_t x355 = -994;
	static uint16_t x356 = UINT16_MAX;

	t80 = ((x353-(x354^x355))^x356);

	if (t80 != 2147418849) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x357 = INT32_MIN;
	uint32_t x358 = 2665102U;
	int8_t x360 = -1;
	uint32_t t81 = 120U;

	t81 = ((x357-(x358^x359))^x360);

	if (t81 != 2144818544U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x361 = 733;
	uint32_t x362 = 13019936U;
	volatile int16_t x363 = INT16_MIN;
	static int32_t x364 = -1;
	uint32_t t82 = 4018212U;

	t82 = ((x361-(x362^x363))^x364);

	if (t82 != 4281935938U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = -30981;
	volatile uint64_t x368 = UINT64_MAX;
	uint64_t t83 = 325598572770598959LLU;

	t83 = ((x365-(x366^x367))^x368);

	if (t83 != 18446744073709549854LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x369 = -1;
	static uint8_t x370 = 0U;
	int16_t x371 = -1;
	int16_t x372 = -1;
	static int32_t t84 = -190887809;

	t84 = ((x369-(x370^x371))^x372);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = 3933;
	volatile int32_t x374 = INT32_MIN;
	static int64_t x375 = INT64_MAX;
	int8_t x376 = INT8_MIN;
	int64_t t85 = 33269939528LL;

	t85 = ((x373-(x374^x375))^x376);

	if (t85 != -9223372034707296034LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x377 = INT64_MAX;
	volatile int8_t x378 = INT8_MIN;
	int64_t t86 = -40LL;

	t86 = ((x377-(x378^x379))^x380);

	if (t86 != 9223372036854710399LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x381 = 77626464LLU;
	int8_t x382 = INT8_MAX;
	static int16_t x384 = INT16_MAX;
	static uint64_t t87 = 8172318441748594LLU;

	t87 = ((x381-(x382^x383))^x384);

	if (t87 != 77595649LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = 32U;
	int16_t x386 = INT16_MIN;
	volatile int64_t x388 = 98598564513640455LL;
	volatile int64_t t88 = 77456LL;

	t88 = ((x385-(x386^x387))^x388);

	if (t88 != -98598564607659993LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x389 = UINT32_MAX;
	static uint16_t x390 = 3772U;
	static uint64_t x391 = 115842742457001829LLU;
	uint16_t x392 = 7U;
	volatile uint64_t t89 = 1706LLU;

	t89 = ((x389-(x390^x391))^x392);

	if (t89 != 18330901335547516449LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 5U;
	static int32_t x394 = INT32_MAX;
	static int16_t x395 = INT16_MAX;
	int32_t x396 = -1686487;
	static uint32_t t90 = 27387274U;

	t90 = ((x393-(x394^x395))^x396);

	if (t90 != 2145829932U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = -1LL;
	uint16_t x398 = UINT16_MAX;
	volatile uint64_t t91 = 19LLU;

	t91 = ((x397-(x398^x399))^x400);

	if (t91 != 18446736270354734494LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	uint8_t x404 = 3U;
	int64_t t92 = 1LL;

	t92 = ((x401-(x402^x403))^x404);

	if (t92 != -9223372036854743098LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x405 = 383U;
	uint16_t x408 = 373U;
	int32_t t93 = -860066;

	t93 = ((x405-(x406^x407))^x408);

	if (t93 != 33213) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x409 = INT16_MIN;
	int8_t x410 = -2;
	volatile uint32_t t94 = 18875U;

	t94 = ((x409-(x410^x411))^x412);

	if (t94 != 32730U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = -3;
	volatile int16_t x414 = INT16_MIN;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = 13;
	volatile int32_t t95 = -954262;

	t95 = ((x413-(x414^x415))^x416);

	if (t95 != 32499) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = -189;
	int32_t x418 = INT32_MAX;
	int32_t x419 = INT32_MIN;
	int8_t x420 = INT8_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x417-(x418^x419))^x420);

	if (t96 != 196) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x421 = 0;
	int32_t x422 = INT32_MAX;
	static int16_t x423 = INT16_MAX;
	int64_t t97 = 6LL;

	t97 = ((x421-(x422^x423))^x424);

	if (t97 != -420507473LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x425 = 3;
	int16_t x427 = INT16_MIN;
	uint64_t x428 = 74544694611LLU;

	t98 = ((x425-(x426^x427))^x428);

	if (t98 != 74544691799LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x429 = -694;
	int8_t x430 = -17;
	volatile uint32_t x431 = 9428U;
	int8_t x432 = -1;
	volatile uint32_t t99 = 186U;

	t99 = ((x429-(x430^x431))^x432);

	if (t99 != 4294958576U) { NG(); } else { ; }
	
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

