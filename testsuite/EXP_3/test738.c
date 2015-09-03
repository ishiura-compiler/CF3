#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x4 = 8U;
uint64_t x6 = 79LLU;
static volatile int32_t t1 = 6;
int32_t x14 = INT32_MIN;
int32_t x16 = -1;
static int16_t x22 = -1;
volatile int8_t x30 = INT8_MIN;
volatile uint64_t x40 = UINT64_MAX;
volatile int32_t t9 = -293;
static uint64_t x44 = 1820964565927327LLU;
int8_t x49 = -9;
static volatile int16_t x53 = INT16_MIN;
uint32_t x54 = UINT32_MAX;
static int64_t x63 = -378LL;
int8_t x64 = INT8_MIN;
int16_t x71 = -1;
static uint32_t x75 = UINT32_MAX;
uint64_t x77 = 2LLU;
int64_t x81 = -1LL;
int8_t x83 = INT8_MAX;
int8_t x86 = INT8_MAX;
int32_t x97 = INT32_MIN;
int32_t x101 = INT32_MIN;
static uint32_t x102 = 19992807U;
int8_t x103 = -1;
int32_t t24 = 7;
int32_t x111 = INT32_MIN;
int8_t x113 = INT8_MIN;
int64_t x117 = -2646993LL;
int32_t x120 = INT32_MIN;
int8_t x127 = 31;
uint8_t x129 = 1U;
volatile int16_t x134 = INT16_MIN;
static int64_t x161 = INT64_MAX;
int64_t x168 = INT64_MAX;
volatile int32_t t35 = -1040209;
volatile uint32_t x173 = 1606705U;
uint32_t x175 = 1141114U;
int32_t x180 = 36396;
uint8_t x185 = 63U;
int32_t x186 = INT32_MAX;
uint32_t x187 = 906U;
volatile int64_t x188 = INT64_MIN;
int32_t t40 = -265379063;
static volatile int16_t x190 = -1;
int32_t x192 = INT32_MIN;
int64_t x196 = INT64_MAX;
uint32_t x198 = 930635524U;
volatile int64_t x199 = 2182894344LL;
uint32_t x200 = 348175U;
static int8_t x210 = INT8_MAX;
static uint16_t x216 = UINT16_MAX;
volatile int32_t t47 = -23;
int16_t x236 = INT16_MAX;
static int16_t x241 = INT16_MIN;
uint8_t x243 = 57U;
volatile uint64_t x246 = 9081535745LLU;
int8_t x253 = INT8_MIN;
int16_t x256 = -1983;
volatile uint32_t x257 = 1U;
int8_t x258 = INT8_MIN;
int64_t x259 = -1LL;
int32_t x262 = INT32_MAX;
static uint64_t x264 = UINT64_MAX;
int32_t x266 = INT32_MIN;
int8_t x271 = INT8_MIN;
uint32_t x276 = 178413502U;
volatile int64_t x281 = -5047512634324447LL;
int32_t x287 = INT32_MIN;
uint8_t x288 = UINT8_MAX;
int32_t t65 = -11973;
volatile int32_t t67 = 7291129;
static volatile uint8_t x303 = 50U;
volatile int32_t t68 = 41062;
uint8_t x305 = 15U;
volatile int16_t x308 = INT16_MIN;
static volatile int32_t t69 = 561610239;
static int32_t x313 = -350779;
int8_t x315 = INT8_MIN;
static int64_t x316 = -35LL;
uint16_t x324 = 14720U;
int32_t x327 = -20081;
volatile int32_t x328 = INT32_MAX;
volatile int16_t x333 = INT16_MAX;
volatile int32_t t75 = 740457;
int32_t t77 = 71819428;
uint32_t x346 = 7793355U;
static int64_t x349 = -54805982866127LL;
int64_t x356 = INT64_MIN;
int8_t x358 = INT8_MIN;
int64_t x373 = INT64_MIN;
int64_t x377 = -421LL;
uint32_t x378 = UINT32_MAX;
volatile int32_t x379 = INT32_MIN;
uint32_t x384 = 6115U;
static int64_t x386 = INT64_MIN;
static int16_t x388 = INT16_MIN;
int16_t x392 = -803;
uint32_t x400 = 14330950U;
int64_t x404 = INT64_MIN;
int8_t x407 = INT8_MIN;
int32_t x408 = INT32_MIN;
int64_t x413 = INT64_MAX;
int32_t t96 = 0;
volatile int32_t t98 = 1095015;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint8_t x2 = 115U;
	int32_t x3 = INT32_MAX;
	volatile int32_t t0 = -143;

	t0 = ((x1%x2)<=(x3%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 8560476138LLU;
	uint32_t x7 = 195U;
	volatile int8_t x8 = -1;

	t1 = ((x5%x6)<=(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 2955227824746635668LL;
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = -1;
	volatile int64_t x12 = INT64_MAX;
	volatile int32_t t2 = -170;

	t2 = ((x9%x10)<=(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int64_t x15 = INT64_MIN;
	int32_t t3 = -63;

	t3 = ((x13%x14)<=(x15%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	int64_t x18 = INT64_MIN;
	static volatile int16_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = 5711016;

	t4 = ((x17%x18)<=(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int16_t x23 = INT16_MAX;
	int16_t x24 = -1;
	static int32_t t5 = -1;

	t5 = ((x21%x22)<=(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 1U;
	int16_t x26 = -1;
	uint16_t x27 = 25441U;
	int8_t x28 = INT8_MAX;
	int32_t t6 = 1;

	t6 = ((x25%x26)<=(x27%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 75U;
	volatile int32_t t7 = -7;

	t7 = ((x29%x30)<=(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	static int8_t x34 = INT8_MIN;
	int64_t x35 = -1289LL;
	volatile int16_t x36 = -1;
	volatile int32_t t8 = 24115;

	t8 = ((x33%x34)<=(x35%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint32_t x38 = 2U;
	int32_t x39 = -1;

	t9 = ((x37%x38)<=(x39%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 121509602846865016LLU;
	volatile int64_t x43 = INT64_MIN;
	static int32_t t10 = 6112947;

	t10 = ((x41%x42)<=(x43%x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	uint16_t x46 = 74U;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 687726;

	t11 = ((x45%x46)<=(x47%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = INT64_MAX;
	int8_t x51 = INT8_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 1;

	t12 = ((x49%x50)<=(x51%x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = -1;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -6949;

	t13 = ((x53%x54)<=(x55%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	int16_t x58 = -1;
	uint32_t x59 = 302U;
	volatile uint32_t x60 = 1142150U;
	int32_t t14 = -1;

	t14 = ((x57%x58)<=(x59%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 41176785097749LLU;
	int16_t x62 = INT16_MIN;
	static volatile int32_t t15 = -405563673;

	t15 = ((x61%x62)<=(x63%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = 10;
	volatile uint32_t x70 = 49U;
	static uint8_t x72 = 47U;
	int32_t t16 = -25966;

	t16 = ((x69%x70)<=(x71%x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = 28;
	volatile int64_t x74 = INT64_MAX;
	uint8_t x76 = 71U;
	int32_t t17 = 6844152;

	t17 = ((x73%x74)<=(x75%x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = 13083;
	uint64_t x79 = 576LLU;
	uint32_t x80 = 90995U;
	int32_t t18 = -278;

	t18 = ((x77%x78)<=(x79%x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = 3735LL;
	static volatile int32_t x84 = -19926385;
	static int32_t t19 = -51149;

	t19 = ((x81%x82)<=(x83%x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	volatile int32_t x87 = INT32_MIN;
	volatile uint32_t x88 = 595414U;
	volatile int32_t t20 = -62989527;

	t20 = ((x85%x86)<=(x87%x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -1;
	int8_t x91 = -1;
	volatile int16_t x92 = -13;
	int32_t t21 = 830295482;

	t21 = ((x89%x90)<=(x91%x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	volatile int32_t x94 = 1099951;
	static uint32_t x95 = UINT32_MAX;
	static int16_t x96 = INT16_MIN;
	int32_t t22 = 953;

	t22 = ((x93%x94)<=(x95%x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 23U;
	static int32_t x100 = INT32_MAX;
	volatile int32_t t23 = -108369;

	t23 = ((x97%x98)<=(x99%x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x104 = INT16_MAX;

	t24 = ((x101%x102)<=(x103%x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = -1;
	int64_t x106 = 12528728674416LL;
	int16_t x107 = -1;
	uint8_t x108 = 29U;
	int32_t t25 = -195738;

	t25 = ((x105%x106)<=(x107%x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = 72653130;
	static volatile int64_t x110 = -1LL;
	int16_t x112 = -1;
	int32_t t26 = -56;

	t26 = ((x109%x110)<=(x111%x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MIN;
	volatile int32_t t27 = 39585326;

	t27 = ((x113%x114)<=(x115%x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = INT64_MAX;
	static uint16_t x119 = 7853U;
	static volatile int32_t t28 = -270;

	t28 = ((x117%x118)<=(x119%x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	volatile int16_t x126 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t29 = 722;

	t29 = ((x125%x126)<=(x127%x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x130 = UINT8_MAX;
	int64_t x131 = INT64_MAX;
	int16_t x132 = -1;
	static volatile int32_t t30 = 1919;

	t30 = ((x129%x130)<=(x131%x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = -1;
	uint64_t x135 = UINT64_MAX;
	static int16_t x136 = INT16_MAX;
	int32_t t31 = -86001210;

	t31 = ((x133%x134)<=(x135%x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 2966299U;
	static uint64_t x142 = 7490045208LLU;
	volatile uint64_t x143 = 71LLU;
	volatile uint64_t x144 = UINT64_MAX;
	int32_t t32 = -1320;

	t32 = ((x141%x142)<=(x143%x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = -1LL;
	uint8_t x150 = 52U;
	int32_t x151 = INT32_MIN;
	volatile int32_t x152 = INT32_MIN;
	static volatile int32_t t33 = -57854;

	t33 = ((x149%x150)<=(x151%x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x162 = -1;
	uint32_t x163 = 425236594U;
	uint64_t x164 = 3341LLU;
	volatile int32_t t34 = 3076669;

	t34 = ((x161%x162)<=(x163%x164));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = 6U;
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = 72;

	t35 = ((x165%x166)<=(x167%x168));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = 1;
	int32_t x170 = -1;
	int8_t x171 = INT8_MIN;
	volatile uint8_t x172 = UINT8_MAX;
	int32_t t36 = 8014798;

	t36 = ((x169%x170)<=(x171%x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x174 = INT32_MAX;
	static int64_t x176 = -101428573474LL;
	volatile int32_t t37 = 471910652;

	t37 = ((x173%x174)<=(x175%x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	static volatile uint64_t x178 = 1322207473989368546LLU;
	uint8_t x179 = 89U;
	int32_t t38 = -17809826;

	t38 = ((x177%x178)<=(x179%x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = 114;
	int32_t x182 = INT32_MIN;
	int64_t x183 = -2144LL;
	static volatile uint64_t x184 = 16099181LLU;
	int32_t t39 = -7;

	t39 = ((x181%x182)<=(x183%x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {


	t40 = ((x185%x186)<=(x187%x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MIN;
	int16_t x191 = 0;
	static volatile int32_t t41 = 972324;

	t41 = ((x189%x190)<=(x191%x192));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = -1;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MAX;
	static int32_t t42 = -124580;

	t42 = ((x193%x194)<=(x195%x196));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = 825U;
	int32_t t43 = -199;

	t43 = ((x197%x198)<=(x199%x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = -3408LL;
	uint8_t x202 = UINT8_MAX;
	volatile uint64_t x203 = UINT64_MAX;
	int64_t x204 = -18007609080LL;
	volatile int32_t t44 = 57793380;

	t44 = ((x201%x202)<=(x203%x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -948600452773LL;
	int8_t x208 = INT8_MAX;
	int32_t t45 = -5821;

	t45 = ((x205%x206)<=(x207%x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x209 = 0LLU;
	uint16_t x211 = 12225U;
	volatile uint32_t x212 = 29U;
	volatile int32_t t46 = 522;

	t46 = ((x209%x210)<=(x211%x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = 167937868U;
	int64_t x214 = -1LL;
	volatile int32_t x215 = -1;

	t47 = ((x213%x214)<=(x215%x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = UINT32_MAX;
	int8_t x218 = 50;
	static volatile uint64_t x219 = 1065553078580025318LLU;
	int8_t x220 = INT8_MIN;
	int32_t t48 = 4;

	t48 = ((x217%x218)<=(x219%x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x221 = 77108514855713LLU;
	int8_t x222 = INT8_MIN;
	int64_t x223 = -380977112LL;
	int8_t x224 = INT8_MIN;
	volatile int32_t t49 = -28829;

	t49 = ((x221%x222)<=(x223%x224));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 27U;
	uint16_t x226 = 795U;
	volatile int32_t x227 = -1;
	int64_t x228 = -1LL;
	int32_t t50 = -92717;

	t50 = ((x225%x226)<=(x227%x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x229 = 3274U;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = 41187182U;
	uint16_t x232 = 803U;
	static int32_t t51 = 459;

	t51 = ((x229%x230)<=(x231%x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x233 = INT8_MAX;
	static int8_t x234 = -26;
	static int16_t x235 = INT16_MAX;
	volatile int32_t t52 = 8;

	t52 = ((x233%x234)<=(x235%x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = UINT64_MAX;
	static int32_t x238 = -32678;
	int32_t x239 = 283;
	uint32_t x240 = 10U;
	int32_t t53 = -48245001;

	t53 = ((x237%x238)<=(x239%x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x242 = UINT64_MAX;
	int32_t x244 = -1;
	int32_t t54 = 135010;

	t54 = ((x241%x242)<=(x243%x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x245 = INT32_MAX;
	int16_t x247 = INT16_MAX;
	static int8_t x248 = INT8_MAX;
	int32_t t55 = -16;

	t55 = ((x245%x246)<=(x247%x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x254 = 27610U;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t t56 = 44870;

	t56 = ((x253%x254)<=(x255%x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x260 = 49;
	int32_t t57 = 16528345;

	t57 = ((x257%x258)<=(x259%x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = 14U;
	static uint8_t x263 = UINT8_MAX;
	int32_t t58 = 88708232;

	t58 = ((x261%x262)<=(x263%x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x265 = UINT16_MAX;
	static int8_t x267 = -1;
	int32_t x268 = INT32_MAX;
	volatile int32_t t59 = -426991369;

	t59 = ((x265%x266)<=(x267%x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = INT8_MIN;
	static int16_t x270 = 6;
	volatile uint8_t x272 = 26U;
	volatile int32_t t60 = 53295416;

	t60 = ((x269%x270)<=(x271%x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = INT8_MIN;
	volatile int32_t x275 = 3675274;
	volatile int32_t t61 = -186;

	t61 = ((x273%x274)<=(x275%x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = 975;
	int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t62 = 6407612;

	t62 = ((x277%x278)<=(x279%x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x282 = UINT16_MAX;
	volatile uint64_t x283 = UINT64_MAX;
	volatile int64_t x284 = INT64_MAX;
	volatile int32_t t63 = -890;

	t63 = ((x281%x282)<=(x283%x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x285 = UINT32_MAX;
	static int64_t x286 = INT64_MIN;
	volatile int32_t t64 = -22256;

	t64 = ((x285%x286)<=(x287%x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = INT32_MIN;
	volatile int64_t x290 = -1LL;
	int64_t x291 = INT64_MAX;
	uint64_t x292 = 842728519LLU;

	t65 = ((x289%x290)<=(x291%x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x293 = INT32_MIN;
	uint8_t x294 = 67U;
	int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t66 = -70252;

	t66 = ((x293%x294)<=(x295%x296));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	volatile int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;

	t67 = ((x297%x298)<=(x299%x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = -1;
	static uint8_t x302 = UINT8_MAX;
	uint64_t x304 = UINT64_MAX;

	t68 = ((x301%x302)<=(x303%x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x306 = 21184890228347351LL;
	int32_t x307 = -1;

	t69 = ((x305%x306)<=(x307%x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x309 = 0U;
	uint8_t x310 = UINT8_MAX;
	uint8_t x311 = 98U;
	uint64_t x312 = UINT64_MAX;
	static volatile int32_t t70 = 964715;

	t70 = ((x309%x310)<=(x311%x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x314 = 11U;
	volatile int32_t t71 = -66;

	t71 = ((x313%x314)<=(x315%x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x321 = 4831U;
	static volatile int16_t x322 = 1;
	static int32_t x323 = -351;
	int32_t t72 = -4081165;

	t72 = ((x321%x322)<=(x323%x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = -1LL;
	volatile int32_t t73 = 1704747;

	t73 = ((x325%x326)<=(x327%x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x329 = UINT32_MAX;
	volatile uint16_t x330 = 30231U;
	static volatile uint32_t x331 = 1088800U;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t74 = -371478;

	t74 = ((x329%x330)<=(x331%x332));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x334 = INT8_MAX;
	uint32_t x335 = 167311958U;
	uint64_t x336 = UINT64_MAX;

	t75 = ((x333%x334)<=(x335%x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x337 = -30;
	static volatile int32_t x338 = INT32_MIN;
	volatile uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MAX;
	volatile int32_t t76 = 4884;

	t76 = ((x337%x338)<=(x339%x340));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x341 = 865743225069LLU;
	static uint32_t x342 = 982866032U;
	uint8_t x343 = 8U;
	static volatile int16_t x344 = 18;

	t77 = ((x341%x342)<=(x343%x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MAX;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MAX;
	int32_t t78 = -63;

	t78 = ((x345%x346)<=(x347%x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x350 = 24U;
	int32_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t79 = 80964;

	t79 = ((x349%x350)<=(x351%x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x353 = UINT8_MAX;
	static uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 3U;
	volatile int32_t t80 = -243;

	t80 = ((x353%x354)<=(x355%x356));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x357 = UINT16_MAX;
	uint32_t x359 = UINT32_MAX;
	static uint32_t x360 = 8451U;
	int32_t t81 = 103;

	t81 = ((x357%x358)<=(x359%x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = 239LLU;
	int32_t x362 = -1;
	volatile int16_t x363 = INT16_MAX;
	int16_t x364 = -3;
	int32_t t82 = -257725;

	t82 = ((x361%x362)<=(x363%x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = -179;
	volatile int64_t x366 = 937008154879442168LL;
	static int64_t x367 = -178153375650LL;
	int16_t x368 = INT16_MAX;
	int32_t t83 = 3833;

	t83 = ((x365%x366)<=(x367%x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = 5U;
	static int64_t x370 = INT64_MIN;
	uint16_t x371 = 26565U;
	int8_t x372 = -1;
	int32_t t84 = 356311048;

	t84 = ((x369%x370)<=(x371%x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x374 = INT16_MAX;
	int32_t x375 = 23812;
	int16_t x376 = INT16_MIN;
	volatile int32_t t85 = -124966753;

	t85 = ((x373%x374)<=(x375%x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x380 = INT8_MAX;
	volatile int32_t t86 = -23;

	t86 = ((x377%x378)<=(x379%x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int16_t x382 = -196;
	static uint16_t x383 = UINT16_MAX;
	int32_t t87 = 131;

	t87 = ((x381%x382)<=(x383%x384));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = -456165232LL;
	uint16_t x387 = 2113U;
	volatile int32_t t88 = -1063562786;

	t88 = ((x385%x386)<=(x387%x388));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x389 = -2578;
	static volatile int32_t x390 = -1;
	int64_t x391 = INT64_MAX;
	int32_t t89 = 235785;

	t89 = ((x389%x390)<=(x391%x392));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = 1430U;
	int32_t x395 = INT32_MIN;
	int16_t x396 = 30;
	volatile int32_t t90 = 3432867;

	t90 = ((x393%x394)<=(x395%x396));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = 70U;
	uint16_t x398 = UINT16_MAX;
	uint32_t x399 = UINT32_MAX;
	volatile int32_t t91 = -678;

	t91 = ((x397%x398)<=(x399%x400));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x401 = INT64_MIN;
	static uint32_t x402 = UINT32_MAX;
	uint32_t x403 = 361288859U;
	volatile int32_t t92 = 18962;

	t92 = ((x401%x402)<=(x403%x404));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x405 = -3;
	int8_t x406 = 1;
	static int32_t t93 = 1;

	t93 = ((x405%x406)<=(x407%x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x409 = UINT8_MAX;
	int8_t x410 = -1;
	static uint32_t x411 = 706U;
	volatile uint32_t x412 = 884868U;
	int32_t t94 = 1605;

	t94 = ((x409%x410)<=(x411%x412));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x414 = INT64_MIN;
	int16_t x415 = -1;
	int32_t x416 = INT32_MIN;
	int32_t t95 = 92;

	t95 = ((x413%x414)<=(x415%x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x417 = UINT8_MAX;
	int8_t x418 = 8;
	volatile uint8_t x419 = 3U;
	volatile int8_t x420 = -10;

	t96 = ((x417%x418)<=(x419%x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x421 = 4LLU;
	volatile uint8_t x422 = 6U;
	static uint64_t x423 = UINT64_MAX;
	static uint32_t x424 = 159U;
	volatile int32_t t97 = -1023;

	t97 = ((x421%x422)<=(x423%x424));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x425 = -232828864LL;
	uint32_t x426 = 869137U;
	volatile int32_t x427 = -1;
	uint64_t x428 = UINT64_MAX;

	t98 = ((x425%x426)<=(x427%x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x429 = -1255;
	uint64_t x430 = 267028903370447270LLU;
	int32_t x431 = -1;
	int8_t x432 = INT8_MAX;
	int32_t t99 = -210560;

	t99 = ((x429%x430)<=(x431%x432));

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

