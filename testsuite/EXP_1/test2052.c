#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
uint16_t x3 = UINT16_MAX;
volatile int64_t x4 = INT64_MIN;
volatile int16_t x11 = INT16_MAX;
int8_t x12 = INT8_MIN;
int32_t x15 = INT32_MIN;
static int16_t x17 = INT16_MAX;
static volatile int64_t x32 = -10697LL;
static volatile int64_t t7 = -16667630147936053LL;
static uint32_t t8 = 4867807U;
uint16_t x41 = 17U;
int64_t x44 = INT64_MAX;
int32_t x45 = INT32_MIN;
int32_t x48 = INT32_MIN;
int32_t t13 = 13;
volatile int64_t t16 = -1LL;
uint64_t x84 = UINT64_MAX;
int32_t x85 = -1;
volatile uint16_t x86 = 5453U;
volatile int16_t x91 = 1072;
int64_t x94 = INT64_MAX;
int8_t x95 = -10;
volatile uint64_t t22 = 1517215452826000319LLU;
static uint32_t x97 = 0U;
static volatile int16_t x101 = -1;
uint32_t x102 = 1031669U;
uint64_t x103 = 4LLU;
uint64_t x115 = UINT64_MAX;
int32_t x119 = -1;
int32_t x126 = INT32_MAX;
int64_t t29 = -99985LL;
volatile uint32_t x129 = UINT32_MAX;
volatile int64_t x133 = INT64_MIN;
int32_t x143 = 0;
static uint16_t x161 = 724U;
uint16_t x164 = 599U;
volatile int32_t t35 = 5;
int16_t x170 = INT16_MAX;
volatile int32_t x173 = -1;
int64_t x180 = INT64_MIN;
int64_t t40 = 13551006230689213LL;
uint16_t x195 = 1547U;
int8_t x198 = -1;
int16_t x203 = -1;
int16_t x214 = -28;
volatile uint64_t t48 = 10953LLU;
int16_t x225 = INT16_MIN;
uint8_t x234 = 0U;
uint32_t x236 = UINT32_MAX;
int64_t t52 = 1403052794650685580LL;
static uint32_t x244 = 15543U;
int16_t x245 = INT16_MIN;
uint32_t x247 = UINT32_MAX;
static int16_t x248 = INT16_MIN;
int32_t x254 = INT32_MIN;
static int64_t x255 = INT64_MAX;
volatile int64_t t55 = -18928759360LL;
int8_t x268 = INT8_MIN;
int64_t x270 = INT64_MAX;
int64_t t58 = 5187532851289LL;
int16_t x273 = -1;
int16_t x274 = INT16_MIN;
uint64_t x276 = 384LLU;
volatile uint64_t t59 = 30253137134034213LLU;
int16_t x278 = INT16_MAX;
uint8_t x279 = 12U;
volatile int16_t x280 = INT16_MIN;
int16_t x281 = 254;
int64_t x284 = -1LL;
static uint64_t x287 = UINT64_MAX;
uint8_t x296 = 74U;
static uint64_t x297 = 2205905868LLU;
uint16_t x298 = UINT16_MAX;
uint8_t x303 = UINT8_MAX;
volatile uint64_t t66 = 513663489458609063LLU;
static int16_t x307 = INT16_MAX;
static int32_t x308 = -17940;
int32_t x311 = INT32_MIN;
static volatile uint16_t x312 = 1133U;
volatile int32_t x323 = INT32_MAX;
volatile int64_t x334 = INT64_MAX;
uint16_t x335 = 12798U;
int64_t t73 = 10LL;
int16_t x339 = 27;
int64_t t74 = 2204LL;
volatile uint64_t x348 = UINT64_MAX;
int8_t x349 = 6;
static int64_t x354 = INT64_MIN;
static volatile int16_t x355 = -791;
volatile int32_t t80 = 689;
static int8_t x368 = 3;
static int64_t x369 = -3668281353998947918LL;
int8_t x371 = 38;
volatile int32_t x384 = INT32_MAX;
int64_t x408 = INT64_MIN;
static uint32_t x411 = UINT32_MAX;
int64_t x416 = -37974169964LL;
int32_t x417 = -12;
int8_t x418 = -1;
int32_t t91 = -14265;
int32_t t92 = -460014;
uint16_t x431 = 325U;
int64_t t94 = 52961950440LL;
static uint8_t x439 = 5U;
volatile int16_t x449 = 3;
int16_t x452 = INT16_MIN;
int64_t t98 = 226637645030997021LL;
static volatile int16_t x455 = 1;
volatile uint8_t x456 = 7U;


