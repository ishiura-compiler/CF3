#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
uint64_t x5 = UINT64_MAX;
uint8_t x18 = UINT8_MAX;
uint16_t x23 = 3807U;
int8_t x24 = INT8_MIN;
uint16_t x29 = UINT16_MAX;
int32_t x34 = -1;
uint64_t x35 = UINT64_MAX;
int8_t x36 = -1;
int32_t t5 = -4283;
volatile int64_t x37 = -1LL;
int16_t x40 = INT16_MAX;
volatile int64_t t7 = -1LL;
static volatile int32_t x46 = 0;
volatile int8_t x48 = 1;
int8_t x79 = INT8_MAX;
int64_t x95 = INT64_MAX;
volatile int32_t t15 = -51;
static int64_t x99 = -1LL;
static uint8_t x104 = 76U;
uint32_t t17 = 4U;
volatile int64_t x123 = INT64_MIN;
uint32_t t18 = 19U;
volatile int32_t t19 = 1689149;
volatile uint8_t x133 = 3U;
int16_t x150 = -1;
uint8_t x181 = 12U;
int16_t x184 = INT16_MAX;
int32_t t24 = 12;
int32_t x187 = INT32_MIN;
int64_t t25 = 28405LL;
uint32_t t26 = 2597747U;
int64_t x198 = -55819323LL;
uint16_t x208 = 22U;
volatile int32_t t29 = 74;
uint8_t x222 = 1U;
int32_t t31 = -6;
uint32_t x235 = 44856U;
uint8_t x237 = 6U;
int32_t t36 = 6;
static volatile uint16_t x260 = 61U;
static uint8_t x267 = 0U;
static uint32_t t38 = 6073U;
uint64_t x269 = UINT64_MAX;
uint8_t x271 = UINT8_MAX;
volatile uint64_t t40 = 0LLU;
static uint64_t x283 = 1971127802928LLU;
static int64_t x284 = 66499699366733223LL;
uint8_t x285 = 123U;
static volatile int16_t x288 = INT16_MIN;
int8_t x295 = 5;
int8_t x296 = INT8_MIN;
volatile uint32_t t45 = 3435U;
volatile int16_t x322 = -2283;
volatile int32_t x334 = 2996;
int32_t x338 = -173;
static uint16_t x339 = UINT16_MAX;
static uint8_t x343 = UINT8_MAX;
volatile uint32_t x344 = 27060767U;
uint64_t x378 = 20807LLU;
uint32_t x380 = 12610U;
int32_t x384 = INT32_MIN;
uint32_t x387 = 342136U;
int32_t x392 = INT32_MIN;
uint64_t x398 = 25859LLU;
int16_t x405 = INT16_MIN;
static int32_t x408 = INT32_MAX;
volatile uint64_t t60 = 201455421527417LLU;
uint32_t x419 = UINT32_MAX;
volatile int8_t x421 = -1;
int64_t x423 = INT64_MAX;
volatile int32_t t62 = -4472963;
int32_t x426 = 13;
volatile int32_t t63 = 1523;
uint64_t x465 = UINT64_MAX;
uint64_t t67 = 4212924731863893LLU;
static uint64_t x482 = 40900869158599749LLU;
volatile uint64_t t68 = 487740231770032LLU;
uint32_t x501 = 2784U;
static volatile uint32_t t70 = 0U;
uint16_t x517 = UINT16_MAX;
int32_t x519 = -16;
volatile uint64_t t74 = 55LLU;
volatile uint32_t x530 = 2225U;
uint8_t x539 = 9U;
int32_t t76 = -421417341;
volatile uint16_t x554 = UINT16_MAX;
uint64_t t80 = 44405466309202LLU;
uint8_t x563 = 6U;
int16_t x564 = INT16_MIN;
uint32_t x579 = UINT32_MAX;
volatile uint64_t t83 = 38311LLU;
static uint16_t x586 = 45U;
int8_t x587 = -1;
uint32_t x598 = UINT32_MAX;
static int32_t x607 = -1;
static int8_t x608 = -1;
uint64_t x609 = 186860086919261509LLU;
uint8_t x618 = 3U;
volatile int8_t x623 = INT8_MIN;
volatile int32_t t93 = 0;
int16_t x641 = -91;
static volatile int16_t x643 = -1;
uint16_t x646 = 7U;
volatile int32_t t95 = 0;
int32_t x649 = 83;
volatile int16_t x654 = -1;
volatile int32_t t98 = 3938628;
volatile int64_t x664 = INT64_MIN;


