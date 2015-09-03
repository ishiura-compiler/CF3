#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MAX;
int32_t t3 = -559;
int16_t x17 = INT16_MAX;
int64_t x23 = INT64_MAX;
volatile uint32_t x24 = 29043378U;
volatile int32_t t5 = 2;
volatile uint64_t x26 = 57058513427LLU;
int32_t x27 = -6;
static volatile int32_t x33 = 1028863137;
static volatile int16_t x36 = 140;
static int32_t t8 = 3021;
uint8_t x38 = UINT8_MAX;
volatile int8_t x45 = -1;
uint64_t x47 = 17075017740LLU;
int32_t x48 = INT32_MIN;
int16_t x49 = 173;
int32_t x56 = INT32_MIN;
volatile int32_t t13 = 50;
int8_t x57 = INT8_MAX;
int32_t t14 = -22164;
volatile uint64_t x62 = 114020933LLU;
uint64_t x66 = 16308834002737LLU;
uint32_t x67 = 3735363U;
volatile uint16_t x68 = 4U;
int32_t t17 = 1368713;
int32_t x73 = INT32_MIN;
int8_t x77 = INT8_MIN;
static volatile int32_t t20 = 9196;
uint8_t x92 = UINT8_MAX;
static volatile uint8_t x97 = 39U;
int16_t x105 = INT16_MIN;
int64_t x111 = 25747924430303LL;
int32_t t27 = 11868;
uint8_t x120 = 85U;
int32_t t29 = -5778;
volatile int32_t x124 = INT32_MAX;
uint8_t x128 = 0U;
volatile int32_t t32 = -64869;
uint16_t x136 = 1231U;
uint8_t x141 = 24U;
uint16_t x142 = UINT16_MAX;
uint32_t x144 = 13595346U;
int16_t x147 = 4522;
static int32_t x151 = -11964;
int32_t t37 = 13;
int16_t x157 = 4597;
volatile int32_t x159 = -48185;
volatile int32_t t39 = -6937542;
int32_t t42 = -118791071;
volatile int8_t x184 = -1;
volatile int32_t t47 = -31009252;
volatile int32_t x198 = INT32_MAX;
uint16_t x199 = UINT16_MAX;
static volatile uint16_t x202 = UINT16_MAX;
volatile int32_t t49 = 153;
int32_t x208 = INT32_MAX;
int64_t x214 = INT64_MIN;
int32_t t52 = -21;
uint16_t x228 = UINT16_MAX;
volatile int32_t t55 = -53592998;
int16_t x237 = -1;
uint64_t x240 = 1213LLU;
volatile int32_t t56 = 1;
int64_t x243 = INT64_MAX;
volatile int16_t x246 = INT16_MIN;
static uint16_t x247 = 5036U;
int64_t x250 = 1LL;
uint32_t x251 = 107163U;
volatile int8_t x269 = -14;
uint8_t x270 = UINT8_MAX;
static uint64_t x273 = UINT64_MAX;
volatile int32_t t66 = -1524902;
static uint64_t x289 = 13487349704578908LLU;
volatile int32_t t68 = -164475739;
int32_t x301 = INT32_MAX;
volatile int32_t t69 = -2682764;
static int64_t x306 = -1LL;
volatile int32_t t72 = -2;
int64_t x320 = -51459LL;
uint16_t x323 = UINT16_MAX;
int8_t x324 = 1;
int32_t t74 = 0;
uint8_t x336 = 0U;
volatile int32_t t77 = -311493;
uint32_t x338 = UINT32_MAX;
int8_t x346 = 1;
int64_t x348 = -1LL;
volatile int32_t t81 = 8170197;
int8_t x365 = INT8_MIN;
static int32_t x383 = INT32_MIN;
int8_t x387 = -1;
uint8_t x388 = 6U;
volatile int32_t x402 = -1;
int8_t x405 = INT8_MAX;
volatile uint64_t x406 = 26806LLU;
int16_t x410 = INT16_MIN;
uint8_t x412 = UINT8_MAX;
uint16_t x413 = UINT16_MAX;
uint32_t x416 = 190U;
int16_t x421 = -1;
int16_t x424 = INT16_MIN;


