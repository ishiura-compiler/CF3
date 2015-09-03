#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x15 = 3U;
int8_t x21 = -1;
int32_t t2 = 98484777;
static int8_t x31 = -9;
int32_t x32 = INT32_MIN;
int32_t t4 = 0;
int64_t t5 = -2158615871109LL;
static int64_t x62 = INT64_MIN;
volatile uint64_t x69 = 5897067677670674LLU;
int64_t x70 = INT64_MIN;
int8_t x71 = INT8_MIN;
uint8_t x81 = 6U;
uint16_t x83 = UINT16_MAX;
uint64_t t11 = 178LLU;
volatile int16_t x98 = 1;
uint64_t x99 = 609187516859LLU;
volatile int32_t x100 = -1738182;
uint32_t x101 = 50803348U;
volatile int8_t x115 = -1;
int16_t x119 = INT16_MAX;
volatile int64_t x130 = 19474842LL;
uint64_t x131 = 6855464601952861820LLU;
int32_t x140 = INT32_MAX;
uint32_t x153 = UINT32_MAX;
int16_t x174 = INT16_MIN;
int16_t x175 = -115;
volatile int64_t x179 = 443687577398LL;
static int64_t x198 = INT64_MIN;
int8_t x212 = INT8_MIN;
volatile int32_t t28 = 50445;
volatile uint8_t x227 = 6U;
volatile int32_t t29 = 2;
volatile int8_t x232 = -1;
static uint16_t x233 = 5034U;
volatile int32_t t32 = -1779070;
static volatile int8_t x254 = 3;
volatile int8_t x269 = INT8_MIN;
int8_t x284 = INT8_MAX;
int32_t x290 = INT32_MIN;
int32_t t38 = -325615;
int64_t x293 = 812061447659LL;
int8_t x294 = -16;
uint32_t t41 = UINT32_MAX;
int64_t x331 = -1LL;
uint32_t x342 = 108046U;
uint8_t x343 = 6U;
int16_t x349 = INT16_MIN;
volatile int32_t t44 = -54443947;
int16_t x379 = -1;
uint16_t x381 = UINT16_MAX;
uint8_t x383 = 52U;
int32_t t48 = -19;
static uint64_t x421 = UINT64_MAX;
int16_t x423 = 9941;
static int8_t x432 = 1;
int32_t x458 = -994900452;
uint16_t x465 = 48U;
uint8_t x466 = 16U;
volatile int8_t x467 = -1;
volatile int32_t t54 = -13057;
int16_t x502 = INT16_MIN;
int8_t x504 = INT8_MIN;
uint32_t x505 = UINT32_MAX;
uint16_t x508 = 41U;
static uint8_t x528 = UINT8_MAX;
int8_t x573 = 0;
int16_t x576 = 3;
int32_t t64 = -244395;
static uint64_t x578 = 445874LLU;
static volatile uint64_t x589 = UINT64_MAX;
volatile int8_t x591 = INT8_MIN;
volatile uint32_t x601 = 0U;
static int64_t x602 = -1LL;
static int64_t x604 = INT64_MIN;
uint32_t t67 = 7771964U;
int32_t x617 = INT32_MAX;
static volatile int8_t x636 = INT8_MIN;
static int8_t x646 = -44;
int8_t x648 = INT8_MAX;
static volatile int64_t x657 = INT64_MAX;
int64_t x658 = INT64_MIN;
volatile uint16_t x669 = 26793U;
volatile int16_t x670 = -1;
static volatile int64_t x678 = -433405879124030029LL;
volatile uint64_t t74 = UINT64_MAX;
int16_t x694 = INT16_MIN;
int64_t x701 = INT64_MIN;
static uint16_t x702 = 14U;
volatile uint8_t x713 = 2U;
int32_t t78 = 7286;
int16_t x733 = INT16_MIN;
static volatile uint8_t x737 = UINT8_MAX;
int64_t x745 = INT64_MIN;
int16_t x748 = 6;
volatile int8_t x754 = -1;
int32_t t85 = INT32_MAX;
int64_t x760 = -72723575531385965LL;
uint8_t x761 = UINT8_MAX;
int32_t x766 = 12481;
static int16_t x772 = INT16_MIN;
int32_t x774 = 0;
uint16_t x779 = UINT16_MAX;
uint16_t x799 = 2395U;
int32_t x805 = INT32_MIN;
static volatile int32_t x818 = INT32_MIN;
uint64_t x820 = 18212536LLU;
int32_t x826 = INT32_MIN;
int64_t x828 = -13LL;
int64_t x844 = -1LL;
int32_t t98 = -196;
int64_t x845 = -1LL;
uint32_t x846 = UINT32_MAX;


