#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
int32_t t0 = -495;
int64_t x5 = -1LL;
int16_t x6 = INT16_MIN;
uint32_t x7 = 0U;
volatile int64_t t3 = -1778LL;
static int8_t x18 = 1;
int64_t x22 = -373245273973617LL;
uint64_t x23 = 1958813770012LLU;
int16_t x28 = INT16_MAX;
static int8_t x30 = INT8_MAX;
int8_t x35 = -1;
static int64_t x40 = INT64_MIN;
static volatile int8_t x42 = -1;
static uint64_t x44 = 347LLU;
static int64_t x46 = INT64_MAX;
uint16_t x47 = 29138U;
static int64_t x50 = INT64_MIN;
static uint16_t x51 = UINT16_MAX;
int64_t t12 = 315LL;
volatile uint16_t x55 = UINT16_MAX;
int64_t x76 = INT64_MIN;
uint64_t t15 = 2184692468725882LLU;
static volatile int64_t x83 = INT64_MIN;
static int8_t x86 = INT8_MAX;
static uint32_t x94 = 174U;
uint32_t x99 = 745U;
volatile uint16_t x100 = 95U;
int64_t t22 = -52693205LL;
static int64_t x108 = -1LL;
int16_t x120 = INT16_MIN;
int64_t t27 = 9652798741LL;
int8_t x126 = 2;
static int32_t x138 = -164392565;
int32_t x148 = INT32_MAX;
uint32_t x151 = 426457U;
uint64_t x155 = 51430LLU;
static volatile int64_t x159 = INT64_MIN;
int8_t x160 = INT8_MIN;
int16_t x165 = INT16_MIN;
volatile int8_t x176 = INT8_MAX;
int64_t t41 = 10472LL;
uint64_t x191 = 38331116169941LLU;
uint64_t t44 = 127LLU;
uint16_t x195 = UINT16_MAX;
uint8_t x198 = UINT8_MAX;
int8_t x200 = -1;
uint64_t x204 = UINT64_MAX;
static volatile uint32_t x205 = 422U;
static volatile uint8_t x214 = 6U;
uint16_t x217 = 0U;
int64_t x218 = -7107529LL;
int64_t x220 = -15430461707315088LL;
volatile int64_t t51 = 121758097481382LL;
int8_t x228 = INT8_MIN;
volatile uint8_t x236 = UINT8_MAX;
int32_t x239 = 1;
int16_t x244 = INT16_MIN;
int16_t x248 = INT16_MIN;
volatile uint32_t t58 = 222783U;
volatile uint32_t x249 = 32874994U;
volatile uint32_t t59 = 16237U;
volatile int64_t t61 = -10536705698802279LL;
static uint8_t x261 = 0U;
static int8_t x265 = INT8_MAX;
static uint16_t x268 = UINT16_MAX;
volatile int64_t t65 = 16935145142206765LL;
volatile int64_t x279 = 893706843981423623LL;
static volatile int64_t t67 = -370843115681LL;
int32_t t68 = INT32_MAX;
int16_t x289 = -271;
static int8_t x293 = INT8_MIN;
static uint16_t x294 = UINT16_MAX;
uint32_t x295 = 1002804881U;
volatile int32_t x300 = INT32_MAX;
uint8_t x301 = 2U;
static int32_t x305 = 127;
volatile int64_t x306 = -1LL;
int64_t x307 = INT64_MIN;
int16_t x315 = -13;
int64_t x316 = INT64_MAX;
uint64_t x318 = 38665381LLU;
int64_t x320 = 1185023799097632LL;
volatile uint64_t x325 = UINT64_MAX;
uint64_t t78 = 63011LLU;
int64_t x332 = INT64_MIN;
int8_t x334 = -6;
int64_t x338 = INT64_MIN;
int64_t x339 = 102763111LL;
static uint8_t x342 = 1U;
volatile int32_t t82 = 368397;
static int64_t x350 = 2848563333LL;
uint32_t x354 = 466U;
volatile int16_t x367 = INT16_MIN;
int64_t x382 = INT64_MIN;
int64_t x391 = 4484213481405093LL;
static volatile uint32_t x392 = 406U;
static int64_t t92 = -821705453357751546LL;
uint32_t x393 = 51914159U;
int16_t x394 = 3321;
static int64_t x395 = INT64_MAX;
uint64_t t94 = 973LLU;
static volatile uint64_t x404 = 396714483128198228LLU;
int64_t x405 = INT64_MIN;
volatile int8_t x406 = INT8_MIN;
volatile int32_t x407 = INT32_MAX;
static int16_t x411 = INT16_MAX;
int64_t t97 = 64610330628LL;
volatile int32_t x419 = 539;


