#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 78;
volatile int32_t x4 = -1;
int32_t t1 = 70506907;
int16_t x13 = -1;
static int64_t x14 = -1LL;
uint8_t x18 = 1U;
int32_t x19 = 21591;
volatile int32_t t3 = -215141882;
int64_t x37 = INT64_MIN;
int32_t x40 = -1;
int8_t x43 = -17;
int32_t t10 = 11872;
uint16_t x51 = 142U;
int64_t x61 = -1LL;
int32_t x65 = INT32_MIN;
uint64_t x66 = 98073153395LLU;
int64_t x69 = -1321245LL;
static int8_t x75 = 16;
volatile uint64_t x93 = 65648LLU;
volatile uint16_t x107 = UINT16_MAX;
int64_t x110 = INT64_MIN;
volatile uint8_t x111 = UINT8_MAX;
static volatile int32_t t24 = -111658921;
int16_t x115 = 1;
static volatile uint32_t x121 = 71U;
int32_t t28 = 0;
uint16_t x143 = 638U;
static int64_t x149 = INT64_MAX;
int16_t x154 = -230;
volatile int16_t x155 = INT16_MIN;
volatile int32_t t33 = 41;
volatile uint8_t x157 = 0U;
volatile int32_t t35 = -1773;
static uint32_t x176 = 67464028U;
uint32_t x179 = 7U;
int64_t x188 = 20973LL;
int8_t x191 = -11;
static int16_t x197 = -1415;
int32_t x201 = INT32_MIN;
static int16_t x203 = INT16_MAX;
int32_t x204 = INT32_MIN;
volatile int32_t t44 = 9243;
static volatile uint16_t x205 = 923U;
int32_t x219 = -10151921;
volatile int8_t x223 = INT8_MAX;
uint64_t x232 = 55LLU;
volatile uint32_t x237 = 86117U;
volatile int32_t t52 = -175150;
uint64_t x242 = 4464750393940422373LLU;
uint32_t x245 = 584U;
volatile int32_t t56 = -5447504;
int8_t x259 = INT8_MAX;
int64_t x265 = -50LL;
uint16_t x279 = UINT16_MAX;
int64_t x284 = INT64_MIN;
int16_t x285 = INT16_MIN;
static int16_t x287 = INT16_MIN;
volatile uint8_t x292 = UINT8_MAX;
int16_t x297 = INT16_MIN;
int32_t t66 = 256337;
uint16_t x311 = 12U;
volatile int32_t t68 = -4661;
int32_t x317 = 1;
int32_t t70 = -109;
uint8_t x327 = 49U;
uint32_t x328 = 22U;
static int32_t x333 = INT32_MIN;
uint8_t x337 = UINT8_MAX;
int8_t x339 = -1;
int8_t x347 = INT8_MIN;
volatile int32_t t76 = 14;
uint32_t x353 = 28U;
static volatile int32_t x356 = -1;
int32_t t78 = -1;
int32_t x370 = 1010189;
volatile int16_t x372 = INT16_MIN;
int8_t x376 = -2;
static int32_t t81 = -13687;
static int32_t t83 = -177406763;
volatile int32_t t84 = -3;
int8_t x395 = INT8_MIN;
int32_t t85 = 5061;
static int16_t x398 = 1;
static int64_t x403 = INT64_MAX;
int32_t t87 = -185772478;
uint32_t x407 = 255U;
static int32_t x409 = INT32_MIN;
int64_t x418 = INT64_MIN;
static volatile int16_t x420 = -1;
static int64_t x422 = -56322LL;
volatile int64_t x428 = -436188618LL;
int16_t x429 = -1;
volatile int32_t t94 = -14;
uint64_t x434 = 45734863768LLU;
static int64_t x436 = INT64_MAX;
volatile int32_t t95 = -663;
static uint32_t x445 = 21297U;
int32_t t96 = 239693;
volatile int32_t x451 = INT32_MIN;
int32_t x453 = -1;
static int64_t x454 = -3544320001912LL;
static int32_t t99 = 4;


