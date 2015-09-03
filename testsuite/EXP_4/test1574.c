#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x2 = INT64_MAX;
int8_t x3 = INT8_MAX;
uint64_t x10 = UINT64_MAX;
volatile int64_t x16 = INT64_MAX;
uint32_t t6 = 1U;
int64_t t8 = -2462328LL;
uint32_t x67 = 652399854U;
int32_t x86 = -1;
static uint16_t x87 = 382U;
int32_t t10 = 3;
uint8_t x133 = 7U;
static volatile int32_t t14 = 163231648;
volatile int32_t x142 = 83503;
int32_t x144 = INT32_MAX;
uint32_t t15 = 7442U;
uint64_t x179 = 255068325545LLU;
uint16_t x183 = 10U;
volatile int8_t x198 = -1;
uint64_t x199 = 7708814LLU;
volatile int32_t t23 = 14064510;
int32_t x214 = -238126;
int16_t x215 = INT16_MIN;
static int64_t x223 = INT64_MIN;
static int16_t x224 = INT16_MIN;
volatile int8_t x232 = -1;
volatile uint64_t t27 = UINT64_MAX;
uint8_t x237 = UINT8_MAX;
volatile int32_t t28 = 7942;
int16_t x280 = INT16_MIN;
int16_t x287 = -1;
volatile uint64_t t32 = 1622032625805099520LLU;
static uint8_t x301 = 6U;
volatile int16_t x303 = -116;
int16_t x320 = INT16_MAX;
int16_t x326 = -16;
volatile uint64_t x350 = UINT64_MAX;
int64_t x361 = INT64_MIN;
uint32_t x363 = UINT32_MAX;
volatile int64_t x370 = -1LL;
uint16_t x378 = 3491U;
static int32_t t42 = -12687;
volatile int16_t x433 = INT16_MIN;
uint32_t t43 = 3936142U;
int32_t x438 = INT32_MIN;
static uint64_t x441 = UINT64_MAX;
int32_t x443 = -1;
static uint32_t x462 = 40U;
uint32_t x470 = 99933U;
int8_t x486 = -7;
static int8_t x503 = INT8_MIN;
static int16_t x504 = 1;
static volatile int8_t x522 = 62;
int64_t x538 = INT64_MAX;
int64_t x542 = 1205449727493254LL;
int8_t x549 = INT8_MIN;
uint8_t x556 = 6U;
int16_t x566 = INT16_MIN;
uint8_t x584 = 3U;
int32_t x595 = -1;
int32_t x603 = 1;
int32_t x610 = INT32_MIN;
uint16_t x621 = UINT16_MAX;
volatile int64_t x623 = 575LL;
int64_t x624 = INT64_MAX;
uint8_t x634 = 1U;
uint8_t x641 = UINT8_MAX;
int8_t x643 = -1;
int64_t t65 = -190LL;
volatile int32_t x647 = -1;
int32_t t66 = -83;
int16_t x660 = INT16_MIN;
static volatile int32_t x684 = -77;
int8_t x689 = INT8_MIN;
volatile uint32_t t73 = 64675U;
int32_t x738 = INT32_MIN;
uint32_t t75 = 397535020U;
static int8_t x747 = 49;
volatile int16_t x753 = INT16_MAX;
static int32_t x759 = -111069566;
int32_t x778 = -1;
int16_t x781 = -8044;
static int16_t x785 = -1;
int8_t x792 = INT8_MAX;
static int16_t x811 = 1;
volatile uint8_t x812 = UINT8_MAX;
int8_t x820 = INT8_MIN;
static uint32_t x834 = 96030727U;
volatile uint32_t x860 = 243009U;
static int32_t x865 = 21;
int32_t x882 = INT32_MIN;
int32_t x893 = INT32_MIN;
volatile int16_t x902 = -1;
static uint64_t x922 = 3LLU;
static volatile int64_t x923 = INT64_MIN;
int64_t x924 = INT64_MIN;
uint64_t x926 = 13LLU;
volatile uint64_t t99 = UINT64_MAX;


