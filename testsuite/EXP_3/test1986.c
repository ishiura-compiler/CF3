#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -4061;
static int32_t t1 = -82836178;
int32_t x16 = 2;
volatile int32_t t3 = 0;
volatile int32_t t4 = -4;
int8_t x21 = -1;
int32_t x22 = INT32_MIN;
uint64_t x30 = 987617LLU;
int16_t x32 = INT16_MIN;
uint64_t x36 = UINT64_MAX;
volatile int32_t x47 = 4655;
int32_t x49 = -208;
int8_t x52 = 0;
volatile uint32_t x54 = 406151U;
int32_t x55 = INT32_MAX;
static int8_t x56 = -1;
static volatile uint16_t x60 = UINT16_MAX;
int32_t x61 = -1;
volatile int8_t x69 = 59;
uint8_t x76 = 0U;
volatile uint16_t x83 = 13529U;
int8_t x85 = -4;
uint8_t x91 = UINT8_MAX;
static int32_t x102 = INT32_MAX;
volatile int8_t x103 = 0;
static int64_t x105 = -1LL;
int16_t x107 = INT16_MIN;
uint32_t x111 = UINT32_MAX;
static volatile int16_t x115 = INT16_MIN;
volatile int32_t t29 = -1;
int16_t x124 = INT16_MIN;
static int16_t x141 = INT16_MIN;
static int32_t t35 = -165;
int64_t x146 = INT64_MIN;
int32_t x154 = INT32_MIN;
int8_t x158 = INT8_MIN;
int32_t x159 = -114;
int64_t x161 = -1LL;
int64_t x164 = INT64_MIN;
volatile int32_t t40 = -12231;
int16_t x165 = 0;
int32_t t41 = -132;
static volatile int32_t t42 = -80;
int8_t x174 = INT8_MIN;
volatile int32_t t43 = -1733;
int32_t t45 = 848882;
uint64_t x187 = 15000757835426LLU;
int32_t t46 = 27045;
uint16_t x189 = 1135U;
int8_t x190 = 1;
int16_t x191 = INT16_MIN;
volatile int32_t t48 = -15;
static int8_t x200 = INT8_MAX;
static uint64_t x202 = 7331258LLU;
volatile int64_t x207 = INT64_MAX;
int32_t t51 = -105;
int32_t t52 = 188;
volatile int16_t x215 = INT16_MIN;
volatile int32_t t53 = 2938663;
int32_t x223 = INT32_MIN;
int32_t x226 = INT32_MIN;
volatile int8_t x232 = INT8_MIN;
static volatile int32_t t57 = 1794;
int8_t x233 = INT8_MAX;
volatile int32_t t58 = 38799248;
int32_t x244 = -1;
uint16_t x247 = UINT16_MAX;
uint64_t x249 = UINT64_MAX;
int16_t x250 = INT16_MIN;
uint16_t x251 = 1676U;
volatile int32_t t64 = -1;
int32_t x266 = INT32_MIN;
static int32_t t66 = 121351;
uint32_t x275 = UINT32_MAX;
static volatile int32_t t68 = 15;
volatile int32_t t69 = -11479;
static uint32_t x297 = 5286085U;
static int32_t t76 = 466935;
uint16_t x313 = 24734U;
uint16_t x318 = 4U;
int64_t x320 = 42229154LL;
int64_t x321 = -3508LL;
static int32_t x326 = INT32_MAX;
static int32_t x327 = INT32_MAX;
int32_t t81 = -8799942;
uint64_t x341 = UINT64_MAX;
uint16_t x345 = 170U;
volatile int64_t x348 = INT64_MIN;
int64_t x351 = INT64_MIN;
volatile int64_t x352 = INT64_MAX;
uint64_t x359 = 87351292345204LLU;
static int8_t x368 = INT8_MIN;
volatile int32_t x377 = -1;
volatile uint64_t x379 = UINT64_MAX;
volatile int32_t t94 = 325303493;
uint32_t x384 = 502U;
int32_t t95 = -64999;
static int32_t x388 = INT32_MIN;
int16_t x389 = INT16_MIN;
volatile int32_t x395 = 25;
int32_t x399 = INT32_MAX;
int32_t x400 = INT32_MIN;
int32_t t99 = -210580304;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 32293LLU;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -13783178;

	t0 = ((x1<=x2)<=(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MAX;

	t1 = ((x5<=x6)<=(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 672LLU;
	int64_t x10 = INT64_MIN;
	volatile uint16_t x11 = UINT16_MAX;
	int8_t x12 = INT8_MAX;
	static int32_t t2 = 1355;

	t2 = ((x9<=x10)<=(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MAX;
	int16_t x15 = 803;

	t3 = ((x13<=x14)<=(x15|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int32_t x18 = INT32_MIN;
	volatile int64_t x19 = -494LL;
	uint64_t x20 = 2929830769747LLU;

	t4 = ((x17<=x18)<=(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x23 = 23457867LLU;
	volatile int8_t x24 = -8;
	volatile int32_t t5 = -5624;

	t5 = ((x21<=x22)<=(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = 27697139LL;
	int16_t x26 = -1;
	int32_t x27 = 136930;
	int16_t x28 = -8;
	volatile int32_t t6 = -16262585;

	t6 = ((x25<=x26)<=(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	static uint16_t x31 = UINT16_MAX;
	int32_t t7 = 1193368;

	t7 = ((x29<=x30)<=(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = INT64_MIN;
	int16_t x34 = -5;
	int32_t x35 = -1;
	volatile int32_t t8 = 297;

	t8 = ((x33<=x34)<=(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 82U;
	volatile int8_t x38 = -2;
	int32_t x39 = -758385;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 291;

	t9 = ((x37<=x38)<=(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 126945075;
	volatile uint8_t x42 = UINT8_MAX;
	int32_t x43 = -944;
	static int32_t x44 = -9525948;
	int32_t t10 = -1;

	t10 = ((x41<=x42)<=(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 123U;
	volatile uint32_t x46 = UINT32_MAX;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 51313279;

	t11 = ((x45<=x46)<=(x47|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x50 = INT32_MIN;
	uint32_t x51 = 111U;
	volatile int32_t t12 = 17033912;

	t12 = ((x49<=x50)<=(x51|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	static int32_t t13 = 6794961;

	t13 = ((x53<=x54)<=(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MAX;
	volatile int32_t x59 = 7;
	static int32_t t14 = 1449;

	t14 = ((x57<=x58)<=(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = 1747;
	int64_t x63 = -1LL;
	static int32_t x64 = -1;
	int32_t t15 = 2;

	t15 = ((x61<=x62)<=(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MAX;
	static int64_t x66 = INT64_MIN;
	int32_t x67 = -1;
	static int16_t x68 = -1;
	static volatile int32_t t16 = -13051;

	t16 = ((x65<=x66)<=(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	static uint32_t x71 = 140U;
	int16_t x72 = INT16_MAX;
	static int32_t t17 = 3006564;

	t17 = ((x69<=x70)<=(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = 461U;
	int32_t x74 = INT32_MAX;
	static volatile int32_t x75 = INT32_MIN;
	int32_t t18 = -3151727;

	t18 = ((x73<=x74)<=(x75|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 126U;
	uint16_t x78 = 22534U;
	volatile int64_t x79 = INT64_MAX;
	volatile int8_t x80 = -1;
	volatile int32_t t19 = -118;

	t19 = ((x77<=x78)<=(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = 14;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 236;

	t20 = ((x81<=x82)<=(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	uint16_t x87 = UINT16_MAX;
	static int32_t x88 = INT32_MIN;
	static int32_t t21 = -765825;

	t21 = ((x85<=x86)<=(x87|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 3155U;
	uint32_t x90 = 1347409847U;
	static volatile int32_t x92 = -1;
	static int32_t t22 = -135408860;

	t22 = ((x89<=x90)<=(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 417U;
	uint16_t x94 = 930U;
	int8_t x95 = INT8_MIN;
	volatile int32_t x96 = -1;
	volatile int32_t t23 = -20415602;

	t23 = ((x93<=x94)<=(x95|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x97 = INT32_MAX;
	volatile uint8_t x98 = 81U;
	int32_t x99 = -1;
	int32_t x100 = INT32_MAX;
	static int32_t t24 = 1;

	t24 = ((x97<=x98)<=(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -6762442;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -395564;

	t25 = ((x101<=x102)<=(x103|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	int8_t x108 = 15;
	volatile int32_t t26 = -3;

	t26 = ((x105<=x106)<=(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x109 = 6LLU;
	volatile int8_t x110 = -1;
	uint32_t x112 = UINT32_MAX;
	int32_t t27 = -34808877;

	t27 = ((x109<=x110)<=(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = UINT8_MAX;
	int16_t x116 = -20;
	volatile int32_t t28 = 12997;

	t28 = ((x113<=x114)<=(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x117 = INT64_MAX;
	int64_t x118 = INT64_MIN;
	static volatile int64_t x119 = 3074077LL;
	uint64_t x120 = 9028101224703508362LLU;

	t29 = ((x117<=x118)<=(x119|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	uint64_t x122 = UINT64_MAX;
	static uint16_t x123 = UINT16_MAX;
	volatile int32_t t30 = 10944;

	t30 = ((x121<=x122)<=(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x125 = INT16_MIN;
	static volatile uint32_t x126 = UINT32_MAX;
	static uint8_t x127 = UINT8_MAX;
	static volatile int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -77;

	t31 = ((x125<=x126)<=(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	int32_t x131 = -1;
	volatile uint16_t x132 = 3688U;
	int32_t t32 = -2387453;

	t32 = ((x129<=x130)<=(x131|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x133 = INT64_MIN;
	uint8_t x134 = UINT8_MAX;
	volatile uint16_t x135 = UINT16_MAX;
	static uint32_t x136 = 120718U;
	int32_t t33 = 402239859;

	t33 = ((x133<=x134)<=(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	int64_t x139 = -1LL;
	int32_t x140 = -712;
	volatile int32_t t34 = 3;

	t34 = ((x137<=x138)<=(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 6381U;
	volatile int16_t x143 = -346;
	static int16_t x144 = INT16_MIN;

	t35 = ((x141<=x142)<=(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MAX;
	static int32_t x147 = -55972;
	uint16_t x148 = 2U;
	int32_t t36 = -1256;

	t36 = ((x145<=x146)<=(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int16_t x150 = -12460;
	volatile int64_t x151 = INT64_MIN;
	int32_t x152 = 1;
	static int32_t t37 = 0;

	t37 = ((x149<=x150)<=(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t38 = -32987;

	t38 = ((x153<=x154)<=(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x160 = 376U;
	int32_t t39 = -1940;

	t39 = ((x157<=x158)<=(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x162 = -1;
	int16_t x163 = INT16_MIN;

	t40 = ((x161<=x162)<=(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = INT64_MIN;
	static int8_t x167 = 24;
	int64_t x168 = -1LL;

	t41 = ((x165<=x166)<=(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 1;
	int32_t x170 = INT32_MIN;
	volatile uint16_t x171 = 125U;
	volatile uint16_t x172 = UINT16_MAX;

	t42 = ((x169<=x170)<=(x171|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	int16_t x175 = 18;
	int8_t x176 = 1;

	t43 = ((x173<=x174)<=(x175|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = INT32_MIN;
	volatile int16_t x178 = INT16_MAX;
	uint32_t x179 = 67U;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 506607;

	t44 = ((x177<=x178)<=(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = -734;
	static volatile int32_t x183 = INT32_MAX;
	uint32_t x184 = 16908U;

	t45 = ((x181<=x182)<=(x183|x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	volatile int64_t x188 = INT64_MAX;

	t46 = ((x185<=x186)<=(x187|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x192 = 1;
	int32_t t47 = -155362123;

	t47 = ((x189<=x190)<=(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 21U;
	int16_t x195 = INT16_MIN;
	int32_t x196 = 2904;

	t48 = ((x193<=x194)<=(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 708LLU;
	volatile uint64_t x198 = 9108730420306595263LLU;
	int64_t x199 = INT64_MIN;
	volatile int32_t t49 = 3776;

	t49 = ((x197<=x198)<=(x199|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile uint16_t x203 = 4U;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t50 = -72112;

	t50 = ((x201<=x202)<=(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	static int16_t x206 = INT16_MAX;
	int8_t x208 = INT8_MIN;

	t51 = ((x205<=x206)<=(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -1;
	int32_t x210 = INT32_MAX;
	int8_t x211 = 15;
	static volatile int32_t x212 = -1;

	t52 = ((x209<=x210)<=(x211|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint64_t x214 = UINT64_MAX;
	uint32_t x216 = 0U;

	t53 = ((x213<=x214)<=(x215|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	volatile int64_t x218 = INT64_MIN;
	uint16_t x219 = UINT16_MAX;
	int64_t x220 = -84LL;
	volatile int32_t t54 = 14173137;

	t54 = ((x217<=x218)<=(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -417;
	int32_t x222 = INT32_MIN;
	int64_t x224 = -1LL;
	static int32_t t55 = -4929;

	t55 = ((x221<=x222)<=(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int16_t x227 = -1;
	int64_t x228 = 105713933534172602LL;
	volatile int32_t t56 = -199;

	t56 = ((x225<=x226)<=(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 67;
	int8_t x230 = -1;
	int32_t x231 = -11;

	t57 = ((x229<=x230)<=(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = 2858118;
	int16_t x235 = -1;
	uint64_t x236 = 397572LLU;

	t58 = ((x233<=x234)<=(x235|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -225;
	int8_t x238 = -1;
	int32_t x239 = INT32_MAX;
	volatile int16_t x240 = INT16_MAX;
	int32_t t59 = 46615957;

	t59 = ((x237<=x238)<=(x239|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	uint32_t x242 = 657U;
	volatile uint8_t x243 = 1U;
	volatile int32_t t60 = 319500429;

	t60 = ((x241<=x242)<=(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 26;
	uint64_t x246 = 7267297873652LLU;
	uint32_t x248 = 129146U;
	static int32_t t61 = 74;

	t61 = ((x245<=x246)<=(x247|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x252 = 1;
	int32_t t62 = 0;

	t62 = ((x249<=x250)<=(x251|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x253 = INT64_MAX;
	static int16_t x254 = -1;
	int32_t x255 = INT32_MAX;
	static int16_t x256 = -1;
	volatile int32_t t63 = -4220;

	t63 = ((x253<=x254)<=(x255|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -262782791816367677LL;
	int8_t x258 = 46;
	uint64_t x259 = UINT64_MAX;
	uint16_t x260 = UINT16_MAX;

	t64 = ((x257<=x258)<=(x259|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 0;
	int32_t x262 = -1;
	uint16_t x263 = 23651U;
	static int64_t x264 = INT64_MIN;
	volatile int32_t t65 = -100480;

	t65 = ((x261<=x262)<=(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	int64_t x267 = 1047948LL;
	int32_t x268 = INT32_MIN;

	t66 = ((x265<=x266)<=(x267|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	volatile uint16_t x270 = 17U;
	int8_t x271 = INT8_MIN;
	static uint64_t x272 = 1147655875760LLU;
	static int32_t t67 = -96113;

	t67 = ((x269<=x270)<=(x271|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = -11971LL;
	uint64_t x274 = 3871LLU;
	int8_t x276 = 0;

	t68 = ((x273<=x274)<=(x275|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -1;
	static int8_t x278 = INT8_MIN;
	uint16_t x279 = 2085U;
	static uint64_t x280 = UINT64_MAX;

	t69 = ((x277<=x278)<=(x279|x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 3U;
	static uint32_t x282 = 2U;
	uint16_t x283 = 0U;
	static int8_t x284 = -1;
	volatile int32_t t70 = 65414062;

	t70 = ((x281<=x282)<=(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	volatile int16_t x288 = 6;
	int32_t t71 = -722737;

	t71 = ((x285<=x286)<=(x287|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 45U;
	int16_t x290 = 350;
	int32_t x291 = INT32_MAX;
	static int16_t x292 = INT16_MAX;
	int32_t t72 = -2539;

	t72 = ((x289<=x290)<=(x291|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = 1U;
	uint8_t x294 = 1U;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 1LLU;
	int32_t t73 = -32095;

	t73 = ((x293<=x294)<=(x295|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = 0U;
	int64_t x299 = -1LL;
	static uint32_t x300 = 1820394932U;
	volatile int32_t t74 = 7983;

	t74 = ((x297<=x298)<=(x299|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 36U;
	volatile int8_t x302 = -1;
	volatile int16_t x303 = 4;
	int64_t x304 = INT64_MAX;
	int32_t t75 = 169782602;

	t75 = ((x301<=x302)<=(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = INT32_MIN;
	static volatile int8_t x307 = -9;
	int16_t x308 = -2304;

	t76 = ((x305<=x306)<=(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = -49;
	static int64_t x311 = -1LL;
	volatile int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 3446635;

	t77 = ((x309<=x310)<=(x311|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x314 = INT8_MIN;
	int64_t x315 = -1LL;
	int64_t x316 = INT64_MAX;
	static int32_t t78 = 322;

	t78 = ((x313<=x314)<=(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	volatile int32_t x319 = INT32_MAX;
	static volatile int32_t t79 = 1994;

	t79 = ((x317<=x318)<=(x319|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x322 = INT8_MIN;
	volatile int64_t x323 = 3386LL;
	int8_t x324 = -1;
	int32_t t80 = 1;

	t80 = ((x321<=x322)<=(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int8_t x328 = 2;

	t81 = ((x325<=x326)<=(x327|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	static int16_t x330 = INT16_MIN;
	volatile int64_t x331 = 180LL;
	int8_t x332 = -6;
	int32_t t82 = -869616611;

	t82 = ((x329<=x330)<=(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 29U;
	int64_t x334 = 465261683660LL;
	int64_t x335 = -870310LL;
	uint16_t x336 = 217U;
	int32_t t83 = -2;

	t83 = ((x333<=x334)<=(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	int16_t x338 = -1;
	int64_t x339 = INT64_MIN;
	volatile uint16_t x340 = 0U;
	int32_t t84 = -1;

	t84 = ((x337<=x338)<=(x339|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = 240;
	int32_t x343 = -1;
	int32_t x344 = 159740783;
	int32_t t85 = 1661245;

	t85 = ((x341<=x342)<=(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x346 = 11;
	static uint16_t x347 = UINT16_MAX;
	int32_t t86 = 71;

	t86 = ((x345<=x346)<=(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MAX;
	static int8_t x350 = -1;
	int32_t t87 = -7644113;

	t87 = ((x349<=x350)<=(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = -88;
	static volatile int32_t x355 = -4361;
	volatile int64_t x356 = INT64_MAX;
	volatile int32_t t88 = -1;

	t88 = ((x353<=x354)<=(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MAX;
	uint8_t x358 = UINT8_MAX;
	int8_t x360 = -1;
	volatile int32_t t89 = -3398557;

	t89 = ((x357<=x358)<=(x359|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	uint8_t x362 = 3U;
	uint64_t x363 = 0LLU;
	volatile int32_t x364 = 4010;
	volatile int32_t t90 = -610044692;

	t90 = ((x361<=x362)<=(x363|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	static int32_t x366 = -1;
	static volatile int64_t x367 = INT64_MAX;
	static int32_t t91 = -13385;

	t91 = ((x365<=x366)<=(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	static uint16_t x370 = 47U;
	volatile uint32_t x371 = UINT32_MAX;
	volatile int32_t x372 = INT32_MAX;
	volatile int32_t t92 = 0;

	t92 = ((x369<=x370)<=(x371|x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 91458939LLU;
	int32_t x374 = -112;
	int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t93 = -1107;

	t93 = ((x373<=x374)<=(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x378 = INT64_MIN;
	volatile int64_t x380 = INT64_MIN;

	t94 = ((x377<=x378)<=(x379|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 23U;
	int64_t x382 = INT64_MAX;
	int64_t x383 = -1LL;

	t95 = ((x381<=x382)<=(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = -11397801LL;
	int64_t x387 = INT64_MIN;
	static volatile int32_t t96 = 5388924;

	t96 = ((x385<=x386)<=(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x390 = UINT16_MAX;
	uint8_t x391 = 2U;
	int16_t x392 = 18;
	volatile int32_t t97 = -321958;

	t97 = ((x389<=x390)<=(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MAX;
	static volatile int64_t x394 = 1395214285658LL;
	static int8_t x396 = 0;
	int32_t t98 = -38916357;

	t98 = ((x393<=x394)<=(x395|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = 12616768LLU;
	uint64_t x398 = 0LLU;

	t99 = ((x397<=x398)<=(x399|x400));

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

