#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 434160LLU;
int32_t x8 = -1;
volatile int32_t t1 = 151543639;
int64_t x10 = -1LL;
int16_t x11 = INT16_MIN;
volatile int64_t x16 = INT64_MIN;
int16_t x26 = INT16_MIN;
int32_t x27 = INT32_MIN;
volatile int16_t x31 = -1;
int32_t x48 = INT32_MAX;
static uint16_t x49 = 29U;
volatile uint8_t x53 = UINT8_MAX;
int16_t x54 = -1;
int32_t x56 = 1304535;
uint16_t x58 = 867U;
uint32_t x59 = UINT32_MAX;
int16_t x70 = -1;
int16_t x71 = INT16_MAX;
int32_t x76 = 743443;
int8_t x87 = -1;
int32_t x92 = 239834653;
int32_t x95 = -36640;
uint32_t x100 = 61U;
volatile int32_t x102 = INT32_MIN;
int16_t x104 = INT16_MAX;
int16_t x108 = -15250;
int32_t t26 = 6724307;
uint64_t x111 = 86365247576752683LLU;
volatile int32_t x112 = INT32_MAX;
static volatile int32_t t29 = -1971;
volatile int16_t x121 = 3;
int64_t x123 = INT64_MIN;
int32_t x124 = INT32_MIN;
uint32_t x127 = 1611853759U;
int8_t x136 = -1;
int64_t x147 = -102330567261LL;
int32_t t37 = -247248;
int32_t x157 = INT32_MIN;
int64_t x161 = INT64_MIN;
int32_t x167 = 2046043;
static volatile int32_t t43 = 351073;
uint8_t x180 = 4U;
static int8_t x205 = INT8_MIN;
int64_t x212 = INT64_MIN;
int64_t x213 = 4069LL;
int32_t x215 = 3;
volatile int64_t x216 = INT64_MAX;
uint16_t x217 = 11U;
int64_t x227 = INT64_MIN;
int8_t x228 = -1;
volatile int32_t t56 = 6841012;
volatile uint32_t x232 = UINT32_MAX;
int16_t x235 = 56;
int32_t x236 = 414306813;
uint64_t x237 = 506587217405346968LLU;
static int32_t x239 = -1;
int8_t x243 = -1;
int32_t t61 = -1347586;
uint32_t x251 = UINT32_MAX;
int32_t t62 = -7;
volatile uint16_t x253 = UINT16_MAX;
int8_t x262 = INT8_MAX;
uint64_t x264 = 28239576006LLU;
volatile int64_t x269 = -57936481LL;
static volatile int32_t t67 = 71;
int64_t x281 = -261538LL;
int32_t x283 = INT32_MAX;
int32_t x284 = -1;
int8_t x287 = 57;
int8_t x291 = INT8_MIN;
int32_t x296 = INT32_MIN;
int8_t x297 = 2;
int32_t x298 = -1;
volatile int32_t t77 = -176;
int32_t x315 = -27856;
int32_t t79 = -8331;
static uint32_t x332 = UINT32_MAX;
static uint16_t x334 = 61U;
int64_t x335 = -793975353LL;
volatile int32_t t83 = 1;
uint64_t x337 = 3LLU;
int32_t t84 = 1;
int16_t x346 = -1;
int16_t x352 = 1;
int8_t x355 = INT8_MIN;
volatile int32_t t88 = -924;
static int32_t x357 = INT32_MIN;
int32_t t89 = -553416657;
volatile uint16_t x361 = 6537U;
uint32_t x365 = 242U;
int16_t x366 = INT16_MIN;
uint64_t x374 = 817087731069278LLU;
int64_t x384 = -2927748820088440810LL;
static volatile int32_t t95 = -6793;
static int32_t x389 = 62154;
static volatile int64_t x391 = -1106065595670880LL;
uint32_t x392 = 492U;
static volatile int64_t x396 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int16_t x2 = INT16_MAX;
	int64_t x3 = -363046208038715780LL;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = 3312;

	t0 = ((x1&x2)<(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 89U;
	int8_t x7 = -28;

	t1 = ((x5&x6)<(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -16123841851LL;
	static uint32_t x12 = 2691U;
	int32_t t2 = 1345;

	t2 = ((x9&x10)<(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	uint64_t x14 = 3815LLU;
	static int16_t x15 = INT16_MIN;
	int32_t t3 = 12;

	t3 = ((x13&x14)<(x15|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 14602U;
	int8_t x18 = 0;
	int64_t x19 = INT64_MAX;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -2477220;

	t4 = ((x17&x18)<(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 0U;
	uint64_t x22 = 29060819067788LLU;
	volatile int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 1702867;

	t5 = ((x21&x22)<(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 61U;
	int64_t x28 = INT64_MAX;
	static int32_t t6 = 2034087;

	t6 = ((x25&x26)<(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 3556416918751LL;
	int8_t x30 = 1;
	int8_t x32 = -1;
	volatile int32_t t7 = 232306535;

	t7 = ((x29&x30)<(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MAX;
	volatile uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 272869739108831LLU;
	int16_t x36 = -1;
	volatile int32_t t8 = 162;

	t8 = ((x33&x34)<(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int32_t x38 = -75767;
	int64_t x39 = -1LL;
	int32_t x40 = 68835;
	int32_t t9 = 5369;

	t9 = ((x37&x38)<(x39|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MAX;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = 42;

	t10 = ((x41&x42)<(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 248393U;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	int32_t t11 = -720142;

	t11 = ((x45&x46)<(x47|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x50 = -94967752;
	int64_t x51 = INT64_MAX;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -2167;

	t12 = ((x49&x50)<(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x55 = INT64_MIN;
	int32_t t13 = -41418;

	t13 = ((x53&x54)<(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 0;
	int8_t x60 = INT8_MIN;
	static int32_t t14 = 5458067;

	t14 = ((x57&x58)<(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static uint32_t x62 = 215570887U;
	uint32_t x63 = 1U;
	int64_t x64 = INT64_MIN;
	int32_t t15 = 12647372;

	t15 = ((x61&x62)<(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 0U;
	uint8_t x66 = 7U;
	uint64_t x67 = 131247LLU;
	uint16_t x68 = UINT16_MAX;
	int32_t t16 = 219378;

	t16 = ((x65&x66)<(x67|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile uint8_t x72 = UINT8_MAX;
	int32_t t17 = -196;

	t17 = ((x69&x70)<(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static int8_t x74 = -1;
	static int16_t x75 = INT16_MAX;
	int32_t t18 = -792;

	t18 = ((x73&x74)<(x75|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 24U;
	static uint16_t x78 = UINT16_MAX;
	uint8_t x79 = 0U;
	int64_t x80 = -28LL;
	int32_t t19 = -14;

	t19 = ((x77&x78)<(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = 2U;
	int32_t t20 = 6;

	t20 = ((x81&x82)<(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	volatile uint32_t x86 = UINT32_MAX;
	static uint64_t x88 = UINT64_MAX;
	int32_t t21 = -36736;

	t21 = ((x85&x86)<(x87|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile uint8_t x90 = 28U;
	int64_t x91 = INT64_MAX;
	static int32_t t22 = -51;

	t22 = ((x89&x90)<(x91|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 2653U;
	uint16_t x94 = UINT16_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -36258;

	t23 = ((x93&x94)<(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	volatile uint64_t x98 = UINT64_MAX;
	uint64_t x99 = 2951884635144LLU;
	volatile int32_t t24 = -84688;

	t24 = ((x97&x98)<(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	volatile int32_t t25 = -33826;

	t25 = ((x101&x102)<(x103|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	volatile int16_t x106 = INT16_MAX;
	int64_t x107 = -1LL;

	t26 = ((x105&x106)<(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 1445413379U;
	static volatile int16_t x110 = 1962;
	static int32_t t27 = 17748;

	t27 = ((x109&x110)<(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -11;
	int32_t x114 = -1;
	volatile uint8_t x115 = 1U;
	volatile int16_t x116 = INT16_MAX;
	static int32_t t28 = -79296961;

	t28 = ((x113&x114)<(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	volatile int8_t x118 = INT8_MIN;
	volatile int64_t x119 = INT64_MIN;
	int8_t x120 = -1;

	t29 = ((x117&x118)<(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 143190U;
	volatile int32_t t30 = -1289;

	t30 = ((x121&x122)<(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = 2U;
	volatile uint32_t x128 = 962166525U;
	int32_t t31 = 1302;

	t31 = ((x125&x126)<(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 13472U;
	int8_t x131 = -1;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 3177;

	t32 = ((x129&x130)<(x131|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 2LL;
	volatile int32_t x134 = -506382;
	uint32_t x135 = 9U;
	static int32_t t33 = 18746;

	t33 = ((x133&x134)<(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 612;
	int32_t x138 = 1;
	int8_t x139 = -1;
	uint32_t x140 = 7549U;
	int32_t t34 = -1;

	t34 = ((x137&x138)<(x139|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile int32_t x142 = -3189;
	uint8_t x143 = UINT8_MAX;
	static int32_t x144 = -2;
	int32_t t35 = -20;

	t35 = ((x141&x142)<(x143|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 2995U;
	uint64_t x146 = UINT64_MAX;
	static int32_t x148 = INT32_MIN;
	int32_t t36 = 9982498;

	t36 = ((x145&x146)<(x147|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	volatile uint8_t x150 = 17U;
	uint16_t x151 = 21U;
	uint16_t x152 = 23208U;

	t37 = ((x149&x150)<(x151|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = UINT8_MAX;
	int32_t x154 = -466;
	volatile int32_t x155 = 727124987;
	uint8_t x156 = 89U;
	int32_t t38 = -32150;

	t38 = ((x153&x154)<(x155|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = 11U;
	volatile int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -39;

	t39 = ((x157&x158)<(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = INT32_MIN;
	static int32_t x163 = -1;
	int64_t x164 = INT64_MAX;
	volatile int32_t t40 = 440386508;

	t40 = ((x161&x162)<(x163|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	uint32_t x166 = UINT32_MAX;
	int64_t x168 = INT64_MIN;
	int32_t t41 = 76344935;

	t41 = ((x165&x166)<(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	static int16_t x170 = INT16_MAX;
	static int32_t x171 = -5510;
	static int64_t x172 = -1LL;
	volatile int32_t t42 = 59823;

	t42 = ((x169&x170)<(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 0;
	int32_t x174 = INT32_MIN;
	int32_t x175 = -1;
	uint8_t x176 = 34U;

	t43 = ((x173&x174)<(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = INT16_MIN;
	volatile int8_t x179 = 5;
	volatile int32_t t44 = 1;

	t44 = ((x177&x178)<(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	uint32_t x182 = 5U;
	uint32_t x183 = 881084381U;
	static uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = -1888;

	t45 = ((x181&x182)<(x183|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 2U;
	volatile int16_t x186 = -1;
	int8_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = 13;

	t46 = ((x185&x186)<(x187|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -287985582797707965LL;
	uint8_t x190 = 13U;
	int64_t x191 = -486954779849234LL;
	int16_t x192 = -1;
	int32_t t47 = 694;

	t47 = ((x189&x190)<(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 6U;
	int16_t x196 = -1;
	static volatile int32_t t48 = 14;

	t48 = ((x193&x194)<(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = -59;
	int64_t x198 = INT64_MAX;
	volatile int16_t x199 = 1;
	volatile int16_t x200 = INT16_MAX;
	volatile int32_t t49 = -1960;

	t49 = ((x197&x198)<(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = -1;
	uint64_t x203 = 9934LLU;
	uint64_t x204 = 899113694260343530LLU;
	int32_t t50 = -72088405;

	t50 = ((x201&x202)<(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = UINT16_MAX;
	static int32_t t51 = -98261;

	t51 = ((x205&x206)<(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -38;
	static uint16_t x210 = 4772U;
	uint16_t x211 = UINT16_MAX;
	static int32_t t52 = 32;

	t52 = ((x209&x210)<(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 19U;
	int32_t t53 = 4;

	t53 = ((x213&x214)<(x215|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x218 = 2LLU;
	static uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -13763354;

	t54 = ((x217&x218)<(x219|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 932564814;
	static int64_t x222 = INT64_MIN;
	int8_t x223 = -4;
	static int32_t x224 = -521;
	volatile int32_t t55 = 17;

	t55 = ((x221&x222)<(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 496LL;
	int8_t x226 = INT8_MIN;

	t56 = ((x225&x226)<(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	uint32_t x230 = 70660608U;
	volatile int64_t x231 = -1LL;
	static int32_t t57 = -3030;

	t57 = ((x229&x230)<(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 225;
	volatile int64_t x234 = -1LL;
	volatile int32_t t58 = 598141164;

	t58 = ((x233&x234)<(x235|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = 1;
	static uint32_t x240 = 706U;
	volatile int32_t t59 = -11094;

	t59 = ((x237&x238)<(x239|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = 20;
	static uint64_t x244 = UINT64_MAX;
	int32_t t60 = -20784;

	t60 = ((x241&x242)<(x243|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	static volatile int8_t x247 = 1;
	int16_t x248 = -1;

	t61 = ((x245&x246)<(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 14675U;
	uint32_t x250 = 258407U;
	volatile uint32_t x252 = 0U;

	t62 = ((x249&x250)<(x251|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x254 = UINT32_MAX;
	static int16_t x255 = 9;
	int64_t x256 = -1LL;
	int32_t t63 = 10939;

	t63 = ((x253&x254)<(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 442;
	int8_t x258 = -1;
	uint64_t x259 = 453LLU;
	static int32_t x260 = 358930;
	int32_t t64 = 349887812;

	t64 = ((x257&x258)<(x259|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -4;
	int64_t x263 = INT64_MIN;
	static volatile int32_t t65 = 17646;

	t65 = ((x261&x262)<(x263|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 1269003LLU;
	int8_t x266 = -1;
	static uint8_t x267 = UINT8_MAX;
	int16_t x268 = -484;
	static volatile int32_t t66 = 688510;

	t66 = ((x265&x266)<(x267|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 0LLU;
	static int16_t x271 = 2450;
	uint32_t x272 = UINT32_MAX;

	t67 = ((x269&x270)<(x271|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int8_t x274 = 3;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -28413;
	int32_t t68 = 91418974;

	t68 = ((x273&x274)<(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -18;
	static int8_t x278 = INT8_MIN;
	volatile uint32_t x279 = 4622U;
	uint8_t x280 = 29U;
	static volatile int32_t t69 = -371306536;

	t69 = ((x277&x278)<(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = -1LL;
	static volatile int32_t t70 = 1372;

	t70 = ((x281&x282)<(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MIN;
	volatile int32_t x286 = INT32_MIN;
	int64_t x288 = INT64_MIN;
	static int32_t t71 = 4182;

	t71 = ((x285&x286)<(x287|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MAX;
	int8_t x292 = INT8_MIN;
	static int32_t t72 = 5123722;

	t72 = ((x289&x290)<(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 120891U;
	volatile int8_t x294 = INT8_MIN;
	uint64_t x295 = UINT64_MAX;
	volatile int32_t t73 = 5;

	t73 = ((x293&x294)<(x295|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x299 = 106U;
	static int32_t x300 = INT32_MIN;
	int32_t t74 = 28085;

	t74 = ((x297&x298)<(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MIN;
	static uint64_t x302 = 13047292376938LLU;
	static int16_t x303 = INT16_MAX;
	int32_t x304 = -1;
	int32_t t75 = -5;

	t75 = ((x301&x302)<(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = 1U;
	static uint32_t x306 = 99U;
	uint32_t x307 = UINT32_MAX;
	uint8_t x308 = 5U;
	int32_t t76 = 62786142;

	t76 = ((x305&x306)<(x307|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MAX;
	int8_t x310 = INT8_MAX;
	int16_t x311 = INT16_MAX;
	uint64_t x312 = UINT64_MAX;

	t77 = ((x309&x310)<(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint32_t x314 = UINT32_MAX;
	static volatile uint32_t x316 = 63U;
	int32_t t78 = 0;

	t78 = ((x313&x314)<(x315|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MAX;
	uint8_t x319 = 58U;
	static int8_t x320 = 27;

	t79 = ((x317&x318)<(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 3;
	volatile int16_t x322 = INT16_MIN;
	uint8_t x323 = 2U;
	int16_t x324 = -1;
	int32_t t80 = -10875;

	t80 = ((x321&x322)<(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	int8_t x327 = 1;
	volatile int16_t x328 = -128;
	volatile int32_t t81 = -60;

	t81 = ((x325&x326)<(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = UINT16_MAX;
	int16_t x330 = 21;
	uint16_t x331 = 609U;
	volatile int32_t t82 = 0;

	t82 = ((x329&x330)<(x331|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 1;
	uint32_t x336 = 11221U;

	t83 = ((x333&x334)<(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x338 = INT32_MIN;
	int64_t x339 = 31510746LL;
	volatile int64_t x340 = -972282190436260781LL;

	t84 = ((x337&x338)<(x339|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = 31952U;
	static volatile uint16_t x343 = 11891U;
	int32_t x344 = -3888697;
	volatile int32_t t85 = 1168972;

	t85 = ((x341&x342)<(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 53U;
	int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 88759;

	t86 = ((x345&x346)<(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -4;
	volatile uint64_t x350 = UINT64_MAX;
	uint32_t x351 = 2669388U;
	int32_t t87 = 1;

	t87 = ((x349&x350)<(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MAX;
	uint16_t x354 = 30U;
	int8_t x356 = INT8_MIN;

	t88 = ((x353&x354)<(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x358 = 3;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = 256;

	t89 = ((x357&x358)<(x359|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = UINT8_MAX;
	uint32_t x363 = UINT32_MAX;
	int32_t x364 = 131301168;
	int32_t t90 = -3730237;

	t90 = ((x361&x362)<(x363|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 100U;
	int32_t t91 = -344;

	t91 = ((x365&x366)<(x367|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 0U;
	static volatile int32_t x370 = -1552;
	static volatile uint32_t x371 = 0U;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t92 = -165138344;

	t92 = ((x369&x370)<(x371|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MAX;
	int64_t x375 = INT64_MAX;
	int32_t x376 = -1;
	int32_t t93 = -4038515;

	t93 = ((x373&x374)<(x375|x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = -59;
	int8_t x378 = INT8_MIN;
	static int8_t x379 = INT8_MIN;
	uint8_t x380 = 25U;
	int32_t t94 = 20;

	t94 = ((x377&x378)<(x379|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	volatile uint16_t x382 = UINT16_MAX;
	volatile uint8_t x383 = 3U;

	t95 = ((x381&x382)<(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = 810886818318LL;
	int8_t x386 = -10;
	uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MAX;
	int32_t t96 = -1375546;

	t96 = ((x385&x386)<(x387|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = INT8_MIN;
	volatile int32_t t97 = -3982;

	t97 = ((x389&x390)<(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	volatile int32_t t98 = -289880;

	t98 = ((x393&x394)<(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	volatile uint32_t x398 = 518U;
	int64_t x399 = -1508443023LL;
	static volatile int32_t x400 = -1;
	volatile int32_t t99 = -318895;

	t99 = ((x397&x398)<(x399|x400));

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

