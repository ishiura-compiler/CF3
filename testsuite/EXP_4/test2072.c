#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x48 = UINT8_MAX;
volatile int64_t x50 = INT64_MIN;
static volatile int8_t x63 = INT8_MIN;
int32_t x73 = INT32_MAX;
static volatile uint16_t x75 = 3U;
uint16_t x80 = 1U;
static int16_t x82 = INT16_MAX;
volatile int32_t t6 = -11498;
int32_t x97 = -1;
static uint16_t x123 = 2070U;
int16_t x125 = -1458;
uint64_t t13 = 16LLU;
uint16_t x161 = 1U;
uint32_t x168 = UINT32_MAX;
int64_t x174 = INT64_MAX;
static uint64_t x175 = 3770LLU;
uint8_t x176 = 21U;
volatile int64_t x184 = 137728167735214LL;
static volatile int32_t t21 = -70;
volatile uint32_t t24 = 30U;
int64_t x258 = 437854401852856LL;
static uint16_t x262 = 1283U;
int32_t x273 = INT32_MIN;
volatile uint64_t x292 = 1309295173565598LLU;
volatile int64_t x313 = INT64_MIN;
int16_t x315 = 0;
volatile int8_t x333 = 1;
int64_t x341 = INT64_MIN;
int64_t t34 = 153LL;
uint8_t x363 = 12U;
static int8_t x368 = -1;
int8_t x371 = INT8_MAX;
volatile int64_t t39 = -1629405515LL;
int32_t x381 = -75358263;
int64_t x404 = INT64_MIN;
static uint64_t t43 = 0LLU;
int8_t x446 = -1;
uint32_t x454 = UINT32_MAX;
static volatile uint32_t t46 = 11U;
int8_t x460 = 7;
uint8_t x463 = 28U;
volatile uint64_t x470 = 118183453702695626LLU;
uint32_t x487 = 10955042U;
int8_t x489 = INT8_MIN;
static uint64_t x491 = UINT64_MAX;
int8_t x532 = 16;
volatile int64_t x537 = 2LL;
static int64_t x575 = 1LL;
volatile uint32_t t61 = 55U;
volatile uint64_t x583 = UINT64_MAX;
volatile int32_t t63 = 90928488;
static int32_t x609 = INT32_MIN;
int16_t x611 = 9;
uint16_t x633 = 45U;
int32_t x636 = -374640;
uint64_t x653 = 8785LLU;
int8_t x656 = -1;
int8_t x662 = INT8_MIN;
uint8_t x664 = 26U;
int16_t x668 = -1;
static uint8_t x669 = 5U;
int64_t t71 = 7008018LL;
volatile int16_t x677 = -121;
volatile uint8_t x679 = 0U;
static int8_t x727 = INT8_MIN;
uint64_t x729 = 194LLU;
volatile uint64_t x731 = UINT64_MAX;
static volatile uint64_t t78 = 4181351922LLU;
int8_t x770 = INT8_MIN;
uint64_t t81 = 914272831136LLU;
volatile int64_t t82 = -546685834038LL;
static volatile uint16_t x793 = 2121U;
uint16_t x795 = 13U;
static int32_t x809 = -1;
uint64_t x810 = 8228172400LLU;
volatile uint64_t t84 = 2803619469862LLU;
static int8_t x821 = INT8_MIN;
uint32_t x823 = 248012708U;
volatile uint16_t x824 = UINT16_MAX;
int8_t x831 = INT8_MAX;
uint64_t x832 = 29787LLU;
volatile uint64_t t86 = 40LLU;
int16_t x847 = -88;
static int64_t t87 = 6012087309836318LL;
uint32_t x858 = 95301051U;
int64_t x872 = INT64_MIN;
int8_t x884 = INT8_MIN;
volatile uint64_t t90 = 138630098077895LLU;
uint64_t t92 = 47LLU;
volatile uint32_t x903 = 15828U;
static int64_t t93 = 3414732158526973173LL;
int64_t x909 = -1LL;
int32_t x920 = -5110933;
int8_t x935 = INT8_MIN;
int32_t x950 = INT32_MIN;
volatile uint32_t t98 = 200U;
static int32_t x957 = INT32_MAX;
uint32_t x960 = 1U;


