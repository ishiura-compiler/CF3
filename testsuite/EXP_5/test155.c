#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -620;
int64_t x3 = -1LL;
uint32_t x8 = 473U;
int32_t x10 = -36753350;
uint16_t x16 = UINT16_MAX;
int32_t x19 = INT32_MAX;
uint64_t x22 = UINT64_MAX;
int64_t t7 = 355LL;
volatile int16_t x34 = 70;
int32_t x35 = INT32_MIN;
static int32_t t8 = 212;
volatile int64_t x40 = INT64_MIN;
static uint16_t x52 = 6U;
static volatile int16_t x53 = -1;
volatile uint8_t x55 = 1U;
uint8_t x62 = 0U;
volatile uint32_t t16 = UINT32_MAX;
int64_t x74 = 50666384LL;
static int8_t x76 = -11;
int8_t x77 = -1;
static volatile int8_t x80 = INT8_MIN;
int8_t x82 = INT8_MIN;
volatile uint32_t t20 = UINT32_MAX;
static int16_t x86 = -285;
uint16_t x88 = UINT16_MAX;
uint32_t x90 = 823885U;
uint64_t x93 = UINT64_MAX;
uint32_t x94 = 15444264U;
int64_t x98 = INT64_MIN;
int16_t x102 = -3185;
volatile int64_t t27 = 377287405386LL;
uint16_t x116 = 17844U;
int64_t t30 = 554915289LL;
uint8_t x133 = 3U;
static int64_t x136 = INT64_MIN;
int32_t x144 = 580;
int16_t x154 = INT16_MIN;
uint8_t x158 = UINT8_MAX;
int16_t x159 = 37;
uint8_t x164 = 9U;
int8_t x165 = INT8_MAX;
static int64_t x168 = 725489777191LL;
static int64_t t41 = -58566LL;
int16_t x176 = -17;
int8_t x181 = 2;
static uint16_t x185 = 3605U;
int64_t t45 = -5756626917042764LL;
static int16_t x189 = INT16_MIN;
uint32_t x190 = 2U;
int16_t x192 = -328;
uint32_t t46 = 24427U;
static volatile int64_t t48 = 5611405366LL;
uint16_t x205 = UINT16_MAX;
uint64_t x206 = 431526280015LLU;
volatile uint64_t t49 = 3957LLU;
int32_t x218 = INT32_MAX;
static uint8_t x219 = 0U;
static int32_t x224 = INT32_MIN;
volatile int64_t t52 = 468740LL;
int8_t x225 = INT8_MAX;
uint16_t x227 = UINT16_MAX;
int8_t x243 = INT8_MIN;
uint8_t x244 = 112U;
int16_t x252 = 3556;
static int16_t x260 = -1;
uint64_t x267 = UINT64_MAX;
uint64_t t62 = UINT64_MAX;
static volatile int16_t x276 = -242;
volatile int32_t x279 = -1;
static int64_t x291 = -1LL;
uint8_t x299 = 0U;
int32_t x307 = 215;
static uint8_t x310 = 2U;
int16_t x318 = INT16_MAX;
volatile int8_t x319 = -1;
int16_t x321 = -1;
uint8_t x322 = 76U;
int64_t x323 = INT64_MIN;
int8_t x324 = 12;
static volatile int32_t x326 = -1;
int32_t x327 = -1444;
uint8_t x330 = UINT8_MAX;
uint64_t x334 = 3815054831255832851LLU;
int64_t x336 = INT64_MIN;
static int16_t x342 = INT16_MIN;
volatile int32_t t79 = -402554;
int8_t x353 = 0;
volatile int16_t x355 = INT16_MIN;
int16_t x357 = -3;
volatile int64_t x358 = -1LL;
uint8_t x360 = 1U;
static int32_t x363 = INT32_MIN;
uint16_t x364 = 4999U;
int8_t x371 = -1;
int32_t x372 = INT32_MIN;
volatile int32_t x379 = -1;
int16_t x384 = -1;
uint64_t x387 = 0LLU;
volatile int64_t x397 = -1LL;
static volatile uint32_t x400 = 407U;
uint8_t x401 = 71U;
uint64_t x406 = UINT64_MAX;
static int64_t t94 = 13LL;
static int8_t x413 = 60;
uint32_t x419 = 123626U;
static int8_t x420 = 25;
uint64_t t97 = UINT64_MAX;
static int16_t x425 = INT16_MAX;
int32_t x426 = INT32_MIN;
static uint8_t x431 = 46U;
int32_t x432 = INT32_MIN;


