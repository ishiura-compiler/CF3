#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = UINT32_MAX;
volatile uint64_t t0 = 475LLU;
int16_t x23 = INT16_MAX;
int32_t t2 = 1;
int8_t x62 = 1;
int32_t x63 = 7344649;
uint8_t x64 = 6U;
int16_t x83 = 6063;
uint64_t t10 = 1274238022LLU;
uint64_t t12 = 706583384055156LLU;
int8_t x153 = -6;
static uint32_t x154 = 123U;
int16_t x173 = 1130;
int64_t x180 = -29LL;
int64_t t20 = 5LL;
int8_t x190 = INT8_MIN;
uint32_t x191 = 14111772U;
int64_t x192 = -1LL;
int16_t x195 = -1;
static volatile int32_t t22 = -42297;
int64_t x233 = -32752042450286520LL;
static int32_t x236 = -1;
volatile int64_t x246 = INT64_MAX;
int32_t x249 = -142;
static uint8_t x253 = 31U;
uint8_t x254 = UINT8_MAX;
static int64_t x255 = 1044LL;
int8_t x256 = INT8_MIN;
uint64_t x272 = 64215125LLU;
int8_t x303 = 1;
volatile uint16_t x304 = 1U;
int32_t x306 = -15029;
int8_t x314 = INT8_MIN;
int32_t x336 = INT32_MAX;
int8_t x346 = 1;
uint32_t x351 = 296U;
static uint32_t t38 = 662929969U;
int32_t x377 = 208403;
volatile uint64_t x378 = 1832341335921457LLU;
uint16_t x380 = UINT16_MAX;
uint64_t x402 = UINT64_MAX;
int16_t x403 = 397;
volatile uint16_t x404 = 1733U;
static volatile uint64_t t42 = 851503480LLU;
int8_t x411 = -1;
int8_t x447 = -1;
uint32_t x462 = 1386646697U;
int16_t x472 = INT16_MAX;
uint32_t x481 = 1U;
uint16_t x482 = UINT16_MAX;
int16_t x497 = 1;
static int32_t x525 = INT32_MIN;
uint8_t x528 = 19U;
static uint8_t x538 = 26U;
uint64_t x545 = 954LLU;
static int64_t x548 = -1LL;
static int8_t x555 = INT8_MAX;
uint64_t x560 = 161036952862744087LLU;
int16_t x567 = -1;
int32_t x586 = 66398328;
static int8_t x597 = INT8_MIN;
int64_t x619 = 366549LL;
int64_t t66 = 15811627650396574LL;
int16_t x623 = -1;
int8_t x624 = -1;
int32_t t67 = 1730;
uint64_t x640 = 448264158643765LLU;
int64_t x641 = INT64_MIN;
int64_t x644 = INT64_MIN;
int8_t x651 = INT8_MIN;
int16_t x673 = INT16_MIN;
int16_t x713 = INT16_MIN;
static int32_t x729 = INT32_MIN;
int32_t t76 = -310;
static volatile int8_t x737 = INT8_MIN;
volatile int8_t x752 = INT8_MIN;
volatile int32_t t79 = 1514346;
int32_t x767 = -1;
static int32_t x779 = INT32_MIN;
uint16_t x782 = UINT16_MAX;
static int64_t x819 = 43770907047LL;
int32_t t90 = 69223;
int16_t x888 = INT16_MIN;
int32_t x901 = INT32_MIN;
int32_t x922 = 3372498;
int16_t x924 = -1023;
volatile uint64_t x926 = 7085983884331748701LLU;
volatile int64_t t96 = -1264LL;
volatile uint32_t t97 = 108U;
static int8_t x996 = INT8_MIN;
static int64_t x1000 = 1415LL;


