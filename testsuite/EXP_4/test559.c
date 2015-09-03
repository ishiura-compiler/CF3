#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MIN;
static int32_t x18 = 2280508;
int8_t x20 = INT8_MIN;
uint16_t x26 = 10739U;
uint32_t x28 = 7U;
int16_t x29 = -4649;
int16_t x30 = 1217;
uint8_t x32 = 5U;
volatile uint8_t x41 = 7U;
static int16_t x42 = INT16_MAX;
int64_t x79 = -53839235LL;
uint32_t x93 = 2U;
int64_t x96 = INT64_MAX;
static int64_t t14 = INT64_MIN;
volatile int64_t x117 = INT64_MIN;
int8_t x120 = INT8_MIN;
static volatile uint16_t x125 = UINT16_MAX;
int64_t x155 = INT64_MIN;
int16_t x160 = -1;
volatile int32_t t21 = INT32_MAX;
int16_t x163 = INT16_MAX;
uint64_t x173 = UINT64_MAX;
int64_t x174 = INT64_MAX;
uint64_t x187 = UINT64_MAX;
static volatile int8_t x200 = -1;
int32_t t25 = 372;
uint64_t x201 = 199856738821979530LLU;
uint32_t x204 = 486956453U;
uint32_t x214 = UINT32_MAX;
uint32_t x239 = 66718798U;
static int16_t x262 = 2940;
int32_t x272 = -6317;
static volatile int64_t x274 = INT64_MAX;
static int8_t x285 = INT8_MIN;
int64_t x287 = 250837512384959LL;
uint16_t x296 = 196U;
uint8_t x336 = 1U;
int16_t x351 = INT16_MIN;
uint64_t t44 = 6123513LLU;
int16_t x357 = INT16_MAX;
volatile int64_t t45 = 13974882974072LL;
static int64_t t46 = 155234507LL;
uint16_t x375 = UINT16_MAX;
static int64_t x396 = 1LL;
int8_t x397 = -1;
uint8_t x409 = 4U;
int16_t x410 = -1;
uint64_t x440 = 1657042233557969042LLU;
uint64_t x459 = 16819LLU;
volatile uint64_t t57 = 215614090223307034LLU;
static int16_t x461 = -1;
static int32_t x483 = -7458;
uint64_t x490 = UINT64_MAX;
static int16_t x492 = 1;
volatile int16_t x494 = INT16_MIN;
int8_t x509 = 3;
static uint64_t x513 = UINT64_MAX;
uint8_t x515 = 20U;
volatile int8_t x525 = INT8_MIN;
int64_t x526 = INT64_MIN;
uint32_t x533 = 30U;
int8_t x534 = INT8_MAX;
uint64_t t73 = 4823327141LLU;
int8_t x584 = INT8_MAX;
int8_t x586 = -1;
int16_t x594 = INT16_MIN;
uint64_t x595 = UINT64_MAX;
uint16_t x597 = UINT16_MAX;
uint32_t x598 = 3U;
volatile uint32_t x599 = UINT32_MAX;
volatile int64_t t80 = -26999159LL;
static int8_t x652 = INT8_MIN;
static int8_t x653 = INT8_MIN;
int32_t t85 = 60;
static int32_t x661 = -1;
uint8_t x662 = 13U;
static int8_t x750 = -1;
static volatile int16_t x752 = 15;
int32_t x768 = -240898566;
volatile int16_t x785 = -1;
uint32_t x786 = 581187852U;
uint64_t t96 = 0LLU;
int64_t x806 = INT64_MIN;
int32_t x807 = INT32_MIN;


