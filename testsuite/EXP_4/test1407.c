#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 4402893;
volatile uint8_t x13 = 4U;
int32_t x44 = -1;
uint64_t x49 = UINT64_MAX;
volatile uint64_t t3 = 7337878LLU;
static int32_t x54 = INT32_MIN;
static int32_t x58 = INT32_MAX;
int16_t x61 = -1;
int32_t t7 = 3995679;
static int32_t x84 = 398841;
uint8_t x143 = UINT8_MAX;
volatile int8_t x149 = INT8_MIN;
volatile int16_t x150 = -27;
int16_t x154 = INT16_MIN;
int16_t x155 = INT16_MIN;
uint16_t x160 = 2U;
int8_t x165 = INT8_MIN;
static volatile uint32_t x169 = 3188U;
uint8_t x171 = 1U;
static int16_t x173 = INT16_MIN;
volatile uint64_t t20 = 31409647LLU;
static uint8_t x181 = UINT8_MAX;
uint64_t t22 = 743LLU;
static int64_t x191 = INT64_MIN;
int64_t t24 = -24005962548844381LL;
int32_t t25 = -2;
static int8_t x203 = INT8_MAX;
int16_t x219 = -1;
volatile uint8_t x220 = 2U;
int8_t x223 = 1;
int32_t x234 = INT32_MIN;
volatile int32_t t30 = 18169056;
uint32_t x246 = UINT32_MAX;
static uint32_t x260 = 1709990219U;
int64_t x279 = -1LL;
static int8_t x286 = INT8_MIN;
volatile uint8_t x287 = 1U;
static int32_t x293 = -995;
static volatile int32_t t36 = 53941440;
int16_t x300 = 1;
int8_t x309 = INT8_MAX;
int16_t x315 = -4061;
volatile int32_t x316 = INT32_MAX;
int64_t x321 = 7223769LL;
int64_t x323 = -1LL;
static volatile int32_t x327 = 14;
int8_t x344 = 8;
uint32_t t47 = 797663966U;
int8_t x365 = -1;
int64_t t48 = 223023399247LL;
volatile int32_t x374 = -1;
volatile uint64_t x375 = 52765618499LLU;
int16_t x385 = -1;
int64_t x391 = INT64_MIN;
int32_t x426 = INT32_MIN;
int64_t x428 = 431709090168LL;
int32_t x430 = INT32_MIN;
static volatile uint32_t x432 = 2U;
volatile int32_t t54 = -2;
volatile int64_t t55 = 2729198949481LL;
int8_t x446 = -2;
int8_t x447 = 6;
static uint64_t x454 = 78516370385792LLU;
int8_t x466 = 12;
static uint64_t x467 = 100791073684096900LLU;
int32_t t59 = 768034;
uint16_t x471 = 794U;
static int32_t x475 = -1;
static uint16_t x476 = UINT16_MAX;
int32_t x485 = -1;
int32_t t63 = 677069;
int16_t x493 = -1;
int32_t t64 = 28849564;
uint8_t x510 = 5U;
static uint8_t x532 = 0U;
int8_t x539 = INT8_MAX;
uint16_t x540 = UINT16_MAX;
volatile int16_t x544 = INT16_MAX;
uint16_t x565 = UINT16_MAX;
uint64_t x568 = UINT64_MAX;
static uint32_t t73 = 2402U;
int32_t x582 = -1;
int32_t x584 = INT32_MAX;
int8_t x587 = INT8_MIN;
uint64_t x592 = UINT64_MAX;
volatile int64_t t76 = -375866843344020664LL;
uint16_t x605 = UINT16_MAX;
uint16_t x608 = UINT16_MAX;
volatile int64_t t77 = 818LL;
int16_t x615 = INT16_MIN;
int64_t x628 = 2391014367LL;
volatile uint64_t t80 = 719252656LLU;
volatile uint64_t t83 = 376598440889LLU;
volatile int8_t x652 = -1;
static volatile uint16_t x685 = 1U;
int16_t x686 = INT16_MIN;
int8_t x688 = -61;
static int8_t x714 = INT8_MIN;
int8_t x715 = -2;
uint32_t t91 = 26U;
int16_t x718 = -221;
int32_t x721 = INT32_MIN;
int8_t x722 = INT8_MAX;
static int64_t x727 = -649771473763769LL;
uint64_t x741 = 0LLU;
uint32_t x749 = 2U;
int64_t x751 = -594488020514564480LL;
volatile int32_t x770 = -1;


