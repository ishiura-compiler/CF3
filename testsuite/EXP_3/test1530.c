#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x10 = -4327;
static uint16_t x12 = UINT16_MAX;
int16_t x14 = INT16_MAX;
int32_t t3 = 57645;
volatile int64_t x27 = INT64_MIN;
int32_t x30 = INT32_MAX;
static int64_t x33 = INT64_MIN;
static volatile int32_t t6 = 8147096;
uint64_t x38 = 944599278426LLU;
static int8_t x53 = -1;
uint32_t x56 = UINT32_MAX;
static int32_t x57 = INT32_MIN;
uint8_t x59 = 6U;
uint16_t x61 = 12884U;
uint64_t x62 = 993LLU;
int16_t x71 = INT16_MAX;
static int16_t x74 = INT16_MIN;
int32_t x76 = 6;
volatile int16_t x84 = -1;
int64_t x86 = -3667361099095LL;
uint8_t x89 = 17U;
volatile int64_t x91 = INT64_MIN;
int16_t x114 = INT16_MIN;
static int32_t x115 = INT32_MAX;
uint16_t x122 = 0U;
int64_t x124 = -5372384997477LL;
static int64_t x138 = 1432893108LL;
static int8_t x140 = INT8_MIN;
volatile int32_t t26 = -1575938;
static volatile int16_t x141 = 38;
uint32_t x146 = 93U;
volatile uint8_t x147 = UINT8_MAX;
int32_t x148 = INT32_MIN;
int64_t x155 = INT64_MIN;
int16_t x160 = INT16_MAX;
int16_t x166 = INT16_MAX;
static int32_t x167 = -57196461;
int16_t x168 = INT16_MIN;
volatile uint16_t x171 = 581U;
volatile uint8_t x174 = 7U;
uint32_t x177 = 14588938U;
uint64_t x178 = 3096794942982058482LLU;
int32_t x184 = INT32_MIN;
static int16_t x198 = INT16_MIN;
int32_t x200 = INT32_MIN;
volatile int32_t t40 = -3;
int8_t x208 = INT8_MAX;
volatile uint32_t x209 = 187U;
int32_t x212 = INT32_MAX;
uint8_t x215 = 10U;
volatile int32_t t44 = -189;
int16_t x226 = INT16_MAX;
int8_t x230 = INT8_MIN;
uint32_t x231 = UINT32_MAX;
static int16_t x232 = INT16_MAX;
int32_t t47 = -44114;
int32_t t48 = 26365;
static int32_t x247 = 3914;
static volatile int32_t t50 = 78890412;
volatile int32_t x254 = INT32_MIN;
static uint16_t x256 = 300U;
volatile int32_t t52 = 244088285;
int64_t x258 = -1LL;
uint8_t x260 = 1U;
uint64_t x261 = UINT64_MAX;
uint64_t x268 = 662143661260711LLU;
int32_t t55 = -31960;
int8_t x270 = -1;
int64_t x279 = INT64_MIN;
int64_t x281 = INT64_MIN;
volatile int16_t x284 = INT16_MIN;
int32_t x297 = INT32_MAX;
int64_t x298 = 0LL;
int64_t x301 = INT64_MIN;
uint8_t x310 = 2U;
int32_t x314 = -1;
int8_t x317 = INT8_MIN;
int16_t x318 = -1;
static int32_t t66 = -25628;
int32_t t67 = -149668;
volatile int32_t x329 = 1;
volatile int32_t t68 = -2086561;
int32_t x345 = INT32_MAX;
int32_t x353 = -1;
static int16_t x368 = 253;
uint32_t x377 = 478731U;
volatile uint8_t x379 = UINT8_MAX;
volatile int32_t x387 = -244845;
volatile int32_t x388 = INT32_MIN;
volatile int64_t x393 = -24747613492LL;
static uint32_t x404 = 811U;
static int32_t x412 = INT32_MIN;
static volatile uint32_t x423 = 1U;
int64_t x424 = INT64_MIN;
volatile int32_t x438 = -1;
int8_t x445 = -1;
int64_t x454 = 33829971172393LL;
volatile int64_t x455 = INT64_MIN;
volatile int8_t x457 = INT8_MIN;
uint16_t x458 = UINT16_MAX;
uint8_t x463 = 3U;
volatile int32_t t96 = -1;
int64_t x479 = INT64_MIN;
int16_t x482 = 31;
volatile int64_t x483 = -1LL;
int16_t x487 = INT16_MIN;