void f0(void) {
	uint16_t x1 = 21U;
	int16_t x4 = INT16_MAX;
	static int64_t t0 = 41140LL;

	t0 = (x1+(x2%(x3<=x4)));

	if (t0 != 21LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = UINT16_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t1 = 28841082081972LLU;

	t1 = (x9+(x10%(x11<=x12)));

	if (t1 != 65535LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 0;
	static int16_t x14 = 5809;
	volatile int8_t x15 = INT8_MIN;
	volatile int32_t t2 = -1;

	t2 = (x13+(x14%(x15<=x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x29 = -1;
	static int64_t x30 = INT64_MIN;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = -1;
	static volatile int64_t t3 = 3465397LL;

	t3 = (x29+(x30%(x31<=x32)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x33 = -2;
	static int64_t x34 = INT64_MIN;
	static volatile int64_t x35 = INT64_MIN;
	uint8_t x36 = 21U;
	int64_t t4 = 3LL;

	t4 = (x33+(x34%(x35<=x36)));

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x41 = INT64_MIN;
	volatile int64_t x42 = INT64_MIN;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = 1837612589309LL;
	static int64_t t5 = INT64_MIN;

	t5 = (x41+(x42%(x43<=x44)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x45 = 43U;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 2635U;
	int16_t x48 = INT16_MAX;

	t6 = (x45+(x46%(x47<=x48)));

	if (t6 != 43U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x53 = INT64_MIN;
	static volatile int64_t x54 = -16028594491991LL;
	uint8_t x55 = 0U;
	static uint8_t x56 = 11U;
	volatile int64_t t7 = INT64_MIN;

	t7 = (x53+(x54%(x55<=x56)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x57 = 23U;
	static int64_t x58 = -14860663409932923LL;
	int8_t x59 = -6;
	uint16_t x60 = UINT16_MAX;

	t8 = (x57+(x58%(x59<=x60)));

	if (t8 != 23LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x65 = INT16_MIN;
	uint32_t x66 = UINT32_MAX;
	int64_t x68 = INT64_MAX;
	static volatile uint32_t t9 = 2591U;

	t9 = (x65+(x66%(x67<=x68)));

	if (t9 != 4294934528U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x85 = 2;
	static int32_t x88 = INT32_MAX;

	t10 = (x85+(x86%(x87<=x88)));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x97 = INT8_MAX;
	int32_t x98 = 27;
	int8_t x99 = INT8_MIN;
	int8_t x100 = -2;
	volatile int32_t t11 = 9270;

	t11 = (x97+(x98%(x99<=x100)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x101 = UINT8_MAX;
	static uint16_t x102 = 113U;
	uint32_t x103 = 125456745U;
	static int8_t x104 = -1;
	volatile int32_t t12 = 449;

	t12 = (x101+(x102%(x103<=x104)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x113 = 2U;
	int8_t x114 = -1;
	int8_t x115 = -14;
	static int8_t x116 = INT8_MAX;
	int32_t t13 = -461055;

	t13 = (x113+(x114%(x115<=x116)));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x134 = -1;
	volatile uint16_t x135 = 1U;
	uint32_t x136 = UINT32_MAX;

	t14 = (x133+(x134%(x135<=x136)));

	if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x141 = 13481U;
	static int32_t x143 = INT32_MIN;

	t15 = (x141+(x142%(x143<=x144)));

	if (t15 != 13481U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x145 = INT64_MIN;
	int16_t x146 = -1;
	int8_t x147 = INT8_MIN;
	int16_t x148 = 1810;
	int64_t t16 = INT64_MIN;

	t16 = (x145+(x146%(x147<=x148)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x165 = 31U;
	static volatile int16_t x166 = INT16_MIN;
	uint64_t x167 = 69737LLU;
	int16_t x168 = INT16_MIN;
	volatile int32_t t17 = -22;

	t17 = (x165+(x166%(x167<=x168)));

	if (t17 != 31) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = 15;
	uint8_t x171 = 102U;
	static uint64_t x172 = 8907971384139LLU;
	static volatile int64_t t18 = INT64_MIN;

	t18 = (x169+(x170%(x171<=x172)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x173 = INT8_MAX;
	uint32_t x174 = UINT32_MAX;
	int64_t x175 = 535399830LL;
	static uint32_t x176 = UINT32_MAX;
	uint32_t t19 = 912484826U;

	t19 = (x173+(x174%(x175<=x176)));

	if (t19 != 127U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x177 = 347U;
	uint16_t x178 = UINT16_MAX;
	volatile int8_t x180 = -1;
	volatile uint32_t t20 = 130U;

	t20 = (x177+(x178%(x179<=x180)));

	if (t20 != 347U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x181 = 2U;
	static uint64_t x182 = UINT64_MAX;
	uint32_t x184 = 5252326U;
	static uint64_t t21 = 19LLU;

	t21 = (x181+(x182%(x183<=x184)));

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x193 = 3U;
	int16_t x194 = INT16_MIN;
	int8_t x195 = 2;
	static int32_t x196 = INT32_MAX;
	static volatile int32_t t22 = -4;

	t22 = (x193+(x194%(x195<=x196)));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x197 = 3154;
	uint32_t x200 = 42219920U;

	t23 = (x197+(x198%(x199<=x200)));

	if (t23 != 3154) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x205 = UINT64_MAX;
	volatile uint32_t x206 = 1081U;
	uint32_t x207 = 12362U;
	volatile uint16_t x208 = UINT16_MAX;
	uint64_t t24 = UINT64_MAX;

	t24 = (x205+(x206%(x207<=x208)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x213 = 498740973018672771LLU;
	int64_t x216 = INT64_MAX;
	static uint64_t t25 = 74792LLU;

	t25 = (x213+(x214%(x215<=x216)));

	if (t25 != 498740973018672771LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x221 = -1LL;
	int16_t x222 = INT16_MIN;
	static int64_t t26 = -221771678520922LL;

	t26 = (x221+(x222%(x223<=x224)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = INT64_MAX;
	uint64_t x231 = 65LLU;

	t27 = (x229+(x230%(x231<=x232)));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x238 = INT32_MAX;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = -1;

	t28 = (x237+(x238%(x239<=x240)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x258 = UINT16_MAX;
	uint8_t x259 = 1U;
	static volatile int8_t x260 = INT8_MAX;
	volatile int64_t t29 = INT64_MIN;

	t29 = (x257+(x258%(x259<=x260)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x261 = 94LL;
	static int32_t x262 = INT32_MAX;
	int64_t x263 = -1LL;
	uint8_t x264 = 77U;
	volatile int64_t t30 = 3200862100437985977LL;

	t30 = (x261+(x262%(x263<=x264)));

	if (t30 != 94LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x277 = 1872U;
	uint16_t x278 = 1241U;
	static volatile uint64_t x279 = 97215733LLU;
	volatile int32_t t31 = 52;

	t31 = (x277+(x278%(x279<=x280)));

	if (t31 != 1872) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x285 = INT16_MAX;
	uint64_t x286 = 4798805292316LLU;
	uint16_t x288 = UINT16_MAX;

	t32 = (x285+(x286%(x287<=x288)));

	if (t32 != 32767LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x293 = UINT32_MAX;
	static uint64_t x294 = UINT64_MAX;
	volatile uint64_t x295 = 119249324LLU;
	int64_t x296 = INT64_MAX;
	uint64_t t33 = 186681122927234998LLU;

	t33 = (x293+(x294%(x295<=x296)));

	if (t33 != 4294967295LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x302 = INT64_MAX;
	volatile uint32_t x304 = UINT32_MAX;
	int64_t t34 = -47600651780746362LL;

	t34 = (x301+(x302%(x303<=x304)));

	if (t34 != 6LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x317 = 1U;
	uint32_t x318 = 48U;
	int64_t x319 = -4538520000094776LL;
	uint32_t t35 = 10621U;

	t35 = (x317+(x318%(x319<=x320)));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x325 = INT8_MIN;
	int8_t x327 = INT8_MAX;
	uint8_t x328 = UINT8_MAX;
	int32_t t36 = -1;

	t36 = (x325+(x326%(x327<=x328)));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x333 = INT16_MIN;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	uint32_t x336 = 2634U;
	int64_t t37 = -29856962LL;

	t37 = (x333+(x334%(x335<=x336)));

	if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x349 = 32764U;
	volatile int16_t x351 = 184;
	int64_t x352 = 20177623754864LL;
	uint64_t t38 = 705722060817LLU;

	t38 = (x349+(x350%(x351<=x352)));

	if (t38 != 32764LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x362 = 5863853U;
	int64_t x364 = 5106676055460238LL;
	int64_t t39 = INT64_MIN;

	t39 = (x361+(x362%(x363<=x364)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x369 = 23627824U;
	uint16_t x371 = 5U;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t40 = 2285884LL;

	t40 = (x369+(x370%(x371<=x372)));

	if (t40 != 23627824LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x377 = INT8_MIN;
	volatile int64_t x379 = INT64_MIN;
	static int64_t x380 = INT64_MIN;
	static volatile int32_t t41 = 14;

	t41 = (x377+(x378%(x379<=x380)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x389 = 2U;
	int8_t x390 = INT8_MIN;
	static int16_t x391 = -1;
	volatile uint8_t x392 = UINT8_MAX;

	t42 = (x389+(x390%(x391<=x392)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x434 = 23U;
	int8_t x435 = -1;
	static uint8_t x436 = 108U;

	t43 = (x433+(x434%(x435<=x436)));

	if (t43 != 4294934528U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x437 = UINT64_MAX;
	static int64_t x439 = INT64_MAX;
	uint64_t x440 = UINT64_MAX;
	uint64_t t44 = UINT64_MAX;

	t44 = (x437+(x438%(x439<=x440)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x442 = INT64_MIN;
	int16_t x444 = 5;
	uint64_t t45 = UINT64_MAX;

	t45 = (x441+(x442%(x443<=x444)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x461 = INT64_MIN;
	int32_t x463 = -13289167;
	static int8_t x464 = INT8_MAX;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x461+(x462%(x463<=x464)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x469 = 7U;
	uint64_t x471 = 487986306LLU;
	int8_t x472 = INT8_MIN;
	volatile uint32_t t47 = 159456091U;

	t47 = (x469+(x470%(x471<=x472)));

	if (t47 != 7U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x485 = 0;
	int16_t x487 = 13687;
	uint32_t x488 = UINT32_MAX;
	int32_t t48 = -319725;

	t48 = (x485+(x486%(x487<=x488)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x501 = -3;
	int64_t x502 = 16958946811102LL;
	volatile int64_t t49 = 982946656LL;

	t49 = (x501+(x502%(x503<=x504)));

	if (t49 != -3LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x517 = 51U;
	int16_t x518 = INT16_MIN;
	uint8_t x519 = 1U;
	volatile uint16_t x520 = UINT16_MAX;
	volatile int32_t t50 = -3118;

	t50 = (x517+(x518%(x519<=x520)));

	if (t50 != 51) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x521 = -4;
	static volatile int32_t x523 = INT32_MIN;
	int8_t x524 = -8;
	int32_t t51 = -373664422;

	t51 = (x521+(x522%(x523<=x524)));

	if (t51 != -4) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x537 = UINT16_MAX;
	int64_t x539 = -14542130538LL;
	int8_t x540 = -1;
	int64_t t52 = 38740302529156LL;

	t52 = (x537+(x538%(x539<=x540)));

	if (t52 != 65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x541 = UINT8_MAX;
	uint8_t x543 = 9U;
	uint16_t x544 = UINT16_MAX;
	int64_t t53 = 214750257229405LL;

	t53 = (x541+(x542%(x543<=x544)));

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x550 = 4U;
	volatile int64_t x551 = INT64_MIN;
	uint32_t x552 = UINT32_MAX;
	volatile int32_t t54 = 190;

	t54 = (x549+(x550%(x551<=x552)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x553 = 502581U;
	int32_t x554 = INT32_MIN;
	int32_t x555 = 1;
	uint32_t t55 = 56U;

	t55 = (x553+(x554%(x555<=x556)));

	if (t55 != 502581U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x565 = 2LL;
	uint32_t x567 = 18093U;
	volatile int8_t x568 = -6;
	volatile int64_t t56 = 49204634072274309LL;

	t56 = (x565+(x566%(x567<=x568)));

	if (t56 != 2LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x581 = INT8_MAX;
	uint8_t x582 = 5U;
	int64_t x583 = INT64_MIN;
	volatile int32_t t57 = -85;

	t57 = (x581+(x582%(x583<=x584)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x593 = 55U;
	int64_t x594 = -1LL;
	int32_t x596 = -1;
	int64_t t58 = 126362637977LL;

	t58 = (x593+(x594%(x595<=x596)));

	if (t58 != 55LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x601 = INT32_MAX;
	static int8_t x602 = INT8_MIN;
	volatile uint32_t x604 = UINT32_MAX;
	int32_t t59 = INT32_MAX;

	t59 = (x601+(x602%(x603<=x604)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x605 = 1;
	static int32_t x606 = INT32_MAX;
	static volatile uint16_t x607 = 52U;
	static uint32_t x608 = 2001522715U;
	int32_t t60 = 37;

	t60 = (x605+(x606%(x607<=x608)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x609 = INT8_MIN;
	volatile uint32_t x611 = UINT32_MAX;
	int64_t x612 = 23642295736287050LL;
	int32_t t61 = -1;

	t61 = (x609+(x610%(x611<=x612)));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x622 = -54453515986682LL;
	volatile int64_t t62 = 758232418781020805LL;

	t62 = (x621+(x622%(x623<=x624)));

	if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x625 = INT8_MIN;
	int32_t x626 = INT32_MIN;
	int8_t x627 = INT8_MAX;
	int16_t x628 = 8211;
	volatile int32_t t63 = -15;

	t63 = (x625+(x626%(x627<=x628)));

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x633 = 15U;
	volatile uint64_t x635 = 75860LLU;
	volatile int16_t x636 = -27;
	volatile int32_t t64 = -130642391;

	t64 = (x633+(x634%(x635<=x636)));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x642 = -1LL;
	static int64_t x644 = INT64_MAX;

	t65 = (x641+(x642%(x643<=x644)));

	if (t65 != 255LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x645 = -1;
	static int8_t x646 = 55;
	uint16_t x648 = UINT16_MAX;

	t66 = (x645+(x646%(x647<=x648)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x653 = 3106U;
	volatile int8_t x654 = -8;
	int16_t x655 = INT16_MIN;
	int32_t x656 = -1;
	volatile int32_t t67 = 13;

	t67 = (x653+(x654%(x655<=x656)));

	if (t67 != 3106) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x657 = -131627318LL;
	int8_t x658 = INT8_MAX;
	uint32_t x659 = 33U;
	int64_t t68 = -1259LL;

	t68 = (x657+(x658%(x659<=x660)));

	if (t68 != -131627318LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x665 = -14;
	static int64_t x666 = 53630178LL;
	int16_t x667 = -1;
	int16_t x668 = -1;
	int64_t t69 = 883614194LL;

	t69 = (x665+(x666%(x667<=x668)));

	if (t69 != -14LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x669 = INT8_MAX;
	int16_t x670 = -18;
	int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MAX;
	int32_t t70 = -124447655;

	t70 = (x669+(x670%(x671<=x672)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x673 = 105479195903LLU;
	int64_t x674 = INT64_MAX;
	uint64_t x675 = 1213227361170010958LLU;
	int16_t x676 = -1536;
	uint64_t t71 = 249327963338039LLU;

	t71 = (x673+(x674%(x675<=x676)));

	if (t71 != 105479195903LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x681 = 5U;
	int64_t x682 = INT64_MIN;
	static int32_t x683 = INT32_MIN;
	static volatile int64_t t72 = -432LL;

	t72 = (x681+(x682%(x683<=x684)));

	if (t72 != 5LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x690 = 105877050U;
	uint8_t x691 = UINT8_MAX;
	uint32_t x692 = UINT32_MAX;

	t73 = (x689+(x690%(x691<=x692)));

	if (t73 != 4294967168U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x737 = 14U;
	int32_t x739 = -1;
	static int16_t x740 = INT16_MAX;
	volatile int32_t t74 = 34253;

	t74 = (x737+(x738%(x739<=x740)));

	if (t74 != 14) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x741 = 248314983U;
	int8_t x742 = INT8_MAX;
	int8_t x743 = -1;
	static int16_t x744 = INT16_MAX;

	t75 = (x741+(x742%(x743<=x744)));

	if (t75 != 248314983U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x745 = 99U;
	int64_t x746 = -1LL;
	static int8_t x748 = INT8_MAX;
	static int64_t t76 = 265658LL;

	t76 = (x745+(x746%(x747<=x748)));

	if (t76 != 99LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x749 = -31;
	int64_t x750 = INT64_MIN;
	volatile int64_t x751 = -127860049000947610LL;
	volatile int64_t x752 = -65408201652309LL;
	static volatile int64_t t77 = -539LL;

	t77 = (x749+(x750%(x751<=x752)));

	if (t77 != -31LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x754 = INT16_MIN;
	static volatile uint64_t x755 = 112LLU;
	int64_t x756 = INT64_MIN;
	static volatile int32_t t78 = 1376038;

	t78 = (x753+(x754%(x755<=x756)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x757 = INT64_MIN;
	uint16_t x758 = 184U;
	volatile int16_t x760 = 27;
	int64_t t79 = INT64_MIN;

	t79 = (x757+(x758%(x759<=x760)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x769 = -73184602072LL;
	static int16_t x770 = -1;
	int8_t x771 = -35;
	int8_t x772 = INT8_MAX;
	volatile int64_t t80 = 819166386849592559LL;

	t80 = (x769+(x770%(x771<=x772)));

	if (t80 != -73184602072LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x777 = INT16_MIN;
	volatile int16_t x779 = -1;
	int64_t x780 = INT64_MAX;
	static volatile int32_t t81 = -1;

	t81 = (x777+(x778%(x779<=x780)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x782 = 79;
	int32_t x783 = INT32_MIN;
	int8_t x784 = -1;
	int32_t t82 = 207123882;

	t82 = (x781+(x782%(x783<=x784)));

	if (t82 != -8044) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x786 = INT16_MIN;
	volatile uint8_t x787 = 29U;
	volatile int32_t x788 = INT32_MAX;
	static volatile int32_t t83 = -37372566;

	t83 = (x785+(x786%(x787<=x788)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x789 = INT32_MIN;
	int32_t x790 = INT32_MIN;
	int8_t x791 = INT8_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x789+(x790%(x791<=x792)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x797 = INT16_MIN;
	int32_t x798 = -279;
	volatile int64_t x799 = -240938224LL;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t85 = -7621;

	t85 = (x797+(x798%(x799<=x800)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x809 = 1U;
	int32_t x810 = 120236558;
	volatile int32_t t86 = 1;

	t86 = (x809+(x810%(x811<=x812)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x817 = 30233U;
	int8_t x818 = INT8_MIN;
	static int64_t x819 = INT64_MIN;
	volatile int32_t t87 = -779798259;

	t87 = (x817+(x818%(x819<=x820)));

	if (t87 != 30233) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x829 = 37602494105070711LLU;
	static int16_t x830 = -1;
	static int32_t x831 = INT32_MAX;
	volatile int64_t x832 = 468218358013LL;
	static volatile uint64_t t88 = 1784735524811442377LLU;

	t88 = (x829+(x830%(x831<=x832)));

	if (t88 != 37602494105070711LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x833 = INT32_MIN;
	int16_t x835 = -4528;
	int32_t x836 = 3078;
	uint32_t t89 = 1U;

	t89 = (x833+(x834%(x835<=x836)));

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x853 = 559U;
	int16_t x854 = -1;
	uint16_t x855 = 794U;
	int64_t x856 = INT64_MAX;
	volatile int32_t t90 = -7;

	t90 = (x853+(x854%(x855<=x856)));

	if (t90 != 559) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x857 = INT32_MIN;
	int32_t x858 = INT32_MAX;
	static int64_t x859 = 0LL;
	int32_t t91 = INT32_MIN;

	t91 = (x857+(x858%(x859<=x860)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x866 = INT32_MIN;
	volatile int32_t x867 = INT32_MIN;
	int16_t x868 = 500;
	volatile int32_t t92 = 99910;

	t92 = (x865+(x866%(x867<=x868)));

	if (t92 != 21) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x869 = 1;
	uint16_t x870 = 10U;
	static int64_t x871 = INT64_MIN;
	int8_t x872 = INT8_MIN;
	volatile int32_t t93 = 1;

	t93 = (x869+(x870%(x871<=x872)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x873 = 18039991002LL;
	int8_t x874 = INT8_MAX;
	static int8_t x875 = 0;
	uint8_t x876 = 1U;
	volatile int64_t t94 = 23LL;

	t94 = (x873+(x874%(x875<=x876)));

	if (t94 != 18039991002LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x881 = UINT16_MAX;
	uint64_t x883 = 11852548LLU;
	int32_t x884 = INT32_MIN;
	static volatile int32_t t95 = -3539;

	t95 = (x881+(x882%(x883<=x884)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x894 = UINT16_MAX;
	volatile uint32_t x895 = UINT32_MAX;
	int64_t x896 = 65379111920060355LL;
	int32_t t96 = INT32_MIN;

	t96 = (x893+(x894%(x895<=x896)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x901 = 33U;
	int8_t x903 = -1;
	uint8_t x904 = UINT8_MAX;
	volatile int32_t t97 = 122395;

	t97 = (x901+(x902%(x903<=x904)));

	if (t97 != 33) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x921 = INT64_MAX;
	static uint64_t t98 = 6863732343674249LLU;

	t98 = (x921+(x922%(x923<=x924)));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x925 = -1;
	static uint8_t x927 = 35U;
	static uint32_t x928 = UINT32_MAX;

	t99 = (x925+(x926%(x927<=x928)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

