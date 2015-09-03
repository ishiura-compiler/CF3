#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = 942387015047LLU;
int32_t x14 = INT32_MAX;
volatile int64_t x17 = 99904410192090LL;
int64_t x20 = -1LL;
volatile int8_t x35 = INT8_MAX;
volatile int32_t x39 = -20726;
static int64_t x40 = INT64_MAX;
volatile int64_t x62 = 2111125675912130LL;
uint64_t x73 = 390439817LLU;
int64_t x111 = -1LL;
int32_t t11 = -25;
int16_t x117 = INT16_MIN;
int8_t x119 = 0;
int64_t t14 = 645413220820987LL;
uint64_t t15 = 645186298LLU;
int16_t x137 = INT16_MIN;
volatile int32_t t16 = 44;
static int32_t x149 = 37901833;
static volatile uint8_t x152 = 1U;
int64_t x163 = -178383050151442319LL;
int64_t x167 = INT64_MIN;
uint64_t x175 = 5303361779048LLU;
volatile int32_t t22 = -1000474;
static uint32_t x195 = 355041071U;
static uint32_t x202 = UINT32_MAX;
uint8_t x242 = UINT8_MAX;
volatile int64_t t27 = 1553171518LL;
volatile int64_t x278 = -1LL;
uint32_t x280 = UINT32_MAX;
int8_t x282 = INT8_MAX;
int64_t x295 = -1LL;
int8_t x309 = -2;
volatile int64_t x315 = -1LL;
int8_t x316 = -1;
uint8_t x319 = 112U;
int16_t x324 = INT16_MIN;
int64_t x330 = 1350962586LL;
int32_t t41 = 37;
int8_t x354 = -1;
uint8_t x358 = 2U;
volatile int8_t x359 = -1;
volatile int64_t x362 = INT64_MIN;
int8_t x363 = INT8_MAX;
int16_t x367 = -3;
uint16_t x371 = 0U;
int32_t x377 = -1;
int32_t t49 = 49705436;
int8_t x412 = INT8_MAX;
int64_t x426 = -8407LL;
static int64_t x427 = 44578349306LL;
uint8_t x434 = UINT8_MAX;
int64_t x435 = -1LL;
uint8_t x437 = 18U;
int16_t x442 = -4;
int16_t x464 = INT16_MIN;
volatile int32_t x469 = INT32_MIN;
int8_t x491 = 33;
int32_t x492 = -50577;
int32_t t59 = 392226;
int64_t x498 = 240LL;
volatile int32_t t60 = -4815762;
uint64_t x502 = 1458893485989LLU;
static uint32_t x524 = 16631337U;
static int32_t x525 = 85;
volatile int8_t x529 = -5;
static uint8_t x530 = 3U;
int8_t x540 = -1;
uint64_t x545 = 30LLU;
int8_t x557 = INT8_MIN;
int32_t t70 = -1;
uint32_t x567 = 6U;
int32_t x572 = 1062059901;
static uint16_t x577 = UINT16_MAX;
int32_t t76 = 44170164;
uint32_t x597 = UINT32_MAX;
int32_t x599 = INT32_MIN;
int32_t x621 = INT32_MIN;
static int8_t x623 = INT8_MIN;
int32_t x626 = -1;
uint8_t x628 = 15U;
uint32_t x639 = 23142805U;
volatile int32_t x646 = INT32_MIN;
uint64_t x651 = UINT64_MAX;
uint64_t x652 = 6195296998357LLU;
int64_t x653 = 1LL;
volatile int64_t t85 = -50313701125174706LL;
static volatile int32_t x660 = -1;
static uint16_t x691 = 5971U;
int64_t x692 = -1LL;
int16_t x696 = 2641;
int32_t t89 = 5858;
static int64_t x711 = 1747469227689991666LL;
int64_t x714 = -1LL;
int32_t x715 = -10;
volatile int64_t x716 = 797986534595LL;
volatile int64_t t93 = 411379LL;
uint16_t x717 = 44U;
volatile int32_t t94 = 5;
volatile int64_t x721 = INT64_MAX;
volatile uint32_t x723 = UINT32_MAX;
uint32_t x724 = UINT32_MAX;
volatile int64_t t95 = 16567310819997LL;
uint32_t x729 = 2U;
uint8_t x732 = UINT8_MAX;
uint16_t x744 = 4598U;
int8_t x757 = -44;