void f0(void) {
	uint16_t x9 = 14841U;
	volatile int8_t x11 = INT8_MAX;
	int32_t t0 = -13;

	t0 = ((x9+x10)<(x11<=x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t1 = -11;

	t1 = ((x13+x14)<(x15<=x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	uint32_t x18 = UINT32_MAX;
	static volatile int64_t x19 = 128233056LL;
	uint8_t x20 = 30U;
	int32_t t2 = -12415;

	t2 = ((x17+x18)<(x19<=x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = UINT32_MAX;
	volatile int8_t x22 = -5;
	uint8_t x23 = 0U;
	int8_t x24 = 51;

	t3 = ((x21+x22)<(x23<=x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = -1;
	int8_t x26 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t4 = -243584241;

	t4 = ((x25+x26)<(x27<=x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 6LLU;
	int8_t x31 = 2;
	int16_t x32 = INT16_MIN;
	int32_t t5 = -4672602;

	t5 = ((x29+x30)<(x31<=x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x34 = 2U;
	uint16_t x35 = 7784U;
	static uint64_t x36 = 27192853140LLU;

	t6 = ((x33+x34)<(x35<=x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MAX;
	volatile uint32_t x39 = UINT32_MAX;
	int32_t x40 = -3076330;
	int32_t t7 = 7170;

	t7 = ((x37+x38)<(x39<=x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	uint8_t x42 = 121U;
	volatile uint16_t x43 = 24565U;
	uint8_t x44 = 51U;
	int32_t t8 = -2761;

	t8 = ((x41+x42)<(x43<=x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 3206U;
	static int64_t x50 = -1LL;
	uint32_t x51 = 79U;
	static int8_t x52 = INT8_MAX;
	static int32_t t9 = -32;

	t9 = ((x49+x50)<(x51<=x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x54 = 18U;
	int8_t x55 = INT8_MAX;
	static int32_t t10 = 11;

	t10 = ((x53+x54)<(x55<=x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x58 = -415052991LL;
	uint32_t x60 = 394085U;
	volatile int32_t t11 = -177528;

	t11 = ((x57+x58)<(x59<=x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x63 = INT16_MIN;
	static int32_t x64 = -3228;
	volatile int32_t t12 = 316135;

	t12 = ((x61+x62)<(x63<=x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -30;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 207667990LLU;
	uint8_t x68 = UINT8_MAX;
	int32_t t13 = 212;

	t13 = ((x65+x66)<(x67<=x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -13;
	int8_t x70 = INT8_MIN;
	int8_t x72 = INT8_MAX;
	volatile int32_t t14 = 459709241;

	t14 = ((x69+x70)<(x71<=x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 105U;
	int32_t x75 = 384879;
	int32_t t15 = 446866;

	t15 = ((x73+x74)<(x75<=x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = -4139517235130LL;
	int32_t x80 = -1;
	static int32_t t16 = 670828;

	t16 = ((x77+x78)<(x79<=x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = INT16_MIN;
	static int8_t x82 = INT8_MIN;
	volatile uint64_t x83 = UINT64_MAX;
	int32_t t17 = 812;

	t17 = ((x81+x82)<(x83<=x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	int16_t x88 = INT16_MIN;
	static int32_t t18 = -33359;

	t18 = ((x85+x86)<(x87<=x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = INT16_MIN;
	uint16_t x92 = 15U;
	static int32_t t19 = 93261;

	t19 = ((x89+x90)<(x91<=x92));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = INT16_MIN;
	volatile int8_t x94 = -1;
	int64_t x95 = INT64_MIN;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t20 = -3056;

	t20 = ((x93+x94)<(x95<=x96));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x109 = 167U;
	int32_t x110 = 211333;
	static int32_t x111 = INT32_MIN;
	volatile uint32_t x112 = 458030U;
	volatile int32_t t21 = 100;

	t21 = ((x109+x110)<(x111<=x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = 1;
	int16_t x116 = -4528;
	static int32_t t22 = -1515897;

	t22 = ((x113+x114)<(x115<=x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x117 = UINT32_MAX;
	int64_t x118 = 1691340LL;
	uint32_t x119 = UINT32_MAX;
	static uint16_t x120 = UINT16_MAX;
	volatile int32_t t23 = -433104;

	t23 = ((x117+x118)<(x119<=x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 29836945U;
	int64_t x123 = -54673LL;
	int32_t t24 = 214558;

	t24 = ((x121+x122)<(x123<=x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = INT8_MAX;
	uint16_t x126 = 503U;
	volatile uint16_t x127 = 2U;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t25 = -264121;

	t25 = ((x125+x126)<(x127<=x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = 19;
	int32_t x139 = INT32_MAX;

	t26 = ((x137+x138)<(x139<=x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = 426323197LL;
	int32_t x144 = -1;
	volatile int32_t t27 = -5578;

	t27 = ((x141+x142)<(x143<=x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t t28 = -424829848;

	t28 = ((x145+x146)<(x147<=x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x153 = 24301459831455LLU;
	uint16_t x154 = 64U;
	static uint8_t x156 = UINT8_MAX;
	int32_t t29 = 3212;

	t29 = ((x153+x154)<(x155<=x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x157 = 84459688U;
	volatile uint64_t x158 = 888903LLU;
	static int8_t x159 = -1;
	int32_t t30 = -367;

	t30 = ((x157+x158)<(x159<=x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x165 = INT16_MIN;
	int32_t t31 = -527129047;

	t31 = ((x165+x166)<(x167<=x168));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = INT32_MIN;
	static uint32_t x170 = 200U;
	static volatile int8_t x172 = -1;
	int32_t t32 = 1;

	t32 = ((x169+x170)<(x171<=x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MAX;
	volatile int32_t t33 = 7239442;

	t33 = ((x173+x174)<(x175<=x176));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x179 = -1;
	uint16_t x180 = 14U;
	volatile int32_t t34 = 58858;

	t34 = ((x177+x178)<(x179<=x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x181 = 2644896246006986156LLU;
	int32_t x182 = INT32_MAX;
	int16_t x183 = -1;
	int32_t t35 = 225989;

	t35 = ((x181+x182)<(x183<=x184));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = 5U;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	int8_t x188 = INT8_MIN;
	int32_t t36 = 20126;

	t36 = ((x185+x186)<(x187<=x188));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x189 = 2050717355U;
	static int8_t x190 = INT8_MIN;
	uint8_t x191 = UINT8_MAX;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t37 = -2;

	t37 = ((x189+x190)<(x191<=x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x193 = 923292968712029LLU;
	int64_t x194 = 31LL;
	static uint16_t x195 = 788U;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t38 = -51;

	t38 = ((x193+x194)<(x195<=x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = INT64_MAX;
	int32_t x199 = -502359873;
	static volatile int32_t t39 = -660368;

	t39 = ((x197+x198)<(x199<=x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = 16115LLU;
	uint16_t x202 = 5946U;
	volatile uint32_t x203 = 337U;
	int16_t x204 = 52;

	t40 = ((x201+x202)<(x203<=x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = UINT64_MAX;
	int64_t x206 = -179995LL;
	int16_t x207 = INT16_MIN;
	volatile int32_t t41 = 247476;

	t41 = ((x205+x206)<(x207<=x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = 57;
	static int32_t t42 = 19;

	t42 = ((x209+x210)<(x211<=x212));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = 17864;
	int64_t x216 = INT64_MIN;
	volatile int32_t t43 = 48380;

	t43 = ((x213+x214)<(x215<=x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x217 = INT8_MIN;
	volatile int32_t x218 = -3394547;
	int8_t x219 = -1;
	uint8_t x220 = 1U;

	t44 = ((x217+x218)<(x219<=x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x225 = 2U;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t45 = 1528229;

	t45 = ((x225+x226)<(x227<=x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = INT16_MIN;
	volatile int32_t t46 = -219134;

	t46 = ((x229+x230)<(x231<=x232));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x233 = INT32_MIN;
	uint16_t x234 = 79U;
	int64_t x235 = -1LL;
	int64_t x236 = 29810025400928LL;

	t47 = ((x233+x234)<(x235<=x236));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x238 = -30LL;
	volatile int32_t x239 = INT32_MIN;
	static int16_t x240 = -1;

	t48 = ((x237+x238)<(x239<=x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = -103549247392LL;
	volatile int8_t x242 = 52;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = 526377267100844981LLU;
	int32_t t49 = 0;

	t49 = ((x241+x242)<(x243<=x244));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x245 = -1;
	int64_t x246 = -7622593971758389LL;
	volatile uint8_t x248 = UINT8_MAX;

	t50 = ((x245+x246)<(x247<=x248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	static uint16_t x250 = 27227U;
	static volatile uint16_t x251 = 293U;
	int64_t x252 = INT64_MIN;
	int32_t t51 = 1;

	t51 = ((x249+x250)<(x251<=x252));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int32_t x255 = INT32_MIN;

	t52 = ((x253+x254)<(x255<=x256));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = -353927963;
	uint32_t x259 = 63269U;
	int32_t t53 = 3863052;

	t53 = ((x257+x258)<(x259<=x260));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x262 = UINT32_MAX;
	int16_t x263 = -1;
	int64_t x264 = INT64_MAX;
	volatile int32_t t54 = 422;

	t54 = ((x261+x262)<(x263<=x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = -2158806232427609LL;
	static int16_t x266 = -1;
	int8_t x267 = INT8_MAX;

	t55 = ((x265+x266)<(x267<=x268));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x271 = -9134;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t56 = 7965;

	t56 = ((x269+x270)<(x271<=x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	volatile uint16_t x276 = UINT16_MAX;
	static int32_t t57 = 0;

	t57 = ((x273+x274)<(x275<=x276));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x277 = -42;
	int16_t x278 = -1;
	int32_t x280 = INT32_MIN;
	int32_t t58 = -863930437;

	t58 = ((x277+x278)<(x279<=x280));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x282 = 13U;
	int64_t x283 = INT64_MAX;
	volatile int32_t t59 = 147;

	t59 = ((x281+x282)<(x283<=x284));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = -1;
	int64_t x286 = 380205LL;
	int32_t x287 = INT32_MIN;
	static int64_t x288 = -1LL;
	int32_t t60 = 8863463;

	t60 = ((x285+x286)<(x287<=x288));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x299 = 1U;
	volatile int8_t x300 = INT8_MAX;
	int32_t t61 = -526;

	t61 = ((x297+x298)<(x299<=x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x302 = 2975658813731LL;
	volatile uint64_t x303 = 102846035595699LLU;
	static uint32_t x304 = UINT32_MAX;
	int32_t t62 = 3;

	t62 = ((x301+x302)<(x303<=x304));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x305 = UINT8_MAX;
	static int8_t x306 = -1;
	int64_t x307 = INT64_MIN;
	volatile int32_t x308 = INT32_MIN;
	int32_t t63 = 1;

	t63 = ((x305+x306)<(x307<=x308));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = UINT8_MAX;
	int16_t x311 = 0;
	uint16_t x312 = 0U;
	int32_t t64 = -16006937;

	t64 = ((x309+x310)<(x311<=x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x313 = -6;
	static uint64_t x315 = 21LLU;
	volatile int8_t x316 = INT8_MIN;
	int32_t t65 = -19;

	t65 = ((x313+x314)<(x315<=x316));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 0U;

	t66 = ((x317+x318)<(x319<=x320));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x321 = 83568U;
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = INT16_MAX;
	uint8_t x324 = UINT8_MAX;

	t67 = ((x321+x322)<(x323<=x324));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x330 = 83154890181455570LL;
	int32_t x331 = INT32_MAX;
	int8_t x332 = INT8_MIN;

	t68 = ((x329+x330)<(x331<=x332));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x333 = INT32_MAX;
	uint32_t x334 = UINT32_MAX;
	uint16_t x335 = 32U;
	uint16_t x336 = 132U;
	static int32_t t69 = -1420;

	t69 = ((x333+x334)<(x335<=x336));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x337 = 384U;
	int64_t x338 = INT64_MIN;
	static volatile int64_t x339 = -1LL;
	int64_t x340 = INT64_MIN;
	int32_t t70 = -2123;

	t70 = ((x337+x338)<(x339<=x340));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x341 = INT16_MIN;
	uint8_t x342 = UINT8_MAX;
	int64_t x343 = INT64_MIN;
	int64_t x344 = 43LL;
	volatile int32_t t71 = -1;

	t71 = ((x341+x342)<(x343<=x344));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x346 = -231;
	volatile uint64_t x347 = UINT64_MAX;
	int32_t x348 = INT32_MIN;
	static int32_t t72 = -6505186;

	t72 = ((x345+x346)<(x347<=x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = 4211382380LL;
	volatile int64_t x351 = 758713666462479651LL;
	int8_t x352 = -1;
	int32_t t73 = -3300150;

	t73 = ((x349+x350)<(x351<=x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = 3U;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t74 = -54881114;

	t74 = ((x353+x354)<(x355<=x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x365 = 6398LL;
	static volatile uint16_t x366 = 9U;
	int64_t x367 = INT64_MAX;
	int32_t t75 = -1;

	t75 = ((x365+x366)<(x367<=x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x369 = 22361U;
	static int16_t x370 = -1;
	int64_t x371 = 5709094608924LL;
	int16_t x372 = 14760;
	int32_t t76 = -1011777;

	t76 = ((x369+x370)<(x371<=x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x378 = INT64_MIN;
	int8_t x380 = -53;
	volatile int32_t t77 = 45795575;

	t77 = ((x377+x378)<(x379<=x380));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x381 = 16107491102240216LL;
	int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = 1U;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t78 = 110042;

	t78 = ((x381+x382)<(x383<=x384));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = INT8_MIN;
	static int64_t x386 = -1LL;
	static int32_t t79 = 54635958;

	t79 = ((x385+x386)<(x387<=x388));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x389 = INT8_MIN;
	uint64_t x390 = 32142682691LLU;
	int16_t x391 = INT16_MIN;
	static int32_t x392 = INT32_MIN;
	int32_t t80 = 447;

	t80 = ((x389+x390)<(x391<=x392));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x394 = -1;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t81 = -539439967;

	t81 = ((x393+x394)<(x395<=x396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MAX;
	int64_t x403 = INT64_MIN;
	volatile int32_t t82 = 546308;

	t82 = ((x401+x402)<(x403<=x404));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x405 = 1LLU;
	uint64_t x406 = 8156LLU;
	static uint64_t x407 = 250351LLU;
	int32_t x408 = -1;
	volatile int32_t t83 = -1;

	t83 = ((x405+x406)<(x407<=x408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x409 = 27U;
	int64_t x410 = -1LL;
	int8_t x411 = INT8_MIN;
	volatile int32_t t84 = -9976907;

	t84 = ((x409+x410)<(x411<=x412));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x413 = 3615LL;
	uint64_t x414 = UINT64_MAX;
	uint64_t x415 = 27254877974965LLU;
	int32_t x416 = -1;
	volatile int32_t t85 = 2;

	t85 = ((x413+x414)<(x415<=x416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x417 = 0U;
	int64_t x418 = INT64_MIN;
	int8_t x419 = -22;
	uint32_t x420 = 245U;
	volatile int32_t t86 = -818;

	t86 = ((x417+x418)<(x419<=x420));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x421 = 3147963634LLU;
	volatile int8_t x422 = 12;
	volatile int32_t t87 = 93430724;

	t87 = ((x421+x422)<(x423<=x424));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x429 = 7U;
	static int64_t x430 = INT64_MIN;
	volatile int16_t x431 = INT16_MIN;
	volatile int16_t x432 = INT16_MIN;
	static int32_t t88 = -4;

	t88 = ((x429+x430)<(x431<=x432));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x433 = UINT32_MAX;
	static int32_t x434 = -1022215635;
	uint8_t x435 = 30U;
	static uint16_t x436 = 0U;
	int32_t t89 = -7;

	t89 = ((x433+x434)<(x435<=x436));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x437 = 13;
	int8_t x439 = INT8_MAX;
	int64_t x440 = -1LL;
	int32_t t90 = 54037059;

	t90 = ((x437+x438)<(x439<=x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = -1LL;
	int16_t x442 = INT16_MAX;
	static int64_t x443 = -1LL;
	int32_t x444 = -58354395;
	static int32_t t91 = 807;

	t91 = ((x441+x442)<(x443<=x444));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x446 = 30164910U;
	uint8_t x447 = 50U;
	uint16_t x448 = UINT16_MAX;
	static int32_t t92 = -14599940;

	t92 = ((x445+x446)<(x447<=x448));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x453 = INT64_MIN;
	int8_t x456 = INT8_MAX;
	volatile int32_t t93 = 26380;

	t93 = ((x453+x454)<(x455<=x456));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x459 = INT32_MAX;
	int64_t x460 = 286370520LL;
	int32_t t94 = 1;

	t94 = ((x457+x458)<(x459<=x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x461 = 65908001U;
	static volatile int8_t x462 = INT8_MAX;
	int64_t x464 = -1950850287792LL;
	static int32_t t95 = -16416171;

	t95 = ((x461+x462)<(x463<=x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x473 = UINT64_MAX;
	int8_t x474 = INT8_MAX;
	uint16_t x475 = 1U;
	int64_t x476 = INT64_MAX;

	t96 = ((x473+x474)<(x475<=x476));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x477 = INT64_MIN;
	uint64_t x478 = 18646LLU;
	static int64_t x480 = 414412917232274343LL;
	static volatile int32_t t97 = -921563;

	t97 = ((x477+x478)<(x479<=x480));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x481 = -13913586LL;
	uint32_t x484 = UINT32_MAX;
	int32_t t98 = 9;

	t98 = ((x481+x482)<(x483<=x484));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x485 = -8;
	int8_t x486 = INT8_MIN;
	static int64_t x488 = INT64_MAX;
	int32_t t99 = 202;

	t99 = ((x485+x486)<(x487<=x488));

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

