#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 243;
int16_t x5 = INT16_MIN;
uint16_t x14 = 58U;
uint8_t x17 = 1U;
uint64_t x23 = 1370LLU;
int32_t t8 = 575747;
int32_t t10 = 3145300;
volatile int32_t t11 = -189943084;
int16_t x66 = INT16_MIN;
volatile int32_t x67 = -1;
static int64_t x74 = -1LL;
uint32_t x77 = 1U;
int32_t x78 = 257361;
int32_t x79 = 62731;
static int64_t x89 = -3131060983171122541LL;
int8_t x92 = INT8_MAX;
int32_t t21 = 18682407;
uint64_t x93 = 1824277LLU;
uint32_t x95 = 191U;
int8_t x96 = INT8_MIN;
int32_t t22 = 1317483;
volatile int32_t t23 = 98;
volatile uint16_t x106 = 6U;
int16_t x107 = 3711;
static int32_t x114 = INT32_MAX;
volatile uint8_t x115 = 5U;
static int8_t x117 = -1;
static int16_t x140 = 7540;
int32_t t32 = -5;
volatile uint8_t x144 = 7U;
int32_t t33 = -2;
int8_t x150 = -1;
int32_t t35 = 960;
static int8_t x165 = INT8_MIN;
volatile int32_t t42 = 7;
int32_t x181 = -1;
volatile int64_t x185 = INT64_MIN;
volatile int32_t x187 = 8943771;
volatile int32_t t44 = 2047;
int16_t x191 = -259;
volatile int8_t x198 = 12;
int8_t x201 = INT8_MIN;
volatile int8_t x206 = INT8_MAX;
volatile int16_t x221 = INT16_MIN;
uint64_t x223 = 1960710329845LLU;
int32_t x224 = -32178;
volatile uint8_t x227 = 10U;
volatile int32_t x228 = INT32_MAX;
static volatile int32_t t55 = -377;
int16_t x236 = INT16_MAX;
volatile int32_t t56 = 370;
static int32_t x237 = 2;
int32_t x248 = -14;
int32_t x249 = INT32_MAX;
int32_t x252 = -1453;
static uint32_t x256 = 405U;
volatile int64_t x258 = INT64_MIN;
volatile int32_t t62 = -255;
static volatile int32_t t63 = 1;
int16_t x265 = INT16_MIN;
volatile int32_t t64 = 7349540;
static uint32_t x277 = UINT32_MAX;
volatile uint32_t x280 = 1301999219U;
volatile int32_t t66 = -8000070;
int32_t x281 = 235055;
static volatile int32_t t67 = 1877829;
uint16_t x288 = 20U;
int16_t x293 = 1;
int8_t x295 = INT8_MIN;
volatile uint32_t x297 = 541851U;
int8_t x311 = INT8_MAX;
int32_t x312 = INT32_MIN;
static volatile uint32_t x323 = 68474U;
int64_t x325 = INT64_MIN;
volatile int8_t x332 = -1;
volatile int32_t t79 = -77813478;
static uint16_t x337 = UINT16_MAX;
int64_t x352 = -4034350100425984LL;
int32_t x360 = -1;
volatile uint64_t x372 = UINT64_MAX;
int32_t x374 = INT32_MAX;
static int8_t x376 = 39;
uint16_t x379 = 887U;
int8_t x382 = -3;
uint16_t x384 = 20U;
static int32_t x386 = -7902689;
int8_t x390 = 1;
static volatile int32_t t93 = 2;
volatile int64_t x396 = INT64_MIN;
int16_t x398 = INT16_MIN;
static uint8_t x406 = 94U;


