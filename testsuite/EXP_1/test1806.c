#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = INT16_MIN;
volatile int64_t x11 = INT64_MIN;
volatile uint64_t x13 = UINT64_MAX;
int16_t x14 = INT16_MIN;
int32_t x15 = -1;
int32_t t4 = 35;
static volatile int32_t x25 = INT32_MIN;
int32_t x40 = 887522;
uint16_t x48 = UINT16_MAX;
int32_t t11 = -3341890;
static uint8_t x49 = 20U;
int64_t x52 = -7954374983LL;
static volatile int16_t x59 = INT16_MIN;
uint8_t x61 = UINT8_MAX;
int64_t x64 = INT64_MAX;
int64_t t15 = INT64_MAX;
volatile int16_t x67 = INT16_MIN;
static uint32_t x72 = UINT32_MAX;
volatile int64_t t18 = -925438631955LL;
static int16_t x78 = -1;
static int32_t x83 = INT32_MIN;
int16_t x85 = INT16_MIN;
volatile uint16_t x87 = 1531U;
int32_t x92 = -134;
int32_t x93 = -6213;
volatile int16_t x98 = -1;
int64_t x101 = INT64_MIN;
int32_t t25 = 56851;
uint32_t x105 = 422871849U;
uint32_t x114 = 5714U;
uint8_t x117 = 28U;
uint64_t x119 = 1662003431503257LLU;
uint64_t x122 = UINT64_MAX;
static uint16_t x133 = 866U;
static uint32_t x135 = UINT32_MAX;
uint8_t x136 = 22U;
uint64_t x144 = 613664820LLU;
uint64_t x146 = UINT64_MAX;
int8_t x147 = -1;
int64_t x149 = INT64_MAX;
int16_t x151 = -2149;
uint16_t x153 = 98U;
static uint8_t x160 = 7U;
static int16_t x166 = -1;
static int64_t x168 = INT64_MIN;
volatile int32_t x179 = -1;
volatile uint64_t x183 = 286582600620612242LLU;
volatile int32_t t45 = 1;
volatile int32_t t46 = INT32_MAX;
int8_t x193 = -5;
uint64_t x196 = 39180277158LLU;
volatile int64_t x198 = -62197LL;
uint16_t x201 = 1660U;
static int8_t x202 = INT8_MAX;
volatile uint16_t x214 = 0U;
int16_t x215 = INT16_MIN;
int64_t x217 = INT64_MAX;
volatile uint8_t x220 = 23U;
int64_t x223 = INT64_MIN;
int16_t x224 = -1;
static int32_t t55 = -71302489;
uint16_t x228 = 20111U;
volatile int64_t x229 = -11297960LL;
volatile int32_t t57 = 144452429;
int16_t x235 = -1;
int8_t x236 = INT8_MIN;
volatile int32_t x243 = INT32_MAX;
volatile int16_t x244 = -1;
int32_t x249 = INT32_MIN;
int32_t t62 = 1;
int16_t x253 = -1;
int32_t t63 = 1097811;
volatile int32_t t65 = -87;
int64_t x265 = -8956117LL;
volatile uint16_t x266 = UINT16_MAX;
volatile int32_t t66 = 128;
volatile int32_t t67 = -464016707;
int16_t x276 = -9157;
int32_t x277 = INT32_MAX;
int64_t x286 = -1LL;
volatile uint32_t t71 = 7U;
static uint16_t x293 = 1U;
uint16_t x296 = UINT16_MAX;
static int32_t x297 = INT32_MAX;
int32_t x298 = -213832;
volatile int64_t x306 = -1LL;
static int64_t x312 = INT64_MAX;
uint32_t x316 = 95324983U;
volatile int64_t t81 = INT64_MIN;
static int8_t x338 = 1;
static volatile int32_t x340 = INT32_MAX;
volatile uint8_t x343 = 7U;
uint32_t x344 = UINT32_MAX;
static uint64_t x345 = 260826781LLU;
volatile uint16_t x348 = 118U;
int32_t t86 = -11539262;
static int8_t x349 = INT8_MAX;
int8_t x355 = -3;
static uint32_t x366 = 126182U;
volatile uint64_t x367 = UINT64_MAX;
volatile int32_t t91 = -2990967;
volatile int64_t x369 = INT64_MIN;
int64_t x375 = INT64_MIN;
volatile int16_t x376 = -7;
volatile int16_t x380 = 0;
uint32_t x384 = 25711U;
int16_t x388 = 134;
int64_t x389 = INT64_MAX;
volatile uint64_t t97 = 11401967872872109LLU;
int8_t x393 = INT8_MIN;
int64_t x395 = -133464619677974651LL;
uint32_t t98 = 1372U;
int32_t t99 = 1738;


