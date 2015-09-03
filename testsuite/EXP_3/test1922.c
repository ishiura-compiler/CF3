#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
int32_t x4 = INT32_MAX;
volatile int16_t x7 = INT16_MIN;
int64_t x10 = -6566462217663LL;
int64_t x15 = 14LL;
volatile uint64_t t4 = 2035059250643LLU;
int32_t t5 = -123;
int64_t x26 = 3445532688897226LL;
uint64_t x28 = 935125534881LLU;
volatile uint64_t t7 = 1212247LLU;
volatile int16_t x40 = INT16_MAX;
volatile int32_t x41 = INT32_MIN;
volatile uint64_t x54 = UINT64_MAX;
int64_t x55 = INT64_MIN;
static volatile int32_t x57 = INT32_MAX;
int16_t x58 = INT16_MIN;
volatile int16_t x59 = INT16_MIN;
volatile int32_t t14 = 2972293;
int8_t x64 = -1;
uint64_t t15 = 6354222077274597390LLU;
uint64_t x73 = UINT64_MAX;
volatile uint64_t t18 = 1095117584884857LLU;
static uint64_t x81 = 86131LLU;
int64_t t21 = -3LL;
uint32_t x90 = UINT32_MAX;
volatile int64_t t22 = -3840227869346552462LL;
volatile int16_t x93 = -10704;
volatile uint16_t x94 = UINT16_MAX;
int32_t x99 = INT32_MIN;
static uint16_t x109 = 109U;
volatile int64_t t27 = -1LL;
int8_t x114 = INT8_MAX;
volatile uint64_t t30 = 88365258750686242LLU;
int64_t x128 = INT64_MIN;
int8_t x129 = INT8_MAX;
int8_t x136 = INT8_MIN;
static uint64_t x138 = 3958435164319LLU;
uint64_t x146 = 75312086LLU;
uint16_t x148 = 90U;
static uint64_t t36 = 1233537449LLU;
volatile int64_t x154 = 847608259823LL;
uint64_t x155 = 464LLU;
volatile int64_t t39 = 3155139LL;
uint32_t x174 = 15616084U;
volatile int16_t x175 = INT16_MIN;
uint64_t x177 = UINT64_MAX;
volatile uint64_t t43 = 39701292099262929LLU;
int16_t x185 = -1;
int64_t x192 = -1LL;
static int64_t x193 = INT64_MIN;
int16_t x194 = INT16_MAX;
int64_t t47 = -26828730476LL;
volatile int8_t x206 = 2;
int32_t t50 = 0;
int32_t x212 = INT32_MIN;
static volatile int32_t t51 = INT32_MIN;
int64_t x215 = INT64_MIN;
static volatile uint64_t t52 = 3954845689967901216LLU;
int64_t x217 = 48LL;
static int64_t x227 = -1LL;
int64_t x230 = INT64_MIN;
int8_t x232 = -1;
int16_t x233 = 778;
volatile int8_t x236 = -1;
uint16_t x239 = 4254U;
static int64_t t57 = 44529541367752LL;
static int16_t x255 = INT16_MIN;
int16_t x257 = INT16_MIN;
uint8_t x262 = UINT8_MAX;
static int16_t x263 = -1;
volatile int32_t t63 = -80613;
volatile int64_t t64 = 4LL;
static volatile int32_t x271 = -1;
uint16_t x278 = UINT16_MAX;
static int16_t x289 = INT16_MIN;
int64_t x294 = INT64_MAX;
volatile uint32_t t72 = 228930187U;
uint8_t x301 = UINT8_MAX;
volatile uint16_t x306 = UINT16_MAX;
uint8_t x314 = 112U;
int16_t x315 = INT16_MIN;
static volatile int32_t t76 = -576723354;
static int8_t x317 = INT8_MIN;
int16_t x320 = INT16_MIN;
uint8_t x325 = UINT8_MAX;
volatile int64_t x336 = -1LL;
static int32_t x338 = INT32_MIN;
uint64_t x346 = UINT64_MAX;
volatile uint32_t x348 = UINT32_MAX;
int16_t x356 = INT16_MIN;
static volatile uint64_t t85 = 1162592963436814LLU;
uint32_t x359 = 127U;
static volatile int64_t x375 = INT64_MIN;
volatile int64_t x380 = -1LL;
static int8_t x394 = -1;
volatile int32_t x398 = -1;
static volatile uint64_t x399 = 9159965064LLU;
int32_t x407 = 63;
int8_t x408 = -6;
volatile uint32_t x409 = 144U;
static int64_t x410 = INT64_MAX;


