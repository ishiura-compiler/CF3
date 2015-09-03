#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MIN;
int32_t t1 = -23741;
int32_t x19 = -159176;
int32_t t4 = 128621093;
uint8_t x21 = UINT8_MAX;
int32_t x22 = INT32_MIN;
int64_t x23 = -1LL;
int64_t x25 = INT64_MIN;
static int8_t x30 = -1;
int8_t x41 = INT8_MAX;
volatile uint16_t x44 = UINT16_MAX;
int32_t t10 = 1388838;
uint8_t x46 = UINT8_MAX;
uint8_t x47 = 117U;
static int8_t x49 = 25;
static volatile uint32_t x50 = 916377180U;
uint8_t x61 = 1U;
volatile int64_t x66 = -1LL;
int16_t x67 = 0;
int16_t x68 = INT16_MIN;
uint16_t x69 = 9U;
int32_t t17 = -1113;
int64_t x75 = INT64_MIN;
uint64_t x78 = UINT64_MAX;
static volatile int32_t t20 = -8;
static int64_t x93 = 8758180137239LL;
static volatile int32_t x95 = -1;
uint64_t x106 = UINT64_MAX;
volatile int32_t x111 = INT32_MAX;
static int16_t x112 = INT16_MAX;
uint64_t x115 = UINT64_MAX;
int32_t t28 = -428942804;
int64_t x118 = INT64_MIN;
static volatile int16_t x120 = INT16_MIN;
int8_t x122 = INT8_MIN;
static uint64_t x130 = 589773403363997LLU;
static int64_t x132 = INT64_MIN;
volatile uint8_t x162 = UINT8_MAX;
int32_t x164 = -1;
static volatile int32_t x167 = -1;
static volatile int32_t x171 = 12;
static int8_t x176 = INT8_MIN;
int16_t x184 = INT16_MAX;
volatile int32_t t45 = -2930516;
int8_t x186 = -62;
int32_t x187 = INT32_MIN;
static int8_t x189 = 3;
volatile int32_t t47 = -1335;
int16_t x194 = -11950;
uint16_t x204 = 3077U;
int8_t x205 = INT8_MIN;
uint8_t x208 = 25U;
int64_t x209 = 2280LL;
int32_t t52 = -4795415;
volatile int16_t x215 = 1;
static int64_t x222 = INT64_MAX;
uint64_t x227 = 4531789032866835762LLU;
int8_t x237 = 6;
int64_t x240 = INT64_MAX;
int32_t t60 = 448650;
volatile int8_t x245 = -1;
uint64_t x248 = 4442309LLU;
int8_t x250 = -1;
uint64_t x251 = UINT64_MAX;
int8_t x264 = INT8_MAX;
int16_t x269 = -1;
uint32_t x270 = UINT32_MAX;
int64_t x271 = INT64_MIN;
int32_t t70 = 2074;
int32_t x286 = INT32_MAX;
int32_t x294 = -1;
int32_t t73 = 19;
int32_t t74 = -1;
uint16_t x312 = UINT16_MAX;
uint16_t x313 = 38U;
static int16_t x320 = INT16_MIN;
static int32_t x321 = INT32_MIN;
volatile int16_t x323 = INT16_MAX;
int32_t t82 = 20;
volatile int32_t t83 = -33714173;
volatile int32_t t85 = 26824001;
uint64_t x346 = UINT64_MAX;
int32_t x350 = 49601242;
uint64_t x351 = 757LLU;
volatile int32_t t88 = 14298;
volatile uint64_t x358 = 273968783509025LLU;
int16_t x359 = -1;
static int64_t x363 = 101622LL;
static int8_t x366 = -5;
int32_t x367 = -1;
volatile int8_t x371 = -1;
static volatile int8_t x376 = INT8_MAX;
volatile int32_t t93 = -1;
int8_t x378 = INT8_MAX;
uint16_t x379 = UINT16_MAX;
volatile int16_t x383 = 18;
int16_t x384 = INT16_MAX;
uint64_t x387 = 2045576992597LLU;
volatile int16_t x391 = 15;
static int64_t x396 = INT64_MIN;
int32_t t99 = -7;


