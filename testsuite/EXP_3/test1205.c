#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 40909067390LLU;
int64_t x7 = -1LL;
int16_t x10 = INT16_MAX;
volatile int32_t x16 = INT32_MAX;
int32_t x21 = -1;
volatile uint8_t x23 = 1U;
int16_t x28 = INT16_MIN;
int16_t x56 = -1;
int64_t x58 = -1LL;
int32_t x60 = INT32_MIN;
static volatile int16_t x64 = INT16_MAX;
int32_t x65 = INT32_MIN;
volatile int8_t x68 = 0;
int32_t x69 = INT32_MAX;
int64_t x72 = -2849507188388494833LL;
static int8_t x74 = 4;
int8_t x78 = INT8_MIN;
static uint32_t x84 = 28521052U;
int8_t x86 = INT8_MAX;
int32_t x90 = INT32_MIN;
volatile int64_t x93 = INT64_MIN;
volatile uint64_t x96 = UINT64_MAX;
int32_t t23 = 2382;
int16_t x98 = 1458;
volatile int16_t x108 = -1;
volatile uint8_t x110 = 1U;
volatile uint8_t x111 = 0U;
uint64_t x117 = 817493577LLU;
static int16_t x120 = 2977;
volatile int32_t t28 = -111;
int64_t x126 = 85157105073LL;
volatile int64_t x128 = -215676LL;
int16_t x132 = INT16_MAX;
int64_t x139 = INT64_MIN;
int32_t t33 = -6373291;
int64_t x142 = 17562009791LL;
int8_t x148 = INT8_MAX;
static volatile int8_t x149 = INT8_MAX;
int64_t x150 = INT64_MAX;
static volatile int32_t t36 = -21461533;
static uint64_t x157 = UINT64_MAX;
volatile uint16_t x162 = UINT16_MAX;
volatile int16_t x164 = INT16_MIN;
static volatile uint8_t x167 = 127U;
uint8_t x169 = 57U;
volatile uint64_t x172 = UINT64_MAX;
static int32_t t41 = 256710521;
static uint16_t x175 = 5U;
uint64_t x176 = UINT64_MAX;
volatile uint16_t x177 = 2U;
int64_t x186 = -1LL;
static int32_t t45 = 0;
int32_t t46 = 800;
int8_t x196 = INT8_MIN;
uint16_t x220 = 3211U;
int8_t x222 = INT8_MAX;
int8_t x225 = -1;
uint8_t x227 = 1U;
uint8_t x228 = 4U;
uint64_t x242 = 938902930190LLU;
uint16_t x244 = 419U;
static int32_t x249 = -1;
int64_t x253 = -1LL;
static int64_t x256 = INT64_MAX;
uint16_t x259 = 784U;
int8_t x263 = INT8_MAX;
int32_t t62 = 449778;
int8_t x271 = INT8_MIN;
volatile int32_t t64 = -3;
int32_t t66 = 1;
volatile int32_t t67 = -15981;
int32_t x294 = -584551856;
static int16_t x306 = INT16_MIN;
int8_t x307 = -7;
int16_t x309 = INT16_MIN;
uint32_t x310 = 5084U;
int64_t x313 = 2105088310799904LL;
static volatile int32_t t73 = 114547;
int64_t x339 = INT64_MAX;
static int32_t t75 = -144157267;
volatile uint16_t x341 = 62U;
static uint32_t x343 = 1640U;
int16_t x344 = INT16_MAX;
static volatile int32_t t77 = 36;
int8_t x352 = 10;
volatile uint8_t x354 = UINT8_MAX;
static int8_t x356 = INT8_MIN;
uint64_t x360 = 363LLU;
int32_t x362 = -13808;
static volatile int32_t t82 = 425508;
int8_t x369 = -1;
int16_t x381 = INT16_MIN;
volatile int8_t x383 = INT8_MAX;
static int16_t x384 = INT16_MIN;
uint32_t x388 = 46000U;
volatile int16_t x393 = 25;
static int64_t x396 = INT64_MIN;
uint8_t x399 = 23U;
int16_t x403 = INT16_MIN;
uint8_t x432 = 25U;
int64_t x436 = INT64_MAX;
volatile uint8_t x437 = 11U;
int16_t x438 = -1;
volatile int32_t t96 = -57;
static int32_t x442 = 6;
int64_t x443 = -1LL;
int64_t x448 = -1LL;