void f0(void) {
	static int16_t x1 = 3;
	static int8_t x2 = INT8_MIN;
	int8_t x4 = -1;
	int32_t t0 = -1;

	t0 = (((x1&x2)<x3)|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -127400;
	int16_t x6 = INT16_MAX;
	static uint8_t x7 = 8U;
	static uint16_t x8 = 611U;
	static volatile int32_t t1 = -7;

	t1 = (((x5&x6)<x7)|x8);

	if (t1 != 611) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int16_t x10 = INT16_MAX;
	int16_t x12 = 1;
	int32_t t2 = -16;

	t2 = (((x9&x10)<x11)|x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = (((x13&x14)<x15)|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 24LL;
	int64_t x18 = INT64_MIN;
	static uint64_t x19 = 3790858612834990589LLU;
	static int32_t x20 = INT32_MIN;

	t4 = (((x17&x18)<x19)|x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile int16_t x22 = 3;
	uint8_t x23 = 3U;
	volatile uint32_t x24 = UINT32_MAX;
	static uint32_t t5 = UINT32_MAX;

	t5 = (((x21&x22)<x23)|x24);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = 57;
	static int64_t x27 = -469802LL;
	volatile int32_t x28 = 114;
	int32_t t6 = -208499031;

	t6 = (((x25&x26)<x27)|x28);

	if (t6 != 114) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 195LLU;
	int32_t x30 = INT32_MIN;
	volatile int64_t x31 = INT64_MAX;
	int32_t x32 = -13;
	int32_t t7 = -71;

	t7 = (((x29&x30)<x31)|x32);

	if (t7 != -13) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 7424884LLU;
	static int32_t x34 = INT32_MAX;
	uint32_t x35 = 91U;
	int64_t x36 = INT64_MIN;
	int64_t t8 = INT64_MIN;

	t8 = (((x33&x34)<x35)|x36);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	static uint16_t x38 = 110U;
	int32_t x39 = -1;
	volatile int32_t t9 = -110717359;

	t9 = (((x37&x38)<x39)|x40);

	if (t9 != 887522) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = 12082160285989LL;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 10;

	t10 = (((x41&x42)<x43)|x44);

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 77924855057286LLU;
	static uint8_t x47 = 119U;

	t11 = (((x45&x46)<x47)|x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 779567013035LLU;
	uint16_t x51 = 62U;
	static int64_t t12 = 474329606LL;

	t12 = (((x49&x50)<x51)|x52);

	if (t12 != -7954374983LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	volatile uint16_t x54 = 98U;
	int32_t x55 = -46454;
	uint64_t x56 = 2498439338LLU;
	volatile uint64_t t13 = 11LLU;

	t13 = (((x53&x54)<x55)|x56);

	if (t13 != 2498439338LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 55U;
	int8_t x58 = INT8_MIN;
	volatile int16_t x60 = INT16_MIN;
	static int32_t t14 = -3;

	t14 = (((x57&x58)<x59)|x60);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = INT8_MIN;
	uint64_t x63 = 1718535LLU;

	t15 = (((x61&x62)<x63)|x64);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int64_t x66 = 482805343481LL;
	uint8_t x68 = 7U;
	static int32_t t16 = -135;

	t16 = (((x65&x66)<x67)|x68);

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	static uint32_t t17 = UINT32_MAX;

	t17 = (((x69&x70)<x71)|x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 42;
	int16_t x74 = -898;
	static uint32_t x75 = UINT32_MAX;
	int64_t x76 = 3054552735348287353LL;

	t18 = (((x73&x74)<x75)|x76);

	if (t18 != 3054552735348287353LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	static int8_t x79 = -1;
	uint16_t x80 = 3808U;
	volatile int32_t t19 = 356722274;

	t19 = (((x77&x78)<x79)|x80);

	if (t19 != 3808) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 8U;
	uint32_t x82 = 16529924U;
	uint32_t x84 = 1020114605U;
	volatile uint32_t t20 = 2739U;

	t20 = (((x81&x82)<x83)|x84);

	if (t20 != 1020114605U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -1182062LL;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = 755;

	t21 = (((x85&x86)<x87)|x88);

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 58995528323LLU;
	volatile uint64_t x90 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	int32_t t22 = 1966;

	t22 = (((x89&x90)<x91)|x92);

	if (t22 != -133) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 5645022U;
	volatile int32_t x95 = -165228392;
	volatile int64_t x96 = INT64_MAX;
	volatile int64_t t23 = INT64_MAX;

	t23 = (((x93&x94)<x95)|x96);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 7U;
	volatile int16_t x99 = 20;
	uint32_t x100 = UINT32_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = (((x97&x98)<x99)|x100);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -1LL;
	static int64_t x103 = 8401888LL;
	int32_t x104 = INT32_MIN;

	t25 = (((x101&x102)<x103)|x104);

	if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	static int32_t x107 = INT32_MIN;
	static uint32_t x108 = 628546U;
	volatile uint32_t t26 = 29422126U;

	t26 = (((x105&x106)<x107)|x108);

	if (t26 != 628547U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = UINT16_MAX;
	static volatile uint64_t x110 = UINT64_MAX;
	static uint8_t x111 = 3U;
	uint32_t x112 = 261294U;
	static uint32_t t27 = 0U;

	t27 = (((x109&x110)<x111)|x112);

	if (t27 != 261294U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	uint8_t x115 = 1U;
	int8_t x116 = INT8_MIN;
	int32_t t28 = -35;

	t28 = (((x113&x114)<x115)|x116);

	if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x118 = -1;
	int64_t x120 = -1LL;
	int64_t t29 = 241039989345LL;

	t29 = (((x117&x118)<x119)|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 12U;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x121&x122)<x123)|x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	volatile int64_t x126 = -561LL;
	int32_t x127 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;
	static uint64_t t31 = UINT64_MAX;

	t31 = (((x125&x126)<x127)|x128);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	volatile uint16_t x130 = UINT16_MAX;
	static uint8_t x131 = 123U;
	volatile uint8_t x132 = UINT8_MAX;
	int32_t t32 = 1;

	t32 = (((x129&x130)<x131)|x132);

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x134 = UINT32_MAX;
	int32_t t33 = 2290763;

	t33 = (((x133&x134)<x135)|x136);

	if (t33 != 23) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	static uint32_t x138 = 13U;
	static uint16_t x139 = 9U;
	int16_t x140 = 1;
	int32_t t34 = 20;

	t34 = (((x137&x138)<x139)|x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -39471753;
	int32_t x142 = INT32_MIN;
	int32_t x143 = -1;
	static uint64_t t35 = 220861401038314LLU;

	t35 = (((x141&x142)<x143)|x144);

	if (t35 != 613664821LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 0;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -227528;

	t36 = (((x145&x146)<x147)|x148);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = -1;
	volatile uint8_t x152 = 3U;
	int32_t t37 = -1;

	t37 = (((x149&x150)<x151)|x152);

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x154 = 0;
	static uint32_t x155 = 10U;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t38 = 95118179;

	t38 = (((x153&x154)<x155)|x156);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 45706149LL;
	volatile uint32_t x158 = 3U;
	uint32_t x159 = 885287U;
	int32_t t39 = -1;

	t39 = (((x157&x158)<x159)|x160);

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -2;
	int32_t x162 = INT32_MAX;
	uint64_t x163 = 2LLU;
	int32_t x164 = INT32_MIN;
	int32_t t40 = INT32_MIN;

	t40 = (((x161&x162)<x163)|x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 6U;
	uint16_t x167 = 1043U;
	int64_t t41 = -41603096223LL;

	t41 = (((x165&x166)<x167)|x168);

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 2602566U;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = -1;
	int8_t x172 = 7;
	int32_t t42 = -294;

	t42 = (((x169&x170)<x171)|x172);

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 3U;
	int8_t x174 = INT8_MIN;
	static int16_t x175 = -1;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

	t43 = (((x173&x174)<x175)|x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 8968LLU;
	uint16_t x178 = UINT16_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 232500;

	t44 = (((x177&x178)<x179)|x180);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	volatile int16_t x182 = INT16_MIN;
	int8_t x184 = -1;

	t45 = (((x181&x182)<x183)|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 1017999U;
	uint16_t x186 = UINT16_MAX;
	static uint8_t x187 = 1U;
	volatile int32_t x188 = INT32_MAX;

	t46 = (((x185&x186)<x187)|x188);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 93674773U;
	int16_t x190 = -107;
	uint64_t x191 = 494LLU;
	int64_t x192 = -15705408117LL;
	volatile int64_t t47 = 377055221LL;

	t47 = (((x189&x190)<x191)|x192);

	if (t47 != -15705408117LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	volatile uint64_t t48 = 429173413612697287LLU;

	t48 = (((x193&x194)<x195)|x196);

	if (t48 != 39180277159LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 3356228LLU;
	volatile int8_t x199 = INT8_MAX;
	int32_t x200 = -1;
	int32_t t49 = 1;

	t49 = (((x197&x198)<x199)|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x203 = -1;
	static int64_t x204 = INT64_MAX;
	volatile int64_t t50 = INT64_MAX;

	t50 = (((x201&x202)<x203)|x204);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = 30;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = -154;
	volatile int32_t t51 = 2053363;

	t51 = (((x205&x206)<x207)|x208);

	if (t51 != -153) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -8509806477LL;
	uint32_t x210 = 254209U;
	volatile int32_t x211 = 20879427;
	static int16_t x212 = INT16_MIN;
	int32_t t52 = -63156958;

	t52 = (((x209&x210)<x211)|x212);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	static int64_t x216 = -1LL;
	volatile int64_t t53 = 14239745648267678LL;

	t53 = (((x213&x214)<x215)|x216);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	volatile int64_t x219 = -231LL;
	static volatile int32_t t54 = 53060;

	t54 = (((x217&x218)<x219)|x220);

	if (t54 != 23) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	static uint32_t x222 = 50633147U;

	t55 = (((x221&x222)<x223)|x224);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -641;
	int32_t x226 = 23;
	int8_t x227 = INT8_MIN;
	static int32_t t56 = -211599;

	t56 = (((x225&x226)<x227)|x228);

	if (t56 != 20111) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = -1;
	int8_t x231 = 2;
	uint8_t x232 = UINT8_MAX;

	t57 = (((x229&x230)<x231)|x232);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = 9751930LL;
	int32_t t58 = -20447;

	t58 = (((x233&x234)<x235)|x236);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	int16_t x240 = 48;
	int32_t t59 = 50;

	t59 = (((x237&x238)<x239)|x240);

	if (t59 != 49) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = UINT64_MAX;
	int64_t x242 = INT64_MAX;
	volatile int32_t t60 = 5;

	t60 = (((x241&x242)<x243)|x244);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint8_t x246 = 0U;
	static uint64_t x247 = 0LLU;
	int16_t x248 = -48;
	volatile int32_t t61 = 5700;

	t61 = (((x245&x246)<x247)|x248);

	if (t61 != -48) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = 13200;
	uint16_t x251 = 962U;
	static uint8_t x252 = UINT8_MAX;

	t62 = (((x249&x250)<x251)|x252);

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MAX;
	static uint8_t x255 = 8U;
	static uint8_t x256 = UINT8_MAX;

	t63 = (((x253&x254)<x255)|x256);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 13450;
	int8_t x258 = INT8_MIN;
	static volatile int16_t x259 = INT16_MAX;
	int64_t x260 = INT64_MAX;
	int64_t t64 = INT64_MAX;

	t64 = (((x257&x258)<x259)|x260);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 290;
	volatile int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;

	t65 = (((x261&x262)<x263)|x264);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x267 = UINT8_MAX;
	int8_t x268 = INT8_MIN;

	t66 = (((x265&x266)<x267)|x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	static uint8_t x270 = 0U;
	int16_t x271 = INT16_MIN;
	volatile int16_t x272 = -1;

	t67 = (((x269&x270)<x271)|x272);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x273 = UINT16_MAX;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	static volatile int32_t t68 = 1181;

	t68 = (((x273&x274)<x275)|x276);

	if (t68 != -9157) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x278 = UINT32_MAX;
	volatile uint32_t x279 = UINT32_MAX;
	uint64_t x280 = 170046005034627LLU;
	volatile uint64_t t69 = 33364947520940602LLU;

	t69 = (((x277&x278)<x279)|x280);

	if (t69 != 170046005034627LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 1U;
	volatile int16_t x282 = INT16_MAX;
	int8_t x283 = 0;
	int64_t x284 = INT64_MIN;
	int64_t t70 = INT64_MIN;

	t70 = (((x281&x282)<x283)|x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = 53U;

	t71 = (((x285&x286)<x287)|x288);

	if (t71 != 53U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 983U;
	int64_t x290 = 54852763155400LL;
	int8_t x291 = INT8_MAX;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 59196258;

	t72 = (((x289&x290)<x291)|x292);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MAX;
	volatile int32_t t73 = -1;

	t73 = (((x293&x294)<x295)|x296);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = INT16_MIN;
	volatile uint16_t x300 = 190U;
	int32_t t74 = -2081;

	t74 = (((x297&x298)<x299)|x300);

	if (t74 != 190) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = UINT16_MAX;
	int32_t x302 = -274;
	volatile uint8_t x303 = 22U;
	int32_t x304 = INT32_MIN;
	int32_t t75 = INT32_MIN;

	t75 = (((x301&x302)<x303)|x304);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 4U;
	int8_t x307 = -2;
	uint16_t x308 = 19347U;
	int32_t t76 = 12;

	t76 = (((x305&x306)<x307)|x308);

	if (t76 != 19347) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = -1;
	int16_t x311 = INT16_MAX;
	int64_t t77 = INT64_MAX;

	t77 = (((x309&x310)<x311)|x312);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = INT32_MAX;
	uint32_t t78 = 1705U;

	t78 = (((x313&x314)<x315)|x316);

	if (t78 != 95324983U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 1252241147LLU;
	int8_t x318 = 0;
	static int16_t x319 = INT16_MIN;
	volatile int32_t x320 = INT32_MIN;
	int32_t t79 = -43663;

	t79 = (((x317&x318)<x319)|x320);

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static volatile uint16_t x322 = UINT16_MAX;
	uint64_t x323 = 515342275488153LLU;
	volatile int8_t x324 = INT8_MAX;
	volatile int32_t t80 = 642225;

	t80 = (((x321&x322)<x323)|x324);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	static int16_t x326 = -1;
	uint64_t x327 = 127304704950209LLU;
	int64_t x328 = INT64_MIN;

	t81 = (((x325&x326)<x327)|x328);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	uint16_t x330 = 63U;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = 3U;
	int32_t t82 = -271972022;

	t82 = (((x329&x330)<x331)|x332);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = UINT64_MAX;
	uint16_t x334 = 80U;
	volatile int64_t x335 = INT64_MIN;
	volatile int64_t x336 = -1LL;
	static int64_t t83 = -3872571LL;

	t83 = (((x333&x334)<x335)|x336);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 4U;
	int32_t x339 = INT32_MIN;
	volatile int32_t t84 = INT32_MAX;

	t84 = (((x337&x338)<x339)|x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -43830562458453LL;
	int32_t x342 = INT32_MIN;
	static volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x341&x342)<x343)|x344);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	int8_t x347 = -36;

	t86 = (((x345&x346)<x347)|x348);

	if (t86 != 119) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MAX;
	static volatile int8_t x352 = -55;
	volatile int32_t t87 = 185425046;

	t87 = (((x349&x350)<x351)|x352);

	if (t87 != -55) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 1406730422536LLU;
	static volatile uint64_t x354 = 355009499208894LLU;
	int32_t x356 = 7672128;
	volatile int32_t t88 = -1;

	t88 = (((x353&x354)<x355)|x356);

	if (t88 != 7672129) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	int32_t x358 = INT32_MIN;
	static int16_t x359 = INT16_MIN;
	uint16_t x360 = UINT16_MAX;
	static int32_t t89 = 199;

	t89 = (((x357&x358)<x359)|x360);

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	static volatile int16_t x362 = 1277;
	static int16_t x363 = 10;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = INT32_MAX;

	t90 = (((x361&x362)<x363)|x364);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	volatile int32_t x368 = INT32_MIN;

	t91 = (((x365&x366)<x367)|x368);

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x370 = 376927697647247LLU;
	volatile int8_t x371 = -2;
	int32_t x372 = -1;
	volatile int32_t t92 = 2337;

	t92 = (((x369&x370)<x371)|x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 7U;
	int8_t x374 = 1;
	int32_t t93 = 25;

	t93 = (((x373&x374)<x375)|x376);

	if (t93 != -7) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	uint64_t x378 = 635LLU;
	static volatile int64_t x379 = INT64_MIN;
	volatile int32_t t94 = -436;

	t94 = (((x377&x378)<x379)|x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -736488LL;
	volatile uint8_t x382 = 0U;
	volatile uint16_t x383 = 11U;
	volatile uint32_t t95 = 19U;

	t95 = (((x381&x382)<x383)|x384);

	if (t95 != 25711U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = 1821;
	volatile uint32_t x386 = UINT32_MAX;
	int64_t x387 = 52763LL;
	static int32_t t96 = 0;

	t96 = (((x385&x386)<x387)|x388);

	if (t96 != 135) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = INT32_MIN;
	static int32_t x391 = 297;
	uint64_t x392 = 3546014112159847LLU;

	t97 = (((x389&x390)<x391)|x392);

	if (t97 != 3546014112159847LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MIN;
	volatile uint32_t x396 = 5487863U;

	t98 = (((x393&x394)<x395)|x396);

	if (t98 != 5487863U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 23;
	int32_t x398 = INT32_MAX;
	uint32_t x399 = 3703012U;
	volatile uint8_t x400 = UINT8_MAX;

	t99 = (((x397&x398)<x399)|x400);

	if (t99 != 255) { NG(); } else { ; }
	
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

