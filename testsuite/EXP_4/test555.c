#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x17 = 77U;
int32_t t1 = -15881525;
uint64_t x37 = 0LLU;
int16_t x38 = INT16_MIN;
uint32_t x39 = 12687343U;
int8_t x46 = INT8_MAX;
uint64_t x47 = UINT64_MAX;
int8_t x52 = INT8_MIN;
uint32_t x53 = 897492174U;
volatile int8_t x54 = INT8_MAX;
static int64_t x55 = INT64_MIN;
static int64_t x56 = INT64_MIN;
volatile uint32_t x67 = 50553942U;
volatile int32_t t7 = -1179;
volatile int64_t x69 = INT64_MAX;
volatile int32_t t9 = 22939357;
uint8_t x78 = 11U;
uint8_t x87 = UINT8_MAX;
uint16_t x88 = 1U;
int32_t x91 = INT32_MIN;
volatile int64_t x98 = INT64_MIN;
volatile uint32_t x100 = UINT32_MAX;
static volatile uint32_t x109 = 957U;
volatile uint32_t x122 = 2U;
uint32_t x123 = 124804U;
uint32_t x124 = 6U;
volatile int32_t t19 = 4026;
int32_t x158 = -1;
uint8_t x160 = 1U;
static volatile int32_t t24 = -1593;
static int32_t x186 = 100921231;
volatile int32_t t26 = -3238;
int8_t x197 = INT8_MAX;
static uint8_t x198 = UINT8_MAX;
volatile int8_t x201 = INT8_MIN;
int32_t t29 = 1;
static int8_t x226 = -1;
volatile uint32_t x228 = 6420U;
int32_t x235 = INT32_MIN;
static int64_t x267 = INT64_MIN;
uint16_t x268 = 1U;
volatile int16_t x287 = INT16_MIN;
int8_t x288 = 47;
volatile int32_t t38 = -99;
volatile uint8_t x302 = 20U;
uint64_t x303 = UINT64_MAX;
uint32_t x319 = 1492281322U;
volatile int32_t t42 = -15147161;
static volatile int32_t x349 = -1;
uint16_t x350 = 14100U;
int8_t x356 = -1;
static int64_t x357 = 380LL;
uint32_t x363 = 210U;
static uint16_t x386 = UINT16_MAX;
static int32_t x387 = INT32_MAX;
int8_t x398 = INT8_MIN;
int32_t x399 = INT32_MIN;
int64_t x402 = INT64_MIN;
static int64_t x405 = INT64_MIN;
int8_t x407 = 1;
int16_t x420 = INT16_MIN;
int32_t t58 = -14;
static int16_t x439 = INT16_MIN;
uint16_t x451 = 26U;
volatile int8_t x453 = 0;
volatile int16_t x454 = -1;
volatile int32_t t63 = -96295;
static volatile int32_t x509 = INT32_MAX;
uint8_t x514 = UINT8_MAX;
volatile int16_t x517 = INT16_MAX;
static uint32_t x520 = UINT32_MAX;
int16_t x521 = 1;
int32_t t68 = -190;
int64_t x530 = INT64_MAX;
int16_t x534 = -2;
static int64_t x537 = INT64_MIN;
int16_t x542 = INT16_MIN;
volatile uint8_t x569 = UINT8_MAX;
volatile uint16_t x570 = 31U;
static uint16_t x585 = 27305U;
volatile uint16_t x594 = UINT16_MAX;
volatile int8_t x595 = 1;
volatile int32_t t77 = -238547412;
volatile uint64_t x597 = UINT64_MAX;
int32_t t78 = 1091;
int8_t x602 = 14;
int8_t x633 = INT8_MIN;
uint64_t x635 = 56023210573034718LLU;
static volatile int32_t t81 = -56330333;
static uint8_t x660 = 31U;
volatile int32_t t84 = 4;
uint32_t x685 = 450U;
uint64_t x688 = 268730466699111234LLU;
volatile int32_t t88 = 1874;
int32_t x734 = INT32_MIN;
volatile int64_t x735 = INT64_MAX;
uint64_t x757 = UINT64_MAX;
volatile int32_t t95 = -100925095;
volatile int32_t x765 = INT32_MIN;
static int8_t x766 = INT8_MIN;
volatile int32_t x774 = -1;
volatile uint8_t x806 = UINT8_MAX;


