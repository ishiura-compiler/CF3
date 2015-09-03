#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int64_t x3 = 59483966759515LL;
volatile uint64_t x12 = 521643806976LLU;
static volatile uint64_t t2 = 337727002337LLU;
static uint64_t x17 = UINT64_MAX;
volatile int32_t x21 = INT32_MAX;
uint64_t x29 = 5LLU;
static int32_t x33 = 985210748;
int16_t x34 = -1;
int64_t x38 = 213365LL;
static int64_t x42 = INT64_MIN;
volatile int16_t x57 = 0;
uint16_t x58 = 91U;
static int8_t x61 = INT8_MIN;
uint16_t x62 = 1U;
static int32_t x71 = INT32_MIN;
volatile uint32_t x72 = UINT32_MAX;
uint8_t x74 = UINT8_MAX;
static int16_t x77 = INT16_MIN;
static uint32_t x90 = 886922U;
int32_t x92 = INT32_MIN;
int8_t x96 = 1;
int32_t t23 = -27922654;
volatile int32_t t25 = 5764481;
uint8_t x105 = 3U;
volatile int64_t x107 = INT64_MIN;
int16_t x109 = INT16_MAX;
uint64_t t28 = 128319510865LLU;
int32_t x117 = INT32_MAX;
int32_t x120 = INT32_MIN;
int32_t x122 = INT32_MIN;
uint16_t x124 = 39U;
static int16_t x132 = -1;
uint16_t x133 = UINT16_MAX;
uint32_t x134 = UINT32_MAX;
int8_t x137 = -1;
int32_t x140 = INT32_MIN;
int32_t t35 = -35714;
volatile int64_t x147 = 2LL;
int32_t t36 = 440772;
volatile uint32_t x151 = 16082028U;
int32_t x152 = -1;
int64_t x161 = -1LL;
uint64_t x165 = 57423052965LLU;
uint64_t x167 = UINT64_MAX;
static volatile uint64_t x168 = 249248992957LLU;
int16_t x169 = INT16_MIN;
int64_t x171 = 4660LL;
int16_t x172 = -1;
volatile int64_t x176 = INT64_MIN;
uint8_t x177 = UINT8_MAX;
volatile uint8_t x179 = 64U;
volatile int16_t x186 = INT16_MIN;
uint64_t x191 = 38605LLU;
int32_t t47 = -2465;
int8_t x200 = 0;
static int8_t x205 = -1;
int8_t x208 = -1;
volatile int64_t x209 = INT64_MAX;
int32_t x210 = -1;
uint32_t t52 = UINT32_MAX;
uint16_t x215 = 25372U;
int32_t t53 = 121;
uint8_t x217 = 30U;
static int8_t x220 = 0;
volatile int16_t x230 = 1;
volatile uint64_t t57 = UINT64_MAX;
volatile int32_t x238 = INT32_MAX;
static volatile int32_t t59 = -108138210;
int64_t x245 = INT64_MAX;
static volatile int32_t x251 = -222;
int64_t x264 = -75LL;
uint64_t x265 = 225661904746747293LLU;
int32_t t66 = -61;
static int32_t x278 = INT32_MIN;
uint64_t x279 = 471672110297LLU;
static int64_t x283 = -1LL;
uint8_t x287 = 77U;
int16_t x289 = -1;
int16_t x290 = INT16_MIN;
int8_t x299 = -1;
int32_t t78 = -1779;
int64_t t81 = INT64_MIN;
volatile int32_t t82 = -64476113;
static volatile int32_t t83 = 23;
volatile uint64_t t85 = 342LLU;
static int32_t x345 = INT32_MIN;
volatile int8_t x346 = INT8_MIN;
static volatile int8_t x347 = -1;
uint64_t x352 = 547324368888LLU;
uint64_t t87 = 9124LLU;
int32_t x355 = INT32_MIN;
uint8_t x361 = 7U;
int64_t x363 = 1LL;
volatile int32_t t90 = 74113;
static uint16_t x366 = 12U;
static volatile int32_t t91 = -219495980;
static int8_t x369 = 13;
int64_t x373 = INT64_MIN;
static int64_t x378 = INT64_MIN;
int32_t x383 = -40252;
static volatile int32_t t95 = 531291;
int64_t x390 = INT64_MIN;
volatile uint8_t x391 = UINT8_MAX;
volatile uint32_t t97 = UINT32_MAX;
static int64_t t98 = INT64_MAX;
static int8_t x398 = INT8_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (((x1%x2)<x3)|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile uint16_t x6 = UINT16_MAX;
	int16_t x7 = INT16_MIN;
	volatile uint64_t x8 = 145191043998850874LLU;
	uint64_t t1 = 0LLU;

	t1 = (((x5%x6)<x7)|x8);

	if (t1 != 145191043998850874LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 4811U;
	int8_t x10 = 2;
	volatile int8_t x11 = -1;

	t2 = (((x9%x10)<x11)|x12);

	if (t2 != 521643806977LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -2;
	static uint8_t x14 = 10U;
	int32_t x15 = INT32_MAX;
	int64_t x16 = 19482257700825611LL;
	static volatile int64_t t3 = 9518858006385LL;

	t3 = (((x13%x14)<x15)|x16);

	if (t3 != 19482257700825611LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 1458351LLU;
	static int8_t x19 = 3;
	uint16_t x20 = 3879U;
	int32_t t4 = 4182331;

	t4 = (((x17%x18)<x19)|x20);

	if (t4 != 3879) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	int32_t x24 = -227;
	int32_t t5 = -1;

	t5 = (((x21%x22)<x23)|x24);

	if (t5 != -227) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -2546;
	int64_t x26 = INT64_MIN;
	int32_t x27 = -7321682;
	int64_t x28 = INT64_MAX;
	int64_t t6 = INT64_MAX;

	t6 = (((x25%x26)<x27)|x28);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 1;
	int32_t x31 = INT32_MIN;
	int32_t x32 = 511;
	int32_t t7 = 3599903;

	t7 = (((x29%x30)<x31)|x32);

	if (t7 != 511) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x35 = 62798304477879968LLU;
	uint64_t x36 = 2374974853971LLU;
	volatile uint64_t t8 = 15LLU;

	t8 = (((x33%x34)<x35)|x36);

	if (t8 != 2374974853971LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile int16_t x39 = 2;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 44366;

	t9 = (((x37%x38)<x39)|x40);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int16_t x43 = -47;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -427835;

	t10 = (((x41%x42)<x43)|x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	static int64_t x47 = -70996136968LL;
	uint32_t x48 = UINT32_MAX;
	static uint32_t t11 = UINT32_MAX;

	t11 = (((x45%x46)<x47)|x48);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MAX;
	volatile uint32_t x50 = 2732U;
	int8_t x51 = INT8_MAX;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = 1;

	t12 = (((x49%x50)<x51)|x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 56813552LLU;
	int8_t x54 = 2;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	static int64_t t13 = 14016698464880402LL;

	t13 = (((x53%x54)<x55)|x56);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = INT16_MAX;
	static int8_t x60 = 10;
	int32_t t14 = -7;

	t14 = (((x57%x58)<x59)|x60);

	if (t14 != 11) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = 15;
	volatile int32_t x64 = 3546;
	volatile int32_t t15 = 291092;

	t15 = (((x61%x62)<x63)|x64);

	if (t15 != 3547) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint32_t x66 = UINT32_MAX;
	static int32_t x67 = -1;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = INT32_MIN;

	t16 = (((x65%x66)<x67)|x68);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 3115;
	static uint8_t x70 = 1U;
	static volatile uint32_t t17 = UINT32_MAX;

	t17 = (((x69%x70)<x71)|x72);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	int8_t x75 = INT8_MAX;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -208334383;

	t18 = (((x73%x74)<x75)|x76);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MAX;
	uint64_t x79 = 3974LLU;
	static int64_t x80 = -911LL;
	volatile int64_t t19 = -508709415234068646LL;

	t19 = (((x77%x78)<x79)|x80);

	if (t19 != -911LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 62241266179508LL;
	int16_t x82 = 5;
	int16_t x83 = INT16_MIN;
	static int32_t x84 = 15450844;
	int32_t t20 = -231059900;

	t20 = (((x81%x82)<x83)|x84);

	if (t20 != 15450844) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -27219768142983LL;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	uint16_t x88 = UINT16_MAX;
	static int32_t t21 = 84;

	t21 = (((x85%x86)<x87)|x88);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = 490;
	int16_t x91 = INT16_MIN;
	volatile int32_t t22 = 172;

	t22 = (((x89%x90)<x91)|x92);

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1LL;
	int32_t x94 = INT32_MAX;
	int16_t x95 = 814;

	t23 = (((x93%x94)<x95)|x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x97 = 352856122;
	int64_t x98 = 1002896866LL;
	int32_t x99 = INT32_MIN;
	static int32_t x100 = -68836;
	static volatile int32_t t24 = 0;

	t24 = (((x97%x98)<x99)|x100);

	if (t24 != -68836) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 496900U;
	static volatile uint32_t x102 = UINT32_MAX;
	int16_t x103 = -1;
	int16_t x104 = -1;

	t25 = (((x101%x102)<x103)|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x106 = INT32_MIN;
	int32_t x108 = INT32_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = (((x105%x106)<x107)|x108);

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = -1;
	static int8_t x111 = -1;
	static uint8_t x112 = 0U;
	volatile int32_t t27 = 1036922;

	t27 = (((x109%x110)<x111)|x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	static volatile int8_t x114 = INT8_MAX;
	static uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 7636077695112LLU;

	t28 = (((x113%x114)<x115)|x116);

	if (t28 != 7636077695113LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x118 = -1LL;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t t29 = 571190181;

	t29 = (((x117%x118)<x119)|x120);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 7;
	int32_t x123 = INT32_MAX;
	int32_t t30 = 0;

	t30 = (((x121%x122)<x123)|x124);

	if (t30 != 39) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	volatile uint8_t x126 = 4U;
	static volatile int8_t x127 = -1;
	int8_t x128 = 3;
	volatile int32_t t31 = -3;

	t31 = (((x125%x126)<x127)|x128);

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 41U;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 40713051U;
	volatile int32_t t32 = 278;

	t32 = (((x129%x130)<x131)|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	static int32_t t33 = -1;

	t33 = (((x133%x134)<x135)|x136);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x138 = INT32_MIN;
	int64_t x139 = -1LL;
	volatile int32_t t34 = INT32_MIN;

	t34 = (((x137%x138)<x139)|x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = -1;

	t35 = (((x141%x142)<x143)|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -2035856330900LL;
	int32_t x146 = 360;
	int16_t x148 = INT16_MIN;

	t36 = (((x145%x146)<x147)|x148);

	if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 2337102LLU;
	int64_t x150 = INT64_MIN;
	volatile int32_t t37 = -1;

	t37 = (((x149%x150)<x151)|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = UINT32_MAX;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t38 = 185583045;

	t38 = (((x153%x154)<x155)|x156);

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	static uint8_t x158 = 3U;
	static volatile int64_t x159 = 1829023908521001571LL;
	uint32_t x160 = 346181U;
	volatile uint32_t t39 = 6995U;

	t39 = (((x157%x158)<x159)|x160);

	if (t39 != 346181U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 3LLU;
	volatile uint64_t t40 = 1562501241LLU;

	t40 = (((x161%x162)<x163)|x164);

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = -23960;
	uint64_t t41 = 1119956807655857LLU;

	t41 = (((x165%x166)<x167)|x168);

	if (t41 != 249248992957LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = 10170311180LL;
	volatile int32_t t42 = 23;

	t42 = (((x169%x170)<x171)|x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 59U;
	int64_t x174 = INT64_MIN;
	int8_t x175 = 14;
	volatile int64_t t43 = INT64_MIN;

	t43 = (((x173%x174)<x175)|x176);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MAX;
	uint64_t x180 = 2070LLU;
	static volatile uint64_t t44 = 30286LLU;

	t44 = (((x177%x178)<x179)|x180);

	if (t44 != 2070LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 308LLU;
	volatile int16_t x182 = 714;
	int32_t x183 = -1;
	int16_t x184 = INT16_MAX;
	int32_t t45 = -189483;

	t45 = (((x181%x182)<x183)|x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	static int8_t x187 = 46;
	static volatile int32_t x188 = -1;
	static int32_t t46 = 18;

	t46 = (((x185%x186)<x187)|x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile int16_t x190 = INT16_MIN;
	int8_t x192 = INT8_MIN;

	t47 = (((x189%x190)<x191)|x192);

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 81996342LLU;
	int32_t x194 = INT32_MAX;
	static uint8_t x195 = 9U;
	int16_t x196 = -1;
	int32_t t48 = -3950685;

	t48 = (((x193%x194)<x195)|x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	volatile int8_t x198 = -28;
	int64_t x199 = -1LL;
	volatile int32_t t49 = 1;

	t49 = (((x197%x198)<x199)|x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static uint16_t x202 = UINT16_MAX;
	volatile int32_t x203 = INT32_MIN;
	int8_t x204 = -2;
	static int32_t t50 = -25;

	t50 = (((x201%x202)<x203)|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 94U;
	int64_t x207 = -442882392LL;
	int32_t t51 = 158;

	t51 = (((x205%x206)<x207)|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x211 = INT16_MIN;
	static uint32_t x212 = UINT32_MAX;

	t52 = (((x209%x210)<x211)|x212);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	volatile uint8_t x214 = 3U;
	int8_t x216 = -3;

	t53 = (((x213%x214)<x215)|x216);

	if (t53 != -3) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MAX;
	int8_t x219 = INT8_MAX;
	volatile int32_t t54 = -11407;

	t54 = (((x217%x218)<x219)|x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = 24056415;
	static int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t55 = 697369;

	t55 = (((x221%x222)<x223)|x224);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	static uint32_t x226 = UINT32_MAX;
	int64_t x227 = -1LL;
	int32_t x228 = -1;
	volatile int32_t t56 = 1867;

	t56 = (((x225%x226)<x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x231 = -1;
	uint64_t x232 = UINT64_MAX;

	t57 = (((x229%x230)<x231)|x232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	uint8_t x234 = 11U;
	uint8_t x235 = 127U;
	static int8_t x236 = 5;
	int32_t t58 = 169815751;

	t58 = (((x233%x234)<x235)|x236);

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = 10;
	uint32_t x239 = 0U;
	static volatile uint8_t x240 = 9U;

	t59 = (((x237%x238)<x239)|x240);

	if (t59 != 9) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 52;
	uint8_t x242 = 13U;
	static volatile int8_t x243 = INT8_MIN;
	int64_t x244 = -1LL;
	volatile int64_t t60 = 2110642460663LL;

	t60 = (((x241%x242)<x243)|x244);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x246 = 602991858LLU;
	int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t61 = -122;

	t61 = (((x245%x246)<x247)|x248);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -11301592;
	int64_t x250 = INT64_MIN;
	int64_t x252 = -2355138058428LL;
	volatile int64_t t62 = -1479805LL;

	t62 = (((x249%x250)<x251)|x252);

	if (t62 != -2355138058427LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 5897U;
	uint64_t x254 = UINT64_MAX;
	volatile int32_t x255 = -827;
	int8_t x256 = INT8_MIN;
	int32_t t63 = -26610311;

	t63 = (((x253%x254)<x255)|x256);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	uint32_t x258 = UINT32_MAX;
	static int32_t x259 = INT32_MAX;
	static int32_t x260 = -1;
	int32_t t64 = -4;

	t64 = (((x257%x258)<x259)|x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -1;
	uint8_t x262 = 14U;
	int64_t x263 = 213324LL;
	static int64_t t65 = 126071614372LL;

	t65 = (((x261%x262)<x263)|x264);

	if (t65 != -75LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = INT32_MIN;
	int8_t x267 = 33;
	int32_t x268 = -1;

	t66 = (((x265%x266)<x267)|x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 0U;
	static int32_t x270 = -1444156;
	int64_t x271 = INT64_MIN;
	int64_t x272 = -648639LL;
	static volatile int64_t t67 = -49LL;

	t67 = (((x269%x270)<x271)|x272);

	if (t67 != -648639LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -3925548825LL;
	static uint64_t x274 = 490988474192LLU;
	int64_t x275 = -129963291946948934LL;
	uint32_t x276 = 278U;
	volatile uint32_t t68 = 24851U;

	t68 = (((x273%x274)<x275)|x276);

	if (t68 != 279U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int8_t x280 = INT8_MAX;
	volatile int32_t t69 = -1541;

	t69 = (((x277%x278)<x279)|x280);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MIN;
	int64_t x282 = -1LL;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = (((x281%x282)<x283)|x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 210742265LL;
	static int16_t x286 = INT16_MIN;
	uint8_t x288 = 1U;
	int32_t t71 = -103086;

	t71 = (((x285%x286)<x287)|x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = INT8_MIN;
	volatile uint16_t x292 = 241U;
	static int32_t t72 = -129764680;

	t72 = (((x289%x290)<x291)|x292);

	if (t72 != 241) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x293 = 28833084586241LLU;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MAX;
	static uint64_t x296 = 193LLU;
	volatile uint64_t t73 = 3235763LLU;

	t73 = (((x293%x294)<x295)|x296);

	if (t73 != 193LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static int32_t x298 = -1125;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -162173841;

	t74 = (((x297%x298)<x299)|x300);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int32_t x302 = 16653872;
	static int32_t x303 = -1;
	volatile uint16_t x304 = UINT16_MAX;
	static volatile int32_t t75 = 64657;

	t75 = (((x301%x302)<x303)|x304);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MAX;
	int8_t x307 = INT8_MIN;
	volatile int64_t x308 = 27LL;
	static int64_t t76 = -6756992805962LL;

	t76 = (((x305%x306)<x307)|x308);

	if (t76 != 27LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = 36609;
	static int8_t x310 = INT8_MIN;
	uint16_t x311 = 633U;
	volatile int32_t x312 = 0;
	volatile int32_t t77 = -33095;

	t77 = (((x309%x310)<x311)|x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = -1;
	int8_t x314 = -1;
	int32_t x315 = INT32_MIN;
	static int32_t x316 = 1;

	t78 = (((x313%x314)<x315)|x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 1;
	int64_t x318 = -48501224134521658LL;
	volatile int16_t x319 = INT16_MIN;
	uint8_t x320 = UINT8_MAX;
	int32_t t79 = -98403859;

	t79 = (((x317%x318)<x319)|x320);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	volatile int64_t x322 = -253LL;
	static uint16_t x323 = 1U;
	volatile int16_t x324 = 5;
	static int32_t t80 = 0;

	t80 = (((x321%x322)<x323)|x324);

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = 1429840959668256LL;
	volatile int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MIN;

	t81 = (((x325%x326)<x327)|x328);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	uint32_t x330 = 640297177U;
	int16_t x331 = 25;
	int8_t x332 = 3;

	t82 = (((x329%x330)<x331)|x332);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -46796468023LL;
	uint8_t x334 = UINT8_MAX;
	uint64_t x335 = 0LLU;
	int16_t x336 = INT16_MAX;

	t83 = (((x333%x334)<x335)|x336);

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 10U;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t84 = -305869083;

	t84 = (((x337%x338)<x339)|x340);

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MAX;
	static int32_t x343 = INT32_MAX;
	uint64_t x344 = 16849884750614LLU;

	t85 = (((x341%x342)<x343)|x344);

	if (t85 != 16849884750615LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x348 = 6U;
	volatile int32_t t86 = 63646;

	t86 = (((x345%x346)<x347)|x348);

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = 720U;
	int8_t x350 = INT8_MIN;
	static int16_t x351 = -1;

	t87 = (((x349%x350)<x351)|x352);

	if (t87 != 547324368888LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	int64_t x356 = INT64_MIN;
	volatile int64_t t88 = INT64_MIN;

	t88 = (((x353%x354)<x355)|x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x357 = INT8_MIN;
	uint8_t x358 = 1U;
	volatile uint8_t x359 = 29U;
	volatile uint16_t x360 = 12U;
	volatile int32_t t89 = -4;

	t89 = (((x357%x358)<x359)|x360);

	if (t89 != 13) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x362 = 1777U;
	int16_t x364 = INT16_MIN;

	t90 = (((x361%x362)<x363)|x364);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	volatile int64_t x367 = -1LL;
	int16_t x368 = 58;

	t91 = (((x365%x366)<x367)|x368);

	if (t91 != 59) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = -102;

	t92 = (((x369%x370)<x371)|x372);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = 37099331544LLU;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t93 = -18;

	t93 = (((x373%x374)<x375)|x376);

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int8_t x379 = INT8_MAX;
	static uint64_t x380 = 762681LLU;
	static uint64_t t94 = 9689731601LLU;

	t94 = (((x377%x378)<x379)|x380);

	if (t94 != 762681LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MIN;
	int8_t x384 = -1;

	t95 = (((x381%x382)<x383)|x384);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -5637;
	static volatile int32_t x386 = INT32_MIN;
	uint16_t x387 = UINT16_MAX;
	static volatile uint8_t x388 = 118U;
	volatile int32_t t96 = -22843584;

	t96 = (((x385%x386)<x387)|x388);

	if (t96 != 119) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -15;
	uint32_t x392 = UINT32_MAX;

	t97 = (((x389%x390)<x391)|x392);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 468U;
	int8_t x394 = -1;
	int64_t x395 = INT64_MAX;
	static int64_t x396 = INT64_MAX;

	t98 = (((x393%x394)<x395)|x396);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int16_t x399 = INT16_MIN;
	int16_t x400 = -1;
	int32_t t99 = -12769;

	t99 = (((x397%x398)<x399)|x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

