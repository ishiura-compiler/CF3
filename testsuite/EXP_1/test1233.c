#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -2341160691LL;
volatile int32_t x7 = INT32_MIN;
int16_t x11 = INT16_MAX;
int16_t x13 = INT16_MIN;
static int16_t x15 = 14524;
volatile int64_t x19 = INT64_MAX;
int16_t x23 = INT16_MAX;
int64_t x27 = INT64_MIN;
uint16_t x29 = 0U;
int64_t x35 = 174596643905258959LL;
static uint32_t x40 = 4U;
uint32_t t9 = 59899U;
volatile uint32_t x41 = 1764U;
static volatile int32_t t10 = 6;
int32_t x48 = INT32_MAX;
uint16_t x60 = 424U;
static int8_t x62 = INT8_MAX;
int64_t t15 = 44LL;
static uint8_t x66 = 76U;
int16_t x70 = INT16_MIN;
volatile int64_t t17 = 467438632342967015LL;
volatile int32_t t18 = -957;
uint32_t x80 = 536295851U;
volatile uint32_t t19 = 372063710U;
volatile uint64_t x84 = 159LLU;
volatile uint8_t x88 = UINT8_MAX;
static volatile uint8_t x89 = 8U;
uint32_t x91 = 30234868U;
uint8_t x95 = 14U;
volatile int32_t t23 = -170;
int8_t x112 = -2;
static int32_t x116 = 39003;
static volatile uint16_t x118 = 1317U;
int16_t x119 = 1;
uint32_t x132 = 1916U;
volatile int64_t t32 = 1409787149550387LL;
int8_t x160 = -20;
uint32_t t37 = 93632049U;
static int64_t x161 = -829465795940LL;
static int64_t x164 = INT64_MIN;
volatile int64_t x168 = -1LL;
static uint64_t x170 = 2564176LLU;
uint32_t x171 = 57470046U;
int16_t x177 = -1;
int8_t x180 = -1;
volatile int64_t t42 = 93791722LL;
volatile uint64_t x181 = 91340111367741LLU;
static int8_t x185 = 1;
static int16_t x187 = INT16_MIN;
uint32_t x197 = UINT32_MAX;
int32_t x200 = INT32_MAX;
volatile int32_t x201 = INT32_MAX;
int64_t x205 = -1LL;
uint32_t x209 = 10U;
int64_t x211 = 4336220980330526611LL;
static volatile uint64_t x219 = UINT64_MAX;
volatile int32_t t55 = -143;
uint8_t x235 = 1U;
volatile int32_t t56 = -3458;
volatile int8_t x238 = INT8_MIN;
int32_t x240 = 256;
volatile int64_t x247 = INT64_MIN;
static int64_t x253 = -69223803634LL;
int8_t x255 = -1;
static uint32_t x258 = UINT32_MAX;
uint32_t x265 = 490627743U;
static volatile int64_t x269 = 27269LL;
volatile int64_t x270 = -3077055937LL;
int64_t x275 = -2962744LL;
volatile int64_t x282 = INT64_MIN;
int16_t x295 = INT16_MIN;
uint32_t x311 = 25095193U;
static int64_t x322 = 34943672735009845LL;
volatile int64_t x332 = INT64_MAX;
int64_t x336 = INT64_MIN;
static int8_t x345 = INT8_MIN;
int32_t x358 = INT32_MIN;
int32_t x359 = INT32_MIN;
uint64_t x363 = UINT64_MAX;
static volatile uint64_t t88 = 113676LLU;
static uint8_t x365 = UINT8_MAX;
int64_t x368 = -1LL;
uint32_t x369 = UINT32_MAX;
int32_t t91 = 726;
volatile int16_t x387 = 37;
volatile int32_t t95 = 59667329;
volatile uint8_t x397 = UINT8_MAX;
uint64_t t97 = 953LLU;
volatile int64_t t99 = 1151025369LL;


