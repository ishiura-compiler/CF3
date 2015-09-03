#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -60526;
volatile uint64_t t1 = 5894143922173230LLU;
int16_t x9 = 119;
static int64_t x12 = INT64_MIN;
uint64_t t2 = 61435281462001LLU;
int16_t x15 = INT16_MIN;
int32_t x16 = 5406754;
volatile int32_t t4 = -41;
static int8_t x25 = INT8_MIN;
int16_t x34 = INT16_MIN;
int64_t x36 = -1LL;
int8_t x42 = INT8_MAX;
uint64_t x51 = 47758426903106229LLU;
static int16_t x65 = INT16_MIN;
int64_t t15 = -978LL;
uint64_t x69 = 858769988LLU;
uint32_t x72 = UINT32_MAX;
static volatile uint16_t x73 = 1942U;
static int32_t t18 = -15988663;
static volatile int64_t t19 = 1223LL;
static int64_t x98 = 1LL;
int32_t x99 = -6;
int64_t t22 = 329417974090754255LL;
volatile int8_t x101 = 1;
static int8_t x103 = -1;
volatile int8_t x109 = INT8_MAX;
uint64_t x122 = 5063618095LLU;
volatile int16_t x124 = INT16_MIN;
uint64_t t27 = 751337592LLU;
int16_t x127 = -1;
int16_t x130 = -1;
volatile int64_t t29 = -41LL;
static uint32_t x134 = 12143U;
int16_t x147 = INT16_MIN;
volatile uint64_t x148 = 3379711417LLU;
uint64_t t31 = 2105029461LLU;
int64_t x149 = INT64_MIN;
int16_t x150 = 26;
int64_t t33 = -1127747765139LL;
int8_t x158 = -1;
volatile int16_t x159 = 61;
int32_t x166 = 543;
volatile uint32_t t37 = 118U;
int16_t x180 = INT16_MIN;
int16_t x183 = -1;
uint64_t t40 = 2195LLU;
static volatile int16_t x208 = -29;
static int64_t t42 = 26277436113LL;
uint64_t x211 = 6501411427LLU;
volatile uint64_t t43 = 6517LLU;
int32_t x226 = INT32_MIN;
volatile int32_t x231 = INT32_MIN;
int32_t t47 = 1931371;
int32_t x233 = INT32_MIN;
uint64_t t48 = 1474957LLU;
static int16_t x237 = -4;
uint32_t x249 = 3U;
static uint16_t x260 = 5U;
int64_t x272 = INT64_MAX;
uint64_t t57 = 6343227LLU;
volatile uint64_t t58 = 42LLU;
uint32_t x293 = 1901U;
int64_t x316 = INT64_MAX;
int64_t t64 = -1585082597835799LL;
int16_t x327 = -12;
static uint8_t x332 = 0U;
int64_t t67 = -148LL;
int16_t x351 = INT16_MIN;
int16_t x352 = -1;
volatile int16_t x355 = INT16_MAX;
volatile int16_t x356 = 16;
uint8_t x358 = UINT8_MAX;
volatile uint64_t t72 = 139548193327864203LLU;
static uint32_t x361 = 88732U;
volatile int64_t t73 = 164LL;
int16_t x370 = -507;
uint8_t x371 = UINT8_MAX;
static int32_t x372 = -32437664;
volatile uint32_t x382 = 3158U;
volatile uint16_t x383 = UINT16_MAX;
int64_t x387 = 51885LL;
int8_t x388 = -31;
int16_t x392 = INT16_MIN;
uint16_t x396 = 806U;
volatile int16_t x409 = INT16_MIN;
uint64_t x416 = 25691971940419762LLU;
static uint64_t x420 = 353755346742LLU;
int64_t x427 = INT64_MIN;
static volatile uint32_t x430 = 4369U;
uint64_t t87 = 1904406885470123LLU;
int64_t t88 = 2514247171243646775LL;
uint64_t x438 = UINT64_MAX;
int16_t x440 = -201;
static volatile uint64_t t90 = 520523685230541LLU;
volatile int64_t t91 = 89444355LL;
int64_t x450 = 389LL;
int64_t t92 = -4297532994621537LL;
static volatile int16_t x456 = 0;
static volatile int64_t t93 = 2201069LL;
static volatile int64_t t95 = 56894325791899LL;
int16_t x466 = -1;
volatile uint32_t x468 = 1249U;
int8_t x470 = 0;
uint32_t t97 = 119U;
int64_t x473 = INT64_MIN;
volatile uint8_t x475 = 37U;
int64_t x478 = -84976598LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = -1;
	uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MIN;

	t0 = ((x1+x2)/(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	volatile int64_t x6 = INT64_MAX;
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MAX;

	t1 = ((x5+x6)/(x7^x8));

	if (t1 != 141012904183812LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 39924106261LLU;
	static volatile uint8_t x11 = UINT8_MAX;

	t2 = ((x9+x10)/(x11^x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 110LLU;
	int16_t x14 = -1;
	uint64_t t3 = 21660468533757LLU;

	t3 = ((x13+x14)/(x15^x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 11U;
	static uint16_t x22 = 387U;
	uint8_t x23 = 119U;
	volatile uint8_t x24 = UINT8_MAX;

	t4 = ((x21+x22)/(x23^x24));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x26 = 69832811261747LLU;
	int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MAX;
	static uint64_t t5 = 2157056129583LLU;

	t5 = ((x25+x26)/(x27^x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x29 = 507667LL;
	volatile int16_t x30 = -1;
	int16_t x31 = 63;
	static int32_t x32 = INT32_MIN;
	static int64_t t6 = 20LL;

	t6 = ((x29+x30)/(x31^x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 3;
	int64_t x35 = INT64_MAX;
	volatile int64_t t7 = 5576589180LL;

	t7 = ((x33+x34)/(x35^x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = 9;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	uint64_t t8 = 3LLU;

	t8 = ((x37+x38)/(x39^x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 419676664LLU;
	volatile uint8_t x43 = 51U;
	int64_t x44 = INT64_MAX;
	uint64_t t9 = 781048LLU;

	t9 = ((x41+x42)/(x43^x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 3LLU;
	static uint64_t x46 = 210585LLU;
	int8_t x47 = -41;
	static int32_t x48 = INT32_MIN;
	uint64_t t10 = 10760112660961305LLU;

	t10 = ((x45+x46)/(x47^x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	int32_t x50 = -1;
	int16_t x52 = INT16_MAX;
	uint64_t t11 = 823606464LLU;

	t11 = ((x49+x50)/(x51^x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 167975019LLU;
	int8_t x54 = INT8_MAX;
	static uint64_t x55 = 13763472LLU;
	volatile uint8_t x56 = 2U;
	static volatile uint64_t t12 = 2111641LLU;

	t12 = ((x53+x54)/(x55^x56));

	if (t12 != 12LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 32384;
	volatile uint8_t x58 = 16U;
	uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 1U;
	volatile uint64_t t13 = 6LLU;

	t13 = ((x57+x58)/(x59^x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 31U;
	uint64_t x62 = 446657259756712613LLU;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = UINT8_MAX;
	static volatile uint64_t t14 = 779862314LLU;

	t14 = ((x61+x62)/(x63^x64));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x66 = -10395664112LL;
	int8_t x67 = INT8_MAX;
	volatile int32_t x68 = -1;

	t15 = ((x65+x66)/(x67^x68));

	if (t15 != 81216381LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x70 = -110;
	uint16_t x71 = 0U;
	uint64_t t16 = 123859964553LLU;

	t16 = ((x69+x70)/(x71^x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = -1LL;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = -4030079181LL;
	volatile int64_t t17 = 98402LL;

	t17 = ((x73+x74)/(x75^x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = -1;
	uint16_t x78 = 7U;
	volatile int8_t x79 = INT8_MIN;
	int32_t x80 = 62;

	t18 = ((x77+x78)/(x79^x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	static int8_t x82 = INT8_MAX;
	int32_t x83 = INT32_MIN;
	int16_t x84 = -1;

	t19 = ((x81+x82)/(x83^x84));

	if (t19 != -4294967297LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = -7899514026LL;
	int16_t x87 = 1;
	uint8_t x88 = UINT8_MAX;
	int64_t t20 = -35445569181LL;

	t20 = ((x85+x86)/(x87^x88));

	if (t20 != -39555108LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x89 = UINT32_MAX;
	uint64_t x90 = 25LLU;
	int64_t x91 = 13690LL;
	uint16_t x92 = UINT16_MAX;
	uint64_t t21 = 109644LLU;

	t21 = ((x89+x90)/(x91^x92));

	if (t21 != 82842LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x97 = 0U;
	int64_t x100 = INT64_MIN;

	t22 = ((x97+x98)/(x99^x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x102 = INT16_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t23 = -15;

	t23 = ((x101+x102)/(x103^x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	int64_t x106 = 3051144773LL;
	int16_t x107 = -1;
	uint64_t x108 = 911701LLU;
	static volatile uint64_t t24 = 3143188389440203114LLU;

	t24 = ((x105+x106)/(x107^x108));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x110 = 800261300251LLU;
	volatile uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MAX;
	uint64_t t25 = 161LLU;

	t25 = ((x109+x110)/(x111^x112));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x113 = UINT64_MAX;
	int32_t x114 = INT32_MAX;
	static uint64_t x115 = 10854760307610645LLU;
	int32_t x116 = INT32_MIN;
	static uint64_t t26 = 262994032795LLU;

	t26 = ((x113+x114)/(x115^x116));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = 228027816180LL;
	int16_t x123 = -1;

	t27 = ((x121+x122)/(x123^x124));

	if (t27 != 7113603LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x125 = INT8_MIN;
	int32_t x126 = 22368954;
	volatile uint32_t x128 = 5599600U;
	static uint32_t t28 = 454U;

	t28 = ((x125+x126)/(x127^x128));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	int64_t x131 = INT64_MAX;
	static int8_t x132 = 2;

	t29 = ((x129+x130)/(x131^x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -1;
	volatile int8_t x135 = INT8_MAX;
	volatile int8_t x136 = -1;
	static volatile uint32_t t30 = 1758U;

	t30 = ((x133+x134)/(x135^x136));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = 11U;
	static int64_t x146 = 9LL;

	t31 = ((x145+x146)/(x147^x148));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x151 = UINT32_MAX;
	static uint16_t x152 = UINT16_MAX;
	int64_t t32 = -27073517LL;

	t32 = ((x149+x150)/(x151^x152));

	if (t32 != -2147516416LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -1LL;
	int32_t x154 = -1;
	static int16_t x155 = -1;
	int16_t x156 = INT16_MIN;

	t33 = ((x153+x154)/(x155^x156));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -1LL;
	volatile int64_t x160 = 34818051960937342LL;
	int64_t t34 = -12760924079855824LL;

	t34 = ((x157+x158)/(x159^x160));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MAX;
	volatile int32_t x162 = -16079479;
	uint16_t x163 = UINT16_MAX;
	static uint32_t x164 = 1U;
	static uint32_t t35 = 1331U;

	t35 = ((x161+x162)/(x163^x164));

	if (t35 != 32523U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 88U;
	volatile int8_t x167 = 60;
	int64_t x168 = -130774422537413607LL;
	int64_t t36 = 24519LL;

	t36 = ((x165+x166)/(x167^x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x169 = -42;
	static uint32_t x170 = 28625288U;
	volatile uint32_t x171 = UINT32_MAX;
	uint32_t x172 = 7104886U;

	t37 = ((x169+x170)/(x171^x172));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = 38675272;
	uint32_t x178 = 362076U;
	int8_t x179 = INT8_MAX;
	static volatile uint32_t t38 = 120U;

	t38 = ((x177+x178)/(x179^x180));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MIN;
	uint32_t x182 = 7U;
	int8_t x184 = 14;
	volatile uint32_t t39 = 56682U;

	t39 = ((x181+x182)/(x183^x184));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MIN;
	uint16_t x191 = 2U;
	uint64_t x192 = 1LLU;

	t40 = ((x189+x190)/(x191^x192));

	if (t40 != 3074457345618280447LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x197 = 14719;
	uint16_t x198 = 412U;
	int32_t x199 = INT32_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	static volatile uint32_t t41 = 46U;

	t41 = ((x197+x198)/(x199^x200));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x205 = INT16_MAX;
	uint8_t x206 = 3U;
	volatile int64_t x207 = -42444181LL;

	t42 = ((x205+x206)/(x207^x208));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MAX;
	int8_t x210 = -1;
	uint64_t x212 = 968408532647LLU;

	t43 = ((x209+x210)/(x211^x212));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x213 = -393863692LL;
	int64_t x214 = 15LL;
	int64_t x215 = INT64_MIN;
	volatile uint16_t x216 = 121U;
	int64_t t44 = -1822757862986796961LL;

	t44 = ((x213+x214)/(x215^x216));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = INT16_MIN;
	uint64_t x222 = 8520343897544LLU;
	static volatile int64_t x223 = -349568965274LL;
	int64_t x224 = 0LL;
	volatile uint64_t t45 = 6839437LLU;

	t45 = ((x221+x222)/(x223^x224));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x225 = 753U;
	int8_t x227 = INT8_MAX;
	int8_t x228 = 0;
	static volatile int32_t t46 = -7;

	t46 = ((x225+x226)/(x227^x228));

	if (t46 != -16909314) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x229 = 30;
	uint8_t x230 = 4U;
	int32_t x232 = -1;

	t47 = ((x229+x230)/(x231^x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x234 = 29U;
	uint64_t x235 = 33965841624437734LLU;
	int32_t x236 = INT32_MIN;

	t48 = ((x233+x234)/(x235^x236));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x238 = UINT8_MAX;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t49 = -10484026;

	t49 = ((x237+x238)/(x239^x240));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x241 = -1;
	int32_t x242 = 21100;
	uint16_t x243 = 241U;
	uint16_t x244 = UINT16_MAX;
	static int32_t t50 = -258824278;

	t50 = ((x241+x242)/(x243^x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	int8_t x252 = -1;
	uint32_t t51 = 24839834U;

	t51 = ((x249+x250)/(x251^x252));

	if (t51 != 16909320U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x253 = 867159;
	uint8_t x254 = 1U;
	static uint64_t x255 = 599LLU;
	uint32_t x256 = 31U;
	uint64_t t52 = 457024193424533LLU;

	t52 = ((x253+x254)/(x255^x256));

	if (t52 != 1484LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = 14474;
	static uint64_t x258 = 57313LLU;
	uint32_t x259 = 197U;
	uint64_t t53 = 363744LLU;

	t53 = ((x257+x258)/(x259^x260));

	if (t53 != 373LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = 11;
	volatile uint64_t x262 = UINT64_MAX;
	uint32_t x263 = UINT32_MAX;
	static uint8_t x264 = 8U;
	uint64_t t54 = 2844002835887690LLU;

	t54 = ((x261+x262)/(x263^x264));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x265 = UINT32_MAX;
	volatile uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t55 = 14094325844323271LL;

	t55 = ((x265+x266)/(x267^x268));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x269 = 5U;
	volatile uint16_t x270 = 131U;
	int32_t x271 = INT32_MIN;
	volatile int64_t t56 = -8LL;

	t56 = ((x269+x270)/(x271^x272));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -232395036449LL;
	uint64_t x274 = UINT64_MAX;
	int32_t x275 = INT32_MAX;
	static int8_t x276 = INT8_MIN;

	t57 = ((x273+x274)/(x275^x276));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = -1;
	static int64_t x286 = -1LL;
	uint64_t x287 = UINT64_MAX;
	uint32_t x288 = 1U;

	t58 = ((x285+x286)/(x287^x288));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x294 = UINT32_MAX;
	uint16_t x295 = 27164U;
	static uint32_t x296 = UINT32_MAX;
	static uint32_t t59 = 2703U;

	t59 = ((x293+x294)/(x295^x296));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = -1;
	static volatile int32_t x298 = -1;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = 16U;
	int32_t t60 = 36515660;

	t60 = ((x297+x298)/(x299^x300));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x301 = 42U;
	static int32_t x302 = INT32_MIN;
	volatile int64_t x303 = -1LL;
	uint8_t x304 = 1U;
	int64_t t61 = 51219177123439419LL;

	t61 = ((x301+x302)/(x303^x304));

	if (t61 != 1073741803LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x305 = UINT8_MAX;
	static uint16_t x306 = UINT16_MAX;
	int32_t x307 = -1;
	volatile uint32_t x308 = 4U;
	volatile uint32_t t62 = 4U;

	t62 = ((x305+x306)/(x307^x308));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x309 = -349534LL;
	int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MAX;
	int16_t x312 = 41;
	int64_t t63 = 12LL;

	t63 = ((x309+x310)/(x311^x312));

	if (t63 != 65609LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x313 = 86304U;
	static int32_t x314 = 37792;
	uint16_t x315 = 223U;

	t64 = ((x313+x314)/(x315^x316));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = 60U;
	volatile uint16_t x326 = 403U;
	static int32_t x328 = INT32_MIN;
	static volatile uint32_t t65 = 258846U;

	t65 = ((x325+x326)/(x327^x328));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x329 = -1;
	int32_t x330 = -1;
	int8_t x331 = INT8_MAX;
	int32_t t66 = 58361821;

	t66 = ((x329+x330)/(x331^x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = -705LL;
	volatile int64_t x334 = INT64_MAX;
	int8_t x335 = INT8_MAX;
	int64_t x336 = -1LL;

	t67 = ((x333+x334)/(x335^x336));

	if (t67 != -72057594037927930LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x337 = 649457U;
	int16_t x338 = 898;
	static uint8_t x339 = 6U;
	int8_t x340 = 31;
	volatile uint32_t t68 = 2588U;

	t68 = ((x337+x338)/(x339^x340));

	if (t68 != 26014U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x341 = 44324009773841747LLU;
	volatile uint16_t x342 = 13U;
	int8_t x343 = INT8_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	volatile uint64_t t69 = 109LLU;

	t69 = ((x341+x342)/(x343^x344));

	if (t69 != 349007950975131LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = UINT64_MAX;
	uint8_t x350 = UINT8_MAX;
	uint64_t t70 = 4978LLU;

	t70 = ((x349+x350)/(x351^x352));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 118U;
	volatile int32_t t71 = 3;

	t71 = ((x353+x354)/(x355^x356));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x357 = 1U;
	volatile int32_t x359 = -1;
	uint64_t x360 = 27765929229084LLU;

	t72 = ((x357+x358)/(x359^x360));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x362 = 16U;
	int64_t x363 = 28LL;
	volatile int8_t x364 = 9;

	t73 = ((x361+x362)/(x363^x364));

	if (t73 != 4226LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x369 = -821099272;
	static volatile int32_t t74 = -38628678;

	t74 = ((x369+x370)/(x371^x372));

	if (t74 != 25) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x373 = 1374U;
	uint8_t x374 = 63U;
	volatile uint32_t x375 = 26811U;
	volatile int64_t x376 = 791448448294LL;
	volatile int64_t t75 = 186919243145LL;

	t75 = ((x373+x374)/(x375^x376));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = 0;
	int64_t x378 = 988LL;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = 2950U;
	int64_t t76 = 38035407LL;

	t76 = ((x377+x378)/(x379^x380));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x381 = 21530347;
	uint32_t x384 = 12898U;
	volatile uint32_t t77 = 298386U;

	t77 = ((x381+x382)/(x383^x384));

	if (t77 != 409U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x385 = 5698794U;
	uint32_t x386 = UINT32_MAX;
	static volatile int64_t t78 = -761LL;

	t78 = ((x385+x386)/(x387^x388));

	if (t78 != -109LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x389 = 203149LLU;
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	volatile uint64_t t79 = 27576467LLU;

	t79 = ((x389+x390)/(x391^x392));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = 727U;
	uint16_t x394 = 914U;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t t80 = 77269738;

	t80 = ((x393+x394)/(x395^x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x397 = UINT16_MAX;
	int64_t x398 = -1LL;
	static int8_t x399 = INT8_MAX;
	int16_t x400 = -1;
	static int64_t t81 = -12084LL;

	t81 = ((x397+x398)/(x399^x400));

	if (t81 != -511LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	uint8_t x407 = 6U;
	int32_t x408 = -198828;
	int32_t t82 = -1;

	t82 = ((x405+x406)/(x407^x408));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x410 = -1LL;
	int32_t x411 = INT32_MIN;
	static volatile uint32_t x412 = 112U;
	int64_t t83 = 2159871LL;

	t83 = ((x409+x410)/(x411^x412));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x413 = -42;
	static int32_t x414 = -1;
	int8_t x415 = -3;
	volatile uint64_t t84 = 1224749227LLU;

	t84 = ((x413+x414)/(x415^x416));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x417 = 468417U;
	static int16_t x418 = INT16_MIN;
	int8_t x419 = INT8_MAX;
	uint64_t t85 = 227995000583305261LLU;

	t85 = ((x417+x418)/(x419^x420));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x425 = -1LL;
	static uint8_t x426 = UINT8_MAX;
	int32_t x428 = -1;
	int64_t t86 = -15972204845897LL;

	t86 = ((x425+x426)/(x427^x428));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x429 = UINT64_MAX;
	uint32_t x431 = 1U;
	uint64_t x432 = UINT64_MAX;

	t87 = ((x429+x430)/(x431^x432));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x433 = 46U;
	int8_t x434 = INT8_MIN;
	int16_t x435 = 2;
	int64_t x436 = INT64_MIN;

	t88 = ((x433+x434)/(x435^x436));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x437 = 30333999U;
	int64_t x439 = -561096003868978865LL;
	uint64_t t89 = 411LLU;

	t89 = ((x437+x438)/(x439^x440));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x441 = UINT64_MAX;
	volatile int32_t x442 = 119808795;
	int64_t x443 = -6221627699LL;
	uint32_t x444 = 598U;

	t90 = ((x441+x442)/(x443^x444));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x445 = 47U;
	volatile int32_t x446 = 2;
	static int8_t x447 = INT8_MAX;
	int64_t x448 = -1LL;

	t91 = ((x445+x446)/(x447^x448));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x449 = 4263U;
	static volatile uint16_t x451 = 7870U;
	int8_t x452 = -3;

	t92 = ((x449+x450)/(x451^x452));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x453 = 2000703688688LL;
	int32_t x454 = INT32_MIN;
	int8_t x455 = INT8_MIN;

	t93 = ((x453+x454)/(x455^x456));

	if (t93 != -15613720351LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x457 = INT64_MIN;
	static uint32_t x458 = 763888889U;
	int64_t x459 = INT64_MAX;
	int8_t x460 = -8;
	volatile int64_t t94 = 1111800293384445LL;

	t94 = ((x457+x458)/(x459^x460));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x461 = -1;
	volatile uint32_t x462 = 244353U;
	uint16_t x463 = 1U;
	int64_t x464 = INT64_MIN;

	t95 = ((x461+x462)/(x463^x464));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x465 = INT16_MIN;
	volatile int8_t x467 = INT8_MIN;
	volatile uint32_t t96 = 638761U;

	t96 = ((x465+x466)/(x467^x468));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x469 = 17203U;
	int32_t x471 = INT32_MIN;
	uint16_t x472 = 1704U;

	t97 = ((x469+x470)/(x471^x472));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x474 = 57231U;
	int32_t x476 = INT32_MAX;
	int64_t t98 = 36406599189162513LL;

	t98 = ((x473+x474)/(x475^x476));

	if (t98 != -4294967371LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x477 = -1;
	volatile uint64_t x479 = UINT64_MAX;
	static uint64_t x480 = 14981983LLU;
	uint64_t t99 = 599822LLU;

	t99 = ((x477+x478)/(x479^x480));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