void f0(void) {
	int32_t x2 = -1;
	volatile uint32_t x4 = 2U;
	int64_t t0 = -289148326LL;

	t0 = (x1|((x2+x3)|x4));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 12780U;
	static int32_t x6 = INT32_MIN;
	uint64_t x7 = 240939052764LLU;
	uint64_t t1 = 1790943934159532890LLU;

	t1 = (x5|((x6+x7)|x8));

	if (t1 != 238791573501LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int32_t x11 = -1;
	int16_t x12 = -34;
	int64_t t2 = 9239289LL;

	t2 = (x9|((x10+x11)|x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 27U;
	volatile int32_t x14 = INT32_MIN;
	int64_t x15 = 3405157608LL;
	static volatile int64_t t3 = 1566335LL;

	t3 = (x13|((x14+x15)|x16));

	if (t3 != 1257701375LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 19961664573LLU;
	static volatile uint64_t x18 = 1073067981335524LLU;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17|((x18+x19)|x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -2;
	int32_t x23 = 149;
	uint64_t x24 = 100LLU;
	uint64_t t5 = 10905407LLU;

	t5 = (x21|((x22+x23)|x24));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -91291428;
	int32_t x26 = -1;
	uint8_t x27 = 63U;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 618LL;

	t6 = (x25|((x26+x27)|x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 42U;
	int64_t x30 = -1LL;
	static int8_t x31 = -9;
	static int16_t x32 = -144;

	t7 = (x29|((x30+x31)|x32));

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 7;
	int8_t x36 = INT8_MIN;

	t8 = (x33|((x34+x35)|x36));

	if (t8 != -57) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 0;
	int16_t x38 = -1;
	int16_t x39 = INT16_MAX;
	static volatile int64_t t9 = -40291502480154453LL;

	t9 = (x37|((x38+x39)|x40));

	if (t9 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint32_t x42 = 1327487297U;
	volatile uint64_t x43 = 7355937685065524212LLU;
	static int64_t x44 = INT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x41|((x42+x43)|x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static uint8_t x46 = 109U;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 0U;
	int64_t t11 = 23166161LL;

	t11 = (x45|((x46+x47)|x48));

	if (t11 != -32659LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 9155U;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -773;
	static volatile int32_t t12 = 267805;

	t12 = (x49|((x50+x51)|x52));

	if (t12 != -32769) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = UINT8_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 1;

	t13 = (x53|((x54+x55)|x56));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int8_t x58 = -1;
	int16_t x59 = INT16_MAX;
	static uint32_t x60 = 30276373U;
	uint32_t t14 = UINT32_MAX;

	t14 = (x57|((x58+x59)|x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = 215802968968LLU;
	uint64_t t15 = 465594316523LLU;

	t15 = (x61|((x62+x63)|x64));

	if (t15 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int32_t x66 = INT32_MAX;
	int32_t x67 = INT32_MIN;
	static uint32_t x68 = UINT32_MAX;

	t16 = (x65|((x66+x67)|x68));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint32_t x70 = 2U;
	int64_t x71 = INT64_MIN;
	uint16_t x72 = 2U;
	int64_t t17 = -573146915814196485LL;

	t17 = (x69|((x70+x71)|x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	uint32_t x75 = UINT32_MAX;
	volatile int64_t t18 = -3LL;

	t18 = (x73|((x74+x75)|x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = -266216693;
	int32_t x79 = INT32_MAX;
	static int32_t t19 = -8;

	t19 = (x77|((x78+x79)|x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x81 = 2U;
	int8_t x83 = INT8_MAX;
	static uint32_t x84 = UINT32_MAX;

	t20 = (x81|((x82+x83)|x84));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	uint16_t x87 = 146U;
	static int64_t t21 = -34191575680219LL;

	t21 = (x85|((x86+x87)|x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 0U;
	int32_t x91 = 3;
	uint64_t x92 = 212667LLU;
	static volatile uint64_t t22 = 34959939597845263LLU;

	t22 = (x89|((x90+x91)|x92));

	if (t22 != 1031931LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x95 = 1;
	uint8_t x96 = 14U;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x93|((x94+x95)|x96));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	int8_t x99 = INT8_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile int64_t t24 = -728090187485LL;

	t24 = (x97|((x98+x99)|x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -55282;
	int8_t x103 = 8;
	volatile int64_t x104 = INT64_MIN;
	int64_t t25 = 127LL;

	t25 = (x101|((x102+x103)|x104));

	if (t25 != -1121LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int16_t x106 = -3503;
	volatile int16_t x107 = 82;
	int32_t x108 = INT32_MIN;
	static int32_t t26 = -294787195;

	t26 = (x105|((x106+x107)|x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	volatile int64_t x110 = INT64_MAX;
	static int8_t x111 = INT8_MIN;
	static int32_t x112 = INT32_MIN;

	t27 = (x109|((x110+x111)|x112));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint64_t x114 = 7153645306605LLU;
	static volatile uint16_t x115 = UINT16_MAX;
	static volatile uint64_t t28 = 56LLU;

	t28 = (x113|((x114+x115)|x116));

	if (t28 != 18446744073709537276LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 27U;
	uint16_t x118 = UINT16_MAX;
	uint16_t x119 = 2537U;
	static volatile uint32_t x120 = UINT32_MAX;
	uint32_t t29 = UINT32_MAX;

	t29 = (x117|((x118+x119)|x120));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 4;
	int64_t x122 = -1LL;
	int64_t x123 = -1LL;
	int8_t x124 = INT8_MIN;

	t30 = (x121|((x122+x123)|x124));

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 424LLU;
	static int8_t x126 = 1;
	volatile int32_t x127 = INT32_MIN;
	int8_t x128 = INT8_MAX;
	volatile uint64_t t31 = 43921LLU;

	t31 = (x125|((x126+x127)|x128));

	if (t31 != 18446744071562068479LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x134 = 202542421;
	int8_t x135 = INT8_MIN;
	int64_t t32 = -512408755247LL;

	t32 = (x133|((x134+x135)|x136));

	if (t32 != -9223372036652233513LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = -2288560954886460389LL;
	int32_t x138 = -1;
	int8_t x139 = INT8_MIN;
	int8_t x140 = -1;
	int64_t t33 = 4550624520601833LL;

	t33 = (x137|((x138+x139)|x140));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MIN;
	volatile int32_t x142 = -259238;
	int16_t x143 = 118;
	volatile int64_t t34 = -208LL;

	t34 = (x141|((x142+x143)|x144));

	if (t34 != -259116LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = -1;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = UINT8_MAX;
	static volatile int8_t x148 = -3;
	volatile int64_t t35 = -30461940371905163LL;

	t35 = (x145|((x146+x147)|x148));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	uint64_t x150 = 52346186113346LLU;
	static int16_t x151 = INT16_MIN;
	volatile uint16_t x152 = UINT16_MAX;
	static volatile uint64_t t36 = UINT64_MAX;

	t36 = (x149|((x150+x151)|x152));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 717U;
	int32_t t37 = 32693;

	t37 = (x153|((x154+x155)|x156));

	if (t37 != -51) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t38 = -577042LL;

	t38 = (x157|((x158+x159)|x160));

	if (t38 != -9223372036854775516LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x161 = 14U;
	int16_t x162 = -332;
	volatile int64_t x163 = INT64_MAX;
	int64_t t39 = 26547025LL;

	t39 = (x161|((x162+x163)|x164));

	if (t39 != 9223372036854775487LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = 26778602302562LL;
	int8_t x167 = -4;
	int64_t t40 = 29930651LL;

	t40 = (x165|((x166+x167)|x168));

	if (t40 != 27465974021759LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x170 = INT64_MIN;
	static uint16_t x171 = 64U;
	int64_t x172 = INT64_MAX;

	t41 = (x169|((x170+x171)|x172));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 17779398022LLU;
	int32_t x174 = -1;
	int16_t x175 = INT16_MIN;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = (x173|((x174+x175)|x176));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = INT64_MAX;
	int16_t x178 = 8188;
	int32_t x179 = INT32_MIN;
	int32_t x180 = -1;
	volatile int64_t t43 = -873LL;

	t43 = (x177|((x178+x179)|x180));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x182 = 28423574430552LL;
	uint8_t x183 = 53U;
	uint8_t x184 = 8U;
	static int64_t t44 = -8492973LL;

	t44 = (x181|((x182+x183)|x184));

	if (t44 != 28423574430607LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x186 = 22U;
	int64_t x187 = INT64_MIN;
	int32_t x188 = -596413;

	t45 = (x185|((x186+x187)|x188));

	if (t45 != -594345LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x191 = 146601669U;

	t46 = (x189|((x190+x191)|x192));

	if (t46 != 4294967039U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -1855LL;
	volatile uint8_t x194 = 5U;
	static volatile uint16_t x195 = 1U;
	int8_t x196 = INT8_MAX;
	int64_t t47 = 243798LL;

	t47 = (x193|((x194+x195)|x196));

	if (t47 != -1793LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x201 = -4;
	volatile int64_t x202 = 89LL;
	volatile int64_t x203 = -414293192950038093LL;
	volatile int32_t x204 = -1;

	t48 = (x201|((x202+x203)|x204));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x207 = INT8_MIN;
	int64_t x208 = 1012542LL;

	t49 = (x205|((x206+x207)|x208));

	if (t49 != 431526772735LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x213 = 1U;
	static uint16_t x214 = 698U;
	int8_t x215 = INT8_MIN;
	uint64_t x216 = 2616003851025958409LLU;
	static volatile uint64_t t50 = 9670LLU;

	t50 = (x213|((x214+x215)|x216));

	if (t50 != 2616003851025958459LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x217 = -16;
	int8_t x220 = INT8_MIN;
	int32_t t51 = 234034;

	t51 = (x217|((x218+x219)|x220));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x221 = -858;
	static int8_t x222 = -1;
	static int64_t x223 = -1LL;

	t52 = (x221|((x222+x223)|x224));

	if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x226 = 12U;
	static int16_t x228 = -1;
	int32_t t53 = -92295;

	t53 = (x225|((x226+x227)|x228));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x229 = 5U;
	int8_t x230 = INT8_MIN;
	int64_t x231 = -3283666641846750867LL;
	volatile int16_t x232 = -1;
	volatile int64_t t54 = -15932LL;

	t54 = (x229|((x230+x231)|x232));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = 180507588116784281LLU;
	int32_t x234 = -1;
	int8_t x235 = 51;
	int16_t x236 = -1;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x233|((x234+x235)|x236));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x237 = 8907313;
	static int64_t x238 = INT64_MIN;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = INT8_MIN;
	volatile int64_t t56 = 10769135326LL;

	t56 = (x237|((x238+x239)|x240));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = UINT16_MAX;
	static int8_t x242 = -31;
	static volatile int32_t t57 = 0;

	t57 = (x241|((x242+x243)|x244));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 1330924LLU;
	int8_t x248 = -1;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (x245|((x246+x247)|x248));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 1183;
	static volatile int16_t x250 = 3925;
	uint64_t x251 = 2214601923758408494LLU;
	uint64_t t59 = 41012648317739310LLU;

	t59 = (x249|((x250+x251)|x252));

	if (t59 != 2214601923758415871LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 0U;
	static int16_t x256 = INT16_MAX;
	static int64_t t60 = -315556701LL;

	t60 = (x253|((x254+x255)|x256));

	if (t60 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = 1;
	volatile uint8_t x259 = UINT8_MAX;
	int32_t t61 = -8311612;

	t61 = (x257|((x258+x259)|x260));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MIN;
	static int32_t x268 = INT32_MIN;

	t62 = (x265|((x266+x267)|x268));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MAX;
	int64_t x270 = -1LL;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = -12499;
	static volatile int64_t t63 = -107LL;

	t63 = (x269|((x270+x271)|x272));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = 41;
	uint16_t x274 = 1673U;
	static volatile int64_t x275 = -1LL;
	int64_t t64 = 171748896LL;

	t64 = (x273|((x274+x275)|x276));

	if (t64 != -81LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x277 = 4U;
	static volatile int8_t x278 = -1;
	int16_t x280 = -39;
	volatile int32_t t65 = 2786;

	t65 = (x277|((x278+x279)|x280));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x289 = INT64_MIN;
	int32_t x290 = -12592531;
	int64_t x292 = INT64_MAX;
	static volatile int64_t t66 = -3388657348LL;

	t66 = (x289|((x290+x291)|x292));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x297 = UINT8_MAX;
	uint8_t x298 = 2U;
	uint32_t x300 = UINT32_MAX;
	uint32_t t67 = UINT32_MAX;

	t67 = (x297|((x298+x299)|x300));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x305 = 1U;
	uint8_t x306 = UINT8_MAX;
	volatile int16_t x308 = -3580;
	volatile int32_t t68 = 16;

	t68 = (x305|((x306+x307)|x308));

	if (t68 != -3113) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x309 = 3051743470LLU;
	int64_t x311 = INT64_MIN;
	int32_t x312 = 1635798;
	uint64_t t69 = 7212614719LLU;

	t69 = (x309|((x310+x311)|x312));

	if (t69 != 9223372039908097534LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x313 = 22048U;
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MAX;
	int32_t x316 = -10;
	volatile int32_t t70 = -6546462;

	t70 = (x313|((x314+x315)|x316));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = INT16_MIN;
	static volatile int32_t x320 = INT32_MIN;
	volatile int32_t t71 = 7510;

	t71 = (x317|((x318+x319)|x320));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t t72 = 304LL;

	t72 = (x321|((x322+x323)|x324));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x325 = INT64_MIN;
	uint16_t x328 = UINT16_MAX;
	int64_t t73 = -7613108718LL;

	t73 = (x325|((x326+x327)|x328));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x329 = UINT32_MAX;
	uint8_t x331 = UINT8_MAX;
	volatile int8_t x332 = INT8_MAX;
	static uint32_t t74 = UINT32_MAX;

	t74 = (x329|((x330+x331)|x332));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x333 = 241LLU;
	uint8_t x335 = UINT8_MAX;
	uint64_t t75 = 448300LLU;

	t75 = (x333|((x334+x335)|x336));

	if (t75 != 13038426868110609139LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x337 = 31;
	int32_t x338 = 1986;
	static int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MIN;
	volatile int64_t t76 = 220061797202275416LL;

	t76 = (x337|((x338+x339)|x340));

	if (t76 != -2147481633LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MIN;
	static int8_t x343 = INT8_MAX;
	int16_t x344 = -210;
	int32_t t77 = 0;

	t77 = (x341|((x342+x343)|x344));

	if (t77 != -129) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	int16_t x347 = -1;
	volatile int8_t x348 = -1;
	static int32_t t78 = -5;

	t78 = (x345|((x346+x347)|x348));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = 14;
	static int32_t x351 = INT32_MIN;
	int16_t x352 = -13;

	t79 = (x349|((x350+x351)|x352));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x354 = INT64_MAX;
	static volatile int8_t x356 = INT8_MIN;
	static int64_t t80 = 11930797069081LL;

	t80 = (x353|((x354+x355)|x356));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x359 = -752163LL;
	volatile int64_t t81 = -5777766239912LL;

	t81 = (x357|((x358+x359)|x360));

	if (t81 != -3LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x361 = 52757798LLU;
	uint16_t x362 = UINT16_MAX;
	volatile uint64_t t82 = 391565657682108543LLU;

	t82 = (x361|((x362+x363)|x364));

	if (t82 != 18446744071614889983LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	static volatile int32_t x367 = -480270061;
	volatile uint8_t x368 = 97U;
	int32_t t83 = -119719;

	t83 = (x365|((x366+x367)|x368));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = -9LL;
	static int16_t x370 = INT16_MAX;
	volatile int64_t t84 = 2648265981428488LL;

	t84 = (x369|((x370+x371)|x372));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x373 = 43;
	int16_t x374 = INT16_MIN;
	int16_t x375 = -74;
	int8_t x376 = -1;
	static volatile int32_t t85 = 2746413;

	t85 = (x373|((x374+x375)|x376));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x377 = 1453039469U;
	int32_t x378 = INT32_MAX;
	uint32_t x380 = 552234U;
	uint32_t t86 = 2051236U;

	t86 = (x377|((x378+x379)|x380));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x381 = INT16_MIN;
	volatile int16_t x382 = INT16_MAX;
	static uint32_t x383 = UINT32_MAX;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x381|((x382+x383)|x384));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x385 = 0;
	volatile int64_t x386 = INT64_MAX;
	static int8_t x388 = 1;
	static volatile uint64_t t88 = 12LLU;

	t88 = (x385|((x386+x387)|x388));

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x389 = 3U;
	int16_t x390 = INT16_MAX;
	static volatile int8_t x391 = -1;
	int64_t x392 = 15787237045LL;
	static int64_t t89 = 119763LL;

	t89 = (x389|((x390+x391)|x392));

	if (t89 != 15787261951LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = UINT16_MAX;
	uint32_t x395 = 0U;
	int32_t x396 = -1;
	volatile int64_t t90 = -9660170LL;

	t90 = (x393|((x394+x395)|x396));

	if (t90 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x398 = INT16_MIN;
	int8_t x399 = -1;
	static int64_t t91 = -151736674424959LL;

	t91 = (x397|((x398+x399)|x400));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x402 = 74111LL;
	int16_t x403 = INT16_MIN;
	int16_t x404 = -1;
	volatile int64_t t92 = -214213096085269LL;

	t92 = (x401|((x402+x403)|x404));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x405 = -1LL;
	int64_t x407 = -1LL;
	uint64_t x408 = 60LLU;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x405|((x406+x407)|x408));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 105U;
	static volatile int64_t x410 = -1LL;
	uint32_t x411 = 875740953U;
	uint8_t x412 = 34U;

	t94 = (x409|((x410+x411)|x412));

	if (t94 != 875741051LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x414 = INT32_MAX;
	volatile int8_t x415 = -57;
	volatile uint32_t x416 = 629818U;
	uint32_t t95 = 10272789U;

	t95 = (x413|((x414+x415)|x416));

	if (t95 != 2147483646U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = -9;
	uint64_t x418 = 6600907332544727LLU;
	uint64_t t96 = UINT64_MAX;

	t96 = (x417|((x418+x419)|x420));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x421 = -1;
	int16_t x422 = -10405;
	static int8_t x423 = -1;
	uint64_t x424 = 11413037LLU;

	t97 = (x421|((x422+x423)|x424));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x427 = INT64_MAX;
	uint16_t x428 = 5U;
	int64_t t98 = -480LL;

	t98 = (x425|((x426+x427)|x428));

	if (t98 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = INT64_MIN;
	int8_t x430 = 3;
	volatile int64_t t99 = 1LL;

	t99 = (x429|((x430+x431)|x432));

	if (t99 != -2147483599LL) { NG(); } else { ; }
	
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