void f0(void) {
	static int16_t x1 = 1;
	static int32_t x2 = 6452;
	volatile int16_t x3 = INT16_MAX;
	static int32_t x4 = -1;
	volatile int32_t t0 = 379840;

	t0 = (x1<(x2/(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x18 = -1;
	static int64_t x19 = INT64_MIN;
	volatile uint64_t x20 = 76456450LLU;

	t1 = (x17<(x18/(x19/x20)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x40 = UINT16_MAX;
	int32_t t2 = -2;

	t2 = (x37<(x38/(x39/x40)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x45 = INT32_MIN;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t3 = 199;

	t3 = (x45<(x46/(x47/x48)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x49 = 1U;
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = INT16_MAX;
	volatile int32_t t4 = -613981475;

	t4 = (x49<(x50/(x51/x52)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t t5 = 494;

	t5 = (x53<(x54/(x55/x56)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x61 = INT16_MAX;
	uint64_t x62 = UINT64_MAX;
	static volatile int16_t x63 = INT16_MIN;
	int32_t x64 = -58;
	static volatile int32_t t6 = -159;

	t6 = (x61<(x62/(x63/x64)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x65 = INT8_MIN;
	int8_t x66 = -1;
	volatile uint8_t x68 = 92U;

	t7 = (x65<(x66/(x67/x68)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x70 = 5415;
	static volatile int32_t x71 = 234;
	uint8_t x72 = 3U;
	static int32_t t8 = 57;

	t8 = (x69<(x70/(x71/x72)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x73 = -1;
	uint64_t x74 = 1810117372LLU;
	int8_t x75 = INT8_MAX;
	static uint8_t x76 = 11U;

	t9 = (x73<(x74/(x75/x76)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x77 = 0;
	int64_t x79 = INT64_MAX;
	int64_t x80 = 209LL;
	volatile int32_t t10 = -7050;

	t10 = (x77<(x78/(x79/x80)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = -1;
	volatile int64_t x82 = INT64_MIN;
	uint32_t x83 = 1560U;
	int16_t x84 = 721;
	int32_t t11 = 7895;

	t11 = (x81<(x82/(x83/x84)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x85 = -1;
	volatile int8_t x86 = 2;
	static int32_t t12 = 3;

	t12 = (x85<(x86/(x87/x88)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	uint16_t x92 = 27U;
	int32_t t13 = -600;

	t13 = (x89<(x90/(x91/x92)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x97 = 1;
	static int16_t x99 = -1;
	static volatile int32_t t14 = -8040;

	t14 = (x97<(x98/(x99/x100)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x110 = 190339677407129689LLU;
	volatile uint16_t x111 = 436U;
	int16_t x112 = 1;
	volatile int32_t t15 = 476364969;

	t15 = (x109<(x110/(x111/x112)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x121 = INT16_MAX;
	int32_t t16 = -14885;

	t16 = (x121<(x122/(x123/x124)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x125 = 0U;
	int32_t x126 = -307;
	static int64_t x127 = -92017573LL;
	static int8_t x128 = -1;
	int32_t t17 = -95486082;

	t17 = (x125<(x126/(x127/x128)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	uint64_t x139 = 201136610101209LLU;
	static uint8_t x140 = 123U;
	int32_t t18 = -466679;

	t18 = (x137<(x138/(x139/x140)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int16_t x150 = -1;
	int64_t x151 = INT64_MIN;
	static int16_t x152 = -475;

	t19 = (x149<(x150/(x151/x152)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x153 = 476473441U;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -1;
	uint32_t x156 = 24U;
	int32_t t20 = 1574;

	t20 = (x153<(x154/(x155/x156)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x157 = 482U;
	int8_t x159 = INT8_MIN;
	static int32_t t21 = 124;

	t21 = (x157<(x158/(x159/x160)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x161 = 10944;
	int64_t x162 = INT64_MIN;
	volatile uint64_t x163 = 75740969892314LLU;
	volatile uint16_t x164 = 2U;
	int32_t t22 = 44;

	t22 = (x161<(x162/(x163/x164)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x169 = 46943LLU;
	uint8_t x170 = 16U;
	static int64_t x171 = INT64_MIN;
	volatile int64_t x172 = 7LL;
	static int32_t t23 = -15854;

	t23 = (x169<(x170/(x171/x172)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x177 = -31;
	volatile int64_t x178 = -754LL;
	int8_t x179 = INT8_MIN;
	int16_t x180 = 1;

	t24 = (x177<(x178/(x179/x180)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x185 = -1577546082586496LL;
	int16_t x187 = INT16_MIN;
	volatile int8_t x188 = -1;
	int32_t t25 = -59276;

	t25 = (x185<(x186/(x187/x188)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x193 = INT64_MIN;
	static volatile int8_t x194 = INT8_MIN;
	uint16_t x195 = 3U;
	int8_t x196 = -1;

	t26 = (x193<(x194/(x195/x196)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x199 = INT64_MIN;
	static int8_t x200 = INT8_MIN;
	int32_t t27 = -1;

	t27 = (x197<(x198/(x199/x200)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x202 = -1;
	static int16_t x203 = -15;
	static volatile uint64_t x204 = 1272LLU;
	volatile int32_t t28 = 193067;

	t28 = (x201<(x202/(x203/x204)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x217 = 838973LL;
	int16_t x218 = -7063;
	uint16_t x219 = 14U;
	int16_t x220 = -1;

	t29 = (x217<(x218/(x219/x220)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x221 = UINT64_MAX;
	static int32_t x222 = INT32_MAX;
	int64_t x223 = INT64_MIN;
	uint8_t x224 = UINT8_MAX;
	int32_t t30 = 1039085;

	t30 = (x221<(x222/(x223/x224)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x225 = 2U;
	static int32_t x227 = INT32_MIN;
	static int32_t t31 = -1596;

	t31 = (x225<(x226/(x227/x228)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x233 = 859U;
	volatile uint32_t x234 = 2075990U;
	static int8_t x236 = -2;
	int32_t t32 = 38700445;

	t32 = (x233<(x234/(x235/x236)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x249 = UINT64_MAX;
	int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MAX;
	int8_t x252 = -1;
	int32_t t33 = -71946062;

	t33 = (x249<(x250/(x251/x252)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x257 = 45U;
	int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	volatile uint64_t x260 = 46211478731LLU;
	static int32_t t34 = -2865;

	t34 = (x257<(x258/(x259/x260)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x265 = -203311713847957LL;
	uint8_t x266 = UINT8_MAX;
	static volatile int32_t t35 = -15;

	t35 = (x265<(x266/(x267/x268)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x281 = -1;
	int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	int32_t t36 = 165;

	t36 = (x281<(x282/(x283/x284)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x285 = INT32_MAX;
	volatile int64_t x286 = INT64_MIN;
	int32_t t37 = -1014098;

	t37 = (x285<(x286/(x287/x288)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x289 = 1559734917LL;
	volatile int64_t x290 = INT64_MIN;
	int16_t x291 = -37;
	uint8_t x292 = 1U;

	t38 = (x289<(x290/(x291/x292)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x304 = INT64_MIN;
	static int32_t t39 = -3000928;

	t39 = (x301<(x302/(x303/x304)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x313 = INT32_MAX;
	int64_t x314 = INT64_MAX;
	int32_t x315 = -1;
	int32_t x316 = -1;
	volatile int32_t t40 = -456;

	t40 = (x313<(x314/(x315/x316)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x317 = INT16_MIN;
	volatile int16_t x318 = -1;
	uint32_t x320 = 109611943U;
	int32_t t41 = 50;

	t41 = (x317<(x318/(x319/x320)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	volatile int8_t x335 = -6;
	uint64_t x336 = 317227312LLU;

	t42 = (x333<(x334/(x335/x336)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x351 = UINT64_MAX;
	int8_t x352 = 5;
	int32_t t43 = 18019;

	t43 = (x349<(x350/(x351/x352)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x353 = INT64_MAX;
	uint16_t x354 = 988U;
	volatile uint16_t x355 = 15U;
	static volatile int32_t t44 = -5;

	t44 = (x353<(x354/(x355/x356)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x358 = INT8_MIN;
	static int64_t x359 = INT64_MIN;
	uint32_t x360 = 49U;
	static volatile int32_t t45 = -849432;

	t45 = (x357<(x358/(x359/x360)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x361 = INT16_MIN;
	uint16_t x362 = UINT16_MAX;
	uint8_t x364 = 9U;
	volatile int32_t t46 = -61517;

	t46 = (x361<(x362/(x363/x364)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x373 = -1;
	int32_t x374 = -1;
	volatile uint16_t x375 = 1666U;
	int16_t x376 = -1;
	int32_t t47 = 5683;

	t47 = (x373<(x374/(x375/x376)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x377 = 12U;
	int16_t x378 = 1;
	volatile int64_t x379 = -961841168680918LL;
	int8_t x380 = -1;
	int32_t t48 = -820865;

	t48 = (x377<(x378/(x379/x380)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x381 = INT16_MIN;
	volatile uint32_t x382 = 281707U;
	static uint64_t x383 = 5603021750079LLU;
	uint32_t x384 = UINT32_MAX;
	int32_t t49 = -2;

	t49 = (x381<(x382/(x383/x384)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x385 = 16LL;
	volatile int8_t x388 = INT8_MIN;
	int32_t t50 = 955024;

	t50 = (x385<(x386/(x387/x388)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x389 = -1;
	volatile uint32_t x390 = 28U;
	static int64_t x391 = 5738722300LL;
	int32_t x392 = 330;
	int32_t t51 = -264033;

	t51 = (x389<(x390/(x391/x392)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x397 = 1U;
	int16_t x400 = INT16_MIN;
	volatile int32_t t52 = 1076853;

	t52 = (x397<(x398/(x399/x400)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x401 = 45U;
	int32_t x403 = INT32_MAX;
	uint32_t x404 = 94U;
	static int32_t t53 = -6767733;

	t53 = (x401<(x402/(x403/x404)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x406 = 16U;
	int64_t x408 = -1LL;
	volatile int32_t t54 = 7649294;

	t54 = (x405<(x406/(x407/x408)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x417 = INT64_MAX;
	uint8_t x418 = UINT8_MAX;
	uint32_t x419 = UINT32_MAX;
	int32_t t55 = -3;

	t55 = (x417<(x418/(x419/x420)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x421 = INT16_MIN;
	int32_t x422 = INT32_MIN;
	int32_t x423 = INT32_MAX;
	volatile int64_t x424 = -1LL;
	int32_t t56 = -1;

	t56 = (x421<(x422/(x423/x424)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x429 = -26;
	int32_t x430 = -8;
	uint32_t x431 = 3977U;
	static int64_t x432 = -1LL;
	static int32_t t57 = -72877;

	t57 = (x429<(x430/(x431/x432)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x433 = -175528372;
	int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = 4U;

	t58 = (x433<(x434/(x435/x436)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x437 = INT8_MAX;
	int64_t x438 = -1LL;
	volatile int8_t x440 = INT8_MAX;
	static volatile int32_t t59 = 12920609;

	t59 = (x437<(x438/(x439/x440)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x449 = 4;
	uint16_t x450 = 0U;
	int8_t x452 = -1;
	volatile int32_t t60 = 1546;

	t60 = (x449<(x450/(x451/x452)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x455 = INT64_MIN;
	uint32_t x456 = 4662U;
	volatile int32_t t61 = 7;

	t61 = (x453<(x454/(x455/x456)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x461 = INT8_MIN;
	int8_t x462 = -3;
	int8_t x463 = -1;
	int32_t x464 = -1;
	int32_t t62 = -6120;

	t62 = (x461<(x462/(x463/x464)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x477 = -14;
	int32_t x478 = INT32_MIN;
	static int64_t x479 = INT64_MIN;
	static int64_t x480 = INT64_MIN;

	t63 = (x477<(x478/(x479/x480)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x489 = 15U;
	volatile int8_t x490 = -1;
	int64_t x491 = -173535003970LL;
	int16_t x492 = INT16_MIN;
	int32_t t64 = 210336282;

	t64 = (x489<(x490/(x491/x492)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x510 = -1;
	volatile uint16_t x511 = 392U;
	int32_t x512 = -6;
	volatile int32_t t65 = -58;

	t65 = (x509<(x510/(x511/x512)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x513 = 976835LLU;
	int8_t x515 = INT8_MIN;
	int8_t x516 = -1;
	int32_t t66 = -284;

	t66 = (x513<(x514/(x515/x516)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x518 = INT16_MIN;
	int32_t x519 = -1;
	volatile int32_t t67 = 44485639;

	t67 = (x517<(x518/(x519/x520)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x522 = INT64_MIN;
	static int16_t x523 = -1;
	uint32_t x524 = UINT32_MAX;

	t68 = (x521<(x522/(x523/x524)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x529 = INT64_MAX;
	static uint16_t x531 = UINT16_MAX;
	int8_t x532 = INT8_MIN;
	static volatile int32_t t69 = -227;

	t69 = (x529<(x530/(x531/x532)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x533 = INT64_MAX;
	int64_t x535 = INT64_MAX;
	uint32_t x536 = 12509487U;
	volatile int32_t t70 = 44966577;

	t70 = (x533<(x534/(x535/x536)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x538 = -1LL;
	int16_t x539 = -411;
	uint8_t x540 = 13U;
	static volatile int32_t t71 = -34618506;

	t71 = (x537<(x538/(x539/x540)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x541 = UINT8_MAX;
	int16_t x543 = INT16_MAX;
	int8_t x544 = -1;
	int32_t t72 = 0;

	t72 = (x541<(x542/(x543/x544)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x565 = INT64_MIN;
	int64_t x566 = -1LL;
	volatile int64_t x567 = INT64_MAX;
	uint16_t x568 = 60U;
	volatile int32_t t73 = -926286;

	t73 = (x565<(x566/(x567/x568)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x571 = INT32_MAX;
	volatile int32_t x572 = -138;
	static int32_t t74 = -495197;

	t74 = (x569<(x570/(x571/x572)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x581 = 1914957LLU;
	static uint32_t x582 = 61933422U;
	int64_t x583 = INT64_MAX;
	static volatile int8_t x584 = INT8_MIN;
	static int32_t t75 = 135;

	t75 = (x581<(x582/(x583/x584)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x586 = UINT64_MAX;
	int32_t x587 = INT32_MIN;
	int32_t x588 = INT32_MIN;
	int32_t t76 = 632723420;

	t76 = (x585<(x586/(x587/x588)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x593 = INT32_MAX;
	int16_t x596 = -1;

	t77 = (x593<(x594/(x595/x596)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x598 = -223;
	static int8_t x599 = -15;
	uint8_t x600 = 5U;

	t78 = (x597<(x598/(x599/x600)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x601 = 7;
	volatile int16_t x603 = 3946;
	int32_t x604 = 996;
	volatile int32_t t79 = -1946;

	t79 = (x601<(x602/(x603/x604)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x609 = 2;
	volatile int64_t x610 = 22036LL;
	uint64_t x611 = UINT64_MAX;
	int32_t x612 = 9988;
	int32_t t80 = -946306;

	t80 = (x609<(x610/(x611/x612)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x634 = 2U;
	int32_t x636 = 3778;

	t81 = (x633<(x634/(x635/x636)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x645 = 0;
	uint8_t x646 = UINT8_MAX;
	uint16_t x647 = 2346U;
	static volatile int8_t x648 = INT8_MIN;
	volatile int32_t t82 = -14;

	t82 = (x645<(x646/(x647/x648)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x657 = -27505;
	static int32_t x658 = -6115754;
	volatile int32_t x659 = INT32_MIN;
	volatile int32_t t83 = -7872062;

	t83 = (x657<(x658/(x659/x660)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x665 = -115591;
	static int32_t x666 = -46;
	static int64_t x667 = -1LL;
	volatile int64_t x668 = -1LL;

	t84 = (x665<(x666/(x667/x668)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x673 = -1LL;
	static volatile uint8_t x674 = 4U;
	int32_t x675 = INT32_MAX;
	int8_t x676 = -24;
	int32_t t85 = 1;

	t85 = (x673<(x674/(x675/x676)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x681 = -10659;
	int8_t x682 = INT8_MAX;
	static int16_t x683 = INT16_MAX;
	int16_t x684 = -1678;
	int32_t t86 = 207110;

	t86 = (x681<(x682/(x683/x684)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x686 = UINT8_MAX;
	int16_t x687 = -1;
	volatile int32_t t87 = -35477045;

	t87 = (x685<(x686/(x687/x688)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x689 = -1;
	int64_t x690 = INT64_MAX;
	int16_t x691 = -1;
	volatile uint64_t x692 = UINT64_MAX;

	t88 = (x689<(x690/(x691/x692)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x693 = UINT16_MAX;
	uint64_t x694 = 71150468974LLU;
	int16_t x695 = INT16_MIN;
	int8_t x696 = -1;
	static volatile int32_t t89 = -21789;

	t89 = (x693<(x694/(x695/x696)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x697 = INT32_MIN;
	int32_t x698 = 10493;
	int16_t x699 = -3011;
	uint32_t x700 = 4952713U;
	static volatile int32_t t90 = -83950924;

	t90 = (x697<(x698/(x699/x700)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x709 = INT8_MIN;
	uint32_t x710 = UINT32_MAX;
	volatile int32_t x711 = INT32_MAX;
	int16_t x712 = INT16_MIN;
	static int32_t t91 = -118074129;

	t91 = (x709<(x710/(x711/x712)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x717 = 5235U;
	int16_t x718 = INT16_MAX;
	static int16_t x719 = INT16_MAX;
	uint16_t x720 = 1167U;
	int32_t t92 = 2;

	t92 = (x717<(x718/(x719/x720)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x733 = 1U;
	static volatile int64_t x736 = INT64_MAX;
	volatile int32_t t93 = -10;

	t93 = (x733<(x734/(x735/x736)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x741 = INT64_MAX;
	uint16_t x742 = 4U;
	volatile int32_t x743 = INT32_MIN;
	int32_t x744 = 28720488;
	static volatile int32_t t94 = -14883468;

	t94 = (x741<(x742/(x743/x744)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x758 = 352838U;
	int16_t x759 = INT16_MAX;
	static volatile int64_t x760 = 1LL;

	t95 = (x757<(x758/(x759/x760)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x767 = -183;
	int8_t x768 = -2;
	volatile int32_t t96 = -13522;

	t96 = (x765<(x766/(x767/x768)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x773 = 7624U;
	int64_t x775 = 990155261233087544LL;
	static int32_t x776 = -52259625;
	int32_t t97 = -211;

	t97 = (x773<(x774/(x775/x776)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x797 = -1;
	int8_t x798 = -7;
	int64_t x799 = INT64_MIN;
	volatile int8_t x800 = INT8_MAX;
	volatile int32_t t98 = 2037307;

	t98 = (x797<(x798/(x799/x800)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x805 = -1;
	static int8_t x807 = 33;
	static uint8_t x808 = 17U;
	volatile int32_t t99 = -39527549;

	t99 = (x805<(x806/(x807/x808)));

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

