#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MAX;
static uint16_t x7 = 1U;
volatile int32_t x10 = INT32_MIN;
int16_t x11 = 1427;
int32_t x26 = -1;
int8_t x28 = INT8_MIN;
int32_t t8 = 29823;
volatile int32_t t10 = 623796887;
volatile int8_t x50 = INT8_MAX;
static uint8_t x53 = UINT8_MAX;
static int32_t x55 = 207;
uint64_t x59 = UINT64_MAX;
volatile int16_t x60 = INT16_MAX;
int64_t x64 = INT64_MIN;
volatile int32_t t15 = 5263692;
int8_t x79 = INT8_MIN;
int64_t x86 = INT64_MAX;
static int8_t x87 = -1;
int64_t x100 = -1LL;
int32_t x114 = -76;
volatile int32_t t26 = 226144225;
uint32_t x118 = 11086U;
volatile uint64_t x119 = UINT64_MAX;
static int32_t t27 = 828;
static int32_t t28 = 295925;
int16_t x138 = INT16_MIN;
volatile uint64_t x139 = 4143770772495104433LLU;
uint64_t x145 = UINT64_MAX;
volatile int32_t x148 = -1;
static int32_t t33 = -4293;
static volatile uint64_t x155 = UINT64_MAX;
uint8_t x159 = UINT8_MAX;
int32_t t36 = -34;
uint64_t x167 = 1802878076304598LLU;
int64_t x171 = INT64_MIN;
int64_t x184 = INT64_MIN;
int32_t t40 = -10282981;
uint16_t x185 = 0U;
int32_t x190 = INT32_MAX;
int32_t x199 = INT32_MIN;
uint8_t x200 = 8U;
volatile int32_t t44 = 10976;
int32_t x202 = INT32_MAX;
int32_t t45 = 5784;
uint64_t x209 = 14008170977505LLU;
uint16_t x220 = 43U;
int32_t t48 = -306;
static int8_t x222 = INT8_MAX;
static volatile uint16_t x230 = 21315U;
int64_t x231 = INT64_MAX;
volatile int64_t x232 = INT64_MAX;
static int16_t x238 = INT16_MIN;
int32_t t52 = -7;
volatile uint64_t x242 = 3298378826522LLU;
volatile int16_t x244 = 0;
volatile int32_t t55 = -482686;
int16_t x258 = -1;
uint16_t x264 = 2508U;
int8_t x266 = 31;
uint32_t x267 = 1792U;
volatile int8_t x268 = 35;
int32_t t59 = -44946643;
uint64_t x273 = 11625835140LLU;
int32_t t61 = -1;
int8_t x280 = -5;
static int64_t x283 = -1LL;
int8_t x284 = INT8_MIN;
volatile int8_t x300 = INT8_MIN;
uint32_t x304 = 0U;
static volatile int32_t t67 = -1;
int32_t x305 = 2;
static uint8_t x313 = 2U;
int16_t x314 = -1;
static int64_t x320 = -247LL;
static int32_t x336 = INT32_MIN;
int32_t x340 = INT32_MIN;
uint32_t x343 = UINT32_MAX;
uint64_t x347 = 3LLU;
uint16_t x348 = 2U;
int8_t x349 = -1;
int16_t x351 = INT16_MIN;
uint16_t x353 = 46U;
int64_t x355 = -2069724903617302695LL;
volatile int64_t x357 = 1608741778LL;
int32_t x361 = -1;
int16_t x365 = INT16_MIN;
static volatile int8_t x370 = 26;
uint32_t x376 = 616392U;
int64_t x383 = 44910495LL;
uint8_t x384 = 63U;
int32_t t86 = 1009;
volatile int32_t t87 = -44;
int8_t x389 = 1;
int64_t x392 = -1077003LL;
int32_t x395 = INT32_MIN;
int32_t t89 = -1207474;
int32_t x403 = INT32_MIN;
volatile int64_t x404 = 95278321465LL;
uint64_t x407 = UINT64_MAX;
int8_t x408 = INT8_MAX;
volatile int8_t x415 = INT8_MIN;
static int8_t x421 = -39;
int64_t x422 = 164LL;
int8_t x437 = INT8_MIN;
uint32_t x441 = 209696619U;