void f0(void) {
	volatile uint64_t x1 = 809LLU;
	int32_t x2 = 982;
	volatile int64_t x3 = -2LL;
	static volatile int32_t x4 = -1;

	t0 = (x1<=(x2^(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 2664905U;
	static uint8_t x7 = 7U;
	int32_t x8 = -1;
	static volatile int32_t t1 = 2983599;

	t1 = (x5<=(x6^(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -3755511964476146498LL;
	static int16_t x10 = -1;
	static volatile int16_t x11 = INT16_MIN;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = 1;

	t2 = (x9<=(x10^(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x13 = UINT64_MAX;
	uint64_t x15 = 11126LLU;
	static uint64_t x16 = 1981697LLU;
	int32_t t3 = -1;

	t3 = (x13<=(x14^(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 39101667421LL;
	int8_t x19 = INT8_MIN;
	static int32_t x20 = -1;
	static int32_t t4 = 0;

	t4 = (x17<=(x18^(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 1;
	volatile int32_t x22 = INT32_MIN;
	uint16_t x24 = 23102U;
	volatile int32_t t5 = -80912;

	t5 = (x21<=(x22^(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x25 = 5526348LLU;
	int16_t x26 = -6441;
	volatile uint64_t x27 = 8140000LLU;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = 581633;

	t6 = (x25<=(x26^(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MAX;
	int32_t t7 = 809865;

	t7 = (x29<=(x30^(x31/x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	static int16_t x34 = 5;
	int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MIN;

	t8 = (x33<=(x34^(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 361LL;
	int32_t x38 = 500208691;
	int32_t x39 = INT32_MIN;
	int64_t x40 = 592769LL;
	int32_t t9 = 295658;

	t9 = (x37<=(x38^(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MAX;
	volatile int32_t x43 = INT32_MIN;
	static volatile int16_t x44 = INT16_MIN;

	t10 = (x41<=(x42^(x43/x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = 7;
	int8_t x50 = -1;
	int16_t x51 = -1;
	int8_t x52 = INT8_MAX;

	t11 = (x49<=(x50^(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	static int64_t x54 = -1LL;
	int32_t x55 = INT32_MIN;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t12 = 570;

	t12 = (x53<=(x54^(x55/x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 1U;
	volatile int8_t x58 = 7;
	volatile int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MAX;
	volatile int32_t t13 = -4152;

	t13 = (x57<=(x58^(x59/x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MAX;
	static int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t14 = 59428;

	t14 = (x61<=(x62^(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 363172U;
	uint64_t x68 = 16LLU;
	int32_t t15 = 22;

	t15 = (x65<=(x66^(x67/x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = 1602LLU;
	int16_t x70 = INT16_MAX;
	static volatile int64_t x71 = 2140271304431940666LL;
	int16_t x72 = INT16_MIN;
	int32_t t16 = 738080;

	t16 = (x69<=(x70^(x71/x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int16_t x75 = INT16_MAX;
	int64_t x76 = -780LL;
	int32_t t17 = -14;

	t17 = (x73<=(x74^(x75/x76)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x80 = 392U;
	static int32_t t18 = 1650078;

	t18 = (x77<=(x78^(x79/x80)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	volatile int64_t x82 = INT64_MIN;
	int32_t x83 = -997776;
	static uint32_t x84 = 12779844U;
	volatile int32_t t19 = 129;

	t19 = (x81<=(x82^(x83/x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 1;
	volatile int32_t x86 = INT32_MIN;
	int16_t x87 = -1;
	int16_t x88 = -1;
	volatile int32_t t20 = -23736095;

	t20 = (x85<=(x86^(x87/x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x90 = INT8_MAX;
	int32_t x91 = -17;

	t21 = (x89<=(x90^(x91/x92)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MIN;

	t22 = (x93<=(x94^(x95/x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	volatile uint8_t x98 = 1U;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;

	t23 = (x97<=(x98^(x99/x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	volatile int16_t x102 = INT16_MIN;
	volatile int16_t x103 = -1;
	int64_t x104 = -1LL;
	volatile int32_t t24 = -57923618;

	t24 = (x101<=(x102^(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 42U;
	int16_t x108 = -96;
	volatile int32_t t25 = 116;

	t25 = (x105<=(x106^(x107/x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	uint16_t x110 = 1U;
	int16_t x111 = 59;
	uint64_t x112 = 500983323258LLU;
	int32_t t26 = -2130797;

	t26 = (x109<=(x110^(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x113 = 62747U;
	volatile uint32_t x116 = 224U;
	static volatile int32_t t27 = 1;

	t27 = (x113<=(x114^(x115/x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t28 = -90;

	t28 = (x117<=(x118^(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x121 = 6563LLU;
	int64_t x122 = -1LL;
	volatile uint16_t x123 = 93U;
	uint64_t x124 = 24LLU;
	volatile int32_t t29 = 1;

	t29 = (x121<=(x122^(x123/x124)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -56;
	volatile int16_t x130 = 14752;
	volatile uint16_t x131 = 1U;
	int64_t x132 = 477199LL;
	volatile int32_t t30 = 28;

	t30 = (x129<=(x130^(x131/x132)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	uint32_t x134 = 5417U;
	volatile int8_t x135 = 51;
	volatile int32_t x136 = -1;
	volatile int32_t t31 = -29202;

	t31 = (x133<=(x134^(x135/x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = INT8_MAX;
	int8_t x138 = -1;
	int16_t x139 = -59;

	t32 = (x137<=(x138^(x139/x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x141 = -3;
	static int16_t x142 = INT16_MIN;
	volatile uint16_t x143 = 654U;

	t33 = (x141<=(x142^(x143/x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MIN;
	static int64_t x147 = INT64_MIN;
	uint16_t x148 = 1U;
	volatile int32_t t34 = -20;

	t34 = (x145<=(x146^(x147/x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	volatile int32_t x151 = -132;
	static volatile int16_t x152 = INT16_MIN;

	t35 = (x149<=(x150^(x151/x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = UINT16_MAX;
	int64_t x154 = -1LL;
	uint8_t x155 = UINT8_MAX;
	int64_t x156 = -1LL;
	volatile int32_t t36 = 94;

	t36 = (x153<=(x154^(x155/x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	static int8_t x158 = 1;
	static int32_t x159 = INT32_MIN;
	static uint16_t x160 = 6U;
	volatile int32_t t37 = -1;

	t37 = (x157<=(x158^(x159/x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 32U;
	uint32_t x162 = 3264U;
	uint32_t x163 = UINT32_MAX;
	static int8_t x164 = -1;
	int32_t t38 = -146623;

	t38 = (x161<=(x162^(x163/x164)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = INT8_MIN;
	static int16_t x167 = INT16_MIN;
	uint64_t x168 = 134721733384LLU;
	int32_t t39 = 169358;

	t39 = (x165<=(x166^(x167/x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = -1;
	int8_t x170 = INT8_MIN;
	static uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MIN;
	volatile int32_t t40 = 8;

	t40 = (x169<=(x170^(x171/x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MAX;
	uint16_t x174 = 11857U;
	int32_t x175 = INT32_MIN;
	volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t41 = -3830474;

	t41 = (x173<=(x174^(x175/x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = 0;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;

	t42 = (x177<=(x178^(x179/x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x182 = INT64_MIN;
	volatile int64_t x183 = -378424149796LL;
	int8_t x184 = -2;
	volatile int32_t t43 = 27;

	t43 = (x181<=(x182^(x183/x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x186 = INT16_MAX;
	volatile uint16_t x188 = UINT16_MAX;

	t44 = (x185<=(x186^(x187/x188)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 33825261LL;
	uint32_t x190 = 2U;
	int32_t x192 = 5008;
	volatile int32_t t45 = 2114;

	t45 = (x189<=(x190^(x191/x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = 859LL;
	int64_t x194 = INT64_MIN;
	int32_t x195 = -66632976;
	int32_t x196 = INT32_MIN;
	int32_t t46 = 0;

	t46 = (x193<=(x194^(x195/x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	static int8_t x199 = INT8_MIN;
	static uint64_t x200 = UINT64_MAX;
	int32_t t47 = -41556;

	t47 = (x197<=(x198^(x199/x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x202 = -1;
	static uint64_t x203 = 2368694682727095828LLU;
	int32_t x204 = INT32_MIN;
	static int32_t t48 = -3050282;

	t48 = (x201<=(x202^(x203/x204)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x205 = 51U;
	volatile int64_t x207 = -304163LL;
	volatile int32_t x208 = INT32_MIN;
	int32_t t49 = 1;

	t49 = (x205<=(x206^(x207/x208)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x209 = 429LLU;
	static int32_t x210 = -1;
	volatile uint32_t x211 = 50716U;
	uint8_t x212 = 1U;
	volatile int32_t t50 = -1552814;

	t50 = (x209<=(x210^(x211/x212)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x213 = 1U;
	static uint64_t x214 = 214480582049614628LLU;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	int32_t t51 = -3121;

	t51 = (x213<=(x214^(x215/x216)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x217 = UINT32_MAX;
	volatile int32_t x218 = 350963;
	static int16_t x219 = -4;
	static int64_t x220 = INT64_MAX;
	int32_t t52 = -1;

	t52 = (x217<=(x218^(x219/x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x222 = INT64_MAX;
	int32_t t53 = 5;

	t53 = (x221<=(x222^(x223/x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x225 = 105U;
	int64_t x226 = -9LL;
	int32_t t54 = 620333816;

	t54 = (x225<=(x226^(x227/x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MIN;
	static uint16_t x231 = 796U;
	static volatile uint8_t x232 = UINT8_MAX;

	t55 = (x229<=(x230^(x231/x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 7734U;
	static int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;

	t56 = (x233<=(x234^(x235/x236)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x238 = INT64_MAX;
	int32_t x239 = INT32_MIN;
	volatile int64_t x240 = INT64_MIN;
	int32_t t57 = -10;

	t57 = (x237<=(x238^(x239/x240)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x241 = -1;
	static uint32_t x242 = 1338U;
	int64_t x243 = INT64_MIN;
	volatile int32_t x244 = -27895358;
	int32_t t58 = 808407200;

	t58 = (x241<=(x242^(x243/x244)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x245 = 87049LLU;
	uint16_t x246 = 105U;
	int8_t x247 = INT8_MIN;
	volatile int32_t t59 = 742;

	t59 = (x245<=(x246^(x247/x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x250 = INT32_MIN;
	volatile uint8_t x251 = 73U;
	volatile int32_t t60 = 3157;

	t60 = (x249<=(x250^(x251/x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = 8128;
	int8_t x254 = -1;
	int16_t x255 = INT16_MAX;
	int32_t t61 = -61306;

	t61 = (x253<=(x254^(x255/x256)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = -1;
	volatile uint16_t x259 = UINT16_MAX;
	volatile uint16_t x260 = UINT16_MAX;

	t62 = (x257<=(x258^(x259/x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 3965302LLU;
	uint32_t x262 = 234402U;
	uint8_t x263 = 14U;
	int8_t x264 = INT8_MIN;

	t63 = (x261<=(x262^(x263/x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x266 = -12445;
	volatile uint64_t x267 = 0LLU;
	int32_t x268 = INT32_MIN;

	t64 = (x265<=(x266^(x267/x268)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x269 = 717815U;
	volatile int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	int16_t x272 = -22;
	int32_t t65 = 2196;

	t65 = (x269<=(x270^(x271/x272)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x278 = -111837LL;
	uint32_t x279 = 0U;

	t66 = (x277<=(x278^(x279/x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MIN;
	static volatile int16_t x284 = 11;

	t67 = (x281<=(x282^(x283/x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = UINT32_MAX;
	static int16_t x286 = INT16_MAX;
	static volatile int16_t x287 = 1981;
	static volatile int32_t t68 = 512623;

	t68 = (x285<=(x286^(x287/x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x289 = INT8_MAX;
	volatile int16_t x290 = -1;
	static uint8_t x291 = UINT8_MAX;
	int8_t x292 = INT8_MIN;
	volatile int32_t t69 = -118584;

	t69 = (x289<=(x290^(x291/x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x294 = 22U;
	volatile int16_t x296 = INT16_MAX;
	int32_t t70 = 14213;

	t70 = (x293<=(x294^(x295/x296)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	volatile int32_t x300 = INT32_MIN;
	static int32_t t71 = -1;

	t71 = (x297<=(x298^(x299/x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 446179U;
	volatile int16_t x302 = INT16_MAX;
	volatile int16_t x303 = INT16_MAX;
	static uint8_t x304 = UINT8_MAX;
	volatile int32_t t72 = 0;

	t72 = (x301<=(x302^(x303/x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x305 = UINT64_MAX;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t73 = -1;

	t73 = (x305<=(x306^(x307/x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	uint16_t x310 = UINT16_MAX;
	static volatile int32_t t74 = 7242502;

	t74 = (x309<=(x310^(x311/x312)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MAX;
	static uint64_t x314 = 5604876429131127LLU;
	volatile uint32_t x315 = 14367U;
	int64_t x316 = -167LL;
	int32_t t75 = 3477723;

	t75 = (x313<=(x314^(x315/x316)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x321 = 1763U;
	int16_t x322 = INT16_MIN;
	static volatile int16_t x324 = INT16_MIN;
	int32_t t76 = 15224619;

	t76 = (x321<=(x322^(x323/x324)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x326 = INT32_MIN;
	static int8_t x327 = INT8_MAX;
	volatile int64_t x328 = -1LL;
	int32_t t77 = 571167;

	t77 = (x325<=(x326^(x327/x328)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x329 = 50;
	int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	static volatile int32_t t78 = 14;

	t78 = (x329<=(x330^(x331/x332)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -42;
	int32_t x334 = INT32_MAX;
	static uint8_t x335 = 3U;
	int32_t x336 = INT32_MIN;

	t79 = (x333<=(x334^(x335/x336)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x338 = INT32_MIN;
	uint32_t x339 = 1094127U;
	int64_t x340 = -116574797912252LL;
	int32_t t80 = 1;

	t80 = (x337<=(x338^(x339/x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint8_t x342 = UINT8_MAX;
	uint8_t x343 = 1U;
	int16_t x344 = INT16_MIN;
	int32_t t81 = -149;

	t81 = (x341<=(x342^(x343/x344)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = INT16_MIN;
	int8_t x346 = -1;
	uint16_t x347 = 326U;
	int16_t x348 = INT16_MAX;
	volatile int32_t t82 = 617;

	t82 = (x345<=(x346^(x347/x348)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MAX;
	int64_t x350 = INT64_MAX;
	static int8_t x351 = -1;
	int32_t t83 = 23;

	t83 = (x349<=(x350^(x351/x352)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = -1;
	int32_t x354 = -3550;
	static int8_t x355 = INT8_MIN;
	volatile int64_t x356 = 280229156442279LL;
	static int32_t t84 = 1493129;

	t84 = (x353<=(x354^(x355/x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = 86U;
	static int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	static volatile int32_t t85 = 193;

	t85 = (x357<=(x358^(x359/x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x361 = UINT8_MAX;
	static uint64_t x362 = 182903074994451247LLU;
	static volatile int64_t x363 = -1LL;
	int8_t x364 = -1;
	volatile int32_t t86 = 7327570;

	t86 = (x361<=(x362^(x363/x364)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -1;
	int16_t x366 = -1;
	int8_t x367 = INT8_MAX;
	int16_t x368 = 5;
	static int32_t t87 = 367489232;

	t87 = (x365<=(x366^(x367/x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = 7U;
	static volatile int64_t x370 = -284383775632906945LL;
	uint64_t x371 = 40362846LLU;
	int32_t t88 = 11516;

	t88 = (x369<=(x370^(x371/x372)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = INT64_MAX;
	volatile uint32_t x375 = 3381U;
	int32_t t89 = 407249;

	t89 = (x373<=(x374^(x375/x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x377 = INT64_MIN;
	static int16_t x378 = -1;
	int8_t x380 = -1;
	int32_t t90 = -6299;

	t90 = (x377<=(x378^(x379/x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x383 = 20U;
	static int32_t t91 = 0;

	t91 = (x381<=(x382^(x383/x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = -162;
	int32_t x387 = -1;
	int16_t x388 = 1480;
	int32_t t92 = -69692;

	t92 = (x385<=(x386^(x387/x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 1204U;
	int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MAX;

	t93 = (x389<=(x390^(x391/x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	static int16_t x394 = INT16_MIN;
	volatile int8_t x395 = INT8_MIN;
	int32_t t94 = -20471291;

	t94 = (x393<=(x394^(x395/x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	int64_t x399 = -137996LL;
	int32_t x400 = 62478;
	static volatile int32_t t95 = 136856;

	t95 = (x397<=(x398^(x399/x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MAX;
	volatile int32_t x402 = INT32_MIN;
	uint8_t x403 = 6U;
	uint8_t x404 = 55U;
	volatile int32_t t96 = -1;

	t96 = (x401<=(x402^(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = 134848;
	int16_t x407 = -414;
	static uint16_t x408 = 10U;
	volatile int32_t t97 = -4091;

	t97 = (x405<=(x406^(x407/x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = 235993;
	int32_t x410 = INT32_MIN;
	int16_t x411 = -72;
	int32_t x412 = INT32_MIN;
	volatile int32_t t98 = 102;

	t98 = (x409<=(x410^(x411/x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 28024U;
	int8_t x414 = INT8_MIN;
	uint16_t x415 = 3U;
	uint32_t x416 = 27U;
	static volatile int32_t t99 = 483350505;

	t99 = (x413<=(x414^(x415/x416)));

	if (t99 != 1) { NG(); } else { ; }
	
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

