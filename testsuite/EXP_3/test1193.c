#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x1 = -1;
int16_t x4 = INT16_MAX;
volatile uint64_t x8 = UINT64_MAX;
volatile int32_t x9 = INT32_MAX;
uint16_t x11 = 26149U;
uint32_t x14 = 10007515U;
volatile int8_t x19 = INT8_MIN;
int8_t x20 = INT8_MAX;
uint16_t x21 = UINT16_MAX;
uint64_t x32 = 12602986434793LLU;
static int32_t x40 = INT32_MAX;
static uint8_t x44 = UINT8_MAX;
volatile uint32_t x46 = 777968U;
int16_t x47 = INT16_MAX;
uint64_t x48 = 1LLU;
volatile uint64_t x50 = 4393044327825839214LLU;
int16_t x51 = -507;
static int32_t t13 = -24905;
uint16_t x61 = 12U;
int64_t x64 = -224031LL;
int64_t x65 = -6607LL;
volatile int16_t x67 = -739;
static uint32_t x69 = UINT32_MAX;
int32_t x73 = -2;
int64_t x74 = -1LL;
volatile int32_t x78 = INT32_MIN;
volatile int64_t x80 = 83562LL;
int32_t t20 = 989;
int64_t x90 = -435383091LL;
int32_t x100 = 6049626;
int32_t t24 = -7229;
static uint64_t x111 = UINT64_MAX;
int32_t x117 = 26;
uint8_t x122 = 0U;
uint64_t x133 = UINT64_MAX;
int16_t x134 = -1;
volatile int8_t x135 = INT8_MAX;
volatile int32_t t33 = 28829;
int32_t x151 = -282522;
static uint16_t x153 = 4U;
int32_t t38 = 11078;
static uint16_t x161 = UINT16_MAX;
static int16_t x162 = 0;
volatile int8_t x165 = 7;
volatile int64_t x167 = INT64_MIN;
uint32_t x169 = 9078U;
int32_t t41 = -228500;
static uint16_t x173 = 46U;
uint64_t x177 = 383583228955050681LLU;
int16_t x179 = -1;
static uint32_t x181 = 115377361U;
int64_t x184 = -1LL;
volatile int64_t x186 = INT64_MAX;
int16_t x189 = INT16_MIN;
uint64_t x196 = UINT64_MAX;
static int8_t x197 = INT8_MAX;
volatile int32_t t48 = -3669;
int8_t x206 = INT8_MIN;
int16_t x207 = -121;
int32_t x209 = INT32_MIN;
volatile int32_t x215 = -1583141;
int32_t x217 = 4780;
volatile int32_t t52 = -113;
volatile uint8_t x227 = UINT8_MAX;
uint8_t x228 = 0U;
uint16_t x230 = 18160U;
int32_t x232 = INT32_MIN;
uint8_t x234 = 61U;
uint8_t x239 = UINT8_MAX;
volatile int64_t x247 = 122943647LL;
int8_t x279 = -1;
static int32_t x281 = INT32_MIN;
int16_t x294 = INT16_MAX;
volatile int32_t t71 = -11978;
static int32_t x320 = INT32_MIN;
int64_t x321 = INT64_MAX;
int16_t x325 = -1;
int32_t t75 = 811746809;
int32_t t76 = 23883518;
static volatile int64_t x343 = -33257604046LL;
uint64_t x348 = UINT64_MAX;
volatile int8_t x351 = -1;
volatile int32_t t82 = -1512;
volatile int8_t x366 = -1;
volatile uint32_t x368 = UINT32_MAX;
int8_t x378 = INT8_MIN;
int64_t x380 = INT64_MIN;
uint64_t x383 = UINT64_MAX;
uint64_t x389 = UINT64_MAX;
volatile int64_t x390 = 3LL;
volatile int32_t t88 = 1;
static int32_t t90 = 119997;
static int32_t x404 = INT32_MAX;
uint32_t x405 = 35U;
volatile int16_t x413 = INT16_MIN;
uint64_t x414 = 15881117LLU;
static uint64_t x418 = UINT64_MAX;
int16_t x422 = INT16_MIN;
volatile uint64_t x424 = 3LLU;
int8_t x427 = 1;
static int32_t x428 = -742589796;
uint16_t x429 = 76U;
int8_t x432 = INT8_MIN;
uint8_t x433 = UINT8_MAX;
int8_t x434 = 15;
int64_t x435 = INT64_MAX;
volatile int32_t t99 = -156120;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MAX;
	static volatile int32_t t0 = 302684218;

	t0 = ((x1+x2)<=(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = 1;
	static int8_t x7 = 0;
	volatile int32_t t1 = 1462;

	t1 = ((x5+x6)<=(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = -1;
	uint64_t x12 = 13393090LLU;
	int32_t t2 = 613;

	t2 = ((x9+x10)<=(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 79U;
	static int8_t x15 = 13;
	volatile uint64_t x16 = 268LLU;
	int32_t t3 = -263927;

	t3 = ((x13+x14)<=(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -9;
	int16_t x18 = INT16_MIN;
	volatile int32_t t4 = 0;

	t4 = ((x17+x18)<=(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	volatile int32_t x23 = INT32_MAX;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -11158008;

	t5 = ((x21+x22)<=(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int16_t x26 = -1;
	static volatile uint8_t x27 = 70U;
	static volatile int64_t x28 = -1153713LL;
	int32_t t6 = 173;

	t6 = ((x25+x26)<=(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 25786976347884203LLU;
	int64_t x30 = -4545501370LL;
	uint64_t x31 = 0LLU;
	int32_t t7 = -4317;

	t7 = ((x29+x30)<=(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2125U;
	int64_t x34 = INT64_MIN;
	int32_t x35 = -1;
	uint16_t x36 = 3U;
	volatile int32_t t8 = 4043712;

	t8 = ((x33+x34)<=(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = UINT16_MAX;
	volatile uint8_t x38 = 12U;
	volatile int64_t x39 = INT64_MIN;
	volatile int32_t t9 = -242;

	t9 = ((x37+x38)<=(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile uint16_t x42 = 5839U;
	static volatile uint64_t x43 = 970LLU;
	volatile int32_t t10 = -1641;

	t10 = ((x41+x42)<=(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = -8;
	volatile int32_t t11 = 141;

	t11 = ((x45+x46)<=(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	int8_t x52 = 15;
	volatile int32_t t12 = -1;

	t12 = ((x49+x50)<=(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MAX;
	volatile uint16_t x56 = 221U;

	t13 = ((x53+x54)<=(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 277U;
	int16_t x58 = -1;
	volatile int32_t x59 = INT32_MAX;
	static volatile int64_t x60 = INT64_MIN;
	int32_t t14 = -33187;

	t14 = ((x57+x58)<=(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = INT8_MIN;
	static int32_t x63 = -25199;
	static int32_t t15 = 123;

	t15 = ((x61+x62)<=(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 2467971522119686093LLU;
	volatile uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -262724582;

	t16 = ((x65+x66)<=(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = INT16_MIN;
	volatile int16_t x71 = 106;
	static uint16_t x72 = 225U;
	int32_t t17 = 4735066;

	t17 = ((x69+x70)<=(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x75 = 806774597LL;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 163;

	t18 = ((x73+x74)<=(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 242738627409LL;
	int32_t x79 = -785804548;
	static int32_t t19 = -6;

	t19 = ((x77+x78)<=(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	uint16_t x82 = UINT16_MAX;
	static int16_t x83 = -1;
	static volatile int64_t x84 = INT64_MIN;

	t20 = ((x81+x82)<=(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x85 = -586346021256LL;
	static int16_t x86 = 0;
	static volatile int64_t x87 = 2300857753701010380LL;
	volatile uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -46;

	t21 = ((x85+x86)<=(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 80059507U;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = 26;

	t22 = ((x89+x90)<=(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	volatile int16_t x94 = INT16_MIN;
	static int16_t x95 = -65;
	static int8_t x96 = 0;
	volatile int32_t t23 = 184;

	t23 = ((x93+x94)<=(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 15U;
	volatile int16_t x98 = INT16_MAX;
	static int16_t x99 = INT16_MIN;

	t24 = ((x97+x98)<=(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	uint32_t x102 = 1655U;
	int16_t x103 = 176;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t25 = 18518;

	t25 = ((x101+x102)<=(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint8_t x110 = 3U;
	uint32_t x112 = 48U;
	volatile int32_t t26 = 5;

	t26 = ((x109+x110)<=(x111==x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x113 = 1985148922LLU;
	int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = 55U;
	volatile int32_t t27 = -81;

	t27 = ((x113+x114)<=(x115==x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x118 = UINT64_MAX;
	static int32_t x119 = INT32_MIN;
	static uint8_t x120 = UINT8_MAX;
	int32_t t28 = -1;

	t28 = ((x117+x118)<=(x119==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	int64_t x123 = -1LL;
	int8_t x124 = INT8_MIN;
	volatile int32_t t29 = 25286;

	t29 = ((x121+x122)<=(x123==x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	int64_t x126 = -1LL;
	uint8_t x127 = UINT8_MAX;
	static volatile uint64_t x128 = 160LLU;
	int32_t t30 = -226;

	t30 = ((x125+x126)<=(x127==x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MAX;
	uint8_t x130 = 34U;
	uint16_t x131 = 923U;
	int16_t x132 = INT16_MAX;
	volatile int32_t t31 = -3497;

	t31 = ((x129+x130)<=(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x136 = INT16_MAX;
	int32_t t32 = 2;

	t32 = ((x133+x134)<=(x135==x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	static int16_t x138 = 1;
	uint64_t x139 = 2290LLU;
	int8_t x140 = INT8_MIN;

	t33 = ((x137+x138)<=(x139==x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -92;
	int8_t x142 = INT8_MIN;
	volatile int8_t x143 = -25;
	static int64_t x144 = INT64_MIN;
	int32_t t34 = -68;

	t34 = ((x141+x142)<=(x143==x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MIN;
	static int8_t x146 = 1;
	int16_t x147 = -1;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t35 = 317836;

	t35 = ((x145+x146)<=(x147==x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = 8;
	int16_t x150 = INT16_MIN;
	int64_t x152 = -17621770612LL;
	volatile int32_t t36 = -1059;

	t36 = ((x149+x150)<=(x151==x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x154 = 2535958U;
	int8_t x155 = -36;
	uint16_t x156 = UINT16_MAX;
	int32_t t37 = 18;

	t37 = ((x153+x154)<=(x155==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = -1;
	int32_t x158 = INT32_MAX;
	uint16_t x159 = 7U;
	int8_t x160 = INT8_MIN;

	t38 = ((x157+x158)<=(x159==x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x163 = 2958874U;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = 372789912;

	t39 = ((x161+x162)<=(x163==x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = INT64_MIN;
	volatile int32_t x168 = INT32_MIN;
	volatile int32_t t40 = 5336;

	t40 = ((x165+x166)<=(x167==x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x170 = UINT64_MAX;
	int8_t x171 = -1;
	volatile int64_t x172 = 59653188486625LL;

	t41 = ((x169+x170)<=(x171==x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x174 = 350U;
	static int64_t x175 = 5295748744815LL;
	int32_t x176 = 157994;
	volatile int32_t t42 = 411503;

	t42 = ((x173+x174)<=(x175==x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x178 = 19U;
	int32_t x180 = INT32_MIN;
	int32_t t43 = 149231;

	t43 = ((x177+x178)<=(x179==x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x182 = 50;
	int8_t x183 = -1;
	int32_t t44 = -284520720;

	t44 = ((x181+x182)<=(x183==x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = UINT64_MAX;
	volatile int64_t x187 = INT64_MAX;
	int8_t x188 = -1;
	volatile int32_t t45 = 7644690;

	t45 = ((x185+x186)<=(x187==x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x190 = INT16_MIN;
	uint8_t x191 = UINT8_MAX;
	static int64_t x192 = 1LL;
	static int32_t t46 = 68441;

	t46 = ((x189+x190)<=(x191==x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = INT8_MIN;
	volatile uint16_t x194 = UINT16_MAX;
	volatile int8_t x195 = -1;
	static volatile int32_t t47 = -14508;

	t47 = ((x193+x194)<=(x195==x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x198 = 1U;
	uint8_t x199 = 0U;
	int16_t x200 = -1;

	t48 = ((x197+x198)<=(x199==x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x205 = INT8_MIN;
	uint64_t x208 = 29314448832314LLU;
	int32_t t49 = 104788824;

	t49 = ((x205+x206)<=(x207==x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x210 = 1939092307216449058LLU;
	int32_t x211 = INT32_MAX;
	volatile int64_t x212 = INT64_MAX;
	static int32_t t50 = 62;

	t50 = ((x209+x210)<=(x211==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 123111929U;
	int16_t x214 = 682;
	volatile uint64_t x216 = 1068165328LLU;
	int32_t t51 = 11;

	t51 = ((x213+x214)<=(x215==x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x218 = INT8_MIN;
	volatile int64_t x219 = -1377043100521903552LL;
	int8_t x220 = INT8_MAX;

	t52 = ((x217+x218)<=(x219==x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 1;
	static int32_t x222 = INT32_MIN;
	uint8_t x223 = 0U;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t53 = 3268952;

	t53 = ((x221+x222)<=(x223==x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = 3LLU;
	uint16_t x226 = 800U;
	volatile int32_t t54 = 770437;

	t54 = ((x225+x226)<=(x227==x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int8_t x231 = INT8_MAX;
	volatile int32_t t55 = 2566108;

	t55 = ((x229+x230)<=(x231==x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 10642LLU;
	volatile int64_t x235 = 3336015208994LL;
	int8_t x236 = 3;
	int32_t t56 = 98194305;

	t56 = ((x233+x234)<=(x235==x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int16_t x238 = -16;
	uint16_t x240 = UINT16_MAX;
	static volatile int32_t t57 = -52257133;

	t57 = ((x237+x238)<=(x239==x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = -1050276040152LL;
	int32_t x243 = -1;
	int32_t x244 = -45053;
	int32_t t58 = 14466;

	t58 = ((x241+x242)<=(x243==x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x245 = UINT16_MAX;
	volatile int8_t x246 = INT8_MIN;
	static uint32_t x248 = UINT32_MAX;
	volatile int32_t t59 = -1462;

	t59 = ((x245+x246)<=(x247==x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	volatile uint32_t x250 = 6695741U;
	volatile uint16_t x251 = UINT16_MAX;
	uint8_t x252 = 6U;
	int32_t t60 = 2;

	t60 = ((x249+x250)<=(x251==x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = 282;
	uint32_t x258 = 0U;
	int32_t x259 = -1;
	int16_t x260 = INT16_MIN;
	int32_t t61 = -34;

	t61 = ((x257+x258)<=(x259==x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MAX;
	uint32_t x262 = 627U;
	int16_t x263 = INT16_MIN;
	int64_t x264 = -33979026762392LL;
	volatile int32_t t62 = 806276;

	t62 = ((x261+x262)<=(x263==x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -236731LL;
	volatile int64_t x270 = -50591LL;
	static uint8_t x271 = 94U;
	int8_t x272 = INT8_MIN;
	int32_t t63 = 3282713;

	t63 = ((x269+x270)<=(x271==x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x273 = -1;
	uint32_t x274 = 4533712U;
	volatile int32_t x275 = INT32_MAX;
	uint16_t x276 = 50U;
	int32_t t64 = 80287215;

	t64 = ((x273+x274)<=(x275==x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x277 = 15U;
	uint32_t x278 = 1U;
	uint16_t x280 = 139U;
	static int32_t t65 = 6;

	t65 = ((x277+x278)<=(x279==x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x282 = 1LL;
	int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MAX;
	volatile int32_t t66 = 1681768;

	t66 = ((x281+x282)<=(x283==x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = INT32_MAX;
	static uint64_t x290 = UINT64_MAX;
	static uint64_t x291 = 2577697814420353LLU;
	int32_t x292 = INT32_MIN;
	static int32_t t67 = 156;

	t67 = ((x289+x290)<=(x291==x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = -1;
	volatile int32_t x295 = -987;
	uint32_t x296 = UINT32_MAX;
	int32_t t68 = -1719403;

	t68 = ((x293+x294)<=(x295==x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = 123618LL;
	uint32_t x298 = UINT32_MAX;
	volatile int8_t x299 = INT8_MIN;
	uint8_t x300 = 44U;
	volatile int32_t t69 = 13542;

	t69 = ((x297+x298)<=(x299==x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x301 = -1;
	volatile int32_t x302 = -1;
	int32_t x303 = INT32_MAX;
	int64_t x304 = INT64_MAX;
	volatile int32_t t70 = -73156;

	t70 = ((x301+x302)<=(x303==x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MAX;
	uint64_t x306 = 360120LLU;
	uint8_t x307 = 7U;
	uint16_t x308 = 351U;

	t71 = ((x305+x306)<=(x307==x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	volatile int8_t x310 = INT8_MAX;
	uint16_t x311 = 52U;
	int16_t x312 = INT16_MAX;
	volatile int32_t t72 = -161370445;

	t72 = ((x309+x310)<=(x311==x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = 0;
	static int8_t x318 = INT8_MAX;
	int16_t x319 = INT16_MIN;
	static int32_t t73 = 55220678;

	t73 = ((x317+x318)<=(x319==x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x322 = -61LL;
	int32_t x323 = INT32_MAX;
	int8_t x324 = -1;
	int32_t t74 = -53;

	t74 = ((x321+x322)<=(x323==x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	int8_t x328 = 0;

	t75 = ((x325+x326)<=(x327==x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = UINT8_MAX;
	volatile uint8_t x330 = 31U;
	int32_t x331 = -1;
	int32_t x332 = INT32_MAX;

	t76 = ((x329+x330)<=(x331==x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MAX;
	static uint64_t x334 = UINT64_MAX;
	volatile int16_t x335 = 2093;
	int64_t x336 = INT64_MIN;
	int32_t t77 = 446;

	t77 = ((x333+x334)<=(x335==x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = -824893855;
	int8_t x342 = 3;
	int32_t x344 = -1;
	volatile int32_t t78 = 68237179;

	t78 = ((x341+x342)<=(x343==x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x345 = 22293;
	static int64_t x346 = 151055LL;
	int64_t x347 = 83LL;
	static int32_t t79 = 50565008;

	t79 = ((x345+x346)<=(x347==x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x349 = INT64_MIN;
	uint32_t x350 = 18929517U;
	static volatile uint64_t x352 = UINT64_MAX;
	int32_t t80 = -66458;

	t80 = ((x349+x350)<=(x351==x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = -1LL;
	uint16_t x354 = 7U;
	static int8_t x355 = -1;
	int64_t x356 = 1144447424LL;
	volatile int32_t t81 = -3777;

	t81 = ((x353+x354)<=(x355==x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = INT64_MIN;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = INT8_MIN;
	int64_t x364 = -1LL;

	t82 = ((x361+x362)<=(x363==x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 1948U;
	uint64_t x367 = UINT64_MAX;
	volatile int32_t t83 = -17982831;

	t83 = ((x365+x366)<=(x367==x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = -5932;
	int16_t x370 = INT16_MAX;
	static volatile int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;
	static int32_t t84 = 5;

	t84 = ((x369+x370)<=(x371==x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MAX;
	int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MAX;
	int32_t x376 = -2335873;
	static volatile int32_t t85 = 1851;

	t85 = ((x373+x374)<=(x375==x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = UINT64_MAX;
	volatile int32_t x379 = INT32_MAX;
	static volatile int32_t t86 = -1;

	t86 = ((x377+x378)<=(x379==x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = -1;
	int32_t x382 = -985988847;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t87 = 10448126;

	t87 = ((x381+x382)<=(x383==x384));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x391 = 8983U;
	int32_t x392 = 1;

	t88 = ((x389+x390)<=(x391==x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x393 = 182U;
	static int32_t x394 = -1;
	int64_t x395 = -1LL;
	int8_t x396 = 3;
	static int32_t t89 = 15230261;

	t89 = ((x393+x394)<=(x395==x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x397 = -1;
	static uint32_t x398 = 6385478U;
	int8_t x399 = INT8_MIN;
	static int32_t x400 = INT32_MIN;

	t90 = ((x397+x398)<=(x399==x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x401 = -1;
	static uint64_t x402 = 18000980190LLU;
	int32_t x403 = -1;
	static int32_t t91 = -1;

	t91 = ((x401+x402)<=(x403==x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x406 = -7;
	int32_t x407 = INT32_MAX;
	static uint32_t x408 = 31589921U;
	static volatile int32_t t92 = 42;

	t92 = ((x405+x406)<=(x407==x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x409 = 1008;
	int32_t x410 = -172216;
	volatile int8_t x411 = INT8_MAX;
	int16_t x412 = -14;
	volatile int32_t t93 = -36237;

	t93 = ((x409+x410)<=(x411==x412));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x415 = 2;
	static uint64_t x416 = 229970936173231LLU;
	int32_t t94 = -871;

	t94 = ((x413+x414)<=(x415==x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = -1LL;
	int64_t x419 = INT64_MIN;
	uint32_t x420 = UINT32_MAX;
	volatile int32_t t95 = 2;

	t95 = ((x417+x418)<=(x419==x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = -1;
	int8_t x423 = 1;
	static int32_t t96 = 17906515;

	t96 = ((x421+x422)<=(x423==x424));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x425 = 16U;
	uint16_t x426 = UINT16_MAX;
	int32_t t97 = 26;

	t97 = ((x425+x426)<=(x427==x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x430 = INT64_MIN;
	int64_t x431 = INT64_MAX;
	int32_t t98 = 15;

	t98 = ((x429+x430)<=(x431==x432));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x436 = UINT8_MAX;

	t99 = ((x433+x434)<=(x435==x436));

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

