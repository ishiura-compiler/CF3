#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x13 = 0U;
uint64_t x16 = 47LLU;
static int32_t x34 = INT32_MAX;
static uint16_t x36 = UINT16_MAX;
uint32_t x40 = 201908U;
volatile int32_t t7 = -768222;
static int8_t x104 = INT8_MAX;
volatile int32_t x105 = -98089;
static int32_t x106 = -4623;
uint8_t x107 = UINT8_MAX;
volatile int32_t t16 = 0;
int8_t x121 = INT8_MIN;
int32_t t18 = -126;
int8_t x136 = -1;
uint16_t x148 = UINT16_MAX;
int32_t x157 = -1;
uint64_t x166 = 255940660LLU;
uint64_t x167 = 10LLU;
static int8_t x179 = INT8_MAX;
uint16_t x183 = UINT16_MAX;
static uint32_t x207 = 4U;
int32_t x218 = 67;
volatile uint32_t x221 = 4U;
volatile int16_t x223 = -1;
volatile uint16_t x230 = 407U;
static uint8_t x238 = 2U;
uint16_t x239 = UINT16_MAX;
int16_t x240 = INT16_MIN;
volatile int32_t t36 = 4;
int16_t x272 = INT16_MAX;
volatile int32_t t39 = 669549;
uint16_t x279 = 23U;
int16_t x280 = INT16_MIN;
int32_t x284 = -1;
int32_t t41 = 20585;
int16_t x304 = -1;
int32_t t45 = 2218;
uint16_t x325 = 7U;
static int32_t t48 = 19472;
uint64_t x345 = 400500821664250LLU;
int32_t x349 = INT32_MIN;
uint16_t x351 = UINT16_MAX;
volatile int32_t t53 = 234973;
int32_t t54 = -1073489555;
uint64_t x390 = 1000925LLU;
volatile int32_t t56 = -311194;
int64_t x399 = INT64_MIN;
int32_t t58 = 18;
int32_t t60 = -798134616;
volatile int32_t t62 = -143724;
uint32_t x428 = UINT32_MAX;
uint16_t x433 = 1U;
uint8_t x436 = 3U;
uint16_t x444 = 29028U;
volatile int16_t x445 = -5023;
int32_t t66 = -168;
int32_t x450 = -1;
volatile int32_t x452 = -1;
volatile int32_t t67 = 348;
uint32_t x457 = UINT32_MAX;
int64_t x459 = -1879346822LL;
static int32_t t69 = 828444;
uint64_t x462 = 242003LLU;
int16_t x464 = INT16_MIN;
int32_t t70 = -118981;
uint64_t x468 = 421482943551861401LLU;
int64_t x472 = INT64_MIN;
volatile int16_t x477 = INT16_MIN;
static int64_t x478 = INT64_MIN;
uint8_t x482 = 2U;
volatile int64_t x483 = -1LL;
uint16_t x509 = 7U;
uint64_t x516 = 7174068130865401163LLU;
uint8_t x521 = 1U;
volatile uint8_t x530 = 99U;
int32_t x541 = -1;
uint32_t x542 = 1603U;
volatile int64_t x551 = 47213LL;
uint16_t x552 = 82U;
static int64_t x558 = 11660182860LL;
int8_t x559 = 1;
int32_t x560 = -57765934;
int64_t x570 = -80980306847LL;
int16_t x573 = -1;
int32_t x578 = -1;
uint32_t x584 = UINT32_MAX;
uint16_t x586 = 7U;
int16_t x588 = INT16_MIN;
int32_t x589 = -1;
volatile uint32_t x591 = 16693477U;
int32_t t92 = -346445;
int8_t x609 = -1;
int8_t x620 = 31;
static int32_t t96 = 3;
int8_t x625 = -1;
int32_t x632 = -1;
int32_t x638 = -1;


