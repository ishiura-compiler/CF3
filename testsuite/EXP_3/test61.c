#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -285111;
volatile uint32_t x11 = 2U;
static int32_t t1 = -7;
volatile uint8_t x14 = 1U;
int64_t x15 = INT64_MAX;
uint64_t x18 = 2038314054683344LLU;
uint64_t x19 = UINT64_MAX;
static int8_t x21 = -11;
int16_t x23 = INT16_MIN;
static int8_t x28 = -1;
int16_t x29 = -13808;
uint64_t x31 = 2LLU;
int8_t x32 = -1;
uint8_t x34 = 24U;
uint32_t x36 = 5333277U;
static int64_t x38 = -1LL;
uint32_t x45 = 169188U;
static int64_t x46 = 130453697924LL;
int32_t x47 = -107502;
int64_t x51 = 649762175994327147LL;
static volatile int16_t x52 = INT16_MIN;
volatile int16_t x66 = 52;
volatile int32_t x69 = -332107966;
uint32_t x70 = UINT32_MAX;
int32_t t15 = -404;
uint16_t x79 = UINT16_MAX;
int32_t t16 = -36347;
int64_t x81 = -1LL;
int32_t t19 = 13303;
int32_t x94 = INT32_MAX;
volatile int32_t t20 = -80116901;
static volatile int64_t x99 = INT64_MIN;
volatile int64_t x105 = 14472LL;
int8_t x110 = -15;
int16_t x111 = INT16_MAX;
volatile int32_t t24 = -23562083;
uint64_t x114 = 3424711821LLU;
static uint8_t x118 = UINT8_MAX;
static int8_t x119 = -1;
uint16_t x120 = 26886U;
uint64_t x131 = 59408702LLU;
int32_t x141 = INT32_MIN;
int64_t x148 = -505164060886608966LL;
int16_t x152 = -1;
volatile int32_t t33 = -5176;
int64_t x167 = -1527459506915LL;
uint32_t x168 = UINT32_MAX;
int32_t x171 = -3465;
volatile int32_t t36 = 15489085;
int64_t x179 = INT64_MAX;
uint32_t x183 = 43240980U;
int32_t x200 = INT32_MIN;
volatile int32_t t41 = 1121285;
volatile int32_t t43 = -110414;
int16_t x215 = INT16_MIN;
uint16_t x224 = 9U;
int32_t t50 = -4500629;
uint64_t x250 = 10439115LLU;
int32_t t52 = 1919246;
int64_t x259 = -3586LL;
int8_t x261 = INT8_MIN;
uint32_t x264 = UINT32_MAX;
int16_t x267 = -1;
uint64_t x271 = 1693052LLU;
int16_t x276 = 37;
int32_t t58 = -184216;
volatile int8_t x282 = 4;
uint32_t x284 = 8873631U;
int16_t x292 = -1;
int8_t x295 = 6;
int64_t x297 = -1LL;
uint64_t x304 = 273945554873LLU;
int64_t x308 = INT64_MIN;
uint64_t x313 = UINT64_MAX;
int8_t x314 = INT8_MAX;
static int8_t x315 = 0;
int16_t x325 = INT16_MAX;
int16_t x328 = INT16_MAX;
int64_t x333 = -1LL;
uint32_t x334 = 71395103U;
static int8_t x335 = -45;
volatile int32_t t68 = -219;
uint32_t x341 = 524176295U;
int8_t x353 = -2;
static uint32_t x357 = UINT32_MAX;
volatile uint8_t x363 = 55U;
int16_t x368 = -1;
uint32_t x371 = 341U;
uint64_t x377 = 7286LLU;
int8_t x379 = -1;
int16_t x390 = INT16_MIN;
uint16_t x392 = UINT16_MAX;
uint16_t x396 = 13668U;
volatile int8_t x409 = -1;
static uint32_t x410 = 22U;
uint16_t x416 = 5U;
int8_t x420 = 63;
volatile int32_t t85 = 491041757;
volatile int32_t t87 = -7165;
static int8_t x447 = INT8_MIN;
uint16_t x448 = 12455U;
int8_t x453 = INT8_MIN;
uint16_t x458 = 22186U;
static uint16_t x459 = 4U;
int32_t x465 = 308;
int16_t x471 = INT16_MIN;
int8_t x472 = 0;
volatile int32_t t94 = 28;
uint16_t x473 = 388U;
int64_t x477 = -41658433012779LL;
uint32_t x490 = UINT32_MAX;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MIN;
	uint16_t x3 = 7571U;
	uint64_t x4 = 717434247761LLU;

	t0 = ((x1%x2)<(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	static int8_t x10 = 4;
	int16_t x12 = INT16_MIN;

	t1 = ((x9%x10)<(x11+x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 14U;
	volatile int64_t x16 = INT64_MIN;
	static volatile int32_t t2 = -92;

	t2 = ((x13%x14)<(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int8_t x20 = INT8_MIN;
	static int32_t t3 = -103525;

	t3 = ((x17%x18)<(x19+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = -4;
	int8_t x24 = INT8_MAX;
	int32_t t4 = 1;

	t4 = ((x21%x22)<(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	static int16_t x26 = -1;
	uint32_t x27 = UINT32_MAX;
	volatile int32_t t5 = 373441383;

	t5 = ((x25%x26)<(x27+x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x30 = UINT64_MAX;
	volatile int32_t t6 = 3708;

	t6 = ((x29%x30)<(x31+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 399387295132LLU;
	uint16_t x35 = 16227U;
	int32_t t7 = -46;

	t7 = ((x33%x34)<(x35+x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	int16_t x39 = INT16_MIN;
	int16_t x40 = 14257;
	volatile int32_t t8 = 759209;

	t8 = ((x37%x38)<(x39+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	uint8_t x42 = 1U;
	static int32_t x43 = INT32_MIN;
	volatile int32_t x44 = INT32_MAX;
	static int32_t t9 = -22;

	t9 = ((x41%x42)<(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x48 = 79U;
	int32_t t10 = -483696;

	t10 = ((x45%x46)<(x47+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = 475;
	int32_t t11 = 933565261;

	t11 = ((x49%x50)<(x51+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	int8_t x54 = INT8_MAX;
	int64_t x55 = -1LL;
	int16_t x56 = 6;
	volatile int32_t t12 = 891513;

	t12 = ((x53%x54)<(x55+x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x65 = UINT8_MAX;
	volatile int32_t x67 = 12;
	int8_t x68 = -1;
	int32_t t13 = -1;

	t13 = ((x65%x66)<(x67+x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x71 = INT32_MAX;
	int32_t x72 = INT32_MIN;
	volatile int32_t t14 = 852545;

	t14 = ((x69%x70)<(x71+x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = -1;
	static uint8_t x74 = UINT8_MAX;
	uint32_t x75 = 583654444U;
	static volatile int8_t x76 = 24;

	t15 = ((x73%x74)<(x75+x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = -8;
	static uint16_t x78 = 140U;
	uint64_t x80 = 72011726377332262LLU;

	t16 = ((x77%x78)<(x79+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x82 = INT8_MAX;
	static uint8_t x83 = 79U;
	volatile int32_t x84 = -1;
	volatile int32_t t17 = 801089980;

	t17 = ((x81%x82)<(x83+x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 83744LLU;
	uint64_t x86 = 1740459LLU;
	int8_t x87 = INT8_MIN;
	volatile uint32_t x88 = 27U;
	static volatile int32_t t18 = -33;

	t18 = ((x85%x86)<(x87+x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = INT32_MAX;
	uint16_t x90 = 11U;
	int16_t x91 = -1;
	static int16_t x92 = -1;

	t19 = ((x89%x90)<(x91+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = INT8_MIN;
	uint16_t x95 = 6245U;
	uint32_t x96 = 1701U;

	t20 = ((x93%x94)<(x95+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MIN;
	uint16_t x98 = UINT16_MAX;
	uint8_t x100 = 115U;
	int32_t t21 = -3499426;

	t21 = ((x97%x98)<(x99+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int64_t x102 = 209756LL;
	static uint64_t x103 = UINT64_MAX;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t22 = 923;

	t22 = ((x101%x102)<(x103+x104));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x106 = INT64_MAX;
	static volatile int8_t x107 = INT8_MIN;
	uint32_t x108 = 3415003U;
	volatile int32_t t23 = 121271;

	t23 = ((x105%x106)<(x107+x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	uint8_t x112 = 28U;

	t24 = ((x109%x110)<(x111+x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	volatile uint8_t x115 = 0U;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t25 = 181674;

	t25 = ((x113%x114)<(x115+x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = UINT64_MAX;
	static int32_t t26 = 7391555;

	t26 = ((x117%x118)<(x119+x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 1LL;
	static uint32_t x126 = 11822313U;
	int16_t x127 = INT16_MAX;
	static int64_t x128 = INT64_MIN;
	static int32_t t27 = 1123371;

	t27 = ((x125%x126)<(x127+x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = 8717;
	uint64_t x130 = 190163LLU;
	int16_t x132 = -1;
	volatile int32_t t28 = -6350102;

	t28 = ((x129%x130)<(x131+x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = INT16_MAX;
	uint8_t x134 = 5U;
	volatile int32_t x135 = -1;
	int16_t x136 = 3601;
	volatile int32_t t29 = -46376403;

	t29 = ((x133%x134)<(x135+x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = -1LL;
	int16_t x139 = -1;
	int64_t x140 = INT64_MAX;
	volatile int32_t t30 = 3172;

	t30 = ((x137%x138)<(x139+x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = INT16_MIN;
	uint8_t x143 = UINT8_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	int32_t t31 = 64040;

	t31 = ((x141%x142)<(x143+x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x145 = -1;
	static uint16_t x146 = UINT16_MAX;
	uint64_t x147 = UINT64_MAX;
	volatile int32_t t32 = -386246;

	t32 = ((x145%x146)<(x147+x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 1313504;
	volatile uint32_t x150 = 2482U;
	uint64_t x151 = 823823LLU;

	t33 = ((x149%x150)<(x151+x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MAX;
	static int8_t x155 = -22;
	static int8_t x156 = -1;
	volatile int32_t t34 = 219240;

	t34 = ((x153%x154)<(x155+x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x165 = -1LL;
	volatile int8_t x166 = -3;
	int32_t t35 = 0;

	t35 = ((x165%x166)<(x167+x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = -1LL;
	static int32_t x170 = -276;
	uint64_t x172 = 19394679051986LLU;

	t36 = ((x169%x170)<(x171+x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = 1;
	int32_t x174 = INT32_MIN;
	int8_t x175 = 35;
	static uint32_t x176 = UINT32_MAX;
	volatile int32_t t37 = 4;

	t37 = ((x173%x174)<(x175+x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = -2231;
	static uint64_t x180 = 109352567LLU;
	volatile int32_t t38 = -592;

	t38 = ((x177%x178)<(x179+x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t39 = 6315403;

	t39 = ((x181%x182)<(x183+x184));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x185 = 94477549LLU;
	int32_t x186 = -1;
	int16_t x187 = 12;
	int32_t x188 = INT32_MIN;
	int32_t t40 = 986000999;

	t40 = ((x185%x186)<(x187+x188));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = 1627U;
	static int32_t x198 = -6080055;
	static int64_t x199 = -1LL;

	t41 = ((x197%x198)<(x199+x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = -4;
	volatile int16_t x207 = 478;
	uint8_t x208 = 24U;
	volatile int32_t t42 = 1074123;

	t42 = ((x205%x206)<(x207+x208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x209 = 43U;
	static volatile uint64_t x210 = 13LLU;
	static volatile uint32_t x211 = 2950U;
	int16_t x212 = -15;

	t43 = ((x209%x210)<(x211+x212));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x213 = 0;
	int16_t x214 = INT16_MAX;
	uint32_t x216 = 642U;
	static volatile int32_t t44 = -6044167;

	t44 = ((x213%x214)<(x215+x216));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = 3;
	static int8_t x218 = INT8_MIN;
	static int8_t x219 = INT8_MIN;
	static int8_t x220 = -5;
	volatile int32_t t45 = 755168246;

	t45 = ((x217%x218)<(x219+x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x221 = -1;
	volatile int64_t x222 = -2203140861994378LL;
	int16_t x223 = INT16_MAX;
	volatile int32_t t46 = 3127154;

	t46 = ((x221%x222)<(x223+x224));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x229 = 180132954126LLU;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 1;
	volatile uint16_t x232 = 11692U;
	static volatile int32_t t47 = 1;

	t47 = ((x229%x230)<(x231+x232));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x233 = 1392202U;
	int64_t x234 = -1LL;
	static int16_t x235 = INT16_MIN;
	uint64_t x236 = 3799LLU;
	static int32_t t48 = -921;

	t48 = ((x233%x234)<(x235+x236));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x241 = 7710;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -11LL;
	int16_t x244 = 0;
	volatile int32_t t49 = 124;

	t49 = ((x241%x242)<(x243+x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = INT64_MAX;
	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = UINT8_MAX;

	t50 = ((x245%x246)<(x247+x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x249 = INT16_MIN;
	uint16_t x251 = 502U;
	int64_t x252 = -1LL;
	int32_t t51 = -3472;

	t51 = ((x249%x250)<(x251+x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x253 = 34978009872LLU;
	uint64_t x254 = 3825026562LLU;
	uint64_t x255 = 77243759911841652LLU;
	static int8_t x256 = -1;

	t52 = ((x253%x254)<(x255+x256));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MAX;
	uint32_t x258 = UINT32_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t53 = 6584;

	t53 = ((x257%x258)<(x259+x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x262 = 4599368567LLU;
	int16_t x263 = -2;
	volatile int32_t t54 = 198;

	t54 = ((x261%x262)<(x263+x264));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x265 = 6522LLU;
	int32_t x266 = INT32_MAX;
	volatile uint64_t x268 = UINT64_MAX;
	volatile int32_t t55 = -6365;

	t55 = ((x265%x266)<(x267+x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x269 = INT8_MAX;
	volatile int16_t x270 = 51;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t56 = 14968;

	t56 = ((x269%x270)<(x271+x272));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = -1LL;
	static volatile uint64_t x274 = 4584974278LLU;
	volatile uint64_t x275 = UINT64_MAX;
	static int32_t t57 = -1534;

	t57 = ((x273%x274)<(x275+x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = 18;
	int8_t x278 = INT8_MIN;
	uint8_t x279 = 3U;
	static int16_t x280 = INT16_MIN;

	t58 = ((x277%x278)<(x279+x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x281 = -313;
	static int64_t x283 = -105907375541614391LL;
	volatile int32_t t59 = 3;

	t59 = ((x281%x282)<(x283+x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = 0;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = UINT64_MAX;
	int32_t t60 = -120082878;

	t60 = ((x289%x290)<(x291+x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x293 = 126572142423296028LL;
	static int32_t x294 = -1;
	int64_t x296 = -1LL;
	int32_t t61 = -101848;

	t61 = ((x293%x294)<(x295+x296));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x298 = 1757LLU;
	uint64_t x299 = 5453299LLU;
	int32_t x300 = 5484636;
	volatile int32_t t62 = -1174;

	t62 = ((x297%x298)<(x299+x300));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x301 = -97;
	static int64_t x302 = 19855053121268462LL;
	int32_t x303 = INT32_MIN;
	static volatile int32_t t63 = 110363;

	t63 = ((x301%x302)<(x303+x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x305 = -16441639LL;
	uint8_t x306 = 20U;
	int32_t x307 = INT32_MAX;
	volatile int32_t t64 = 45;

	t64 = ((x305%x306)<(x307+x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = 2;
	uint16_t x311 = 412U;
	int16_t x312 = -1;
	volatile int32_t t65 = -10;

	t65 = ((x309%x310)<(x311+x312));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x316 = 50;
	volatile int32_t t66 = 14;

	t66 = ((x313%x314)<(x315+x316));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x326 = INT64_MIN;
	uint64_t x327 = 37318438397104819LLU;
	volatile int32_t t67 = 50995681;

	t67 = ((x325%x326)<(x327+x328));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x336 = UINT64_MAX;

	t68 = ((x333%x334)<(x335+x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x342 = INT64_MIN;
	static volatile uint64_t x343 = UINT64_MAX;
	uint32_t x344 = 46866622U;
	volatile int32_t t69 = 165448;

	t69 = ((x341%x342)<(x343+x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x345 = 7615080790LLU;
	volatile uint32_t x346 = UINT32_MAX;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = -1;
	int32_t t70 = 49216;

	t70 = ((x345%x346)<(x347+x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = 290;
	int8_t x350 = -1;
	uint64_t x351 = 30449LLU;
	int8_t x352 = INT8_MIN;
	int32_t t71 = 171761314;

	t71 = ((x349%x350)<(x351+x352));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x354 = 26U;
	int8_t x355 = INT8_MAX;
	static volatile int32_t x356 = 94;
	volatile int32_t t72 = -540647;

	t72 = ((x353%x354)<(x355+x356));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 3982000LLU;
	volatile uint32_t x360 = 14828508U;
	volatile int32_t t73 = 2478329;

	t73 = ((x357%x358)<(x359+x360));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x361 = 7U;
	uint8_t x362 = 1U;
	uint64_t x364 = 1032395LLU;
	int32_t t74 = -812124;

	t74 = ((x361%x362)<(x363+x364));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x365 = 30680021829775LLU;
	volatile int64_t x366 = 748634LL;
	static int16_t x367 = INT16_MIN;
	volatile int32_t t75 = -3;

	t75 = ((x365%x366)<(x367+x368));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x369 = INT8_MIN;
	volatile uint8_t x370 = 16U;
	int32_t x372 = 898;
	int32_t t76 = -308904876;

	t76 = ((x369%x370)<(x371+x372));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x373 = -1;
	static volatile int64_t x374 = INT64_MIN;
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = 1927LL;
	volatile int32_t t77 = -627;

	t77 = ((x373%x374)<(x375+x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x378 = 54U;
	int32_t x380 = -11;
	volatile int32_t t78 = 333;

	t78 = ((x377%x378)<(x379+x380));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x389 = INT32_MIN;
	volatile uint64_t x391 = 4314069236375LLU;
	volatile int32_t t79 = 20428700;

	t79 = ((x389%x390)<(x391+x392));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x393 = INT8_MIN;
	volatile uint8_t x394 = UINT8_MAX;
	uint8_t x395 = 17U;
	int32_t t80 = 414715737;

	t80 = ((x393%x394)<(x395+x396));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x397 = INT32_MIN;
	volatile int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MAX;
	int32_t t81 = -743328684;

	t81 = ((x397%x398)<(x399+x400));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x411 = INT8_MIN;
	int32_t x412 = -53389;
	volatile int32_t t82 = 1;

	t82 = ((x409%x410)<(x411+x412));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x413 = INT32_MIN;
	int32_t x414 = INT32_MIN;
	volatile int8_t x415 = INT8_MIN;
	int32_t t83 = -147;

	t83 = ((x413%x414)<(x415+x416));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x417 = INT16_MIN;
	static volatile uint16_t x418 = 28U;
	int16_t x419 = INT16_MAX;
	int32_t t84 = -6;

	t84 = ((x417%x418)<(x419+x420));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x425 = INT64_MAX;
	int32_t x426 = INT32_MIN;
	int64_t x427 = -118610480LL;
	int32_t x428 = INT32_MIN;

	t85 = ((x425%x426)<(x427+x428));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x429 = 134590668U;
	static int32_t x430 = -5432;
	uint64_t x431 = UINT64_MAX;
	uint64_t x432 = 4041073434741337LLU;
	volatile int32_t t86 = -274;

	t86 = ((x429%x430)<(x431+x432));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x433 = INT16_MIN;
	volatile int8_t x434 = 1;
	volatile int16_t x435 = -6;
	int32_t x436 = 3147047;

	t87 = ((x433%x434)<(x435+x436));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x437 = UINT32_MAX;
	volatile int16_t x438 = INT16_MAX;
	int64_t x439 = 4LL;
	int16_t x440 = -3;
	static int32_t t88 = -38473990;

	t88 = ((x437%x438)<(x439+x440));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x445 = -1;
	int64_t x446 = 39265LL;
	static volatile int32_t t89 = -19;

	t89 = ((x445%x446)<(x447+x448));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x449 = -1;
	volatile int64_t x450 = -1LL;
	static int16_t x451 = INT16_MAX;
	volatile int64_t x452 = -19370775971339399LL;
	static int32_t t90 = -174;

	t90 = ((x449%x450)<(x451+x452));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x454 = INT64_MIN;
	static int32_t x455 = -63;
	int64_t x456 = 694873669LL;
	int32_t t91 = -15974619;

	t91 = ((x453%x454)<(x455+x456));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x457 = INT16_MIN;
	uint64_t x460 = 474LLU;
	volatile int32_t t92 = 733;

	t92 = ((x457%x458)<(x459+x460));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x466 = INT16_MIN;
	uint8_t x467 = 0U;
	int8_t x468 = INT8_MAX;
	volatile int32_t t93 = 250702047;

	t93 = ((x465%x466)<(x467+x468));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x469 = 2U;
	int16_t x470 = 7;

	t94 = ((x469%x470)<(x471+x472));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x474 = -140;
	uint64_t x475 = 1059869256LLU;
	volatile int64_t x476 = INT64_MAX;
	static volatile int32_t t95 = 6545182;

	t95 = ((x473%x474)<(x475+x476));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x478 = 239198780791LLU;
	int16_t x479 = -1;
	volatile uint32_t x480 = 0U;
	static volatile int32_t t96 = -38;

	t96 = ((x477%x478)<(x479+x480));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x481 = -1;
	uint64_t x482 = UINT64_MAX;
	int8_t x483 = -1;
	int16_t x484 = INT16_MIN;
	volatile int32_t t97 = 99754;

	t97 = ((x481%x482)<(x483+x484));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = 75;
	uint32_t x486 = 112345U;
	int8_t x487 = -1;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t98 = -2602055;

	t98 = ((x485%x486)<(x487+x488));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x489 = -1LL;
	volatile uint64_t x491 = 1236568LLU;
	int32_t x492 = -2;
	static int32_t t99 = -28724;

	t99 = ((x489%x490)<(x491+x492));

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