void f0(void) {
	volatile uint64_t x2 = 450303642411LLU;
	static uint64_t x3 = UINT64_MAX;
	uint32_t x4 = 126U;

	t0 = (x1/((x2*x3)/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = 29;
	uint32_t x18 = 421214001U;
	static int8_t x19 = INT8_MIN;
	volatile int32_t x20 = 104382;
	uint32_t t1 = 39054U;

	t1 = (x17/((x18*x19)/x20));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x21 = INT32_MIN;
	volatile int16_t x22 = INT16_MAX;
	int16_t x24 = 238;

	t2 = (x21/((x22*x23)/x24));

	if (t2 != -476) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = 1;
	int16_t x34 = INT16_MAX;
	int8_t x35 = INT8_MIN;
	volatile int32_t x36 = -1;
	volatile int32_t t3 = -2103751;

	t3 = (x33/((x34*x35)/x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x49 = 11069LL;
	int8_t x50 = -3;
	int16_t x51 = INT16_MAX;
	uint64_t x52 = 54806LLU;
	volatile uint64_t t4 = 132514443LLU;

	t4 = (x49/((x50*x51)/x52));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x61 = INT32_MAX;
	volatile int32_t t5 = 274081627;

	t5 = (x61/((x62*x63)/x64));

	if (t5 != 1754) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = -48291263LL;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t x68 = 4578;
	int64_t t6 = -255013785398958LL;

	t6 = (x65/((x66*x67)/x68));

	if (t6 != 203580LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	volatile int8_t x75 = INT8_MIN;
	static int8_t x76 = 57;
	int32_t t7 = 0;

	t7 = (x73/((x74*x75)/x76));

	if (t7 != -1073741824) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x77 = 4163;
	int64_t x78 = -1834562528LL;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;
	static volatile int64_t t8 = 884576703794LL;

	t8 = (x77/((x78*x79)/x80));

	if (t8 != -38LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x81 = -1LL;
	uint16_t x82 = 23U;
	int16_t x84 = INT16_MIN;
	static int64_t t9 = 30788061LL;

	t9 = (x81/((x82*x83)/x84));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x97 = 45U;
	uint32_t x98 = 66U;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 13LLU;

	t10 = (x97/((x98*x99)/x100));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 47003738U;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = INT8_MAX;
	volatile uint32_t t11 = 742U;

	t11 = (x105/((x106*x107)/x108));

	if (t11 != 303U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x125 = INT8_MIN;
	uint64_t x126 = 122242108214494LLU;
	static volatile int32_t x127 = INT32_MIN;
	uint8_t x128 = 42U;

	t12 = (x125/((x126*x127)/x128));

	if (t12 != 288LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x129 = 6U;
	int8_t x130 = 10;
	int16_t x131 = -3086;
	int16_t x132 = -14564;
	static volatile uint32_t t13 = 35571580U;

	t13 = (x129/((x130*x131)/x132));

	if (t13 != 3U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x133 = 59160595LLU;
	static int8_t x134 = -6;
	static int8_t x135 = INT8_MAX;
	uint16_t x136 = 3U;
	volatile uint64_t t14 = 485LLU;

	t14 = (x133/((x134*x135)/x136));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x155 = 47U;
	int16_t x156 = 346;
	uint32_t t15 = 25032292U;

	t15 = (x153/((x154*x155)/x156));

	if (t15 != 268435455U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x161 = -1;
	int64_t x162 = 24LL;
	static volatile uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x161/((x162*x163)/x164));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x165 = -247;
	static uint32_t x166 = 11U;
	int32_t x167 = -1;
	uint16_t x168 = 11U;
	uint32_t t17 = 59293399U;

	t17 = (x165/((x166*x167)/x168));

	if (t17 != 10U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x174 = UINT16_MAX;
	uint8_t x175 = 7U;
	uint16_t x176 = UINT16_MAX;
	int32_t t18 = -15819942;

	t18 = (x173/((x174*x175)/x176));

	if (t18 != 161) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x177 = UINT32_MAX;
	volatile int32_t x178 = -1;
	uint16_t x179 = 13568U;
	volatile int64_t t19 = 189459601522526LL;

	t19 = (x177/((x178*x179)/x180));

	if (t19 != 9196932LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x185 = INT16_MIN;
	int8_t x186 = INT8_MAX;
	int32_t x187 = -235583;
	volatile int64_t x188 = -1LL;

	t20 = (x185/((x186*x187)/x188));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x189 = 82U;
	static volatile int64_t t21 = -759492771339LL;

	t21 = (x189/((x190*x191)/x192));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x193 = 832876543;
	int32_t x194 = 1202;
	int32_t x196 = -1;

	t22 = (x193/((x194*x195)/x196));

	if (t22 != 692908) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x213 = 8U;
	int32_t x214 = -1;
	int16_t x215 = -32;
	int32_t x216 = -1;
	volatile int32_t t23 = 88046000;

	t23 = (x213/((x214*x215)/x216));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x234 = -1;
	int8_t x235 = -1;
	static volatile int64_t t24 = 12997672304LL;

	t24 = (x233/((x234*x235)/x236));

	if (t24 != 32752042450286520LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x241 = -1;
	volatile uint16_t x242 = UINT16_MAX;
	static int16_t x243 = 1;
	int8_t x244 = INT8_MIN;
	static int32_t t25 = -5265;

	t25 = (x241/((x242*x243)/x244));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x245 = 116U;
	int16_t x247 = -1;
	uint8_t x248 = 50U;
	volatile int64_t t26 = 9750222449LL;

	t26 = (x245/((x246*x247)/x248));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x250 = 556289144720076LLU;
	volatile int16_t x251 = -28;
	volatile int64_t x252 = INT64_MIN;
	uint64_t t27 = 7257LLU;

	t27 = (x249/((x250*x251)/x252));

	if (t27 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t t28 = 131642476863057292LL;

	t28 = (x253/((x254*x255)/x256));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x269 = INT64_MIN;
	uint8_t x270 = UINT8_MAX;
	uint64_t x271 = 24495268692310LLU;
	uint64_t t29 = 88644371012110LLU;

	t29 = (x269/((x270*x271)/x272));

	if (t29 != 94821030717LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x301 = -1LL;
	int16_t x302 = -712;
	volatile int64_t t30 = -2961648062919LL;

	t30 = (x301/((x302*x303)/x304));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x305 = INT8_MAX;
	static volatile int16_t x307 = INT16_MAX;
	int8_t x308 = 1;
	int32_t t31 = -9919;

	t31 = (x305/((x306*x307)/x308));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x309 = 3;
	static int64_t x310 = -11823057555804296LL;
	uint16_t x311 = 110U;
	int16_t x312 = -1;
	static int64_t t32 = -5419789040602182LL;

	t32 = (x309/((x310*x311)/x312));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x313 = INT64_MIN;
	static int8_t x315 = 19;
	volatile uint32_t x316 = 800695853U;
	int64_t t33 = -4144274LL;

	t33 = (x313/((x314*x315)/x316));

	if (t33 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x317 = INT8_MIN;
	static int64_t x318 = -1LL;
	static uint8_t x319 = 27U;
	int8_t x320 = 1;
	volatile int64_t t34 = -1116500689028548542LL;

	t34 = (x317/((x318*x319)/x320));

	if (t34 != 4LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x325 = INT8_MIN;
	int16_t x326 = 547;
	uint64_t x327 = UINT64_MAX;
	uint64_t x328 = 421LLU;
	volatile uint64_t t35 = 4289505923717074781LLU;

	t35 = (x325/((x326*x327)/x328));

	if (t35 != 421LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x333 = INT16_MIN;
	uint64_t x334 = 669788469274367777LLU;
	uint8_t x335 = UINT8_MAX;
	volatile uint64_t t36 = 2845LLU;

	t36 = (x333/((x334*x335)/x336));

	if (t36 != 8295512035LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x345 = 24U;
	volatile uint8_t x347 = UINT8_MAX;
	volatile int16_t x348 = -1;
	static int32_t t37 = -1349796;

	t37 = (x345/((x346*x347)/x348));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x349 = 250206;
	int32_t x350 = -107173;
	static uint8_t x352 = UINT8_MAX;

	t38 = (x349/((x350*x351)/x352));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x361 = 5U;
	uint16_t x362 = UINT16_MAX;
	volatile int8_t x363 = -1;
	uint8_t x364 = UINT8_MAX;
	int32_t t39 = -4021;

	t39 = (x361/((x362*x363)/x364));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x379 = -7820659LL;
	volatile uint64_t t40 = 0LLU;

	t40 = (x377/((x378*x379)/x380));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x385 = INT32_MAX;
	volatile uint8_t x386 = UINT8_MAX;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = -1;
	volatile int32_t t41 = 185352035;

	t41 = (x385/((x386*x387)/x388));

	if (t41 != -33025) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x401 = 373LLU;

	t42 = (x401/((x402*x403)/x404));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x409 = UINT16_MAX;
	uint16_t x410 = UINT16_MAX;
	volatile int32_t x412 = 33712;
	volatile int32_t t43 = -3;

	t43 = (x409/((x410*x411)/x412));

	if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x413 = 56731LLU;
	static int64_t x414 = -54198993519214LL;
	static volatile uint8_t x415 = 1U;
	uint8_t x416 = UINT8_MAX;
	volatile uint64_t t44 = 22809LLU;

	t44 = (x413/((x414*x415)/x416));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x445 = INT16_MIN;
	static int16_t x446 = -1;
	int8_t x448 = -1;
	static volatile int32_t t45 = -15655;

	t45 = (x445/((x446*x447)/x448));

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x453 = 18572LL;
	uint8_t x454 = UINT8_MAX;
	int8_t x455 = -1;
	static uint16_t x456 = 3U;
	volatile int64_t t46 = -19711992042693LL;

	t46 = (x453/((x454*x455)/x456));

	if (t46 != -218LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x461 = INT8_MIN;
	static volatile uint16_t x463 = 54U;
	uint8_t x464 = UINT8_MAX;
	uint32_t t47 = 394U;

	t47 = (x461/((x462*x463)/x464));

	if (t47 != 587U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x469 = UINT32_MAX;
	static volatile int16_t x470 = INT16_MIN;
	static volatile uint64_t x471 = 6868507701226387439LLU;
	volatile uint64_t t48 = 0LLU;

	t48 = (x469/((x470*x471)/x472));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x473 = INT16_MIN;
	int8_t x474 = -1;
	volatile uint32_t x475 = 42U;
	int16_t x476 = INT16_MIN;
	static volatile uint32_t t49 = 1222U;

	t49 = (x473/((x474*x475)/x476));

	if (t49 != 4294934528U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x483 = -1;
	int32_t x484 = 54;
	volatile uint32_t t50 = 10778U;

	t50 = (x481/((x482*x483)/x484));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x489 = -1;
	volatile int16_t x490 = INT16_MIN;
	volatile uint8_t x491 = 99U;
	uint32_t x492 = 84893853U;
	uint32_t t51 = 906534048U;

	t51 = (x489/((x490*x491)/x492));

	if (t51 != 85899345U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x498 = UINT8_MAX;
	uint16_t x499 = UINT16_MAX;
	int8_t x500 = -1;
	static volatile int32_t t52 = -6142;

	t52 = (x497/((x498*x499)/x500));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x526 = -1;
	static uint64_t x527 = 1507182531421LLU;
	volatile uint64_t t53 = 3968956407446LLU;

	t53 = (x525/((x526*x527)/x528));

	if (t53 != 19LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x537 = -1;
	int8_t x539 = -18;
	int8_t x540 = INT8_MIN;
	int32_t t54 = -303251;

	t54 = (x537/((x538*x539)/x540));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x546 = INT8_MAX;
	volatile int16_t x547 = INT16_MIN;
	volatile uint64_t t55 = 11645246768063LLU;

	t55 = (x545/((x546*x547)/x548));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x549 = INT16_MIN;
	static int64_t x550 = 93042419266081LL;
	volatile int8_t x551 = -1;
	volatile uint32_t x552 = UINT32_MAX;
	static volatile int64_t t56 = -41161688413LL;

	t56 = (x549/((x550*x551)/x552));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x553 = -2186122LL;
	int8_t x554 = -1;
	uint32_t x556 = 913131481U;
	volatile int64_t t57 = 6566852247742442LL;

	t57 = (x553/((x554*x555)/x556));

	if (t57 != -546530LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x557 = UINT16_MAX;
	int8_t x558 = INT8_MIN;
	int8_t x559 = INT8_MAX;
	static uint64_t t58 = 55477417LLU;

	t58 = (x557/((x558*x559)/x560));

	if (t58 != 574LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x561 = INT16_MIN;
	int16_t x562 = INT16_MIN;
	int16_t x563 = -806;
	int64_t x564 = 2778567LL;
	int64_t t59 = 344066605427LL;

	t59 = (x561/((x562*x563)/x564));

	if (t59 != -3640LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x565 = -4;
	static int64_t x566 = 2410288LL;
	int32_t x568 = 14406;
	int64_t t60 = -2587637410LL;

	t60 = (x565/((x566*x567)/x568));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x569 = 3411U;
	int64_t x570 = -1LL;
	volatile int64_t x571 = 1509846255938158LL;
	int16_t x572 = 520;
	volatile int64_t t61 = 837019246133LL;

	t61 = (x569/((x570*x571)/x572));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x585 = -16;
	int8_t x587 = 2;
	int16_t x588 = 150;
	static int32_t t62 = 82;

	t62 = (x585/((x586*x587)/x588));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x598 = 248LL;
	volatile uint16_t x599 = UINT16_MAX;
	volatile int8_t x600 = INT8_MIN;
	volatile int64_t t63 = -57LL;

	t63 = (x597/((x598*x599)/x600));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x609 = 60417214529871850LLU;
	int32_t x610 = -1;
	static uint16_t x611 = UINT16_MAX;
	volatile int8_t x612 = 17;
	uint64_t t64 = 5238LLU;

	t64 = (x609/((x610*x611)/x612));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x613 = UINT16_MAX;
	int16_t x614 = INT16_MIN;
	static int8_t x615 = INT8_MAX;
	int8_t x616 = INT8_MIN;
	static volatile int32_t t65 = 3172;

	t65 = (x613/((x614*x615)/x616));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x617 = 4020997U;
	static uint32_t x618 = UINT32_MAX;
	volatile int16_t x620 = INT16_MAX;

	t66 = (x617/((x618*x619)/x620));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x621 = 0;
	int8_t x622 = INT8_MIN;

	t67 = (x621/((x622*x623)/x624));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x629 = INT16_MIN;
	int32_t x630 = INT32_MAX;
	uint64_t x631 = 625274LLU;
	int16_t x632 = 71;
	uint64_t t68 = 121649041LLU;

	t68 = (x629/((x630*x631)/x632));

	if (t68 != 975388LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x637 = UINT64_MAX;
	static uint16_t x638 = UINT16_MAX;
	int16_t x639 = -1;
	uint64_t t69 = 77707226409037LLU;

	t69 = (x637/((x638*x639)/x640));

	if (t69 != 448269642869178LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x642 = UINT64_MAX;
	static int32_t x643 = INT32_MAX;
	volatile uint64_t t70 = 676295608LLU;

	t70 = (x641/((x642*x643)/x644));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x649 = 464LLU;
	int16_t x650 = INT16_MIN;
	uint16_t x652 = 31U;
	uint64_t t71 = 57164LLU;

	t71 = (x649/((x650*x651)/x652));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x669 = INT64_MAX;
	int16_t x670 = INT16_MAX;
	uint32_t x671 = 30870021U;
	static volatile int16_t x672 = 14183;
	int64_t t72 = 4LL;

	t72 = (x669/((x670*x671)/x672));

	if (t72 != 59443498001152LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x674 = -1;
	int32_t x675 = -96328880;
	uint8_t x676 = 1U;
	volatile int32_t t73 = -127223025;

	t73 = (x673/((x674*x675)/x676));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x693 = UINT16_MAX;
	volatile int64_t x694 = 339299LL;
	int32_t x695 = -4302964;
	uint32_t x696 = 386234393U;
	int64_t t74 = -237795496LL;

	t74 = (x693/((x694*x695)/x696));

	if (t74 != -17LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x714 = INT16_MIN;
	static uint8_t x715 = 3U;
	volatile int16_t x716 = -1;
	int32_t t75 = 702;

	t75 = (x713/((x714*x715)/x716));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x730 = 602U;
	volatile uint8_t x731 = 124U;
	int32_t x732 = -1;

	t76 = (x729/((x730*x731)/x732));

	if (t76 != 28768) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x733 = 460219LLU;
	volatile uint8_t x734 = UINT8_MAX;
	uint64_t x735 = 64152307283LLU;
	uint32_t x736 = 8815492U;
	volatile uint64_t t77 = 37578600218LLU;

	t77 = (x733/((x734*x735)/x736));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x738 = 9;
	volatile uint16_t x739 = UINT16_MAX;
	int64_t x740 = -1LL;
	int64_t t78 = -170141409434589LL;

	t78 = (x737/((x738*x739)/x740));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x749 = 0U;
	uint16_t x750 = UINT16_MAX;
	int8_t x751 = 7;

	t79 = (x749/((x750*x751)/x752));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x765 = INT8_MIN;
	static int32_t x766 = INT32_MAX;
	int32_t x768 = -1;
	volatile int32_t t80 = 456036873;

	t80 = (x765/((x766*x767)/x768));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x773 = INT8_MAX;
	int16_t x774 = INT16_MIN;
	int16_t x775 = 12639;
	static int16_t x776 = -88;
	int32_t t81 = 197;

	t81 = (x773/((x774*x775)/x776));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x777 = UINT16_MAX;
	volatile uint32_t x778 = 2167385U;
	volatile int64_t x780 = 23772LL;
	volatile int64_t t82 = 2737LL;

	t82 = (x777/((x778*x779)/x780));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x781 = 2194;
	int8_t x783 = -1;
	static int8_t x784 = INT8_MIN;
	static int32_t t83 = 239748460;

	t83 = (x781/((x782*x783)/x784));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x785 = -1;
	uint64_t x786 = 6761748270910LLU;
	int16_t x787 = -1;
	volatile int16_t x788 = 219;
	uint64_t t84 = 2861610609LLU;

	t84 = (x785/((x786*x787)/x788));

	if (t84 != 219LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x801 = UINT32_MAX;
	static uint16_t x802 = UINT16_MAX;
	uint8_t x803 = 7U;
	uint64_t x804 = 195627LLU;
	volatile uint64_t t85 = 460LLU;

	t85 = (x801/((x802*x803)/x804));

	if (t85 != 2147483647LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x813 = 134;
	volatile uint64_t x814 = 341668355208772591LLU;
	uint16_t x815 = UINT16_MAX;
	static int8_t x816 = 7;
	uint64_t t86 = 202LLU;

	t86 = (x813/((x814*x815)/x816));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x817 = 47438892013753252LLU;
	int32_t x818 = -1;
	uint64_t x820 = 463LLU;
	volatile uint64_t t87 = 7914445LLU;

	t87 = (x817/((x818*x819)/x820));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x833 = INT8_MIN;
	static int16_t x834 = 31;
	uint16_t x835 = UINT16_MAX;
	volatile int32_t x836 = -6664;
	volatile int32_t t88 = 165;

	t88 = (x833/((x834*x835)/x836));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x861 = 7U;
	uint64_t x862 = 5LLU;
	int8_t x863 = -1;
	static int8_t x864 = 1;
	volatile uint64_t t89 = 25859240897LLU;

	t89 = (x861/((x862*x863)/x864));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x865 = -1;
	int8_t x866 = -3;
	static uint16_t x867 = UINT16_MAX;
	int8_t x868 = INT8_MIN;

	t90 = (x865/((x866*x867)/x868));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x881 = INT32_MIN;
	uint32_t x882 = 1U;
	static int64_t x883 = INT64_MIN;
	int16_t x884 = -134;
	static int64_t t91 = 53LL;

	t91 = (x881/((x882*x883)/x884));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x885 = 125319603U;
	static int32_t x886 = -1;
	int32_t x887 = 238550;
	volatile uint32_t t92 = 8285300U;

	t92 = (x885/((x886*x887)/x888));

	if (t92 != 17902800U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x902 = UINT8_MAX;
	uint64_t x903 = 32487238LLU;
	uint8_t x904 = 61U;
	volatile uint64_t t93 = 21074116LLU;

	t93 = (x901/((x902*x903)/x904));

	if (t93 != 135830277581LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x921 = UINT8_MAX;
	int8_t x923 = INT8_MAX;
	int32_t t94 = 92827;

	t94 = (x921/((x922*x923)/x924));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x925 = -1LL;
	int8_t x927 = INT8_MIN;
	volatile int64_t x928 = INT64_MIN;
	uint64_t t95 = UINT64_MAX;

	t95 = (x925/((x926*x927)/x928));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x933 = -1;
	uint8_t x934 = UINT8_MAX;
	volatile int64_t x935 = -26029490LL;
	volatile int8_t x936 = INT8_MIN;

	t96 = (x933/((x934*x935)/x936));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x941 = UINT32_MAX;
	int16_t x942 = INT16_MIN;
	uint16_t x943 = UINT16_MAX;
	int8_t x944 = INT8_MAX;

	t97 = (x941/((x942*x943)/x944));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x993 = 2725U;
	int64_t x994 = -1LL;
	volatile int16_t x995 = INT16_MAX;
	volatile int64_t t98 = 1392575741543807365LL;

	t98 = (x993/((x994*x995)/x996));

	if (t98 != 10LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x997 = 381879545U;
	volatile int16_t x998 = INT16_MIN;
	volatile int16_t x999 = INT16_MAX;
	volatile int64_t t99 = -90955292340201498LL;

	t99 = (x997/((x998*x999)/x1000));

	if (t99 != -503LL) { NG(); } else { ; }
	
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