void f0(void) {
	static int32_t x1 = -1;
	int16_t x2 = -1;
	int8_t x4 = -1;

	t0 = (x1-((x2^x3)%x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x8 = 60;
	int64_t t1 = -14887487648361LL;

	t1 = (x5-((x6^x7)%x8));

	if (t1 != -9LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 34972514580LL;
	static uint8_t x10 = 1U;
	static uint64_t x11 = 5333070573LLU;
	volatile int32_t x12 = -71872;
	static volatile uint64_t t2 = 22LLU;

	t2 = (x9-((x10^x11)%x12));

	if (t2 != 29639444008LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = -1;
	int8_t x15 = INT8_MAX;
	static int64_t x16 = INT64_MAX;

	t3 = (x13-((x14^x15)%x16));

	if (t3 != -32640LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x19 = -1;
	int8_t x20 = 1;
	static volatile int64_t t4 = -482674281LL;

	t4 = (x17-((x18^x19)%x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	static int32_t x24 = INT32_MAX;
	uint64_t t5 = 1451022471LLU;

	t5 = (x21-((x22^x23)%x24));

	if (t5 != 18446744073669748838LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 90U;
	int64_t x26 = -80145257LL;
	volatile int16_t x27 = INT16_MAX;
	volatile int64_t t6 = 775524978297182043LL;

	t6 = (x25-((x26^x27)%x28));

	if (t6 != 7807LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	uint16_t x31 = 1193U;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 15;

	t7 = (x29-((x30^x31)%x32));

	if (t7 != 31529) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 0;
	int16_t x34 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -14;

	t8 = (x33-((x34^x35)%x36));

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile uint16_t x38 = 904U;
	uint32_t x39 = UINT32_MAX;
	int64_t t9 = -89471136686LL;

	t9 = (x37-((x38^x39)%x40));

	if (t9 != -4294966264LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint8_t x43 = 28U;
	volatile uint64_t t10 = 1599461813520LLU;

	t10 = (x41-((x42^x43)%x44));

	if (t10 != 18446744073709518710LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 1021U;
	static uint32_t x48 = 31U;
	static int64_t t11 = 1469LL;

	t11 = (x45-((x46^x47)%x48));

	if (t11 != 1012LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -994138;
	int64_t x52 = -99599LL;

	t12 = (x49-((x50^x51)%x52));

	if (t12 != -915108LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 395968983U;
	volatile int8_t x54 = INT8_MIN;
	static uint32_t x56 = 908553U;
	uint32_t t13 = 1U;

	t13 = (x53-((x54^x55)%x56));

	if (t13 != 395797127U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -4;
	int8_t x66 = INT8_MIN;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MAX;
	static uint32_t t14 = 0U;

	t14 = (x65-((x66^x67)%x68));

	if (t14 != 4294967165U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	static uint64_t x74 = UINT64_MAX;
	int16_t x75 = 468;

	t15 = (x73-((x74^x75)%x76));

	if (t15 != 9223372036854776276LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 11;
	int32_t x78 = INT32_MIN;
	static int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MAX;
	static volatile int32_t t16 = 207985;

	t16 = (x77-((x78^x79)%x80));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = -1LL;
	uint64_t x84 = 47426LLU;
	uint64_t t17 = 102976336525LLU;

	t17 = (x81-((x82^x83)%x84));

	if (t17 != 18446744073709521701LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	int8_t x87 = INT8_MAX;
	volatile uint8_t x88 = 44U;
	int32_t t18 = 84585629;

	t18 = (x85-((x86^x87)%x88));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 3U;
	static int64_t x92 = -1LL;
	volatile int64_t t19 = -2LL;

	t19 = (x89-((x90^x91)%x92));

	if (t19 != -128LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = INT16_MAX;
	int64_t x95 = -1LL;
	uint16_t x96 = 17448U;
	static volatile int64_t t20 = -1446LL;

	t20 = (x93-((x94^x95)%x96));

	if (t20 != 32942LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = 26;
	volatile uint32_t t21 = 6U;

	t21 = (x97-((x98^x99)%x100));

	if (t21 != 4294934438U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x101 = 10979U;
	volatile int64_t x102 = INT64_MIN;
	volatile int8_t x103 = -1;
	static uint32_t x104 = UINT32_MAX;

	t22 = (x101-((x102^x103)%x104));

	if (t22 != -2147472668LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x105 = -709;
	int8_t x106 = -12;
	int16_t x107 = INT16_MIN;
	int64_t t23 = 25958LL;

	t23 = (x105-((x106^x107)%x108));

	if (t23 != -709LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 747U;
	int32_t x110 = -1;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 39U;
	static uint64_t t24 = 3783163191056098LLU;

	t24 = (x109-((x110^x111)%x112));

	if (t24 != 747LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 364714363410828LLU;
	int32_t x114 = INT32_MIN;
	uint8_t x115 = 121U;
	uint64_t x116 = 259565902LLU;
	uint64_t t25 = 12801517149LLU;

	t25 = (x113-((x114^x115)%x116));

	if (t25 != 364714187179417LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 53U;
	uint8_t x118 = 1U;
	volatile int64_t x119 = INT64_MAX;
	int64_t t26 = 7LL;

	t26 = (x117-((x118^x119)%x120));

	if (t26 != -32713LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 19U;
	static volatile int8_t x122 = INT8_MIN;
	uint32_t x123 = 316U;
	int64_t x124 = INT64_MAX;

	t27 = (x121-((x122^x123)%x124));

	if (t27 != -4294966953LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -6;
	uint16_t x127 = 7U;
	int8_t x128 = INT8_MIN;
	int32_t t28 = 239599;

	t28 = (x125-((x126^x127)%x128));

	if (t28 != -11) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 5U;
	uint64_t x130 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;
	volatile uint64_t t29 = 143974LLU;

	t29 = (x129-((x130^x131)%x132));

	if (t29 != 18446744071562068229LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = -58;
	int32_t x134 = -218;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t30 = 4;

	t30 = (x133-((x134^x135)%x136));

	if (t30 != -32608) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x137 = INT64_MIN;
	static volatile int32_t x139 = INT32_MAX;
	int16_t x140 = INT16_MIN;
	static volatile int64_t t31 = 33553338405049LL;

	t31 = (x137-((x138^x139)%x140));

	if (t31 != -9223372036854771316LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x141 = INT16_MAX;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	volatile int64_t t32 = 34531045502479LL;

	t32 = (x141-((x142^x143)%x144));

	if (t32 != -2147418113LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	static int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	volatile int32_t t33 = -19643;

	t33 = (x145-((x146^x147)%x148));

	if (t33 != -2147450753) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MAX;
	static int8_t x152 = INT8_MIN;
	volatile uint64_t t34 = 57497449015LLU;

	t34 = (x149-((x150^x151)%x152));

	if (t34 != 18446744073709093337LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = 0;
	int8_t x156 = -1;
	volatile uint64_t t35 = 440632953610733LLU;

	t35 = (x153-((x154^x155)%x156));

	if (t35 != 18446744073709467418LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x157 = 1967U;
	uint64_t x158 = 1589997956482859LLU;
	volatile uint64_t t36 = 220969157980LLU;

	t36 = (x157-((x158^x159)%x160));

	if (t36 != 9221782038898294916LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -5883;
	uint16_t x162 = UINT16_MAX;
	static uint16_t x163 = 177U;
	static uint64_t x164 = 5542604723599103LLU;
	static volatile uint64_t t37 = 2107686903167734LLU;

	t37 = (x161-((x162^x163)%x164));

	if (t37 != 18446744073709480375LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x166 = 2U;
	volatile uint16_t x167 = UINT16_MAX;
	volatile uint32_t x168 = 10474391U;
	volatile uint32_t t38 = 169711U;

	t38 = (x165-((x166^x167)%x168));

	if (t38 != 4294868995U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MAX;
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = -20;
	int8_t x172 = INT8_MAX;
	volatile uint32_t t39 = 3868U;

	t39 = (x169-((x170^x171)%x172));

	if (t39 != 2147483628U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x173 = 1207785806U;
	static volatile int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	volatile int64_t t40 = 527975LL;

	t40 = (x173-((x174^x175)%x176));

	if (t40 != 1207785686LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -1;
	static int64_t x178 = INT64_MAX;
	int8_t x179 = INT8_MIN;
	int16_t x180 = 2858;

	t41 = (x177-((x178^x179)%x180));

	if (t41 != 492LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	static int64_t x183 = INT64_MAX;
	int64_t x184 = 1479607894LL;
	int64_t t42 = 3LL;

	t42 = (x181-((x182^x183)%x184));

	if (t42 != 1327818449LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = INT64_MIN;
	uint16_t x186 = UINT16_MAX;
	static int64_t x187 = -29517LL;
	volatile uint64_t x188 = 2137181042497LLU;
	volatile uint64_t t43 = 500200163896763766LLU;

	t43 = (x185-((x186^x187)%x188));

	if (t43 != 9223370594034443683LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -1653714;
	volatile int8_t x190 = INT8_MAX;
	int64_t x192 = INT64_MIN;

	t44 = (x189-((x190^x191)%x192));

	if (t44 != 18446705742591728004LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x193 = -1LL;
	static uint32_t x194 = 35U;
	uint16_t x196 = UINT16_MAX;
	volatile int64_t t45 = 14728096957LL;

	t45 = (x193-((x194^x195)%x196));

	if (t45 != -65501LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MAX;
	uint16_t x199 = 46U;
	static int32_t t46 = 25;

	t46 = (x197-((x198^x199)%x200));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1161;
	volatile uint16_t x202 = 0U;
	static volatile int32_t x203 = 50;
	uint64_t t47 = 109397LLU;

	t47 = (x201-((x202^x203)%x204));

	if (t47 != 18446744073709550405LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x206 = INT8_MAX;
	uint16_t x207 = 839U;
	int8_t x208 = INT8_MIN;
	volatile uint32_t t48 = 203950920U;

	t48 = (x205-((x206^x207)%x208));

	if (t48 != 366U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x209 = INT32_MIN;
	volatile uint64_t x210 = 1374344689496652LLU;
	int16_t x211 = INT16_MAX;
	int16_t x212 = INT16_MIN;
	static uint64_t t49 = 1284199LLU;

	t49 = (x209-((x210^x211)%x212));

	if (t49 != 18445369726872564301LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = INT16_MIN;
	static uint64_t x215 = UINT64_MAX;
	int32_t x216 = -1283624;
	volatile uint64_t t50 = 179877LLU;

	t50 = (x213-((x214^x215)%x216));

	if (t50 != 18446744073708235231LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x219 = UINT8_MAX;

	t51 = (x217-((x218^x219)%x220));

	if (t51 != 7107384LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = INT8_MAX;
	uint32_t x222 = 26459U;
	uint16_t x223 = 8U;
	uint64_t x224 = UINT64_MAX;
	uint64_t t52 = 9860797841543197LLU;

	t52 = (x221-((x222^x223)%x224));

	if (t52 != 18446744073709525292LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = UINT8_MAX;
	uint8_t x227 = UINT8_MAX;
	int64_t t53 = INT64_MIN;

	t53 = (x225-((x226^x227)%x228));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x229 = 8792U;
	static volatile int16_t x230 = INT16_MAX;
	uint8_t x231 = 3U;
	uint8_t x232 = 53U;
	volatile int32_t t54 = -1;

	t54 = (x229-((x230^x231)%x232));

	if (t54 != 8782) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = INT64_MIN;
	int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x233-((x234^x235)%x236));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x237 = 7U;
	static int64_t x238 = INT64_MIN;
	static volatile int32_t x240 = -1;
	volatile int64_t t56 = 55376725603609049LL;

	t56 = (x237-((x238^x239)%x240));

	if (t56 != 7LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -54;
	static int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MIN;
	int32_t t57 = 6400;

	t57 = (x241-((x242^x243)%x244));

	if (t57 != 32587) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = UINT16_MAX;
	uint8_t x246 = 0U;
	uint32_t x247 = 42190625U;

	t58 = (x245-((x246^x247)%x248));

	if (t58 != 4252842206U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x250 = INT32_MAX;
	uint32_t x251 = UINT32_MAX;
	static int32_t x252 = INT32_MIN;

	t59 = (x249-((x250^x251)%x252));

	if (t59 != 32874994U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MAX;
	int32_t x254 = -1;
	uint64_t x255 = UINT64_MAX;
	uint16_t x256 = 6457U;
	volatile uint64_t t60 = 15959219120LLU;

	t60 = (x253-((x254^x255)%x256));

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x257 = -844;
	int64_t x258 = INT64_MAX;
	int32_t x259 = -1;
	int32_t x260 = INT32_MIN;

	t61 = (x257-((x258^x259)%x260));

	if (t61 != -844LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x262 = -478611423865955289LL;
	uint64_t x263 = 566LLU;
	volatile uint8_t x264 = UINT8_MAX;
	volatile uint64_t t62 = 4039427LLU;

	t62 = (x261-((x262^x263)%x264));

	if (t62 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	int32_t t63 = 399366969;

	t63 = (x265-((x266^x267)%x268));

	if (t63 != 32640) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MAX;
	uint64_t x270 = UINT64_MAX;
	volatile uint64_t x271 = 335633937901973762LLU;
	static volatile uint16_t x272 = UINT16_MAX;
	volatile uint64_t t64 = 6702313518236029789LLU;

	t64 = (x269-((x270^x271)%x272));

	if (t64 != 2147461674LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = -1;
	int64_t x274 = INT64_MAX;
	uint16_t x275 = UINT16_MAX;
	static int64_t x276 = INT64_MAX;

	t65 = (x273-((x274^x275)%x276));

	if (t65 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x277 = INT16_MIN;
	int64_t x278 = 116032124590062350LL;
	uint32_t x280 = 6060994U;
	volatile int64_t t66 = 48054LL;

	t66 = (x277-((x278^x279)%x280));

	if (t66 != -5015307LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	uint32_t x282 = 2U;
	volatile int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;

	t67 = (x281-((x282^x283)%x284));

	if (t67 != -4294966915LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x285 = INT32_MAX;
	static uint16_t x286 = UINT16_MAX;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -1;

	t68 = (x285-((x286^x287)%x288));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x290 = 231U;
	int16_t x291 = -10444;
	int64_t x292 = INT64_MIN;
	volatile int64_t t69 = -794348751LL;

	t69 = (x289-((x290^x291)%x292));

	if (t69 != -4294957282LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x296 = UINT16_MAX;
	static uint32_t t70 = 7903650U;

	t70 = (x293-((x294^x295)%x296));

	if (t70 != 4294924877U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	volatile uint64_t x298 = 546667936752576075LLU;
	uint32_t x299 = 28U;
	volatile uint64_t t71 = 42913LLU;

	t71 = (x297-((x298^x299)%x300));

	if (t71 != 9223372036260760186LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x302 = -1LL;
	volatile int16_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	uint64_t t72 = 1LLU;

	t72 = (x301-((x302^x303)%x304));

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x308 = 40;
	static int64_t t73 = -67018LL;

	t73 = (x305-((x306^x307)%x308));

	if (t73 != 120LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x309 = 6800687885LLU;
	static int8_t x310 = 1;
	volatile uint32_t x311 = 712345595U;
	int32_t x312 = 1;
	uint64_t t74 = 15337046LLU;

	t74 = (x309-((x310^x311)%x312));

	if (t74 != 6800687885LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = -1;
	volatile int64_t t75 = -59386000165LL;

	t75 = (x313-((x314^x315)%x316));

	if (t75 != 32755LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -1;
	int64_t x319 = -1LL;
	uint64_t t76 = 376065053LLU;

	t76 = (x317-((x318^x319)%x320));

	if (t76 != 18446080456792405093LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 11555U;
	int32_t x322 = -1;
	volatile int32_t x323 = -1020089195;
	volatile uint8_t x324 = 9U;
	int32_t t77 = 1;

	t77 = (x321-((x322^x323)%x324));

	if (t77 != 11548) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 413542450914LLU;
	static uint16_t x328 = 5265U;

	t78 = (x325-((x326^x327)%x328));

	if (t78 != 18446744073709548717LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x329 = -106;
	volatile int32_t x330 = INT32_MIN;
	volatile int8_t x331 = INT8_MAX;
	int64_t t79 = -5788776665549LL;

	t79 = (x329-((x330^x331)%x332));

	if (t79 != 2147483415LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MIN;
	int64_t x335 = -1LL;
	int8_t x336 = INT8_MAX;
	static volatile int64_t t80 = -3730444882516LL;

	t80 = (x333-((x334^x335)%x336));

	if (t80 != -32773LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = 4202;
	uint32_t x340 = 307216U;
	int64_t t81 = 6LL;

	t81 = (x337-((x338^x339)%x340));

	if (t81 != 83475LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	volatile int32_t x343 = INT32_MIN;
	static int8_t x344 = 3;

	t82 = (x341-((x342^x343)%x344));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x345 = -1198LL;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 15U;
	static int64_t t83 = 111777623LL;

	t83 = (x345-((x346^x347)%x348));

	if (t83 != -1189LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x349 = 364286944U;
	int32_t x351 = -1;
	int16_t x352 = -1;
	volatile int64_t t84 = 18449226098LL;

	t84 = (x349-((x350^x351)%x352));

	if (t84 != 364286944LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	static volatile int64_t x355 = -1LL;
	int16_t x356 = INT16_MIN;
	volatile int64_t t85 = 8112535861LL;

	t85 = (x353-((x354^x355)%x356));

	if (t85 != 466LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = -1;
	int8_t x358 = 22;
	int16_t x359 = INT16_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t86 = 411505;

	t86 = (x357-((x358^x359)%x360));

	if (t86 != -106) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	int8_t x363 = 0;
	int32_t x364 = -1;
	volatile int64_t t87 = -205812638193779861LL;

	t87 = (x361-((x362^x363)%x364));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = 8U;
	static int64_t x366 = -65342563437LL;
	uint16_t x368 = 9815U;
	int64_t t88 = 46844LL;

	t88 = (x365-((x366^x367)%x368));

	if (t88 != -6739LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 2489418LLU;
	int8_t x370 = -1;
	static int32_t x371 = INT32_MIN;
	uint16_t x372 = 1427U;
	uint64_t t89 = 15LLU;

	t89 = (x369-((x370^x371)%x372));

	if (t89 != 2488082LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x373 = -1;
	volatile uint16_t x374 = UINT16_MAX;
	uint32_t x375 = UINT32_MAX;
	uint16_t x376 = 2665U;
	uint32_t t90 = 1442077081U;

	t90 = (x373-((x374^x375)%x376));

	if (t90 != 4294966210U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x381 = -348026168LL;
	volatile int16_t x383 = INT16_MIN;
	volatile int16_t x384 = -1;
	static int64_t t91 = -1520159056186258LL;

	t91 = (x381-((x382^x383)%x384));

	if (t91 != -348026168LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x389 = -9;
	uint16_t x390 = 0U;

	t92 = (x389-((x390^x391)%x392));

	if (t92 != -74LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x396 = INT16_MIN;
	volatile int64_t t93 = -56009243493709856LL;

	t93 = (x393-((x394^x395)%x396));

	if (t93 != 51884713LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = 1U;
	int16_t x398 = INT16_MAX;
	uint64_t x399 = 19571LLU;
	int16_t x400 = -1;

	t94 = (x397-((x398^x399)%x400));

	if (t94 != 18446744073709538421LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	static uint32_t x402 = 2239749U;
	int8_t x403 = 1;
	volatile uint64_t t95 = 4709LLU;

	t95 = (x401-((x402^x403)%x404));

	if (t95 != 18446744073707311740LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x408 = UINT16_MAX;
	static volatile int64_t t96 = 129659LL;

	t96 = (x405-((x406^x407)%x408));

	if (t96 != -9223372036854743167LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x409 = -2;
	static volatile int8_t x410 = 0;
	int64_t x412 = INT64_MIN;

	t97 = (x409-((x410^x411)%x412));

	if (t97 != -32769LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x413 = 0U;
	int8_t x414 = -4;
	static uint32_t x415 = 700886U;
	static int32_t x416 = INT32_MIN;
	volatile uint32_t t98 = 1014U;

	t98 = (x413-((x414^x415)%x416));

	if (t98 != 2148184534U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = -1;
	uint8_t x418 = 28U;
	volatile int32_t x420 = INT32_MAX;
	int32_t t99 = 17767052;

	t99 = (x417-((x418^x419)%x420));

	if (t99 != -520) { NG(); } else { ; }
	
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