void f0(void) {
	uint64_t x2 = 14024350LLU;
	static int32_t x3 = INT32_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = 15252455373LLU;

	t0 = ((x1+x2)<<(x3<=x4));

	if (t0 != 28048698LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	volatile uint32_t x7 = 9U;
	static volatile uint8_t x8 = 6U;
	volatile uint64_t t1 = 1197083056LLU;

	t1 = ((x5+x6)<<(x7<=x8));

	if (t1 != 2147483646LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 64988535U;
	int64_t x19 = -1LL;
	static uint8_t x20 = 114U;
	uint32_t t2 = 4447792U;

	t2 = ((x17+x18)<<(x19<=x20));

	if (t2 != 129977580U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	int32_t t3 = -13978;

	t3 = ((x21+x22)<<(x23<=x24));

	if (t3 != 65407) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x30 = 1;
	static int64_t x31 = 385LL;
	volatile int8_t x32 = INT8_MIN;
	static int32_t t4 = -190;

	t4 = ((x29+x30)<<(x31<=x32));

	if (t4 != 65536) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MAX;

	t5 = ((x33+x34)<<(x35<=x36));

	if (t5 != 65532) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x38 = INT32_MAX;
	volatile int64_t x39 = -1LL;
	volatile int64_t t6 = 3945441885LL;

	t6 = ((x37+x38)<<(x39<=x40));

	if (t6 != 4294967292LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x41 = -1LL;
	uint16_t x42 = 6U;
	int8_t x43 = -1;
	uint8_t x44 = 95U;

	t7 = ((x41+x42)<<(x43<=x44));

	if (t7 != 10LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x45 = 1LLU;
	uint32_t x47 = 1559U;
	volatile uint64_t t8 = 365479683722525726LLU;

	t8 = ((x45+x46)<<(x47<=x48));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x57 = 0;
	volatile uint16_t x58 = 42U;
	int32_t x59 = 1476510;
	static int16_t x60 = 2891;
	volatile int32_t t9 = 47;

	t9 = ((x57+x58)<<(x59<=x60));

	if (t9 != 42) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x65 = 27113U;
	uint32_t x66 = 2412047U;
	int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MAX;
	volatile uint32_t t10 = 38306U;

	t10 = ((x65+x66)<<(x67<=x68));

	if (t10 != 4878320U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x69 = UINT8_MAX;
	volatile int16_t x70 = -111;
	volatile int8_t x71 = INT8_MIN;
	static volatile int8_t x72 = INT8_MIN;
	int32_t t11 = -346808716;

	t11 = ((x69+x70)<<(x71<=x72));

	if (t11 != 288) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x73 = 4U;
	int8_t x74 = 0;
	int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MAX;
	int32_t t12 = -427265;

	t12 = ((x73+x74)<<(x75<=x76));

	if (t12 != 8) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MIN;
	static int64_t x78 = INT64_MAX;
	int16_t x80 = -120;
	volatile int64_t t13 = 257417LL;

	t13 = ((x77+x78)<<(x79<=x80));

	if (t13 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = -1;
	volatile uint8_t x86 = 8U;
	int32_t x87 = -1;
	volatile int16_t x88 = -1;
	static volatile int32_t t14 = 31;

	t14 = ((x85+x86)<<(x87<=x88));

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x93 = 8U;
	uint8_t x94 = 2U;
	int16_t x96 = 0;

	t15 = ((x93+x94)<<(x95<=x96));

	if (t15 != 10) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x97 = UINT16_MAX;
	volatile int64_t x98 = 9318339063LL;
	int64_t x100 = -110LL;
	static volatile int64_t t16 = 642LL;

	t16 = ((x97+x98)<<(x99<=x100));

	if (t16 != 9318404598LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x101 = 62U;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;

	t17 = ((x101+x102)<<(x103<=x104));

	if (t17 != 122U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x121 = 1050788908U;
	int32_t x122 = 204734529;
	uint8_t x124 = UINT8_MAX;

	t18 = ((x121+x122)<<(x123<=x124));

	if (t18 != 2511046874U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x125 = UINT8_MAX;
	int8_t x126 = INT8_MIN;
	int16_t x127 = -4;
	int16_t x128 = -1871;

	t19 = ((x125+x126)<<(x127<=x128));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x134 = 78U;
	volatile int64_t x135 = -198298852534059973LL;
	uint8_t x136 = 0U;
	volatile int32_t t20 = 438031016;

	t20 = ((x133+x134)<<(x135<=x136));

	if (t20 != 162) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x141 = UINT8_MAX;
	static int8_t x142 = INT8_MIN;
	static volatile int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	int32_t t21 = 70821;

	t21 = ((x141+x142)<<(x143<=x144));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x149 = 19472U;
	static int32_t x151 = 198;
	int64_t x152 = INT64_MIN;
	volatile int32_t t22 = 2164;

	t22 = ((x149+x150)<<(x151<=x152));

	if (t22 != 19471) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x161 = 4;
	volatile int8_t x162 = 10;
	int64_t x163 = -1LL;
	int32_t x164 = 113264;
	volatile int32_t t23 = 403063680;

	t23 = ((x161+x162)<<(x163<=x164));

	if (t23 != 28) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x182 = INT8_MAX;
	volatile int64_t x183 = INT64_MIN;

	t24 = ((x181+x182)<<(x183<=x184));

	if (t24 != 278) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x185 = INT32_MAX;
	int64_t x186 = -1LL;
	volatile uint16_t x188 = 15U;

	t25 = ((x185+x186)<<(x187<=x188));

	if (t25 != 4294967292LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x189 = -547;
	uint32_t x190 = 1787U;
	uint16_t x191 = 218U;
	int32_t x192 = -1;

	t26 = ((x189+x190)<<(x191<=x192));

	if (t26 != 1240U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x193 = 8855U;
	uint64_t x194 = 55570014734LLU;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t27 = 657316014LLU;

	t27 = ((x193+x194)<<(x195<=x196));

	if (t27 != 111140047178LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x197 = UINT32_MAX;
	uint8_t x199 = 0U;
	int16_t x200 = -1;
	int64_t t28 = 100789771LL;

	t28 = ((x197+x198)<<(x199<=x200));

	if (t28 != 4239147972LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x205 = INT32_MAX;
	int32_t x206 = -1;
	volatile uint64_t x207 = UINT64_MAX;

	t29 = ((x205+x206)<<(x207<=x208));

	if (t29 != 2147483646) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x217 = INT8_MAX;
	uint64_t x218 = 1966675017LLU;
	int8_t x219 = INT8_MAX;
	int64_t x220 = -1LL;
	volatile uint64_t t30 = 1897071432224LLU;

	t30 = ((x217+x218)<<(x219<=x220));

	if (t30 != 1966675144LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x221 = UINT16_MAX;
	uint16_t x223 = UINT16_MAX;
	volatile int16_t x224 = -1;

	t31 = ((x221+x222)<<(x223<=x224));

	if (t31 != 65536) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x225 = -2;
	int64_t x226 = 143747487722594LL;
	int8_t x227 = 1;
	volatile int16_t x228 = -1;
	int64_t t32 = -7711297975642LL;

	t32 = ((x225+x226)<<(x227<=x228));

	if (t32 != 143747487722592LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x229 = 30723421312220743LLU;
	int64_t x230 = -1LL;
	int8_t x231 = 30;
	static volatile int64_t x232 = INT64_MIN;
	uint64_t t33 = 23LLU;

	t33 = ((x229+x230)<<(x231<=x232));

	if (t33 != 30723421312220742LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	volatile int64_t x236 = 1391LL;
	uint64_t t34 = 203288592391712LLU;

	t34 = ((x233+x234)<<(x235<=x236));

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x238 = 3U;
	int64_t x239 = INT64_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t35 = 50332;

	t35 = ((x237+x238)<<(x239<=x240));

	if (t35 != 9) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x253 = INT16_MAX;
	volatile int8_t x254 = 1;
	uint8_t x255 = 1U;
	int16_t x256 = INT16_MIN;

	t36 = ((x253+x254)<<(x255<=x256));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x257 = 49U;
	static volatile uint8_t x258 = UINT8_MAX;
	volatile int8_t x259 = INT8_MAX;
	static volatile int32_t t37 = -572443125;

	t37 = ((x257+x258)<<(x259<=x260));

	if (t37 != 304) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x265 = 306U;
	int32_t x266 = -1;
	volatile int32_t x268 = INT32_MAX;

	t38 = ((x265+x266)<<(x267<=x268));

	if (t38 != 610U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x270 = UINT16_MAX;
	int8_t x272 = -2;
	static volatile uint64_t t39 = 351309426743117315LLU;

	t39 = ((x269+x270)<<(x271<=x272));

	if (t39 != 65534LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x273 = 1615106129820LLU;
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	static uint16_t x276 = UINT16_MAX;

	t40 = ((x273+x274)<<(x275<=x276));

	if (t40 != 3230212259640LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x281 = -1;
	uint32_t x282 = 305606U;
	static uint32_t t41 = 325474372U;

	t41 = ((x281+x282)<<(x283<=x284));

	if (t41 != 611210U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x286 = -17;
	uint16_t x287 = 358U;
	int32_t t42 = 6548;

	t42 = ((x285+x286)<<(x287<=x288));

	if (t42 != 106) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x293 = 7650U;
	int64_t x294 = 799513LL;
	static int64_t t43 = 31412673718610131LL;

	t43 = ((x293+x294)<<(x295<=x296));

	if (t43 != 807163LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x305 = -1LL;
	int64_t x306 = 215437LL;
	int8_t x307 = INT8_MIN;
	uint8_t x308 = 18U;
	int64_t t44 = 100243448LL;

	t44 = ((x305+x306)<<(x307<=x308));

	if (t44 != 430872LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x317 = 73U;
	uint32_t x318 = 548U;
	uint64_t x319 = UINT64_MAX;
	static int64_t x320 = INT64_MAX;

	t45 = ((x317+x318)<<(x319<=x320));

	if (t45 != 621U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x321 = 7826027732LLU;
	uint32_t x323 = 916447U;
	volatile int32_t x324 = INT32_MIN;
	volatile uint64_t t46 = 478205LLU;

	t46 = ((x321+x322)<<(x323<=x324));

	if (t46 != 15652050898LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x325 = 1;
	static uint8_t x326 = UINT8_MAX;
	volatile uint64_t x327 = UINT64_MAX;
	int8_t x328 = -1;
	static int32_t t47 = 20;

	t47 = ((x325+x326)<<(x327<=x328));

	if (t47 != 512) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x329 = INT64_MAX;
	int16_t x330 = -3;
	volatile int32_t x331 = 9975694;
	int64_t x332 = INT64_MIN;
	volatile int64_t t48 = 1077655586205LL;

	t48 = ((x329+x330)<<(x331<=x332));

	if (t48 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x333 = 0;
	volatile int16_t x335 = INT16_MIN;
	volatile uint64_t x336 = UINT64_MAX;
	int32_t t49 = 678;

	t49 = ((x333+x334)<<(x335<=x336));

	if (t49 != 5992) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x337 = 142179446389769LL;
	uint16_t x340 = 5727U;
	volatile int64_t t50 = 857519LL;

	t50 = ((x337+x338)<<(x339<=x340));

	if (t50 != 142179446389596LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x341 = 0;
	static int8_t x342 = INT8_MAX;
	static int32_t t51 = 32440;

	t51 = ((x341+x342)<<(x343<=x344));

	if (t51 != 254) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x361 = -1;
	int64_t x362 = 75137048LL;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = 1101U;
	volatile int64_t t52 = 418627296935316876LL;

	t52 = ((x361+x362)<<(x363<=x364));

	if (t52 != 150274094LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x377 = -1LL;
	static uint64_t x379 = 75539837LLU;
	static volatile uint64_t t53 = 377139LLU;

	t53 = ((x377+x378)<<(x379<=x380));

	if (t53 != 20806LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x381 = 1777U;
	int32_t x382 = -1;
	uint8_t x383 = 43U;
	volatile int32_t t54 = 3;

	t54 = ((x381+x382)<<(x383<=x384));

	if (t54 != 1776) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x385 = INT8_MIN;
	uint8_t x386 = UINT8_MAX;
	int8_t x388 = -63;
	int32_t t55 = -52474700;

	t55 = ((x385+x386)<<(x387<=x388));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x389 = -1LL;
	volatile int8_t x390 = 6;
	uint32_t x391 = UINT32_MAX;
	int64_t t56 = -18654416003LL;

	t56 = ((x389+x390)<<(x391<=x392));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x397 = INT32_MAX;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = INT64_MAX;
	uint64_t t57 = 664803734869203LLU;

	t57 = ((x397+x398)<<(x399<=x400));

	if (t57 != 4295019012LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x401 = 1;
	volatile int16_t x402 = -1;
	uint16_t x403 = UINT16_MAX;
	int32_t x404 = 2;
	int32_t t58 = -389270;

	t58 = ((x401+x402)<<(x403<=x404));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x406 = 4306244LLU;
	uint8_t x407 = UINT8_MAX;
	volatile uint64_t t59 = 466703667383LLU;

	t59 = ((x405+x406)<<(x407<=x408));

	if (t59 != 8546952LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x413 = UINT64_MAX;
	static int16_t x414 = INT16_MAX;
	uint32_t x415 = 132513542U;
	int64_t x416 = INT64_MIN;

	t60 = ((x413+x414)<<(x415<=x416));

	if (t60 != 32766LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x417 = 932135799854394330LL;
	int8_t x418 = INT8_MIN;
	int8_t x420 = -2;
	static volatile int64_t t61 = 444453113LL;

	t61 = ((x417+x418)<<(x419<=x420));

	if (t61 != 932135799854394202LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x422 = INT8_MAX;
	uint8_t x424 = 1U;

	t62 = ((x421+x422)<<(x423<=x424));

	if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x425 = UINT16_MAX;
	int8_t x427 = INT8_MIN;
	int8_t x428 = -3;

	t63 = ((x425+x426)<<(x427<=x428));

	if (t63 != 131096) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x437 = 51LLU;
	uint16_t x438 = UINT16_MAX;
	int64_t x439 = -1LL;
	static volatile uint16_t x440 = UINT16_MAX;
	volatile uint64_t t64 = 37606511371184029LLU;

	t64 = ((x437+x438)<<(x439<=x440));

	if (t64 != 131172LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x445 = UINT32_MAX;
	volatile int32_t x446 = -1;
	uint8_t x447 = 0U;
	uint32_t x448 = 233U;
	volatile uint32_t t65 = 13U;

	t65 = ((x445+x446)<<(x447<=x448));

	if (t65 != 4294967292U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x457 = UINT32_MAX;
	static int16_t x458 = -1;
	static uint8_t x459 = UINT8_MAX;
	int32_t x460 = -5627;
	volatile uint32_t t66 = 303U;

	t66 = ((x457+x458)<<(x459<=x460));

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x466 = -3;
	static uint32_t x467 = UINT32_MAX;
	static int8_t x468 = INT8_MIN;

	t67 = ((x465+x466)<<(x467<=x468));

	if (t67 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x481 = 26304U;
	static int8_t x483 = 41;
	int64_t x484 = INT64_MAX;

	t68 = ((x481+x482)<<(x483<=x484));

	if (t68 != 81801738317252106LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x493 = UINT16_MAX;
	static int64_t x494 = -2LL;
	volatile int8_t x495 = INT8_MIN;
	int8_t x496 = -1;
	int64_t t69 = 1945403349325363013LL;

	t69 = ((x493+x494)<<(x495<=x496));

	if (t69 != 131066LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x502 = 0;
	static volatile uint64_t x503 = 17473050573LLU;
	uint64_t x504 = 360LLU;

	t70 = ((x501+x502)<<(x503<=x504));

	if (t70 != 2784U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x505 = 7U;
	volatile int32_t x506 = -1;
	int64_t x507 = INT64_MIN;
	uint64_t x508 = UINT64_MAX;
	volatile int32_t t71 = 0;

	t71 = ((x505+x506)<<(x507<=x508));

	if (t71 != 12) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x509 = UINT8_MAX;
	int32_t x510 = 620;
	int64_t x511 = INT64_MIN;
	static uint32_t x512 = 2029649U;
	int32_t t72 = 12;

	t72 = ((x509+x510)<<(x511<=x512));

	if (t72 != 1750) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x518 = 4504U;
	static uint64_t x520 = 6628446195LLU;
	int32_t t73 = -7904;

	t73 = ((x517+x518)<<(x519<=x520));

	if (t73 != 70039) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x521 = -37995;
	uint64_t x522 = UINT64_MAX;
	volatile int16_t x523 = -1;
	int16_t x524 = -6329;

	t74 = ((x521+x522)<<(x523<=x524));

	if (t74 != 18446744073709513620LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x529 = 62U;
	int64_t x531 = INT64_MAX;
	static int8_t x532 = INT8_MIN;
	static volatile uint32_t t75 = 41U;

	t75 = ((x529+x530)<<(x531<=x532));

	if (t75 != 2287U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x537 = 22;
	int32_t x538 = 26190548;
	uint16_t x540 = 707U;

	t76 = ((x537+x538)<<(x539<=x540));

	if (t76 != 52381140) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x541 = 5LLU;
	volatile int32_t x542 = INT32_MAX;
	static int32_t x543 = INT32_MAX;
	static volatile int8_t x544 = 51;
	uint64_t t77 = 222385591190LLU;

	t77 = ((x541+x542)<<(x543<=x544));

	if (t77 != 2147483652LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x549 = UINT16_MAX;
	int32_t x550 = 1078090;
	volatile uint64_t x551 = 1830663214675348LLU;
	static int32_t x552 = INT32_MIN;
	volatile int32_t t78 = -74616;

	t78 = ((x549+x550)<<(x551<=x552));

	if (t78 != 2287250) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x553 = -1;
	static uint8_t x555 = UINT8_MAX;
	volatile uint8_t x556 = 6U;
	int32_t t79 = 453837245;

	t79 = ((x553+x554)<<(x555<=x556));

	if (t79 != 65534) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x557 = UINT64_MAX;
	volatile int64_t x558 = INT64_MIN;
	static int16_t x559 = INT16_MIN;
	int8_t x560 = -36;

	t80 = ((x557+x558)<<(x559<=x560));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x561 = 37U;
	int16_t x562 = INT16_MAX;
	int32_t t81 = -5417;

	t81 = ((x561+x562)<<(x563<=x564));

	if (t81 != 32804) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x573 = 133;
	volatile uint16_t x574 = UINT16_MAX;
	uint64_t x575 = 143380133450882190LLU;
	volatile uint8_t x576 = 81U;
	int32_t t82 = 979953;

	t82 = ((x573+x574)<<(x575<=x576));

	if (t82 != 65668) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x577 = -1;
	uint64_t x578 = 154124LLU;
	static int64_t x580 = INT64_MIN;

	t83 = ((x577+x578)<<(x579<=x580));

	if (t83 != 154123LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x585 = -1LL;
	volatile int64_t x588 = INT64_MIN;
	int64_t t84 = -3422460LL;

	t84 = ((x585+x586)<<(x587<=x588));

	if (t84 != 44LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x593 = UINT8_MAX;
	int64_t x594 = -1LL;
	int32_t x595 = 6330847;
	int8_t x596 = 0;
	static int64_t t85 = -6364770916215047LL;

	t85 = ((x593+x594)<<(x595<=x596));

	if (t85 != 254LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x597 = INT32_MIN;
	volatile int64_t x599 = INT64_MAX;
	uint32_t x600 = 161U;
	volatile uint32_t t86 = 926586U;

	t86 = ((x597+x598)<<(x599<=x600));

	if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x601 = 183U;
	int64_t x602 = -1LL;
	static int32_t x603 = INT32_MIN;
	static volatile int16_t x604 = INT16_MAX;
	static int64_t t87 = 136LL;

	t87 = ((x601+x602)<<(x603<=x604));

	if (t87 != 364LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x605 = -1;
	int32_t x606 = 951;
	volatile int32_t t88 = 0;

	t88 = ((x605+x606)<<(x607<=x608));

	if (t88 != 1900) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x610 = INT16_MIN;
	volatile uint16_t x611 = 9392U;
	uint16_t x612 = UINT16_MAX;
	volatile uint64_t t89 = 2166642LLU;

	t89 = ((x609+x610)<<(x611<=x612));

	if (t89 != 373720173838457482LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x617 = UINT16_MAX;
	int16_t x619 = -682;
	int8_t x620 = -1;
	int32_t t90 = 40;

	t90 = ((x617+x618)<<(x619<=x620));

	if (t90 != 131076) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x621 = INT8_MIN;
	int16_t x622 = INT16_MAX;
	volatile uint8_t x624 = UINT8_MAX;
	int32_t t91 = 58003;

	t91 = ((x621+x622)<<(x623<=x624));

	if (t91 != 65278) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x629 = 6;
	volatile int16_t x630 = INT16_MAX;
	volatile int16_t x631 = -1;
	static int16_t x632 = -1;
	int32_t t92 = 7038807;

	t92 = ((x629+x630)<<(x631<=x632));

	if (t92 != 65546) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x637 = 126U;
	volatile int8_t x638 = INT8_MAX;
	static volatile uint16_t x639 = UINT16_MAX;
	uint8_t x640 = 49U;

	t93 = ((x637+x638)<<(x639<=x640));

	if (t93 != 253) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x642 = UINT64_MAX;
	int32_t x644 = INT32_MAX;
	uint64_t t94 = 3274197700797LLU;

	t94 = ((x641+x642)<<(x643<=x644));

	if (t94 != 18446744073709551432LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x645 = 100U;
	int32_t x647 = -3;
	int8_t x648 = INT8_MIN;

	t95 = ((x645+x646)<<(x647<=x648));

	if (t95 != 107) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x650 = -2;
	int16_t x651 = INT16_MIN;
	static volatile uint8_t x652 = UINT8_MAX;
	volatile int32_t t96 = 25414046;

	t96 = ((x649+x650)<<(x651<=x652));

	if (t96 != 162) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x653 = UINT16_MAX;
	static int64_t x655 = -1LL;
	static volatile int32_t x656 = 1;
	volatile int32_t t97 = -3196666;

	t97 = ((x653+x654)<<(x655<=x656));

	if (t97 != 131068) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x657 = INT16_MAX;
	int8_t x658 = INT8_MAX;
	int8_t x659 = -1;
	int32_t x660 = -3747948;

	t98 = ((x657+x658)<<(x659<=x660));

	if (t98 != 32894) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x661 = -1;
	int8_t x662 = 32;
	uint16_t x663 = 26387U;
	int32_t t99 = 0;

	t99 = ((x661+x662)<<(x663<=x664));

	if (t99 != 31) { NG(); } else { ; }
	
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