void f0(void) {
	int64_t x1 = -1LL;
	uint16_t x2 = 436U;
	volatile int64_t x4 = -1LL;
	int32_t t0 = -150;

	t0 = ((x1-x2)<(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 12333004U;
	int8_t x6 = INT8_MIN;
	uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = 13994;

	t1 = ((x5-x6)<(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x12 = 39;
	volatile int32_t t2 = 1;

	t2 = ((x9-x10)<(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	volatile int8_t x14 = INT8_MAX;
	uint64_t x15 = 6LLU;
	volatile int64_t x16 = -1147381190817464914LL;
	volatile int32_t t3 = -1078;

	t3 = ((x13-x14)<(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 19080;
	volatile uint8_t x18 = 127U;
	int32_t x19 = 27;
	int8_t x20 = 21;
	volatile int32_t t4 = 17;

	t4 = ((x17-x18)<(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = 242993LL;
	volatile uint64_t x23 = 206119049956220279LLU;
	static int8_t x24 = INT8_MIN;
	int32_t t5 = -463832218;

	t5 = ((x21-x22)<(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 733;
	volatile int8_t x27 = INT8_MAX;
	volatile int32_t t6 = -57;

	t6 = ((x25-x26)<(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -59440028LL;
	uint32_t x30 = 2824U;
	int8_t x31 = 11;
	int32_t x32 = -783960;
	int32_t t7 = -12199621;

	t7 = ((x29-x30)<(x31^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	int32_t x34 = INT32_MAX;
	static volatile uint32_t x35 = UINT32_MAX;
	int32_t x36 = INT32_MAX;

	t8 = ((x33-x34)<(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -25867;
	int64_t x38 = -1LL;
	uint32_t x39 = 20220U;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -792053;

	t9 = ((x37-x38)<(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	static int32_t x42 = INT32_MIN;
	uint32_t x43 = 74804499U;
	uint64_t x44 = UINT64_MAX;

	t10 = ((x41-x42)<(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint32_t x46 = 31908U;
	int16_t x47 = INT16_MIN;
	uint64_t x48 = 27153145LLU;
	int32_t t11 = 1625;

	t11 = ((x45-x46)<(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 2652LLU;
	volatile uint16_t x51 = UINT16_MAX;
	uint16_t x52 = 5419U;
	static volatile int32_t t12 = -13;

	t12 = ((x49-x50)<(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 55859;

	t13 = ((x53-x54)<(x55^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	int16_t x58 = -1;
	int32_t t14 = 166869484;

	t14 = ((x57-x58)<(x59^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MAX;
	static uint16_t x63 = 6U;

	t15 = ((x61-x62)<(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 129180122LLU;
	uint32_t x66 = 6715U;
	volatile uint16_t x67 = UINT16_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	int32_t t16 = -2750438;

	t16 = ((x65-x66)<(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 42U;
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MAX;
	static uint16_t x72 = 1453U;
	int32_t t17 = 1344052;

	t17 = ((x69-x70)<(x71^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = UINT32_MAX;
	static uint8_t x74 = 3U;
	int8_t x75 = 15;
	int64_t x76 = 1021939915019258LL;
	volatile int32_t t18 = -9;

	t18 = ((x73-x74)<(x75^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 208025350096LLU;
	int64_t x78 = INT64_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 99275224;

	t19 = ((x77-x78)<(x79^x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -25;
	volatile int8_t x82 = -3;
	int16_t x83 = INT16_MAX;
	uint64_t x84 = 473LLU;
	int32_t t20 = 132;

	t20 = ((x81-x82)<(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 1095079690U;
	volatile int64_t x88 = 3911594508553295425LL;
	int32_t t21 = 2600029;

	t21 = ((x85-x86)<(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x93 = UINT64_MAX;
	static volatile int8_t x94 = INT8_MAX;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t22 = 484;

	t22 = ((x93-x94)<(x95^x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 1375677311317927LLU;
	static int32_t x98 = INT32_MIN;
	volatile uint32_t x99 = 921380678U;
	int32_t t23 = 0;

	t23 = ((x97-x98)<(x99^x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 18288U;
	static int8_t x106 = INT8_MIN;
	uint16_t x107 = 22561U;
	static int8_t x108 = 1;
	volatile int32_t t24 = -24470;

	t24 = ((x105-x106)<(x107^x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x109 = 6U;
	volatile uint64_t x110 = 2080073LLU;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t25 = 1829;

	t25 = ((x109-x110)<(x111^x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 978598U;
	volatile int32_t x115 = -1;
	volatile int8_t x116 = INT8_MIN;

	t26 = ((x113-x114)<(x115^x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = UINT16_MAX;
	uint8_t x120 = 1U;

	t27 = ((x117-x118)<(x119^x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = -1;
	int8_t x122 = -1;
	static int32_t x123 = INT32_MIN;
	static uint32_t x124 = 178679U;

	t28 = ((x121-x122)<(x123^x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	static int32_t x130 = INT32_MIN;
	static uint8_t x131 = UINT8_MAX;
	uint16_t x132 = UINT16_MAX;
	int32_t t29 = -174;

	t29 = ((x129-x130)<(x131^x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 61893LL;
	int16_t x134 = 1303;
	static int32_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t30 = 492;

	t30 = ((x133-x134)<(x135^x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x137 = 1LL;
	int32_t x140 = -102152;
	volatile int32_t t31 = -24749448;

	t31 = ((x137-x138)<(x139^x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x146 = INT8_MAX;
	int16_t x147 = 58;
	volatile int32_t t32 = 1494;

	t32 = ((x145-x146)<(x147^x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x149 = -1;
	static int64_t x150 = 11LL;
	static int16_t x151 = INT16_MIN;
	static uint16_t x152 = 48U;

	t33 = ((x149-x150)<(x151^x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 22894U;
	static uint16_t x156 = UINT16_MAX;
	static int32_t t34 = 54268;

	t34 = ((x153-x154)<(x155^x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x157 = 4U;
	volatile int32_t x158 = -1;
	volatile int64_t x160 = INT64_MIN;
	int32_t t35 = -3;

	t35 = ((x157-x158)<(x159^x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x161 = 3527975124199146LLU;
	static volatile uint8_t x162 = UINT8_MAX;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = INT8_MIN;

	t36 = ((x161-x162)<(x163^x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x165 = 2027915U;
	int16_t x166 = INT16_MIN;
	uint16_t x168 = 0U;
	int32_t t37 = -1;

	t37 = ((x165-x166)<(x167^x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x169 = 924210LLU;
	volatile int32_t x170 = INT32_MIN;
	int16_t x172 = -1;
	int32_t t38 = -22;

	t38 = ((x169-x170)<(x171^x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MAX;
	static uint8_t x176 = 24U;
	volatile int32_t t39 = 54871;

	t39 = ((x173-x174)<(x175^x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -17;
	int8_t x182 = -1;
	static volatile int16_t x183 = -648;

	t40 = ((x181-x182)<(x183^x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x186 = INT8_MAX;
	static int64_t x187 = -1LL;
	static volatile int64_t x188 = 78602049569211790LL;
	static volatile int32_t t41 = -9;

	t41 = ((x185-x186)<(x187^x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 58011868804LLU;
	int32_t x191 = INT32_MIN;
	static int16_t x192 = -1;
	volatile int32_t t42 = -442539835;

	t42 = ((x189-x190)<(x191^x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x193 = 2U;
	uint8_t x194 = 48U;
	static int8_t x195 = -5;
	int32_t x196 = INT32_MIN;
	int32_t t43 = 85837;

	t43 = ((x193-x194)<(x195^x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = 19;
	volatile uint16_t x198 = UINT16_MAX;

	t44 = ((x197-x198)<(x199^x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 211U;
	uint8_t x203 = 28U;
	int32_t x204 = INT32_MIN;

	t45 = ((x201-x202)<(x203^x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x210 = 21005554LLU;
	int64_t x211 = 15730713176LL;
	int8_t x212 = INT8_MAX;
	static volatile int32_t t46 = 7868369;

	t46 = ((x209-x210)<(x211^x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	static int64_t x214 = -722653506LL;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = UINT64_MAX;
	int32_t t47 = 599252;

	t47 = ((x213-x214)<(x215^x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MIN;
	int8_t x219 = -1;

	t48 = ((x217-x218)<(x219^x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = INT32_MAX;
	int32_t x223 = INT32_MIN;
	uint32_t x224 = UINT32_MAX;
	int32_t t49 = 7;

	t49 = ((x221-x222)<(x223^x224));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x225 = 1LLU;
	int32_t x226 = -410873086;
	int64_t x227 = 18393151LL;
	int8_t x228 = INT8_MIN;
	int32_t t50 = 769603109;

	t50 = ((x225-x226)<(x227^x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = 2;
	volatile int32_t t51 = -124277485;

	t51 = ((x229-x230)<(x231^x232));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = 269U;
	int32_t x239 = -1566;
	volatile int64_t x240 = -1LL;

	t52 = ((x237-x238)<(x239^x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x241 = 0;
	uint32_t x243 = 94U;
	volatile int32_t t53 = -2053356;

	t53 = ((x241-x242)<(x243^x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -3285408973970LL;
	volatile int16_t x246 = INT16_MIN;
	int32_t x247 = -23763;
	int16_t x248 = INT16_MIN;
	volatile int32_t t54 = -106373;

	t54 = ((x245-x246)<(x247^x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = 1578452;
	int16_t x250 = 15767;
	volatile uint32_t x251 = UINT32_MAX;
	int64_t x252 = 134867177LL;

	t55 = ((x249-x250)<(x251^x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = 0;
	volatile int8_t x255 = INT8_MAX;
	int8_t x256 = INT8_MAX;
	int32_t t56 = -939830;

	t56 = ((x253-x254)<(x255^x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x257 = INT64_MIN;
	int16_t x259 = -1;
	static uint8_t x260 = 22U;
	int32_t t57 = -21118;

	t57 = ((x257-x258)<(x259^x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x261 = 52035U;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MAX;
	volatile int32_t t58 = 169238;

	t58 = ((x261-x262)<(x263^x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = -57;

	t59 = ((x265-x266)<(x267^x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -1;
	volatile int64_t x270 = -1LL;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 31853U;
	int32_t t60 = -4994783;

	t60 = ((x269-x270)<(x271^x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x274 = INT64_MAX;
	static int32_t x275 = INT32_MIN;
	int16_t x276 = -6966;

	t61 = ((x273-x274)<(x275^x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x277 = 38;
	int64_t x278 = -1LL;
	static int32_t x279 = INT32_MIN;
	volatile int32_t t62 = -95724;

	t62 = ((x277-x278)<(x279^x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	static volatile int32_t t63 = -122169;

	t63 = ((x281-x282)<(x283^x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = 133;
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = -15;
	uint64_t x288 = 1445002840974473LLU;
	int32_t t64 = 579086791;

	t64 = ((x285-x286)<(x287^x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x289 = 80141117812530LLU;
	uint16_t x290 = 28U;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = 0;
	static volatile int32_t t65 = -17543152;

	t65 = ((x289-x290)<(x291^x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -1;
	volatile uint64_t x298 = 1703586425690955014LLU;
	uint16_t x299 = UINT16_MAX;
	volatile int32_t t66 = 3;

	t66 = ((x297-x298)<(x299^x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x301 = -1;
	static int16_t x302 = -1;
	uint8_t x303 = 1U;

	t67 = ((x301-x302)<(x303^x304));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x306 = INT64_MAX;
	static volatile int8_t x307 = INT8_MIN;
	int32_t x308 = 444;
	int32_t t68 = 567791764;

	t68 = ((x305-x306)<(x307^x308));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = 14;
	int32_t x310 = -2055566;
	uint64_t x311 = 428764LLU;
	static volatile uint64_t x312 = UINT64_MAX;
	static int32_t t69 = 3102;

	t69 = ((x309-x310)<(x311^x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x315 = 2LLU;
	static int64_t x316 = INT64_MIN;
	volatile int32_t t70 = 1985075;

	t70 = ((x313-x314)<(x315^x316));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = 0U;
	static uint32_t x319 = 6U;
	int32_t t71 = -791475;

	t71 = ((x317-x318)<(x319^x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = -1;
	int64_t x322 = INT64_MIN;
	volatile int8_t x323 = -1;
	int64_t x324 = -61LL;
	int32_t t72 = 168012812;

	t72 = ((x321-x322)<(x323^x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x325 = -1LL;
	int64_t x326 = -13020650302LL;
	uint64_t x327 = 1LLU;
	int16_t x328 = INT16_MIN;
	volatile int32_t t73 = 30304;

	t73 = ((x325-x326)<(x327^x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x333 = 1521058LLU;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = 0;
	int32_t t74 = -3467469;

	t74 = ((x333-x334)<(x335^x336));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x337 = UINT64_MAX;
	volatile uint64_t x338 = 45127921558LLU;
	int16_t x339 = -2465;
	int32_t t75 = 2095515;

	t75 = ((x337-x338)<(x339^x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = INT16_MAX;
	volatile int8_t x342 = -2;
	int16_t x344 = 1760;
	volatile int32_t t76 = -34562839;

	t76 = ((x341-x342)<(x343^x344));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x345 = UINT32_MAX;
	volatile int16_t x346 = -1;
	int32_t t77 = 1;

	t77 = ((x345-x346)<(x347^x348));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x350 = INT32_MIN;
	volatile int64_t x352 = INT64_MIN;
	int32_t t78 = -579;

	t78 = ((x349-x350)<(x351^x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x354 = UINT8_MAX;
	volatile int16_t x356 = -1;
	static int32_t t79 = -4;

	t79 = ((x353-x354)<(x355^x356));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x358 = 831U;
	int8_t x359 = 12;
	volatile uint32_t x360 = 470U;
	volatile int32_t t80 = 740441;

	t80 = ((x357-x358)<(x359^x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x362 = 69U;
	volatile uint16_t x363 = 247U;
	int8_t x364 = INT8_MIN;
	static int32_t t81 = -15287222;

	t81 = ((x361-x362)<(x363^x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x366 = INT64_MIN;
	volatile uint16_t x367 = UINT16_MAX;
	int32_t x368 = -1;
	static int32_t t82 = -20209130;

	t82 = ((x365-x366)<(x367^x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = -1;
	static uint32_t x371 = 44133322U;
	volatile int16_t x372 = INT16_MIN;
	static volatile int32_t t83 = -534883;

	t83 = ((x369-x370)<(x371^x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = -1LL;
	volatile int8_t x374 = INT8_MIN;
	volatile uint16_t x375 = 3262U;
	static int32_t t84 = -22890;

	t84 = ((x373-x374)<(x375^x376));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x377 = 2830936026780800LLU;
	int8_t x378 = INT8_MAX;
	int32_t x379 = INT32_MAX;
	int32_t x380 = 149255;
	int32_t t85 = -8136;

	t85 = ((x377-x378)<(x379^x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = 136540525899702262LLU;
	uint32_t x382 = 79860839U;

	t86 = ((x381-x382)<(x383^x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = -1;
	int64_t x386 = 13251772063460797LL;
	static int64_t x387 = INT64_MAX;
	uint64_t x388 = 26038899LLU;

	t87 = ((x385-x386)<(x387^x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x390 = -806;
	int8_t x391 = INT8_MIN;
	volatile int32_t t88 = -3453889;

	t88 = ((x389-x390)<(x391^x392));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x393 = INT64_MIN;
	uint64_t x394 = UINT64_MAX;
	static volatile int32_t x396 = INT32_MAX;

	t89 = ((x393-x394)<(x395^x396));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MIN;
	int8_t x402 = -1;
	volatile int32_t t90 = -1;

	t90 = ((x401-x402)<(x403^x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x405 = -4462;
	uint64_t x406 = UINT64_MAX;
	volatile int32_t t91 = -918;

	t91 = ((x405-x406)<(x407^x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x409 = 7;
	uint32_t x410 = 3932U;
	volatile int16_t x411 = -1;
	int64_t x412 = -1LL;
	int32_t t92 = -7026;

	t92 = ((x409-x410)<(x411^x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x413 = 234205274U;
	uint16_t x414 = UINT16_MAX;
	int32_t x416 = INT32_MAX;
	volatile int32_t t93 = 63521;

	t93 = ((x413-x414)<(x415^x416));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x417 = UINT32_MAX;
	static int8_t x418 = -1;
	int16_t x419 = INT16_MIN;
	int16_t x420 = -1;
	int32_t t94 = -619;

	t94 = ((x417-x418)<(x419^x420));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x423 = UINT8_MAX;
	static int8_t x424 = INT8_MIN;
	volatile int32_t t95 = -5027;

	t95 = ((x421-x422)<(x423^x424));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x429 = 785678240936LLU;
	uint8_t x430 = 109U;
	uint8_t x431 = UINT8_MAX;
	static uint8_t x432 = UINT8_MAX;
	volatile int32_t t96 = -1;

	t96 = ((x429-x430)<(x431^x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x433 = INT8_MIN;
	int64_t x434 = -1LL;
	int8_t x435 = INT8_MIN;
	int16_t x436 = -1;
	int32_t t97 = 0;

	t97 = ((x433-x434)<(x435^x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x438 = 4U;
	uint64_t x439 = 221196189LLU;
	uint8_t x440 = UINT8_MAX;
	int32_t t98 = 245;

	t98 = ((x437-x438)<(x439^x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x442 = 763U;
	int32_t x443 = -4;
	int32_t x444 = -118477;
	int32_t t99 = 17;

	t99 = ((x441-x442)<(x443^x444));

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