void f0(void) {
	volatile uint8_t x9 = 0U;
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = 3;

	t0 = (x9*(x10%(x11<x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int32_t x16 = 61212;
	static int32_t t1 = 633840709;

	t1 = (x13*(x14%(x15<x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x41 = -9;
	uint32_t x42 = 1723U;
	int16_t x43 = INT16_MIN;
	volatile uint32_t t2 = 2U;

	t2 = (x41*(x42%(x43<x44)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x50 = 12245;
	volatile int64_t x51 = -412306743155004LL;
	volatile int32_t x52 = INT32_MIN;

	t3 = (x49*(x50%(x51<x52)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x53 = INT16_MAX;
	static uint8_t x55 = 8U;
	uint64_t x56 = 969340663322LLU;
	volatile int32_t t4 = 1708335;

	t4 = (x53*(x54%(x55<x56)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x57 = 56;
	int32_t x59 = 1071;
	int16_t x60 = INT16_MAX;
	int32_t t5 = -4;

	t5 = (x57*(x58%(x59<x60)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x62 = INT8_MIN;
	static uint16_t x63 = UINT16_MAX;
	static volatile uint64_t x64 = 1330965546790101LLU;
	volatile int32_t t6 = -1490;

	t6 = (x61*(x62%(x63<x64)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int8_t x70 = -1;
	int32_t x71 = -13928;
	static int64_t x72 = -5LL;

	t7 = (x69*(x70%(x71<x72)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x77 = 4U;
	volatile int8_t x78 = 1;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t x80 = 1073460649;
	volatile uint32_t t8 = 1728U;

	t8 = (x77*(x78%(x79<x80)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int32_t t9 = -56;

	t9 = (x81*(x82%(x83<x84)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x101 = 1;
	int64_t x102 = INT64_MAX;
	int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MIN;
	volatile int64_t t10 = -909300199LL;

	t10 = (x101*(x102%(x103<x104)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x125 = -1;
	static int64_t x126 = 7LL;
	static int64_t x127 = 14LL;
	static uint16_t x128 = UINT16_MAX;
	int64_t t11 = 1LL;

	t11 = (x125*(x126%(x127<x128)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x133 = -317702;
	static int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	int32_t x136 = 908;
	int32_t t12 = -89486;

	t12 = (x133*(x134%(x135<x136)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x137 = INT64_MIN;
	static int32_t x138 = 853778842;
	uint16_t x139 = 273U;
	uint16_t x140 = 732U;
	int64_t t13 = 2128153LL;

	t13 = (x137*(x138%(x139<x140)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x141 = 10269755;
	volatile uint8_t x142 = UINT8_MAX;
	uint64_t x144 = UINT64_MAX;
	static volatile int32_t t14 = -54273082;

	t14 = (x141*(x142%(x143<x144)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x151 = 6U;
	volatile uint16_t x152 = 10U;
	volatile int32_t t15 = 1413;

	t15 = (x149*(x150%(x151<x152)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x153 = -1;
	int64_t x156 = INT64_MAX;
	static volatile int32_t t16 = -357276485;

	t16 = (x153*(x154%(x155<x156)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x157 = -1594880;
	uint64_t x158 = 584486LLU;
	int64_t x159 = INT64_MIN;
	uint64_t t17 = 30LLU;

	t17 = (x157*(x158%(x159<x160)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	static int64_t t18 = -1LL;

	t18 = (x165*(x166%(x167<x168)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x170 = INT16_MIN;
	uint8_t x172 = 33U;
	static volatile uint32_t t19 = 1654U;

	t19 = (x169*(x170%(x171<x172)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x174 = 3392325774LLU;
	uint64_t x175 = 145LLU;
	static uint64_t x176 = 88152896LLU;

	t20 = (x173*(x174%(x175<x176)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = -287624LL;
	static int32_t x179 = INT32_MIN;
	int8_t x180 = 4;
	volatile int64_t t21 = -5146164931548464LL;

	t21 = (x177*(x178%(x179<x180)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x182 = UINT64_MAX;
	int16_t x183 = -52;
	int64_t x184 = 1815271050LL;

	t22 = (x181*(x182%(x183<x184)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x185 = 19U;
	volatile uint32_t x186 = 54317979U;
	volatile uint32_t x187 = 1U;
	int32_t x188 = -14029;
	volatile uint32_t t23 = 1U;

	t23 = (x185*(x186%(x187<x188)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x189 = 0LL;
	static int32_t x190 = INT32_MIN;
	uint8_t x192 = 10U;

	t24 = (x189*(x190%(x191<x192)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x197 = UINT16_MAX;
	int16_t x198 = 225;
	static uint32_t x199 = 477232U;
	int64_t x200 = INT64_MAX;

	t25 = (x197*(x198%(x199<x200)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x201 = -1;
	int8_t x202 = -3;
	static int16_t x204 = INT16_MAX;
	volatile int32_t t26 = -2219;

	t26 = (x201*(x202%(x203<x204)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x217 = -1;
	volatile int64_t x218 = INT64_MIN;
	volatile int64_t t27 = -25626888981738LL;

	t27 = (x217*(x218%(x219<x220)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x221 = INT8_MIN;
	static int64_t x222 = INT64_MIN;
	volatile uint64_t x224 = UINT64_MAX;
	volatile int64_t t28 = 0LL;

	t28 = (x221*(x222%(x223<x224)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x225 = UINT64_MAX;
	static uint8_t x226 = UINT8_MAX;
	volatile int64_t x227 = -1LL;
	int16_t x228 = 311;
	static volatile uint64_t t29 = 39LLU;

	t29 = (x225*(x226%(x227<x228)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x233 = 410U;
	uint64_t x235 = 1657753LLU;
	int32_t x236 = INT32_MAX;

	t30 = (x233*(x234%(x235<x236)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x245 = INT32_MIN;
	static int64_t x247 = -2757791LL;
	volatile int32_t x248 = -1;
	uint32_t t31 = 0U;

	t31 = (x245*(x246%(x247<x248)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = UINT8_MAX;
	uint16_t x259 = 2310U;
	volatile int32_t t32 = -202801;

	t32 = (x257*(x258%(x259<x260)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x265 = 2115354611185461LLU;
	int16_t x266 = INT16_MAX;
	int8_t x267 = -1;
	uint8_t x268 = UINT8_MAX;
	static uint64_t t33 = 368873LLU;

	t33 = (x265*(x266%(x267<x268)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 1583U;
	uint16_t x280 = 1354U;
	static volatile int32_t t34 = -3;

	t34 = (x277*(x278%(x279<x280)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x285 = INT8_MIN;
	static int64_t x288 = 240368324351LL;
	volatile int32_t t35 = 324619;

	t35 = (x285*(x286%(x287<x288)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;

	t36 = (x293*(x294%(x295<x296)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x297 = 15;
	static uint32_t x298 = 479U;
	int32_t x299 = -1;
	volatile uint32_t t37 = 1102U;

	t37 = (x297*(x298%(x299<x300)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x310 = -1;
	int64_t x311 = -1LL;
	static int64_t x312 = INT64_MAX;
	volatile int32_t t38 = 4574;

	t38 = (x309*(x310%(x311<x312)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = 46086U;
	volatile uint32_t t39 = 241U;

	t39 = (x313*(x314%(x315<x316)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MAX;
	int8_t x319 = -4;
	static int32_t x320 = 53390636;
	static int64_t t40 = -35LL;

	t40 = (x317*(x318%(x319<x320)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x322 = 0U;
	static uint16_t x324 = UINT16_MAX;
	static int64_t t41 = 361594381017476LL;

	t41 = (x321*(x322%(x323<x324)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x325 = INT8_MIN;
	volatile uint32_t x326 = UINT32_MAX;
	static uint16_t x328 = UINT16_MAX;
	uint32_t t42 = 469842026U;

	t42 = (x325*(x326%(x327<x328)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x333 = -1;
	uint64_t x334 = 13LLU;
	uint8_t x335 = 45U;
	int64_t x336 = INT64_MAX;
	volatile uint64_t t43 = 5549469951700438789LLU;

	t43 = (x333*(x334%(x335<x336)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x341 = 13LLU;
	int8_t x342 = -1;
	int64_t x343 = -37781404605LL;
	uint64_t t44 = 1LLU;

	t44 = (x341*(x342%(x343<x344)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x345 = INT16_MIN;
	volatile uint64_t x346 = 3650LLU;
	uint32_t x347 = 19850286U;
	int8_t x348 = -44;
	static uint64_t t45 = 60LLU;

	t45 = (x345*(x346%(x347<x348)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x357 = INT64_MIN;
	int8_t x358 = -8;
	uint8_t x359 = 3U;
	static int32_t x360 = INT32_MAX;
	int64_t t46 = -1061055698914210LL;

	t46 = (x357*(x358%(x359<x360)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x361 = 1870U;
	int32_t x362 = -5874;
	static uint8_t x363 = 12U;
	static uint8_t x364 = 46U;

	t47 = (x361*(x362%(x363<x364)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x366 = -1LL;
	int64_t x367 = -659356538LL;
	int8_t x368 = 1;

	t48 = (x365*(x366%(x367<x368)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x373 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	volatile int32_t t49 = -405540;

	t49 = (x373*(x374%(x375<x376)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	static int32_t x388 = -1;
	int32_t t50 = -21;

	t50 = (x385*(x386%(x387<x388)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x389 = -124;
	uint8_t x390 = UINT8_MAX;
	int8_t x392 = 18;
	static volatile int32_t t51 = -1873;

	t51 = (x389*(x390%(x391<x392)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MAX;
	volatile int16_t x403 = INT16_MIN;
	uint16_t x404 = 276U;
	static int64_t t52 = 384800725168LL;

	t52 = (x401*(x402%(x403<x404)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x425 = -17767813736LL;
	volatile int64_t x427 = -1LL;
	int64_t t53 = -351818751061186007LL;

	t53 = (x425*(x426%(x427<x428)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x429 = -1;
	int64_t x431 = INT64_MIN;

	t54 = (x429*(x430%(x431<x432)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x441 = INT8_MAX;
	static int64_t x442 = 30245LL;
	static int8_t x443 = 0;
	static int64_t x444 = INT64_MAX;

	t55 = (x441*(x442%(x443<x444)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x445 = INT8_MIN;
	int64_t x448 = INT64_MAX;
	int32_t t56 = 800456718;

	t56 = (x445*(x446%(x447<x448)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x449 = INT64_MAX;
	int32_t x450 = INT32_MIN;
	volatile int16_t x451 = INT16_MIN;
	volatile int64_t x452 = -1LL;
	volatile int64_t t57 = 94774326099614378LL;

	t57 = (x449*(x450%(x451<x452)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x453 = INT16_MAX;
	volatile int8_t x455 = -8;
	volatile int64_t x456 = -1LL;
	uint64_t t58 = 143385410591LLU;

	t58 = (x453*(x454%(x455<x456)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x465 = INT16_MIN;
	int64_t x468 = -1LL;

	t59 = (x465*(x466%(x467<x468)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x469 = INT64_MIN;
	int32_t x470 = -1;
	volatile uint32_t x472 = UINT32_MAX;
	int64_t t60 = 601912046LL;

	t60 = (x469*(x470%(x471<x472)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x473 = INT8_MAX;
	int32_t x474 = INT32_MIN;
	int32_t t61 = 93747;

	t61 = (x473*(x474%(x475<x476)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x481 = INT32_MIN;
	static int64_t x482 = 22498736453973LL;
	int64_t x483 = -1LL;
	volatile uint32_t x484 = 1369789U;
	volatile int64_t t62 = -4456000147280913LL;

	t62 = (x481*(x482%(x483<x484)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x486 = INT32_MAX;
	uint64_t x487 = 72224651LLU;
	static int16_t x488 = -1;

	t63 = (x485*(x486%(x487<x488)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x494 = INT32_MIN;
	int64_t x495 = -20LL;
	uint16_t x496 = UINT16_MAX;

	t64 = (x493*(x494%(x495<x496)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x497 = -1;
	int64_t x498 = -501585391452LL;
	static int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MAX;
	volatile int64_t t65 = 4819784002282LL;

	t65 = (x497*(x498%(x499<x500)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x505 = INT32_MIN;
	uint16_t x506 = UINT16_MAX;
	int8_t x507 = INT8_MIN;
	static uint16_t x508 = 31598U;
	volatile int32_t t66 = -849289926;

	t66 = (x505*(x506%(x507<x508)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x509 = 292912044543188957LL;
	int16_t x511 = -7773;
	int16_t x512 = -1;
	int64_t t67 = 35042307338780362LL;

	t67 = (x509*(x510%(x511<x512)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x517 = 56735691218LLU;
	uint32_t x518 = 48253860U;
	static int64_t x519 = -1574091LL;
	static volatile int16_t x520 = 1876;
	uint64_t t68 = 3LLU;

	t68 = (x517*(x518%(x519<x520)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x529 = 6507;
	uint32_t x530 = UINT32_MAX;
	int8_t x531 = -1;
	uint32_t t69 = 11666697U;

	t69 = (x529*(x530%(x531<x532)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x537 = 2U;
	int64_t x538 = 5537688LL;
	int64_t t70 = -428346LL;

	t70 = (x537*(x538%(x539<x540)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x541 = INT64_MIN;
	uint64_t x542 = 15386LLU;
	static int16_t x543 = 1;
	volatile uint64_t t71 = 1596172522008LLU;

	t71 = (x541*(x542%(x543<x544)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x549 = -1;
	int8_t x550 = INT8_MAX;
	int16_t x551 = INT16_MIN;
	uint8_t x552 = 6U;
	volatile int32_t t72 = 7120791;

	t72 = (x549*(x550%(x551<x552)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x566 = 3967U;
	int32_t x567 = INT32_MIN;

	t73 = (x565*(x566%(x567<x568)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x581 = UINT16_MAX;
	int16_t x583 = INT16_MIN;
	volatile int32_t t74 = -1;

	t74 = (x581*(x582%(x583<x584)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x585 = INT16_MAX;
	int32_t x586 = INT32_MIN;
	volatile int16_t x588 = -1;
	int32_t t75 = -24381;

	t75 = (x585*(x586%(x587<x588)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x589 = UINT16_MAX;
	int64_t x590 = -248697558006LL;
	int64_t x591 = INT64_MAX;

	t76 = (x589*(x590%(x591<x592)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x606 = -17595703LL;
	uint8_t x607 = 3U;

	t77 = (x605*(x606%(x607<x608)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x613 = 6583U;
	int8_t x614 = -24;
	uint16_t x616 = 31877U;
	volatile int32_t t78 = -248;

	t78 = (x613*(x614%(x615<x616)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x625 = UINT8_MAX;
	int32_t x626 = INT32_MIN;
	static uint8_t x627 = 1U;
	volatile int32_t t79 = -12770;

	t79 = (x625*(x626%(x627<x628)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x633 = 869370256858LLU;
	volatile uint64_t x634 = 25890065470368LLU;
	int32_t x635 = INT32_MIN;
	static int64_t x636 = INT64_MAX;

	t80 = (x633*(x634%(x635<x636)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x637 = 66932133;
	uint64_t x638 = UINT64_MAX;
	volatile int32_t x639 = INT32_MIN;
	uint16_t x640 = 0U;
	uint64_t t81 = 1503LLU;

	t81 = (x637*(x638%(x639<x640)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x641 = INT16_MIN;
	uint8_t x642 = UINT8_MAX;
	static int32_t x643 = INT32_MIN;
	uint8_t x644 = 0U;
	static volatile int32_t t82 = 94904;

	t82 = (x641*(x642%(x643<x644)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x645 = INT64_MIN;
	uint64_t x646 = 82LLU;
	int64_t x647 = INT64_MIN;
	uint16_t x648 = 7U;

	t83 = (x645*(x646%(x647<x648)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x649 = INT32_MIN;
	volatile uint8_t x650 = 9U;
	int8_t x651 = INT8_MIN;
	int32_t t84 = 2844;

	t84 = (x649*(x650%(x651<x652)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x653 = INT64_MIN;
	static uint32_t x654 = 0U;
	static int16_t x655 = -830;
	static volatile int8_t x656 = INT8_MAX;
	volatile int64_t t85 = -1781122713221718419LL;

	t85 = (x653*(x654%(x655<x656)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x657 = UINT32_MAX;
	int16_t x658 = -464;
	static int8_t x659 = INT8_MIN;
	static volatile uint8_t x660 = 3U;
	uint32_t t86 = 0U;

	t86 = (x657*(x658%(x659<x660)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x661 = -1LL;
	uint8_t x662 = 70U;
	uint16_t x663 = 840U;
	volatile uint64_t x664 = UINT64_MAX;
	volatile int64_t t87 = -563LL;

	t87 = (x661*(x662%(x663<x664)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x665 = 19655190LLU;
	uint16_t x666 = 13613U;
	int16_t x667 = 462;
	int32_t x668 = 105467537;
	volatile uint64_t t88 = 18469451262LLU;

	t88 = (x665*(x666%(x667<x668)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x687 = 117U;
	volatile int32_t t89 = 2934;

	t89 = (x685*(x686%(x687<x688)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x697 = 10434;
	volatile int8_t x698 = INT8_MIN;
	uint16_t x699 = 205U;
	uint32_t x700 = UINT32_MAX;
	int32_t t90 = -334;

	t90 = (x697*(x698%(x699<x700)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x713 = 1U;
	int32_t x716 = 2525;

	t91 = (x713*(x714%(x715<x716)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x717 = -255;
	volatile int16_t x719 = -1;
	static uint16_t x720 = 3U;
	volatile int32_t t92 = 6;

	t92 = (x717*(x718%(x719<x720)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x723 = 4;
	volatile uint64_t x724 = 4936LLU;
	volatile int32_t t93 = 319050928;

	t93 = (x721*(x722%(x723<x724)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x725 = UINT64_MAX;
	uint8_t x726 = 47U;
	volatile int16_t x728 = 5;
	uint64_t t94 = 1001031137941994488LLU;

	t94 = (x725*(x726%(x727<x728)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x737 = 3931U;
	static volatile uint8_t x738 = UINT8_MAX;
	uint64_t x739 = 7LLU;
	uint16_t x740 = UINT16_MAX;
	int32_t t95 = -9;

	t95 = (x737*(x738%(x739<x740)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x742 = UINT32_MAX;
	int8_t x743 = INT8_MIN;
	static int32_t x744 = 12;
	volatile uint64_t t96 = 25540143LLU;

	t96 = (x741*(x742%(x743<x744)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x750 = INT64_MIN;
	static int16_t x752 = INT16_MIN;
	volatile int64_t t97 = 0LL;

	t97 = (x749*(x750%(x751<x752)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x769 = INT16_MIN;
	uint8_t x771 = 30U;
	uint32_t x772 = UINT32_MAX;
	static volatile int32_t t98 = 379;

	t98 = (x769*(x770%(x771<x772)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x773 = -1;
	static uint64_t x774 = 1050873125151079LLU;
	volatile int64_t x775 = INT64_MIN;
	static int64_t x776 = -20662348584LL;
	volatile uint64_t t99 = 2446284728119LLU;

	t99 = (x773*(x774%(x775<x776)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

