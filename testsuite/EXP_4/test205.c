#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
volatile uint32_t x4 = 5737U;
static volatile int32_t t0 = 83700;
int32_t t2 = -25828;
volatile int16_t x32 = INT16_MIN;
int32_t t4 = 3717;
static int16_t x54 = INT16_MAX;
uint8_t x57 = UINT8_MAX;
int32_t x61 = INT32_MAX;
int32_t x66 = INT32_MAX;
int32_t t8 = 33156081;
int32_t x79 = -1;
int32_t x99 = INT32_MAX;
uint32_t x100 = 156427744U;
int32_t t11 = -1;
int64_t x103 = -1LL;
static uint32_t x110 = UINT32_MAX;
volatile uint8_t x111 = 14U;
uint32_t x112 = UINT32_MAX;
int32_t t13 = -3594;
uint16_t x115 = UINT16_MAX;
int32_t x121 = INT32_MIN;
static int32_t t16 = 531;
int32_t t18 = -354840298;
int32_t x143 = 1370380;
int32_t x146 = -64400;
int16_t x152 = INT16_MIN;
uint64_t x156 = 7515LLU;
static volatile int32_t t22 = 462;
volatile uint8_t x161 = 11U;
int32_t x163 = -1;
int32_t t23 = 0;
int32_t t24 = 25631;
volatile int8_t x172 = INT8_MIN;
static int32_t t26 = 2170126;
int64_t x181 = INT64_MIN;
static int32_t x185 = 445;
uint64_t x198 = UINT64_MAX;
volatile int16_t x199 = 5970;
static volatile int32_t t31 = -31774642;
volatile int32_t t32 = 171;
int8_t x231 = INT8_MIN;
uint32_t x237 = 274400835U;
int32_t t36 = -806;
uint16_t x247 = 176U;
int16_t x250 = INT16_MIN;
static int16_t x256 = INT16_MAX;
volatile uint8_t x258 = 3U;
uint32_t x266 = UINT32_MAX;
int16_t x268 = INT16_MIN;
int32_t t42 = -11;
volatile int32_t t43 = 828;
volatile int8_t x275 = INT8_MIN;
int64_t x276 = 2044884381LL;
volatile int32_t t44 = 57;
static int64_t x279 = -399409372930354LL;
uint16_t x281 = 19782U;
int8_t x284 = INT8_MIN;
uint16_t x286 = 13U;
int16_t x297 = -1;
uint64_t x298 = UINT64_MAX;
static volatile int8_t x303 = 1;
static uint16_t x304 = 13U;
int64_t x305 = -1LL;
int64_t x306 = -1LL;
volatile uint64_t x309 = UINT64_MAX;
static int64_t x321 = INT64_MAX;
volatile int32_t x329 = INT32_MIN;
static int64_t x332 = -1LL;
int64_t x336 = INT64_MIN;
int16_t x337 = -1;
volatile int64_t x379 = -1LL;
uint16_t x384 = 129U;
int32_t t63 = 34;
static uint16_t x386 = 18190U;
int64_t x387 = -1LL;
int8_t x388 = INT8_MIN;
volatile int32_t t64 = 8402503;
volatile int32_t t65 = 496538;
int16_t x402 = 0;
uint64_t x409 = 2359LLU;
int64_t x413 = -1LL;
int32_t x419 = -315;
int16_t x429 = -1;
int32_t x438 = 1855699;
uint32_t x443 = 15U;
int16_t x445 = -1;
volatile int32_t t75 = -441;
uint32_t x454 = 236654U;
uint32_t x457 = 51027U;
static int32_t x464 = -1;
int64_t x471 = INT64_MAX;
volatile int32_t t79 = -297748947;
volatile int64_t x474 = -1LL;
static int16_t x475 = INT16_MAX;
int32_t t80 = 92605804;
int32_t x479 = -1;
volatile int32_t t83 = 244173809;
volatile int8_t x494 = 1;
int8_t x497 = INT8_MAX;
int32_t t88 = -5;
int32_t x519 = -14741557;
static int16_t x525 = INT16_MIN;
uint32_t x542 = UINT32_MAX;
int32_t t93 = -1035286;
int64_t x546 = -103521490LL;
uint32_t x548 = 93384048U;
static uint16_t x549 = 10U;
uint32_t x554 = 575831851U;
int32_t x560 = -5697949;
uint8_t x563 = 6U;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int8_t x3 = -8;

	t0 = (x1<=(x2*(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	volatile int32_t x7 = INT32_MIN;
	volatile int64_t x8 = -1LL;
	volatile int32_t t1 = -1;

	t1 = (x5<=(x6*(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = 1;
	volatile uint64_t x22 = 116460LLU;
	volatile int16_t x23 = INT16_MIN;
	static uint32_t x24 = UINT32_MAX;

	t2 = (x21<=(x22*(x23-x24)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = INT16_MIN;
	volatile uint64_t x30 = 545903LLU;
	int32_t x31 = INT32_MIN;
	int32_t t3 = 2520;

	t3 = (x29<=(x30*(x31-x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x45 = 498137400484793LLU;
	int64_t x46 = INT64_MIN;
	uint16_t x47 = 5038U;
	static uint64_t x48 = UINT64_MAX;

	t4 = (x45<=(x46*(x47-x48)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x53 = UINT16_MAX;
	uint32_t x55 = UINT32_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t5 = -1;

	t5 = (x53<=(x54*(x55-x56)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x58 = 486519933245LLU;
	int16_t x59 = INT16_MAX;
	uint8_t x60 = 102U;
	volatile int32_t t6 = 404;

	t6 = (x57<=(x58*(x59-x60)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x62 = 1;
	int32_t x63 = 77;
	uint64_t x64 = 13169910LLU;
	volatile int32_t t7 = 2923702;

	t7 = (x61<=(x62*(x63-x64)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x65 = UINT16_MAX;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;

	t8 = (x65<=(x66*(x67-x68)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x73 = 91U;
	int8_t x74 = INT8_MAX;
	int64_t x75 = 21260609859LL;
	int32_t x76 = INT32_MIN;
	int32_t t9 = -1937;

	t9 = (x73<=(x74*(x75-x76)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x77 = 185014504144758LL;
	int16_t x78 = -3121;
	uint32_t x80 = 17075U;
	int32_t t10 = -113169;

	t10 = (x77<=(x78*(x79-x80)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x97 = INT8_MAX;
	uint64_t x98 = 0LLU;

	t11 = (x97<=(x98*(x99-x100)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x101 = -2;
	static int16_t x102 = INT16_MIN;
	int64_t x104 = -1LL;
	volatile int32_t t12 = 11828;

	t12 = (x101<=(x102*(x103-x104)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x109 = INT64_MIN;

	t13 = (x109<=(x110*(x111-x112)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x113 = -1;
	int8_t x114 = -3;
	int8_t x116 = -1;
	static int32_t t14 = 1;

	t14 = (x113<=(x114*(x115-x116)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	uint8_t x119 = 3U;
	volatile int8_t x120 = -28;
	static int32_t t15 = 578;

	t15 = (x117<=(x118*(x119-x120)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x122 = -1;
	volatile int16_t x123 = -1;
	static volatile uint64_t x124 = 157358504831858872LLU;

	t16 = (x121<=(x122*(x123-x124)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x129 = -1;
	volatile int64_t x130 = -169644639325LL;
	static uint16_t x131 = UINT16_MAX;
	static uint64_t x132 = UINT64_MAX;
	int32_t t17 = 4;

	t17 = (x129<=(x130*(x131-x132)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x133 = INT8_MIN;
	static int8_t x134 = -13;
	volatile int64_t x135 = -205739LL;
	int16_t x136 = INT16_MIN;

	t18 = (x133<=(x134*(x135-x136)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t19 = 747;

	t19 = (x141<=(x142*(x143-x144)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x145 = 2U;
	static int16_t x147 = INT16_MAX;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t20 = 117489069;

	t20 = (x145<=(x146*(x147-x148)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x150 = 1134629507U;
	static int8_t x151 = INT8_MAX;
	static int32_t t21 = 1569015;

	t21 = (x149<=(x150*(x151-x152)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x153 = 2U;
	static int8_t x154 = -1;
	int8_t x155 = -1;

	t22 = (x153<=(x154*(x155-x156)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x162 = 2823411LLU;
	uint8_t x164 = 5U;

	t23 = (x161<=(x162*(x163-x164)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x165 = INT8_MIN;
	static uint32_t x166 = 54U;
	int8_t x167 = INT8_MAX;
	static int16_t x168 = -121;

	t24 = (x165<=(x166*(x167-x168)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x169 = -1;
	int8_t x170 = -8;
	int64_t x171 = -1LL;
	static volatile int32_t t25 = -914;

	t25 = (x169<=(x170*(x171-x172)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x173 = 696083724U;
	uint32_t x174 = 488U;
	int8_t x175 = -31;
	static uint16_t x176 = UINT16_MAX;

	t26 = (x173<=(x174*(x175-x176)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint8_t x178 = 2U;
	uint32_t x179 = 6U;
	static uint32_t x180 = 2U;
	volatile int32_t t27 = -2023;

	t27 = (x177<=(x178*(x179-x180)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x182 = -1LL;
	int64_t x183 = -275739979571684LL;
	volatile uint8_t x184 = 16U;
	volatile int32_t t28 = -18206;

	t28 = (x181<=(x182*(x183-x184)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x186 = 1U;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MIN;
	volatile int32_t t29 = -34;

	t29 = (x185<=(x186*(x187-x188)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x197 = -31;
	int16_t x200 = 577;
	volatile int32_t t30 = 2421;

	t30 = (x197<=(x198*(x199-x200)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = -353913LL;
	static volatile uint32_t x203 = 597757U;
	int32_t x204 = -23122;

	t31 = (x201<=(x202*(x203-x204)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x213 = -1LL;
	int8_t x214 = -1;
	volatile uint8_t x215 = 50U;
	uint64_t x216 = 156LLU;

	t32 = (x213<=(x214*(x215-x216)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x221 = -249;
	static volatile uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MAX;
	int32_t x224 = 48;
	volatile int32_t t33 = -4;

	t33 = (x221<=(x222*(x223-x224)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x229 = UINT16_MAX;
	static int32_t x230 = INT32_MIN;
	static volatile int64_t x232 = 2LL;
	static volatile int32_t t34 = -49;

	t34 = (x229<=(x230*(x231-x232)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x233 = 222LLU;
	int16_t x234 = INT16_MIN;
	int64_t x235 = -1LL;
	int32_t x236 = 13;
	int32_t t35 = 20336560;

	t35 = (x233<=(x234*(x235-x236)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MAX;

	t36 = (x237<=(x238*(x239-x240)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x241 = 22926458;
	int16_t x242 = 5;
	static uint16_t x243 = 299U;
	static int64_t x244 = 716LL;
	int32_t t37 = 1;

	t37 = (x241<=(x242*(x243-x244)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x245 = -1;
	int16_t x246 = INT16_MIN;
	uint8_t x248 = 8U;
	volatile int32_t t38 = 92;

	t38 = (x245<=(x246*(x247-x248)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x249 = -199;
	uint8_t x251 = 79U;
	uint32_t x252 = 108988U;
	static int32_t t39 = 23458;

	t39 = (x249<=(x250*(x251-x252)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x253 = 430U;
	static uint32_t x254 = 196U;
	int8_t x255 = INT8_MAX;
	int32_t t40 = 8467425;

	t40 = (x253<=(x254*(x255-x256)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x257 = INT16_MIN;
	uint64_t x259 = 1712LLU;
	uint8_t x260 = UINT8_MAX;
	static volatile int32_t t41 = 59934;

	t41 = (x257<=(x258*(x259-x260)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x265 = -1;
	uint32_t x267 = 1048150514U;

	t42 = (x265<=(x266*(x267-x268)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x269 = -1;
	uint16_t x270 = 29622U;
	static uint16_t x271 = UINT16_MAX;
	uint16_t x272 = UINT16_MAX;

	t43 = (x269<=(x270*(x271-x272)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = -1;

	t44 = (x273<=(x274*(x275-x276)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	static int16_t x280 = -1151;
	int32_t t45 = 39689;

	t45 = (x277<=(x278*(x279-x280)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x282 = INT8_MAX;
	int32_t x283 = -1;
	static volatile int32_t t46 = 71;

	t46 = (x281<=(x282*(x283-x284)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x285 = INT64_MAX;
	int32_t x287 = -193;
	uint32_t x288 = UINT32_MAX;
	static volatile int32_t t47 = 105793;

	t47 = (x285<=(x286*(x287-x288)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x293 = 764LLU;
	volatile int64_t x294 = 1284642LL;
	int16_t x295 = INT16_MIN;
	static uint64_t x296 = 3245LLU;
	volatile int32_t t48 = 14428;

	t48 = (x293<=(x294*(x295-x296)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x299 = 1U;
	int64_t x300 = INT64_MAX;
	volatile int32_t t49 = 1589;

	t49 = (x297<=(x298*(x299-x300)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x301 = 123U;
	uint64_t x302 = UINT64_MAX;
	volatile int32_t t50 = -1;

	t50 = (x301<=(x302*(x303-x304)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x307 = -1;
	int16_t x308 = 1408;
	volatile int32_t t51 = 1430;

	t51 = (x305<=(x306*(x307-x308)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x310 = -39;
	volatile int32_t x311 = -25;
	volatile int32_t x312 = -5655;
	int32_t t52 = -950569;

	t52 = (x309<=(x310*(x311-x312)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x313 = INT8_MIN;
	static volatile uint16_t x314 = 3U;
	uint64_t x315 = UINT64_MAX;
	static int64_t x316 = -1LL;
	static int32_t t53 = 1;

	t53 = (x313<=(x314*(x315-x316)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = 1U;
	static int16_t x319 = -1;
	static uint8_t x320 = 0U;
	int32_t t54 = -477193;

	t54 = (x317<=(x318*(x319-x320)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x322 = 323;
	uint32_t x323 = 93U;
	int64_t x324 = 437LL;
	volatile int32_t t55 = 1;

	t55 = (x321<=(x322*(x323-x324)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x330 = 23U;
	static int8_t x331 = INT8_MIN;
	int32_t t56 = 1;

	t56 = (x329<=(x330*(x331-x332)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x333 = UINT32_MAX;
	uint8_t x334 = 1U;
	int16_t x335 = -1;
	volatile int32_t t57 = 469;

	t57 = (x333<=(x334*(x335-x336)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x338 = 3466U;
	int16_t x339 = -1;
	volatile int8_t x340 = INT8_MIN;
	int32_t t58 = -14076673;

	t58 = (x337<=(x338*(x339-x340)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	volatile int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t59 = 161362611;

	t59 = (x341<=(x342*(x343-x344)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x357 = 26;
	uint64_t x358 = 71387943LLU;
	int16_t x359 = 167;
	uint32_t x360 = 1218763978U;
	static int32_t t60 = -8393;

	t60 = (x357<=(x358*(x359-x360)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x365 = -1;
	uint64_t x366 = 5089145539477LLU;
	int64_t x367 = 2383140154670116955LL;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t61 = -804641102;

	t61 = (x365<=(x366*(x367-x368)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x377 = 591;
	int32_t x378 = INT32_MAX;
	int8_t x380 = -1;
	int32_t t62 = -239742421;

	t62 = (x377<=(x378*(x379-x380)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x381 = 453484574520168438LLU;
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;

	t63 = (x381<=(x382*(x383-x384)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x385 = INT16_MAX;

	t64 = (x385<=(x386*(x387-x388)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x393 = UINT64_MAX;
	static volatile int8_t x394 = INT8_MIN;
	uint8_t x395 = 0U;
	static int16_t x396 = INT16_MIN;

	t65 = (x393<=(x394*(x395-x396)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x401 = 14U;
	uint16_t x403 = 30U;
	volatile int8_t x404 = INT8_MAX;
	static int32_t t66 = 12415;

	t66 = (x401<=(x402*(x403-x404)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MIN;
	uint8_t x407 = 7U;
	static volatile int16_t x408 = -1;
	int32_t t67 = -167;

	t67 = (x405<=(x406*(x407-x408)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x410 = 121;
	uint16_t x411 = 60U;
	uint8_t x412 = UINT8_MAX;
	int32_t t68 = 3971702;

	t68 = (x409<=(x410*(x411-x412)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x414 = 15371475804878LLU;
	volatile int16_t x415 = INT16_MIN;
	uint32_t x416 = 159114U;
	volatile int32_t t69 = 302619546;

	t69 = (x413<=(x414*(x415-x416)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x417 = 34U;
	static int16_t x418 = 0;
	int16_t x420 = INT16_MIN;
	int32_t t70 = -133996;

	t70 = (x417<=(x418*(x419-x420)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x425 = 5;
	uint64_t x426 = UINT64_MAX;
	uint16_t x427 = 26U;
	int64_t x428 = INT64_MAX;
	int32_t t71 = 177777817;

	t71 = (x425<=(x426*(x427-x428)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x430 = -85011488LL;
	int32_t x431 = INT32_MIN;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t72 = -349116;

	t72 = (x429<=(x430*(x431-x432)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x437 = 54U;
	int16_t x439 = -1;
	volatile uint64_t x440 = 7012810266278LLU;
	volatile int32_t t73 = -3108071;

	t73 = (x437<=(x438*(x439-x440)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x441 = 9284U;
	int16_t x442 = -2433;
	int16_t x444 = -1;
	volatile int32_t t74 = 129453858;

	t74 = (x441<=(x442*(x443-x444)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x446 = INT8_MIN;
	volatile int16_t x447 = 2;
	uint32_t x448 = UINT32_MAX;

	t75 = (x445<=(x446*(x447-x448)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x453 = INT16_MIN;
	volatile int32_t x455 = -1;
	int8_t x456 = INT8_MIN;
	static volatile int32_t t76 = 105809296;

	t76 = (x453<=(x454*(x455-x456)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x458 = 204;
	uint16_t x459 = 0U;
	static uint8_t x460 = UINT8_MAX;
	int32_t t77 = -7200664;

	t77 = (x457<=(x458*(x459-x460)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x461 = UINT64_MAX;
	int32_t x462 = -1;
	int64_t x463 = -102806124582LL;
	int32_t t78 = 3;

	t78 = (x461<=(x462*(x463-x464)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x469 = 27534370LL;
	volatile uint64_t x470 = 83LLU;
	volatile uint8_t x472 = 50U;

	t79 = (x469<=(x470*(x471-x472)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x473 = UINT16_MAX;
	int32_t x476 = -940158957;

	t80 = (x473<=(x474*(x475-x476)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x477 = INT32_MAX;
	volatile int16_t x478 = -1;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t81 = -1;

	t81 = (x477<=(x478*(x479-x480)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x481 = -1;
	volatile int8_t x482 = 1;
	uint8_t x483 = 1U;
	static int64_t x484 = -347823LL;
	volatile int32_t t82 = 803;

	t82 = (x481<=(x482*(x483-x484)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x485 = 7166063292581500LL;
	int32_t x486 = INT32_MIN;
	int8_t x487 = -1;
	uint32_t x488 = 10637U;

	t83 = (x485<=(x486*(x487-x488)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x493 = INT64_MIN;
	volatile uint64_t x495 = 36LLU;
	int16_t x496 = 1;
	int32_t t84 = 716681;

	t84 = (x493<=(x494*(x495-x496)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x498 = UINT64_MAX;
	volatile int16_t x499 = -1;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t85 = 1;

	t85 = (x497<=(x498*(x499-x500)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x505 = 580067U;
	uint32_t x506 = 11064U;
	volatile int32_t x507 = -1;
	static int8_t x508 = 3;
	int32_t t86 = 219321122;

	t86 = (x505<=(x506*(x507-x508)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x509 = 193LLU;
	static int64_t x510 = -40873LL;
	uint64_t x511 = UINT64_MAX;
	uint16_t x512 = 204U;
	int32_t t87 = 225063471;

	t87 = (x509<=(x510*(x511-x512)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x513 = INT64_MAX;
	static uint32_t x514 = UINT32_MAX;
	uint64_t x515 = 0LLU;
	static volatile uint16_t x516 = 430U;

	t88 = (x513<=(x514*(x515-x516)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x517 = 0;
	uint8_t x518 = 1U;
	uint32_t x520 = 769U;
	volatile int32_t t89 = 47310;

	t89 = (x517<=(x518*(x519-x520)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x521 = INT8_MIN;
	volatile uint32_t x522 = UINT32_MAX;
	volatile int32_t x523 = -400;
	int32_t x524 = INT32_MIN;
	static volatile int32_t t90 = -953997973;

	t90 = (x521<=(x522*(x523-x524)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x526 = 1783LLU;
	int16_t x527 = INT16_MIN;
	int64_t x528 = 407443451241636LL;
	int32_t t91 = -31892519;

	t91 = (x525<=(x526*(x527-x528)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x537 = UINT8_MAX;
	uint8_t x538 = UINT8_MAX;
	volatile int16_t x539 = -1;
	int8_t x540 = -1;
	int32_t t92 = 17;

	t92 = (x537<=(x538*(x539-x540)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x541 = INT32_MIN;
	int32_t x543 = 2;
	uint16_t x544 = UINT16_MAX;

	t93 = (x541<=(x542*(x543-x544)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x545 = INT16_MIN;
	uint8_t x547 = 86U;
	volatile int32_t t94 = -23265;

	t94 = (x545<=(x546*(x547-x548)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x550 = 3432752LLU;
	volatile uint16_t x551 = UINT16_MAX;
	int32_t x552 = -868182;
	int32_t t95 = 9921656;

	t95 = (x549<=(x550*(x551-x552)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x553 = 675527165U;
	uint8_t x555 = UINT8_MAX;
	static volatile uint16_t x556 = 2474U;
	int32_t t96 = 542;

	t96 = (x553<=(x554*(x555-x556)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x557 = 170101284U;
	int8_t x558 = -1;
	int64_t x559 = -1LL;
	volatile int32_t t97 = -103483793;

	t97 = (x557<=(x558*(x559-x560)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x561 = -1;
	volatile int32_t x562 = -563;
	uint32_t x564 = 387638732U;
	int32_t t98 = -261656867;

	t98 = (x561<=(x562*(x563-x564)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x569 = 515U;
	volatile int8_t x570 = INT8_MAX;
	static int16_t x571 = INT16_MIN;
	uint32_t x572 = 11695U;
	volatile int32_t t99 = -15942;

	t99 = (x569<=(x570*(x571-x572)));

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

