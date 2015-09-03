#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 12258U;
volatile int32_t x17 = 0;
int32_t x18 = INT32_MAX;
int64_t x19 = INT64_MAX;
uint64_t t3 = 7312894119137215LLU;
volatile uint8_t x33 = 48U;
uint8_t x36 = 3U;
static int64_t t5 = -164956518084753964LL;
int16_t x78 = -1;
volatile uint32_t x97 = 1734926U;
volatile uint16_t x107 = 1289U;
volatile int64_t t15 = -2624LL;
volatile uint32_t x138 = 152U;
uint16_t x139 = 3591U;
uint32_t t16 = 116370381U;
int16_t x152 = INT16_MAX;
uint64_t x155 = 156115139547233045LLU;
int64_t x172 = 6909229539LL;
uint32_t x173 = 6447U;
volatile int64_t x177 = INT64_MIN;
static volatile int16_t x179 = INT16_MIN;
volatile int8_t x180 = -1;
static volatile int64_t t23 = 182LL;
volatile int8_t x190 = INT8_MIN;
int32_t x192 = -563859;
uint16_t x196 = 821U;
int8_t x197 = 10;
int16_t x208 = INT16_MIN;
volatile uint64_t t27 = 621364881228LLU;
int16_t x214 = -11239;
volatile uint32_t x215 = 3U;
int16_t x217 = 0;
uint64_t t29 = 208797351LLU;
uint32_t x225 = 440U;
static uint64_t t33 = 21026LLU;
uint32_t x251 = UINT32_MAX;
static int16_t x258 = -1;
volatile uint32_t x259 = 20445039U;
volatile uint32_t t36 = 31185248U;
volatile uint64_t t37 = 392582946284899996LLU;
volatile uint64_t t42 = 6728312975589204LLU;
uint32_t x297 = 199U;
static int64_t x298 = INT64_MAX;
uint64_t x299 = UINT64_MAX;
int8_t x309 = INT8_MIN;
int16_t x312 = -1;
int16_t x323 = INT16_MIN;
static volatile uint8_t x324 = 12U;
volatile uint16_t x330 = UINT16_MAX;
static int8_t x331 = INT8_MIN;
uint8_t x342 = 73U;
volatile uint32_t x343 = 110015286U;
int64_t x344 = -1LL;
int64_t t47 = 3451LL;
static int64_t x349 = -1LL;
int16_t x352 = 8551;
int32_t x376 = -1;
uint8_t x377 = UINT8_MAX;
int8_t x385 = -2;
static volatile int16_t x387 = -1;
uint32_t x390 = 42603795U;
int8_t x429 = INT8_MIN;
int64_t x430 = INT64_MIN;
int32_t x431 = INT32_MIN;
static int32_t x437 = INT32_MAX;
int64_t x543 = -6773LL;
volatile uint64_t t66 = 221745468934LLU;
int16_t x575 = INT16_MAX;
uint16_t x603 = 8509U;
int64_t x628 = 788902483LL;
int16_t x637 = INT16_MAX;
static int64_t x671 = INT64_MAX;
int64_t x685 = INT64_MIN;
int8_t x687 = -4;
int64_t x711 = INT64_MAX;
uint32_t t83 = 12U;
int16_t x727 = 1482;
int64_t x729 = INT64_MIN;
uint8_t x732 = UINT8_MAX;
int32_t x742 = 492838716;
static int16_t x743 = INT16_MIN;
int32_t x744 = -248344510;
static volatile int32_t t88 = 57;
static int32_t x754 = -107623;
static volatile int32_t x756 = -1;
uint8_t x767 = 0U;
int64_t x770 = INT64_MAX;
volatile int64_t x775 = -1LL;
int8_t x793 = -40;
int16_t x824 = -1;