void f0(void) {
	static volatile int8_t x1 = INT8_MAX;
	static uint32_t x3 = 2934U;
	int64_t x4 = 1173455LL;
	int64_t t0 = -141433424276397437LL;

	t0 = (((x1==x2)/x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 5;
	int8_t x6 = -1;
	volatile int16_t x8 = -78;
	int32_t t1 = -66630116;

	t1 = (((x5==x6)/x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 63746LLU;

	t2 = (((x9==x10)/x11)&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -448402740;

	t3 = (((x13==x14)/x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = -1;
	int16_t x20 = -10;
	volatile int64_t t4 = 369028870326434521LL;

	t4 = (((x17==x18)/x19)&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MAX;
	static uint16_t x22 = 3335U;
	static uint64_t x24 = 487316LLU;
	uint64_t t5 = 699259215067578LLU;

	t5 = (((x21==x22)/x23)&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x25 = UINT32_MAX;
	uint64_t x26 = 1344850269LLU;
	static volatile int8_t x28 = 0;
	volatile int64_t t6 = -12389434762LL;

	t6 = (((x25==x26)/x27)&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x30 = 1263U;
	int64_t x31 = INT64_MIN;
	volatile uint32_t x32 = UINT32_MAX;
	volatile int64_t t7 = 1LL;

	t7 = (((x29==x30)/x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 77U;
	int8_t x34 = -1;
	int8_t x36 = INT8_MIN;
	volatile int64_t t8 = 234429952946744LL;

	t8 = (((x33==x34)/x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	static uint32_t x39 = 376157U;

	t9 = (((x37==x38)/x39)&x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;

	t10 = (((x41==x42)/x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile uint64_t x46 = 6598014409524LLU;
	static int16_t x47 = -2;
	int32_t t11 = 41550;

	t11 = (((x45==x46)/x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 14907U;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MAX;
	static int32_t x52 = -674;
	int32_t t12 = 1;

	t12 = (((x49==x50)/x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -15;
	int64_t x54 = INT64_MIN;
	volatile int64_t x55 = INT64_MIN;
	int16_t x56 = -7955;
	static int64_t t13 = -637932743046838456LL;

	t13 = (((x53==x54)/x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int16_t x58 = INT16_MAX;
	int64_t x59 = INT64_MIN;
	int64_t t14 = 24835LL;

	t14 = (((x57==x58)/x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -220435;
	uint8_t x63 = UINT8_MAX;
	static int64_t x64 = INT64_MIN;

	t15 = (((x61==x62)/x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = 69;
	uint8_t x67 = 28U;
	int16_t x68 = INT16_MAX;
	int32_t t16 = 127354374;

	t16 = (((x65==x66)/x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 23019U;
	volatile int64_t x71 = INT64_MAX;
	static int32_t x72 = INT32_MIN;

	t17 = (((x69==x70)/x71)&x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -178;
	volatile int32_t x74 = 5;
	static uint8_t x75 = 12U;
	int16_t x76 = INT16_MAX;

	t18 = (((x73==x74)/x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 2157U;

	t19 = (((x77==x78)/x79)&x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	static int8_t x82 = INT8_MIN;
	volatile int32_t x83 = INT32_MAX;
	uint64_t t20 = 63507937395590134LLU;

	t20 = (((x81==x82)/x83)&x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 2158353917448LLU;
	int64_t x86 = -1LL;
	int8_t x87 = 1;
	volatile int32_t t21 = -917;

	t21 = (((x85==x86)/x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = UINT32_MAX;
	static volatile int8_t x92 = INT8_MIN;
	uint32_t t22 = 71752149U;

	t22 = (((x89==x90)/x91)&x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 5758566986LLU;
	static int32_t x94 = INT32_MAX;
	static int16_t x96 = INT16_MAX;

	t23 = (((x93==x94)/x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = INT16_MAX;
	uint8_t x103 = 13U;
	int8_t x104 = -4;
	int32_t t24 = 7;

	t24 = (((x101==x102)/x103)&x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 392U;
	int32_t x106 = INT32_MIN;
	static volatile int16_t x107 = -1;
	static volatile int64_t x108 = INT64_MAX;
	volatile int64_t t25 = -16680LL;

	t25 = (((x105==x106)/x107)&x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = INT32_MAX;
	int64_t x110 = -2LL;
	static int16_t x111 = -1;
	volatile int32_t t26 = -26;

	t26 = (((x109==x110)/x111)&x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = 847U;
	static volatile uint8_t x114 = UINT8_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t t27 = 9925;

	t27 = (((x113==x114)/x115)&x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = -1LL;
	int64_t x120 = -6428459LL;
	static int64_t t28 = 48LL;

	t28 = (((x117==x118)/x119)&x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = INT32_MIN;
	static int8_t x122 = INT8_MIN;
	uint64_t x123 = 1045308380LLU;
	int8_t x124 = -1;
	uint64_t t29 = 1LLU;

	t29 = (((x121==x122)/x123)&x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	static int64_t x126 = -1LL;
	uint32_t x127 = 598700756U;
	int64_t x128 = 786737385661LL;
	volatile int64_t t30 = -21LL;

	t30 = (((x125==x126)/x127)&x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x129 = 2883U;
	static uint16_t x130 = 8U;
	int8_t x131 = INT8_MIN;
	uint32_t t31 = 47609306U;

	t31 = (((x129==x130)/x131)&x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -32688019;
	int64_t x134 = INT64_MIN;
	volatile int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MIN;

	t32 = (((x133==x134)/x135)&x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MIN;
	volatile int64_t x139 = 36098LL;
	static int8_t x140 = -1;
	int64_t t33 = -646494892615397LL;

	t33 = (((x137==x138)/x139)&x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x146 = INT16_MIN;
	static uint16_t x147 = UINT16_MAX;
	static int8_t x148 = INT8_MIN;
	int32_t t34 = -7606854;

	t34 = (((x145==x146)/x147)&x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = -4882;
	volatile int16_t x151 = 8038;
	uint16_t x152 = 14U;
	static int32_t t35 = 18680690;

	t35 = (((x149==x150)/x151)&x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x154 = INT8_MAX;
	uint8_t x155 = 2U;
	int32_t x156 = INT32_MIN;
	int32_t t36 = 36;

	t36 = (((x153==x154)/x155)&x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MAX;
	uint32_t x159 = 18U;

	t37 = (((x157==x158)/x159)&x160);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x162 = -25677250651420LL;
	static int32_t x163 = INT32_MIN;
	static volatile int64_t t38 = 859564144742LL;

	t38 = (((x161==x162)/x163)&x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	volatile int8_t x166 = 3;
	int32_t x167 = -130;
	volatile int64_t t39 = 1LL;

	t39 = (((x165==x166)/x167)&x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -23;
	volatile uint64_t x172 = 443097192877515LLU;
	static volatile uint64_t t40 = 24821451750611204LLU;

	t40 = (((x169==x170)/x171)&x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MAX;
	volatile int64_t x174 = 7185114777LL;
	int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MIN;
	static int32_t t41 = 3;

	t41 = (((x173==x174)/x175)&x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x178 = 3LLU;
	int64_t x179 = -726289LL;

	t42 = (((x177==x178)/x179)&x180);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = 21;
	static volatile uint8_t x183 = UINT8_MAX;
	volatile uint8_t x184 = 52U;
	int32_t t43 = -84;

	t43 = (((x181==x182)/x183)&x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x186 = 407LLU;
	uint64_t x188 = 2LLU;
	static volatile uint64_t t44 = 0LLU;

	t44 = (((x185==x186)/x187)&x188);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 93U;
	uint8_t x190 = UINT8_MAX;
	uint32_t x191 = 231344U;
	int32_t x192 = INT32_MIN;
	uint32_t t45 = 22407387U;

	t45 = (((x189==x190)/x191)&x192);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = 539;
	int64_t x194 = INT64_MIN;
	uint16_t x195 = 1672U;
	uint32_t x196 = 886880U;
	volatile uint32_t t46 = 137U;

	t46 = (((x193==x194)/x195)&x196);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x198 = 14424U;
	uint16_t x199 = 4U;
	volatile int32_t t47 = -730;

	t47 = (((x197==x198)/x199)&x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x202 = 4379;
	uint32_t x203 = 120175116U;
	int8_t x204 = 11;
	volatile uint32_t t48 = 436291U;

	t48 = (((x201==x202)/x203)&x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x206 = -1;
	int16_t x207 = 23;
	volatile int8_t x208 = -1;
	int32_t t49 = 5;

	t49 = (((x205==x206)/x207)&x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x210 = -1;
	uint8_t x212 = 3U;
	volatile int64_t t50 = 262016822631LL;

	t50 = (((x209==x210)/x211)&x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	int32_t x214 = INT32_MAX;
	uint8_t x215 = UINT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t51 = -59656237LL;

	t51 = (((x213==x214)/x215)&x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = 3085932651911462LLU;
	uint32_t x218 = 412999U;
	int32_t x220 = -111317;
	volatile uint64_t t52 = 246597861LLU;

	t52 = (((x217==x218)/x219)&x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 0;
	uint8_t x222 = 109U;
	uint64_t x223 = 8572333342282LLU;
	uint32_t x224 = UINT32_MAX;
	volatile uint64_t t53 = 34212490347863LLU;

	t53 = (((x221==x222)/x223)&x224);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -7336584581LL;
	volatile int16_t x226 = INT16_MIN;
	static int64_t x227 = -126500174744LL;
	uint16_t x228 = 1037U;
	int64_t t54 = 59909492899026LL;

	t54 = (((x225==x226)/x227)&x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = INT64_MIN;
	uint64_t x230 = UINT64_MAX;
	int8_t x231 = 32;
	volatile uint16_t x232 = 1U;

	t55 = (((x229==x230)/x231)&x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = 58126319023LL;
	static int64_t x234 = -1LL;
	int32_t x236 = -40481;

	t56 = (((x233==x234)/x235)&x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = 2;
	uint64_t x239 = 3885582LLU;
	uint64_t t57 = 6271449781LLU;

	t57 = (((x237==x238)/x239)&x240);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = INT16_MIN;
	static uint8_t x242 = 4U;
	int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t58 = 14043;

	t58 = (((x241==x242)/x243)&x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = 51;
	static volatile uint8_t x246 = 1U;
	int64_t x248 = INT64_MIN;
	volatile int64_t t59 = 12402936409LL;

	t59 = (((x245==x246)/x247)&x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	static int64_t x250 = INT64_MIN;
	uint8_t x251 = 9U;
	volatile int64_t x252 = INT64_MIN;
	int64_t t60 = -322105946904492314LL;

	t60 = (((x249==x250)/x251)&x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MAX;
	uint16_t x256 = 37U;
	volatile int32_t t61 = -7325192;

	t61 = (((x253==x254)/x255)&x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MIN;
	volatile int16_t x259 = -2;
	static int8_t x260 = 0;
	int32_t t62 = 157;

	t62 = (((x257==x258)/x259)&x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	static int32_t x264 = -39286499;
	static volatile int32_t t63 = 381237;

	t63 = (((x261==x262)/x263)&x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	int32_t x268 = INT32_MAX;
	volatile int64_t t64 = 299839772975229702LL;

	t64 = (((x265==x266)/x267)&x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x271 = 224024U;
	uint8_t x272 = UINT8_MAX;
	static uint32_t t65 = 2674U;

	t65 = (((x269==x270)/x271)&x272);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 3031U;
	int8_t x274 = 0;
	uint64_t x276 = 12361154762085298LLU;
	uint64_t t66 = 0LLU;

	t66 = (((x273==x274)/x275)&x276);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x277 = 5914U;
	int32_t x278 = -1;
	int32_t x279 = INT32_MAX;
	int8_t x280 = INT8_MAX;
	int32_t t67 = 14303364;

	t67 = (((x277==x278)/x279)&x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile int32_t x284 = -1;
	int32_t t68 = 1498;

	t68 = (((x281==x282)/x283)&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = 372552282LL;
	int16_t x286 = INT16_MAX;
	volatile int16_t x287 = INT16_MIN;
	int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -808;

	t69 = (((x285==x286)/x287)&x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = 47;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = -15;
	static uint64_t x292 = 6749058504081037414LLU;
	uint64_t t70 = 13LLU;

	t70 = (((x289==x290)/x291)&x292);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -1LL;
	volatile int8_t x294 = INT8_MIN;
	uint8_t x296 = 0U;
	int32_t t71 = 2;

	t71 = (((x293==x294)/x295)&x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = 2U;
	uint32_t x298 = 355U;
	static volatile int32_t x299 = INT32_MIN;
	volatile int16_t x300 = -1;
	int32_t t72 = 1249945;

	t72 = (((x297==x298)/x299)&x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MAX;
	int64_t x302 = 3002599LL;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MAX;
	volatile uint64_t t73 = 944189309610182LLU;

	t73 = (((x301==x302)/x303)&x304);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = -1;
	static int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t74 = 1810762;

	t74 = (((x305==x306)/x307)&x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x310 = -1;
	static int8_t x312 = 35;
	uint32_t t75 = 56524U;

	t75 = (((x309==x310)/x311)&x312);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x313 = -1;
	static int64_t x314 = INT64_MIN;
	uint32_t x315 = 1085446455U;
	uint64_t x316 = 248386157000779LLU;
	static uint64_t t76 = 9320630992LLU;

	t76 = (((x313==x314)/x315)&x316);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x317 = 3107U;
	volatile int16_t x318 = -47;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	int32_t t77 = 56109;

	t77 = (((x317==x318)/x319)&x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = -1;
	volatile uint16_t x323 = 239U;
	int32_t x324 = INT32_MAX;
	volatile int32_t t78 = 116715;

	t78 = (((x321==x322)/x323)&x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x325 = 522834821698784LLU;
	uint32_t x326 = UINT32_MAX;
	static int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MAX;
	int64_t t79 = -185035206635LL;

	t79 = (((x325==x326)/x327)&x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	volatile int64_t t80 = -236553724LL;

	t80 = (((x329==x330)/x331)&x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -1;
	volatile uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	volatile int64_t t81 = -15087LL;

	t81 = (((x333==x334)/x335)&x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = -4;
	volatile int16_t x339 = INT16_MAX;
	static uint8_t x340 = UINT8_MAX;
	int32_t t82 = 440948969;

	t82 = (((x337==x338)/x339)&x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = 395803113075LL;
	int16_t x342 = INT16_MAX;
	int64_t x343 = INT64_MIN;
	volatile uint16_t x344 = 8607U;
	static volatile int64_t t83 = 2008LL;

	t83 = (((x341==x342)/x343)&x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;
	static volatile uint64_t t84 = 16050071795052223LLU;

	t84 = (((x345==x346)/x347)&x348);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x349 = 15;
	static int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t85 = 139089271;

	t85 = (((x349==x350)/x351)&x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MAX;
	static int32_t x355 = INT32_MAX;
	uint16_t x356 = 2U;
	int32_t t86 = 993444454;

	t86 = (((x353==x354)/x355)&x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = -1;
	int8_t x360 = -13;
	static int32_t t87 = -138217;

	t87 = (((x357==x358)/x359)&x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x361 = 16858U;
	int16_t x362 = INT16_MAX;
	static int8_t x364 = -1;

	t88 = (((x361==x362)/x363)&x364);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = INT16_MIN;
	static uint8_t x367 = UINT8_MAX;
	int64_t t89 = -782000LL;

	t89 = (((x365==x366)/x367)&x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = INT32_MIN;
	int32_t x371 = -1;
	static int64_t x372 = -4476637LL;
	int64_t t90 = 180011475163LL;

	t90 = (((x369==x370)/x371)&x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MAX;
	static int32_t x374 = INT32_MIN;
	volatile uint16_t x375 = UINT16_MAX;
	uint16_t x376 = UINT16_MAX;

	t91 = (((x373==x374)/x375)&x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MAX;
	static uint32_t x379 = 16263U;
	static volatile int16_t x380 = INT16_MAX;
	volatile uint32_t t92 = 195U;

	t92 = (((x377==x378)/x379)&x380);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 27021U;
	volatile uint8_t x384 = UINT8_MAX;
	volatile int32_t t93 = -5;

	t93 = (((x381==x382)/x383)&x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t94 = -2109;

	t94 = (((x385==x386)/x387)&x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x389 = -2LL;
	static int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	static int8_t x392 = -1;

	t95 = (((x389==x390)/x391)&x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	int16_t x395 = -1;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t96 = -8339132;

	t96 = (((x393==x394)/x395)&x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = -1;
	uint32_t x399 = 14U;
	uint64_t x400 = 687LLU;

	t97 = (((x397==x398)/x399)&x400);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MIN;
	static volatile int16_t x403 = INT16_MIN;
	uint64_t x404 = 12475486902776LLU;
	volatile uint64_t t98 = 246LLU;

	t98 = (((x401==x402)/x403)&x404);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -11;
	int32_t x406 = -960;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -1116995236081938LL;

	t99 = (((x405==x406)/x407)&x408);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