void f0(void) {
	int32_t x2 = -1;
	volatile int64_t t0 = INT64_MIN;

	t0 = (((x1^x2)-x3)&x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 401U;
	uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = 4U;
	volatile int32_t t1 = 897;

	t1 = (((x5^x6)-x7)&x8);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 560724969U;
	uint16_t x10 = 1897U;
	uint32_t t2 = 917189635U;

	t2 = (((x9^x10)-x11)&x12);

	if (t2 != 560692352U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = 5U;
	int32_t x16 = INT32_MAX;
	volatile int64_t t3 = -5143982158855046LL;

	t3 = (((x13^x14)-x15)&x16);

	if (t3 != 5LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MAX;
	uint64_t t4 = 14538330617LLU;

	t4 = (((x17^x18)-x19)&x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 3938;
	static int8_t x22 = INT8_MIN;
	volatile uint16_t x23 = 11U;
	static uint64_t x24 = 2992116418781709LLU;
	volatile uint64_t t5 = 25LLU;

	t5 = (((x21^x22)-x23)&x24);

	if (t5 != 2992116418781189LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	static int32_t x26 = -1;
	int8_t x27 = INT8_MIN;
	static volatile int32_t x28 = 8357437;
	int32_t t6 = 58;

	t6 = (((x25^x26)-x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int8_t x30 = -1;
	uint32_t x31 = 5466215U;

	t7 = (((x29^x30)-x31)&x32);

	if (t7 != 4289500689LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 26753U;
	int16_t x34 = INT16_MIN;
	volatile int32_t x35 = -1;
	int32_t x36 = -1;

	t8 = (((x33^x34)-x35)&x36);

	if (t8 != 4294961282U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int8_t x38 = INT8_MAX;
	volatile uint32_t x39 = 45U;
	static uint8_t x40 = 20U;
	volatile int64_t t9 = 8226601LL;

	t9 = (((x37^x38)-x39)&x40);

	if (t9 != 16LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x42 = 596U;
	uint32_t x43 = UINT32_MAX;
	volatile int64_t t10 = -4LL;

	t10 = (((x41^x42)-x43)&x44);

	if (t10 != 582LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	int64_t x47 = -4696103863LL;
	volatile int64_t t11 = 6108LL;

	t11 = (((x45^x46)-x47)&x48);

	if (t11 != 6442450944LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 1;
	int8_t x50 = 1;
	static int32_t x51 = -1;
	int8_t x52 = -1;
	volatile int32_t t12 = 126383;

	t12 = (((x49^x50)-x51)&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	static uint8_t x54 = UINT8_MAX;
	uint8_t x55 = UINT8_MAX;
	static int16_t x56 = -1;

	t13 = (((x53^x54)-x55)&x56);

	if (t13 != -384) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	static int16_t x58 = INT16_MAX;
	int64_t x59 = -1LL;
	uint64_t x60 = 286LLU;
	volatile uint64_t t14 = 587484583731944LLU;

	t14 = (((x57^x58)-x59)&x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint32_t x62 = UINT32_MAX;
	static uint16_t x63 = UINT16_MAX;
	int8_t x64 = -1;
	static volatile uint32_t t15 = 22993U;

	t15 = (((x61^x62)-x63)&x64);

	if (t15 != 4294934528U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = 21306205554153081LL;
	int8_t x66 = INT8_MAX;
	int32_t x67 = -558590821;
	static int64_t x68 = INT64_MIN;

	t16 = (((x65^x66)-x67)&x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 447580038LLU;
	int16_t x70 = -7;
	uint32_t x71 = UINT32_MAX;
	volatile int8_t x72 = INT8_MAX;
	uint64_t t17 = 1352400932245864LLU;

	t17 = (((x69^x70)-x71)&x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = 0;
	static int32_t x79 = -18913638;
	static uint32_t x80 = 4674012U;
	uint32_t t18 = 6926432U;

	t18 = (((x77^x78)-x79)&x80);

	if (t18 != 4292U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MAX;
	uint16_t x83 = 1448U;
	static uint64_t t19 = 25883254138323739LLU;

	t19 = (((x81^x82)-x83)&x84);

	if (t19 != 9223372036854741592LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x87 = 239U;
	static int32_t x88 = 275534;
	int32_t t20 = -18255120;

	t20 = (((x85^x86)-x87)&x88);

	if (t20 != 270402) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = -1LL;
	int64_t x92 = -7986784422LL;
	int64_t t21 = -198161511LL;

	t21 = (((x89^x90)-x91)&x92);

	if (t21 != 603149130LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 48031838LLU;
	static volatile uint32_t x96 = 21U;

	t22 = (((x93^x94)-x95)&x96);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = INT64_MAX;
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = INT16_MIN;
	int64_t t23 = -804611063070LL;

	t23 = (((x97^x98)-x99)&x100);

	if (t23 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x104 = -118676770595469LL;
	uint64_t t24 = 7692007037419761LLU;

	t24 = (((x101^x102)-x103)&x104);

	if (t24 != 1764769794LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1LL;
	uint16_t x110 = 1U;
	int32_t x111 = INT32_MIN;
	int16_t x112 = -98;
	static volatile int64_t t25 = -2014LL;

	t25 = (((x109^x110)-x111)&x112);

	if (t25 != 2147483550LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	int16_t x114 = INT16_MAX;
	static volatile int64_t x116 = 35501345352850733LL;
	uint64_t t26 = 14907LLU;

	t26 = (((x113^x114)-x115)&x116);

	if (t26 != 35501345352843265LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -1;
	uint8_t x118 = 1U;
	int64_t x120 = -1193162344534LL;
	int64_t t27 = -7154336108444213LL;

	t27 = (((x117^x118)-x119)&x120);

	if (t27 != -1193162344534LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = 366;
	int16_t x122 = INT16_MIN;
	static int64_t x123 = 14408212555973903LL;
	uint8_t x124 = 0U;
	int64_t t28 = 22556238662389044LL;

	t28 = (((x121^x122)-x123)&x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = INT64_MAX;
	int32_t x127 = INT32_MAX;
	static int16_t x128 = INT16_MAX;

	t29 = (((x125^x126)-x127)&x128);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x130 = INT64_MIN;
	volatile int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MAX;
	int64_t t30 = -1LL;

	t30 = (((x129^x130)-x131)&x132);

	if (t30 != 4294967423LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = INT32_MIN;
	uint32_t x135 = 277425120U;
	int16_t x136 = 0;
	int64_t t31 = -1328849474914841LL;

	t31 = (((x133^x134)-x135)&x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 1659;
	volatile int64_t x142 = 66425744804758581LL;
	int64_t x144 = 285192069274773124LL;
	volatile int64_t t32 = -11516246841319461LL;

	t32 = (((x141^x142)-x143)&x144);

	if (t32 != 63389645811024388LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -6;
	static int32_t x154 = -7;
	volatile int64_t x155 = -39914064843071453LL;
	uint8_t x156 = UINT8_MAX;
	volatile int64_t t33 = 266121288447LL;

	t33 = (((x153^x154)-x155)&x156);

	if (t33 != 224LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x162 = -1;
	static uint16_t x163 = 206U;
	int32_t t34 = 278;

	t34 = (((x161^x162)-x163)&x164);

	if (t34 != 85) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = INT8_MAX;
	static int8_t x166 = -1;
	int16_t x167 = 244;
	int16_t x168 = 2;

	t35 = (((x165^x166)-x167)&x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x171 = INT8_MAX;
	static uint16_t x172 = 31U;
	volatile uint64_t t36 = 113621LLU;

	t36 = (((x169^x170)-x171)&x172);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x174 = UINT32_MAX;
	static int16_t x175 = INT16_MAX;
	volatile int64_t x176 = INT64_MIN;
	int64_t t37 = 4554230LL;

	t37 = (((x173^x174)-x175)&x176);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	volatile uint8_t x178 = UINT8_MAX;
	int32_t x179 = -1;
	volatile int64_t t38 = INT64_MIN;

	t38 = (((x177^x178)-x179)&x180);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x181 = 6LL;
	volatile int16_t x182 = INT16_MIN;
	int8_t x183 = -3;
	uint8_t x184 = 8U;
	int64_t t39 = 16768LL;

	t39 = (((x181^x182)-x183)&x184);

	if (t39 != 8LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x185 = 1715U;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	volatile int64_t x188 = 4588LL;

	t40 = (((x185^x186)-x187)&x188);

	if (t40 != 4428LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	static int32_t x192 = INT32_MAX;
	uint64_t t41 = 150887369765086135LLU;

	t41 = (((x189^x190)-x191)&x192);

	if (t41 != 2147418240LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x193 = 23U;
	int8_t x194 = INT8_MAX;
	static volatile int8_t x196 = INT8_MIN;
	int32_t t42 = -27;

	t42 = (((x193^x194)-x195)&x196);

	if (t42 != -1536) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x197 = 1U;
	int16_t x199 = INT16_MAX;
	volatile uint64_t x200 = 503609970516923968LLU;
	static uint64_t t43 = 261203LLU;

	t43 = (((x197^x198)-x199)&x200);

	if (t43 != 503609970516891200LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = -1LL;
	static uint8_t x202 = UINT8_MAX;
	volatile int64_t x204 = INT64_MIN;
	static volatile int64_t t44 = INT64_MIN;

	t44 = (((x201^x202)-x203)&x204);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -6;
	uint8_t x206 = 2U;
	static int8_t x207 = -1;
	uint64_t x208 = 84LLU;
	volatile uint64_t t45 = 175940086291902LLU;

	t45 = (((x205^x206)-x207)&x208);

	if (t45 != 80LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = 52;
	volatile int32_t x210 = -283396178;
	int32_t x211 = -4;
	uint8_t x212 = 13U;
	int32_t t46 = -17863881;

	t46 = (((x209^x210)-x211)&x212);

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = 337754460934LL;
	volatile uint64_t x215 = 5015LLU;
	static uint8_t x216 = 4U;
	uint64_t t47 = 8470043145LLU;

	t47 = (((x213^x214)-x215)&x216);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = -1;
	int16_t x222 = INT16_MIN;
	static uint64_t x223 = 40LLU;
	int8_t x224 = 46;

	t48 = (((x221^x222)-x223)&x224);

	if (t48 != 6LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x226 = INT32_MIN;
	uint32_t x227 = 1288U;
	uint64_t x228 = 393682740554LLU;
	uint64_t t49 = 186LLU;

	t49 = (((x225^x226)-x227)&x228);

	if (t49 != 693198920LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x229 = 86U;
	int64_t x230 = 962123116125LL;
	int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	volatile int64_t t50 = -1395407394LL;

	t50 = (((x229^x230)-x231)&x232);

	if (t50 != 962123137024LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x233 = INT16_MIN;
	static volatile uint32_t x235 = 12572U;
	uint32_t t51 = 1603U;

	t51 = (((x233^x234)-x235)&x236);

	if (t51 != 4294921956U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = 529;
	uint16_t x238 = 2752U;
	volatile int64_t x239 = -140484340311264LL;
	volatile int16_t x240 = INT16_MIN;

	t52 = (((x237^x238)-x239)&x240);

	if (t52 != 140484340285440LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x241 = -1;
	int8_t x242 = INT8_MIN;
	uint64_t x243 = 24939LLU;
	uint64_t t53 = 500868653351LLU;

	t53 = (((x241^x242)-x243)&x244);

	if (t53 != 7188LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x246 = INT8_MAX;
	uint32_t t54 = 54U;

	t54 = (((x245^x246)-x247)&x248);

	if (t54 != 4294934528U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = -5;
	int64_t x256 = INT64_MAX;

	t55 = (((x253^x254)-x255)&x256);

	if (t55 != 2147483644LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x261 = -1LL;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MAX;
	volatile int64_t t56 = -21LL;

	t56 = (((x261^x262)-x263)&x264);

	if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x265 = 14284LLU;
	uint16_t x266 = 1416U;
	volatile int16_t x267 = INT16_MAX;
	uint64_t t57 = 0LLU;

	t57 = (((x265^x266)-x267)&x268);

	if (t57 != 18446744073709531648LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = 2;
	int16_t x271 = -1;
	uint32_t x272 = 282U;

	t58 = (((x269^x270)-x271)&x272);

	if (t58 != 282LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x275 = UINT8_MAX;

	t59 = (((x273^x274)-x275)&x276);

	if (t59 != 256LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = 15564972158969LLU;
	uint64_t t60 = 1612557558247275469LLU;

	t60 = (((x277^x278)-x279)&x280);

	if (t60 != 15564972130304LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x282 = -2;
	uint16_t x283 = 9942U;
	static volatile int64_t t61 = -455414972553605LL;

	t61 = (((x281^x282)-x283)&x284);

	if (t61 != -10198LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = 0;
	int16_t x286 = -1;
	uint8_t x288 = 37U;
	uint64_t t62 = 76433514793LLU;

	t62 = (((x285^x286)-x287)&x288);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = 1;
	uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = -1;
	int64_t x292 = INT64_MIN;
	volatile uint64_t t63 = 1303394473200103563LLU;

	t63 = (((x289^x290)-x291)&x292);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x293 = -1LL;
	int8_t x294 = -5;
	int32_t x295 = -47361536;
	volatile int64_t t64 = -73288LL;

	t64 = (((x293^x294)-x295)&x296);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x299 = INT8_MIN;
	uint16_t x300 = UINT16_MAX;
	static uint64_t t65 = 233LLU;

	t65 = (((x297^x298)-x299)&x300);

	if (t65 != 36019LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x301 = 60580495860LLU;
	uint16_t x302 = 1688U;
	static volatile uint16_t x304 = 17425U;

	t66 = (((x301^x302)-x303)&x304);

	if (t66 != 1025LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = -6714036LL;
	int32_t x306 = INT32_MIN;
	volatile int64_t t67 = -15801912442LL;

	t67 = (((x305^x306)-x307)&x308);

	if (t67 != 2140735820LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -1;
	static int64_t x310 = -1LL;
	static int64_t t68 = 1601214055LL;

	t68 = (((x309^x310)-x311)&x312);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = -1;
	volatile int64_t x318 = 6831837LL;
	uint8_t x319 = 7U;
	static uint8_t x320 = 0U;
	int64_t t69 = -234804030556310LL;

	t69 = (((x317^x318)-x319)&x320);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = 6U;
	volatile int16_t x322 = INT16_MAX;
	uint8_t x324 = 0U;
	volatile int32_t t70 = 309565;

	t70 = (((x321^x322)-x323)&x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = 148870659;
	int32_t x326 = 3;
	static int64_t x327 = 138457794969516600LL;
	static uint16_t x328 = UINT16_MAX;
	volatile int64_t t71 = -193434LL;

	t71 = (((x325^x326)-x327)&x328);

	if (t71 != 56264LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x329 = 229U;
	int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MAX;
	int16_t x332 = -1;
	volatile int64_t t72 = 7170LL;

	t72 = (((x329^x330)-x331)&x332);

	if (t72 != -9223372036854775653LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = INT16_MIN;
	uint32_t x336 = 54396690U;

	t73 = (((x333^x334)-x335)&x336);

	if (t73 != 1536LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x337 = 39;
	volatile int64_t x338 = INT64_MIN;
	int32_t x340 = INT32_MAX;

	t74 = (((x337^x338)-x339)&x340);

	if (t74 != 12LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = INT8_MIN;
	volatile int64_t x343 = INT64_MIN;
	volatile uint8_t x344 = 1U;
	int64_t t75 = 2005538267024497LL;

	t75 = (((x341^x342)-x343)&x344);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = -1LL;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	uint64_t t76 = 9042813651329916LLU;

	t76 = (((x345^x346)-x347)&x348);

	if (t76 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x350 = INT64_MIN;
	int16_t x351 = -33;
	int64_t x352 = INT64_MAX;
	volatile int64_t t77 = -29039129858LL;

	t77 = (((x349^x350)-x351)&x352);

	if (t77 != 39LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x353 = UINT32_MAX;
	static uint16_t x356 = 0U;
	int64_t t78 = -5270428LL;

	t78 = (((x353^x354)-x355)&x356);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x357 = 70U;
	int16_t x358 = -1;
	int64_t x359 = -1LL;
	static volatile int8_t x360 = -1;
	volatile int64_t t79 = -1586LL;

	t79 = (((x357^x358)-x359)&x360);

	if (t79 != -70LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = INT16_MIN;
	static uint16_t x362 = 3307U;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = INT8_MAX;

	t80 = (((x361^x362)-x363)&x364);

	if (t80 != 107) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x365 = 1730U;
	volatile uint64_t x366 = 5229045907988211392LLU;
	volatile int8_t x367 = INT8_MIN;
	uint64_t t81 = 1481102637LLU;

	t81 = (((x365^x366)-x367)&x368);

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x370 = -2;
	int64_t x372 = -1LL;
	int64_t t82 = 104033355LL;

	t82 = (((x369^x370)-x371)&x372);

	if (t82 != 3668281353998947878LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MAX;
	int8_t x375 = INT8_MIN;
	volatile int64_t x376 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

	t83 = (((x373^x374)-x375)&x376);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x377 = UINT16_MAX;
	static int8_t x378 = -3;
	volatile int16_t x379 = INT16_MAX;
	uint8_t x380 = 0U;
	volatile int32_t t84 = 24643461;

	t84 = (((x377^x378)-x379)&x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = -3;
	int16_t x383 = INT16_MIN;
	uint32_t t85 = 257754U;

	t85 = (((x381^x382)-x383)&x384);

	if (t85 != 32770U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x389 = -1LL;
	uint16_t x390 = 50U;
	volatile int32_t x391 = -1;
	int8_t x392 = INT8_MIN;
	volatile int64_t t86 = -91012860304406LL;

	t86 = (((x389^x390)-x391)&x392);

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = INT8_MIN;
	volatile int64_t x402 = 1298296401796376LL;
	volatile int64_t x403 = 827125353LL;
	int16_t x404 = INT16_MAX;
	int64_t t87 = 213656126586481LL;

	t87 = (((x401^x402)-x403)&x404);

	if (t87 != 29743LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x405 = -34481297562895LL;
	static volatile int8_t x406 = -19;
	uint32_t x407 = UINT32_MAX;
	volatile int64_t t88 = -12LL;

	t88 = (((x405^x406)-x407)&x408);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x409 = -6122;
	int64_t x410 = -2564184960LL;
	volatile int16_t x412 = -407;
	int64_t t89 = 230071LL;

	t89 = (((x409^x410)-x411)&x412);

	if (t89 != -1730786303LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = 4;
	static int8_t x414 = INT8_MIN;
	uint32_t x415 = 0U;
	static volatile int64_t t90 = 254470276757LL;

	t90 = (((x413^x414)-x415)&x416);

	if (t90 != 680535684LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MAX;

	t91 = (((x417^x418)-x419)&x420);

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x421 = 128U;
	static int32_t x422 = INT32_MIN;
	volatile int32_t x423 = -1;
	volatile int8_t x424 = INT8_MAX;

	t92 = (((x421^x422)-x423)&x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x425 = INT16_MIN;
	int32_t x426 = -1;
	uint64_t x427 = 140368LLU;
	uint32_t x428 = 319U;
	uint64_t t93 = 8365915034LLU;

	t93 = (((x425^x426)-x427)&x428);

	if (t93 != 303LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = INT16_MAX;
	static int32_t x430 = -1;
	int64_t x432 = -6835418924858768LL;

	t94 = (((x429^x430)-x431)&x432);

	if (t94 != -6835418924891600LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x437 = INT32_MIN;
	static volatile int64_t x438 = -1LL;
	uint16_t x440 = 62U;
	volatile int64_t t95 = -1658795058150651966LL;

	t95 = (((x437^x438)-x439)&x440);

	if (t95 != 58LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = INT64_MIN;
	static int16_t x442 = 11236;
	int64_t x443 = -63296052248945LL;
	volatile uint16_t x444 = 78U;
	int64_t t96 = 131082709354518925LL;

	t96 = (((x441^x442)-x443)&x444);

	if (t96 != 68LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x445 = -8LL;
	int8_t x446 = INT8_MIN;
	int32_t x447 = INT32_MIN;
	int16_t x448 = -1;
	int64_t t97 = 845518LL;

	t97 = (((x445^x446)-x447)&x448);

	if (t97 != 2147483768LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x450 = -1;
	static int64_t x451 = -745140LL;

	t98 = (((x449^x450)-x451)&x452);

	if (t98 != 720896LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = INT16_MIN;
	int16_t x454 = INT16_MIN;
	static volatile int32_t t99 = 0;

	t99 = (((x453^x454)-x455)&x456);

	if (t99 != 7) { NG(); } else { ; }
	
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

