#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
static volatile int16_t x20 = -11850;
uint16_t x26 = 6758U;
int64_t x27 = -71197061LL;
volatile int64_t x33 = INT64_MIN;
int32_t x36 = INT32_MIN;
int64_t x44 = -2600721160490LL;
uint32_t x51 = UINT32_MAX;
int8_t x61 = INT8_MIN;
int8_t x66 = INT8_MAX;
int16_t x67 = 1;
int16_t x78 = -1;
static int32_t t17 = 15496;
static int16_t x84 = -1;
static volatile int64_t x85 = -1LL;
int32_t x86 = -6345;
uint16_t x88 = 1372U;
int64_t x91 = INT64_MIN;
uint16_t x94 = 4U;
volatile int32_t t26 = -16043917;
static volatile int32_t t27 = -122;
int32_t x121 = -1;
int32_t x124 = 1;
int16_t x125 = INT16_MIN;
int32_t x126 = INT32_MIN;
int16_t x130 = -1;
int16_t x136 = 2;
volatile uint64_t x138 = 32377588LLU;
volatile uint64_t x140 = UINT64_MAX;
int64_t x141 = -1LL;
int64_t x142 = INT64_MAX;
static int32_t x143 = INT32_MIN;
volatile int32_t t34 = 40597175;
int32_t x151 = -107072;
uint16_t x152 = 79U;
int32_t t35 = 5700;
uint64_t x167 = 273277341009LLU;
int32_t t39 = 1293552;
static int8_t x169 = -1;
int32_t x175 = 685973123;
int32_t x178 = INT32_MIN;
volatile uint32_t x195 = 439667525U;
volatile uint32_t x197 = 4U;
static uint64_t x198 = 3168265912385LLU;
int16_t x200 = 3;
int16_t x201 = -1;
int64_t x219 = -1LL;
uint16_t x231 = 55U;
uint16_t x241 = 0U;
static volatile uint8_t x252 = UINT8_MAX;
uint64_t x256 = 57714350LLU;
static int32_t t58 = 648;
int64_t x261 = INT64_MAX;
uint64_t x268 = 23443778403768LLU;
int32_t t61 = 194863;
uint64_t x272 = 149039261LLU;
int32_t t62 = 1588447;
int64_t x280 = INT64_MIN;
int32_t t64 = 0;
uint64_t x282 = UINT64_MAX;
int32_t x292 = -1427440;
uint64_t x295 = 1313197LLU;
volatile int32_t t68 = -577137255;
uint16_t x304 = UINT16_MAX;
volatile uint16_t x306 = 4494U;
volatile int8_t x308 = INT8_MIN;
int32_t x309 = INT32_MIN;
int8_t x315 = INT8_MAX;
volatile int16_t x316 = 31;
static uint32_t x319 = 191U;
volatile int32_t t73 = 11519;
volatile int16_t x332 = -3052;
static volatile int16_t x337 = INT16_MIN;
uint64_t x345 = 18565943290LLU;
int16_t x347 = 149;
int16_t x352 = INT16_MIN;
static volatile int64_t x359 = -47633LL;
int8_t x365 = -13;
static int32_t x370 = 2926;
volatile uint16_t x374 = UINT16_MAX;
static uint16_t x377 = 3U;
volatile int64_t x379 = 34118401822260533LL;
volatile uint32_t x380 = 3404810U;
uint32_t x384 = UINT32_MAX;
int16_t x389 = -1;
int8_t x397 = 51;
int16_t x402 = INT16_MIN;
static volatile int32_t t94 = -708;
int16_t x410 = INT16_MAX;
static int64_t x411 = -8347166846140LL;
int32_t t97 = 516427395;
static volatile uint16_t x426 = 0U;
int8_t x427 = INT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	static int64_t x3 = INT64_MAX;
	int64_t x4 = -1LL;
	volatile int32_t t0 = -6;

	t0 = ((x1^x2)<=(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint32_t x6 = UINT32_MAX;
	int8_t x7 = INT8_MIN;
	int32_t x8 = -1;
	int32_t t1 = 77639;

	t1 = ((x5^x6)<=(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 254;
	int64_t x11 = 1433004133465838161LL;
	volatile int8_t x12 = -1;
	volatile int32_t t2 = -16;

	t2 = ((x9^x10)<=(x11+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 23U;
	static int64_t x14 = -2LL;
	uint16_t x15 = 71U;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -3;

	t3 = ((x13^x14)<=(x15+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -4047;
	static volatile uint16_t x18 = 24U;
	volatile uint8_t x19 = UINT8_MAX;
	static int32_t t4 = 303090;

	t4 = ((x17^x18)<=(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 1;
	int64_t x22 = INT64_MAX;
	int32_t x23 = -4156916;
	int16_t x24 = -1;
	int32_t t5 = 1;

	t5 = ((x21^x22)<=(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 45U;
	volatile uint8_t x28 = 40U;
	volatile int32_t t6 = -6126;

	t6 = ((x25^x26)<=(x27+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MAX;
	uint64_t x31 = 522929591LLU;
	volatile int64_t x32 = INT64_MAX;
	volatile int32_t t7 = 98824038;

	t7 = ((x29^x30)<=(x31+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	int16_t x35 = 9;
	int32_t t8 = -2565;

	t8 = ((x33^x34)<=(x35+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	static uint8_t x38 = 5U;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -124069880;

	t9 = ((x37^x38)<=(x39+x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint16_t x42 = 116U;
	int8_t x43 = 6;
	int32_t t10 = 56;

	t10 = ((x41^x42)<=(x43+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	uint8_t x46 = 3U;
	int16_t x47 = 34;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = 57032240;

	t11 = ((x45^x46)<=(x47+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MIN;
	uint32_t x52 = UINT32_MAX;
	int32_t t12 = 90885894;

	t12 = ((x49^x50)<=(x51+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	static volatile int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	static int32_t x56 = 2034119;
	static volatile int32_t t13 = -305115;

	t13 = ((x53^x54)<=(x55+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 1500097LLU;
	int32_t x58 = INT32_MAX;
	int16_t x59 = -4;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -739;

	t14 = ((x57^x58)<=(x59+x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x62 = INT16_MAX;
	static volatile uint16_t x63 = 38U;
	static int32_t x64 = 127076296;
	volatile int32_t t15 = 25590;

	t15 = ((x61^x62)<=(x63+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 1;

	t16 = ((x65^x66)<=(x67+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = UINT32_MAX;
	int16_t x79 = INT16_MIN;
	int64_t x80 = -6289LL;

	t17 = ((x77^x78)<=(x79+x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = 2924395;
	uint16_t x82 = 1165U;
	static uint32_t x83 = 387U;
	int32_t t18 = -41;

	t18 = ((x81^x82)<=(x83+x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x87 = 1590793873LLU;
	static int32_t t19 = -124;

	t19 = ((x85^x86)<=(x87+x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 0;
	uint16_t x90 = 40U;
	uint64_t x92 = 0LLU;
	int32_t t20 = -102;

	t20 = ((x89^x90)<=(x91+x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = 14467;
	int16_t x95 = -815;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = 2789095;

	t21 = ((x93^x94)<=(x95+x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = 767;
	int32_t x99 = INT32_MIN;
	int64_t x100 = INT64_MAX;
	volatile int32_t t22 = 30901;

	t22 = ((x97^x98)<=(x99+x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	volatile uint32_t x102 = UINT32_MAX;
	int16_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	static int32_t t23 = 60267;

	t23 = ((x101^x102)<=(x103+x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	static int16_t x106 = -3;
	int8_t x107 = INT8_MAX;
	volatile uint32_t x108 = UINT32_MAX;
	volatile int32_t t24 = -11;

	t24 = ((x105^x106)<=(x107+x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = 2;
	volatile int32_t x110 = INT32_MIN;
	uint64_t x111 = 17950604LLU;
	uint8_t x112 = UINT8_MAX;
	static volatile int32_t t25 = 29706064;

	t25 = ((x109^x110)<=(x111+x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x113 = 207249372275500121LLU;
	static int8_t x114 = -1;
	volatile uint16_t x115 = 3096U;
	volatile uint32_t x116 = 3U;

	t26 = ((x113^x114)<=(x115+x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 57LLU;
	int64_t x118 = -10LL;
	int16_t x119 = -12701;
	static int8_t x120 = -1;

	t27 = ((x117^x118)<=(x119+x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MIN;
	int32_t t28 = -7;

	t28 = ((x121^x122)<=(x123+x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 198U;
	int32_t t29 = 11445925;

	t29 = ((x125^x126)<=(x127+x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x129 = UINT64_MAX;
	uint32_t x131 = 2U;
	volatile int64_t x132 = -1LL;
	volatile int32_t t30 = 18501108;

	t30 = ((x129^x130)<=(x131+x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = -557;
	volatile uint16_t x134 = 2U;
	uint16_t x135 = 170U;
	int32_t t31 = -4980;

	t31 = ((x133^x134)<=(x135+x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 7;
	int32_t x139 = INT32_MIN;
	volatile int32_t t32 = 0;

	t32 = ((x137^x138)<=(x139+x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x144 = INT8_MAX;
	static int32_t t33 = 113059;

	t33 = ((x141^x142)<=(x143+x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MIN;
	static int32_t x147 = 0;
	static int64_t x148 = 13LL;

	t34 = ((x145^x146)<=(x147+x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MIN;

	t35 = ((x149^x150)<=(x151+x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 25409U;
	uint32_t x154 = UINT32_MAX;
	int8_t x155 = -1;
	static int8_t x156 = 3;
	volatile int32_t t36 = 1;

	t36 = ((x153^x154)<=(x155+x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -29498LL;
	static int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = 4302936LLU;
	volatile int32_t t37 = -868385;

	t37 = ((x157^x158)<=(x159+x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x161 = UINT8_MAX;
	uint8_t x162 = 16U;
	int16_t x163 = -1;
	static volatile int64_t x164 = 29118888LL;
	static volatile int32_t t38 = 468030488;

	t38 = ((x161^x162)<=(x163+x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x165 = -47434359194LL;
	int64_t x166 = -1LL;
	uint64_t x168 = UINT64_MAX;

	t39 = ((x165^x166)<=(x167+x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x170 = 5555698307013903814LLU;
	int16_t x171 = -5759;
	volatile uint32_t x172 = 52U;
	static volatile int32_t t40 = -980877564;

	t40 = ((x169^x170)<=(x171+x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = 606U;
	int64_t x174 = 132941611LL;
	int16_t x176 = -1;
	int32_t t41 = 83;

	t41 = ((x173^x174)<=(x175+x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x177 = 724441LL;
	uint8_t x179 = 8U;
	static int64_t x180 = INT64_MIN;
	static volatile int32_t t42 = -3390;

	t42 = ((x177^x178)<=(x179+x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	static volatile uint8_t x182 = 34U;
	volatile int16_t x183 = INT16_MIN;
	volatile uint16_t x184 = 3U;
	volatile int32_t t43 = -68121486;

	t43 = ((x181^x182)<=(x183+x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x185 = 1U;
	uint32_t x186 = UINT32_MAX;
	volatile int32_t x187 = INT32_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile int32_t t44 = -4;

	t44 = ((x185^x186)<=(x187+x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x189 = INT64_MIN;
	static int16_t x190 = -590;
	int32_t x191 = INT32_MIN;
	volatile uint64_t x192 = 28544327668306195LLU;
	static int32_t t45 = 2;

	t45 = ((x189^x190)<=(x191+x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x193 = 11U;
	uint16_t x194 = 22771U;
	int16_t x196 = -7;
	volatile int32_t t46 = 65;

	t46 = ((x193^x194)<=(x195+x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x199 = 3044;
	int32_t t47 = -42;

	t47 = ((x197^x198)<=(x199+x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x202 = INT32_MAX;
	volatile int64_t x203 = -1LL;
	static volatile uint32_t x204 = 42850858U;
	int32_t t48 = 2686;

	t48 = ((x201^x202)<=(x203+x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x209 = 0;
	int8_t x210 = INT8_MIN;
	volatile int16_t x211 = -9339;
	uint64_t x212 = 87127125LLU;
	volatile int32_t t49 = 4;

	t49 = ((x209^x210)<=(x211+x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -15;
	int32_t x218 = INT32_MAX;
	static volatile int8_t x220 = INT8_MIN;
	static volatile int32_t t50 = 1;

	t50 = ((x217^x218)<=(x219+x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x221 = INT16_MAX;
	static uint8_t x222 = 124U;
	static uint16_t x223 = 1709U;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t51 = -57;

	t51 = ((x221^x222)<=(x223+x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x225 = -408037881;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = 1823345285LLU;
	volatile int32_t t52 = 760;

	t52 = ((x225^x226)<=(x227+x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 730417U;
	volatile int16_t x230 = INT16_MAX;
	static int32_t x232 = INT32_MIN;
	static int32_t t53 = -6070;

	t53 = ((x229^x230)<=(x231+x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = 417U;
	uint64_t x236 = 9916LLU;
	volatile int32_t t54 = 803;

	t54 = ((x233^x234)<=(x235+x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x237 = 118261LLU;
	uint16_t x238 = UINT16_MAX;
	uint16_t x239 = 1U;
	static uint64_t x240 = 28729000148474LLU;
	volatile int32_t t55 = 4478;

	t55 = ((x237^x238)<=(x239+x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x242 = INT32_MAX;
	uint64_t x243 = UINT64_MAX;
	uint8_t x244 = 1U;
	int32_t t56 = -4113813;

	t56 = ((x241^x242)<=(x243+x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = 13U;
	volatile int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	volatile int32_t t57 = 627;

	t57 = ((x249^x250)<=(x251+x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 2219019LLU;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = UINT8_MAX;

	t58 = ((x253^x254)<=(x255+x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x257 = -1;
	int64_t x258 = INT64_MIN;
	volatile int16_t x259 = 1501;
	int8_t x260 = 0;
	volatile int32_t t59 = 252;

	t59 = ((x257^x258)<=(x259+x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x262 = 156208750U;
	int64_t x263 = 5358730683724LL;
	uint64_t x264 = 877LLU;
	volatile int32_t t60 = 16412;

	t60 = ((x261^x262)<=(x263+x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = -1;
	static int16_t x266 = INT16_MIN;
	int8_t x267 = 7;

	t61 = ((x265^x266)<=(x267+x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x269 = 267272596U;
	volatile int8_t x270 = 63;
	int8_t x271 = INT8_MIN;

	t62 = ((x269^x270)<=(x271+x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = -1LL;
	int32_t x274 = INT32_MIN;
	uint16_t x275 = UINT16_MAX;
	uint8_t x276 = 32U;
	volatile int32_t t63 = 3102391;

	t63 = ((x273^x274)<=(x275+x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = 7;
	uint8_t x278 = 0U;
	static uint16_t x279 = UINT16_MAX;

	t64 = ((x277^x278)<=(x279+x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x281 = UINT32_MAX;
	uint32_t x283 = 99361U;
	int8_t x284 = INT8_MAX;
	volatile int32_t t65 = -1;

	t65 = ((x281^x282)<=(x283+x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x289 = -7035336;
	int8_t x290 = -1;
	int8_t x291 = INT8_MIN;
	volatile int32_t t66 = -32514;

	t66 = ((x289^x290)<=(x291+x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = 35059301221LLU;
	uint8_t x294 = 1U;
	int8_t x296 = INT8_MIN;
	int32_t t67 = 1811715;

	t67 = ((x293^x294)<=(x295+x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = UINT64_MAX;
	volatile int8_t x298 = -1;
	volatile int32_t x299 = -1;
	static uint32_t x300 = 11339U;

	t68 = ((x297^x298)<=(x299+x300));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x301 = 62U;
	int64_t x302 = 5042058LL;
	int64_t x303 = INT64_MIN;
	volatile int32_t t69 = 1336511;

	t69 = ((x301^x302)<=(x303+x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = UINT8_MAX;
	uint8_t x307 = 59U;
	int32_t t70 = 43;

	t70 = ((x305^x306)<=(x307+x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x310 = 0;
	int16_t x311 = INT16_MIN;
	volatile uint8_t x312 = UINT8_MAX;
	int32_t t71 = -2251141;

	t71 = ((x309^x310)<=(x311+x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x313 = 8096846848533LL;
	static int8_t x314 = INT8_MIN;
	int32_t t72 = 284;

	t72 = ((x313^x314)<=(x315+x316));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = UINT8_MAX;
	volatile uint8_t x318 = 0U;
	int8_t x320 = -58;

	t73 = ((x317^x318)<=(x319+x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x321 = -1;
	volatile int8_t x322 = INT8_MIN;
	uint8_t x323 = 8U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t74 = -16;

	t74 = ((x321^x322)<=(x323+x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x325 = INT8_MIN;
	int8_t x326 = 1;
	volatile int32_t x327 = -1;
	volatile int8_t x328 = INT8_MIN;
	volatile int32_t t75 = 3173852;

	t75 = ((x325^x326)<=(x327+x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MAX;
	volatile int32_t t76 = 23;

	t76 = ((x329^x330)<=(x331+x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x333 = 1944;
	volatile int8_t x334 = 0;
	int64_t x335 = -1LL;
	uint64_t x336 = 9062263916512462LLU;
	static volatile int32_t t77 = 725;

	t77 = ((x333^x334)<=(x335+x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x338 = 3U;
	int32_t x339 = -1;
	uint8_t x340 = UINT8_MAX;
	int32_t t78 = 48991090;

	t78 = ((x337^x338)<=(x339+x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = 62U;
	int32_t t79 = 63178992;

	t79 = ((x341^x342)<=(x343+x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x346 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	volatile int32_t t80 = -1;

	t80 = ((x345^x346)<=(x347+x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x349 = 1968992LLU;
	int16_t x350 = -1;
	int32_t x351 = -1;
	static int32_t t81 = -25;

	t81 = ((x349^x350)<=(x351+x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = -1405;
	static uint8_t x358 = 24U;
	volatile int64_t x360 = -1LL;
	volatile int32_t t82 = -59830;

	t82 = ((x357^x358)<=(x359+x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = 136488890;
	int32_t x362 = INT32_MIN;
	uint32_t x363 = 100U;
	static int64_t x364 = -102140185155378LL;
	volatile int32_t t83 = -17459;

	t83 = ((x361^x362)<=(x363+x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x366 = INT16_MIN;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t x368 = -1LL;
	int32_t t84 = 53736;

	t84 = ((x365^x366)<=(x367+x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x369 = UINT8_MAX;
	uint32_t x371 = UINT32_MAX;
	static int8_t x372 = INT8_MIN;
	static volatile int32_t t85 = -586;

	t85 = ((x369^x370)<=(x371+x372));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x373 = INT32_MIN;
	static uint8_t x375 = 14U;
	uint32_t x376 = 822U;
	static int32_t t86 = 23097;

	t86 = ((x373^x374)<=(x375+x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x378 = UINT8_MAX;
	int32_t t87 = -480;

	t87 = ((x377^x378)<=(x379+x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x381 = 45U;
	static uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	volatile int32_t t88 = 6;

	t88 = ((x381^x382)<=(x383+x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x385 = -448;
	int16_t x386 = INT16_MIN;
	static int8_t x387 = INT8_MAX;
	uint16_t x388 = 86U;
	int32_t t89 = 390180;

	t89 = ((x385^x386)<=(x387+x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x390 = INT32_MAX;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	volatile int32_t t90 = -884486707;

	t90 = ((x389^x390)<=(x391+x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x393 = 3997335538096272LL;
	volatile int16_t x394 = -291;
	volatile uint8_t x395 = UINT8_MAX;
	static int64_t x396 = 1907LL;
	int32_t t91 = 126696;

	t91 = ((x393^x394)<=(x395+x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x398 = -1105LL;
	static int32_t x399 = -1;
	int64_t x400 = 273429163LL;
	static volatile int32_t t92 = -373165;

	t92 = ((x397^x398)<=(x399+x400));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = -175326;
	volatile uint32_t x403 = 407788159U;
	uint32_t x404 = UINT32_MAX;
	int32_t t93 = 1534;

	t93 = ((x401^x402)<=(x403+x404));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = UINT16_MAX;
	int64_t x406 = -1LL;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = INT32_MIN;

	t94 = ((x405^x406)<=(x407+x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x409 = INT8_MIN;
	int64_t x412 = INT64_MAX;
	volatile int32_t t95 = 519;

	t95 = ((x409^x410)<=(x411+x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x413 = 412481U;
	static int8_t x414 = INT8_MAX;
	static volatile uint64_t x415 = UINT64_MAX;
	uint16_t x416 = 3U;
	static volatile int32_t t96 = -1984;

	t96 = ((x413^x414)<=(x415+x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x417 = 40U;
	uint8_t x418 = 0U;
	volatile int32_t x419 = 0;
	int8_t x420 = -1;

	t97 = ((x417^x418)<=(x419+x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x421 = UINT16_MAX;
	uint32_t x422 = 96397195U;
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t98 = -1;

	t98 = ((x421^x422)<=(x423+x424));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = 499981550;
	int16_t x428 = INT16_MIN;
	int32_t t99 = -243;

	t99 = ((x425^x426)<=(x427+x428));

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