void f0(void) {
	static int32_t x1 = -1;
	static int32_t x3 = INT32_MIN;
	volatile int32_t t0 = -88213359;

	t0 = ((x1%x2)&(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint8_t x6 = UINT8_MAX;
	uint16_t x8 = 31444U;
	volatile int32_t t1 = -3680;

	t1 = ((x5%x6)&(x7|x8));

	if (t1 != -1324) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 77U;
	static int32_t x11 = -1;
	static uint8_t x12 = UINT8_MAX;
	int64_t t2 = -985LL;

	t2 = ((x9%x10)&(x11|x12));

	if (t2 != 77LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x14 = 28;
	volatile int64_t x16 = INT64_MAX;
	int64_t t3 = 1923340799043478986LL;

	t3 = ((x13%x14)&(x15|x16));

	if (t3 != 3LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static uint64_t x18 = 100LLU;
	int16_t x19 = 0;
	int16_t x20 = INT16_MAX;

	t4 = ((x17%x18)&(x19|x20));

	if (t4 != 27LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int16_t x24 = -1;

	t5 = ((x21%x22)&(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 776358979;
	uint32_t x27 = 0U;
	volatile uint64_t t6 = 15551LLU;

	t6 = ((x25%x26)&(x27|x28));

	if (t6 != 675432449LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 467832991938062LL;
	int64_t x30 = INT64_MIN;
	volatile uint16_t x31 = 74U;
	uint64_t x32 = 32327LLU;

	t7 = ((x29%x30)&(x31|x32));

	if (t7 != 30222LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	static uint16_t x34 = 7296U;
	int64_t x35 = INT64_MIN;
	uint64_t x36 = 89801430LLU;
	uint64_t t8 = 1687997LLU;

	t8 = ((x33%x34)&(x35|x36));

	if (t8 != 9223372036944577152LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -2;
	int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MAX;
	volatile int32_t t9 = 1407;

	t9 = ((x37%x38)&(x39|x40));

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = 1;
	uint16_t x43 = UINT16_MAX;
	volatile int16_t x44 = -1855;
	volatile int32_t t10 = 3925370;

	t10 = ((x41%x42)&(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 1170LL;
	int64_t x46 = 126201353608LL;
	int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	static int64_t t11 = -55898047706151307LL;

	t11 = ((x45%x46)&(x47|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile int16_t x50 = -1;
	uint16_t x51 = 115U;
	uint32_t x52 = 6U;
	static uint32_t t12 = 72U;

	t12 = ((x49%x50)&(x51|x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static int16_t x56 = INT16_MIN;
	uint64_t t13 = 14804624528933003LLU;

	t13 = ((x53%x54)&(x55|x56));

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x60 = -1;

	t14 = ((x57%x58)&(x59|x60));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 456LLU;
	static int32_t x62 = INT32_MIN;
	int32_t x63 = 461315;

	t15 = ((x61%x62)&(x63|x64));

	if (t15 != 456LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 7459173U;
	int16_t x66 = INT16_MAX;
	int32_t x67 = -1;
	int16_t x68 = -1;
	static volatile uint32_t t16 = 10659U;

	t16 = ((x65%x66)&(x67|x68));

	if (t16 != 21064U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 122U;
	int64_t x70 = INT64_MIN;
	volatile int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	int64_t t17 = 10552341919LL;

	t17 = ((x69%x70)&(x71|x72));

	if (t17 != 122LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MAX;
	static uint8_t x75 = 0U;
	volatile int64_t x76 = INT64_MIN;

	t18 = ((x73%x74)&(x75|x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -416;
	uint16_t x78 = UINT16_MAX;
	uint8_t x79 = UINT8_MAX;
	uint32_t x80 = 6U;
	static volatile uint32_t t19 = 3U;

	t19 = ((x77%x78)&(x79|x80));

	if (t19 != 96U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	volatile int32_t x83 = INT32_MAX;
	static volatile int64_t x84 = -172LL;
	uint64_t t20 = 25035263LLU;

	t20 = ((x81%x82)&(x83|x84));

	if (t20 != 86131LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	int64_t x87 = 33778723552391798LL;
	volatile int8_t x88 = INT8_MAX;

	t21 = ((x85%x86)&(x87|x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int64_t x91 = -6LL;
	int16_t x92 = INT16_MIN;

	t22 = ((x89%x90)&(x91|x92));

	if (t22 != 2147483642LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x95 = 2214632U;
	int8_t x96 = INT8_MAX;
	volatile uint32_t t23 = 1176720898U;

	t23 = ((x93%x94)&(x95|x96));

	if (t23 != 2212400U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 421488016U;
	static uint8_t x98 = UINT8_MAX;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t24 = 2826387980129197LLU;

	t24 = ((x97%x98)&(x99|x100));

	if (t24 != 46LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 80;
	int32_t x102 = INT32_MIN;
	static int16_t x103 = -1;
	static int16_t x104 = -1;
	static volatile int32_t t25 = -1322;

	t25 = ((x101%x102)&(x103|x104));

	if (t25 != 80) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static volatile int8_t x106 = -10;
	static uint64_t x107 = 625991LLU;
	static int32_t x108 = INT32_MIN;
	static volatile uint64_t t26 = 210LLU;

	t26 = ((x105%x106)&(x107|x108));

	if (t26 != 18446744071562693952LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = UINT16_MAX;
	volatile int64_t x111 = INT64_MIN;
	uint32_t x112 = UINT32_MAX;

	t27 = ((x109%x110)&(x111|x112));

	if (t27 != 109LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -5166608881LL;
	int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MAX;
	volatile int64_t t28 = -5239LL;

	t28 = ((x113%x114)&(x115|x116));

	if (t28 != -88LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x119 = 120206773;
	int8_t x120 = 9;
	static int32_t t29 = 0;

	t29 = ((x117%x118)&(x119|x120));

	if (t29 != 13757) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 30025U;
	int32_t x124 = -1;

	t30 = ((x121%x122)&(x123|x124));

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	volatile int32_t x127 = -1;
	volatile int64_t t31 = 2587957LL;

	t31 = ((x125%x126)&(x127|x128));

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = -1;
	static uint8_t x131 = 1U;
	int64_t x132 = 2167550825815LL;
	static int64_t t32 = -8417162538719697LL;

	t32 = ((x129%x130)&(x131|x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile int16_t x134 = INT16_MAX;
	uint32_t x135 = 3011U;
	volatile int64_t t33 = 139743039989576914LL;

	t33 = ((x133%x134)&(x135|x136));

	if (t33 != 3LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int8_t x139 = INT8_MIN;
	static int16_t x140 = -1;
	volatile uint64_t t34 = 21468LLU;

	t34 = ((x137%x138)&(x139|x140));

	if (t34 != 780114936525LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	static uint64_t x143 = 749577670LLU;
	volatile int64_t x144 = -1LL;
	volatile uint64_t t35 = 12252556953300LLU;

	t35 = ((x141%x142)&(x143|x144));

	if (t35 != 32767LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x147 = 3361976LLU;

	t36 = ((x145%x146)&(x147|x148));

	if (t36 != 2164746LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static int32_t x150 = -3896850;
	static uint8_t x151 = UINT8_MAX;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = ((x149%x150)&(x151|x152));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 209315207560LLU;
	volatile int64_t x156 = INT64_MAX;
	uint64_t t38 = 9190771834152LLU;

	t38 = ((x153%x154)&(x155|x156));

	if (t38 != 209315207560LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	volatile int32_t x158 = -1;
	static int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MAX;

	t39 = ((x157%x158)&(x159|x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = 11;
	static int8_t x166 = 36;
	uint32_t x167 = UINT32_MAX;
	volatile int8_t x168 = INT8_MIN;
	volatile uint32_t t40 = 215U;

	t40 = ((x165%x166)&(x167|x168));

	if (t40 != 11U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = -13;
	int8_t x170 = -1;
	int32_t x171 = 7791;
	int8_t x172 = 1;
	int32_t t41 = 1586885;

	t41 = ((x169%x170)&(x171|x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	int16_t x176 = 44;
	static volatile int64_t t42 = 41443856LL;

	t42 = ((x173%x174)&(x175|x176));

	if (t42 != -32724LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x178 = 882LLU;
	int32_t x179 = 5722;
	static int32_t x180 = INT32_MIN;

	t43 = ((x177%x178)&(x179|x180));

	if (t43 != 8LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x181 = 10551U;
	int8_t x182 = -1;
	uint64_t x183 = 5LLU;
	uint16_t x184 = 220U;
	volatile uint64_t t44 = 688827LLU;

	t44 = ((x181%x182)&(x183|x184));

	if (t44 != 21LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x186 = 29U;
	volatile uint64_t x187 = 0LLU;
	int64_t x188 = INT64_MIN;
	volatile uint64_t t45 = 1LLU;

	t45 = ((x185%x186)&(x187|x188));

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x189 = -7;
	int8_t x190 = -3;
	uint16_t x191 = 1407U;
	volatile int64_t t46 = 100977LL;

	t46 = ((x189%x190)&(x191|x192));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x195 = 930119U;
	int16_t x196 = INT16_MIN;

	t47 = ((x193%x194)&(x195|x196));

	if (t47 != 4294947136LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = 1;
	int16_t x198 = 102;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = INT64_MIN;
	volatile int64_t t48 = -1658698660229LL;

	t48 = ((x197%x198)&(x199|x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MAX;
	uint64_t x202 = 2LLU;
	int16_t x203 = 7;
	volatile int8_t x204 = INT8_MIN;
	uint64_t t49 = 115216860972LLU;

	t49 = ((x201%x202)&(x203|x204));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = INT16_MIN;
	static int8_t x207 = -33;
	static volatile uint16_t x208 = 252U;

	t50 = ((x205%x206)&(x207|x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = INT8_MIN;
	volatile int16_t x210 = -4023;
	static int8_t x211 = 0;

	t51 = ((x209%x210)&(x211|x212));

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x213 = UINT16_MAX;
	volatile uint64_t x214 = 455406204346337233LLU;
	int64_t x216 = INT64_MAX;

	t52 = ((x213%x214)&(x215|x216));

	if (t52 != 65535LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x218 = INT64_MIN;
	uint64_t x219 = 11994985LLU;
	uint32_t x220 = UINT32_MAX;
	static uint64_t t53 = 37763667826LLU;

	t53 = ((x217%x218)&(x219|x220));

	if (t53 != 48LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	int32_t x228 = 5839773;
	int64_t t54 = -24LL;

	t54 = ((x225%x226)&(x227|x228));

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MAX;
	static uint8_t x231 = 15U;
	volatile int64_t t55 = INT64_MAX;

	t55 = ((x229%x230)&(x231|x232));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x234 = -4;
	uint64_t x235 = 16403742590175LLU;
	uint64_t t56 = 596LLU;

	t56 = ((x233%x234)&(x235|x236));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = INT64_MIN;
	volatile int8_t x238 = INT8_MIN;
	volatile int16_t x240 = -1;

	t57 = ((x237%x238)&(x239|x240));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = 1;
	static volatile int16_t x242 = -195;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = 15394U;
	volatile int64_t t58 = 398251737303LL;

	t58 = ((x241%x242)&(x243|x244));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x245 = 8;
	int32_t x246 = INT32_MAX;
	int32_t x247 = -1;
	static uint64_t x248 = 81177527575754LLU;
	uint64_t t59 = 18021391227938502LLU;

	t59 = ((x245%x246)&(x247|x248));

	if (t59 != 8LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x249 = 6U;
	static uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	volatile int32_t x252 = -1;
	uint64_t t60 = 2804378784LLU;

	t60 = ((x249%x250)&(x251|x252));

	if (t60 != 6LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x253 = INT8_MIN;
	uint32_t x254 = 69U;
	uint64_t x256 = 3957700834099186LLU;
	uint64_t t61 = 1014183582280256LLU;

	t61 = ((x253%x254)&(x255|x256));

	if (t61 != 64LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x258 = 107897310U;
	uint8_t x259 = 2U;
	int8_t x260 = 2;
	static uint32_t t62 = 874713U;

	t62 = ((x257%x258)&(x259|x260));

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MAX;
	int8_t x264 = INT8_MIN;

	t63 = ((x261%x262)&(x263|x264));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = INT64_MIN;
	int16_t x266 = -1;
	static int32_t x267 = -1;
	uint16_t x268 = 196U;

	t64 = ((x265%x266)&(x267|x268));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x269 = 3075;
	uint16_t x270 = 657U;
	static volatile int32_t x272 = -944;
	int32_t t65 = -1;

	t65 = ((x269%x270)&(x271|x272));

	if (t65 != 447) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x273 = 15U;
	static volatile int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile int64_t x276 = -1LL;
	int64_t t66 = 144361927616027217LL;

	t66 = ((x273%x274)&(x275|x276));

	if (t66 != 15LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = -1;
	volatile int32_t x279 = INT32_MIN;
	int16_t x280 = 3;
	static int32_t t67 = -1103459;

	t67 = ((x277%x278)&(x279|x280));

	if (t67 != -2147483645) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 0U;
	static int32_t x282 = INT32_MIN;
	uint8_t x283 = 1U;
	static int64_t x284 = INT64_MIN;
	static volatile int64_t t68 = -4LL;

	t68 = ((x281%x282)&(x283|x284));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 21U;
	static volatile int16_t x286 = 1;
	volatile int8_t x287 = -1;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t69 = -594398836;

	t69 = ((x285%x286)&(x287|x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x290 = UINT8_MAX;
	static volatile uint32_t x291 = 573305U;
	static uint8_t x292 = UINT8_MAX;
	uint32_t t70 = 1276771U;

	t70 = ((x289%x290)&(x291|x292));

	if (t70 != 573312U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x293 = 17975U;
	uint32_t x295 = 1402U;
	uint64_t x296 = 24434LLU;
	volatile uint64_t t71 = 2385599582239LLU;

	t71 = ((x293%x294)&(x295|x296));

	if (t71 != 17970LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = 792356088;
	uint32_t x298 = 937024U;
	uint8_t x299 = 4U;
	uint16_t x300 = 3U;

	t72 = ((x297%x298)&(x299|x300));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x302 = 107581834LLU;
	static int16_t x303 = INT16_MIN;
	int64_t x304 = 1929214208214737392LL;
	volatile uint64_t t73 = 1551977405642LLU;

	t73 = ((x301%x302)&(x303|x304));

	if (t73 != 240LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -6471933472555LL;
	static int32_t x307 = -8;
	int32_t x308 = INT32_MIN;
	int64_t t74 = 1532421582792103833LL;

	t74 = ((x305%x306)&(x307|x308));

	if (t74 != -37472LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = 18265U;
	volatile int32_t x311 = INT32_MIN;
	static int32_t x312 = INT32_MAX;
	int32_t t75 = -12;

	t75 = ((x309%x310)&(x311|x312));

	if (t75 != -14503) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x313 = -1;
	static int32_t x316 = 5328217;

	t76 = ((x313%x314)&(x315|x316));

	if (t76 != -12967) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x318 = -682;
	uint16_t x319 = UINT16_MAX;
	volatile int32_t t77 = 162359;

	t77 = ((x317%x318)&(x319|x320));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x321 = INT8_MIN;
	int64_t x322 = INT64_MAX;
	int16_t x323 = INT16_MAX;
	static int64_t x324 = -42268528LL;
	static int64_t t78 = -52911525948LL;

	t78 = ((x321%x322)&(x323|x324));

	if (t78 != -42238080LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x326 = -8;
	int64_t x327 = -1LL;
	uint64_t x328 = 95LLU;
	uint64_t t79 = 70LLU;

	t79 = ((x325%x326)&(x327|x328));

	if (t79 != 7LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	static int64_t x330 = INT64_MAX;
	uint16_t x331 = UINT16_MAX;
	volatile int32_t x332 = INT32_MAX;
	volatile int64_t t80 = 115942431877259LL;

	t80 = ((x329%x330)&(x331|x332));

	if (t80 != 2147483647LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 92U;
	int64_t x335 = -1LL;
	static uint64_t t81 = 8275184LLU;

	t81 = ((x333%x334)&(x335|x336));

	if (t81 != 51LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x339 = 325;
	int32_t x340 = INT32_MAX;
	volatile int32_t t82 = -239;

	t82 = ((x337%x338)&(x339|x340));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = 678;
	int8_t x342 = 3;
	int16_t x343 = INT16_MIN;
	volatile int32_t x344 = INT32_MIN;
	int32_t t83 = -68684587;

	t83 = ((x341%x342)&(x343|x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MAX;
	int64_t x347 = -265530986652113LL;
	static volatile uint64_t t84 = 39913577175117LLU;

	t84 = ((x345%x346)&(x347|x348));

	if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x353 = 477021699952LLU;
	int8_t x354 = -1;
	int16_t x355 = INT16_MIN;

	t85 = ((x353%x354)&(x355|x356));

	if (t85 != 477021667328LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;
	static uint8_t x358 = UINT8_MAX;
	uint16_t x360 = UINT16_MAX;
	int64_t t86 = -4362327051979LL;

	t86 = ((x357%x358)&(x359|x360));

	if (t86 != 65408LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MAX;
	volatile int16_t x362 = -1;
	volatile uint16_t x363 = 21U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t87 = 14450974LL;

	t87 = ((x361%x362)&(x363|x364));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x365 = INT32_MAX;
	uint32_t x366 = UINT32_MAX;
	static volatile int16_t x367 = INT16_MIN;
	int16_t x368 = 18;
	volatile uint32_t t88 = 56182356U;

	t88 = ((x365%x366)&(x367|x368));

	if (t88 != 2147450898U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 31LLU;
	int16_t x370 = -1;
	int16_t x371 = -1;
	uint8_t x372 = UINT8_MAX;
	volatile uint64_t t89 = 53477235281092619LLU;

	t89 = ((x369%x370)&(x371|x372));

	if (t89 != 31LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x373 = INT64_MAX;
	volatile uint8_t x374 = 5U;
	volatile int8_t x376 = -3;
	int64_t t90 = 5386LL;

	t90 = ((x373%x374)&(x375|x376));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = INT8_MIN;
	static uint16_t x378 = 3092U;
	int32_t x379 = -1;
	volatile int64_t t91 = 23LL;

	t91 = ((x377%x378)&(x379|x380));

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = 0U;
	int64_t x386 = -1LL;
	volatile uint8_t x387 = 0U;
	volatile int16_t x388 = -1;
	volatile int64_t t92 = -14503343LL;

	t92 = ((x385%x386)&(x387|x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = INT64_MAX;
	static uint32_t x390 = 866913800U;
	static uint64_t x391 = 7462501835LLU;
	uint8_t x392 = UINT8_MAX;
	uint64_t t93 = 3286887LLU;

	t93 = ((x389%x390)&(x391|x392));

	if (t93 != 541078695LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x393 = 1636U;
	int32_t x395 = -206093;
	static uint8_t x396 = UINT8_MAX;
	uint32_t t94 = 6722U;

	t94 = ((x393%x394)&(x395|x396));

	if (t94 != 612U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MAX;
	static volatile int8_t x400 = 1;
	static volatile uint64_t t95 = 108235070507322LLU;

	t95 = ((x397%x398)&(x399|x400));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = 39689;
	int8_t x402 = -1;
	volatile uint16_t x403 = 212U;
	int64_t x404 = INT64_MIN;
	int64_t t96 = -1LL;

	t96 = ((x401%x402)&(x403|x404));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -3533;
	int32_t x406 = INT32_MIN;
	static int32_t t97 = -25158;

	t97 = ((x405%x406)&(x407|x408));

	if (t97 != -3533) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x411 = INT64_MAX;
	int8_t x412 = 0;
	int64_t t98 = 0LL;

	t98 = ((x409%x410)&(x411|x412));

	if (t98 != 144LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = INT16_MIN;
	volatile uint32_t x414 = 1528196488U;
	int8_t x415 = -1;
	volatile int64_t x416 = -1LL;
	int64_t t99 = 31LL;

	t99 = ((x413%x414)&(x415|x416));

	if (t99 != 1238541552LL) { NG(); } else { ; }
	
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

