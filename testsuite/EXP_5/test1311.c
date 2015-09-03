#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 7;
uint32_t x4 = UINT32_MAX;
volatile int32_t t1 = -29;
uint32_t x10 = 450150U;
uint16_t x13 = 7U;
int16_t x20 = INT16_MAX;
static volatile uint32_t x22 = UINT32_MAX;
static int16_t x23 = INT16_MIN;
uint64_t x31 = 129373630537764LLU;
volatile uint32_t t7 = 8179U;
uint8_t x50 = UINT8_MAX;
volatile int64_t t14 = 2927074133LL;
volatile int32_t t15 = 257175655;
int8_t x65 = -7;
int32_t x68 = INT32_MIN;
static uint64_t x76 = UINT64_MAX;
static uint8_t x77 = 29U;
volatile int64_t x78 = INT64_MAX;
int32_t t19 = -5392614;
uint32_t x81 = 15072U;
uint32_t t20 = 73602U;
volatile int32_t t21 = -75;
uint32_t x94 = 465U;
static int64_t x98 = -1LL;
static int32_t t24 = 436;
static volatile uint32_t t25 = 26U;
int8_t x107 = INT8_MIN;
uint32_t x115 = UINT32_MAX;
int64_t x119 = INT64_MAX;
int64_t x120 = -58132LL;
uint8_t x121 = UINT8_MAX;
int16_t x126 = -2390;
int8_t x131 = -1;
uint8_t x135 = UINT8_MAX;
volatile int32_t t34 = 27;
uint64_t x143 = 6096774LLU;
uint32_t t36 = 4293U;
int64_t x150 = -355384503266714930LL;
int32_t t37 = -19615232;
uint64_t x155 = 444404LLU;
volatile int16_t x160 = INT16_MAX;
int16_t x173 = -1;
int16_t x178 = INT16_MIN;
int8_t x187 = INT8_MIN;
uint64_t t46 = 71620437013605346LLU;
int16_t x191 = -9;
static int64_t x204 = 415695562221LL;
int8_t x208 = 0;
volatile int64_t t51 = 4817757LL;
int8_t x209 = INT8_MAX;
int32_t x215 = INT32_MIN;
int32_t t53 = -752527860;
int64_t x222 = INT64_MIN;
static volatile int32_t t55 = 10443;
int32_t x227 = INT32_MAX;
int32_t x233 = 32556016;
int16_t x237 = 1;
uint16_t x239 = 2716U;
int8_t x241 = INT8_MIN;
volatile int8_t x245 = 43;
uint64_t x251 = 377742218594273LLU;
int32_t x255 = INT32_MIN;
static volatile int32_t t63 = -1;
static uint32_t x259 = 94U;
static int32_t t67 = -392;
uint16_t x273 = 149U;
volatile uint8_t x274 = 7U;
uint16_t x275 = 0U;
volatile int32_t t68 = -1;
int16_t x284 = 2343;
volatile uint64_t x296 = UINT64_MAX;
uint32_t x298 = UINT32_MAX;
uint16_t x310 = UINT16_MAX;
uint16_t x313 = 15859U;
uint16_t x322 = 703U;
uint32_t x329 = 382U;
static uint32_t t82 = 33532196U;
int64_t x338 = INT64_MIN;
uint16_t x346 = 2992U;
uint64_t x347 = 3157537370417707257LLU;
volatile int16_t x349 = 2598;
static volatile int32_t t87 = -58283518;
int16_t x363 = INT16_MIN;
int64_t x364 = INT64_MAX;
int64_t t90 = -6LL;
volatile uint64_t x365 = 1935124738602836114LLU;
int64_t x366 = -1LL;
int64_t x373 = INT64_MAX;
int64_t x379 = INT64_MIN;
volatile uint64_t x381 = 69646658064256902LLU;
int64_t x382 = INT64_MIN;
int32_t x383 = INT32_MIN;
int8_t x386 = INT8_MIN;
volatile int64_t t96 = 4730898LL;
static int64_t x392 = INT64_MAX;
volatile int32_t t97 = 0;
int32_t t98 = -7;
volatile int32_t x399 = INT32_MIN;