void f0(void) {
	uint64_t x1 = 460LLU;
	int64_t x2 = INT64_MIN;
	int32_t x3 = -1;
	volatile uint16_t x4 = 6419U;
	uint64_t t0 = 35LLU;

	t0 = (x1/(x2<=(x3-x4)));

	if (t0 != 460LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x13 = 548U;
	int8_t x14 = INT8_MIN;
	uint8_t x16 = 1U;
	volatile int32_t t1 = -7;

	t1 = (x13/(x14<=(x15-x16)));

	if (t1 != 548) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x22 = INT16_MIN;
	static int64_t x23 = -1LL;
	static int32_t x24 = -9557;

	t2 = (x21/(x22<=(x23-x24)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	volatile int8_t x26 = -1;
	int64_t x27 = INT64_MAX;
	int8_t x28 = 1;
	volatile int32_t t3 = 673264;

	t3 = (x25/(x26<=(x27-x28)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = 253;
	int16_t x30 = INT16_MAX;

	t4 = (x29/(x30<=(x31-x32)));

	if (t4 != 253) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x37 = 2264376018578LL;
	uint32_t x38 = 5U;
	uint64_t x39 = 624769915LLU;
	int8_t x40 = -20;

	t5 = (x37/(x38<=(x39-x40)));

	if (t5 != 2264376018578LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x53 = 0U;
	int8_t x54 = 60;
	uint16_t x55 = UINT16_MAX;
	static volatile int16_t x56 = 3;
	static volatile int32_t t6 = 87714;

	t6 = (x53/(x54<=(x55-x56)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x61 = -344566269LL;
	volatile int16_t x63 = INT16_MAX;
	int64_t x64 = -1LL;
	volatile int64_t t7 = -1654437933367091674LL;

	t7 = (x61/(x62<=(x63-x64)));

	if (t7 != -344566269LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x72 = UINT8_MAX;
	static volatile uint64_t t8 = 5872005LLU;

	t8 = (x69/(x70<=(x71-x72)));

	if (t8 != 5897067677670674LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x77 = 25U;
	int8_t x78 = INT8_MAX;
	int32_t x79 = INT32_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t9 = 3;

	t9 = (x77/(x78<=(x79-x80)));

	if (t9 != 25) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x82 = 2U;
	static int16_t x84 = INT16_MAX;
	static int32_t t10 = 492658;

	t10 = (x81/(x82<=(x83-x84)));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x89 = 2078209782773818LLU;
	static int16_t x90 = -1;
	volatile uint16_t x91 = 973U;
	int8_t x92 = INT8_MAX;

	t11 = (x89/(x90<=(x91-x92)));

	if (t11 != 2078209782773818LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x97 = INT8_MIN;
	volatile int32_t t12 = -59340;

	t12 = (x97/(x98<=(x99-x100)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x102 = INT16_MIN;
	int16_t x103 = 59;
	int8_t x104 = INT8_MIN;
	uint32_t t13 = 17949U;

	t13 = (x101/(x102<=(x103-x104)));

	if (t13 != 50803348U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x113 = 54879946LLU;
	static int32_t x114 = -1;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t14 = 4826812157354217LLU;

	t14 = (x113/(x114<=(x115-x116)));

	if (t14 != 54879946LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x117 = 609;
	uint8_t x118 = 0U;
	static volatile uint8_t x120 = 1U;
	int32_t t15 = -296066;

	t15 = (x117/(x118<=(x119-x120)));

	if (t15 != 609) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x125 = -1;
	uint8_t x126 = 0U;
	int8_t x127 = 1;
	int16_t x128 = INT16_MIN;
	int32_t t16 = -343623217;

	t16 = (x125/(x126<=(x127-x128)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x129 = INT16_MIN;
	volatile int8_t x132 = 21;
	volatile int32_t t17 = 4597164;

	t17 = (x129/(x130<=(x131-x132)));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x137 = INT16_MIN;
	volatile int8_t x138 = -6;
	int64_t x139 = 654057519445LL;
	int32_t t18 = -644420;

	t18 = (x137/(x138<=(x139-x140)));

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x149 = -172;
	int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t19 = -5844;

	t19 = (x149/(x150<=(x151-x152)));

	if (t19 != -172) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x154 = 407172LLU;
	int64_t x155 = -3309675668905496LL;
	static volatile int64_t x156 = INT64_MIN;
	static uint32_t t20 = UINT32_MAX;

	t20 = (x153/(x154<=(x155-x156)));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x157 = INT8_MIN;
	int64_t x158 = -2LL;
	static uint32_t x159 = 6637630U;
	int8_t x160 = -1;
	static int32_t t21 = -38837014;

	t21 = (x157/(x158<=(x159-x160)));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x169 = INT16_MIN;
	int16_t x170 = -1;
	int32_t x171 = -1;
	int32_t x172 = -1;
	int32_t t22 = 120810;

	t22 = (x169/(x170<=(x171-x172)));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x173 = 793U;
	int8_t x176 = -1;
	static int32_t t23 = -81638300;

	t23 = (x173/(x174<=(x175-x176)));

	if (t23 != 793) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x177 = UINT64_MAX;
	int16_t x178 = -1;
	static volatile int16_t x180 = 6004;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (x177/(x178<=(x179-x180)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x181 = 113466673LLU;
	int64_t x182 = INT64_MIN;
	volatile int16_t x183 = INT16_MIN;
	uint32_t x184 = 124U;
	uint64_t t25 = 5LLU;

	t25 = (x181/(x182<=(x183-x184)));

	if (t25 != 113466673LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x185 = 1014331726195593LL;
	uint64_t x186 = 952887459382405LLU;
	uint16_t x187 = 12698U;
	static int64_t x188 = INT64_MAX;
	int64_t t26 = 23LL;

	t26 = (x185/(x186<=(x187-x188)));

	if (t26 != 1014331726195593LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x197 = UINT8_MAX;
	int16_t x199 = 106;
	int64_t x200 = 22780209945746672LL;
	volatile int32_t t27 = -23;

	t27 = (x197/(x198<=(x199-x200)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x209 = UINT16_MAX;
	int64_t x210 = -16703LL;
	volatile uint8_t x211 = 21U;

	t28 = (x209/(x210<=(x211-x212)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x225 = INT8_MAX;
	int8_t x226 = INT8_MIN;
	int8_t x228 = 0;

	t29 = (x225/(x226<=(x227-x228)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	int8_t x231 = -1;
	static int32_t t30 = 6;

	t30 = (x229/(x230<=(x231-x232)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x234 = 4U;
	uint64_t x235 = 4123LLU;
	int32_t x236 = -99;
	int32_t t31 = 17;

	t31 = (x233/(x234<=(x235-x236)));

	if (t31 != 5034) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x237 = -1;
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	int8_t x240 = 0;

	t32 = (x237/(x238<=(x239-x240)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x245 = 6971356314531238LLU;
	int64_t x246 = 0LL;
	static volatile uint16_t x247 = UINT16_MAX;
	uint16_t x248 = 10312U;
	static uint64_t t33 = 279953662169922LLU;

	t33 = (x245/(x246<=(x247-x248)));

	if (t33 != 6971356314531238LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x253 = 336722732U;
	int8_t x255 = -2;
	int32_t x256 = INT32_MIN;
	uint32_t t34 = 3U;

	t34 = (x253/(x254<=(x255-x256)));

	if (t34 != 336722732U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x257 = -1;
	volatile int64_t x258 = -1LL;
	int8_t x259 = INT8_MAX;
	int32_t x260 = -52;
	int32_t t35 = 857;

	t35 = (x257/(x258<=(x259-x260)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x270 = 0U;
	int16_t x271 = -27;
	uint32_t x272 = UINT32_MAX;
	int32_t t36 = -255879276;

	t36 = (x269/(x270<=(x271-x272)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x281 = -34;
	int16_t x282 = -1;
	volatile uint8_t x283 = UINT8_MAX;
	static int32_t t37 = 185;

	t37 = (x281/(x282<=(x283-x284)));

	if (t37 != -34) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x289 = -1;
	int32_t x291 = -1;
	int64_t x292 = -1LL;

	t38 = (x289/(x290<=(x291-x292)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x295 = 1015U;
	int32_t x296 = -1;
	volatile int64_t t39 = -279166881047LL;

	t39 = (x293/(x294<=(x295-x296)));

	if (t39 != 812061447659LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x309 = INT64_MAX;
	static volatile int8_t x310 = 0;
	static int32_t x311 = -1;
	static int32_t x312 = -1;
	int64_t t40 = INT64_MAX;

	t40 = (x309/(x310<=(x311-x312)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x321 = UINT32_MAX;
	uint64_t x322 = 3322215LLU;
	int16_t x323 = -22;
	volatile int8_t x324 = INT8_MAX;

	t41 = (x321/(x322<=(x323-x324)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x329 = 25U;
	int16_t x330 = INT16_MAX;
	static uint64_t x332 = 1059658047208LLU;
	int32_t t42 = 2161040;

	t42 = (x329/(x330<=(x331-x332)));

	if (t42 != 25) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x341 = INT64_MAX;
	static uint32_t x344 = 1683U;
	volatile int64_t t43 = INT64_MAX;

	t43 = (x341/(x342<=(x343-x344)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x350 = 5U;
	uint64_t x351 = 24537516179LLU;
	uint32_t x352 = UINT32_MAX;

	t44 = (x349/(x350<=(x351-x352)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x365 = 13633280LL;
	volatile uint16_t x366 = 24799U;
	int32_t x367 = INT32_MAX;
	int8_t x368 = 4;
	int64_t t45 = 224444447LL;

	t45 = (x365/(x366<=(x367-x368)));

	if (t45 != 13633280LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x377 = -1;
	int64_t x378 = INT64_MIN;
	volatile int64_t x380 = 1736293236334LL;
	volatile int32_t t46 = -731054;

	t46 = (x377/(x378<=(x379-x380)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x382 = INT64_MIN;
	uint32_t x384 = 171U;
	static int32_t t47 = 1;

	t47 = (x381/(x382<=(x383-x384)));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x413 = INT16_MIN;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	static uint8_t x416 = 0U;

	t48 = (x413/(x414<=(x415-x416)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x417 = 0U;
	static int16_t x418 = 95;
	uint32_t x419 = 47394023U;
	volatile int16_t x420 = -6;
	volatile int32_t t49 = 24377;

	t49 = (x417/(x418<=(x419-x420)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x422 = 4;
	uint8_t x424 = UINT8_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = (x421/(x422<=(x423-x424)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x429 = -1;
	int8_t x430 = INT8_MIN;
	volatile int8_t x431 = 1;
	static volatile int32_t t51 = 239855311;

	t51 = (x429/(x430<=(x431-x432)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x445 = -29145;
	int64_t x446 = -1LL;
	int64_t x447 = INT64_MAX;
	int16_t x448 = INT16_MAX;
	int32_t t52 = 1;

	t52 = (x445/(x446<=(x447-x448)));

	if (t52 != -29145) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x457 = INT16_MIN;
	volatile uint16_t x459 = 57U;
	int16_t x460 = INT16_MAX;
	int32_t t53 = -1018;

	t53 = (x457/(x458<=(x459-x460)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x468 = INT16_MIN;

	t54 = (x465/(x466<=(x467-x468)));

	if (t54 != 48) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x469 = -1;
	volatile int32_t x470 = INT32_MIN;
	int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MAX;
	int32_t t55 = 618447;

	t55 = (x469/(x470<=(x471-x472)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x481 = 11U;
	static int16_t x482 = -1;
	static int8_t x483 = -1;
	int8_t x484 = INT8_MIN;
	volatile uint32_t t56 = 4957U;

	t56 = (x481/(x482<=(x483-x484)));

	if (t56 != 11U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x501 = INT32_MIN;
	static int32_t x503 = -1;
	volatile int32_t t57 = INT32_MIN;

	t57 = (x501/(x502<=(x503-x504)));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x506 = INT32_MIN;
	int64_t x507 = INT64_MAX;
	static volatile uint32_t t58 = UINT32_MAX;

	t58 = (x505/(x506<=(x507-x508)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x509 = INT16_MAX;
	int32_t x510 = -1;
	int32_t x511 = INT32_MAX;
	int64_t x512 = -429862LL;
	static int32_t t59 = 268259939;

	t59 = (x509/(x510<=(x511-x512)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x513 = -196579506LL;
	volatile int64_t x514 = INT64_MIN;
	int32_t x515 = INT32_MIN;
	static int8_t x516 = INT8_MIN;
	int64_t t60 = 25945278029239LL;

	t60 = (x513/(x514<=(x515-x516)));

	if (t60 != -196579506LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x517 = 38U;
	uint16_t x518 = 14U;
	int8_t x519 = INT8_MIN;
	int64_t x520 = INT64_MIN;
	int32_t t61 = 1271271;

	t61 = (x517/(x518<=(x519-x520)));

	if (t61 != 38) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x525 = 41U;
	volatile int64_t x526 = INT64_MIN;
	int8_t x527 = 1;
	volatile int32_t t62 = -3;

	t62 = (x525/(x526<=(x527-x528)));

	if (t62 != 41) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x529 = -1;
	int16_t x530 = 3;
	static int8_t x531 = 0;
	static uint32_t x532 = 98952U;
	int32_t t63 = -10;

	t63 = (x529/(x530<=(x531-x532)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x574 = INT64_MIN;
	int8_t x575 = 12;

	t64 = (x573/(x574<=(x575-x576)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x577 = INT16_MAX;
	int16_t x579 = INT16_MAX;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t65 = 163205975;

	t65 = (x577/(x578<=(x579-x580)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x590 = INT64_MIN;
	volatile uint32_t x592 = UINT32_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x589/(x590<=(x591-x592)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x603 = INT8_MIN;

	t67 = (x601/(x602<=(x603-x604)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x613 = INT64_MIN;
	int32_t x614 = -1;
	int16_t x615 = INT16_MAX;
	uint8_t x616 = 0U;
	int64_t t68 = INT64_MIN;

	t68 = (x613/(x614<=(x615-x616)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x618 = -1;
	static uint16_t x619 = 3U;
	int8_t x620 = 0;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x617/(x618<=(x619-x620)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x633 = UINT8_MAX;
	static int64_t x634 = -13355LL;
	static int8_t x635 = 1;
	volatile int32_t t70 = -2195570;

	t70 = (x633/(x634<=(x635-x636)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x645 = -3;
	uint8_t x647 = UINT8_MAX;
	volatile int32_t t71 = -64;

	t71 = (x645/(x646<=(x647-x648)));

	if (t71 != -3) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x659 = 122;
	uint64_t x660 = 4379718224708LLU;
	static int64_t t72 = INT64_MAX;

	t72 = (x657/(x658<=(x659-x660)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x671 = -1;
	int32_t x672 = INT32_MIN;
	volatile int32_t t73 = 1;

	t73 = (x669/(x670<=(x671-x672)));

	if (t73 != 26793) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x677 = UINT64_MAX;
	volatile int16_t x679 = 5504;
	volatile int16_t x680 = INT16_MAX;

	t74 = (x677/(x678<=(x679-x680)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x681 = UINT8_MAX;
	static int64_t x682 = INT64_MIN;
	int8_t x683 = INT8_MIN;
	volatile int8_t x684 = -14;
	volatile int32_t t75 = -48719;

	t75 = (x681/(x682<=(x683-x684)));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x693 = 431U;
	uint64_t x695 = UINT64_MAX;
	int8_t x696 = INT8_MAX;
	volatile int32_t t76 = 973196;

	t76 = (x693/(x694<=(x695-x696)));

	if (t76 != 431) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x703 = INT64_MAX;
	uint8_t x704 = 45U;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x701/(x702<=(x703-x704)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x714 = INT64_MIN;
	volatile uint16_t x715 = 443U;
	int8_t x716 = INT8_MAX;

	t78 = (x713/(x714<=(x715-x716)));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x717 = -14;
	volatile int64_t x718 = -5266205255448882LL;
	volatile int8_t x719 = -1;
	uint8_t x720 = UINT8_MAX;
	int32_t t79 = -25512334;

	t79 = (x717/(x718<=(x719-x720)));

	if (t79 != -14) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x725 = 3;
	static int16_t x726 = 1635;
	volatile uint8_t x727 = 1U;
	volatile uint64_t x728 = 264915798027212LLU;
	int32_t t80 = 0;

	t80 = (x725/(x726<=(x727-x728)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x734 = UINT8_MAX;
	int8_t x735 = 8;
	volatile int16_t x736 = INT16_MIN;
	int32_t t81 = 121917;

	t81 = (x733/(x734<=(x735-x736)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x738 = 8401;
	uint64_t x739 = 133442645LLU;
	int64_t x740 = INT64_MIN;
	int32_t t82 = 65;

	t82 = (x737/(x738<=(x739-x740)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x741 = 106U;
	static volatile int64_t x742 = -2089064LL;
	int32_t x743 = INT32_MIN;
	static uint32_t x744 = 16318836U;
	int32_t t83 = -3820;

	t83 = (x741/(x742<=(x743-x744)));

	if (t83 != 106) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x746 = -155LL;
	int16_t x747 = -1;
	int64_t t84 = INT64_MIN;

	t84 = (x745/(x746<=(x747-x748)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x753 = INT32_MAX;
	uint8_t x755 = UINT8_MAX;
	uint8_t x756 = 117U;

	t85 = (x753/(x754<=(x755-x756)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x757 = INT8_MIN;
	int8_t x758 = 0;
	int64_t x759 = 9641246211719091LL;
	int32_t t86 = -131994;

	t86 = (x757/(x758<=(x759-x760)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x762 = INT8_MIN;
	int8_t x763 = INT8_MIN;
	static int64_t x764 = INT64_MIN;
	int32_t t87 = -3485462;

	t87 = (x761/(x762<=(x763-x764)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x765 = INT32_MIN;
	uint32_t x767 = 34160411U;
	uint16_t x768 = 702U;
	int32_t t88 = INT32_MIN;

	t88 = (x765/(x766<=(x767-x768)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x769 = -28491254LL;
	int16_t x770 = 10;
	static int64_t x771 = -1LL;
	int64_t t89 = -3LL;

	t89 = (x769/(x770<=(x771-x772)));

	if (t89 != -28491254LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x773 = -1;
	volatile int32_t x775 = -392069234;
	uint64_t x776 = 6545986296866LLU;
	volatile int32_t t90 = -234;

	t90 = (x773/(x774<=(x775-x776)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x777 = 7U;
	int8_t x778 = INT8_MIN;
	int8_t x780 = INT8_MAX;
	int32_t t91 = -654;

	t91 = (x777/(x778<=(x779-x780)));

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x785 = -23209652;
	int64_t x786 = -12435798483779LL;
	volatile int16_t x787 = -1;
	volatile int16_t x788 = INT16_MAX;
	volatile int32_t t92 = -62441;

	t92 = (x785/(x786<=(x787-x788)));

	if (t92 != -23209652) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x797 = UINT16_MAX;
	int8_t x798 = INT8_MIN;
	volatile int16_t x800 = -3414;
	int32_t t93 = -4;

	t93 = (x797/(x798<=(x799-x800)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x806 = INT8_MAX;
	volatile int64_t x807 = -1LL;
	static volatile int8_t x808 = INT8_MIN;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x805/(x806<=(x807-x808)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x809 = UINT16_MAX;
	int64_t x810 = 0LL;
	int8_t x811 = 0;
	uint64_t x812 = UINT64_MAX;
	volatile int32_t t95 = -259468;

	t95 = (x809/(x810<=(x811-x812)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x817 = 69LLU;
	volatile uint8_t x819 = UINT8_MAX;
	static volatile uint64_t t96 = 685688995LLU;

	t96 = (x817/(x818<=(x819-x820)));

	if (t96 != 69LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x825 = 261;
	int8_t x827 = INT8_MIN;
	volatile int32_t t97 = 19838;

	t97 = (x825/(x826<=(x827-x828)));

	if (t97 != 261) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x841 = -1;
	volatile uint64_t x842 = 2LLU;
	uint32_t x843 = 70042132U;

	t98 = (x841/(x842<=(x843-x844)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x847 = UINT64_MAX;
	uint32_t x848 = UINT32_MAX;
	static volatile int64_t t99 = 2690101837740LL;

	t99 = (x845/(x846<=(x847-x848)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