void f0(void) {
	uint8_t x1 = 2U;
	int16_t x2 = -1;
	volatile int32_t t0 = -2029;

	t0 = ((x1-x2)<(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 828U;
	uint16_t x6 = 0U;
	uint64_t x7 = 14284LLU;
	uint8_t x8 = 0U;

	t1 = ((x5-x6)<(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x15 = INT8_MAX;
	int64_t x16 = 5LL;
	int32_t t2 = 29874092;

	t2 = ((x13-x14)<(x15|x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 29;
	uint8_t x20 = 1U;

	t3 = ((x17-x18)<(x19|x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = -3374941582400741964LL;
	int64_t x22 = 10321643431436565LL;
	static volatile int8_t x23 = INT8_MAX;
	volatile int64_t x24 = INT64_MIN;
	int32_t t4 = 1;

	t4 = ((x21-x22)<(x23|x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = 1U;
	volatile uint32_t x26 = UINT32_MAX;
	int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	static volatile int32_t t5 = -4991795;

	t5 = ((x25-x26)<(x27|x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = -6389944808829LL;
	uint64_t x30 = 11LLU;
	volatile uint64_t x31 = 5348907LLU;
	volatile uint32_t x32 = 531U;
	static volatile int32_t t6 = -8253490;

	t6 = ((x29-x30)<(x31|x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = -1;
	volatile int32_t t7 = 243837;

	t7 = ((x33-x34)<(x35|x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -1LL;
	int8_t x39 = INT8_MAX;
	int32_t t8 = 717;

	t8 = ((x37-x38)<(x39|x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 3275U;
	volatile int32_t x44 = 17258;
	int32_t t9 = -3891;

	t9 = ((x41-x42)<(x43|x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 497619585U;
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = INT32_MIN;
	int16_t x48 = -6551;

	t10 = ((x45-x46)<(x47|x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 18;
	int8_t x50 = INT8_MAX;
	int8_t x52 = INT8_MIN;
	static int32_t t11 = 1979;

	t11 = ((x49-x50)<(x51|x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static int64_t x56 = INT64_MIN;
	int32_t t12 = 893622445;

	t12 = ((x53-x54)<(x55|x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	volatile int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = 14U;
	int32_t t13 = -8861622;

	t13 = ((x57-x58)<(x59|x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	static int64_t x64 = -35912718002799904LL;
	int32_t t14 = -174383;

	t14 = ((x61-x62)<(x63|x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	volatile int32_t t15 = 16;

	t15 = ((x65-x66)<(x67|x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -18699839013LL;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MAX;
	static int32_t t16 = 1386010;

	t16 = ((x69-x70)<(x71|x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x73 = UINT64_MAX;
	static int32_t x74 = -1;
	static int64_t x76 = 1056351698931216LL;
	int32_t t17 = 81;

	t17 = ((x73-x74)<(x75|x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x77 = 336U;
	int32_t x78 = -1;
	static int8_t x79 = -54;
	int32_t x80 = 31639766;
	int32_t t18 = 368233517;

	t18 = ((x77-x78)<(x79|x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = 70U;
	static uint32_t x82 = 20U;
	static volatile int32_t x83 = 95577078;
	volatile uint16_t x84 = 27U;
	volatile int32_t t19 = -1;

	t19 = ((x81-x82)<(x83|x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -43969319;
	uint64_t x90 = UINT64_MAX;
	int64_t x91 = -4545058113064LL;
	volatile int32_t x92 = -282;
	volatile int32_t t20 = -1;

	t20 = ((x89-x90)<(x91|x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = -1LL;
	volatile int64_t x95 = 68632424968604LL;
	int16_t x96 = -1;
	volatile int32_t t21 = -1;

	t21 = ((x93-x94)<(x95|x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 10U;
	uint64_t x102 = 116787LLU;
	int32_t x103 = 4115767;
	static int64_t x104 = -544747512770907021LL;
	static int32_t t22 = 749402604;

	t22 = ((x101-x102)<(x103|x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = 5U;
	int32_t x108 = INT32_MIN;
	volatile int32_t t23 = 161337059;

	t23 = ((x105-x106)<(x107|x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x109 = -14359508687940LL;
	uint32_t x112 = 159424U;

	t24 = ((x109-x110)<(x111|x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	volatile int32_t x114 = -1;
	static volatile int8_t x116 = -1;
	static volatile int32_t t25 = -7;

	t25 = ((x113-x114)<(x115|x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -1LL;
	volatile int16_t x118 = INT16_MIN;
	uint16_t x119 = 146U;
	volatile int16_t x120 = -1;
	int32_t t26 = 1;

	t26 = ((x117-x118)<(x119|x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x122 = 50U;
	int8_t x123 = 14;
	uint8_t x124 = 3U;
	int32_t t27 = -50074;

	t27 = ((x121-x122)<(x123|x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = 1885;
	uint64_t x126 = 444474LLU;
	int16_t x127 = 408;
	uint8_t x128 = UINT8_MAX;

	t28 = ((x125-x126)<(x127|x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x133 = INT8_MIN;
	static int64_t x134 = -1LL;
	static int64_t x135 = -1LL;
	int8_t x136 = INT8_MAX;
	static int32_t t29 = -393998;

	t29 = ((x133-x134)<(x135|x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 481U;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	int32_t t30 = -88;

	t30 = ((x137-x138)<(x139|x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = INT16_MIN;
	uint32_t x144 = 294764121U;
	static int32_t t31 = -130;

	t31 = ((x141-x142)<(x143|x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x150 = UINT32_MAX;
	int16_t x151 = INT16_MAX;
	int8_t x152 = -2;
	static volatile int32_t t32 = 474;

	t32 = ((x149-x150)<(x151|x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = 7U;
	static int8_t x156 = 17;

	t33 = ((x153-x154)<(x155|x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = -25214483LL;
	uint32_t x159 = 121414U;
	volatile int32_t x160 = 25012985;
	static volatile int32_t t34 = 100103145;

	t34 = ((x157-x158)<(x159|x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x161 = -58518;
	volatile uint8_t x162 = 3U;
	int16_t x163 = INT16_MIN;
	static uint64_t x164 = 7745097881920LLU;

	t35 = ((x161-x162)<(x163|x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MAX;
	uint32_t x166 = 1748U;
	int64_t x167 = -1LL;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t36 = 2;

	t36 = ((x165-x166)<(x167|x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = 3;
	uint32_t x170 = 5225873U;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = 1;
	int32_t t37 = -117601637;

	t37 = ((x169-x170)<(x171|x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -1;
	volatile int32_t x174 = INT32_MIN;
	int32_t x175 = -1;
	int32_t t38 = -9758787;

	t38 = ((x173-x174)<(x175|x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = -33150733710287LL;
	uint32_t x178 = 20303193U;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t39 = -730650588;

	t39 = ((x177-x178)<(x179|x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x181 = 5301374;
	int8_t x182 = -7;
	uint16_t x183 = 5U;
	int64_t x184 = INT64_MIN;
	static volatile int32_t t40 = -19;

	t40 = ((x181-x182)<(x183|x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MAX;
	int64_t x186 = 1119891889417463880LL;
	int64_t x187 = INT64_MIN;
	int32_t t41 = -12548;

	t41 = ((x185-x186)<(x187|x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t42 = 64774;

	t42 = ((x189-x190)<(x191|x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x198 = UINT8_MAX;
	volatile uint16_t x199 = UINT16_MAX;
	volatile int16_t x200 = 91;
	int32_t t43 = -121;

	t43 = ((x197-x198)<(x199|x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x202 = 14216597U;

	t44 = ((x201-x202)<(x203|x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x206 = INT8_MIN;
	static int8_t x207 = INT8_MIN;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t45 = 2911579;

	t45 = ((x205-x206)<(x207|x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x209 = INT32_MIN;
	volatile int32_t x210 = INT32_MIN;
	int32_t x211 = 276760787;
	uint16_t x212 = 11U;
	static int32_t t46 = 3276;

	t46 = ((x209-x210)<(x211|x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int8_t x215 = 7;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t47 = 28491;

	t47 = ((x213-x214)<(x215|x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x217 = 237LL;
	uint16_t x218 = 5614U;
	uint32_t x220 = 1634528631U;
	static int32_t t48 = 46;

	t48 = ((x217-x218)<(x219|x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x221 = -2;
	static uint32_t x222 = UINT32_MAX;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t49 = 1;

	t49 = ((x221-x222)<(x223|x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = -1;
	static uint16_t x230 = 2293U;
	int32_t x231 = INT32_MIN;
	static volatile int32_t t50 = 2;

	t50 = ((x229-x230)<(x231|x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = 3U;
	int64_t x234 = INT64_MAX;
	volatile int64_t x235 = -1922053950LL;
	int32_t x236 = INT32_MIN;
	volatile int32_t t51 = -47288775;

	t51 = ((x233-x234)<(x235|x236));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x238 = -2449;
	int8_t x239 = INT8_MIN;
	int8_t x240 = -1;

	t52 = ((x237-x238)<(x239|x240));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	int8_t x243 = -5;
	int16_t x244 = INT16_MAX;
	static volatile int32_t t53 = 682234;

	t53 = ((x241-x242)<(x243|x244));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x246 = INT64_MAX;
	static volatile int16_t x247 = 13;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t54 = -88966077;

	t54 = ((x245-x246)<(x247|x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = -103;
	static int16_t x250 = 978;
	int32_t x251 = -403;
	uint8_t x252 = 1U;
	static volatile int32_t t55 = 17924;

	t55 = ((x249-x250)<(x251|x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	static uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = UINT16_MAX;

	t56 = ((x253-x254)<(x255|x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x257 = -1;
	uint64_t x258 = 2LLU;
	static int64_t x260 = INT64_MAX;
	int32_t t57 = 8891;

	t57 = ((x257-x258)<(x259|x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x261 = 0U;
	uint16_t x262 = 6757U;
	uint64_t x263 = 41LLU;
	int16_t x264 = INT16_MIN;
	static int32_t t58 = 5808574;

	t58 = ((x261-x262)<(x263|x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x266 = -14519433;
	int64_t x267 = INT64_MAX;
	static int64_t x268 = 15835596049516LL;
	int32_t t59 = 1048;

	t59 = ((x265-x266)<(x267|x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = -1LL;
	uint8_t x275 = 18U;
	int64_t x276 = INT64_MAX;
	int32_t t60 = 1;

	t60 = ((x273-x274)<(x275|x276));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x277 = -1;
	volatile uint8_t x278 = UINT8_MAX;
	int64_t x280 = INT64_MIN;
	volatile int32_t t61 = -13;

	t61 = ((x277-x278)<(x279|x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x281 = 14393U;
	static uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 43293U;
	volatile int32_t t62 = -55419852;

	t62 = ((x281-x282)<(x283|x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x286 = -1;
	int32_t x288 = 1738;
	int32_t t63 = -2;

	t63 = ((x285-x286)<(x287|x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = -8;
	int64_t x290 = INT64_MIN;
	static volatile int16_t x291 = INT16_MIN;
	volatile int32_t t64 = -1230197;

	t64 = ((x289-x290)<(x291|x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x298 = 6;
	static uint64_t x299 = 236360302748LLU;
	static volatile uint64_t x300 = 8991386LLU;
	volatile int32_t t65 = 47311;

	t65 = ((x297-x298)<(x299|x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x301 = 11188;
	int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MIN;
	static int64_t x304 = -1LL;

	t66 = ((x301-x302)<(x303|x304));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x305 = 1727848U;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t67 = 143805;

	t67 = ((x305-x306)<(x307|x308));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x309 = UINT16_MAX;
	int8_t x310 = 0;
	uint8_t x312 = 4U;

	t68 = ((x309-x310)<(x311|x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = -1;
	int32_t x314 = -17908126;
	volatile int16_t x315 = INT16_MIN;
	uint64_t x316 = 121LLU;
	volatile int32_t t69 = 6552;

	t69 = ((x313-x314)<(x315|x316));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x318 = 115553819401LLU;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 1LLU;

	t70 = ((x317-x318)<(x319|x320));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x321 = 884659LLU;
	static int16_t x322 = INT16_MIN;
	volatile int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MIN;
	static int32_t t71 = 67;

	t71 = ((x321-x322)<(x323|x324));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x325 = UINT64_MAX;
	uint16_t x326 = 12463U;
	int32_t t72 = -5911;

	t72 = ((x325-x326)<(x327|x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x329 = 1U;
	int16_t x330 = INT16_MIN;
	int8_t x331 = -1;
	static int64_t x332 = -348106LL;
	int32_t t73 = -7;

	t73 = ((x329-x330)<(x331|x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x334 = -1;
	int32_t x335 = INT32_MAX;
	int8_t x336 = INT8_MAX;
	static volatile int32_t t74 = 987225;

	t74 = ((x333-x334)<(x335|x336));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x338 = 0U;
	static int64_t x340 = -1LL;
	int32_t t75 = 207;

	t75 = ((x337-x338)<(x339|x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = 35U;
	int8_t x346 = INT8_MIN;
	int32_t x348 = INT32_MAX;

	t76 = ((x345-x346)<(x347|x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x354 = -5;
	volatile uint8_t x355 = 2U;
	volatile int32_t t77 = -4629;

	t77 = ((x353-x354)<(x355|x356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x357 = INT16_MIN;
	int8_t x358 = 0;
	volatile int32_t x359 = -1;
	int64_t x360 = -5488060696001LL;

	t78 = ((x357-x358)<(x359|x360));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = 1899058;
	int16_t x367 = -1;
	int64_t x368 = INT64_MIN;
	volatile int32_t t79 = -23;

	t79 = ((x365-x366)<(x367|x368));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x369 = 1360;
	uint8_t x371 = UINT8_MAX;
	static volatile int32_t t80 = 30178014;

	t80 = ((x369-x370)<(x371|x372));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x373 = INT16_MIN;
	static volatile uint8_t x374 = 1U;
	int8_t x375 = INT8_MIN;

	t81 = ((x373-x374)<(x375|x376));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = UINT64_MAX;
	static int16_t x378 = INT16_MIN;
	int32_t x379 = -238;
	volatile int8_t x380 = -1;
	static volatile int32_t t82 = -9192;

	t82 = ((x377-x378)<(x379|x380));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = INT8_MIN;
	static int8_t x382 = INT8_MIN;
	volatile int64_t x383 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;

	t83 = ((x381-x382)<(x383|x384));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 21343U;
	volatile int16_t x386 = -11634;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MAX;

	t84 = ((x385-x386)<(x387|x388));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x393 = -4;
	uint8_t x394 = 50U;
	int8_t x396 = INT8_MIN;

	t85 = ((x393-x394)<(x395|x396));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = INT8_MIN;
	int64_t x399 = INT64_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t86 = -726;

	t86 = ((x397-x398)<(x399|x400));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = 31523614;
	uint8_t x402 = UINT8_MAX;
	volatile int8_t x404 = -2;

	t87 = ((x401-x402)<(x403|x404));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x405 = 55U;
	uint16_t x406 = 0U;
	uint64_t x408 = 749920056303LLU;
	int32_t t88 = 103707;

	t88 = ((x405-x406)<(x407|x408));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x410 = 0;
	static int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	static int32_t t89 = -765;

	t89 = ((x409-x410)<(x411|x412));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x413 = INT64_MIN;
	volatile int64_t x414 = INT64_MIN;
	int64_t x415 = -331LL;
	int8_t x416 = 60;
	int32_t t90 = 89735621;

	t90 = ((x413-x414)<(x415|x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x417 = INT16_MIN;
	static int16_t x419 = INT16_MIN;
	int32_t t91 = 168000;

	t91 = ((x417-x418)<(x419|x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = INT16_MAX;
	static uint8_t x423 = 47U;
	static int8_t x424 = 1;
	volatile int32_t t92 = 21455;

	t92 = ((x421-x422)<(x423|x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x425 = -1LL;
	int8_t x426 = 1;
	static int16_t x427 = 415;
	int32_t t93 = -117265;

	t93 = ((x425-x426)<(x427|x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x430 = -1;
	int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MIN;

	t94 = ((x429-x430)<(x431|x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x433 = 13U;
	volatile uint8_t x435 = UINT8_MAX;

	t95 = ((x433-x434)<(x435|x436));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x446 = -1;
	uint8_t x447 = 6U;
	uint64_t x448 = 40228LLU;

	t96 = ((x445-x446)<(x447|x448));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x449 = INT8_MIN;
	int8_t x450 = 4;
	volatile int16_t x452 = INT16_MAX;
	volatile int32_t t97 = 765866458;

	t97 = ((x449-x450)<(x451|x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x455 = INT8_MIN;
	static int8_t x456 = 25;
	volatile int32_t t98 = 1;

	t98 = ((x453-x454)<(x455|x456));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x457 = 9;
	static int32_t x458 = -1;
	uint8_t x459 = 1U;
	uint32_t x460 = 869U;

	t99 = ((x457-x458)<(x459|x460));

	if (t99 != 1) { NG(); } else { ; }
	
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