void f0(void) {
	int8_t x45 = 7;
	static uint64_t x46 = UINT64_MAX;
	int64_t x47 = INT64_MIN;
	uint64_t t0 = 3444553LLU;

	t0 = (x45%(x46/(x47^x48)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x49 = UINT16_MAX;
	static uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t1 = 139301720682117LLU;

	t1 = (x49%(x50/(x51^x52)));

	if (t1 != 65535LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x61 = 1449950;
	int64_t x62 = -102273887600057LL;
	volatile int32_t x64 = -1;
	volatile int64_t t2 = -1114LL;

	t2 = (x61%(x62/(x63^x64)));

	if (t2 != 1449950LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1595;
	int32_t x67 = 250;
	int64_t x68 = -1LL;
	volatile int64_t t3 = 1514326LL;

	t3 = (x65%(x66/(x67^x68)));

	if (t3 != 3LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x74 = 425U;
	volatile uint8_t x76 = UINT8_MAX;
	volatile uint32_t t4 = 4U;

	t4 = (x73%(x74/(x75^x76)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = 336U;
	uint8_t x79 = 7U;
	volatile int32_t t5 = 171;

	t5 = (x77%(x78/(x79^x80)));

	if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x81 = 7;
	uint16_t x83 = 5U;
	uint8_t x84 = UINT8_MAX;

	t6 = (x81%(x82/(x83^x84)));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x89 = INT16_MAX;
	volatile int64_t x90 = INT64_MIN;
	int32_t x91 = -1;
	int8_t x92 = INT8_MIN;
	static volatile int64_t t7 = -42681LL;

	t7 = (x89%(x90/(x91^x92)));

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x93 = 60;
	int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MIN;
	static uint32_t x96 = UINT32_MAX;
	int64_t t8 = -10660933678932LL;

	t8 = (x93%(x94/(x95^x96)));

	if (t8 != 60LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x98 = -1;
	uint64_t x99 = 386LLU;
	static int8_t x100 = 1;
	volatile uint64_t t9 = 4245003322903794LLU;

	t9 = (x97%(x98/(x99^x100)));

	if (t9 != 384LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x109 = INT32_MAX;
	int32_t x110 = 24197969;
	int16_t x111 = INT16_MAX;
	static uint64_t x112 = 0LLU;
	static uint64_t t10 = 5500LLU;

	t10 = (x109%(x110/(x111^x112)));

	if (t10 != 325LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x121 = INT32_MAX;
	uint64_t x122 = 93150LLU;
	volatile int32_t x124 = 260;
	volatile uint64_t t11 = 29710656046772LLU;

	t11 = (x121%(x122/(x123^x124)));

	if (t11 != 7LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x126 = INT32_MIN;
	static uint32_t x127 = 7U;
	static uint32_t x128 = 940313327U;
	volatile uint32_t t12 = 834458U;

	t12 = (x125%(x126/(x127^x128)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x157 = 363091631624642LLU;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;

	t13 = (x157%(x158/(x159^x160)));

	if (t13 != 363091631624642LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x162 = -1;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t14 = 1520022197U;

	t14 = (x161%(x162/(x163^x164)));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x165 = 0;
	int32_t x166 = INT32_MIN;
	volatile uint64_t x167 = UINT64_MAX;
	volatile uint64_t t15 = 166953473960891304LLU;

	t15 = (x165%(x166/(x167^x168)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x173 = INT32_MIN;
	uint64_t t16 = 3216727LLU;

	t16 = (x173%(x174/(x175^x176)));

	if (t16 != 2453674904093756LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x181 = INT16_MIN;
	uint64_t x182 = UINT64_MAX;
	uint8_t x183 = 92U;
	volatile uint64_t t17 = 7588340LLU;

	t17 = (x181%(x182/(x183^x184)));

	if (t17 != 69533LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x193 = 455327;
	volatile int16_t x194 = INT16_MIN;
	uint64_t x195 = 4588254080LLU;
	volatile int16_t x196 = -1683;
	volatile uint64_t t18 = 348970LLU;

	t18 = (x193%(x194/(x195^x196)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x201 = -1;
	int16_t x202 = -346;
	int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t19 = 0;

	t19 = (x201%(x202/(x203^x204)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x205 = UINT32_MAX;
	static int32_t x206 = -2422;
	volatile int16_t x207 = 95;
	static int8_t x208 = INT8_MAX;
	uint32_t t20 = 13902U;

	t20 = (x205%(x206/(x207^x208)));

	if (t20 != 74U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x209 = 1867;
	int32_t x210 = INT32_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -7;

	t21 = (x209%(x210/(x211^x212)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x217 = -1;
	int16_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	static uint32_t x220 = 8U;
	volatile uint32_t t22 = 39597217U;

	t22 = (x217%(x218/(x219^x220)));

	if (t22 != 138U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x221 = 160U;
	int64_t x222 = INT64_MIN;
	uint8_t x223 = 30U;
	int32_t x224 = -1;
	int64_t t23 = 29768454LL;

	t23 = (x221%(x222/(x223^x224)));

	if (t23 != 160LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x237 = 602094344;
	int16_t x238 = -4208;
	uint32_t x239 = 704U;
	uint16_t x240 = 9117U;

	t24 = (x237%(x238/(x239^x240)));

	if (t24 != 166136U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x257 = INT32_MIN;
	int16_t x259 = 1;
	int32_t x260 = -11338;
	static volatile int64_t t25 = 9LL;

	t25 = (x257%(x258/(x259^x260)));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x261 = -1LL;
	int8_t x263 = -6;
	static uint16_t x264 = 194U;
	volatile int64_t t26 = -55LL;

	t26 = (x261%(x262/(x263^x264)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x274 = INT32_MIN;
	static int16_t x275 = -45;
	static uint16_t x276 = 10U;
	volatile int32_t t27 = 76790;

	t27 = (x273%(x274/(x275^x276)));

	if (t27 != -11) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = -1;
	uint32_t x287 = 136085154U;
	volatile uint32_t x288 = 228183335U;
	uint32_t t28 = 13U;

	t28 = (x285%(x286/(x287^x288)));

	if (t28 != 35U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x289 = 55430630192654LL;
	static int32_t x290 = INT32_MIN;
	volatile int32_t x291 = INT32_MIN;
	volatile uint64_t t29 = 716LLU;

	t29 = (x289%(x290/(x291^x292)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x314 = INT32_MIN;
	volatile int8_t x316 = -7;
	volatile int64_t t30 = -242356075LL;

	t30 = (x313%(x314/(x315^x316)));

	if (t30 != -8LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = 2508693U;
	static int32_t x323 = 1;
	uint16_t x324 = UINT16_MAX;
	uint32_t t31 = 54U;

	t31 = (x321%(x322/(x323^x324)));

	if (t31 != 30U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x325 = 16U;
	volatile int8_t x326 = INT8_MAX;
	volatile int8_t x327 = 6;
	int8_t x328 = -1;
	volatile int32_t t32 = 158654;

	t32 = (x325%(x326/(x327^x328)));

	if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x334 = INT8_MIN;
	uint16_t x335 = 341U;
	static volatile uint64_t x336 = 48067197864288128LLU;
	uint64_t t33 = 12384LLU;

	t33 = (x333%(x334/(x335^x336)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x342 = INT16_MIN;
	volatile int8_t x343 = INT8_MAX;
	int8_t x344 = -1;

	t34 = (x341%(x342/(x343^x344)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x349 = UINT64_MAX;
	static volatile int64_t x350 = INT64_MAX;
	int16_t x351 = -39;
	int8_t x352 = -2;
	static volatile uint64_t t35 = 8738LLU;

	t35 = (x349%(x350/(x351^x352)));

	if (t35 != 15LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x361 = UINT16_MAX;
	static int16_t x362 = INT16_MIN;
	uint16_t x364 = 281U;
	int32_t t36 = -241600568;

	t36 = (x361%(x362/(x363^x364)));

	if (t36 != 45) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x365 = -1;
	int64_t x366 = 189534912265361LL;
	int16_t x367 = INT16_MIN;
	static int64_t t37 = 17566LL;

	t37 = (x365%(x366/(x367^x368)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x369 = 1011837545;
	volatile int64_t x370 = INT64_MIN;
	volatile int32_t x372 = INT32_MIN;
	static int64_t t38 = 861555LL;

	t38 = (x369%(x370/(x371^x372)));

	if (t38 != 1011837545LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x373 = INT8_MAX;
	volatile int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MIN;
	static volatile uint32_t x376 = 2327190U;

	t39 = (x373%(x374/(x375^x376)));

	if (t39 != 127LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x382 = -1;
	volatile int32_t x383 = INT32_MIN;
	static uint64_t x384 = 2094812LLU;
	static uint64_t t40 = 879348737LLU;

	t40 = (x381%(x382/(x383^x384)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x385 = INT16_MAX;
	int32_t x386 = 443221748;
	uint16_t x387 = UINT16_MAX;
	static volatile int16_t x388 = -1;
	volatile int32_t t41 = 2406;

	t41 = (x385%(x386/(x387^x388)));

	if (t41 != 5715) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x397 = INT16_MAX;
	uint64_t x398 = 22533311586LLU;
	int16_t x399 = INT16_MAX;
	uint8_t x400 = 1U;
	volatile uint64_t t42 = 2014576914LLU;

	t42 = (x397%(x398/(x399^x400)));

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x401 = 6U;
	static int64_t x402 = -1LL;
	uint64_t x403 = 5491756442376741645LLU;

	t43 = (x401%(x402/(x403^x404)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x441 = INT8_MIN;
	volatile int8_t x442 = -1;
	int32_t x443 = -1;
	static uint32_t x444 = 89209166U;
	volatile uint32_t t44 = 467030U;

	t44 = (x441%(x442/(x443^x444)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x445 = -1LL;
	uint32_t x447 = UINT32_MAX;
	int16_t x448 = 2;
	int64_t t45 = -328139LL;

	t45 = (x445%(x446/(x447^x448)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x453 = -1;
	int16_t x455 = INT16_MAX;
	int32_t x456 = INT32_MIN;

	t46 = (x453%(x454/(x455^x456)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x457 = UINT16_MAX;
	int64_t x458 = INT64_MAX;
	volatile uint16_t x459 = UINT16_MAX;
	int64_t t47 = 4515626779761LL;

	t47 = (x457%(x458/(x459^x460)));

	if (t47 != 65535LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x461 = INT8_MIN;
	volatile int8_t x462 = -1;
	volatile uint64_t x464 = 116494LLU;
	static uint64_t t48 = 26335330LLU;

	t48 = (x461%(x462/(x463^x464)));

	if (t48 != 8444LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x465 = 931U;
	int64_t x466 = 3586LL;
	volatile uint8_t x467 = 7U;
	uint32_t x468 = 677U;
	int64_t t49 = 1270849779LL;

	t49 = (x465%(x466/(x467^x468)));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x469 = 0U;
	uint16_t x471 = 0U;
	uint32_t x472 = UINT32_MAX;
	uint64_t t50 = 2569203253994133911LLU;

	t50 = (x469%(x470/(x471^x472)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x477 = INT64_MIN;
	int8_t x478 = INT8_MIN;
	uint32_t x479 = 115233579U;
	static int16_t x480 = -1;
	volatile int64_t t51 = 67575681675341LL;

	t51 = (x477%(x478/(x479^x480)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x485 = 845761012603342LLU;
	int64_t x486 = INT64_MIN;
	static int8_t x488 = INT8_MIN;
	volatile uint64_t t52 = 0LLU;

	t52 = (x485%(x486/(x487^x488)));

	if (t52 != 845761012603342LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x490 = -1;
	int16_t x492 = INT16_MIN;
	volatile uint64_t t53 = 25234714942LLU;

	t53 = (x489%(x490/(x491^x492)));

	if (t53 != 562967133814688LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x513 = -1LL;
	int32_t x514 = INT32_MIN;
	uint32_t x515 = 487281U;
	uint8_t x516 = UINT8_MAX;
	volatile int64_t t54 = 1LL;

	t54 = (x513%(x514/(x515^x516)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x517 = -1;
	int64_t x518 = INT64_MIN;
	int64_t x519 = INT64_MIN;
	static volatile int32_t x520 = INT32_MAX;
	int64_t t55 = 123LL;

	t55 = (x517%(x518/(x519^x520)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x529 = -1;
	int32_t x530 = 2566;
	volatile int16_t x531 = -1;
	int32_t t56 = -3835;

	t56 = (x529%(x530/(x531^x532)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x538 = -4666;
	uint32_t x539 = 15U;
	volatile int8_t x540 = INT8_MAX;
	static volatile int64_t t57 = 236481732139LL;

	t57 = (x537%(x538/(x539^x540)));

	if (t57 != 2LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x545 = INT8_MIN;
	uint64_t x546 = UINT64_MAX;
	int64_t x547 = -1LL;
	uint8_t x548 = UINT8_MAX;
	volatile uint64_t t58 = 2536239412005256LLU;

	t58 = (x545%(x546/(x547^x548)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x565 = 940972LLU;
	volatile int32_t x566 = INT32_MIN;
	static uint8_t x567 = 15U;
	uint16_t x568 = 2314U;
	volatile uint64_t t59 = 642LLU;

	t59 = (x565%(x566/(x567^x568)));

	if (t59 != 940972LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x573 = UINT32_MAX;
	int64_t x574 = INT64_MIN;
	volatile int16_t x576 = INT16_MAX;
	int64_t t60 = 39613878723227LL;

	t60 = (x573%(x574/(x575^x576)));

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x577 = 1;
	int16_t x578 = INT16_MAX;
	int8_t x579 = -2;
	uint32_t x580 = UINT32_MAX;

	t61 = (x577%(x578/(x579^x580)));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x581 = INT32_MIN;
	uint32_t x582 = UINT32_MAX;
	volatile int16_t x584 = -6173;
	uint64_t t62 = 138003464845LLU;

	t62 = (x581%(x582/(x583^x584)));

	if (t62 != 267336LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x585 = 42616;
	volatile int32_t x586 = 564032;
	volatile int16_t x587 = INT16_MAX;
	uint8_t x588 = 34U;

	t63 = (x585%(x586/(x587^x588)));

	if (t63 != 14) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x610 = INT16_MIN;
	static int8_t x612 = INT8_MIN;
	int32_t t64 = -344039313;

	t64 = (x609%(x610/(x611^x612)));

	if (t64 != -123) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x634 = INT64_MIN;
	volatile int64_t x635 = INT64_MIN;
	static int64_t t65 = 163254681526632887LL;

	t65 = (x633%(x634/(x635^x636)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x637 = 1;
	uint64_t x638 = UINT64_MAX;
	volatile int32_t x639 = INT32_MIN;
	volatile int8_t x640 = INT8_MIN;
	volatile uint64_t t66 = 21114740506LLU;

	t66 = (x637%(x638/(x639^x640)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x654 = -1;
	uint64_t x655 = 1137347322784LLU;
	uint64_t t67 = 188LLU;

	t67 = (x653%(x654/(x655^x656)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x657 = UINT8_MAX;
	uint32_t x658 = 7718103U;
	static uint16_t x659 = 583U;
	int8_t x660 = INT8_MAX;
	static uint32_t t68 = 21403802U;

	t68 = (x657%(x658/(x659^x660)));

	if (t68 != 255U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x661 = 0U;
	volatile int8_t x663 = -18;
	volatile uint32_t t69 = 5599484U;

	t69 = (x661%(x662/(x663^x664)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x665 = 5U;
	int16_t x666 = INT16_MIN;
	uint8_t x667 = 2U;
	int32_t t70 = 81383;

	t70 = (x665%(x666/(x667^x668)));

	if (t70 != 5) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x670 = INT64_MIN;
	uint16_t x671 = 6U;
	int64_t x672 = 17576LL;

	t71 = (x669%(x670/(x671^x672)));

	if (t71 != 5LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x678 = -1LL;
	int64_t x680 = -1LL;
	volatile int64_t t72 = -50180129LL;

	t72 = (x677%(x678/(x679^x680)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x681 = INT8_MAX;
	volatile int8_t x682 = INT8_MIN;
	static int8_t x683 = INT8_MIN;
	volatile uint8_t x684 = 41U;
	int32_t t73 = 31;

	t73 = (x681%(x682/(x683^x684)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x685 = -27;
	int64_t x686 = INT64_MIN;
	uint32_t x687 = 0U;
	int16_t x688 = 26;
	volatile int64_t t74 = -641136770018068244LL;

	t74 = (x685%(x686/(x687^x688)));

	if (t74 != -27LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x705 = 925;
	volatile int16_t x706 = INT16_MIN;
	static int8_t x707 = INT8_MAX;
	static uint64_t x708 = 5814221404553LLU;
	static uint64_t t75 = 31151153413LLU;

	t75 = (x705%(x706/(x707^x708)));

	if (t75 != 925LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x721 = INT64_MIN;
	static int8_t x722 = INT8_MIN;
	static int8_t x723 = 14;
	volatile int32_t x724 = -1;
	volatile int64_t t76 = -1LL;

	t76 = (x721%(x722/(x723^x724)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x725 = 63681752411832LLU;
	uint64_t x726 = 1824504780693918613LLU;
	int16_t x728 = -10;
	uint64_t t77 = 988621197LLU;

	t77 = (x725%(x726/(x727^x728)));

	if (t77 != 63681752411832LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x730 = INT32_MIN;
	static int32_t x732 = INT32_MIN;

	t78 = (x729%(x730/(x731^x732)));

	if (t78 != 194LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x741 = INT32_MAX;
	volatile uint32_t x742 = UINT32_MAX;
	uint8_t x743 = 1U;
	volatile int32_t x744 = INT32_MIN;
	volatile uint32_t t79 = 1396432131U;

	t79 = (x741%(x742/(x743^x744)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x769 = 1458579588168814LLU;
	static uint8_t x771 = 22U;
	int16_t x772 = -1;
	volatile uint64_t t80 = 20966LLU;

	t80 = (x769%(x770/(x771^x772)));

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x781 = INT32_MAX;
	int32_t x782 = -566746;
	static int8_t x783 = INT8_MIN;
	uint64_t x784 = UINT64_MAX;

	t81 = (x781%(x782/(x783^x784)));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x785 = -1;
	int64_t x786 = INT64_MAX;
	int8_t x787 = 10;
	uint16_t x788 = 3U;

	t82 = (x785%(x786/(x787^x788)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x794 = UINT32_MAX;
	static volatile uint16_t x796 = UINT16_MAX;
	static uint32_t t83 = 0U;

	t83 = (x793%(x794/(x795^x796)));

	if (t83 != 2121U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x811 = INT32_MIN;
	volatile uint32_t x812 = 19475U;

	t84 = (x809%(x810/(x811^x812)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x822 = INT64_MAX;
	volatile int64_t t85 = -574072314095189593LL;

	t85 = (x821%(x822/(x823^x824)));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x829 = UINT8_MAX;
	volatile uint64_t x830 = UINT64_MAX;

	t86 = (x829%(x830/(x831^x832)));

	if (t86 != 255LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x845 = INT32_MIN;
	int64_t x846 = INT64_MIN;
	int8_t x848 = INT8_MIN;

	t87 = (x845%(x846/(x847^x848)));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x857 = INT64_MIN;
	int32_t x859 = -1;
	volatile int32_t x860 = -32;
	int64_t t88 = -3LL;

	t88 = (x857%(x858/(x859^x860)));

	if (t88 != -335655LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x869 = UINT8_MAX;
	static uint64_t x870 = UINT64_MAX;
	int32_t x871 = INT32_MIN;
	static uint64_t t89 = 121762658LLU;

	t89 = (x869%(x870/(x871^x872)));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x881 = UINT64_MAX;
	static volatile int32_t x882 = 9072;
	int8_t x883 = -13;

	t90 = (x881%(x882/(x883^x884)));

	if (t90 != 15LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x889 = 25U;
	volatile int64_t x890 = INT64_MAX;
	int64_t x891 = INT64_MAX;
	static uint64_t x892 = 3383820101LLU;
	uint64_t t91 = 150310899069LLU;

	t91 = (x889%(x890/(x891^x892)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x897 = 1061980714236129104LL;
	volatile int32_t x898 = -1;
	int8_t x899 = INT8_MIN;
	volatile uint64_t x900 = 4LLU;

	t92 = (x897%(x898/(x899^x900)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x901 = -1;
	int64_t x902 = INT64_MIN;
	volatile uint16_t x904 = UINT16_MAX;

	t93 = (x901%(x902/(x903^x904)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x910 = -1;
	int16_t x911 = INT16_MIN;
	volatile uint32_t x912 = 604885U;
	volatile int64_t t94 = -30576260802972LL;

	t94 = (x909%(x910/(x911^x912)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x917 = INT64_MIN;
	int16_t x918 = -6943;
	static uint64_t x919 = 1042869707111LLU;
	static uint64_t t95 = 165502438041LLU;

	t95 = (x917%(x918/(x919^x920)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x921 = 4U;
	int64_t x922 = INT64_MAX;
	int64_t x923 = 1536328690278677201LL;
	int32_t x924 = INT32_MIN;
	int64_t t96 = -30LL;

	t96 = (x921%(x922/(x923^x924)));

	if (t96 != 4LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x933 = INT16_MAX;
	int16_t x934 = -1;
	uint64_t x936 = 18477002508513466LLU;
	volatile uint64_t t97 = 19068176407197721LLU;

	t97 = (x933%(x934/(x935^x936)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x949 = 17U;
	uint32_t x951 = 225178U;
	int16_t x952 = INT16_MAX;

	t98 = (x949%(x950/(x951^x952)));

	if (t98 != 17U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x958 = UINT16_MAX;
	int16_t x959 = 207;
	volatile uint32_t t99 = 99U;

	t99 = (x957%(x958/(x959^x960)));

	if (t99 != 73U) { NG(); } else { ; }
	
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

