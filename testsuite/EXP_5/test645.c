#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int64_t x7 = -1LL;
int8_t x8 = -1;
int8_t x14 = INT8_MAX;
uint16_t x30 = UINT16_MAX;
int64_t x31 = -1LL;
volatile uint64_t x36 = UINT64_MAX;
static uint8_t x48 = 15U;
int32_t t10 = -59921904;
int16_t x50 = -29;
int32_t x58 = INT32_MIN;
int16_t x59 = -1910;
uint8_t x62 = 1U;
int32_t x63 = -1;
int8_t x64 = 30;
volatile int32_t t13 = -78169;
int64_t x68 = INT64_MAX;
int16_t x69 = -79;
int8_t x70 = INT8_MIN;
int32_t x78 = -1597265;
static int32_t t17 = 0;
int64_t x81 = -1LL;
uint32_t x82 = UINT32_MAX;
uint16_t x85 = UINT16_MAX;
volatile uint8_t x92 = UINT8_MAX;
int32_t x99 = INT32_MAX;
int32_t x106 = INT32_MAX;
static volatile int32_t x115 = -1;
int16_t x124 = 2;
int32_t t28 = 258537128;
int16_t x125 = INT16_MAX;
static volatile uint64_t x126 = UINT64_MAX;
static uint32_t x133 = 1U;
uint64_t x140 = UINT64_MAX;
volatile int32_t t32 = 120956143;
volatile int32_t t33 = -1;
int8_t x159 = INT8_MIN;
volatile int8_t x167 = INT8_MIN;
volatile uint8_t x175 = 4U;
int32_t t40 = 3;
volatile int32_t x177 = 1;
volatile int32_t t41 = -8585;
volatile int32_t t42 = 18;
uint8_t x195 = UINT8_MAX;
int32_t t45 = -1;
static int8_t x197 = 0;
uint64_t x203 = 974LLU;
static int64_t x204 = -2259631LL;
int32_t t47 = -1058507;
int16_t x207 = INT16_MIN;
volatile int32_t t49 = -98;
int16_t x214 = 4080;
static int8_t x222 = -1;
int32_t x224 = -484392;
uint64_t x225 = 1763546665LLU;
int64_t x232 = INT64_MIN;
int16_t x233 = -1;
volatile uint8_t x236 = 34U;
volatile int8_t x237 = INT8_MAX;
int16_t x243 = 7;
static int32_t t58 = 323943077;
static int16_t x257 = INT16_MAX;
int16_t x258 = -51;
volatile int32_t x264 = INT32_MAX;
int64_t x266 = -1LL;
int16_t x271 = INT16_MIN;
static int16_t x274 = INT16_MIN;
int8_t x275 = INT8_MAX;
volatile int32_t t64 = -241138;
int8_t x287 = -1;
uint32_t x290 = 234711806U;
uint32_t x291 = 4U;
int64_t x294 = -16404506329109LL;
volatile int32_t t70 = 0;
int8_t x303 = INT8_MAX;
volatile int64_t x312 = INT64_MIN;
uint64_t x313 = 1LLU;
volatile int32_t t74 = -11;
volatile int32_t x323 = INT32_MIN;
static int32_t t76 = -281265808;
uint64_t x336 = 104949141056020LLU;
uint16_t x342 = 655U;
int32_t x355 = INT32_MAX;
int32_t t85 = 15568;
int32_t t86 = 124230325;
uint8_t x368 = UINT8_MAX;
int32_t t87 = -7403811;
uint32_t x376 = 3070881U;
int64_t x379 = INT64_MIN;
static uint64_t x380 = 749079209009267311LLU;
int16_t x383 = INT16_MIN;
static int8_t x384 = INT8_MAX;
int32_t t91 = -1463318;
static uint32_t x386 = 118825U;
int32_t t92 = 114304054;
volatile int32_t x391 = INT32_MIN;
volatile uint16_t x399 = 5146U;
volatile int16_t x405 = 1;
static int32_t x411 = -301362858;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	int32_t x2 = INT32_MIN;
	uint64_t x3 = 15373309591LLU;
	int16_t x4 = -13211;
	volatile int32_t t0 = 1;

	t0 = (x1==((x2/x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	static volatile int32_t t1 = -9298605;

	t1 = (x5==((x6/x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	int8_t x15 = INT8_MAX;
	uint8_t x16 = 6U;
	volatile int32_t t2 = 55291;

	t2 = (x13==((x14/x15)&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 59U;
	static int8_t x18 = 2;
	volatile int64_t x19 = INT64_MAX;
	volatile int32_t x20 = INT32_MAX;
	int32_t t3 = 2534;

	t3 = (x17==((x18/x19)&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -761;
	volatile uint64_t x22 = 389448989452897LLU;
	uint16_t x23 = 10U;
	static uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = 4441201;

	t4 = (x21==((x22/x23)&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = 2097423959909LL;
	int32_t x26 = -1;
	int32_t x27 = 1;
	volatile uint32_t x28 = UINT32_MAX;
	int32_t t5 = -13;

	t5 = (x25==((x26/x27)&x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -7593;
	int64_t x32 = INT64_MIN;
	int32_t t6 = -100392;

	t6 = (x29==((x30/x31)&x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -233447167;
	int64_t x34 = -498326572285LL;
	int8_t x35 = -1;
	volatile int32_t t7 = -1;

	t7 = (x33==((x34/x35)&x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	int64_t x38 = -801557LL;
	uint32_t x39 = 4632549U;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t8 = 1;

	t8 = (x37==((x38/x39)&x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -56;
	uint64_t x42 = 33179631LLU;
	int16_t x43 = INT16_MIN;
	static int64_t x44 = INT64_MIN;
	int32_t t9 = -91741;

	t9 = (x41==((x42/x43)&x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 27236478787512202LLU;
	int64_t x46 = INT64_MIN;
	static uint32_t x47 = UINT32_MAX;

	t10 = (x45==((x46/x47)&x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 196445;
	int32_t x51 = 482107;
	int16_t x52 = INT16_MAX;
	static int32_t t11 = -47391;

	t11 = (x49==((x50/x51)&x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x57 = 1438905040140LLU;
	uint8_t x60 = 27U;
	volatile int32_t t12 = 261786333;

	t12 = (x57==((x58/x59)&x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 2311020871821040618LLU;

	t13 = (x61==((x62/x63)&x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	static int16_t x66 = INT16_MIN;
	int64_t x67 = -1LL;
	volatile int32_t t14 = 281842;

	t14 = (x65==((x66/x67)&x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x71 = INT32_MIN;
	static int8_t x72 = -1;
	volatile int32_t t15 = -492185987;

	t15 = (x69==((x70/x71)&x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x73 = -83870LL;
	static uint32_t x74 = 811374669U;
	int64_t x75 = 2LL;
	static uint32_t x76 = UINT32_MAX;
	volatile int32_t t16 = -2558;

	t16 = (x73==((x74/x75)&x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x77 = 2069263635280105680LLU;
	int32_t x79 = -119408;
	uint8_t x80 = UINT8_MAX;

	t17 = (x77==((x78/x79)&x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x83 = INT32_MAX;
	volatile uint64_t x84 = UINT64_MAX;
	int32_t t18 = 1025;

	t18 = (x81==((x82/x83)&x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = INT16_MAX;
	static int32_t x87 = 14;
	int64_t x88 = 677319751LL;
	int32_t t19 = 84617796;

	t19 = (x85==((x86/x87)&x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -16;
	uint64_t x90 = 363152LLU;
	volatile int8_t x91 = 6;
	static volatile int32_t t20 = 28;

	t20 = (x89==((x90/x91)&x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 787U;
	int16_t x94 = INT16_MIN;
	volatile int32_t x95 = INT32_MAX;
	volatile int16_t x96 = INT16_MAX;
	int32_t t21 = -63002368;

	t21 = (x93==((x94/x95)&x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x97 = -1;
	static uint32_t x98 = 6977617U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t22 = 1;

	t22 = (x97==((x98/x99)&x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MAX;
	volatile int32_t x102 = -362923381;
	static int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t23 = -1;

	t23 = (x101==((x102/x103)&x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	uint16_t x107 = 92U;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t24 = 1750299;

	t24 = (x105==((x106/x107)&x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = 89378;
	int8_t x110 = -1;
	volatile int16_t x111 = -14076;
	int32_t x112 = INT32_MIN;
	int32_t t25 = 0;

	t25 = (x109==((x110/x111)&x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = -352512932LL;
	volatile uint64_t x116 = UINT64_MAX;
	volatile int32_t t26 = 270;

	t26 = (x113==((x114/x115)&x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = -1LL;
	int32_t x118 = -1;
	static int8_t x119 = -1;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t27 = -402382;

	t27 = (x117==((x118/x119)&x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -26112474;
	int8_t x122 = INT8_MAX;
	static volatile int8_t x123 = INT8_MIN;

	t28 = (x121==((x122/x123)&x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;
	int32_t t29 = -251730066;

	t29 = (x125==((x126/x127)&x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = -20;
	static int8_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	static int16_t x132 = INT16_MIN;
	int32_t t30 = -8;

	t30 = (x129==((x130/x131)&x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = 103LLU;
	int32_t t31 = 660293;

	t31 = (x133==((x134/x135)&x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x137 = -22;
	volatile int8_t x138 = INT8_MIN;
	int32_t x139 = -1;

	t32 = (x137==((x138/x139)&x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MAX;
	int32_t x142 = -138981;
	uint8_t x143 = 7U;
	static uint32_t x144 = 12U;

	t33 = (x141==((x142/x143)&x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x145 = -1;
	int16_t x146 = INT16_MAX;
	uint64_t x147 = UINT64_MAX;
	volatile uint8_t x148 = UINT8_MAX;
	int32_t t34 = -477423902;

	t34 = (x145==((x146/x147)&x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = 1U;
	int16_t x155 = INT16_MIN;
	int8_t x156 = -5;
	volatile int32_t t35 = -30430;

	t35 = (x153==((x154/x155)&x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MAX;
	uint64_t x158 = 3244967456217LLU;
	uint32_t x160 = 662U;
	volatile int32_t t36 = -8;

	t36 = (x157==((x158/x159)&x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 1U;
	int16_t x162 = INT16_MIN;
	static int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t37 = 982348490;

	t37 = (x161==((x162/x163)&x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	volatile int8_t x166 = 44;
	static int16_t x168 = -1;
	static int32_t t38 = -185770;

	t38 = (x165==((x166/x167)&x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int64_t x170 = -1LL;
	int32_t x171 = INT32_MIN;
	int16_t x172 = -1;
	int32_t t39 = -42;

	t39 = (x169==((x170/x171)&x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x173 = UINT32_MAX;
	uint32_t x174 = UINT32_MAX;
	uint32_t x176 = 128750U;

	t40 = (x173==((x174/x175)&x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = 168;
	int8_t x179 = -3;
	volatile int8_t x180 = INT8_MAX;

	t41 = (x177==((x178/x179)&x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x181 = 1U;
	static int64_t x182 = -21348096262462865LL;
	int32_t x183 = -1;
	volatile uint16_t x184 = 109U;

	t42 = (x181==((x182/x183)&x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MAX;
	int64_t x186 = INT64_MAX;
	int64_t x187 = -1LL;
	uint32_t x188 = 33U;
	volatile int32_t t43 = 719359;

	t43 = (x185==((x186/x187)&x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x189 = 481567U;
	int64_t x190 = 846866LL;
	int16_t x191 = -1;
	volatile int16_t x192 = -1;
	volatile int32_t t44 = 0;

	t44 = (x189==((x190/x191)&x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	int16_t x196 = INT16_MIN;

	t45 = (x193==((x194/x195)&x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x198 = UINT32_MAX;
	int32_t x199 = 2;
	int16_t x200 = INT16_MIN;
	volatile int32_t t46 = 992596620;

	t46 = (x197==((x198/x199)&x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x201 = 25U;
	int32_t x202 = -1;

	t47 = (x201==((x202/x203)&x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 674210818U;
	static int16_t x206 = INT16_MIN;
	volatile int16_t x208 = INT16_MAX;
	static int32_t t48 = 1568860;

	t48 = (x205==((x206/x207)&x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x209 = UINT8_MAX;
	int32_t x210 = INT32_MAX;
	uint64_t x211 = UINT64_MAX;
	uint8_t x212 = UINT8_MAX;

	t49 = (x209==((x210/x211)&x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x213 = -1;
	static volatile int64_t x215 = 2713258921990LL;
	int8_t x216 = -1;
	volatile int32_t t50 = 0;

	t50 = (x213==((x214/x215)&x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = UINT32_MAX;
	uint8_t x218 = UINT8_MAX;
	uint16_t x219 = UINT16_MAX;
	volatile int64_t x220 = 2821263LL;
	volatile int32_t t51 = 0;

	t51 = (x217==((x218/x219)&x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 3U;
	static volatile int32_t x223 = -28;
	volatile int32_t t52 = 0;

	t52 = (x221==((x222/x223)&x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x226 = 1371075U;
	static uint64_t x227 = UINT64_MAX;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t53 = -1;

	t53 = (x225==((x226/x227)&x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -1;
	int64_t x230 = -40172037934682LL;
	uint32_t x231 = UINT32_MAX;
	int32_t t54 = 1658;

	t54 = (x229==((x230/x231)&x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x234 = UINT16_MAX;
	uint64_t x235 = 23LLU;
	volatile int32_t t55 = 23;

	t55 = (x233==((x234/x235)&x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x238 = 1128721LLU;
	int32_t x239 = INT32_MAX;
	volatile int64_t x240 = 5117LL;
	volatile int32_t t56 = -62;

	t56 = (x237==((x238/x239)&x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 1010293491U;
	int32_t x242 = INT32_MIN;
	int32_t x244 = -8583;
	volatile int32_t t57 = 13146195;

	t57 = (x241==((x242/x243)&x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MAX;
	volatile uint64_t x247 = 31352LLU;
	int16_t x248 = -1;

	t58 = (x245==((x246/x247)&x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = INT16_MIN;
	static int32_t x250 = -1;
	static int64_t x251 = INT64_MIN;
	static volatile int64_t x252 = 2723780346275LL;
	volatile int32_t t59 = -2;

	t59 = (x249==((x250/x251)&x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MAX;
	volatile int32_t t60 = 3;

	t60 = (x257==((x258/x259)&x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x261 = INT32_MAX;
	volatile uint16_t x262 = UINT16_MAX;
	static uint16_t x263 = 2026U;
	int32_t t61 = -1029523218;

	t61 = (x261==((x262/x263)&x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x265 = 720U;
	uint64_t x267 = 789980198216138LLU;
	int16_t x268 = 11;
	static volatile int32_t t62 = -318094165;

	t62 = (x265==((x266/x267)&x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t63 = 2;

	t63 = (x269==((x270/x271)&x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = 64;
	static uint32_t x276 = 1460U;

	t64 = (x273==((x274/x275)&x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = 3893;
	uint16_t x278 = 0U;
	uint8_t x279 = 32U;
	int8_t x280 = 1;
	volatile int32_t t65 = 0;

	t65 = (x277==((x278/x279)&x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	volatile int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int32_t t66 = -368;

	t66 = (x281==((x282/x283)&x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -3LL;
	int16_t x286 = INT16_MIN;
	static volatile int16_t x288 = INT16_MAX;
	int32_t t67 = 925345143;

	t67 = (x285==((x286/x287)&x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = UINT16_MAX;
	int64_t x292 = INT64_MIN;
	int32_t t68 = 3;

	t68 = (x289==((x290/x291)&x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -1;
	uint16_t x295 = 7556U;
	int16_t x296 = 0;
	volatile int32_t t69 = -1384;

	t69 = (x293==((x294/x295)&x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x297 = 85498LLU;
	volatile int8_t x298 = 1;
	int8_t x299 = 33;
	int8_t x300 = INT8_MIN;

	t70 = (x297==((x298/x299)&x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = 5698;
	static uint32_t x302 = UINT32_MAX;
	int64_t x304 = -1LL;
	int32_t t71 = 1731134;

	t71 = (x301==((x302/x303)&x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = 1;
	static uint8_t x306 = 103U;
	uint16_t x307 = UINT16_MAX;
	static volatile uint16_t x308 = 6924U;
	volatile int32_t t72 = -58;

	t72 = (x305==((x306/x307)&x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = 56155155;
	int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MAX;
	int32_t t73 = -99418;

	t73 = (x309==((x310/x311)&x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x314 = -13851;
	static int8_t x315 = INT8_MIN;
	volatile uint32_t x316 = UINT32_MAX;

	t74 = (x313==((x314/x315)&x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 879712;
	int64_t x318 = INT64_MAX;
	volatile int32_t x319 = -1;
	int16_t x320 = -1;
	static volatile int32_t t75 = 0;

	t75 = (x317==((x318/x319)&x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x321 = -131;
	volatile uint32_t x322 = 251U;
	int8_t x324 = INT8_MIN;

	t76 = (x321==((x322/x323)&x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t77 = 808391;

	t77 = (x325==((x326/x327)&x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x329 = INT16_MIN;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = -1;
	int8_t x332 = 3;
	int32_t t78 = 13;

	t78 = (x329==((x330/x331)&x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = UINT16_MAX;
	uint8_t x334 = 0U;
	int16_t x335 = -1;
	int32_t t79 = 0;

	t79 = (x333==((x334/x335)&x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x337 = UINT64_MAX;
	volatile int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	uint64_t x340 = 6513953112469825958LLU;
	volatile int32_t t80 = -420;

	t80 = (x337==((x338/x339)&x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = 17;
	volatile int16_t x343 = 6;
	static int64_t x344 = INT64_MAX;
	int32_t t81 = 2350467;

	t81 = (x341==((x342/x343)&x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 1562231U;
	int16_t x346 = INT16_MIN;
	static int32_t x347 = -1;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t82 = -6;

	t82 = (x345==((x346/x347)&x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x349 = UINT16_MAX;
	int32_t x350 = -1;
	static uint16_t x351 = 960U;
	static volatile int32_t x352 = INT32_MIN;
	volatile int32_t t83 = 23435348;

	t83 = (x349==((x350/x351)&x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 335466904U;
	int64_t x354 = -18403158273325768LL;
	volatile int16_t x356 = INT16_MAX;
	volatile int32_t t84 = -2417;

	t84 = (x353==((x354/x355)&x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = 14;
	int16_t x358 = -1;
	volatile int32_t x359 = 9260066;
	uint8_t x360 = 6U;

	t85 = (x357==((x358/x359)&x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = INT16_MAX;
	int32_t x362 = -1;
	int8_t x363 = INT8_MAX;
	int8_t x364 = 0;

	t86 = (x361==((x362/x363)&x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MIN;
	int64_t x366 = -1LL;
	volatile int64_t x367 = -307205664712569LL;

	t87 = (x365==((x366/x367)&x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = UINT8_MAX;
	static uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t88 = 3000;

	t88 = (x369==((x370/x371)&x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x373 = -2;
	int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	volatile int32_t t89 = 5;

	t89 = (x373==((x374/x375)&x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 17U;
	volatile uint8_t x378 = 6U;
	volatile int32_t t90 = 5698;

	t90 = (x377==((x378/x379)&x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x381 = -1;
	uint8_t x382 = 0U;

	t91 = (x381==((x382/x383)&x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MAX;
	static int32_t x387 = INT32_MAX;
	int16_t x388 = -1;

	t92 = (x385==((x386/x387)&x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x389 = 0U;
	int16_t x390 = 8016;
	volatile int8_t x392 = -6;
	volatile int32_t t93 = 39824;

	t93 = (x389==((x390/x391)&x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = -11555099;
	int64_t x394 = -1LL;
	static int8_t x395 = 28;
	uint32_t x396 = 3841820U;
	static int32_t t94 = 6;

	t94 = (x393==((x394/x395)&x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	uint16_t x400 = 2U;
	volatile int32_t t95 = 410;

	t95 = (x397==((x398/x399)&x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	int16_t x403 = 6;
	static int8_t x404 = 1;
	static volatile int32_t t96 = 378;

	t96 = (x401==((x402/x403)&x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x406 = UINT16_MAX;
	uint64_t x407 = UINT64_MAX;
	int32_t x408 = -1;
	int32_t t97 = 969305;

	t97 = (x405==((x406/x407)&x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x409 = 113U;
	int64_t x410 = -1LL;
	int32_t x412 = INT32_MAX;
	volatile int32_t t98 = 2980200;

	t98 = (x409==((x410/x411)&x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = -1;
	uint8_t x414 = 35U;
	uint8_t x415 = 8U;
	int16_t x416 = INT16_MIN;
	int32_t t99 = -66;

	t99 = (x413==((x414/x415)&x416));

	if (t99 != 0) { NG(); } else { ; }
	
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