void f0(void) {
	static uint16_t x1 = 53U;
	volatile uint8_t x2 = UINT8_MAX;
	volatile int32_t t0 = -983;

	t0 = (x1&((x2==x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint8_t x6 = 1U;
	int32_t x7 = -2;
	uint16_t x8 = 10073U;

	t1 = (x5&((x6==x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int32_t x11 = -1;
	volatile uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = 34;

	t2 = (x9&((x10==x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MIN;
	volatile int64_t x15 = INT64_MIN;
	static int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -1491;

	t3 = (x13&((x14==x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -808379506;
	uint16_t x18 = 0U;
	static int64_t x19 = -1LL;
	int32_t t4 = 2203;

	t4 = (x17&((x18==x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile uint64_t x24 = 9273LLU;
	volatile int32_t t5 = -5065;

	t5 = (x21&((x22==x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 1623LLU;
	volatile uint32_t x26 = UINT32_MAX;
	int8_t x27 = INT8_MIN;
	volatile int16_t x28 = -1;
	static volatile uint64_t t6 = 1754518LLU;

	t6 = (x25&((x26==x27)<=x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 21318279U;
	static int16_t x30 = -83;
	static uint64_t x32 = 661753LLU;

	t7 = (x29&((x30==x31)<=x32));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	volatile uint64_t x35 = 9225LLU;
	int64_t x36 = INT64_MAX;
	static int32_t t8 = -1832768;

	t8 = (x33&((x34==x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -1;
	int64_t x38 = 484LL;
	int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -493;

	t9 = (x37&((x38==x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MAX;
	int32_t x42 = -2421;
	int32_t x43 = INT32_MIN;
	int8_t x44 = -1;
	volatile int64_t t10 = 47022056LL;

	t10 = (x41&((x42==x43)<=x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int8_t x46 = INT8_MIN;
	volatile int16_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	int64_t t11 = -5790951110LL;

	t11 = (x45&((x46==x47)<=x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 58U;
	uint64_t x51 = 6185954666005LLU;
	int8_t x52 = -1;
	int32_t t12 = 0;

	t12 = (x49&((x50==x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	static uint8_t x54 = 88U;
	int8_t x55 = 1;
	int32_t x56 = INT32_MIN;
	static volatile int64_t t13 = -5027LL;

	t13 = (x53&((x54==x55)<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int8_t x58 = -11;
	volatile int32_t x59 = INT32_MIN;
	static volatile int32_t x60 = INT32_MAX;

	t14 = (x57&((x58==x59)<=x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -256302597;
	volatile int64_t x62 = INT64_MIN;
	volatile int32_t x63 = INT32_MAX;
	volatile uint16_t x64 = 9515U;

	t15 = (x61&((x62==x63)<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x66 = 241LLU;
	static volatile int16_t x67 = INT16_MIN;
	volatile int32_t t16 = 320192686;

	t16 = (x65&((x66==x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = -8120329186482783LL;
	static int64_t x72 = 608LL;
	volatile int64_t t17 = -64014LL;

	t17 = (x69&((x70==x71)<=x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 5336;
	uint64_t x74 = 52568LLU;
	volatile int32_t x75 = -991592430;
	volatile int32_t t18 = -268875;

	t18 = (x73&((x74==x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x79 = 254443178395LL;
	int16_t x80 = 4257;

	t19 = (x77&((x78==x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	uint8_t x84 = 28U;

	t20 = (x81&((x82==x83)<=x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	uint64_t x87 = UINT64_MAX;
	static volatile int8_t x88 = -27;

	t21 = (x85&((x86==x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	int8_t x90 = -1;
	int16_t x91 = -84;
	int64_t x92 = INT64_MIN;
	static int32_t t22 = -23868;

	t22 = (x89&((x90==x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 5061353532LLU;
	int32_t x95 = -1;
	volatile uint64_t x96 = UINT64_MAX;
	static volatile uint64_t t23 = 2397LLU;

	t23 = (x93&((x94==x95)<=x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	int16_t x99 = -1;
	static int16_t x100 = -1;

	t24 = (x97&((x98==x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 107U;
	int16_t x102 = 14919;
	int8_t x103 = -1;
	int8_t x104 = INT8_MIN;

	t25 = (x101&((x102==x103)<=x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = 10U;
	uint8_t x108 = 98U;
	int32_t t26 = 49;

	t26 = (x105&((x106==x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = UINT32_MAX;
	int64_t x110 = -2030567626740253LL;
	uint64_t x111 = 172860LLU;
	static uint32_t x112 = 252U;
	volatile uint32_t t27 = 202718319U;

	t27 = (x109&((x110==x111)<=x112));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 0U;
	static uint64_t x114 = UINT64_MAX;
	static int16_t x116 = INT16_MIN;
	volatile uint32_t t28 = 71677U;

	t28 = (x113&((x114==x115)<=x116));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	uint32_t t29 = 6090U;

	t29 = (x117&((x118==x119)<=x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 11;
	volatile uint32_t x123 = UINT32_MAX;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = -29047;

	t30 = (x121&((x122==x123)<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 1506398LLU;
	int64_t x127 = -1LL;
	uint32_t x128 = 23460734U;
	volatile uint64_t t31 = 185020537955656053LLU;

	t31 = (x125&((x126==x127)<=x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 2U;
	uint16_t x130 = 1011U;
	uint64_t x132 = UINT64_MAX;
	int32_t t32 = -16017293;

	t32 = (x129&((x130==x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	uint64_t x134 = 708759144975391LLU;
	volatile int64_t x136 = -1LL;
	volatile int64_t t33 = 139095115984LL;

	t33 = (x133&((x134==x135)<=x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 6U;
	int32_t x138 = INT32_MIN;
	volatile int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;

	t34 = (x137&((x138==x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = -1;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 2329;

	t35 = (x141&((x142==x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 4964389U;
	static int16_t x146 = -1;
	int16_t x147 = -3042;
	int16_t x148 = 2648;

	t36 = (x145&((x146==x147)<=x148));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile int64_t x151 = -911924126777LL;
	int16_t x152 = INT16_MIN;

	t37 = (x149&((x150==x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 51U;
	int16_t x154 = -1;
	int64_t x156 = INT64_MAX;
	static int32_t t38 = -3944401;

	t38 = (x153&((x154==x155)<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static volatile int64_t x158 = INT64_MIN;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t t39 = -7;

	t39 = (x157&((x158==x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MIN;
	static uint64_t x163 = UINT64_MAX;
	int16_t x164 = -1;
	int32_t t40 = -168;

	t40 = (x161&((x162==x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -1;
	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MIN;
	static volatile int16_t x168 = INT16_MIN;
	int32_t t41 = -967600;

	t41 = (x165&((x166==x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = 173273015784LLU;
	uint64_t x170 = UINT64_MAX;
	volatile int16_t x171 = -7455;
	int64_t x172 = -1LL;
	uint64_t t42 = 5LLU;

	t42 = (x169&((x170==x171)<=x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	int64_t x175 = -1LL;
	uint32_t x176 = 10859383U;
	int32_t t43 = -364768;

	t43 = (x173&((x174==x175)<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 11U;
	uint16_t x179 = UINT16_MAX;
	int64_t x180 = -1LL;
	static volatile int32_t t44 = -154;

	t44 = (x177&((x178==x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 34U;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	static volatile uint16_t x184 = UINT16_MAX;
	static volatile int32_t t45 = 16;

	t45 = (x181&((x182==x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 239LLU;
	int64_t x186 = -1LL;
	uint32_t x188 = UINT32_MAX;

	t46 = (x185&((x186==x187)<=x188));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 524026980427247626LL;
	int8_t x190 = INT8_MIN;
	int16_t x192 = -27;
	volatile int64_t t47 = -3842315953LL;

	t47 = (x189&((x190==x191)<=x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	static int64_t x194 = -117286LL;
	int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = -4;

	t48 = (x193&((x194==x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	static int64_t x198 = INT64_MIN;
	volatile int8_t x199 = -1;
	volatile uint64_t x200 = 208287692545598LLU;
	static volatile int32_t t49 = 3948;

	t49 = (x197&((x198==x199)<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = -1;
	int8_t x203 = -1;
	volatile int32_t t50 = -237;

	t50 = (x201&((x202==x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -17277294562LL;
	int32_t x206 = -1;
	int32_t x207 = 2873068;

	t51 = (x205&((x206==x207)<=x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = UINT32_MAX;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t52 = 14;

	t52 = (x209&((x210==x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint64_t x214 = 217543211798744260LLU;
	volatile int64_t x216 = INT64_MIN;

	t53 = (x213&((x214==x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -714LL;
	volatile int8_t x218 = INT8_MIN;
	static volatile int32_t x219 = -18042;
	int8_t x220 = INT8_MAX;
	volatile int64_t t54 = -9129539232LL;

	t54 = (x217&((x218==x219)<=x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	volatile uint8_t x223 = UINT8_MAX;
	volatile int8_t x224 = INT8_MIN;

	t55 = (x221&((x222==x223)<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	static volatile int64_t x226 = INT64_MAX;
	uint16_t x228 = 12U;
	int32_t t56 = 4130;

	t56 = (x225&((x226==x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int8_t x230 = INT8_MIN;
	int16_t x231 = 118;
	uint64_t x232 = 3LLU;
	static int32_t t57 = 713952552;

	t57 = (x229&((x230==x231)<=x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = UINT16_MAX;
	uint8_t x235 = 9U;
	static int64_t x236 = INT64_MIN;
	int32_t t58 = 241095713;

	t58 = (x233&((x234==x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x238 = 682118746332184LL;
	int8_t x240 = INT8_MIN;
	static int32_t t59 = 12596488;

	t59 = (x237&((x238==x239)<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x242 = 10LL;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t60 = 6;

	t60 = (x241&((x242==x243)<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x246 = INT16_MAX;
	int64_t x247 = 299911078320LL;
	static uint8_t x248 = 4U;
	int32_t t61 = -737524926;

	t61 = (x245&((x246==x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = 1910186315LLU;
	volatile uint8_t x250 = 26U;
	uint8_t x252 = 4U;
	uint64_t t62 = 1585LLU;

	t62 = (x249&((x250==x251)<=x252));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MAX;
	int16_t x256 = INT16_MIN;

	t63 = (x253&((x254==x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 211U;
	static int16_t x258 = INT16_MIN;
	int8_t x260 = 15;
	int32_t t64 = -81;

	t64 = (x257&((x258==x259)<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	volatile uint16_t x262 = 16697U;
	int32_t x263 = 6882683;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 6;

	t65 = (x261&((x262==x263)<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 0U;
	volatile int16_t x266 = -1;
	int8_t x267 = INT8_MAX;
	uint64_t x268 = 2730269LLU;
	int32_t t66 = -565060;

	t66 = (x265&((x266==x267)<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -585;
	int32_t x270 = -1;
	uint32_t x271 = 85U;
	volatile int8_t x272 = -1;

	t67 = (x269&((x270==x271)<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x276 = -1;

	t68 = (x273&((x274==x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -6;

	t69 = (x277&((x278==x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	static int32_t x282 = INT32_MIN;
	int16_t x283 = -1;
	volatile int32_t t70 = 65738672;

	t70 = (x281&((x282==x283)<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x285 = UINT16_MAX;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = -4;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 5;

	t71 = (x285&((x286==x287)<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	static int64_t x290 = 6489LL;
	volatile uint8_t x291 = 1U;
	int32_t x292 = -1;
	int32_t t72 = 258769562;

	t72 = (x289&((x290==x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = UINT16_MAX;
	int8_t x294 = INT8_MIN;
	volatile int32_t x295 = -1;
	int32_t t73 = 1;

	t73 = (x293&((x294==x295)<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static volatile uint64_t x299 = UINT64_MAX;
	uint32_t x300 = 71U;
	volatile int32_t t74 = -61745153;

	t74 = (x297&((x298==x299)<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 0;
	int16_t x302 = -674;
	int32_t x303 = 10205;
	volatile int32_t x304 = -256046490;
	int32_t t75 = 2;

	t75 = (x301&((x302==x303)<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	int16_t x306 = -1;
	int16_t x307 = INT16_MAX;
	int8_t x308 = INT8_MAX;
	volatile int64_t t76 = -2119399LL;

	t76 = (x305&((x306==x307)<=x308));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MAX;
	uint16_t x311 = UINT16_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -22656;

	t77 = (x309&((x310==x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 239U;
	int64_t x315 = INT64_MAX;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -109;

	t78 = (x313&((x314==x315)<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	uint8_t x319 = UINT8_MAX;
	static int16_t x320 = 107;
	int32_t t79 = 280769;

	t79 = (x317&((x318==x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 47851983629852096LLU;
	static volatile uint8_t x323 = 1U;
	int8_t x324 = 2;
	uint64_t t80 = 308143030354988308LLU;

	t80 = (x321&((x322==x323)<=x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	static int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	volatile int32_t t81 = 1415;

	t81 = (x325&((x326==x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = 31879U;
	int8_t x331 = 61;
	int16_t x332 = INT16_MIN;

	t82 = (x329&((x330==x331)<=x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 10;
	static int32_t x334 = -1;
	int8_t x335 = -8;
	static uint8_t x336 = 1U;
	static volatile int32_t t83 = -36156635;

	t83 = (x333&((x334==x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	static uint64_t x339 = 118221LLU;
	uint32_t x340 = UINT32_MAX;
	static int32_t t84 = 30948;

	t84 = (x337&((x338==x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = 7045310;
	int32_t x342 = -3;
	int8_t x343 = INT8_MIN;
	static volatile int8_t x344 = 5;
	int32_t t85 = 722656;

	t85 = (x341&((x342==x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = -1;
	volatile int16_t x348 = INT16_MAX;
	int32_t t86 = -28;

	t86 = (x345&((x346==x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x350 = 63;
	uint16_t x351 = UINT16_MAX;
	int32_t x352 = 5;

	t87 = (x349&((x350==x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 804U;
	int64_t x354 = INT64_MAX;
	int16_t x355 = -1;
	int64_t x356 = INT64_MIN;
	static volatile int32_t t88 = -1;

	t88 = (x353&((x354==x355)<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	static int16_t x359 = -409;
	int64_t x360 = INT64_MIN;
	int32_t t89 = -1;

	t89 = (x357&((x358==x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;

	t90 = (x361&((x362==x363)<=x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x367 = UINT64_MAX;
	uint16_t x368 = UINT16_MAX;
	uint64_t t91 = 5263LLU;

	t91 = (x365&((x366==x367)<=x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	volatile uint8_t x372 = UINT8_MAX;
	uint64_t t92 = 12685LLU;

	t92 = (x369&((x370==x371)<=x372));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MIN;
	uint64_t x375 = 1050453566512990LLU;
	uint32_t x376 = 0U;
	volatile int64_t t93 = 729186029518316663LL;

	t93 = (x373&((x374==x375)<=x376));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MAX;
	int32_t x378 = INT32_MIN;
	uint16_t x380 = 3U;
	volatile int32_t t94 = -30373;

	t94 = (x377&((x378==x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x384 = INT32_MAX;
	uint64_t t95 = 1104976098072611992LLU;

	t95 = (x381&((x382==x383)<=x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;

	t96 = (x385&((x386==x387)<=x388));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 10U;
	static volatile int16_t x390 = INT16_MAX;
	static volatile uint32_t x391 = 5U;

	t97 = (x389&((x390==x391)<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	static volatile uint16_t x394 = 5U;
	int64_t x395 = -1LL;
	uint32_t x396 = UINT32_MAX;

	t98 = (x393&((x394==x395)<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x398 = INT16_MIN;
	volatile uint8_t x400 = UINT8_MAX;
	uint32_t t99 = 123355U;

	t99 = (x397&((x398==x399)<=x400));

	if (t99 != 1U) { NG(); } else { ; }
	
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