void f0(void) {
	int8_t x1 = 16;
	static volatile uint32_t x2 = 5917U;
	static volatile uint16_t x3 = UINT16_MAX;
	uint64_t x4 = 44335787LLU;
	volatile int32_t t0 = -57073;

	t0 = ((x1-x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 35;
	uint16_t x6 = 14414U;
	int8_t x7 = 0;
	int32_t x8 = 1795;
	volatile int32_t t1 = 12;

	t1 = ((x5-x6)==(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x14 = UINT16_MAX;
	int64_t x15 = INT64_MAX;
	int32_t t2 = 3;

	t2 = ((x13-x14)==(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = -1LL;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = 0;
	int32_t x32 = -1;
	int32_t t3 = -215881;

	t3 = ((x29-x30)==(x31*x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x33 = UINT8_MAX;
	int16_t x35 = -1;
	static int32_t t4 = -54865;

	t4 = ((x33-x34)==(x35*x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x37 = -1LL;
	static volatile int16_t x38 = INT16_MIN;
	int16_t x39 = 862;
	volatile int32_t t5 = 7;

	t5 = ((x37-x38)==(x39*x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MIN;
	volatile uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MIN;
	volatile int8_t x48 = INT8_MIN;
	int32_t t6 = -1;

	t6 = ((x45-x46)==(x47*x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	static int16_t x51 = INT16_MIN;
	uint8_t x52 = 1U;

	t7 = ((x49-x50)==(x51*x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x57 = 18U;
	int32_t x58 = 486;
	volatile int32_t x59 = -1;
	uint16_t x60 = UINT16_MAX;
	int32_t t8 = -921883;

	t8 = ((x57-x58)==(x59*x60));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x61 = 89;
	static int8_t x62 = -45;
	static volatile int8_t x63 = INT8_MAX;
	int64_t x64 = -3690524LL;
	int32_t t9 = -7545;

	t9 = ((x61-x62)==(x63*x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x65 = 17285399489507LL;
	volatile uint8_t x66 = 6U;
	static int8_t x67 = INT8_MIN;
	uint64_t x68 = 139933401902LLU;
	volatile int32_t t10 = -6;

	t10 = ((x65-x66)==(x67*x68));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x85 = INT32_MAX;
	int32_t x86 = 132;
	uint16_t x87 = 7U;
	int8_t x88 = -45;
	int32_t t11 = -3;

	t11 = ((x85-x86)==(x87*x88));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x101 = 1872226U;
	uint8_t x102 = UINT8_MAX;
	volatile uint16_t x103 = UINT16_MAX;
	int32_t t12 = -3;

	t12 = ((x101-x102)==(x103*x104));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x108 = INT16_MIN;
	volatile int32_t t13 = -29;

	t13 = ((x105-x106)==(x107*x108));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x109 = UINT32_MAX;
	uint64_t x110 = UINT64_MAX;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MAX;
	volatile int32_t t14 = 1;

	t14 = ((x109-x110)==(x111*x112));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MIN;
	volatile int8_t x115 = INT8_MIN;
	volatile uint32_t x116 = 13U;
	volatile int32_t t15 = 951303;

	t15 = ((x113-x114)==(x115*x116));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x117 = -1;
	static int16_t x118 = INT16_MAX;
	static int8_t x119 = INT8_MIN;
	int8_t x120 = -1;

	t16 = ((x117-x118)==(x119*x120));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x122 = 7U;
	volatile int8_t x123 = -1;
	uint32_t x124 = UINT32_MAX;
	int32_t t17 = 1;

	t17 = ((x121-x122)==(x123*x124));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x129 = 12179U;
	uint64_t x130 = UINT64_MAX;
	uint64_t x131 = UINT64_MAX;
	static uint16_t x132 = 1618U;

	t18 = ((x129-x130)==(x131*x132));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x133 = 436656749445291LL;
	volatile int64_t x134 = INT64_MAX;
	static int32_t x135 = -1;
	volatile int32_t t19 = 13162;

	t19 = ((x133-x134)==(x135*x136));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MIN;
	volatile int16_t x143 = -1;
	uint64_t x144 = 145391LLU;
	int32_t t20 = 39;

	t20 = ((x141-x142)==(x143*x144));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x145 = -1LL;
	uint64_t x146 = 133042975143891548LLU;
	uint16_t x147 = 16U;
	int32_t t21 = -116;

	t21 = ((x145-x146)==(x147*x148));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x149 = -1;
	uint16_t x150 = 12405U;
	int16_t x151 = -2381;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t22 = -3;

	t22 = ((x149-x150)==(x151*x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x153 = 0;
	uint32_t x154 = 20119U;
	int64_t x155 = 2771104432LL;
	int32_t x156 = -1;
	int32_t t23 = -9698686;

	t23 = ((x153-x154)==(x155*x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x158 = INT8_MAX;
	static int32_t x159 = INT32_MIN;
	static uint32_t x160 = 3U;
	int32_t t24 = 145364223;

	t24 = ((x157-x158)==(x159*x160));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x165 = INT64_MAX;
	volatile int16_t x168 = 829;
	int32_t t25 = -19781792;

	t25 = ((x165-x166)==(x167*x168));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	uint16_t x180 = UINT16_MAX;
	static volatile int32_t t26 = 240587;

	t26 = ((x177-x178)==(x179*x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x181 = 20U;
	uint32_t x182 = 2U;
	int32_t x184 = -1;
	volatile int32_t t27 = 399153;

	t27 = ((x181-x182)==(x183*x184));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x189 = INT64_MAX;
	volatile uint16_t x190 = 45U;
	volatile int64_t x191 = -7529LL;
	uint32_t x192 = 111780785U;
	volatile int32_t t28 = -5294515;

	t28 = ((x189-x190)==(x191*x192));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x193 = 26351972LLU;
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 31911643LLU;
	volatile int32_t t29 = -19;

	t29 = ((x193-x194)==(x195*x196));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = -1LL;
	int16_t x203 = INT16_MAX;
	volatile int8_t x204 = -1;
	int32_t t30 = 1;

	t30 = ((x201-x202)==(x203*x204));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x205 = 2481U;
	int64_t x206 = INT64_MAX;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t31 = -140738;

	t31 = ((x205-x206)==(x207*x208));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x217 = INT16_MIN;
	int8_t x219 = 0;
	uint8_t x220 = 52U;
	int32_t t32 = 18;

	t32 = ((x217-x218)==(x219*x220));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x222 = -193442548;
	int32_t x224 = INT32_MAX;
	volatile int32_t t33 = 63700211;

	t33 = ((x221-x222)==(x223*x224));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x225 = 916125955LLU;
	int16_t x226 = -1;
	uint8_t x227 = UINT8_MAX;
	volatile uint16_t x228 = UINT16_MAX;
	volatile int32_t t34 = -28452;

	t34 = ((x225-x226)==(x227*x228));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x229 = INT16_MIN;
	uint32_t x231 = UINT32_MAX;
	int8_t x232 = 0;
	int32_t t35 = 413263;

	t35 = ((x229-x230)==(x231*x232));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x237 = 956859U;

	t36 = ((x237-x238)==(x239*x240));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x245 = 348U;
	volatile int8_t x246 = INT8_MAX;
	int16_t x247 = INT16_MAX;
	uint32_t x248 = 241U;
	volatile int32_t t37 = 3593437;

	t37 = ((x245-x246)==(x247*x248));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	uint8_t x251 = 0U;
	int8_t x252 = -1;
	int32_t t38 = -105848219;

	t38 = ((x249-x250)==(x251*x252));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x269 = 25U;
	volatile int32_t x270 = 10;
	int64_t x271 = -1LL;

	t39 = ((x269-x270)==(x271*x272));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x277 = INT8_MIN;
	int64_t x278 = 8063150796538LL;
	int32_t t40 = -1050605489;

	t40 = ((x277-x278)==(x279*x280));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x281 = 165823443LLU;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;

	t41 = ((x281-x282)==(x283*x284));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x285 = -219895875731512217LL;
	int32_t x286 = INT32_MAX;
	int64_t x287 = -11LL;
	uint16_t x288 = UINT16_MAX;
	int32_t t42 = 17950;

	t42 = ((x285-x286)==(x287*x288));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x289 = -1;
	static int16_t x290 = INT16_MAX;
	int16_t x291 = INT16_MIN;
	volatile int64_t x292 = -1LL;
	volatile int32_t t43 = -14797;

	t43 = ((x289-x290)==(x291*x292));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x297 = 2U;
	uint32_t x298 = 147001136U;
	volatile uint8_t x299 = 4U;
	static uint64_t x300 = 2182556472LLU;
	int32_t t44 = -1066553296;

	t44 = ((x297-x298)==(x299*x300));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x301 = 10730937LL;
	volatile uint32_t x302 = UINT32_MAX;
	volatile int16_t x303 = -1;

	t45 = ((x301-x302)==(x303*x304));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x305 = INT8_MIN;
	int64_t x306 = -1LL;
	int16_t x307 = INT16_MAX;
	int8_t x308 = 0;
	int32_t t46 = -1240;

	t46 = ((x305-x306)==(x307*x308));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x317 = INT16_MIN;
	uint8_t x318 = 0U;
	int16_t x319 = INT16_MIN;
	int32_t x320 = -1;
	static volatile int32_t t47 = 885043827;

	t47 = ((x317-x318)==(x319*x320));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x326 = 460107;
	uint16_t x327 = UINT16_MAX;
	volatile int64_t x328 = -4813132LL;

	t48 = ((x325-x326)==(x327*x328));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x333 = 0U;
	int32_t x334 = -1;
	uint32_t x335 = 114514U;
	static uint16_t x336 = 206U;
	volatile int32_t t49 = 4678;

	t49 = ((x333-x334)==(x335*x336));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x341 = -1LL;
	int64_t x342 = INT64_MIN;
	uint16_t x343 = 25U;
	static volatile int8_t x344 = -2;
	static volatile int32_t t50 = -1;

	t50 = ((x341-x342)==(x343*x344));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x346 = 92643111471909LLU;
	int32_t x347 = 825152;
	uint8_t x348 = 11U;
	static int32_t t51 = -14845;

	t51 = ((x345-x346)==(x347*x348));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x350 = 0U;
	int8_t x352 = -10;
	volatile int32_t t52 = 1;

	t52 = ((x349-x350)==(x351*x352));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x365 = 3;
	int8_t x366 = INT8_MAX;
	static volatile uint64_t x367 = 11524906041292100LLU;
	int64_t x368 = INT64_MAX;

	t53 = ((x365-x366)==(x367*x368));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x377 = 648;
	int64_t x378 = INT64_MAX;
	static int32_t x379 = INT32_MAX;
	static uint64_t x380 = UINT64_MAX;

	t54 = ((x377-x378)==(x379*x380));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x381 = 24;
	uint8_t x382 = 2U;
	volatile int16_t x383 = -1;
	static volatile int32_t x384 = 10;
	int32_t t55 = -181023226;

	t55 = ((x381-x382)==(x383*x384));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x389 = UINT32_MAX;
	uint64_t x391 = 987799180597237LLU;
	int16_t x392 = INT16_MIN;

	t56 = ((x389-x390)==(x391*x392));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x393 = INT16_MIN;
	static int64_t x394 = -1LL;
	static int32_t x395 = -1;
	uint8_t x396 = 14U;
	volatile int32_t t57 = -704389669;

	t57 = ((x393-x394)==(x395*x396));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x397 = 1U;
	uint64_t x398 = UINT64_MAX;
	uint8_t x400 = 1U;

	t58 = ((x397-x398)==(x399*x400));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x405 = UINT64_MAX;
	uint32_t x406 = 843U;
	uint64_t x407 = 982412103506LLU;
	volatile int8_t x408 = -1;
	static volatile int32_t t59 = 258;

	t59 = ((x405-x406)==(x407*x408));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x413 = UINT64_MAX;
	uint16_t x414 = 582U;
	int64_t x415 = 778LL;
	int64_t x416 = 95799436894LL;

	t60 = ((x413-x414)==(x415*x416));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x417 = INT64_MAX;
	int16_t x418 = 10;
	static uint8_t x419 = UINT8_MAX;
	int64_t x420 = 311914596624498LL;
	int32_t t61 = 84464100;

	t61 = ((x417-x418)==(x419*x420));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x421 = -191296;
	uint64_t x422 = UINT64_MAX;
	uint32_t x423 = 4821721U;
	volatile int8_t x424 = INT8_MIN;

	t62 = ((x421-x422)==(x423*x424));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x425 = 9744115646LLU;
	volatile uint16_t x426 = 41U;
	int32_t x427 = INT32_MIN;
	int32_t t63 = -2293;

	t63 = ((x425-x426)==(x427*x428));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x434 = 27U;
	int16_t x435 = 444;
	static int32_t t64 = -1;

	t64 = ((x433-x434)==(x435*x436));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x441 = INT32_MIN;
	int64_t x442 = INT64_MIN;
	int16_t x443 = -1;
	int32_t t65 = 0;

	t65 = ((x441-x442)==(x443*x444));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x446 = 1LLU;
	volatile int8_t x447 = INT8_MAX;
	int16_t x448 = INT16_MAX;

	t66 = ((x445-x446)==(x447*x448));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x449 = UINT64_MAX;
	uint8_t x451 = UINT8_MAX;

	t67 = ((x449-x450)==(x451*x452));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x453 = 4U;
	volatile int64_t x454 = 560183309408261665LL;
	uint32_t x455 = 48092U;
	volatile int8_t x456 = INT8_MAX;
	int32_t t68 = -1726219;

	t68 = ((x453-x454)==(x455*x456));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x458 = 10724161550428601LL;
	volatile int8_t x460 = INT8_MAX;

	t69 = ((x457-x458)==(x459*x460));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x461 = UINT16_MAX;
	uint8_t x463 = 3U;

	t70 = ((x461-x462)==(x463*x464));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x465 = 1098245451U;
	volatile int8_t x466 = 22;
	static uint8_t x467 = 16U;
	int32_t t71 = -2551175;

	t71 = ((x465-x466)==(x467*x468));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x469 = 58706LLU;
	uint16_t x470 = UINT16_MAX;
	uint16_t x471 = 1U;
	static volatile int32_t t72 = 872;

	t72 = ((x469-x470)==(x471*x472));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x479 = -16;
	static uint64_t x480 = UINT64_MAX;
	volatile int32_t t73 = 8;

	t73 = ((x477-x478)==(x479*x480));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x481 = 16449U;
	int16_t x484 = 100;
	volatile int32_t t74 = -124;

	t74 = ((x481-x482)==(x483*x484));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x493 = INT16_MIN;
	int16_t x494 = INT16_MIN;
	static volatile uint8_t x495 = UINT8_MAX;
	int8_t x496 = INT8_MIN;
	int32_t t75 = -625580;

	t75 = ((x493-x494)==(x495*x496));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x501 = 5584U;
	uint8_t x502 = 87U;
	uint8_t x503 = 1U;
	static volatile uint32_t x504 = 25526U;
	int32_t t76 = 84;

	t76 = ((x501-x502)==(x503*x504));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x510 = UINT32_MAX;
	uint64_t x511 = 125816095413LLU;
	uint32_t x512 = 24414384U;
	volatile int32_t t77 = -31840;

	t77 = ((x509-x510)==(x511*x512));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x513 = 0U;
	int16_t x514 = -72;
	int16_t x515 = INT16_MIN;
	volatile int32_t t78 = 6254;

	t78 = ((x513-x514)==(x515*x516));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x517 = 221;
	volatile int8_t x518 = INT8_MAX;
	int64_t x519 = INT64_MIN;
	uint64_t x520 = 214353676094LLU;
	int32_t t79 = 812467692;

	t79 = ((x517-x518)==(x519*x520));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x522 = 242;
	int32_t x523 = 59483;
	static volatile uint32_t x524 = 5U;
	volatile int32_t t80 = -147;

	t80 = ((x521-x522)==(x523*x524));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x529 = -1LL;
	uint8_t x531 = 61U;
	int8_t x532 = INT8_MAX;
	static int32_t t81 = -15;

	t81 = ((x529-x530)==(x531*x532));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x533 = UINT32_MAX;
	uint64_t x534 = UINT64_MAX;
	static uint32_t x535 = 14U;
	static int64_t x536 = -95962996441623044LL;
	static int32_t t82 = 350;

	t82 = ((x533-x534)==(x535*x536));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x543 = 190597481229536LL;
	int8_t x544 = INT8_MIN;
	static int32_t t83 = -455;

	t83 = ((x541-x542)==(x543*x544));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x545 = INT8_MIN;
	volatile uint8_t x546 = UINT8_MAX;
	volatile int8_t x547 = 3;
	static uint32_t x548 = 3U;
	int32_t t84 = -1;

	t84 = ((x545-x546)==(x547*x548));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x549 = -114LL;
	int32_t x550 = INT32_MAX;
	int32_t t85 = 45369;

	t85 = ((x549-x550)==(x551*x552));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x557 = INT64_MAX;
	int32_t t86 = -1;

	t86 = ((x557-x558)==(x559*x560));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x569 = -1;
	static int16_t x571 = 3433;
	uint64_t x572 = 520059LLU;
	static int32_t t87 = 432892;

	t87 = ((x569-x570)==(x571*x572));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x574 = 47;
	uint8_t x575 = 29U;
	volatile uint32_t x576 = UINT32_MAX;
	int32_t t88 = 56982877;

	t88 = ((x573-x574)==(x575*x576));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x577 = UINT16_MAX;
	static volatile uint32_t x579 = 3192984U;
	uint32_t x580 = UINT32_MAX;
	int32_t t89 = 508472850;

	t89 = ((x577-x578)==(x579*x580));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x581 = -1;
	volatile int16_t x582 = INT16_MIN;
	volatile int8_t x583 = -19;
	volatile int32_t t90 = -1;

	t90 = ((x581-x582)==(x583*x584));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x585 = 480U;
	static uint32_t x587 = UINT32_MAX;
	static int32_t t91 = -55;

	t91 = ((x585-x586)==(x587*x588));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x590 = -1;
	int8_t x592 = -8;

	t92 = ((x589-x590)==(x591*x592));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x601 = -1;
	volatile int32_t x602 = -7171;
	static int16_t x603 = INT16_MIN;
	volatile int16_t x604 = INT16_MIN;
	int32_t t93 = 58;

	t93 = ((x601-x602)==(x603*x604));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x610 = UINT16_MAX;
	uint32_t x611 = 24U;
	int8_t x612 = -26;
	volatile int32_t t94 = 143941;

	t94 = ((x609-x610)==(x611*x612));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x617 = -1;
	int8_t x618 = INT8_MAX;
	int8_t x619 = 1;
	static int32_t t95 = -4980565;

	t95 = ((x617-x618)==(x619*x620));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x621 = INT32_MIN;
	int16_t x622 = INT16_MIN;
	static int8_t x623 = 44;
	uint64_t x624 = 1381184LLU;

	t96 = ((x621-x622)==(x623*x624));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x626 = -215878131276726LL;
	volatile uint64_t x627 = 209083450886LLU;
	static int64_t x628 = -1LL;
	volatile int32_t t97 = -113534;

	t97 = ((x625-x626)==(x627*x628));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x629 = UINT8_MAX;
	int8_t x630 = INT8_MIN;
	int8_t x631 = INT8_MIN;
	volatile int32_t t98 = -121926;

	t98 = ((x629-x630)==(x631*x632));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x637 = UINT64_MAX;
	uint32_t x639 = 1826995669U;
	volatile int16_t x640 = -1;
	static volatile int32_t t99 = 860477435;

	t99 = ((x637-x638)==(x639*x640));

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

