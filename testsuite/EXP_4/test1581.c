#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 52;
volatile uint64_t x53 = UINT64_MAX;
volatile int16_t x54 = INT16_MIN;
static volatile int32_t x55 = INT32_MIN;
int16_t x67 = INT16_MIN;
static int8_t x68 = INT8_MIN;
uint16_t x76 = UINT16_MAX;
int8_t x80 = -1;
static volatile int32_t t9 = -6521562;
int8_t x81 = 3;
int32_t t11 = 45393914;
int16_t x90 = INT16_MIN;
volatile int32_t t12 = -7663;
static volatile int32_t x103 = -1;
volatile int32_t t13 = 189525253;
uint32_t x114 = 1194651U;
uint8_t x115 = 4U;
uint32_t x116 = UINT32_MAX;
volatile int32_t t15 = -769000;
static volatile uint16_t x125 = 637U;
int32_t t19 = 44;
volatile int16_t x146 = -1;
int8_t x150 = INT8_MIN;
int32_t x152 = -1;
volatile int32_t t22 = 2;
volatile int32_t x154 = INT32_MAX;
static volatile uint8_t x157 = 8U;
uint32_t x159 = 79U;
static int32_t x160 = 86923617;
int64_t x161 = INT64_MAX;
static volatile int32_t t25 = 27437;
int32_t x202 = INT32_MIN;
uint16_t x221 = 3U;
volatile uint32_t x225 = UINT32_MAX;
uint8_t x244 = 8U;
int16_t x256 = INT16_MIN;
int32_t t34 = -266;
volatile uint16_t x273 = UINT16_MAX;
uint64_t x283 = 1LLU;
volatile int32_t t39 = -97458;
volatile uint64_t x309 = 69745859437994LLU;
static uint8_t x310 = 14U;
int8_t x312 = -1;
volatile int16_t x336 = INT16_MIN;
volatile int8_t x354 = INT8_MIN;
static int64_t x358 = INT64_MIN;
static uint8_t x360 = UINT8_MAX;
uint64_t x367 = 660LLU;
volatile int32_t t48 = -375715;
int32_t x378 = INT32_MIN;
volatile int16_t x388 = 44;
static int64_t x401 = INT64_MIN;
uint16_t x412 = UINT16_MAX;
volatile int64_t x418 = INT64_MIN;
volatile uint8_t x420 = UINT8_MAX;
int64_t x435 = INT64_MIN;
int32_t x437 = 1;
int8_t x452 = -7;
static int16_t x460 = -4166;
static int64_t x471 = -3905095LL;
uint64_t x472 = UINT64_MAX;
int32_t x478 = INT32_MIN;
int16_t x479 = 238;
uint32_t x496 = UINT32_MAX;
int32_t t69 = 9;
int64_t x503 = -1LL;
int8_t x506 = INT8_MIN;
volatile int16_t x524 = 12694;
int32_t t73 = 1133001;
int32_t x535 = INT32_MIN;
int32_t x536 = 487;
static volatile int32_t t74 = -13470;
int64_t x540 = INT64_MAX;
int32_t x553 = -1;
volatile int32_t t76 = 0;
int32_t x564 = -1;
int32_t x581 = 1484;
static int16_t x582 = INT16_MAX;
uint64_t x589 = UINT64_MAX;
int32_t x590 = INT32_MIN;
uint32_t x595 = 94776681U;
static uint8_t x613 = UINT8_MAX;
int32_t x614 = INT32_MIN;
int16_t x615 = -1;
int8_t x623 = INT8_MIN;
uint64_t x625 = 647LLU;
uint8_t x626 = UINT8_MAX;
int8_t x629 = INT8_MIN;
int16_t x632 = INT16_MIN;
volatile int64_t x635 = -3769768LL;
static volatile int32_t t89 = -6;
int8_t x645 = 2;
int16_t x658 = INT16_MIN;
int64_t x666 = 84530504988471065LL;
volatile int64_t x676 = 85662LL;
volatile int32_t t96 = 1573;
static int32_t x711 = INT32_MIN;
int8_t x712 = -1;
int32_t t98 = 59;
int64_t x725 = INT64_MIN;
int8_t x726 = INT8_MIN;
uint32_t x728 = UINT32_MAX;
int32_t t99 = -12489785;