void f0(void) {
	int64_t x5 = INT64_MAX;
	uint8_t x6 = 54U;
	static uint32_t x7 = UINT32_MAX;
	volatile int32_t x8 = -1;
	static volatile int64_t t0 = 3463950235604LL;

	t0 = (x5^(x6/(x7/x8)));

	if (t0 != 9223372036854775753LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = 544LL;
	int32_t x11 = -409781178;
	int16_t x12 = 76;
	int64_t t1 = -327103830193LL;

	t1 = (x9^(x10/(x11/x12)));

	if (t1 != 942LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	int32_t t2 = -55;

	t2 = (x17^(x18/(x19/x20)));

	if (t2 != -2280516) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = 92677U;
	static int64_t x23 = -1186994483LL;
	int32_t x24 = 155196065;
	volatile int64_t t3 = 57LL;

	t3 = (x21^(x22/(x23/x24)));

	if (t3 != 13257LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 9U;
	uint64_t x27 = UINT64_MAX;
	uint64_t t4 = 18403754LLU;

	t4 = (x25^(x26/(x27/x28)));

	if (t4 != 9LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x31 = 427LLU;
	uint64_t t5 = 2LLU;

	t5 = (x29^(x30/(x31/x32)));

	if (t5 != 18446744073709546969LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int32_t x34 = -1;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = 2661616LLU;
	static volatile uint64_t t6 = 12275104464544711LLU;

	t6 = (x33^(x34/(x35/x36)));

	if (t6 != 18446744073706889999LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x43 = 121895105LLU;
	static uint8_t x44 = 74U;
	static uint64_t t7 = 34885883157LLU;

	t7 = (x41^(x42/(x43/x44)));

	if (t7 != 7LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 1U;
	int16_t x46 = -15593;
	uint32_t x47 = 43359U;
	volatile int16_t x48 = INT16_MAX;
	uint32_t t8 = 1U;

	t8 = (x45^(x46/(x47/x48)));

	if (t8 != 4294951702U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MAX;
	uint8_t x58 = 4U;
	static int8_t x59 = INT8_MIN;
	int16_t x60 = 8;
	volatile int32_t t9 = 0;

	t9 = (x57^(x58/(x59/x60)));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x73 = -4;
	static int8_t x74 = INT8_MIN;
	static volatile int64_t x75 = -7106008LL;
	int8_t x76 = INT8_MIN;
	static volatile int64_t t10 = 7995LL;

	t10 = (x73^(x74/(x75/x76)));

	if (t10 != -4LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x77 = 9224229LL;
	volatile int8_t x78 = INT8_MIN;
	int64_t x80 = -1LL;
	int64_t t11 = 168110075425LL;

	t11 = (x77^(x78/(x79/x80)));

	if (t11 != 9224229LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x81 = INT16_MIN;
	int64_t x82 = 26964782883902LL;
	int8_t x83 = -23;
	static int8_t x84 = -1;
	static volatile int64_t t12 = -33299189LL;

	t12 = (x81^(x82/(x83/x84)));

	if (t12 != -1172381887931LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x94 = 4621903214207754LL;
	int64_t x95 = INT64_MIN;
	static int64_t t13 = -1590079710LL;

	t13 = (x93^(x94/(x95/x96)));

	if (t13 != -4621903214207756LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x105 = INT64_MIN;
	uint32_t x106 = 124770U;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = 27U;

	t14 = (x105^(x106/(x107/x108)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	volatile int64_t t15 = 25527532LL;

	t15 = (x117^(x118/(x119/x120)));

	if (t15 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x126 = INT32_MIN;
	static volatile int16_t x127 = INT16_MIN;
	int8_t x128 = -1;
	volatile int32_t t16 = -11147;

	t16 = (x125^(x126/(x127/x128)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x129 = -1LL;
	volatile int64_t x130 = INT64_MAX;
	static int32_t x131 = INT32_MIN;
	static int16_t x132 = INT16_MIN;
	int64_t t17 = 1LL;

	t17 = (x129^(x130/(x131/x132)));

	if (t17 != -140737488355328LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = 21;
	int32_t t18 = -841788;

	t18 = (x133^(x134/(x135/x136)));

	if (t18 != 2146795352) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = 347201205LLU;
	int64_t x139 = INT64_MIN;
	volatile int64_t x140 = INT64_MAX;
	uint64_t t19 = 154730LLU;

	t19 = (x137^(x138/(x139/x140)));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = 1407368LL;
	uint64_t x154 = UINT64_MAX;
	int32_t x156 = INT32_MIN;
	volatile uint64_t t20 = 71078073684LLU;

	t20 = (x153^(x154/(x155/x156)));

	if (t20 != 4293559927LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MAX;
	int16_t x159 = INT16_MAX;

	t21 = (x157^(x158/(x159/x160)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x161 = 10669U;
	uint64_t x162 = UINT64_MAX;
	int16_t x164 = -299;
	uint64_t t22 = 3206279768192882930LLU;

	t22 = (x161^(x162/(x163/x164)));

	if (t22 != 10668LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x175 = INT64_MAX;
	uint16_t x176 = 973U;
	uint64_t t23 = 1LLU;

	t23 = (x173^(x174/(x175/x176)));

	if (t23 != 18446744073709550642LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x185 = 929966LLU;
	static uint8_t x186 = 0U;
	static uint16_t x188 = 63U;
	volatile uint64_t t24 = 9100239027345LLU;

	t24 = (x185^(x186/(x187/x188)));

	if (t24 != 929966LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = 2;
	static int16_t x199 = 1;

	t25 = (x197^(x198/(x199/x200)));

	if (t25 != 2147483646) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x202 = INT8_MIN;
	volatile int16_t x203 = -1;
	volatile uint64_t t26 = 3685LLU;

	t26 = (x201^(x202/(x203/x204)));

	if (t26 != 199856739243016826LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x213 = 60U;
	int64_t x215 = INT64_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t27 = -315649546786LL;

	t27 = (x213^(x214/(x215/x216)));

	if (t27 != 60LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x237 = -1;
	int8_t x238 = INT8_MIN;
	static int16_t x240 = INT16_MAX;
	volatile uint32_t t28 = 3249U;

	t28 = (x237^(x238/(x239/x240)));

	if (t28 != 4292857783U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x241 = 2815U;
	uint32_t x242 = 96317585U;
	volatile int64_t x243 = INT64_MAX;
	static volatile int8_t x244 = 7;
	volatile int64_t t29 = -28004LL;

	t29 = (x241^(x242/(x243/x244)));

	if (t29 != 2815LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x261 = -22;
	static volatile int16_t x263 = INT16_MIN;
	static int64_t x264 = -1LL;
	int64_t t30 = -23598LL;

	t30 = (x261^(x262/(x263/x264)));

	if (t30 != -22LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x265 = -2;
	int8_t x266 = 0;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 8923311183425946LLU;
	uint64_t t31 = 223350968778LLU;

	t31 = (x265^(x266/(x267/x268)));

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x269 = -1;
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	static volatile int64_t t32 = -918LL;

	t32 = (x269^(x270/(x271/x272)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x273 = INT32_MIN;
	static int64_t x275 = INT64_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t33 = 2764LL;

	t33 = (x273^(x274/(x275/x276)));

	if (t33 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 3U;
	int16_t x283 = 1;
	int32_t x284 = -1;
	volatile int32_t t34 = -73185676;

	t34 = (x281^(x282/(x283/x284)));

	if (t34 != 2147483645) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x286 = -18;
	int8_t x288 = INT8_MAX;
	volatile int64_t t35 = -10LL;

	t35 = (x285^(x286/(x287/x288)));

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MAX;
	static int8_t x291 = 26;
	int8_t x292 = -7;
	static int64_t t36 = -363062329410LL;

	t36 = (x289^(x290/(x291/x292)));

	if (t36 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x293 = INT32_MAX;
	int8_t x294 = 12;
	int32_t x295 = INT32_MIN;
	volatile int32_t t37 = INT32_MAX;

	t37 = (x293^(x294/(x295/x296)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x317 = -54362;
	int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t38 = 0;

	t38 = (x317^(x318/(x319/x320)));

	if (t38 != -54311) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	uint32_t x324 = 136477U;
	volatile int64_t t39 = 0LL;

	t39 = (x321^(x322/(x323/x324)));

	if (t39 != 4294967295LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x325 = -6;
	int8_t x326 = INT8_MIN;
	volatile int8_t x327 = -1;
	uint64_t x328 = 269487991623824469LLU;
	uint64_t t40 = 111453090077LLU;

	t40 = (x325^(x326/(x327/x328)));

	if (t40 != 18175468425566764091LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	int16_t x335 = -7463;
	volatile int64_t t41 = -58450358LL;

	t41 = (x333^(x334/(x335/x336)));

	if (t41 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x337 = -1;
	int8_t x338 = -1;
	volatile int32_t x339 = -1;
	int16_t x340 = -1;
	volatile int32_t t42 = -1;

	t42 = (x337^(x338/(x339/x340)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x341 = 1012374117459271436LLU;
	int16_t x342 = -11;
	int32_t x343 = 43;
	volatile uint8_t x344 = 13U;
	volatile uint64_t t43 = 3881965LLU;

	t43 = (x341^(x342/(x343/x344)));

	if (t43 != 17434369956250280177LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x349 = 1;
	uint64_t x350 = UINT64_MAX;
	static int8_t x352 = -1;

	t44 = (x349^(x350/(x351/x352)));

	if (t44 != 562949953421310LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x358 = INT64_MIN;
	int32_t x359 = -1;
	int32_t x360 = -1;

	t45 = (x357^(x358/(x359/x360)));

	if (t45 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = -4;
	static int64_t x363 = INT64_MAX;
	int8_t x364 = -1;

	t46 = (x361^(x362/(x363/x364)));

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x365 = -1;
	int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MIN;
	static uint64_t x368 = 109LLU;
	uint64_t t47 = UINT64_MAX;

	t47 = (x365^(x366/(x367/x368)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x369 = 32768066LLU;
	int32_t x370 = 520;
	static volatile uint16_t x371 = UINT16_MAX;
	int16_t x372 = -366;
	volatile uint64_t t48 = 42470771775972LLU;

	t48 = (x369^(x370/(x371/x372)));

	if (t48 != 18446744073676783548LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x373 = -1;
	volatile int16_t x374 = INT16_MAX;
	static int16_t x376 = -2879;
	int32_t t49 = 32657;

	t49 = (x373^(x374/(x375/x376)));

	if (t49 != 1488) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x393 = 7288U;
	uint16_t x394 = UINT16_MAX;
	int32_t x395 = 138;
	volatile int64_t t50 = 39863LL;

	t50 = (x393^(x394/(x395/x396)));

	if (t50 != 7586LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x398 = 1U;
	volatile uint64_t x399 = UINT64_MAX;
	volatile int16_t x400 = -1;
	static uint64_t t51 = 3683018LLU;

	t51 = (x397^(x398/(x399/x400)));

	if (t51 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x411 = INT16_MIN;
	int32_t x412 = -1;
	int32_t t52 = -26;

	t52 = (x409^(x410/(x411/x412)));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x417 = 362191894LLU;
	int32_t x418 = 0;
	static int8_t x419 = 1;
	static int16_t x420 = -1;
	static uint64_t t53 = 949144732032213623LLU;

	t53 = (x417^(x418/(x419/x420)));

	if (t53 != 362191894LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x433 = 1604462737082827LLU;
	uint32_t x434 = UINT32_MAX;
	int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MIN;
	uint64_t t54 = 6854534LLU;

	t54 = (x433^(x434/(x435/x436)));

	if (t54 != 1604462737082827LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x437 = INT8_MIN;
	int64_t x438 = 36386447LL;
	volatile int64_t x439 = INT64_MIN;
	static volatile uint64_t t55 = 166671072LLU;

	t55 = (x437^(x438/(x439/x440)));

	if (t55 != 18446744073702274409LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x441 = INT32_MIN;
	static uint32_t x442 = 403633U;
	uint8_t x443 = 5U;
	int16_t x444 = -1;
	static uint32_t t56 = 131364689U;

	t56 = (x441^(x442/(x443/x444)));

	if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x457 = -4935;
	int16_t x458 = 4095;
	uint8_t x460 = UINT8_MAX;

	t57 = (x457^(x458/(x459/x460)));

	if (t57 != 18446744073709546630LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x462 = 783510095419309LLU;
	uint8_t x463 = UINT8_MAX;
	int8_t x464 = INT8_MAX;
	uint64_t t58 = 1228122175812LLU;

	t58 = (x461^(x462/(x463/x464)));

	if (t58 != 18446352318661841961LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x465 = INT8_MAX;
	int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MAX;
	int8_t x468 = -6;
	int64_t t59 = 26125191LL;

	t59 = (x465^(x466/(x467/x468)));

	if (t59 != 25769803879LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x469 = -1LL;
	int64_t x470 = INT64_MIN;
	uint16_t x471 = UINT16_MAX;
	static uint16_t x472 = UINT16_MAX;
	int64_t t60 = INT64_MAX;

	t60 = (x469^(x470/(x471/x472)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x477 = 0;
	int32_t x478 = INT32_MIN;
	volatile int32_t x479 = INT32_MAX;
	volatile int32_t x480 = INT32_MAX;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x477^(x478/(x479/x480)));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x481 = INT8_MAX;
	int16_t x482 = INT16_MAX;
	volatile int8_t x484 = INT8_MIN;
	volatile int32_t t62 = -17;

	t62 = (x481^(x482/(x483/x484)));

	if (t62 != 587) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x485 = -182904;
	int32_t x486 = -864;
	volatile int16_t x487 = -390;
	int32_t x488 = -1;
	volatile int32_t t63 = -53298734;

	t63 = (x485^(x486/(x487/x488)));

	if (t63 != 182902) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x489 = INT32_MAX;
	uint16_t x491 = 203U;
	volatile uint64_t t64 = 61564LLU;

	t64 = (x489^(x490/(x491/x492)));

	if (t64 != 90870659477800849LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x493 = UINT32_MAX;
	int32_t x495 = -224704350;
	volatile int16_t x496 = INT16_MIN;
	volatile uint32_t t65 = 21458U;

	t65 = (x493^(x494/(x495/x496)));

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	static int32_t x507 = INT32_MAX;
	uint8_t x508 = 115U;
	static int32_t t66 = INT32_MAX;

	t66 = (x505^(x506/(x507/x508)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x510 = INT32_MIN;
	uint64_t x511 = UINT64_MAX;
	uint64_t x512 = 69609988881389266LLU;
	volatile uint64_t t67 = 604014059998604LLU;

	t67 = (x509^(x510/(x511/x512)));

	if (t67 != 69610354987026668LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x514 = UINT64_MAX;
	static int8_t x516 = -1;
	static uint64_t t68 = 2LLU;

	t68 = (x513^(x514/(x515/x516)));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x517 = UINT64_MAX;
	volatile uint16_t x518 = 89U;
	static int8_t x519 = INT8_MIN;
	static uint64_t x520 = 2153125469LLU;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x517^(x518/(x519/x520)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x527 = 3414;
	uint8_t x528 = 56U;
	volatile int64_t t70 = -323542LL;

	t70 = (x525^(x526/(x527/x528)));

	if (t70 != 153722867280912990LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x535 = 39173929U;
	uint32_t x536 = 12U;
	volatile uint32_t t71 = 16395637U;

	t71 = (x533^(x534/(x535/x536)));

	if (t71 != 30U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MIN;
	int32_t x539 = INT32_MIN;
	volatile uint64_t x540 = 49984580509017LLU;
	uint64_t t72 = 16515014514758LLU;

	t72 = (x537^(x538/(x539/x540)));

	if (t72 != 18446694089035264641LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x541 = INT64_MIN;
	static int32_t x542 = -65678;
	uint64_t x543 = 2208748LLU;
	uint16_t x544 = UINT16_MAX;

	t73 = (x541^(x542/(x543/x544)));

	if (t73 != 9782364281512639018LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x557 = INT8_MIN;
	static int8_t x558 = INT8_MIN;
	static int64_t x559 = INT64_MIN;
	volatile uint16_t x560 = 13017U;
	volatile int64_t t74 = -127540LL;

	t74 = (x557^(x558/(x559/x560)));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x577 = UINT64_MAX;
	uint32_t x578 = UINT32_MAX;
	int64_t x579 = -574869841LL;
	static int16_t x580 = -1656;
	uint64_t t75 = 635654897650LLU;

	t75 = (x577^(x578/(x579/x580)));

	if (t75 != 18446744073709539243LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x581 = INT32_MIN;
	static volatile int8_t x582 = INT8_MAX;
	uint32_t x583 = 29523U;
	uint32_t t76 = 1U;

	t76 = (x581^(x582/(x583/x584)));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x585 = INT16_MIN;
	uint16_t x587 = UINT16_MAX;
	uint16_t x588 = 12546U;
	int32_t t77 = 8954;

	t77 = (x585^(x586/(x587/x588)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x593 = 38;
	static int16_t x596 = -1;
	volatile uint64_t t78 = 11939LLU;

	t78 = (x593^(x594/(x595/x596)));

	if (t78 != 18446744073709518886LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x600 = INT32_MIN;
	uint32_t t79 = 2U;

	t79 = (x597^(x598/(x599/x600)));

	if (t79 != 65532U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x609 = UINT8_MAX;
	volatile int64_t x610 = INT64_MIN;
	uint32_t x611 = 43U;
	int64_t x612 = -1LL;

	t80 = (x609^(x610/(x611/x612)));

	if (t80 != 214497024112901757LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x617 = INT32_MAX;
	volatile uint64_t x618 = 3699268399984LLU;
	uint16_t x619 = 42U;
	int8_t x620 = -1;
	volatile uint64_t t81 = 61047LLU;

	t81 = (x617^(x618/(x619/x620)));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x637 = 14352144U;
	uint64_t x638 = 19983469498511LLU;
	int64_t x639 = 98824324715516LL;
	int32_t x640 = -1;
	uint64_t t82 = 55LLU;

	t82 = (x637^(x638/(x639/x640)));

	if (t82 != 14352144LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x645 = 28953U;
	uint64_t x646 = 11LLU;
	int16_t x647 = -69;
	volatile uint8_t x648 = 5U;
	volatile uint64_t t83 = 66818LLU;

	t83 = (x645^(x646/(x647/x648)));

	if (t83 != 28953LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x649 = -1LL;
	volatile int64_t x650 = 9LL;
	static volatile uint32_t x651 = UINT32_MAX;
	volatile int64_t t84 = 40532LL;

	t84 = (x649^(x650/(x651/x652)));

	if (t84 != -10LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x654 = INT8_MIN;
	int32_t x655 = INT32_MAX;
	int16_t x656 = INT16_MIN;

	t85 = (x653^(x654/(x655/x656)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x657 = 8350810134443960879LLU;
	static uint16_t x658 = UINT16_MAX;
	uint8_t x659 = 30U;
	static uint8_t x660 = 13U;
	uint64_t t86 = 7738759846LLU;

	t86 = (x657^(x658/(x659/x660)));

	if (t86 != 8350810134443972048LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x663 = UINT16_MAX;
	volatile int8_t x664 = INT8_MIN;
	int32_t t87 = 68816465;

	t87 = (x661^(x662/(x663/x664)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x665 = INT32_MIN;
	int32_t x666 = -291;
	volatile uint16_t x667 = UINT16_MAX;
	int8_t x668 = INT8_MIN;
	int32_t t88 = INT32_MIN;

	t88 = (x665^(x666/(x667/x668)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x669 = INT16_MAX;
	uint64_t x670 = 83LLU;
	static uint8_t x671 = UINT8_MAX;
	volatile uint16_t x672 = 1U;
	static uint64_t t89 = 1605LLU;

	t89 = (x669^(x670/(x671/x672)));

	if (t89 != 32767LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x689 = UINT64_MAX;
	static volatile uint64_t x690 = 473260178636906436LLU;
	int16_t x691 = INT16_MIN;
	static int8_t x692 = 15;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x689^(x690/(x691/x692)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x749 = 56U;
	static volatile int32_t x751 = INT32_MIN;
	volatile uint32_t t91 = 58218U;

	t91 = (x749^(x750/(x751/x752)));

	if (t91 != 56U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x757 = INT8_MAX;
	int64_t x758 = INT64_MAX;
	static uint8_t x759 = 5U;
	int8_t x760 = 3;
	int64_t t92 = -544639LL;

	t92 = (x757^(x758/(x759/x760)));

	if (t92 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x765 = 6U;
	uint64_t x766 = 243320669913LLU;
	static volatile int64_t x767 = INT64_MAX;
	volatile uint64_t t93 = 9537777LLU;

	t93 = (x765^(x766/(x767/x768)));

	if (t93 != 6LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x773 = UINT64_MAX;
	static int16_t x774 = -664;
	int16_t x775 = INT16_MIN;
	uint64_t x776 = 25LLU;
	volatile uint64_t t94 = 39LLU;

	t94 = (x773^(x774/(x775/x776)));

	if (t94 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x787 = INT16_MIN;
	static volatile uint8_t x788 = 1U;
	uint32_t t95 = UINT32_MAX;

	t95 = (x785^(x786/(x787/x788)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x797 = 3479U;
	uint8_t x798 = UINT8_MAX;
	int8_t x799 = -1;
	volatile uint64_t x800 = UINT64_MAX;

	t96 = (x797^(x798/(x799/x800)));

	if (t96 != 3432LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x801 = -1;
	int32_t x802 = 911;
	int64_t x803 = -1616767220LL;
	static int32_t x804 = -1;
	volatile int64_t t97 = 64431830187LL;

	t97 = (x801^(x802/(x803/x804)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x805 = INT64_MIN;
	int8_t x808 = INT8_MIN;
	volatile int64_t t98 = -115935LL;

	t98 = (x805^(x806/(x807/x808)));

	if (t98 != 9223371487098961920LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x813 = INT32_MAX;
	uint8_t x814 = 2U;
	int8_t x815 = INT8_MIN;
	volatile uint16_t x816 = 1U;
	volatile int32_t t99 = INT32_MAX;

	t99 = (x813^(x814/(x815/x816)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

