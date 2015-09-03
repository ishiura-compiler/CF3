#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
uint16_t x3 = 12410U;
uint64_t t0 = 195905LLU;
uint8_t x6 = 123U;
uint8_t x7 = UINT8_MAX;
int16_t x17 = INT16_MAX;
int8_t x20 = -1;
uint16_t x31 = UINT16_MAX;
volatile int32_t t7 = 1;
static int16_t x62 = INT16_MIN;
int8_t x63 = INT8_MAX;
uint32_t x64 = UINT32_MAX;
uint8_t x78 = UINT8_MAX;
int8_t x84 = INT8_MAX;
uint64_t t11 = 113064632970151437LLU;
uint64_t t12 = 15591947788LLU;
int32_t x90 = INT32_MIN;
volatile int8_t x101 = INT8_MAX;
static uint8_t x102 = UINT8_MAX;
volatile uint32_t t16 = 3U;
int16_t x119 = INT16_MAX;
int8_t x135 = INT8_MAX;
uint64_t x136 = 15088636LLU;
static volatile int32_t x140 = 75;
volatile uint64_t t21 = 2LLU;
volatile uint8_t x144 = UINT8_MAX;
static volatile int16_t x149 = INT16_MAX;
uint32_t x161 = 417U;
int16_t x162 = INT16_MIN;
uint16_t x169 = UINT16_MAX;
static int16_t x172 = INT16_MIN;
int32_t x181 = -2;
int16_t x184 = INT16_MAX;
volatile int32_t t27 = 28063;
static int32_t x185 = INT32_MIN;
int16_t x195 = INT16_MIN;
volatile int64_t t29 = -9906884644LL;
volatile int32_t x206 = 921;
static uint32_t x209 = 110U;
volatile uint64_t t34 = 16152244446708327LLU;
int8_t x269 = INT8_MIN;
int16_t x308 = INT16_MAX;
int32_t x310 = -1;
int8_t x315 = -1;
int16_t x317 = -1;
int8_t x320 = INT8_MAX;
volatile int32_t t44 = 25;
volatile int32_t x329 = INT32_MAX;
uint64_t t46 = 193300725566LLU;
static int64_t x337 = -1LL;
volatile int16_t x345 = INT16_MAX;
uint8_t x348 = 30U;
uint8_t x349 = 68U;
volatile int16_t x372 = -86;
int8_t x381 = 1;
volatile int16_t x383 = -301;
int8_t x396 = INT8_MIN;
uint32_t x400 = 3U;
int16_t x401 = -1;
volatile int8_t x403 = INT8_MAX;
int32_t x407 = 161;
volatile int32_t t57 = 844237;
int16_t x411 = -1;
int8_t x416 = INT8_MIN;
volatile int32_t t59 = 30;
volatile int32_t x437 = INT32_MAX;
int8_t x438 = INT8_MIN;
uint8_t x439 = 0U;
int8_t x440 = INT8_MIN;
volatile int16_t x462 = INT16_MAX;
static volatile uint16_t x466 = 18U;
uint8_t x467 = UINT8_MAX;
volatile int16_t x468 = INT16_MIN;
volatile int32_t x469 = 201;
uint32_t x471 = UINT32_MAX;
static uint8_t x483 = 2U;
volatile uint32_t t70 = 10792132U;
static uint64_t x488 = 87283179LLU;
volatile int64_t t72 = -28962819501759717LL;
static uint32_t t74 = 0U;
int8_t x524 = INT8_MAX;
uint32_t x526 = 4020636U;
static uint32_t t76 = 109728U;
volatile uint8_t x529 = UINT8_MAX;
int8_t x530 = -1;
uint16_t x531 = 15U;
uint64_t t78 = 798629038521610125LLU;
static volatile uint32_t x537 = 2919261U;
uint64_t x552 = UINT64_MAX;
uint64_t t80 = 262855431417013LLU;
int16_t x553 = INT16_MIN;
uint32_t t81 = 3856385U;
uint64_t x560 = 128797004747LLU;
volatile uint64_t x564 = 423571356722LLU;
uint64_t t83 = 1189582427LLU;
int8_t x580 = INT8_MIN;
volatile uint64_t t85 = 1580402509LLU;
int16_t x588 = -229;
uint16_t x593 = UINT16_MAX;
int64_t x595 = -128751LL;
volatile int64_t x596 = 29216852499LL;
uint32_t x607 = 31466621U;
uint16_t x619 = 8019U;
uint64_t x623 = 305LLU;
uint64_t x624 = UINT64_MAX;
static uint32_t x631 = 115071U;
volatile int64_t x634 = -60891372956LL;
int32_t x636 = -783992;
volatile uint8_t x637 = UINT8_MAX;
int64_t x651 = -257911751530LL;
int64_t t94 = 69LL;
int64_t x653 = INT64_MAX;
volatile int64_t t95 = -3394043483138LL;
static int8_t x657 = INT8_MAX;
int16_t x662 = -1;
int8_t x663 = INT8_MIN;
uint32_t x664 = UINT32_MAX;
int64_t x665 = -1LL;
int16_t x666 = INT16_MAX;
volatile uint64_t t99 = 204607125818LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x4 = -33;

	t0 = (x1%((x2-x3)*x4));

	if (t0 != 28301LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 8;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -3;

	t1 = (x5%((x6-x7)*x8));

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = -678;
	uint64_t x19 = 1736659LLU;
	uint64_t t2 = 3LLU;

	t2 = (x17%((x18-x19)*x20));

	if (t2 != 32767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = -5816;
	static int8_t x26 = -1;
	volatile int16_t x27 = -56;
	int32_t x28 = -1;
	int32_t t3 = -27;

	t3 = (x25%((x26-x27)*x28));

	if (t3 != -41) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MIN;
	volatile int64_t x30 = -582363802LL;
	static uint16_t x32 = 41U;
	int64_t t4 = 14172818713LL;

	t4 = (x29%((x30-x31)*x32));

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x41 = INT16_MIN;
	int64_t x42 = -1344756636602LL;
	int32_t x43 = -3563844;
	volatile uint16_t x44 = 106U;
	volatile int64_t t5 = 1LL;

	t5 = (x41%((x42-x43)*x44));

	if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x49 = 12U;
	int8_t x50 = 0;
	uint64_t x51 = 63207LLU;
	int64_t x52 = -1LL;
	static uint64_t t6 = 104526030LLU;

	t6 = (x49%((x50-x51)*x52));

	if (t6 != 12LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = INT8_MIN;
	static volatile int16_t x54 = 144;
	int16_t x55 = INT16_MIN;
	int32_t x56 = -1;

	t7 = (x53%((x54-x55)*x56));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = 36;
	volatile uint32_t t8 = 11429370U;

	t8 = (x61%((x62-x63)*x64));

	if (t8 != 36U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = INT8_MIN;
	static volatile int16_t x70 = INT16_MIN;
	int16_t x71 = 0;
	int64_t x72 = -6LL;
	int64_t t9 = 34525980656155LL;

	t9 = (x69%((x70-x71)*x72));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = 2034;
	static int16_t x79 = -1;
	int64_t x80 = -1LL;
	volatile int64_t t10 = -1673201LL;

	t10 = (x77%((x78-x79)*x80));

	if (t10 != 242LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x81 = 0;
	static uint64_t x82 = UINT64_MAX;
	static int64_t x83 = INT64_MAX;

	t11 = (x81%((x82-x83)*x84));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x85 = -50;
	static int8_t x86 = -1;
	static volatile uint64_t x87 = 34276163075704222LLU;
	int16_t x88 = INT16_MIN;

	t12 = (x85%((x86-x87)*x88));

	if (t12 != 2090076831606669262LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x89 = UINT64_MAX;
	uint64_t x91 = UINT64_MAX;
	int8_t x92 = INT8_MIN;
	uint64_t t13 = 213593LLU;

	t13 = (x89%((x90-x91)*x92));

	if (t13 != 8589934591LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MAX;
	int16_t x99 = INT16_MAX;
	volatile int8_t x100 = 13;
	int32_t t14 = 26;

	t14 = (x97%((x98-x99)*x100));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x103 = UINT16_MAX;
	volatile int64_t x104 = 8210473LL;
	int64_t t15 = -41921930807LL;

	t15 = (x101%((x102-x103)*x104));

	if (t15 != 127LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 2367610U;
	int32_t x107 = -39;
	volatile int32_t x108 = INT32_MAX;

	t16 = (x105%((x106-x107)*x108));

	if (t16 != 4702530U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x117 = INT8_MIN;
	static int16_t x118 = -170;
	uint16_t x120 = 127U;
	int32_t t17 = 5880;

	t17 = (x117%((x118-x119)*x120));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = 6270953LLU;
	volatile int32_t x123 = INT32_MIN;
	uint32_t x124 = 15021U;
	volatile uint64_t t18 = 696LLU;

	t18 = (x121%((x122-x123)*x124));

	if (t18 != 20889204671132LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x129 = 10;
	int8_t x130 = INT8_MIN;
	uint32_t x131 = 88714152U;
	int16_t x132 = -645;
	volatile uint32_t t19 = 453577U;

	t19 = (x129%((x130-x131)*x132));

	if (t19 != 10U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x133 = -7202;
	int64_t x134 = 645620LL;
	volatile uint64_t t20 = 43254LLU;

	t20 = (x133%((x134-x135)*x136));

	if (t20 != 2700744972798LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x137 = INT16_MIN;
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;

	t21 = (x137%((x138-x139)*x140));

	if (t21 != 45097123823LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x141 = -1;
	int8_t x142 = -5;
	int16_t x143 = -1;
	int32_t t22 = 13552;

	t22 = (x141%((x142-x143)*x144));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x150 = INT8_MIN;
	uint32_t x151 = UINT32_MAX;
	static int32_t x152 = INT32_MIN;
	volatile uint32_t t23 = 1554116218U;

	t23 = (x149%((x150-x151)*x152));

	if (t23 != 32767U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x153 = INT64_MIN;
	int16_t x154 = -1;
	uint16_t x155 = 4629U;
	int16_t x156 = INT16_MAX;
	int64_t t24 = -393664339896569LL;

	t24 = (x153%((x154-x155)*x156));

	if (t24 != -8191758LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x163 = 0;
	int64_t x164 = -9LL;
	volatile int64_t t25 = 48LL;

	t25 = (x161%((x162-x163)*x164));

	if (t25 != 417LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x170 = 538843U;
	volatile uint32_t x171 = 827446U;
	uint32_t t26 = 533U;

	t26 = (x169%((x170-x171)*x172));

	if (t26 != 65535U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x182 = INT16_MIN;
	uint8_t x183 = 54U;

	t27 = (x181%((x182-x183)*x184));

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 14221U;
	static int8_t x188 = 4;
	static volatile uint32_t t28 = 52961881U;

	t28 = (x185%((x186-x187)*x188));

	if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x193 = 3U;
	int32_t x194 = 155005;
	static int64_t x196 = 94LL;

	t29 = (x193%((x194-x195)*x196));

	if (t29 != 3LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x205 = UINT8_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = 2U;
	int32_t t30 = 144100559;

	t30 = (x205%((x206-x207)*x208));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MIN;
	int8_t x212 = -3;
	static volatile uint32_t t31 = 23237859U;

	t31 = (x209%((x210-x211)*x212));

	if (t31 != 110U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x217 = 845033;
	int32_t x218 = INT32_MIN;
	int64_t x219 = 966940176319604LL;
	volatile int64_t x220 = -1LL;
	static int64_t t32 = -50803212LL;

	t32 = (x217%((x218-x219)*x220));

	if (t32 != 845033LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x241 = -4244;
	int8_t x242 = INT8_MIN;
	static int8_t x243 = 1;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t33 = 7241;

	t33 = (x241%((x242-x243)*x244));

	if (t33 != -4244) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x261 = 23432902333851LLU;
	uint16_t x262 = 10U;
	uint64_t x263 = 104100690LLU;
	volatile int64_t x264 = -49466363LL;

	t34 = (x261%((x262-x263)*x264));

	if (t34 != 23432902333851LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x270 = 7;
	int32_t x271 = 0;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t35 = 44411LLU;

	t35 = (x269%((x270-x271)*x272));

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x277 = 3U;
	volatile int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	uint16_t x280 = 15U;
	volatile uint64_t t36 = 34305499650LLU;

	t36 = (x277%((x278-x279)*x280));

	if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x281 = 89U;
	int64_t x282 = INT64_MIN;
	int16_t x283 = -1;
	int32_t x284 = -1;
	volatile int64_t t37 = -280720616LL;

	t37 = (x281%((x282-x283)*x284));

	if (t37 != 89LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x285 = -1987;
	int8_t x286 = -1;
	static int16_t x287 = 8467;
	volatile int32_t x288 = -24;
	volatile int32_t t38 = -879;

	t38 = (x285%((x286-x287)*x288));

	if (t38 != -1987) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x301 = 19U;
	int32_t x302 = 6297;
	int16_t x303 = -387;
	int16_t x304 = INT16_MIN;
	uint32_t t39 = 1U;

	t39 = (x301%((x302-x303)*x304));

	if (t39 != 19U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x305 = 12U;
	volatile int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	volatile int32_t t40 = 137362167;

	t40 = (x305%((x306-x307)*x308));

	if (t40 != 12) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x309 = 2U;
	static uint64_t x311 = 321554798LLU;
	static int16_t x312 = INT16_MIN;
	static volatile uint64_t t41 = 112319LLU;

	t41 = (x309%((x310-x311)*x312));

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x313 = -1202695290865181546LL;
	uint64_t x314 = 5129119674578734LLU;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t42 = 755435257LLU;

	t42 = (x313%((x314-x315)*x316));

	if (t42 != 17244048782844370070LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -397;
	volatile int32_t t43 = -169396173;

	t43 = (x317%((x318-x319)*x320));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x325 = INT8_MIN;
	static int8_t x326 = -1;
	int8_t x327 = -14;
	int8_t x328 = INT8_MIN;

	t44 = (x325%((x326-x327)*x328));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x330 = 46;
	int64_t x331 = 221LL;
	static uint8_t x332 = 7U;
	int64_t t45 = 60934LL;

	t45 = (x329%((x330-x331)*x332));

	if (t45 != 1072LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x333 = 107U;
	static volatile int64_t x334 = -1LL;
	static uint64_t x335 = 738631999809LLU;
	uint16_t x336 = 3543U;

	t46 = (x333%((x334-x335)*x336));

	if (t46 != 107LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x338 = -1;
	uint16_t x339 = 0U;
	volatile int32_t x340 = -712;
	volatile int64_t t47 = 145168LL;

	t47 = (x337%((x338-x339)*x340));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x346 = 0U;
	uint32_t x347 = 1U;
	uint32_t t48 = 2U;

	t48 = (x345%((x346-x347)*x348));

	if (t48 != 32767U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x350 = 29U;
	int16_t x351 = INT16_MIN;
	static uint16_t x352 = 10U;
	int32_t t49 = -20;

	t49 = (x349%((x350-x351)*x352));

	if (t49 != 68) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x361 = 8;
	static int8_t x362 = INT8_MIN;
	int32_t x363 = -1;
	int64_t x364 = 3LL;
	volatile int64_t t50 = -1866935LL;

	t50 = (x361%((x362-x363)*x364));

	if (t50 != 8LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x369 = 1567583007LLU;
	static int16_t x370 = INT16_MAX;
	int8_t x371 = 1;
	volatile uint64_t t51 = 21498LLU;

	t51 = (x369%((x370-x371)*x372));

	if (t51 != 1567583007LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x382 = 921878330U;
	int32_t x384 = INT32_MIN;
	volatile uint32_t t52 = 4535381U;

	t52 = (x381%((x382-x383)*x384));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x385 = -305;
	uint8_t x386 = 15U;
	static uint16_t x387 = 36U;
	uint64_t x388 = 975184790115147LLU;
	uint64_t t53 = 4058118LLU;

	t53 = (x385%((x386-x387)*x388));

	if (t53 != 20478880592417782LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x393 = INT8_MIN;
	volatile int16_t x394 = INT16_MIN;
	static uint32_t x395 = 27U;
	uint32_t t54 = 4017319U;

	t54 = (x393%((x394-x395)*x396));

	if (t54 != 658688U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x397 = UINT32_MAX;
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = 0;
	volatile uint64_t t55 = 500557684624711LLU;

	t55 = (x397%((x398-x399)*x400));

	if (t55 != 4294967295LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x402 = 49U;
	uint8_t x404 = 71U;
	static volatile int32_t t56 = -115;

	t56 = (x401%((x402-x403)*x404));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = -4;
	uint8_t x408 = 2U;

	t57 = (x405%((x406-x407)*x408));

	if (t57 != 67) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x409 = INT8_MIN;
	uint16_t x410 = 87U;
	int64_t x412 = -1LL;
	volatile int64_t t58 = 2863969LL;

	t58 = (x409%((x410-x411)*x412));

	if (t58 != -40LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x413 = -1;
	volatile int16_t x414 = 355;
	uint8_t x415 = UINT8_MAX;

	t59 = (x413%((x414-x415)*x416));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x417 = INT32_MIN;
	int16_t x418 = -2;
	uint8_t x419 = 4U;
	volatile int64_t x420 = 21946383327692249LL;
	int64_t t60 = 6664817282417LL;

	t60 = (x417%((x418-x419)*x420));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x429 = INT8_MIN;
	uint16_t x430 = UINT16_MAX;
	int32_t x431 = -1;
	static volatile int32_t x432 = -1;
	int32_t t61 = -104;

	t61 = (x429%((x430-x431)*x432));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t t62 = 2464520;

	t62 = (x437%((x438-x439)*x440));

	if (t62 != 16383) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x441 = -3;
	int8_t x442 = INT8_MIN;
	int16_t x443 = 1465;
	volatile int32_t x444 = -1;
	int32_t t63 = -1843;

	t63 = (x441%((x442-x443)*x444));

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x445 = 1682U;
	int8_t x446 = 5;
	static int32_t x447 = -1;
	uint8_t x448 = UINT8_MAX;
	int32_t t64 = 5254;

	t64 = (x445%((x446-x447)*x448));

	if (t64 != 152) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x461 = -9993360;
	int32_t x463 = INT32_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile uint32_t t65 = 210U;

	t65 = (x461%((x462-x463)*x464));

	if (t65 != 2137523056U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x465 = -1;
	volatile int32_t t66 = -2570;

	t66 = (x465%((x466-x467)*x468));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x470 = INT8_MIN;
	int32_t x472 = INT32_MAX;
	volatile uint32_t t67 = 1409956107U;

	t67 = (x469%((x470-x471)*x472));

	if (t67 != 201U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x473 = INT16_MIN;
	uint64_t x474 = UINT64_MAX;
	volatile int64_t x475 = INT64_MIN;
	int32_t x476 = INT32_MIN;
	volatile uint64_t t68 = 1840879LLU;

	t68 = (x473%((x474-x475)*x476));

	if (t68 != 2147450880LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x477 = UINT64_MAX;
	int16_t x478 = 0;
	static volatile int16_t x479 = -126;
	int16_t x480 = INT16_MAX;
	static uint64_t t69 = 2535731413001515LLU;

	t69 = (x477%((x478-x479)*x480));

	if (t69 != 1179627LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x481 = 702740514U;
	static volatile uint16_t x482 = UINT16_MAX;
	volatile int8_t x484 = INT8_MIN;

	t70 = (x481%((x482-x483)*x484));

	if (t70 != 702740514U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x485 = INT32_MAX;
	int16_t x486 = INT16_MIN;
	int32_t x487 = INT32_MIN;
	volatile uint64_t t71 = 12089981343LLU;

	t71 = (x485%((x486-x487)*x488));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x497 = 3U;
	int64_t x498 = 2651LL;
	int8_t x499 = -3;
	static int8_t x500 = INT8_MIN;

	t72 = (x497%((x498-x499)*x500));

	if (t72 != 3LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x513 = UINT16_MAX;
	int8_t x514 = 0;
	uint32_t x515 = 914804856U;
	volatile uint8_t x516 = 6U;
	uint32_t t73 = 485847U;

	t73 = (x513%((x514-x515)*x516));

	if (t73 != 65535U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x517 = INT16_MAX;
	uint8_t x518 = 6U;
	static uint32_t x519 = UINT32_MAX;
	volatile int32_t x520 = INT32_MIN;

	t74 = (x517%((x518-x519)*x520));

	if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x521 = INT16_MIN;
	int64_t x522 = -1LL;
	uint8_t x523 = 1U;
	int64_t t75 = -437680842043065LL;

	t75 = (x521%((x522-x523)*x524));

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x525 = INT16_MAX;
	volatile int8_t x527 = INT8_MAX;
	int32_t x528 = INT32_MAX;

	t76 = (x525%((x526-x527)*x528));

	if (t76 != 32767U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x532 = INT8_MIN;
	int32_t t77 = 0;

	t77 = (x529%((x530-x531)*x532));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x533 = INT64_MAX;
	uint64_t x534 = 1097523LLU;
	int8_t x535 = 1;
	int16_t x536 = -4;

	t78 = (x533%((x534-x535)*x536));

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x538 = -22979;
	int16_t x539 = -174;
	int8_t x540 = 1;
	uint32_t t79 = 1U;

	t79 = (x537%((x538-x539)*x540));

	if (t79 != 2919261U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x549 = -1005983071429LL;
	int8_t x550 = INT8_MIN;
	static int32_t x551 = INT32_MIN;

	t80 = (x549%((x550-x551)*x552));

	if (t80 != 18446743067726480187LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x554 = 1U;
	static int8_t x555 = INT8_MIN;
	int16_t x556 = INT16_MIN;

	t81 = (x553%((x554-x555)*x556));

	if (t81 != 4194304U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x557 = 403303301441560445LLU;
	int16_t x558 = -456;
	volatile int16_t x559 = INT16_MAX;
	static uint64_t t82 = 72003LLU;

	t82 = (x557%((x558-x559)*x560));

	if (t82 != 403303301441560445LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x561 = -63;
	volatile uint32_t x562 = 1822622697U;
	static volatile uint16_t x563 = UINT16_MAX;

	t83 = (x561%((x562-x563)*x564));

	if (t83 != 2780241284063224845LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x573 = -1677;
	int16_t x574 = INT16_MIN;
	uint64_t x575 = UINT64_MAX;
	volatile uint16_t x576 = UINT16_MAX;
	volatile uint64_t t84 = 525393432451574013LLU;

	t84 = (x573%((x574-x575)*x576));

	if (t84 != 2147383668LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x577 = INT16_MAX;
	int8_t x578 = -1;
	uint64_t x579 = 90344466LLU;

	t85 = (x577%((x578-x579)*x580));

	if (t85 != 32767LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x585 = INT64_MAX;
	static uint32_t x586 = 11707229U;
	volatile uint8_t x587 = UINT8_MAX;
	volatile int64_t t86 = 113570LL;

	t86 = (x585%((x586-x587)*x588));

	if (t86 != 1591003057LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x594 = -1LL;
	static volatile int64_t t87 = 218557697016LL;

	t87 = (x593%((x594-x595)*x596));

	if (t87 != 65535LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x605 = UINT32_MAX;
	volatile int64_t x606 = -1LL;
	uint32_t x608 = UINT32_MAX;
	volatile int64_t t88 = 316790948627095LL;

	t88 = (x605%((x606-x607)*x608));

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x617 = 8U;
	int8_t x618 = 0;
	volatile uint64_t x620 = 15941140LLU;
	uint64_t t89 = 2358370921462LLU;

	t89 = (x617%((x618-x619)*x620));

	if (t89 != 8LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x621 = 1397318114LL;
	int64_t x622 = -1LL;
	volatile uint64_t t90 = 67LLU;

	t90 = (x621%((x622-x623)*x624));

	if (t90 != 20LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x629 = 6U;
	uint8_t x630 = UINT8_MAX;
	int16_t x632 = INT16_MIN;
	volatile uint32_t t91 = 869261946U;

	t91 = (x629%((x630-x631)*x632));

	if (t91 != 6U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x633 = -1LL;
	int16_t x635 = -1;
	int64_t t92 = 11980486867890LL;

	t92 = (x633%((x634-x635)*x636));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x638 = 7641U;
	uint8_t x639 = 6U;
	uint64_t x640 = 9413305992975LLU;
	volatile uint64_t t93 = 25345440LLU;

	t93 = (x637%((x638-x639)*x640));

	if (t93 != 255LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x649 = 1936900635U;
	volatile uint32_t x650 = 157U;
	int64_t x652 = -1LL;

	t94 = (x649%((x650-x651)*x652));

	if (t94 != 1936900635LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x654 = INT16_MAX;
	int32_t x655 = -32694;
	uint32_t x656 = 6055000U;

	t95 = (x653%((x654-x655)*x656));

	if (t95 != 1111423023LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x658 = 2887604462448513LLU;
	uint32_t x659 = 13U;
	volatile uint16_t x660 = UINT16_MAX;
	uint64_t t96 = 26332871037283LLU;

	t96 = (x657%((x658-x659)*x660));

	if (t96 != 127LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x661 = INT64_MIN;
	int64_t t97 = 235888722LL;

	t97 = (x661%((x662-x663)*x664));

	if (t97 != -2147491649LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x667 = 16407U;
	int16_t x668 = INT16_MAX;
	int64_t t98 = -13687899LL;

	t98 = (x665%((x666-x667)*x668));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x673 = -2320633445LL;
	uint64_t x674 = 3823490902LLU;
	static uint64_t x675 = 4337756738179194LLU;
	volatile int16_t x676 = 13;

	t99 = (x673%((x674-x675)*x676));

	if (t99 != 56390785570314351LLU) { NG(); } else { ; }
	
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