void f0(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	int64_t x11 = -6LL;
	int64_t x12 = INT64_MAX;
	volatile int32_t t0 = -39;

	t0 = (x9==(x10%(x11<=x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = INT32_MIN;
	static uint64_t x26 = 60475LLU;
	uint16_t x27 = 14U;
	uint16_t x28 = 161U;

	t1 = (x25==(x26%(x27<=x28)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x45 = -1;
	uint32_t x46 = 13196U;
	int32_t x47 = INT32_MIN;
	int8_t x48 = -44;
	int32_t t2 = -81375995;

	t2 = (x45==(x46%(x47<=x48)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x56 = INT32_MAX;
	int32_t t3 = -17095996;

	t3 = (x53==(x54%(x55<=x56)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x57 = 29185360279006LL;
	int16_t x58 = 9125;
	int8_t x59 = INT8_MIN;
	int16_t x60 = 21;
	volatile int32_t t4 = -49;

	t4 = (x57==(x58%(x59<=x60)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x61 = -1;
	uint32_t x62 = 3319U;
	int32_t x63 = -9225568;
	int32_t x64 = 12312;
	int32_t t5 = -4108;

	t5 = (x61==(x62%(x63<=x64)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	volatile int32_t t6 = -3210768;

	t6 = (x65==(x66%(x67<=x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int32_t x70 = -10;
	int8_t x71 = -1;
	int64_t x72 = 8994205547597714LL;
	volatile int32_t t7 = 63967;

	t7 = (x69==(x70%(x71<=x72)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x73 = 207846036738835LLU;
	int64_t x74 = INT64_MIN;
	int64_t x75 = -492612223854LL;
	volatile int32_t t8 = 10;

	t8 = (x73==(x74%(x75<=x76)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MIN;
	uint64_t x79 = UINT64_MAX;

	t9 = (x77==(x78%(x79<=x80)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x82 = -1LL;
	volatile uint64_t x83 = 1709116433062287266LLU;
	int32_t x84 = -1;
	static int32_t t10 = -7386153;

	t10 = (x81==(x82%(x83<=x84)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x86 = -1;
	int8_t x87 = INT8_MAX;
	uint64_t x88 = 56416957LLU;

	t11 = (x85==(x86%(x87<=x88)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x89 = INT64_MIN;
	volatile uint8_t x91 = UINT8_MAX;
	uint32_t x92 = 602154290U;

	t12 = (x89==(x90%(x91<=x92)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x101 = 125978LLU;
	static int64_t x102 = INT64_MIN;
	uint32_t x104 = UINT32_MAX;

	t13 = (x101==(x102%(x103<=x104)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x105 = UINT16_MAX;
	uint16_t x106 = 961U;
	static int32_t x107 = -25;
	uint16_t x108 = 14672U;
	volatile int32_t t14 = 123106839;

	t14 = (x105==(x106%(x107<=x108)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x113 = -1;

	t15 = (x113==(x114%(x115<=x116)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x121 = 0LL;
	volatile int16_t x122 = INT16_MAX;
	int64_t x123 = -1861193400080472366LL;
	volatile int64_t x124 = INT64_MAX;
	int32_t t16 = 0;

	t16 = (x121==(x122%(x123<=x124)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x126 = UINT8_MAX;
	static uint32_t x127 = 2895U;
	volatile int64_t x128 = 183093297974345330LL;
	volatile int32_t t17 = -30900;

	t17 = (x125==(x126%(x127<=x128)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x129 = INT16_MAX;
	volatile int8_t x130 = INT8_MAX;
	int16_t x131 = INT16_MIN;
	static uint16_t x132 = 0U;
	volatile int32_t t18 = 24758;

	t18 = (x129==(x130%(x131<=x132)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x137 = -1;
	int16_t x138 = -6422;
	int16_t x139 = -267;
	int16_t x140 = INT16_MAX;

	t19 = (x137==(x138%(x139<=x140)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x141 = INT32_MIN;
	static int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	int8_t x144 = INT8_MAX;
	int32_t t20 = -5945427;

	t20 = (x141==(x142%(x143<=x144)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x145 = INT8_MAX;
	volatile uint8_t x147 = 11U;
	static volatile uint64_t x148 = 13476266719839LLU;
	static int32_t t21 = -1;

	t21 = (x145==(x146%(x147<=x148)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x149 = -3;
	int32_t x151 = -1;

	t22 = (x149==(x150%(x151<=x152)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x153 = -1;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t23 = -13;

	t23 = (x153==(x154%(x155<=x156)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x158 = -1;
	static volatile int32_t t24 = 44997995;

	t24 = (x157==(x158%(x159<=x160)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x162 = INT8_MAX;
	static int8_t x163 = INT8_MIN;
	int32_t x164 = 83173529;

	t25 = (x161==(x162%(x163<=x164)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x181 = -1LL;
	static int8_t x182 = INT8_MIN;
	volatile int8_t x183 = 0;
	int32_t x184 = INT32_MAX;
	int32_t t26 = -31;

	t26 = (x181==(x182%(x183<=x184)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x185 = 30U;
	int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MIN;
	static uint8_t x188 = 22U;
	volatile int32_t t27 = -3452926;

	t27 = (x185==(x186%(x187<=x188)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x203 = 84U;
	static volatile int64_t x204 = 3063LL;
	volatile int32_t t28 = 411576130;

	t28 = (x201==(x202%(x203<=x204)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x213 = 27924065422263373LL;
	static int64_t x214 = -1LL;
	static int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	int32_t t29 = -87881892;

	t29 = (x213==(x214%(x215<=x216)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x222 = -1;
	uint64_t x223 = 21LLU;
	static uint64_t x224 = 1401229598857138LLU;
	int32_t t30 = 98997;

	t30 = (x221==(x222%(x223<=x224)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x226 = INT8_MIN;
	uint16_t x227 = 21704U;
	static int16_t x228 = INT16_MAX;
	int32_t t31 = 0;

	t31 = (x225==(x226%(x227<=x228)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x237 = 3327U;
	volatile int16_t x238 = INT16_MIN;
	uint8_t x239 = 2U;
	int32_t x240 = INT32_MAX;
	static int32_t t32 = -280081;

	t32 = (x237==(x238%(x239<=x240)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x241 = 6566515;
	static int16_t x242 = -2;
	int16_t x243 = -1;
	static int32_t t33 = 3753902;

	t33 = (x241==(x242%(x243<=x244)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x253 = 45U;
	static int64_t x254 = INT64_MAX;
	volatile int64_t x255 = INT64_MIN;

	t34 = (x253==(x254%(x255<=x256)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x269 = -1;
	uint8_t x270 = 95U;
	int8_t x271 = -1;
	uint16_t x272 = 0U;
	volatile int32_t t35 = 922;

	t35 = (x269==(x270%(x271<=x272)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x274 = 1245832628U;
	uint32_t x275 = 19189511U;
	int8_t x276 = INT8_MIN;
	int32_t t36 = 1;

	t36 = (x273==(x274%(x275<=x276)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x277 = INT32_MAX;
	int8_t x278 = -1;
	static int8_t x279 = 23;
	uint32_t x280 = 187089294U;
	int32_t t37 = -5392683;

	t37 = (x277==(x278%(x279<=x280)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x281 = UINT16_MAX;
	static uint16_t x282 = 9U;
	volatile int16_t x284 = 7828;
	volatile int32_t t38 = -12124740;

	t38 = (x281==(x282%(x283<=x284)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x285 = 93394769067LLU;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = -1;
	int64_t x288 = -1LL;

	t39 = (x285==(x286%(x287<=x288)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x289 = 2286806U;
	uint64_t x290 = 498LLU;
	int8_t x291 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t40 = 0;

	t40 = (x289==(x290%(x291<=x292)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x305 = INT64_MAX;
	static uint16_t x306 = 3U;
	uint32_t x307 = 10U;
	static uint16_t x308 = 804U;
	int32_t t41 = -54442;

	t41 = (x305==(x306%(x307<=x308)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x311 = UINT64_MAX;
	volatile int32_t t42 = 3;

	t42 = (x309==(x310%(x311<=x312)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = 1856264833130LL;
	uint16_t x319 = 74U;
	uint64_t x320 = 821766LLU;
	volatile int32_t t43 = 9;

	t43 = (x317==(x318%(x319<=x320)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x333 = 0U;
	int8_t x334 = 61;
	int64_t x335 = INT64_MIN;
	volatile int32_t t44 = 133787749;

	t44 = (x333==(x334%(x335<=x336)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x353 = INT32_MIN;
	volatile int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t45 = 16966169;

	t45 = (x353==(x354%(x355<=x356)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x357 = -1;
	static uint64_t x359 = 2LLU;
	volatile int32_t t46 = 1092;

	t46 = (x357==(x358%(x359<=x360)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MAX;
	uint64_t x363 = 126940287331LLU;
	int64_t x364 = -601364656LL;
	volatile int32_t t47 = -112091;

	t47 = (x361==(x362%(x363<=x364)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x365 = -1;
	volatile int32_t x366 = -29938;
	int16_t x368 = -1;

	t48 = (x365==(x366%(x367<=x368)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x369 = -1LL;
	int8_t x370 = INT8_MAX;
	uint32_t x371 = 15U;
	volatile int16_t x372 = 978;
	volatile int32_t t49 = -76;

	t49 = (x369==(x370%(x371<=x372)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x373 = INT64_MIN;
	uint32_t x374 = 1701U;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t50 = 1694;

	t50 = (x373==(x374%(x375<=x376)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x377 = 20809U;
	volatile uint8_t x379 = 1U;
	int32_t x380 = 640;
	volatile int32_t t51 = 552568;

	t51 = (x377==(x378%(x379<=x380)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x381 = -1;
	int32_t x382 = -84483147;
	volatile int64_t x383 = INT64_MIN;
	static volatile uint32_t x384 = 115253U;
	int32_t t52 = -597967890;

	t52 = (x381==(x382%(x383<=x384)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	static volatile int32_t t53 = -4;

	t53 = (x385==(x386%(x387<=x388)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x397 = INT8_MIN;
	static int64_t x398 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	int32_t x400 = -260991;
	int32_t t54 = -3;

	t54 = (x397==(x398%(x399<=x400)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x402 = 43;
	int64_t x403 = INT64_MIN;
	int32_t x404 = -1;
	volatile int32_t t55 = 2914;

	t55 = (x401==(x402%(x403<=x404)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x405 = INT8_MAX;
	int8_t x406 = INT8_MAX;
	int64_t x407 = INT64_MIN;
	static volatile uint32_t x408 = UINT32_MAX;
	int32_t t56 = -803900;

	t56 = (x405==(x406%(x407<=x408)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = -1;
	int32_t x411 = -1;
	static int32_t t57 = -231;

	t57 = (x409==(x410%(x411<=x412)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x417 = -909;
	int64_t x419 = -567237720080624LL;
	int32_t t58 = -22955;

	t58 = (x417==(x418%(x419<=x420)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x429 = -6;
	int8_t x430 = -35;
	uint8_t x431 = 72U;
	volatile uint64_t x432 = 30456502LLU;
	int32_t t59 = 3161536;

	t59 = (x429==(x430%(x431<=x432)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x433 = INT64_MIN;
	int16_t x434 = -1;
	int32_t x436 = INT32_MIN;
	int32_t t60 = -366572579;

	t60 = (x433==(x434%(x435<=x436)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MIN;
	int16_t x440 = 673;
	int32_t t61 = -4949;

	t61 = (x437==(x438%(x439<=x440)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x441 = UINT8_MAX;
	int32_t x442 = INT32_MIN;
	volatile int32_t x443 = 16636;
	int64_t x444 = 10199876LL;
	volatile int32_t t62 = 8170;

	t62 = (x441==(x442%(x443<=x444)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x449 = -1;
	int16_t x450 = -1;
	int16_t x451 = INT16_MIN;
	int32_t t63 = -1480;

	t63 = (x449==(x450%(x451<=x452)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x457 = 1LL;
	static int8_t x458 = INT8_MAX;
	uint64_t x459 = 52035704415LLU;
	int32_t t64 = 131025377;

	t64 = (x457==(x458%(x459<=x460)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x469 = INT16_MIN;
	static uint32_t x470 = 498006U;
	int32_t t65 = 64814;

	t65 = (x469==(x470%(x471<=x472)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x473 = INT16_MIN;
	int32_t x474 = -7543;
	int64_t x475 = INT64_MIN;
	uint8_t x476 = 0U;
	int32_t t66 = 3864217;

	t66 = (x473==(x474%(x475<=x476)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x477 = 56U;
	uint16_t x480 = 1246U;
	volatile int32_t t67 = 69254886;

	t67 = (x477==(x478%(x479<=x480)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x481 = UINT32_MAX;
	static int64_t x482 = -1LL;
	int8_t x483 = INT8_MIN;
	uint16_t x484 = UINT16_MAX;
	int32_t t68 = -848062259;

	t68 = (x481==(x482%(x483<=x484)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x493 = 0LL;
	int16_t x494 = INT16_MIN;
	volatile int16_t x495 = 117;

	t69 = (x493==(x494%(x495<=x496)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x501 = INT32_MAX;
	uint32_t x502 = UINT32_MAX;
	volatile uint8_t x504 = UINT8_MAX;
	volatile int32_t t70 = 0;

	t70 = (x501==(x502%(x503<=x504)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x505 = -7;
	uint32_t x507 = 1U;
	volatile int16_t x508 = INT16_MAX;
	int32_t t71 = 246244;

	t71 = (x505==(x506%(x507<=x508)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x513 = 6U;
	int16_t x514 = -665;
	int64_t x515 = INT64_MIN;
	int32_t x516 = -1;
	int32_t t72 = -1;

	t72 = (x513==(x514%(x515<=x516)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x521 = -7;
	int32_t x522 = -1;
	int32_t x523 = INT32_MIN;

	t73 = (x521==(x522%(x523<=x524)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x533 = 0;
	int8_t x534 = INT8_MAX;

	t74 = (x533==(x534%(x535<=x536)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x537 = -21085971144949616LL;
	volatile int32_t x538 = 188429169;
	int16_t x539 = -1;
	volatile int32_t t75 = 665282;

	t75 = (x537==(x538%(x539<=x540)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x554 = 149413027183629736LLU;
	static int16_t x555 = -1;
	static int64_t x556 = -1LL;

	t76 = (x553==(x554%(x555<=x556)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x557 = INT64_MIN;
	static int64_t x558 = INT64_MAX;
	volatile int8_t x559 = 38;
	uint16_t x560 = UINT16_MAX;
	int32_t t77 = -396915;

	t77 = (x557==(x558%(x559<=x560)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x561 = -55;
	int64_t x562 = -1LL;
	uint32_t x563 = UINT32_MAX;
	int32_t t78 = 19;

	t78 = (x561==(x562%(x563<=x564)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x569 = -1;
	static int64_t x570 = -1LL;
	volatile int32_t x571 = 1;
	uint32_t x572 = 14045U;
	volatile int32_t t79 = -5;

	t79 = (x569==(x570%(x571<=x572)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x583 = -1;
	uint16_t x584 = 0U;
	volatile int32_t t80 = -208724094;

	t80 = (x581==(x582%(x583<=x584)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x591 = 3618596U;
	volatile int8_t x592 = INT8_MIN;
	int32_t t81 = -219;

	t81 = (x589==(x590%(x591<=x592)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x593 = UINT8_MAX;
	int8_t x594 = INT8_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t82 = 45978;

	t82 = (x593==(x594%(x595<=x596)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x597 = -1LL;
	volatile int32_t x598 = -25012;
	int32_t x599 = INT32_MIN;
	uint8_t x600 = 119U;
	int32_t t83 = 5098;

	t83 = (x597==(x598%(x599<=x600)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x609 = INT16_MIN;
	uint16_t x610 = 21U;
	static uint8_t x611 = 13U;
	uint32_t x612 = 21649U;
	volatile int32_t t84 = -27339;

	t84 = (x609==(x610%(x611<=x612)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x616 = UINT32_MAX;
	volatile int32_t t85 = -9;

	t85 = (x613==(x614%(x615<=x616)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x621 = INT64_MAX;
	volatile int64_t x622 = -1LL;
	static uint8_t x624 = UINT8_MAX;
	int32_t t86 = 48971853;

	t86 = (x621==(x622%(x623<=x624)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x627 = INT16_MIN;
	volatile uint16_t x628 = UINT16_MAX;
	volatile int32_t t87 = -14;

	t87 = (x625==(x626%(x627<=x628)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x630 = -1LL;
	static volatile uint64_t x631 = 1026697066298940121LLU;
	int32_t t88 = 100;

	t88 = (x629==(x630%(x631<=x632)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x633 = INT16_MIN;
	int32_t x634 = -7;
	uint32_t x636 = 10401U;

	t89 = (x633==(x634%(x635<=x636)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x641 = INT16_MAX;
	volatile int64_t x642 = INT64_MAX;
	int32_t x643 = -7;
	volatile int16_t x644 = 7782;
	static volatile int32_t t90 = 539;

	t90 = (x641==(x642%(x643<=x644)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x646 = 131917510902400LLU;
	int64_t x647 = -1LL;
	volatile uint16_t x648 = 968U;
	volatile int32_t t91 = -54392526;

	t91 = (x645==(x646%(x647<=x648)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x657 = 1441672452LLU;
	int64_t x659 = -9285LL;
	static uint16_t x660 = UINT16_MAX;
	int32_t t92 = 6199531;

	t92 = (x657==(x658%(x659<=x660)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x665 = -1;
	static volatile int16_t x667 = INT16_MAX;
	static int32_t x668 = 872243;
	int32_t t93 = 1023291;

	t93 = (x665==(x666%(x667<=x668)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x673 = INT32_MIN;
	int64_t x674 = INT64_MIN;
	static int64_t x675 = -16487995047LL;
	volatile int32_t t94 = 1535;

	t94 = (x673==(x674%(x675<=x676)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x685 = 15;
	static uint64_t x686 = UINT64_MAX;
	int8_t x687 = -1;
	int64_t x688 = 43508832346LL;
	volatile int32_t t95 = 303854968;

	t95 = (x685==(x686%(x687<=x688)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x697 = 29U;
	int8_t x698 = INT8_MIN;
	volatile int64_t x699 = -1LL;
	uint32_t x700 = 13U;

	t96 = (x697==(x698%(x699<=x700)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x709 = INT16_MIN;
	uint16_t x710 = UINT16_MAX;
	int32_t t97 = 46786;

	t97 = (x709==(x710%(x711<=x712)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x721 = -1;
	int64_t x722 = INT64_MIN;
	static int64_t x723 = -1LL;
	static uint32_t x724 = 1148193314U;

	t98 = (x721==(x722%(x723<=x724)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x727 = INT16_MIN;

	t99 = (x725==(x726%(x727<=x728)));

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

