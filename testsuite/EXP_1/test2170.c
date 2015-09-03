#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 10;
int8_t x11 = INT8_MAX;
uint16_t x12 = 5927U;
static uint32_t x14 = 0U;
int32_t x22 = -1;
int64_t t6 = 9341351LL;
static uint64_t t7 = UINT64_MAX;
uint16_t x43 = 3946U;
int8_t x50 = INT8_MAX;
int64_t t13 = -1LL;
static volatile uint64_t x57 = 827097543351417LLU;
volatile int64_t x69 = INT64_MIN;
static int64_t x70 = INT64_MAX;
volatile uint64_t t17 = 1732LLU;
static int64_t x81 = 238807386151809052LL;
volatile int64_t t20 = -2746LL;
int16_t x86 = -59;
volatile int32_t x89 = INT32_MIN;
volatile uint64_t t22 = 993566964288385LLU;
int64_t x96 = -9834533987652LL;
uint32_t x98 = UINT32_MAX;
volatile uint32_t t24 = UINT32_MAX;
int64_t x102 = INT64_MIN;
int32_t x103 = INT32_MIN;
int16_t x108 = INT16_MAX;
int64_t x114 = 545449552905428LL;
int64_t t30 = INT64_MAX;
int32_t x125 = -261673587;
static int8_t x128 = INT8_MAX;
static volatile int16_t x133 = INT16_MIN;
uint8_t x154 = 1U;
int8_t x163 = INT8_MIN;
int64_t x175 = INT64_MAX;
int32_t x180 = INT32_MIN;
uint64_t x183 = 1LLU;
int64_t x184 = INT64_MIN;
static int64_t x189 = -82981317LL;
int8_t x190 = -1;
uint32_t x194 = 224U;
volatile uint32_t x199 = 29687144U;
static uint16_t x205 = UINT16_MAX;
int32_t t51 = 111804491;
int8_t x210 = 6;
int32_t t53 = -2258005;
uint32_t x219 = 502418U;
int64_t x226 = INT64_MAX;
static int16_t x227 = INT16_MAX;
int8_t x229 = -1;
uint32_t t57 = 31U;
static int32_t x235 = -1;
uint8_t x240 = 1U;
volatile uint64_t t59 = 1LLU;
int8_t x247 = 1;
static volatile int64_t t61 = 2934266780LL;
uint8_t x249 = 100U;
int64_t t63 = INT64_MIN;
int8_t x257 = -1;
static int16_t x260 = 3604;
int32_t x270 = 14;
int8_t x273 = 9;
int32_t x275 = INT32_MIN;
static int32_t x286 = INT32_MIN;
static int8_t x288 = INT8_MAX;
int16_t x293 = INT16_MAX;
int32_t x297 = INT32_MIN;
static int64_t x299 = INT64_MIN;
static int32_t x306 = 19;
int8_t x311 = 5;
int32_t t80 = 289941;
int8_t x330 = INT8_MAX;
volatile int16_t x339 = INT16_MAX;
int64_t x342 = INT64_MAX;
int16_t x343 = 1045;
uint64_t x351 = 152LLU;
static uint64_t t87 = UINT64_MAX;
static uint64_t x353 = 1770053846835LLU;
volatile uint64_t t88 = 240690728809453816LLU;
static int16_t x363 = INT16_MAX;
uint8_t x367 = 39U;
int16_t x368 = -24;
volatile int64_t t91 = -1839714848800845532LL;
int8_t x378 = -1;
uint16_t x379 = 7U;
uint16_t x381 = 0U;
volatile int32_t t95 = -369165;
int8_t x392 = -1;
uint8_t x393 = UINT8_MAX;
int64_t x394 = INT64_MIN;
int64_t x399 = 1168054496523395577LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int32_t x2 = -1;
	volatile int16_t x3 = INT16_MIN;
	int32_t t0 = 560153098;

	t0 = (((x1^x2)&x3)|x4);

	if (t0 != -32758) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 140;
	uint8_t x6 = UINT8_MAX;
	uint8_t x7 = 6U;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -40;

	t1 = (((x5^x6)&x7)|x8);

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	uint32_t x10 = UINT32_MAX;
	static int64_t t2 = -1158517348LL;

	t2 = (((x9^x10)&x11)|x12);

	if (t2 != 5927LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x15 = -1;
	int32_t x16 = INT32_MIN;
	volatile uint32_t t3 = 52631U;

	t3 = (((x13^x14)&x15)|x16);

	if (t3 != 2147549183U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = 2015130049740216LLU;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = INT64_MIN;
	uint64_t t4 = 777057288557LLU;

	t4 = (((x17^x18)&x19)|x20);

	if (t4 != 9223372036854807992LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1578491037U;
	volatile uint64_t x23 = 24185587LLU;
	uint32_t x24 = 1664365U;
	uint64_t t5 = 330397732181LLU;

	t5 = (((x21^x22)&x23)|x24);

	if (t5 != 24733551LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	int32_t x26 = 177397410;
	static int16_t x27 = INT16_MIN;
	uint16_t x28 = UINT16_MAX;

	t6 = (((x25^x26)&x27)|x28);

	if (t6 != -177340417LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	static int32_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	volatile int64_t x32 = INT64_MAX;

	t7 = (((x29^x30)&x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 102495U;
	uint8_t x34 = 1U;
	uint64_t x35 = UINT64_MAX;
	int32_t x36 = -42;
	static uint64_t t8 = 1715LLU;

	t8 = (((x33^x34)&x35)|x36);

	if (t8 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -3609120858150LL;
	uint64_t x38 = 1LLU;
	uint64_t x39 = UINT64_MAX;
	static uint16_t x40 = 71U;
	volatile uint64_t t9 = 17435224LLU;

	t9 = (((x37^x38)&x39)|x40);

	if (t9 != 18446740464588693471LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int16_t x42 = -1;
	static int32_t x44 = INT32_MAX;
	int64_t t10 = -248LL;

	t10 = (((x41^x42)&x43)|x44);

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -5326393;
	int16_t x46 = -1;
	int64_t x47 = 13989436141788LL;
	static volatile uint16_t x48 = 15U;
	volatile int64_t t11 = -964LL;

	t11 = (((x45^x46)&x47)|x48);

	if (t11 != 5308447LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 1693U;
	uint16_t x51 = UINT16_MAX;
	volatile uint8_t x52 = 4U;
	volatile int32_t t12 = -13;

	t12 = (((x49^x50)&x51)|x52);

	if (t12 != 1766) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = -202252517757LL;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = UINT32_MAX;

	t13 = (((x53^x54)&x55)|x56);

	if (t13 != -201863462913LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	int64_t x60 = 3770711LL;
	volatile uint64_t t14 = 124697767580013LLU;

	t14 = (((x57^x58)&x59)|x60);

	if (t14 != 18445916976166177111LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	volatile int32_t x62 = INT32_MIN;
	static int64_t x63 = INT64_MAX;
	int8_t x64 = 4;
	int64_t t15 = 264638422081978008LL;

	t15 = (((x61^x62)&x63)|x64);

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	static uint64_t x66 = 1309LLU;
	static uint32_t x67 = 32225U;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t16 = 11849512118633329LLU;

	t16 = (((x65^x66)&x67)|x68);

	if (t16 != 18446744071562098912LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 28714060200276LLU;

	t17 = (((x69^x70)&x71)|x72);

	if (t17 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MAX;
	int8_t x75 = -1;
	uint32_t x76 = 7664U;
	static volatile uint32_t t18 = 254717U;

	t18 = (((x73^x74)&x75)|x76);

	if (t18 != 32752U) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	uint16_t x78 = 50U;
	int8_t x79 = -2;
	int64_t x80 = -5336LL;
	static int64_t t19 = -14142LL;

	t19 = (((x77^x78)&x79)|x80);

	if (t19 != -5318LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MAX;
	static int8_t x83 = -1;
	uint32_t x84 = 54531532U;

	t20 = (((x81^x82)&x83)|x84);

	if (t20 != 8984564650723942383LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	static int32_t x87 = -1;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = 467;

	t21 = (((x85^x86)&x87)|x88);

	if (t21 != -198) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x90 = 1787563233LLU;
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 63U;

	t22 = (((x89^x90)&x91)|x92);

	if (t22 != 3327LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1602512071LL;
	volatile int16_t x94 = 2697;
	int64_t x95 = -1LL;
	volatile int64_t t23 = -1241380602LL;

	t23 = (((x93^x94)&x95)|x96);

	if (t23 != -1199842372LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int8_t x99 = INT8_MAX;
	int8_t x100 = INT8_MIN;

	t24 = (((x97^x98)&x99)|x100);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MAX;
	static uint32_t x104 = UINT32_MAX;
	volatile int64_t t25 = 7911LL;

	t25 = (((x101^x102)&x103)|x104);

	if (t25 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = 3;
	int64_t x106 = INT64_MIN;
	static int64_t x107 = 560527LL;
	volatile int64_t t26 = 872111041LL;

	t26 = (((x105^x106)&x107)|x108);

	if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int16_t x110 = -1;
	int64_t x111 = INT64_MAX;
	uint32_t x112 = 39040U;
	static volatile int64_t t27 = 206402LL;

	t27 = (((x109^x110)&x111)|x112);

	if (t27 != 9223372034707331200LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	uint8_t x115 = 63U;
	volatile uint64_t x116 = 801588LLU;
	volatile uint64_t t28 = 48077010LLU;

	t28 = (((x113^x114)&x115)|x116);

	if (t28 != 801599LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int16_t x118 = -1;
	int8_t x119 = -1;
	int32_t x120 = -275594428;
	int32_t t29 = 101210;

	t29 = (((x117^x118)&x119)|x120);

	if (t29 != -275594428) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = UINT8_MAX;
	int64_t x122 = INT64_MAX;
	int64_t x123 = -1LL;
	uint32_t x124 = UINT32_MAX;

	t30 = (((x121^x122)&x123)|x124);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -1;
	static volatile int16_t x127 = 14248;
	volatile int32_t t31 = -233;

	t31 = (((x125^x126)&x127)|x128);

	if (t31 != 4735) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static volatile uint8_t x130 = UINT8_MAX;
	uint16_t x131 = 965U;
	int64_t x132 = -1822434418LL;
	int64_t t32 = -33754280LL;

	t32 = (((x129^x130)&x131)|x132);

	if (t32 != -1822434353LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = 5263577;
	static volatile uint8_t x135 = 8U;
	int64_t x136 = INT64_MIN;
	int64_t t33 = -3LL;

	t33 = (((x133^x134)&x135)|x136);

	if (t33 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	static int32_t x138 = -6;
	static int64_t x139 = INT64_MAX;
	uint8_t x140 = UINT8_MAX;
	int64_t t34 = 125630LL;

	t34 = (((x137^x138)&x139)|x140);

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	volatile uint32_t x142 = 445U;
	volatile uint64_t x143 = 13241242150148706LLU;
	int16_t x144 = 450;
	volatile uint64_t t35 = 2200724122523865LLU;

	t35 = (((x141^x142)&x143)|x144);

	if (t35 != 1857985474LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = 6;
	int8_t x146 = 18;
	volatile int32_t x147 = -1858980;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (((x145^x146)&x147)|x148);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x149 = 40802194LL;
	int8_t x150 = 1;
	static int8_t x151 = INT8_MAX;
	static uint8_t x152 = 3U;
	static int64_t t37 = -1894703LL;

	t37 = (((x149^x150)&x151)|x152);

	if (t37 != 19LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 56;
	static uint64_t x155 = 34611957556098760LLU;
	int32_t x156 = INT32_MIN;
	volatile uint64_t t38 = 1027659LLU;

	t38 = (((x153^x154)&x155)|x156);

	if (t38 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	volatile int8_t x158 = INT8_MIN;
	static uint64_t x159 = 346LLU;
	static int64_t x160 = -1LL;
	uint64_t t39 = UINT64_MAX;

	t39 = (((x157^x158)&x159)|x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = UINT32_MAX;
	int16_t x162 = 26;
	static volatile int64_t x164 = INT64_MIN;
	int64_t t40 = -9267LL;

	t40 = (((x161^x162)&x163)|x164);

	if (t40 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -1098300;
	volatile uint32_t x166 = 744U;
	int64_t x167 = 8LL;
	int16_t x168 = INT16_MAX;
	volatile int64_t t41 = 2LL;

	t41 = (((x165^x166)&x167)|x168);

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1;
	int32_t x170 = INT32_MIN;
	volatile int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	int32_t t42 = 299341;

	t42 = (((x169^x170)&x171)|x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int32_t x174 = 3;
	int8_t x176 = INT8_MIN;
	uint64_t t43 = 26257LLU;

	t43 = (((x173^x174)&x175)|x176);

	if (t43 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	int16_t x178 = 11954;
	uint8_t x179 = UINT8_MAX;
	static volatile int32_t t44 = 405039;

	t44 = (((x177^x178)&x179)|x180);

	if (t44 != -2147483443) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -6075170;
	static volatile int64_t x182 = -1LL;
	static volatile uint64_t t45 = 1157516334541LLU;

	t45 = (((x181^x182)&x183)|x184);

	if (t45 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 3563447U;
	static int64_t x186 = INT64_MIN;
	int32_t x187 = 24606;
	int64_t x188 = INT64_MIN;
	int64_t t46 = -7LL;

	t46 = (((x185^x186)&x187)|x188);

	if (t46 != -9223372036854759402LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x191 = INT32_MIN;
	static int16_t x192 = -1;
	volatile int64_t t47 = 13LL;

	t47 = (((x189^x190)&x191)|x192);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 49U;
	uint64_t x195 = UINT64_MAX;
	int16_t x196 = INT16_MIN;
	volatile uint64_t t48 = 13312094888229LLU;

	t48 = (((x193^x194)&x195)|x196);

	if (t48 != 18446744073709519057LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = 235481435;
	volatile uint16_t x198 = 1639U;
	static int32_t x200 = INT32_MAX;
	volatile uint32_t t49 = 649U;

	t49 = (((x197^x198)&x199)|x200);

	if (t49 != 2147483647U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MAX;
	volatile int64_t x202 = -1LL;
	static int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MAX;
	volatile int64_t t50 = -201573760209759814LL;

	t50 = (((x201^x202)&x203)|x204);

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	int8_t x207 = -1;
	uint8_t x208 = 3U;

	t51 = (((x205^x206)&x207)|x208);

	if (t51 != -32769) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 4439U;
	static int8_t x211 = -5;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 1;

	t52 = (((x209^x210)&x211)|x212);

	if (t52 != -28335) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int16_t x214 = INT16_MIN;
	volatile uint8_t x215 = 50U;
	static uint8_t x216 = 1U;

	t53 = (((x213^x214)&x215)|x216);

	if (t53 != 51) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 10934445083697LL;
	int32_t x218 = -1;
	int64_t x220 = INT64_MAX;
	int64_t t54 = INT64_MAX;

	t54 = (((x217^x218)&x219)|x220);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	uint8_t x222 = 0U;
	uint64_t x223 = 41862LLU;
	int64_t x224 = -1LL;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x221^x222)&x223)|x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	int32_t x228 = 101524;
	static volatile int64_t t56 = -12412LL;

	t56 = (((x225^x226)&x227)|x228);

	if (t56 != 101524LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 77423203U;
	int32_t x231 = -1;
	int16_t x232 = INT16_MIN;

	t57 = (((x229^x230)&x231)|x232);

	if (t57 != 4294942108U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = 6851;
	static uint64_t x234 = UINT64_MAX;
	int8_t x236 = -1;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x233^x234)&x235)|x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	uint32_t x238 = 1222U;
	uint64_t x239 = 582865LLU;

	t59 = (((x237^x238)&x239)|x240);

	if (t59 != 581697LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = 1;
	int8_t x242 = INT8_MIN;
	uint64_t x243 = 659146572327LLU;
	int32_t x244 = INT32_MIN;
	static uint64_t t60 = 1764881LLU;

	t60 = (((x241^x242)&x243)|x244);

	if (t60 != 18446744073578643969LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -7201609LL;
	static volatile int64_t x246 = INT64_MIN;
	static int64_t x248 = -280901863840001638LL;

	t61 = (((x245^x246)&x247)|x248);

	if (t61 != -280901863840001637LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = -1;
	static volatile uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = INT16_MIN;
	int32_t t62 = -1290;

	t62 = (((x249^x250)&x251)|x252);

	if (t62 != -32613) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = 16U;
	int64_t x256 = INT64_MIN;

	t63 = (((x253^x254)&x255)|x256);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x258 = 1U;
	static int64_t x259 = -1LL;
	int64_t t64 = 352LL;

	t64 = (((x257^x258)&x259)|x260);

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MIN;
	int32_t x263 = 10341;
	uint16_t x264 = 861U;
	static int32_t t65 = 17044;

	t65 = (((x261^x262)&x263)|x264);

	if (t65 != 893) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MIN;
	int8_t x266 = -13;
	uint32_t x267 = UINT32_MAX;
	int8_t x268 = -38;
	uint32_t t66 = 328U;

	t66 = (((x265^x266)&x267)|x268);

	if (t66 != 4294967291U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 26519U;
	uint16_t x271 = 13074U;
	static volatile int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 4;

	t67 = (((x269^x270)&x271)|x272);

	if (t67 != -23792) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = 12941U;
	uint32_t x276 = UINT32_MAX;
	uint32_t t68 = UINT32_MAX;

	t68 = (((x273^x274)&x275)|x276);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 941620U;
	int32_t x278 = INT32_MAX;
	uint32_t x279 = 147813U;
	static uint8_t x280 = 44U;
	volatile uint32_t t69 = 0U;

	t69 = (((x277^x278)&x279)|x280);

	if (t69 != 365U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 1701;
	int8_t x282 = INT8_MIN;
	static int32_t x283 = INT32_MIN;
	uint32_t x284 = UINT32_MAX;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (((x281^x282)&x283)|x284);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x287 = INT32_MAX;
	int32_t t71 = -929;

	t71 = (((x285^x286)&x287)|x288);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MAX;
	uint64_t x290 = 61880355210470787LLU;
	int64_t x291 = -1LL;
	uint32_t x292 = 759U;
	volatile uint64_t t72 = 489403795651480945LLU;

	t72 = (((x289^x290)&x291)|x292);

	if (t72 != 61880353636932351LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 498778950524166514LLU;
	static volatile uint64_t t73 = 27601596LLU;

	t73 = (((x293^x294)&x295)|x296);

	if (t73 != 498778950524166527LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = INT8_MIN;
	static int16_t x300 = INT16_MIN;
	volatile int64_t t74 = -5162852LL;

	t74 = (((x297^x298)&x299)|x300);

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	volatile uint64_t x302 = 16546457332365848LLU;
	int32_t x303 = INT32_MIN;
	static int64_t x304 = INT64_MIN;
	static volatile uint64_t t75 = 19115670738517LLU;

	t75 = (((x301^x302)&x303)|x304);

	if (t75 != 9239918492851896320LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = 1232894339U;
	volatile uint32_t x307 = 14573438U;
	int16_t x308 = -1;
	uint32_t t76 = UINT32_MAX;

	t76 = (((x305^x306)&x307)|x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 27U;
	volatile int32_t x310 = 4;
	static int64_t x312 = -413907665538323727LL;
	volatile int64_t t77 = 3445187358LL;

	t77 = (((x309^x310)&x311)|x312);

	if (t77 != -413907665538323723LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = UINT16_MAX;
	static volatile uint8_t x314 = 126U;
	static int64_t x315 = 13562554LL;
	uint32_t x316 = UINT32_MAX;
	volatile int64_t t78 = -109973732595785LL;

	t78 = (((x313^x314)&x315)|x316);

	if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	static int64_t x318 = -1LL;
	int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MAX;
	volatile int64_t t79 = INT64_MAX;

	t79 = (((x317^x318)&x319)|x320);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = INT16_MAX;
	int8_t x322 = -1;
	uint8_t x323 = 27U;
	int32_t x324 = -9395754;

	t80 = (((x321^x322)&x323)|x324);

	if (t80 != -9395754) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	static int16_t x326 = -794;
	uint16_t x327 = 0U;
	uint8_t x328 = 12U;
	volatile int64_t t81 = 635608999171523193LL;

	t81 = (((x325^x326)&x327)|x328);

	if (t81 != 12LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x331 = -14;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -40304;

	t82 = (((x329^x330)&x331)|x332);

	if (t82 != -2147418240) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 59661449448165678LLU;
	int8_t x334 = 9;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (((x333^x334)&x335)|x336);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MIN;
	volatile int8_t x340 = 0;
	volatile int64_t t84 = -1400870858236LL;

	t84 = (((x337^x338)&x339)|x340);

	if (t84 != 127LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	static uint64_t x344 = 24LLU;
	static volatile uint64_t t85 = 126046107LLU;

	t85 = (((x341^x342)&x343)|x344);

	if (t85 != 1048LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	static int64_t x346 = -1399LL;
	uint64_t x347 = 1459LLU;
	int16_t x348 = -1;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (((x345^x346)&x347)|x348);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MAX;
	int64_t x352 = -1LL;

	t87 = (((x349^x350)&x351)|x352);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 110376LLU;
	int32_t x355 = 23;
	int8_t x356 = INT8_MIN;

	t88 = (((x353^x354)&x355)|x356);

	if (t88 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MIN;
	static volatile uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 31U;
	volatile int16_t x360 = -51;
	int32_t t89 = 182112402;

	t89 = (((x357^x358)&x359)|x360);

	if (t89 != -33) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 29;
	uint64_t x362 = UINT64_MAX;
	uint16_t x364 = UINT16_MAX;
	uint64_t t90 = 2472LLU;

	t90 = (((x361^x362)&x363)|x364);

	if (t90 != 65535LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = -1LL;
	volatile uint8_t x366 = 15U;

	t91 = (((x365^x366)&x367)|x368);

	if (t91 != -24LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = 0;
	int64_t x370 = -853LL;
	int16_t x371 = INT16_MAX;
	int16_t x372 = 16295;
	static int64_t t92 = 69295722616LL;

	t92 = (((x369^x370)&x371)|x372);

	if (t92 != 32687LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -226LL;
	volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = 0;
	volatile int64_t t93 = -3373468063LL;

	t93 = (((x373^x374)&x375)|x376);

	if (t93 != 32542LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 29;
	static int32_t x380 = 0;
	static volatile int32_t t94 = 5;

	t94 = (((x377^x378)&x379)|x380);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x382 = INT8_MIN;
	static int16_t x383 = 0;
	uint16_t x384 = UINT16_MAX;

	t95 = (((x381^x382)&x383)|x384);

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 70U;
	int16_t x386 = INT16_MIN;
	uint16_t x387 = 890U;
	int64_t x388 = INT64_MIN;
	int64_t t96 = -3492LL;

	t96 = (((x385^x386)&x387)|x388);

	if (t96 != -9223372036854775742LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x389 = INT32_MIN;
	volatile uint16_t x390 = 158U;
	int8_t x391 = INT8_MIN;
	static volatile int32_t t97 = -545639979;

	t97 = (((x389^x390)&x391)|x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x395 = 92144361962LLU;
	int32_t x396 = -1;
	uint64_t t98 = UINT64_MAX;

	t98 = (((x393^x394)&x395)|x396);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = UINT64_MAX;
	volatile int16_t x398 = INT16_MAX;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (((x397^x398)&x399)|x400);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