void f0(void) {
	uint64_t x1 = 7499503237LLU;
	volatile int8_t x2 = -5;
	static int8_t x3 = -1;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 170798;

	t0 = ((x1-x2)<(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	int64_t x8 = INT64_MAX;
	int32_t t1 = 7589;

	t1 = ((x5-x6)<(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = 24109257;
	volatile int32_t t2 = -1;

	t2 = ((x9-x10)<(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = 40236381;
	int32_t x15 = 156;
	int32_t t3 = 6085594;

	t3 = ((x13-x14)<(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static volatile int64_t x18 = INT64_MIN;
	static int64_t x19 = -1LL;
	static volatile int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -24543354;

	t4 = ((x17-x18)<(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x22 = UINT8_MAX;
	int32_t x24 = 0;
	static int32_t t5 = 551464559;

	t5 = ((x21-x22)<(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	volatile int32_t x26 = 0;
	int32_t x27 = INT32_MIN;
	volatile int32_t t6 = 0;

	t6 = ((x25-x26)<(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	uint8_t x30 = UINT8_MAX;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t x32 = -1;
	volatile int32_t t7 = 198985869;

	t7 = ((x29-x30)<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 27214;
	int64_t x34 = -967666LL;
	int32_t x35 = -1;
	volatile int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -47;

	t8 = ((x33-x34)<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 14164;

	t9 = ((x37-x38)<(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	static int16_t x43 = 7;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 1001999;

	t10 = ((x41-x42)<(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 279U;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 1145494;

	t11 = ((x45-x46)<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	static volatile int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	int32_t x52 = -7964;
	int32_t t12 = 1;

	t12 = ((x49-x50)<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile uint64_t x54 = 3279786434896LLU;
	static volatile int64_t x55 = -2644832888247LL;
	int32_t t13 = 174940;

	t13 = ((x53-x54)<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int64_t x59 = 30782816311LL;
	volatile int32_t t14 = -52;

	t14 = ((x57-x58)<(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int32_t x62 = -49854;
	static int8_t x63 = 38;
	volatile int32_t t15 = -3839;

	t15 = ((x61-x62)<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 30797867459104528LLU;
	volatile int16_t x67 = INT16_MIN;
	volatile int32_t t16 = -1826;

	t16 = ((x65-x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x70 = 2420997U;
	int32_t x71 = INT32_MAX;
	static int32_t t17 = -102;

	t17 = ((x69-x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 607071480606647LLU;
	int8_t x75 = -1;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 7845475;

	t18 = ((x73-x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 762U;
	static int64_t x79 = INT64_MAX;
	volatile int64_t x80 = 1411813161563921862LL;
	volatile int32_t t19 = -4;

	t19 = ((x77-x78)<(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	int32_t x82 = 705685;
	uint64_t x83 = UINT64_MAX;
	static volatile int32_t t20 = 1159;

	t20 = ((x81-x82)<(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	int8_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = 7517;

	t21 = ((x85-x86)<(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	volatile int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -259453;

	t22 = ((x89-x90)<(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	int64_t x95 = 504LL;

	t23 = ((x93-x94)<(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 10988U;
	volatile int16_t x99 = INT16_MIN;
	int16_t x100 = 254;
	int32_t t24 = 7359846;

	t24 = ((x97-x98)<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int64_t x102 = INT64_MAX;
	uint8_t x103 = 45U;
	volatile uint64_t x104 = UINT64_MAX;
	int32_t t25 = -201465;

	t25 = ((x101-x102)<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 1817;
	volatile int32_t x106 = INT32_MAX;
	static volatile int64_t x107 = -1LL;
	volatile int32_t t26 = 4;

	t26 = ((x105-x106)<(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -208295LL;
	uint8_t x112 = 78U;
	volatile int32_t t27 = 468387;

	t27 = ((x109-x110)<(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x118 = INT64_MIN;
	volatile uint32_t x119 = 11125U;

	t28 = ((x117-x118)<(x119==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	static int16_t x122 = INT16_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	volatile uint16_t x124 = 0U;
	volatile int32_t t29 = 1250402;

	t29 = ((x121-x122)<(x123==x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x127 = 55U;
	static volatile int32_t t30 = 3;

	t30 = ((x125-x126)<(x127==x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x129 = -1;
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = 3LL;
	static volatile int32_t t31 = -1;

	t31 = ((x129-x130)<(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = INT64_MIN;
	int64_t x134 = -207781LL;
	int8_t x135 = INT8_MAX;
	static uint16_t x136 = 700U;
	int32_t t32 = -124127;

	t32 = ((x133-x134)<(x135==x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = -43;
	uint64_t x138 = 508615764LLU;
	uint64_t x140 = UINT64_MAX;

	t33 = ((x137-x138)<(x139==x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = 9;
	static volatile int8_t x143 = 5;
	int64_t x144 = INT64_MIN;
	int32_t t34 = -2447281;

	t34 = ((x141-x142)<(x143==x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x145 = INT8_MAX;
	static int16_t x146 = INT16_MAX;
	static volatile int64_t x147 = -80407152LL;
	volatile int32_t t35 = -29;

	t35 = ((x145-x146)<(x147==x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x151 = 116U;
	int32_t x152 = -1;

	t36 = ((x149-x150)<(x151==x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -9688;
	volatile int16_t x154 = -1;
	static uint32_t x155 = 48037310U;
	int64_t x156 = INT64_MIN;
	volatile int32_t t37 = 457524121;

	t37 = ((x153-x154)<(x155==x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x158 = 3452744LL;
	int8_t x159 = -3;
	int64_t x160 = -1LL;
	volatile int32_t t38 = 353;

	t38 = ((x157-x158)<(x159==x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MIN;
	int32_t x163 = -7475;
	static volatile int32_t t39 = -104016224;

	t39 = ((x161-x162)<(x163==x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = -1;
	uint16_t x166 = 2761U;
	int16_t x168 = -5441;
	int32_t t40 = 411737;

	t40 = ((x165-x166)<(x167==x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x170 = INT8_MIN;
	volatile int16_t x171 = INT16_MIN;

	t41 = ((x169-x170)<(x171==x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = INT16_MIN;
	uint64_t x174 = 853459LLU;
	int32_t t42 = 1637;

	t42 = ((x173-x174)<(x175==x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	volatile int32_t x180 = -24;
	volatile int32_t t43 = 5500234;

	t43 = ((x177-x178)<(x179==x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = 6;
	int32_t x183 = -24;
	uint8_t x184 = 6U;
	int32_t t44 = 1183945;

	t44 = ((x181-x182)<(x183==x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x185 = 7409506488411LLU;
	volatile uint32_t x187 = 4U;
	static int64_t x188 = -1LL;

	t45 = ((x185-x186)<(x187==x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = INT8_MIN;
	volatile int64_t x190 = -194LL;
	static int64_t x191 = -1LL;
	volatile uint8_t x192 = UINT8_MAX;

	t46 = ((x189-x190)<(x191==x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -287685378136689784LL;
	static uint8_t x194 = 0U;
	int32_t x195 = 1;
	int32_t t47 = 3130;

	t47 = ((x193-x194)<(x195==x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x197 = UINT8_MAX;
	uint64_t x198 = 2568612689509938LLU;
	static int16_t x199 = -1;
	int64_t x200 = -572732LL;
	int32_t t48 = 73;

	t48 = ((x197-x198)<(x199==x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x209 = -698LL;
	static int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	volatile int32_t t49 = 285673269;

	t49 = ((x209-x210)<(x211==x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x213 = 15U;
	volatile uint64_t x214 = 504LLU;
	int8_t x215 = INT8_MAX;
	volatile int16_t x216 = 86;
	static int32_t t50 = -1;

	t50 = ((x213-x214)<(x215==x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MAX;
	uint32_t x218 = 38876898U;
	int64_t x219 = INT64_MIN;
	int32_t t51 = 547965165;

	t51 = ((x217-x218)<(x219==x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -1;
	int64_t x223 = INT64_MAX;
	static volatile uint64_t x224 = 45007128442404133LLU;
	volatile int32_t t52 = 2077;

	t52 = ((x221-x222)<(x223==x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x226 = 11790;
	static int32_t t53 = 3972;

	t53 = ((x225-x226)<(x227==x228));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 1515686115U;
	uint8_t x230 = 0U;
	int16_t x231 = INT16_MAX;
	int16_t x232 = -1;
	volatile int32_t t54 = 98416160;

	t54 = ((x229-x230)<(x231==x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = 14U;
	volatile uint16_t x234 = UINT16_MAX;
	int32_t x235 = 374;
	int8_t x236 = 3;
	volatile int32_t t55 = -117969;

	t55 = ((x233-x234)<(x235==x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x237 = UINT8_MAX;
	int8_t x238 = -5;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = INT64_MAX;
	int32_t t56 = 0;

	t56 = ((x237-x238)<(x239==x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = 1;
	uint64_t x243 = 34127LLU;
	volatile int32_t t57 = 524;

	t57 = ((x241-x242)<(x243==x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x250 = INT64_MIN;
	int64_t x251 = 3299744191134LL;
	int64_t x252 = INT64_MIN;
	volatile int32_t t58 = 12;

	t58 = ((x249-x250)<(x251==x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t t59 = 634697;

	t59 = ((x253-x254)<(x255==x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x257 = 11630;
	int8_t x258 = 52;
	int32_t x260 = INT32_MIN;
	volatile int32_t t60 = -1570389;

	t60 = ((x257-x258)<(x259==x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x261 = INT16_MIN;
	volatile int64_t x262 = 0LL;
	static uint8_t x264 = 11U;
	volatile int32_t t61 = -60;

	t61 = ((x261-x262)<(x263==x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x265 = 0U;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	int16_t x268 = INT16_MIN;

	t62 = ((x265-x266)<(x267==x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	int64_t x272 = INT64_MAX;
	volatile int32_t t63 = -2304033;

	t63 = ((x269-x270)<(x271==x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MAX;
	static uint64_t x274 = UINT64_MAX;
	int8_t x275 = 14;
	static volatile uint8_t x276 = 0U;

	t64 = ((x273-x274)<(x275==x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 94U;
	volatile uint8_t x282 = UINT8_MAX;
	static volatile int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t65 = 132629;

	t65 = ((x281-x282)<(x283==x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MAX;
	uint8_t x286 = 28U;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = UINT8_MAX;

	t66 = ((x285-x286)<(x287==x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x289 = 314975041028LLU;
	static uint8_t x290 = UINT8_MAX;
	volatile int16_t x291 = INT16_MIN;
	static int8_t x292 = INT8_MIN;

	t67 = ((x289-x290)<(x291==x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = INT8_MIN;
	int16_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t68 = 86541;

	t68 = ((x293-x294)<(x295==x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x305 = UINT64_MAX;
	static int16_t x308 = INT16_MIN;
	static int32_t t69 = -465085;

	t69 = ((x305-x306)<(x307==x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x311 = INT64_MIN;
	volatile uint8_t x312 = UINT8_MAX;
	volatile int32_t t70 = -81124191;

	t70 = ((x309-x310)<(x311==x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x314 = 6975U;
	int8_t x315 = -9;
	int8_t x316 = INT8_MIN;
	int32_t t71 = -49025;

	t71 = ((x313-x314)<(x315==x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x325 = -1;
	int64_t x326 = 1225LL;
	static int8_t x327 = 1;
	int8_t x328 = INT8_MIN;
	int32_t t72 = 1;

	t72 = ((x325-x326)<(x327==x328));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x329 = 26U;
	int8_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;

	t73 = ((x329-x330)<(x331==x332));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x333 = 72977126U;
	int64_t x334 = -42846829219LL;
	int8_t x335 = INT8_MAX;
	static uint64_t x336 = UINT64_MAX;
	volatile int32_t t74 = -19058;

	t74 = ((x333-x334)<(x335==x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = INT8_MIN;
	volatile uint16_t x338 = UINT16_MAX;
	int32_t x340 = INT32_MAX;

	t75 = ((x337-x338)<(x339==x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x342 = INT16_MIN;
	volatile int32_t t76 = -15;

	t76 = ((x341-x342)<(x343==x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x345 = 3397U;
	volatile int64_t x346 = -16713159LL;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;

	t77 = ((x345-x346)<(x347==x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x349 = 29U;
	static uint16_t x350 = 131U;
	static int64_t x351 = INT64_MIN;
	int32_t t78 = -16602640;

	t78 = ((x349-x350)<(x351==x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MAX;
	static int64_t x355 = -1LL;
	volatile int32_t t79 = -34305;

	t79 = ((x353-x354)<(x355==x356));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MIN;
	static uint64_t x358 = 899LLU;
	static int16_t x359 = -1;
	volatile int32_t t80 = 235773743;

	t80 = ((x357-x358)<(x359==x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = 2749U;
	uint16_t x363 = 1545U;
	volatile int64_t x364 = -853LL;
	volatile int32_t t81 = -1253;

	t81 = ((x361-x362)<(x363==x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	uint64_t x367 = 34263467LLU;
	int8_t x368 = INT8_MIN;

	t82 = ((x365-x366)<(x367==x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x370 = INT32_MIN;
	static volatile int64_t x371 = -1LL;
	uint8_t x372 = UINT8_MAX;
	int32_t t83 = -948718;

	t83 = ((x369-x370)<(x371==x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -2127784435709626325LL;
	uint64_t x379 = 52754LLU;
	volatile int64_t x380 = 2LL;
	int32_t t84 = 49;

	t84 = ((x377-x378)<(x379==x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x382 = UINT64_MAX;
	int32_t t85 = 3165;

	t85 = ((x381-x382)<(x383==x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x385 = -1LL;
	int64_t x386 = -1LL;
	int64_t x387 = -1543358424632427LL;
	volatile int32_t t86 = -572;

	t86 = ((x385-x386)<(x387==x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x389 = UINT32_MAX;
	static uint64_t x390 = 37758558LLU;
	volatile int8_t x391 = 57;
	static int16_t x392 = INT16_MAX;
	volatile int32_t t87 = -125;

	t87 = ((x389-x390)<(x391==x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x394 = UINT8_MAX;
	int64_t x395 = -30LL;
	int32_t t88 = -495643;

	t88 = ((x393-x394)<(x395==x396));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x397 = -22;
	volatile int8_t x398 = INT8_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t89 = -1;

	t89 = ((x397-x398)<(x399==x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = -48;
	static int8_t x402 = INT8_MAX;
	int64_t x404 = INT64_MAX;
	volatile int32_t t90 = -17569;

	t90 = ((x401-x402)<(x403==x404));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x405 = 0U;
	int32_t x406 = -4;
	uint64_t x407 = 207976861021543LLU;
	int64_t x408 = INT64_MIN;
	int32_t t91 = -1236;

	t91 = ((x405-x406)<(x407==x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = 37523331;
	volatile uint64_t x410 = 191096030LLU;
	uint32_t x411 = 47545416U;
	int8_t x412 = INT8_MIN;
	static int32_t t92 = -71075132;

	t92 = ((x409-x410)<(x411==x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x421 = INT8_MIN;
	static int8_t x422 = 27;
	static int32_t x423 = -28178128;
	int32_t x424 = INT32_MAX;
	volatile int32_t t93 = -1;

	t93 = ((x421-x422)<(x423==x424));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x429 = -13;
	int8_t x430 = INT8_MIN;
	int64_t x431 = 449718852949810LL;
	int32_t t94 = -746742;

	t94 = ((x429-x430)<(x431==x432));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = -1;
	uint8_t x434 = UINT8_MAX;
	static int64_t x435 = -50328264599460553LL;
	int32_t t95 = -94287298;

	t95 = ((x433-x434)<(x435==x436));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x439 = -13270;
	static int16_t x440 = INT16_MAX;

	t96 = ((x437-x438)<(x439==x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x441 = 1570494U;
	static volatile int8_t x444 = 5;
	volatile int32_t t97 = 10533229;

	t97 = ((x441-x442)<(x443==x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = INT16_MIN;
	uint32_t x447 = 861U;
	int32_t t98 = -518884;

	t98 = ((x445-x446)<(x447==x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x449 = INT8_MAX;
	uint64_t x450 = UINT64_MAX;
	uint16_t x451 = 1575U;
	int8_t x452 = -1;
	static volatile int32_t t99 = 427639;

	t99 = ((x449-x450)<(x451==x452));

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