void f0(void) {
	int64_t x9 = 56649980937521LL;
	int8_t x11 = INT8_MAX;
	int8_t x12 = -1;
	volatile int64_t t0 = -2120327782058LL;

	t0 = (x9%((x10^x11)<x12));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	static int64_t x15 = INT64_MIN;
	static uint8_t x16 = 5U;
	int32_t t1 = -42022670;

	t1 = (x13%((x14^x15)<x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x18 = INT32_MIN;
	uint16_t x19 = 127U;
	volatile int64_t t2 = -18840256388389011LL;

	t2 = (x17%((x18^x19)<x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = 2791817896306993168LL;
	int64_t x26 = 4164359LL;
	uint32_t x27 = 90U;
	static uint64_t x28 = UINT64_MAX;
	int64_t t3 = -18581LL;

	t3 = (x25%((x26^x27)<x28));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x33 = 0;
	static int32_t x34 = -2961;
	volatile int8_t x36 = -1;
	volatile int32_t t4 = -805916584;

	t4 = (x33%((x34^x35)<x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = 0U;
	static uint8_t x38 = 40U;
	static int32_t t5 = -1910;

	t5 = (x37%((x38^x39)<x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = -1LL;
	uint16_t x51 = 146U;
	static volatile int64_t x52 = -1LL;
	volatile int32_t t6 = 135439942;

	t6 = (x49%((x50^x51)<x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = -68;
	int64_t x59 = INT64_MAX;
	int64_t x60 = -1LL;
	int32_t t7 = 418;

	t7 = (x57%((x58^x59)<x60));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x63 = INT8_MIN;
	static volatile int32_t x64 = INT32_MIN;
	uint32_t t8 = 242595U;

	t8 = (x61%((x62^x63)<x64));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x74 = 2U;
	int8_t x75 = -2;
	int16_t x76 = 2;
	uint64_t t9 = 62225570LLU;

	t9 = (x73%((x74^x75)<x76));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x85 = -20836363583427361LL;
	volatile int16_t x86 = -1;
	uint8_t x87 = 10U;
	uint8_t x88 = 117U;
	volatile int64_t t10 = -45866010273LL;

	t10 = (x85%((x86^x87)<x88));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x109 = INT8_MIN;
	volatile uint16_t x110 = 29U;
	int8_t x112 = -1;

	t11 = (x109%((x110^x111)<x112));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x118 = 1793153745618668221LLU;
	int64_t x120 = -1LL;
	volatile int32_t t12 = 0;

	t12 = (x117%((x118^x119)<x120));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x125 = -15707735944LL;
	static volatile int32_t x126 = -24712696;
	static uint16_t x127 = 14U;
	volatile int16_t x128 = INT16_MAX;
	static int64_t t13 = -7061101LL;

	t13 = (x125%((x126^x127)<x128));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x129 = -2226LL;
	uint8_t x130 = UINT8_MAX;
	static volatile int16_t x131 = INT16_MIN;
	uint16_t x132 = 27814U;

	t14 = (x129%((x130^x131)<x132));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x133 = 660614231700LLU;
	uint64_t x134 = 1010401742740LLU;
	static int16_t x135 = INT16_MAX;
	int8_t x136 = -1;

	t15 = (x133%((x134^x135)<x136));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x138 = INT32_MAX;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MAX;

	t16 = (x137%((x138^x139)<x140));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = 1;
	int16_t x147 = INT16_MAX;
	volatile uint32_t x148 = 914605U;
	static int64_t t17 = 6134420971LL;

	t17 = (x145%((x146^x147)<x148));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x150 = -1;
	static uint8_t x151 = 5U;
	volatile int32_t t18 = 125612461;

	t18 = (x149%((x150^x151)<x152));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x161 = INT32_MIN;
	uint16_t x162 = 89U;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t19 = -1205;

	t19 = (x161%((x162^x163)<x164));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x165 = 461977U;
	uint16_t x166 = 12U;
	volatile int8_t x168 = -1;
	volatile uint32_t t20 = 243773U;

	t20 = (x165%((x166^x167)<x168));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x173 = INT32_MAX;
	int16_t x174 = -1;
	int8_t x176 = -1;
	int32_t t21 = -109;

	t21 = (x173%((x174^x175)<x176));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = -1;
	int8_t x183 = INT8_MAX;
	static uint16_t x184 = 201U;

	t22 = (x181%((x182^x183)<x184));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x193 = INT8_MAX;
	static uint16_t x194 = 3U;
	int16_t x196 = INT16_MIN;
	volatile int32_t t23 = 2382475;

	t23 = (x193%((x194^x195)<x196));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x201 = 92012456984759848LLU;
	int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MAX;
	uint64_t t24 = 1363510204623632643LLU;

	t24 = (x201%((x202^x203)<x204));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x213 = INT8_MAX;
	int64_t x214 = 101880LL;
	int8_t x215 = -3;
	int16_t x216 = 3;
	static volatile int32_t t25 = -705902668;

	t25 = (x213%((x214^x215)<x216));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x229 = INT32_MIN;
	volatile uint64_t x230 = UINT64_MAX;
	static int8_t x231 = -24;
	volatile int8_t x232 = -7;
	volatile int32_t t26 = -6991365;

	t26 = (x229%((x230^x231)<x232));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x241 = 515388450LL;
	int8_t x243 = -6;
	static int8_t x244 = -1;

	t27 = (x241%((x242^x243)<x244));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	static volatile int8_t x248 = 31;
	volatile uint64_t t28 = 2245090908805519538LLU;

	t28 = (x245%((x246^x247)<x248));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x277 = -578;
	int16_t x279 = 0;
	int32_t t29 = 159051139;

	t29 = (x277%((x278^x279)<x280));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x281 = 836U;
	static int8_t x283 = INT8_MIN;
	static int32_t x284 = 128540;
	static volatile uint32_t t30 = 4164U;

	t30 = (x281%((x282^x283)<x284));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x293 = -20;
	uint8_t x294 = UINT8_MAX;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t31 = -5105;

	t31 = (x293%((x294^x295)<x296));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x301 = INT8_MAX;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = -15654;
	static volatile int64_t x304 = 34572568LL;
	static int32_t t32 = -14;

	t32 = (x301%((x302^x303)<x304));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x305 = INT16_MAX;
	int64_t x306 = -1LL;
	int8_t x307 = -1;
	volatile uint16_t x308 = 1U;
	volatile int32_t t33 = 36280257;

	t33 = (x305%((x306^x307)<x308));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x310 = 1;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MAX;
	volatile int32_t t34 = 13;

	t34 = (x309%((x310^x311)<x312));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x313 = 365832135209092778LL;
	uint16_t x314 = 17U;
	static volatile int64_t t35 = 2666539707520LL;

	t35 = (x313%((x314^x315)<x316));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MAX;
	volatile uint64_t x320 = 61498778599988LLU;
	volatile int32_t t36 = -101492775;

	t36 = (x317%((x318^x319)<x320));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x321 = 0U;
	static int32_t x322 = INT32_MAX;
	int8_t x323 = -1;
	int32_t t37 = 31453;

	t37 = (x321%((x322^x323)<x324));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x325 = 17LLU;
	int32_t x326 = INT32_MIN;
	static uint8_t x327 = 32U;
	static int16_t x328 = INT16_MIN;
	volatile uint64_t t38 = 12356LLU;

	t38 = (x325%((x326^x327)<x328));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x329 = -1;
	int8_t x331 = INT8_MIN;
	int32_t x332 = -540806180;
	int32_t t39 = 23934031;

	t39 = (x329%((x330^x331)<x332));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x333 = 2256U;
	static uint32_t x334 = UINT32_MAX;
	volatile int8_t x335 = INT8_MAX;
	int8_t x336 = -26;
	int32_t t40 = 1;

	t40 = (x333%((x334^x335)<x336));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = 66849087872002LL;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = -1;

	t41 = (x337%((x338^x339)<x340));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x345 = 13901U;
	int8_t x346 = INT8_MIN;
	volatile int16_t x347 = INT16_MAX;
	volatile int16_t x348 = INT16_MAX;
	volatile int32_t t42 = -442647901;

	t42 = (x345%((x346^x347)<x348));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x353 = INT64_MAX;
	int16_t x355 = INT16_MAX;
	int8_t x356 = 2;
	volatile int64_t t43 = -2454705018LL;

	t43 = (x353%((x354^x355)<x356));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x357 = UINT64_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile uint64_t t44 = 25LLU;

	t44 = (x357%((x358^x359)<x360));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x361 = -916083;
	int64_t x364 = 10225625LL;
	int32_t t45 = -1;

	t45 = (x361%((x362^x363)<x364));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x365 = 135347U;
	volatile int8_t x366 = INT8_MIN;
	uint64_t x368 = 80824624776138815LLU;
	uint32_t t46 = 30U;

	t46 = (x365%((x366^x367)<x368));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x369 = 6339U;
	static uint32_t x370 = 2009U;
	int8_t x372 = -1;
	volatile int32_t t47 = -1;

	t47 = (x369%((x370^x371)<x372));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x378 = 21U;
	int8_t x379 = -1;
	static volatile uint16_t x380 = 438U;
	volatile int32_t t48 = 5167370;

	t48 = (x377%((x378^x379)<x380));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x397 = INT32_MAX;
	static uint32_t x398 = 27U;
	int8_t x399 = INT8_MIN;
	static uint64_t x400 = UINT64_MAX;

	t49 = (x397%((x398^x399)<x400));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x409 = -2;
	int8_t x410 = INT8_MAX;
	int8_t x411 = -1;
	int32_t t50 = 40000988;

	t50 = (x409%((x410^x411)<x412));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x425 = 1272458U;
	volatile uint64_t x428 = UINT64_MAX;
	uint32_t t51 = 1U;

	t51 = (x425%((x426^x427)<x428));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x433 = INT64_MAX;
	static int8_t x436 = INT8_MIN;
	int64_t t52 = 1282076579438938499LL;

	t52 = (x433%((x434^x435)<x436));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x438 = INT32_MIN;
	static int32_t x439 = 357162;
	uint8_t x440 = 18U;
	int32_t t53 = -1;

	t53 = (x437%((x438^x439)<x440));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x441 = 662453241U;
	uint32_t x443 = 292U;
	int64_t x444 = 480432540003780224LL;
	uint32_t t54 = 1445372399U;

	t54 = (x441%((x442^x443)<x444));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x445 = -1;
	int8_t x446 = 1;
	static int64_t x447 = INT64_MIN;
	static uint32_t x448 = 514097200U;
	volatile int32_t t55 = 655641434;

	t55 = (x445%((x446^x447)<x448));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x461 = -1;
	static volatile int32_t x462 = INT32_MIN;
	volatile uint32_t x463 = 10982033U;
	volatile int32_t t56 = 1778625;

	t56 = (x461%((x462^x463)<x464));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x470 = -767;
	uint32_t x471 = UINT32_MAX;
	volatile int16_t x472 = INT16_MIN;
	static volatile int32_t t57 = -475;

	t57 = (x469%((x470^x471)<x472));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x489 = 20;
	volatile uint64_t x490 = 0LLU;
	volatile int32_t t58 = 36231020;

	t58 = (x489%((x490^x491)<x492));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x493 = INT16_MAX;
	volatile int8_t x494 = INT8_MAX;
	int16_t x495 = 8;
	uint32_t x496 = 2070U;

	t59 = (x493%((x494^x495)<x496));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x497 = -1;
	volatile int8_t x499 = -31;
	int16_t x500 = INT16_MAX;

	t60 = (x497%((x498^x499)<x500));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x501 = -401317466763LL;
	static uint8_t x503 = 27U;
	static int64_t x504 = INT64_MIN;
	volatile int64_t t61 = 2954028387593697LL;

	t61 = (x501%((x502^x503)<x504));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x521 = -1;
	static int32_t x522 = -18321;
	int8_t x523 = INT8_MIN;
	int32_t t62 = -5;

	t62 = (x521%((x522^x523)<x524));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x526 = 20;
	uint16_t x527 = 29U;
	uint16_t x528 = 4886U;
	volatile int32_t t63 = 744;

	t63 = (x525%((x526^x527)<x528));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x531 = 1;
	uint64_t x532 = 1621882LLU;
	volatile int32_t t64 = 10905;

	t64 = (x529%((x530^x531)<x532));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x533 = 3U;
	int32_t x534 = -483545;
	uint8_t x535 = UINT8_MAX;
	uint16_t x536 = 484U;
	volatile int32_t t65 = 33159;

	t65 = (x533%((x534^x535)<x536));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x537 = 3U;
	int64_t x538 = -2217LL;
	uint16_t x539 = 3913U;
	int32_t t66 = 1322;

	t66 = (x537%((x538^x539)<x540));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x541 = 6U;
	volatile uint8_t x542 = UINT8_MAX;
	int64_t x543 = INT64_MIN;
	int64_t x544 = INT64_MAX;
	static volatile int32_t t67 = -252;

	t67 = (x541%((x542^x543)<x544));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x546 = 89U;
	volatile int64_t x547 = -1LL;
	uint64_t x548 = UINT64_MAX;
	static volatile uint64_t t68 = 664028738051228103LLU;

	t68 = (x545%((x546^x547)<x548));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x553 = -1;
	int8_t x554 = INT8_MAX;
	uint64_t x555 = 8130552131980LLU;
	volatile int16_t x556 = -1;
	int32_t t69 = -9342256;

	t69 = (x553%((x554^x555)<x556));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x558 = -3911741;
	int16_t x559 = 2;
	int8_t x560 = INT8_MAX;

	t70 = (x557%((x558^x559)<x560));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x561 = INT32_MAX;
	uint64_t x562 = 56667266LLU;
	volatile uint64_t x563 = UINT64_MAX;
	int8_t x564 = INT8_MIN;
	volatile int32_t t71 = 25445;

	t71 = (x561%((x562^x563)<x564));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x565 = -1;
	uint64_t x566 = 0LLU;
	uint64_t x568 = UINT64_MAX;
	int32_t t72 = 672496;

	t72 = (x565%((x566^x567)<x568));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x569 = 282864503738674LL;
	volatile int32_t x570 = 1058750020;
	static int16_t x571 = INT16_MAX;
	int64_t t73 = 8722316271833LL;

	t73 = (x569%((x570^x571)<x572));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x573 = 1;
	uint32_t x574 = 2408U;
	uint8_t x575 = UINT8_MAX;
	static int32_t x576 = -1;
	volatile int32_t t74 = -3810127;

	t74 = (x573%((x574^x575)<x576));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x578 = 4U;
	volatile int64_t x579 = INT64_MIN;
	volatile uint16_t x580 = 4U;
	int32_t t75 = -96648035;

	t75 = (x577%((x578^x579)<x580));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x585 = UINT16_MAX;
	static int16_t x586 = INT16_MIN;
	int16_t x587 = INT16_MAX;
	uint8_t x588 = 22U;

	t76 = (x585%((x586^x587)<x588));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x598 = 41U;
	int16_t x600 = INT16_MIN;
	uint32_t t77 = 72203U;

	t77 = (x597%((x598^x599)<x600));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x622 = UINT8_MAX;
	uint16_t x624 = UINT16_MAX;
	static int32_t t78 = -6;

	t78 = (x621%((x622^x623)<x624));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x625 = -13720;
	int64_t x627 = 31360657721LL;
	volatile int32_t t79 = -12844;

	t79 = (x625%((x626^x627)<x628));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x629 = 3273U;
	int32_t x630 = INT32_MIN;
	volatile int32_t x631 = 12377422;
	static int32_t x632 = -1;
	uint32_t t80 = 416397406U;

	t80 = (x629%((x630^x631)<x632));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x633 = UINT16_MAX;
	int8_t x634 = -12;
	int16_t x635 = 7;
	int8_t x636 = INT8_MAX;
	int32_t t81 = -25977940;

	t81 = (x633%((x634^x635)<x636));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x637 = -2702LL;
	uint64_t x638 = 14620LLU;
	static volatile int32_t x640 = -1;
	int64_t t82 = 536LL;

	t82 = (x637%((x638^x639)<x640));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x645 = 49455579U;
	uint16_t x647 = UINT16_MAX;
	int8_t x648 = INT8_MIN;
	volatile uint32_t t83 = 475U;

	t83 = (x645%((x646^x647)<x648));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x649 = UINT16_MAX;
	volatile uint64_t x650 = UINT64_MAX;
	int32_t t84 = -25665710;

	t84 = (x649%((x650^x651)<x652));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x654 = INT8_MAX;
	volatile int64_t x655 = INT64_MIN;
	int16_t x656 = -1;

	t85 = (x653%((x654^x655)<x656));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x657 = INT8_MAX;
	int8_t x658 = -4;
	uint16_t x659 = UINT16_MAX;
	int32_t t86 = 2405621;

	t86 = (x657%((x658^x659)<x660));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x677 = -179605;
	volatile int8_t x678 = INT8_MIN;
	volatile uint32_t x679 = UINT32_MAX;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t87 = -311;

	t87 = (x677%((x678^x679)<x680));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x689 = UINT8_MAX;
	uint64_t x690 = UINT64_MAX;
	int32_t t88 = -6;

	t88 = (x689%((x690^x691)<x692));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x693 = 104U;
	uint32_t x694 = 27U;
	volatile uint8_t x695 = UINT8_MAX;

	t89 = (x693%((x694^x695)<x696));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x697 = INT64_MAX;
	int64_t x698 = INT64_MAX;
	int8_t x699 = -1;
	volatile int32_t x700 = -1;
	volatile int64_t t90 = 488108019LL;

	t90 = (x697%((x698^x699)<x700));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x705 = -1;
	static int64_t x706 = INT64_MIN;
	volatile int8_t x707 = 0;
	int64_t x708 = -1103097336025225LL;
	int32_t t91 = 8327845;

	t91 = (x705%((x706^x707)<x708));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x709 = INT16_MAX;
	int16_t x710 = -1;
	int64_t x712 = -264715LL;
	static volatile int32_t t92 = 14;

	t92 = (x709%((x710^x711)<x712));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x713 = INT64_MAX;

	t93 = (x713%((x714^x715)<x716));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x718 = -8;
	static int64_t x719 = 4350855047636LL;
	static volatile int64_t x720 = 0LL;

	t94 = (x717%((x718^x719)<x720));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x722 = 432U;

	t95 = (x721%((x722^x723)<x724));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x730 = 0;
	int32_t x731 = INT32_MIN;
	uint32_t t96 = 188U;

	t96 = (x729%((x730^x731)<x732));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x741 = -1LL;
	int16_t x742 = 1;
	int32_t x743 = 478;
	int64_t t97 = -3835357480422LL;

	t97 = (x741%((x742^x743)<x744));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x745 = 26777;
	uint16_t x746 = UINT16_MAX;
	volatile uint32_t x747 = 2084028U;
	int8_t x748 = INT8_MIN;
	int32_t t98 = -62;

	t98 = (x745%((x746^x747)<x748));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x758 = INT16_MAX;
	int8_t x759 = -1;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t99 = 0;

	t99 = (x757%((x758^x759)<x760));

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