void f0(void) {
	static int64_t x1 = -1LL;
	volatile int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	static uint8_t x4 = 110U;
	int64_t t0 = 253910640897LL;

	t0 = (x1%((x2-x3)/x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	uint16_t x10 = 1167U;
	int16_t x12 = -5;
	int32_t t1 = -53520;

	t1 = (x9%((x10-x11)/x12));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x20 = 83206LL;
	int64_t t2 = -263LL;

	t2 = (x17%((x18-x19)/x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = -1;
	static volatile uint64_t x26 = 19579956893LLU;
	volatile int16_t x27 = -9733;
	int8_t x28 = INT8_MAX;

	t3 = (x25%((x26-x27)/x28));

	if (t3 != 121563880LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x34 = INT16_MIN;
	int32_t x35 = -210451745;
	int32_t t4 = 9002882;

	t4 = (x33%((x34-x35)/x36));

	if (t4 != 48) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -970895;
	static int64_t x44 = 16007850900LL;

	t5 = (x41%((x42-x43)/x44));

	if (t5 != -100676528LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x57 = 61578136380LL;
	volatile int32_t x58 = INT32_MIN;
	volatile int64_t x59 = 25027463338696LL;
	uint16_t x60 = UINT16_MAX;
	int64_t t6 = -392872698342LL;

	t6 = (x57%((x58-x59)/x60));

	if (t6 != 87828361LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x61 = INT16_MIN;
	static int16_t x62 = -1;
	int64_t x63 = INT64_MAX;
	static int64_t x64 = INT64_MAX;
	volatile int64_t t7 = 2290853LL;

	t7 = (x61%((x62-x63)/x64));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x77 = 15609U;
	int8_t x79 = INT8_MAX;
	static uint64_t x80 = 900258299340572LLU;
	uint64_t t8 = 313671089LLU;

	t8 = (x77%((x78-x79)/x80));

	if (t8 != 15609LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x93 = INT32_MAX;
	volatile uint64_t x94 = 24LLU;
	int8_t x95 = 9;
	uint8_t x96 = 13U;
	uint64_t t9 = 127419LLU;

	t9 = (x93%((x94-x95)/x96));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x98 = INT8_MIN;
	volatile int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MAX;
	volatile uint32_t t10 = 7508U;

	t10 = (x97%((x98-x99)/x100));

	if (t10 != 30964U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x105 = 0U;
	static int64_t x106 = -1LL;
	volatile int8_t x108 = 8;
	static int64_t t11 = -982312LL;

	t11 = (x105%((x106-x107)/x108));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x113 = 477964171LLU;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = UINT16_MAX;
	int16_t x116 = -1;
	uint64_t t12 = 79680737046620205LLU;

	t12 = (x113%((x114-x115)/x116));

	if (t12 != 14985LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x117 = INT8_MAX;
	static uint32_t x118 = UINT32_MAX;
	static int8_t x119 = 0;
	static volatile uint8_t x120 = UINT8_MAX;
	uint32_t t13 = 1422U;

	t13 = (x117%((x118-x119)/x120));

	if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x129 = INT64_MAX;
	static int16_t x130 = -82;
	int64_t x131 = -948068021249608LL;
	static int8_t x132 = 23;
	volatile int64_t t14 = -16383LL;

	t14 = (x129%((x130-x131)/x132));

	if (t14 != 30461605724704LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	volatile int32_t x135 = 0;
	int64_t x136 = 63LL;

	t15 = (x133%((x134-x135)/x136));

	if (t15 != -8LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x137 = INT16_MIN;
	int32_t x140 = INT32_MAX;

	t16 = (x137%((x138-x139)/x140));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x149 = INT16_MAX;
	int32_t x150 = -22621;
	uint16_t x151 = UINT16_MAX;
	static volatile int32_t t17 = -367;

	t17 = (x149%((x150-x151)/x152));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x153 = 4512443U;
	int64_t x154 = -1LL;
	int8_t x156 = 1;
	volatile uint64_t t18 = 21717207LLU;

	t18 = (x153%((x154-x155)/x156));

	if (t18 != 4512443LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x161 = 64247571280LLU;
	static int64_t x162 = 26789366321851937LL;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 7U;
	volatile uint64_t t19 = 338246543LLU;

	t19 = (x161%((x162-x163)/x164));

	if (t19 != 64247571280LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x165 = INT8_MAX;
	int64_t x166 = -1LL;
	volatile int16_t x167 = INT16_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t20 = 7LL;

	t20 = (x165%((x166-x167)/x168));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x169 = INT8_MAX;
	int64_t x170 = -25895498534111227LL;
	volatile uint64_t x171 = UINT64_MAX;
	volatile uint64_t t21 = 3629524LLU;

	t21 = (x169%((x170-x171)/x172));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x174 = 4;
	int64_t x175 = INT64_MAX;
	static int16_t x176 = -1004;
	static volatile int64_t t22 = -36493529320LL;

	t22 = (x173%((x174-x175)/x176));

	if (t22 != 6447LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x178 = -225655;

	t23 = (x177%((x178-x179)/x180));

	if (t23 != -50329LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x189 = -207295812738LL;
	int64_t x191 = -6581188211527LL;
	volatile int64_t t24 = -3188789144966LL;

	t24 = (x189%((x190-x191)/x192));

	if (t24 != -6580578LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x193 = 0U;
	int64_t x194 = INT64_MIN;
	static int32_t x195 = -1;
	static volatile int64_t t25 = 1LL;

	t25 = (x193%((x194-x195)/x196));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x198 = INT64_MIN;
	static int32_t x199 = INT32_MIN;
	int16_t x200 = -14660;
	volatile int64_t t26 = -1323774862648599891LL;

	t26 = (x197%((x198-x199)/x200));

	if (t26 != 10LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x205 = 251629;
	static uint64_t x206 = UINT64_MAX;
	static volatile uint8_t x207 = 13U;

	t27 = (x205%((x206-x207)/x208));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x213 = INT32_MAX;
	int16_t x216 = INT16_MAX;
	uint32_t t28 = 200U;

	t28 = (x213%((x214-x215)/x216));

	if (t28 != 81922U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x218 = INT8_MAX;
	uint64_t x219 = 4156LLU;
	static int8_t x220 = 1;

	t29 = (x217%((x218-x219)/x220));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x222 = UINT32_MAX;
	uint64_t x223 = 44909560614509LLU;
	uint16_t x224 = UINT16_MAX;
	volatile uint64_t t30 = 3297LLU;

	t30 = (x221%((x222-x223)/x224));

	if (t30 != 163191926097089LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MAX;
	uint32_t t31 = 0U;

	t31 = (x225%((x226-x227)/x228));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x233 = -1;
	uint16_t x234 = 1U;
	static int64_t x235 = -1LL;
	static int32_t x236 = -1;
	static volatile int64_t t32 = 149LL;

	t32 = (x233%((x234-x235)/x236));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	static int32_t x247 = INT32_MAX;
	static uint64_t x248 = 29727283350717421LLU;

	t33 = (x245%((x246-x247)/x248));

	if (t33 != 108LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x249 = 3U;
	int16_t x250 = INT16_MIN;
	uint16_t x252 = 29454U;
	volatile uint32_t t34 = 13U;

	t34 = (x249%((x250-x251)/x252));

	if (t34 != 3U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x253 = 105U;
	uint64_t x254 = 48508111367204695LLU;
	uint8_t x255 = 7U;
	int8_t x256 = INT8_MAX;
	uint64_t t35 = 450027392362LLU;

	t35 = (x253%((x254-x255)/x256));

	if (t35 != 105LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x257 = UINT8_MAX;
	static volatile int32_t x260 = INT32_MAX;

	t36 = (x257%((x258-x259)/x260));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x261 = INT16_MAX;
	uint64_t x262 = 3137LLU;
	uint64_t x263 = 1611546LLU;
	static int8_t x264 = INT8_MAX;

	t37 = (x261%((x262-x263)/x264));

	if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MAX;
	volatile int16_t x271 = INT16_MAX;
	volatile uint64_t x272 = 774932588234038693LLU;
	static uint64_t t38 = 586879242149778405LLU;

	t38 = (x269%((x270-x271)/x272));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x273 = -1;
	int64_t x274 = INT64_MAX;
	int32_t x275 = INT32_MAX;
	uint16_t x276 = 9U;
	volatile int64_t t39 = -3858639208676LL;

	t39 = (x273%((x274-x275)/x276));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x277 = -27;
	volatile int64_t x278 = -2377LL;
	int64_t x279 = INT64_MIN;
	int8_t x280 = -1;
	volatile int64_t t40 = -875189481666298731LL;

	t40 = (x277%((x278-x279)/x280));

	if (t40 != -27LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x285 = 45;
	static int16_t x286 = INT16_MAX;
	uint32_t x287 = 155U;
	uint64_t x288 = 3LLU;
	volatile uint64_t t41 = 11285878413461LLU;

	t41 = (x285%((x286-x287)/x288));

	if (t41 != 45LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x289 = INT8_MAX;
	int16_t x290 = -1;
	static uint16_t x291 = UINT16_MAX;
	uint64_t x292 = 37230156708LLU;

	t42 = (x289%((x290-x291)/x292));

	if (t42 != 127LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x300 = INT64_MIN;
	uint64_t t43 = 101LLU;

	t43 = (x297%((x298-x299)/x300));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x310 = INT64_MIN;
	static int8_t x311 = INT8_MIN;
	int64_t t44 = 26LL;

	t44 = (x309%((x310-x311)/x312));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x321 = 40;
	int8_t x322 = INT8_MAX;
	int32_t t45 = -41;

	t45 = (x321%((x322-x323)/x324));

	if (t45 != 40) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x329 = UINT16_MAX;
	uint16_t x332 = 6U;
	static int32_t t46 = 3;

	t46 = (x329%((x330-x331)/x332));

	if (t46 != 10820) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x341 = 1;

	t47 = (x341%((x342-x343)/x344));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x350 = -1LL;
	static uint32_t x351 = UINT32_MAX;
	int64_t t48 = 24789065293787LL;

	t48 = (x349%((x350-x351)/x352));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x353 = INT8_MIN;
	volatile uint32_t x354 = 2924006U;
	int16_t x355 = -1;
	static uint8_t x356 = UINT8_MAX;
	volatile uint32_t t49 = 6U;

	t49 = (x353%((x354-x355)/x356));

	if (t49 != 9956U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x365 = 2729724128322062LLU;
	static int64_t x366 = INT64_MAX;
	volatile uint8_t x367 = 0U;
	int8_t x368 = INT8_MIN;
	uint64_t t50 = 0LLU;

	t50 = (x365%((x366-x367)/x368));

	if (t50 != 2729724128322062LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x373 = INT8_MAX;
	uint8_t x374 = 11U;
	int8_t x375 = INT8_MIN;
	volatile int32_t t51 = 31;

	t51 = (x373%((x374-x375)/x376));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x378 = 13203U;
	uint16_t x379 = UINT16_MAX;
	uint32_t x380 = 522422382U;
	static uint32_t t52 = 45253410U;

	t52 = (x377%((x378-x379)/x380));

	if (t52 != 7U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x386 = INT16_MIN;
	uint8_t x388 = 21U;
	volatile int32_t t53 = -28;

	t53 = (x385%((x386-x387)/x388));

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x389 = UINT32_MAX;
	int64_t x391 = -72223654097357090LL;
	static volatile int16_t x392 = 20;
	volatile int64_t t54 = -12249LL;

	t54 = (x389%((x390-x391)/x392));

	if (t54 != 4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x405 = -24;
	int8_t x406 = INT8_MAX;
	volatile uint8_t x407 = 95U;
	int64_t x408 = -1LL;
	volatile int64_t t55 = 869LL;

	t55 = (x405%((x406-x407)/x408));

	if (t55 != -24LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x432 = UINT8_MAX;
	volatile int64_t t56 = 56746274325999360LL;

	t56 = (x429%((x430-x431)/x432));

	if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x438 = 33U;
	int8_t x439 = -3;
	int8_t x440 = -3;
	int32_t t57 = -406765484;

	t57 = (x437%((x438-x439)/x440));

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x441 = -12684;
	int8_t x442 = INT8_MIN;
	uint16_t x443 = UINT16_MAX;
	static int16_t x444 = INT16_MAX;
	int32_t t58 = -1349;

	t58 = (x441%((x442-x443)/x444));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x445 = -1;
	uint8_t x446 = 25U;
	int32_t x447 = 1071858;
	volatile int8_t x448 = 12;
	volatile int32_t t59 = 3700285;

	t59 = (x445%((x446-x447)/x448));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x453 = 184U;
	int64_t x454 = -1LL;
	uint16_t x455 = 1U;
	uint64_t x456 = 161431945801LLU;
	uint64_t t60 = 38319545LLU;

	t60 = (x453%((x454-x455)/x456));

	if (t60 != 184LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x469 = INT16_MIN;
	int16_t x470 = INT16_MIN;
	int16_t x471 = INT16_MAX;
	int16_t x472 = INT16_MAX;
	volatile int32_t t61 = 157;

	t61 = (x469%((x470-x471)/x472));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x477 = -2;
	int32_t x478 = INT32_MAX;
	static uint16_t x479 = 1U;
	int8_t x480 = INT8_MAX;
	volatile int32_t t62 = 23153240;

	t62 = (x477%((x478-x479)/x480));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x497 = 11U;
	volatile int16_t x498 = INT16_MAX;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MAX;
	volatile uint32_t t63 = 12229U;

	t63 = (x497%((x498-x499)/x500));

	if (t63 != 11U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x529 = INT64_MIN;
	volatile int32_t x530 = 6613;
	uint64_t x531 = UINT64_MAX;
	uint32_t x532 = 41U;
	uint64_t t64 = 19674LLU;

	t64 = (x529%((x530-x531)/x532));

	if (t64 != 141LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x541 = INT32_MAX;
	volatile uint32_t x542 = UINT32_MAX;
	int64_t x544 = -1LL;
	volatile int64_t t65 = 32LL;

	t65 = (x541%((x542-x543)/x544));

	if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x545 = 183960LLU;
	int8_t x546 = INT8_MIN;
	int32_t x547 = -786068361;
	uint16_t x548 = 224U;

	t66 = (x545%((x546-x547)/x548));

	if (t66 != 183960LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x561 = 61;
	int8_t x562 = INT8_MIN;
	volatile int16_t x563 = -4787;
	static volatile int8_t x564 = 46;
	int32_t t67 = -1948;

	t67 = (x561%((x562-x563)/x564));

	if (t67 != 61) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x573 = INT8_MAX;
	int16_t x574 = 56;
	static uint16_t x576 = 1U;
	int32_t t68 = -4017213;

	t68 = (x573%((x574-x575)/x576));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x585 = 15500724675125877LLU;
	int16_t x586 = -167;
	static volatile int8_t x587 = INT8_MAX;
	int8_t x588 = 4;
	volatile uint64_t t69 = 0LLU;

	t69 = (x585%((x586-x587)/x588));

	if (t69 != 15500724675125877LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x597 = INT32_MIN;
	int32_t x598 = INT32_MIN;
	int16_t x599 = INT16_MIN;
	uint32_t x600 = 13U;
	volatile uint32_t t70 = 480U;

	t70 = (x597%((x598-x599)/x600));

	if (t70 != 165160808U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x601 = INT64_MAX;
	int16_t x602 = 9;
	uint16_t x604 = 6882U;
	static int64_t t71 = -162814750588708LL;

	t71 = (x601%((x602-x603)/x604));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x613 = INT8_MIN;
	int16_t x614 = INT16_MIN;
	uint8_t x615 = UINT8_MAX;
	int32_t x616 = -178;
	static int32_t t72 = -336993;

	t72 = (x613%((x614-x615)/x616));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x625 = 25U;
	int64_t x626 = -1LL;
	uint32_t x627 = UINT32_MAX;
	int64_t t73 = -13541003430392LL;

	t73 = (x625%((x626-x627)/x628));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x633 = INT8_MAX;
	int16_t x634 = INT16_MIN;
	int32_t x635 = 1;
	int16_t x636 = 2;
	volatile int32_t t74 = -21721;

	t74 = (x633%((x634-x635)/x636));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x638 = INT64_MAX;
	uint32_t x639 = UINT32_MAX;
	int32_t x640 = -1;
	volatile int64_t t75 = -30LL;

	t75 = (x637%((x638-x639)/x640));

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x669 = -2;
	uint16_t x670 = 587U;
	static uint32_t x672 = 6084254U;
	int64_t t76 = -5811298412LL;

	t76 = (x669%((x670-x671)/x672));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x677 = UINT32_MAX;
	int8_t x678 = -1;
	int32_t x679 = INT32_MIN;
	int32_t x680 = 372270;
	static volatile uint32_t t77 = 184740958U;

	t77 = (x677%((x678-x679)/x680));

	if (t77 != 4903U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x686 = INT16_MAX;
	volatile uint8_t x688 = 4U;
	static volatile int64_t t78 = 19952952LL;

	t78 = (x685%((x686-x687)/x688));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x693 = UINT32_MAX;
	volatile int16_t x694 = -26;
	uint64_t x695 = 1299200119LLU;
	uint8_t x696 = 81U;
	volatile uint64_t t79 = 658520175LLU;

	t79 = (x693%((x694-x695)/x696));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x697 = 32;
	uint16_t x698 = 24672U;
	static int16_t x699 = -1;
	int32_t x700 = -1;
	static volatile int32_t t80 = -2376;

	t80 = (x697%((x698-x699)/x700));

	if (t80 != 32) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x705 = 4152655994180722747LL;
	int64_t x706 = 6754826557LL;
	volatile uint8_t x707 = 0U;
	static int8_t x708 = INT8_MIN;
	volatile int64_t t81 = -92554LL;

	t81 = (x705%((x706-x707)/x708));

	if (t81 != 5126917LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x709 = INT32_MAX;
	uint64_t x710 = 153LLU;
	int32_t x712 = 305;
	static volatile uint64_t t82 = 6297118LLU;

	t82 = (x709%((x710-x711)/x712));

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x717 = -6;
	volatile uint32_t x718 = UINT32_MAX;
	static int16_t x719 = INT16_MAX;
	int32_t x720 = -96565;

	t83 = (x717%((x718-x719)/x720));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x725 = -3;
	static int16_t x726 = -1;
	int8_t x728 = INT8_MIN;
	int32_t t84 = 716829033;

	t84 = (x725%((x726-x727)/x728));

	if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x730 = INT16_MIN;
	int8_t x731 = -7;
	static volatile int64_t t85 = -65LL;

	t85 = (x729%((x730-x731)/x732));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x733 = 24096113407129859LLU;
	int16_t x734 = INT16_MIN;
	volatile int32_t x735 = INT32_MIN;
	static uint8_t x736 = UINT8_MAX;
	volatile uint64_t t86 = 2292879761442591879LLU;

	t86 = (x733%((x734-x735)/x736));

	if (t86 != 325891LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x737 = INT32_MAX;
	uint16_t x738 = 3U;
	volatile int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MAX;
	volatile int64_t t87 = -87523547LL;

	t87 = (x737%((x738-x739)/x740));

	if (t87 != 2147483647LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x741 = INT32_MIN;

	t88 = (x741%((x742-x743)/x744));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x745 = 18;
	uint32_t x746 = 0U;
	uint16_t x747 = 24U;
	uint16_t x748 = 1U;
	volatile uint32_t t89 = 769511432U;

	t89 = (x745%((x746-x747)/x748));

	if (t89 != 18U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x753 = 1764361U;
	uint16_t x755 = UINT16_MAX;
	uint32_t t90 = 3U;

	t90 = (x753%((x754-x755)/x756));

	if (t90 != 32781U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x765 = -1LL;
	int8_t x766 = -1;
	uint32_t x768 = 13U;
	volatile int64_t t91 = 14LL;

	t91 = (x765%((x766-x767)/x768));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x769 = INT64_MAX;
	static uint16_t x771 = 299U;
	int8_t x772 = INT8_MIN;
	int64_t t92 = -3947LL;

	t92 = (x769%((x770-x771)/x772));

	if (t92 != 383LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x773 = UINT32_MAX;
	int16_t x774 = -14;
	static int64_t x776 = -1LL;
	int64_t t93 = 225558508784611LL;

	t93 = (x773%((x774-x775)/x776));

	if (t93 != 8LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x785 = INT32_MAX;
	static uint32_t x786 = 220U;
	int64_t x787 = -1LL;
	int8_t x788 = 2;
	int64_t t94 = 51428250840LL;

	t94 = (x785%((x786-x787)/x788));

	if (t94 != 67LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x794 = 1;
	volatile int8_t x795 = -6;
	int64_t x796 = -1LL;
	static volatile int64_t t95 = -253300660430LL;

	t95 = (x793%((x794-x795)/x796));

	if (t95 != -5LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x805 = UINT16_MAX;
	int16_t x806 = INT16_MIN;
	static uint32_t x807 = 48U;
	uint32_t x808 = 3921U;
	static volatile uint32_t t96 = 21U;

	t96 = (x805%((x806-x807)/x808));

	if (t96 != 65535U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x809 = -1;
	int8_t x810 = 10;
	int64_t x811 = -1LL;
	int8_t x812 = -6;
	int64_t t97 = 571LL;

	t97 = (x809%((x810-x811)/x812));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x813 = 0;
	int64_t x814 = INT64_MAX;
	uint16_t x815 = 15U;
	int16_t x816 = 6341;
	int64_t t98 = -354365317559672775LL;

	t98 = (x813%((x814-x815)/x816));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x821 = 2;
	int16_t x822 = INT16_MIN;
	uint16_t x823 = 9930U;
	volatile int32_t t99 = 15247;

	t99 = (x821%((x822-x823)/x824));

	if (t99 != 2) { NG(); } else { ; }
	
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