void f0(void) {
	int32_t x1 = -54;
	int8_t x2 = 0;
	static uint64_t x3 = 5141333046LLU;
	int32_t t0 = 112688;

	t0 = ((x1+x2)<(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int64_t x6 = -1LL;
	volatile int64_t x7 = 8973LL;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -268583;

	t1 = ((x5+x6)<(x7|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 4U;
	int8_t x10 = -1;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 62;

	t2 = ((x9+x10)<(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int64_t x14 = 1899843204635170760LL;
	int32_t x15 = INT32_MIN;
	int64_t x16 = 3627530104323704LL;

	t3 = ((x13+x14)<(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	int32_t x19 = INT32_MAX;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = -170348507;

	t4 = ((x17+x18)<(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	static volatile uint32_t x22 = UINT32_MAX;

	t5 = ((x21+x22)<(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	uint64_t x28 = UINT64_MAX;
	static int32_t t6 = 23251;

	t6 = ((x25+x26)<(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 2990050LLU;
	volatile int16_t x30 = -1;
	volatile int32_t x31 = -1;
	int64_t x32 = -1LL;
	volatile int32_t t7 = -31679;

	t7 = ((x29+x30)<(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MAX;
	static uint16_t x35 = 960U;

	t8 = ((x33+x34)<(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 2026U;
	static int16_t x39 = 264;
	static volatile int16_t x40 = INT16_MIN;
	static int32_t t9 = -59;

	t9 = ((x37+x38)<(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int8_t x42 = INT8_MAX;
	int64_t x43 = -1LL;
	int32_t x44 = -4009;
	volatile int32_t t10 = -929016;

	t10 = ((x41+x42)<(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	int32_t t11 = 7;

	t11 = ((x45+x46)<(x47|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MIN;
	static uint8_t x51 = 20U;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = 1921938;

	t12 = ((x49+x50)<(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	static int8_t x54 = INT8_MIN;
	int16_t x55 = 2;

	t13 = ((x53+x54)<(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = -1;
	uint8_t x60 = 1U;

	t14 = ((x57+x58)<(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	static int64_t x63 = 0LL;
	int16_t x64 = -11687;
	volatile int32_t t15 = 38;

	t15 = ((x61+x62)<(x63|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = 953;
	volatile int32_t t16 = 594752;

	t16 = ((x65+x66)<(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = 2U;
	uint64_t x71 = 702202460LLU;
	int8_t x72 = 1;

	t17 = ((x69+x70)<(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -1LL;
	int8_t x75 = 1;
	uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = 388661813;

	t18 = ((x73+x74)<(x75|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	int32_t x79 = 5240317;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -26921440;

	t19 = ((x77+x78)<(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 3633U;
	volatile uint16_t x82 = 4741U;
	uint64_t x83 = 368LLU;
	uint8_t x84 = UINT8_MAX;

	t20 = ((x81+x82)<(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 15185;
	int64_t x86 = INT64_MIN;
	static volatile int8_t x87 = -1;
	int8_t x88 = -1;
	volatile int32_t t21 = 504875;

	t21 = ((x85+x86)<(x87|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int8_t x90 = 6;
	int32_t x91 = INT32_MIN;
	int32_t t22 = 0;

	t22 = ((x89+x90)<(x91|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int32_t x94 = INT32_MIN;
	volatile int64_t x95 = -15513LL;
	int64_t x96 = 102410223LL;
	volatile int32_t t23 = 611244375;

	t23 = ((x93+x94)<(x95|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MIN;
	uint32_t x99 = 477U;
	uint16_t x100 = 23U;
	volatile int32_t t24 = 22;

	t24 = ((x97+x98)<(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	uint32_t x102 = 378822U;
	volatile uint32_t x103 = 2072050U;
	int16_t x104 = -12461;
	volatile int32_t t25 = -5835570;

	t25 = ((x101+x102)<(x103|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x106 = 1U;
	int32_t x107 = INT32_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 134690;

	t26 = ((x105+x106)<(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	volatile uint64_t x110 = 291850795724994LLU;
	int32_t x112 = INT32_MIN;

	t27 = ((x109+x110)<(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 82U;
	static uint32_t x114 = 448744670U;
	int8_t x115 = INT8_MIN;
	int32_t x116 = -255935;
	volatile int32_t t28 = -45726920;

	t28 = ((x113+x114)<(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 30U;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;

	t29 = ((x117+x118)<(x119|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MAX;
	int32_t x122 = INT32_MIN;
	int16_t x123 = INT16_MIN;
	volatile int32_t t30 = -18818;

	t30 = ((x121+x122)<(x123|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -480;
	int16_t x126 = -1;
	volatile int32_t x127 = -22644729;
	static volatile int32_t t31 = 0;

	t31 = ((x125+x126)<(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 97737U;
	int32_t x130 = -1;
	volatile int8_t x131 = -1;
	int16_t x132 = 1604;

	t32 = ((x129+x130)<(x131|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static int64_t x134 = 772LL;
	int8_t x135 = INT8_MAX;
	static volatile int32_t t33 = -126;

	t33 = ((x133+x134)<(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint16_t x138 = 121U;
	int8_t x139 = -44;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -41738;

	t34 = ((x137+x138)<(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x143 = INT32_MIN;
	static int32_t t35 = -141951151;

	t35 = ((x141+x142)<(x143|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 0;
	uint64_t x146 = UINT64_MAX;
	static uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -3265;

	t36 = ((x145+x146)<(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = 3;
	int32_t x150 = INT32_MIN;
	int8_t x152 = INT8_MAX;

	t37 = ((x149+x150)<(x151|x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	static int16_t x155 = -1;
	static volatile uint8_t x156 = UINT8_MAX;
	int32_t t38 = -3;

	t38 = ((x153+x154)<(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	uint64_t x160 = 326194680553LLU;

	t39 = ((x157+x158)<(x159|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = 0U;
	int32_t x166 = -98;
	uint8_t x167 = 4U;
	volatile int32_t x168 = -1101;
	int32_t t40 = 23;

	t40 = ((x165+x166)<(x167|x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	int16_t x170 = INT16_MIN;
	static uint8_t x171 = 6U;
	int64_t x172 = INT64_MIN;
	volatile int32_t t41 = 200100;

	t41 = ((x169+x170)<(x171|x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 1;
	uint16_t x174 = 2U;
	int16_t x175 = INT16_MAX;
	int8_t x176 = -1;

	t42 = ((x173+x174)<(x175|x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MIN;
	uint16_t x178 = UINT16_MAX;
	volatile int16_t x179 = 14;
	volatile int64_t x180 = INT64_MAX;
	volatile int32_t t43 = -3122;

	t43 = ((x177+x178)<(x179|x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x181 = INT64_MIN;
	static volatile uint64_t x182 = 5660650180084LLU;
	uint32_t x183 = UINT32_MAX;
	int32_t t44 = 40;

	t44 = ((x181+x182)<(x183|x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 3247869473LLU;
	int64_t x186 = 4164612LL;
	uint16_t x187 = 144U;
	int16_t x188 = INT16_MIN;
	volatile int32_t t45 = 3512;

	t45 = ((x185+x186)<(x187|x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = 0U;
	int16_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	int32_t t46 = 57;

	t46 = ((x189+x190)<(x191|x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x193 = INT16_MAX;
	int8_t x194 = 0;
	static int32_t x195 = INT32_MAX;
	volatile int16_t x196 = INT16_MAX;

	t47 = ((x193+x194)<(x195|x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	int64_t x200 = INT64_MIN;
	int32_t t48 = 29;

	t48 = ((x197+x198)<(x199|x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = 6005270;
	uint16_t x203 = 91U;
	int64_t x204 = INT64_MIN;

	t49 = ((x201+x202)<(x203|x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x205 = 2404U;
	int16_t x206 = INT16_MIN;
	int8_t x207 = -14;
	volatile int32_t t50 = -1402;

	t50 = ((x205+x206)<(x207|x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x209 = -62356273;
	uint64_t x210 = 462205059490LLU;
	int64_t x211 = INT64_MAX;
	uint16_t x212 = 1U;
	int32_t t51 = -14;

	t51 = ((x209+x210)<(x211|x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x215 = 5952377;
	volatile int8_t x216 = 8;

	t52 = ((x213+x214)<(x215|x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 0LL;
	volatile uint64_t x218 = UINT64_MAX;
	int8_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile int32_t t53 = -122;

	t53 = ((x217+x218)<(x219|x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -5138;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	volatile int32_t t54 = -67702215;

	t54 = ((x225+x226)<(x227|x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = UINT8_MAX;
	int32_t x230 = INT32_MIN;
	static int16_t x231 = -1;
	volatile int16_t x232 = INT16_MAX;

	t55 = ((x229+x230)<(x231|x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x238 = 0U;
	volatile uint8_t x239 = 0U;

	t56 = ((x237+x238)<(x239|x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x241 = INT32_MAX;
	uint32_t x242 = UINT32_MAX;
	volatile int64_t x244 = 74LL;
	volatile int32_t t57 = 480;

	t57 = ((x241+x242)<(x243|x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x245 = 197236590540LL;
	static int8_t x248 = INT8_MIN;
	int32_t t58 = -14492;

	t58 = ((x245+x246)<(x247|x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = 514U;
	int32_t x252 = -1;
	static int32_t t59 = -1361;

	t59 = ((x249+x250)<(x251|x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 840U;
	int32_t x254 = INT32_MAX;
	uint8_t x255 = 0U;
	int64_t x256 = INT64_MIN;
	volatile int32_t t60 = -6847610;

	t60 = ((x253+x254)<(x255|x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x257 = 147U;
	static int64_t x258 = -1LL;
	static int64_t x259 = -1LL;
	uint16_t x260 = UINT16_MAX;
	int32_t t61 = -2013;

	t61 = ((x257+x258)<(x259|x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x261 = INT32_MIN;
	static int16_t x262 = INT16_MAX;
	int64_t x263 = -511045773060151749LL;
	int16_t x264 = INT16_MAX;
	int32_t t62 = 1699596;

	t62 = ((x261+x262)<(x263|x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int32_t x266 = 39766476;
	int64_t x267 = -32173747LL;
	int64_t x268 = 95LL;
	static volatile int32_t t63 = -7050363;

	t63 = ((x265+x266)<(x267|x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x271 = -1;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t64 = 1254654;

	t64 = ((x269+x270)<(x271|x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x274 = 1U;
	int8_t x275 = INT8_MAX;
	volatile int16_t x276 = -7148;
	volatile int32_t t65 = -2857129;

	t65 = ((x273+x274)<(x275|x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = -1;
	static uint8_t x282 = 4U;
	static uint64_t x283 = 2049589973318LLU;
	int64_t x284 = INT64_MIN;

	t66 = ((x281+x282)<(x283|x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = UINT8_MAX;
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t67 = -172004;

	t67 = ((x285+x286)<(x287|x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x290 = UINT32_MAX;
	volatile int16_t x291 = INT16_MAX;
	static int32_t x292 = -55411;

	t68 = ((x289+x290)<(x291|x292));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x302 = -12;
	int64_t x303 = 3092951232LL;
	int32_t x304 = INT32_MIN;

	t69 = ((x301+x302)<(x303|x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x305 = UINT64_MAX;
	int64_t x307 = INT64_MIN;
	static int16_t x308 = -14;
	static volatile int32_t t70 = 247179;

	t70 = ((x305+x306)<(x307|x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x309 = INT16_MAX;
	static int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	volatile int64_t x312 = INT64_MAX;
	int32_t t71 = 9022484;

	t71 = ((x309+x310)<(x311|x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = 35778873233LLU;
	int8_t x316 = -1;

	t72 = ((x313+x314)<(x315|x316));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = -1;
	static volatile int32_t t73 = 3418;

	t73 = ((x317+x318)<(x319|x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x322 = UINT16_MAX;

	t74 = ((x321+x322)<(x323|x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MIN;
	static int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t75 = -1;

	t75 = ((x325+x326)<(x327|x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = -1;
	int16_t x330 = 1;
	uint64_t x331 = 6LLU;
	volatile uint32_t x332 = 0U;
	int32_t t76 = 365;

	t76 = ((x329+x330)<(x331|x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x333 = 963U;
	static volatile uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MAX;

	t77 = ((x333+x334)<(x335|x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = 5913U;
	static int16_t x339 = INT16_MAX;
	uint64_t x340 = 27405807389588LLU;
	volatile int32_t t78 = 506678645;

	t78 = ((x337+x338)<(x339|x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MIN;
	int32_t x344 = -1;
	static volatile int32_t t79 = -119523;

	t79 = ((x341+x342)<(x343|x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MIN;
	int16_t x347 = -1;
	int32_t t80 = 1;

	t80 = ((x345+x346)<(x347|x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x349 = INT16_MIN;
	static uint32_t x350 = 4081306U;
	volatile int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MIN;

	t81 = ((x349+x350)<(x351|x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x353 = -905LL;
	static volatile int32_t x354 = -14;
	int16_t x355 = INT16_MIN;
	static int16_t x356 = 15;
	volatile int32_t t82 = 419;

	t82 = ((x353+x354)<(x355|x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x357 = -1;
	static int64_t x358 = 202439219015LL;
	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MAX;
	static int32_t t83 = 1046770;

	t83 = ((x357+x358)<(x359|x360));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x366 = 175U;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MIN;
	int32_t t84 = 297105;

	t84 = ((x365+x366)<(x367|x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = INT32_MAX;
	int16_t x370 = INT16_MIN;
	int16_t x371 = 11641;
	int16_t x372 = 2766;
	volatile int32_t t85 = -378007933;

	t85 = ((x369+x370)<(x371|x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = -16;
	static volatile int32_t x375 = 71240493;
	static uint8_t x376 = 2U;
	int32_t t86 = 30;

	t86 = ((x373+x374)<(x375|x376));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = -1;
	volatile int64_t x380 = INT64_MAX;
	int32_t t87 = 94520449;

	t87 = ((x377+x378)<(x379|x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x381 = 23527LLU;
	static volatile uint64_t x382 = 6736000125692LLU;
	uint8_t x384 = 52U;
	volatile int32_t t88 = 0;

	t88 = ((x381+x382)<(x383|x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = -2104474058312556541LL;
	int32_t x386 = INT32_MIN;
	static int32_t t89 = 10514361;

	t89 = ((x385+x386)<(x387|x388));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x389 = 2U;
	int32_t x390 = 199312918;
	uint32_t x391 = 957180577U;
	int16_t x392 = -1;
	volatile int32_t t90 = -7365463;

	t90 = ((x389+x390)<(x391|x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = 464LLU;
	int64_t x394 = INT64_MAX;
	int16_t x395 = -3434;
	uint64_t x396 = 14901336676625814LLU;
	int32_t t91 = -197250924;

	t91 = ((x393+x394)<(x395|x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MIN;
	static uint64_t x398 = 13LLU;
	static int32_t x399 = 1;
	volatile int32_t x400 = -670150912;
	int32_t t92 = -4224559;

	t92 = ((x397+x398)<(x399|x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x401 = -1;
	volatile int8_t x403 = -36;
	static int32_t x404 = -845381;
	volatile int32_t t93 = -8244;

	t93 = ((x401+x402)<(x403|x404));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x407 = INT32_MAX;
	uint64_t x408 = 22900LLU;
	int32_t t94 = 2;

	t94 = ((x405+x406)<(x407|x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x409 = INT64_MAX;
	int32_t x411 = INT32_MAX;
	int32_t t95 = -52;

	t95 = ((x409+x410)<(x411|x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = -1;
	volatile int32_t t96 = -153925321;

	t96 = ((x413+x414)<(x415|x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = 44;
	int8_t x418 = 47;
	static uint64_t x419 = 14LLU;
	int32_t x420 = -1;
	int32_t t97 = -202504;

	t97 = ((x417+x418)<(x419|x420));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	volatile int32_t t98 = 0;

	t98 = ((x421+x422)<(x423|x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = -1;
	volatile int16_t x426 = 1;
	int8_t x427 = -1;
	int8_t x428 = INT8_MIN;
	int32_t t99 = -9930;

	t99 = ((x425+x426)<(x427|x428));

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