void f0(void) {
	static volatile int64_t x1 = INT64_MAX;
	int8_t x2 = INT8_MAX;
	static uint32_t x3 = UINT32_MAX;
	int16_t x4 = -1;
	int32_t t0 = 0;

	t0 = ((x1&x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int16_t x7 = 2;
	static volatile int8_t x8 = -1;

	t1 = ((x5&x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 0U;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = -2486805;

	t2 = ((x9&x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	int16_t x14 = -388;
	int64_t x15 = -1LL;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -914598;

	t3 = ((x13&x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	volatile uint64_t x20 = 56094522165427LLU;

	t4 = ((x17&x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -132239303;

	t5 = ((x21&x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 1283U;
	volatile uint16_t x27 = 463U;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 0;

	t6 = ((x25&x26)==(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile uint16_t x31 = UINT16_MAX;
	uint32_t x32 = 250U;
	int32_t t7 = -2086;

	t7 = ((x29&x30)==(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = 23;
	int16_t x35 = -86;
	static uint32_t x36 = 1443U;
	volatile int32_t t8 = 13311;

	t8 = ((x33&x34)==(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = 368193727;
	int16_t x39 = INT16_MIN;
	static uint32_t x40 = 5801U;
	static int32_t t9 = 116296;

	t9 = ((x37&x38)==(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = 1155;
	int8_t x43 = -1;

	t10 = ((x41&x42)==(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -2512;
	volatile uint16_t x48 = 1U;
	static int32_t t11 = 8417;

	t11 = ((x45&x46)==(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x51 = 934U;
	int64_t x52 = INT64_MAX;
	static volatile int32_t t12 = 132;

	t12 = ((x49&x50)==(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 4U;
	uint16_t x54 = 2033U;
	int32_t x55 = INT32_MAX;
	int8_t x56 = -1;
	int32_t t13 = 307223;

	t13 = ((x53&x54)==(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 1;
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MIN;
	volatile int64_t x60 = INT64_MIN;
	int32_t t14 = 1433;

	t14 = ((x57&x58)==(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = INT8_MIN;
	int64_t x63 = -73018LL;
	int16_t x64 = -1;
	int32_t t15 = 142;

	t15 = ((x61&x62)==(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = 2712;
	volatile int32_t t16 = 241285;

	t16 = ((x65&x66)==(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 167907798LL;
	static volatile int64_t x71 = INT64_MIN;
	static int64_t x72 = INT64_MIN;

	t17 = ((x69&x70)==(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MAX;
	int8_t x74 = -1;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 32774951;

	t18 = ((x73&x74)==(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	uint16_t x79 = UINT16_MAX;
	static uint64_t x80 = 49LLU;
	static int32_t t19 = 165255522;

	t19 = ((x77&x78)==(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	static uint16_t x82 = 1U;
	int32_t x83 = -1;
	static int8_t x84 = 17;

	t20 = ((x81&x82)==(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	volatile uint16_t x87 = 180U;
	int64_t x88 = -1LL;
	volatile int32_t t21 = -144150;

	t21 = ((x85&x86)==(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -6;
	static int32_t x90 = INT32_MAX;
	int16_t x91 = -1;
	uint16_t x92 = 0U;
	int32_t t22 = 1;

	t22 = ((x89&x90)==(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x94 = 779U;
	static int32_t x96 = 182882;
	int32_t t23 = 3307;

	t23 = ((x93&x94)==(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = 525498;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MAX;
	int8_t x100 = -1;
	volatile int32_t t24 = 95777;

	t24 = ((x97&x98)==(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	uint64_t x102 = UINT64_MAX;
	static uint16_t x103 = 512U;
	uint32_t x104 = 8047580U;
	int32_t t25 = 1;

	t25 = ((x101&x102)==(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 567448366546481809LL;
	volatile uint8_t x107 = 3U;
	static uint16_t x108 = 350U;
	int32_t t26 = -2829;

	t26 = ((x105&x106)==(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 0U;
	int32_t x110 = -1544;
	volatile int32_t t27 = -109;

	t27 = ((x109&x110)==(x111|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 50U;
	static int64_t x114 = INT64_MAX;
	volatile uint64_t x116 = UINT64_MAX;

	t28 = ((x113&x114)==(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x117 = 218119312LL;
	volatile uint8_t x119 = 104U;
	volatile int32_t t29 = -1634;

	t29 = ((x117&x118)==(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile uint32_t x123 = UINT32_MAX;
	int8_t x124 = 0;
	volatile int32_t t30 = 1935182;

	t30 = ((x121&x122)==(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MIN;
	volatile int8_t x127 = INT8_MAX;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = 131737077;

	t31 = ((x125&x126)==(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	static int32_t x131 = INT32_MAX;
	int32_t t32 = 117924;

	t32 = ((x129&x130)==(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -94;
	int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MAX;
	int32_t t33 = -1;

	t33 = ((x133&x134)==(x135|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -3317;
	volatile int16_t x138 = INT16_MAX;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;
	int32_t t34 = -2737;

	t34 = ((x137&x138)==(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 70537LLU;
	int16_t x142 = 7;
	uint32_t x143 = 26359U;
	volatile int64_t x144 = INT64_MIN;
	int32_t t35 = 4660663;

	t35 = ((x141&x142)==(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 4U;
	int16_t x146 = -16;
	static int64_t x147 = -16083817730LL;
	int32_t x148 = -2021560;
	volatile int32_t t36 = -7682;

	t36 = ((x145&x146)==(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 145100LL;
	uint64_t x150 = 448167834LLU;
	static uint64_t x151 = 32155357211153LLU;
	static volatile uint32_t x152 = 3U;
	volatile int32_t t37 = 5;

	t37 = ((x149&x150)==(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 361993LL;
	volatile int64_t x154 = 3716921725003LL;
	int64_t x155 = -1LL;
	int32_t x156 = -207237644;
	volatile int32_t t38 = -12;

	t38 = ((x153&x154)==(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MIN;
	int32_t x158 = -15697;
	volatile int32_t x159 = INT32_MAX;
	static int64_t x160 = -1LL;
	volatile int32_t t39 = -39;

	t39 = ((x157&x158)==(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int32_t x163 = -1;
	int32_t t40 = -41;

	t40 = ((x161&x162)==(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 38;
	int16_t x166 = INT16_MIN;
	int32_t x168 = 2707;
	int32_t t41 = 13411;

	t41 = ((x165&x166)==(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 4172305582404203LLU;
	uint64_t x170 = 741845125465LLU;
	volatile int64_t x172 = -1LL;
	int32_t t42 = 158842838;

	t42 = ((x169&x170)==(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static volatile int64_t x174 = INT64_MIN;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t t43 = 1768;

	t43 = ((x173&x174)==(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 1;
	volatile int8_t x178 = INT8_MAX;
	volatile int32_t x179 = 53;
	int16_t x180 = -1;
	int32_t t44 = 573568634;

	t44 = ((x177&x178)==(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = 1;
	uint16_t x183 = UINT16_MAX;

	t45 = ((x181&x182)==(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile uint16_t x188 = 123U;
	static volatile int32_t t46 = 3702137;

	t46 = ((x185&x186)==(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x190 = 40;
	int16_t x191 = INT16_MAX;
	volatile int32_t x192 = 3500;

	t47 = ((x189&x190)==(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 1U;
	static volatile int64_t x195 = -1LL;
	static volatile uint8_t x196 = 0U;
	int32_t t48 = 239828656;

	t48 = ((x193&x194)==(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 7U;
	int32_t x198 = INT32_MIN;
	volatile int16_t x199 = -1;
	static volatile int64_t x200 = 2737847LL;
	int32_t t49 = 24122739;

	t49 = ((x197&x198)==(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 3U;
	static int32_t x202 = 1037;
	int64_t x203 = INT64_MIN;
	int32_t t50 = 35790124;

	t50 = ((x201&x202)==(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x206 = 3U;
	int64_t x207 = INT64_MAX;
	int32_t t51 = -33905;

	t51 = ((x205&x206)==(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x210 = INT64_MAX;
	uint64_t x211 = UINT64_MAX;
	uint8_t x212 = 60U;

	t52 = ((x209&x210)==(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -10;
	int8_t x214 = -1;
	uint32_t x216 = 418U;
	volatile int32_t t53 = 36;

	t53 = ((x213&x214)==(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static volatile int8_t x218 = -1;
	uint16_t x219 = UINT16_MAX;
	int64_t x220 = INT64_MIN;
	int32_t t54 = 146620;

	t54 = ((x217&x218)==(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 190U;
	int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t55 = 138;

	t55 = ((x221&x222)==(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MAX;
	int16_t x228 = 10;
	int32_t t56 = 1;

	t56 = ((x225&x226)==(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 3LLU;
	static volatile int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	static uint64_t x232 = 515350714432031LLU;
	static int32_t t57 = -178;

	t57 = ((x229&x230)==(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -21869LL;
	volatile int32_t x234 = -45;
	int8_t x235 = -1;
	uint32_t x236 = 14585U;
	volatile int32_t t58 = -738379873;

	t58 = ((x233&x234)==(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	int64_t x239 = INT64_MAX;
	volatile int32_t t59 = 795424;

	t59 = ((x237&x238)==(x239|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MIN;
	volatile int16_t x244 = INT16_MAX;

	t60 = ((x241&x242)==(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -1;
	static uint16_t x247 = UINT16_MAX;
	int32_t t61 = -36153973;

	t61 = ((x245&x246)==(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 32U;
	uint32_t x252 = 111750485U;
	int32_t t62 = 1326;

	t62 = ((x249&x250)==(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	int16_t x254 = INT16_MAX;
	static uint8_t x255 = UINT8_MAX;
	int16_t x256 = -1;
	volatile int32_t t63 = 5382;

	t63 = ((x253&x254)==(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = -2;
	int64_t x258 = 1459610772731LL;
	uint16_t x259 = 28U;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 23103;

	t64 = ((x257&x258)==(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int8_t x262 = 0;
	int32_t x263 = INT32_MAX;
	volatile int32_t t65 = -649843110;

	t65 = ((x261&x262)==(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MAX;
	volatile int8_t x267 = -13;
	static int64_t x268 = 39811LL;
	int32_t t66 = -262700;

	t66 = ((x265&x266)==(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x272 = 1;
	static int32_t t67 = 3;

	t67 = ((x269&x270)==(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	static int8_t x274 = INT8_MIN;
	volatile uint32_t x275 = UINT32_MAX;
	int16_t x276 = 506;
	int32_t t68 = -3;

	t68 = ((x273&x274)==(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	volatile uint32_t x280 = 862567U;
	int32_t t69 = -140281815;

	t69 = ((x277&x278)==(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x281 = 2U;
	static int64_t x282 = 1009674815LL;
	uint32_t x283 = 406621204U;
	int8_t x284 = INT8_MIN;

	t70 = ((x281&x282)==(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -1LL;
	static int8_t x287 = INT8_MIN;
	volatile int32_t x288 = INT32_MAX;
	static volatile int32_t t71 = 1;

	t71 = ((x285&x286)==(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 30237771;
	volatile int8_t x290 = -1;
	volatile int64_t x291 = -1LL;
	uint16_t x292 = 6U;
	int32_t t72 = 477;

	t72 = ((x289&x290)==(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 5U;
	uint32_t x295 = 2U;
	int64_t x296 = INT64_MIN;

	t73 = ((x293&x294)==(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x298 = -1;
	volatile uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = INT8_MIN;

	t74 = ((x297&x298)==(x299|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 139031839;
	int16_t x302 = -55;
	int16_t x303 = -1;
	volatile uint32_t x304 = 73621259U;
	volatile int32_t t75 = 1209406;

	t75 = ((x301&x302)==(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 24820703;
	uint16_t x306 = 159U;
	int32_t x307 = 74396;
	int32_t x308 = INT32_MAX;
	volatile int32_t t76 = 4869078;

	t76 = ((x305&x306)==(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 6460U;
	uint16_t x310 = UINT16_MAX;
	static volatile int32_t x311 = INT32_MIN;
	volatile int32_t t77 = 74;

	t77 = ((x309&x310)==(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MAX;
	int32_t t78 = 5920194;

	t78 = ((x313&x314)==(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	volatile int8_t x318 = INT8_MIN;
	volatile uint16_t x319 = 176U;
	int32_t t79 = -48100436;

	t79 = ((x317&x318)==(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = 1834484U;
	static int64_t x324 = INT64_MIN;
	static volatile int32_t t80 = 471;

	t80 = ((x321&x322)==(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 9U;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	int64_t x328 = -142204009938608074LL;
	volatile int32_t t81 = 17628046;

	t81 = ((x325&x326)==(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 1371859337695LLU;
	static uint32_t x330 = 1U;
	uint64_t x331 = 627876LLU;
	uint64_t x332 = 4006703LLU;

	t82 = ((x329&x330)==(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 625LLU;
	volatile int8_t x334 = INT8_MIN;
	int64_t x335 = INT64_MAX;
	uint8_t x336 = 23U;

	t83 = ((x333&x334)==(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 0U;
	volatile uint8_t x338 = 95U;
	int32_t x339 = INT32_MAX;
	int8_t x340 = -2;
	volatile int32_t t84 = 53;

	t84 = ((x337&x338)==(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = -4696;
	int8_t x343 = 0;
	int16_t x344 = INT16_MIN;

	t85 = ((x341&x342)==(x343|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 675295992U;
	volatile uint64_t x347 = UINT64_MAX;
	uint16_t x348 = 5U;
	volatile int32_t t86 = 1;

	t86 = ((x345&x346)==(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 7U;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 2591;

	t87 = ((x349&x350)==(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 16;
	uint64_t x354 = 1072167787482497908LLU;
	int16_t x355 = -178;
	int16_t x356 = INT16_MIN;

	t88 = ((x353&x354)==(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 4120704;
	volatile int64_t x360 = INT64_MAX;
	volatile int32_t t89 = 10360031;

	t89 = ((x357&x358)==(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	uint8_t x362 = 21U;
	int16_t x364 = INT16_MIN;
	int32_t t90 = 52775;

	t90 = ((x361&x362)==(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = UINT16_MAX;
	uint8_t x368 = 0U;
	volatile int32_t t91 = -856;

	t91 = ((x365&x366)==(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	uint32_t x372 = 969U;
	static int32_t t92 = -24;

	t92 = ((x369&x370)==(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 11140620;
	static int64_t x374 = -1LL;
	int8_t x375 = -1;

	t93 = ((x373&x374)==(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -7680431;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 28947396;

	t94 = ((x377&x378)==(x379|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 411U;
	uint16_t x382 = 842U;
	int32_t t95 = 7597933;

	t95 = ((x381&x382)==(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = -1;
	static int32_t x388 = 0;
	int32_t t96 = 180;

	t96 = ((x385&x386)==(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	volatile uint8_t x390 = 5U;
	volatile int8_t x392 = 0;
	volatile int32_t t97 = 319;

	t97 = ((x389&x390)==(x391|x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = -1;
	uint16_t x394 = 465U;
	volatile int16_t x395 = 1;
	int32_t t98 = 7378;

	t98 = ((x393&x394)==(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	volatile uint64_t x398 = 396LLU;
	int64_t x399 = INT64_MIN;
	volatile int8_t x400 = INT8_MAX;

	t99 = ((x397&x398)==(x399|x400));

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

