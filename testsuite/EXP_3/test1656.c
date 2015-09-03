#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -3;
static uint16_t x6 = 7621U;
int8_t x8 = -1;
static int8_t x12 = INT8_MIN;
int16_t x19 = INT16_MAX;
int64_t t3 = 379278169232528LL;
uint32_t x31 = UINT32_MAX;
int32_t x32 = -1;
volatile int32_t t4 = 44200;
static int16_t x45 = INT16_MIN;
int32_t t6 = -2060;
uint8_t x50 = 30U;
uint64_t t7 = 8521699414347LLU;
uint32_t x75 = UINT32_MAX;
volatile int32_t t10 = -235899;
volatile int64_t x79 = INT64_MIN;
volatile int64_t t12 = 7084562LL;
int32_t x91 = INT32_MIN;
volatile uint32_t t14 = 426U;
volatile int16_t x101 = 44;
static volatile int64_t t15 = -7524243969721LL;
int64_t x111 = -1092783991555946LL;
uint16_t x119 = UINT16_MAX;
int32_t x129 = -7018523;
static int32_t x131 = INT32_MIN;
volatile int32_t t19 = 116555631;
int16_t x137 = INT16_MIN;
int8_t x144 = -1;
int64_t x145 = INT64_MIN;
static volatile uint8_t x163 = 0U;
int32_t x171 = -5920947;
static volatile int16_t x209 = -1;
int8_t x226 = INT8_MIN;
int64_t x253 = -13351789755544LL;
static uint32_t x256 = 6U;
int64_t x272 = -1LL;
static int64_t t34 = 127333921241811LL;
uint64_t x278 = UINT64_MAX;
uint8_t x290 = UINT8_MAX;
int32_t x291 = -3610;
int8_t x292 = INT8_MAX;
int32_t t36 = -743901202;
uint16_t x296 = 0U;
int64_t x297 = -1LL;
int64_t t39 = 224LL;
uint8_t x311 = 13U;
static uint32_t x312 = UINT32_MAX;
int64_t x321 = INT64_MIN;
static volatile int16_t x324 = INT16_MIN;
static int32_t x326 = 476263;
int8_t x328 = 9;
uint32_t x333 = 175U;
int8_t x341 = INT8_MIN;
volatile int16_t x355 = -1;
int32_t x357 = INT32_MAX;
uint16_t x377 = UINT16_MAX;
int8_t x378 = -1;
int16_t x381 = INT16_MIN;
int64_t x395 = INT64_MIN;
static uint64_t t49 = 776767430LLU;
int32_t x397 = -399;
volatile int32_t x402 = -1;
volatile int32_t t52 = -1;
int32_t x444 = -1;
uint16_t x461 = 1558U;
uint32_t t57 = 1805866228U;
static uint8_t x481 = UINT8_MAX;
int8_t x488 = -1;
int32_t t60 = 55432193;
int64_t x493 = -52264245344797LL;
int64_t x504 = -1LL;
int64_t x525 = INT64_MIN;
uint64_t x528 = 7425576972748404LLU;
uint64_t x533 = UINT64_MAX;
static int32_t x535 = -1;
int8_t x536 = -1;
uint64_t t66 = 183450629245629LLU;
static int32_t t69 = -2395232;
uint8_t x553 = 0U;
uint8_t x568 = 7U;
int16_t x573 = -3;
int8_t x577 = -6;
int16_t x585 = INT16_MIN;
int32_t x588 = INT32_MAX;
static int64_t t78 = -201761LL;
int8_t x601 = 0;
volatile int8_t x616 = -1;
volatile int8_t x622 = INT8_MAX;
int16_t x627 = -1;
volatile int8_t x633 = INT8_MIN;
uint16_t x638 = UINT16_MAX;
static uint8_t x685 = 12U;
uint64_t x689 = 139125807281833045LLU;
volatile uint64_t t91 = 124246298747242718LLU;
int64_t x712 = 9405053562LL;
volatile uint64_t x722 = 2172602461871LLU;
int32_t t98 = 9;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	uint8_t x2 = 3U;
	uint32_t x3 = 407769U;
	static uint64_t x4 = UINT64_MAX;

	t0 = ((x1&x2)%(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	uint32_t x7 = UINT32_MAX;
	volatile int32_t t1 = -1117;

	t1 = ((x5&x6)%(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MIN;
	volatile int32_t x11 = -8641;
	uint32_t t2 = 89358U;

	t2 = ((x9&x10)%(x11<=x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	static int8_t x18 = INT8_MAX;
	static int32_t x20 = INT32_MAX;

	t3 = ((x17&x18)%(x19<=x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = -1;
	static int16_t x30 = -1;

	t4 = ((x29&x30)%(x31<=x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x37 = UINT8_MAX;
	uint32_t x38 = UINT32_MAX;
	int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MAX;
	volatile uint32_t t5 = 16221527U;

	t5 = ((x37&x38)%(x39<=x40));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	static uint8_t x48 = 3U;

	t6 = ((x45&x46)%(x47<=x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int32_t x51 = INT32_MIN;
	uint16_t x52 = UINT16_MAX;

	t7 = ((x49&x50)%(x51<=x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = 9;
	static uint64_t x54 = 1359033033702911LLU;
	volatile int64_t x55 = INT64_MIN;
	uint32_t x56 = 1274401571U;
	static uint64_t t8 = 2458022887LLU;

	t8 = ((x53&x54)%(x55<=x56));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x69 = 32U;
	int8_t x70 = -6;
	uint8_t x71 = UINT8_MAX;
	uint8_t x72 = UINT8_MAX;
	static volatile int32_t t9 = 0;

	t9 = ((x69&x70)%(x71<=x72));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint8_t x74 = UINT8_MAX;
	static int8_t x76 = -1;

	t10 = ((x73&x74)%(x75<=x76));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = -1;
	int64_t x78 = -1LL;
	int64_t x80 = 306LL;
	int64_t t11 = 2202992855050805635LL;

	t11 = ((x77&x78)%(x79<=x80));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x81 = -26070160871254LL;
	int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;

	t12 = ((x81&x82)%(x83<=x84));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x89 = INT8_MAX;
	int32_t x90 = 55796458;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t13 = -399489;

	t13 = ((x89&x90)%(x91<=x92));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	static uint32_t x100 = UINT32_MAX;

	t14 = ((x97&x98)%(x99<=x100));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x102 = 452563149908526907LL;
	int64_t x103 = -1115834106313108615LL;
	volatile int8_t x104 = INT8_MAX;

	t15 = ((x101&x102)%(x103<=x104));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x106 = -4;
	volatile uint64_t x107 = 24LLU;
	static int8_t x108 = INT8_MAX;
	uint64_t t16 = 1LLU;

	t16 = ((x105&x106)%(x107<=x108));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x109 = 1;
	int64_t x110 = INT64_MIN;
	static int8_t x112 = -1;
	volatile int64_t t17 = 34493140LL;

	t17 = ((x109&x110)%(x111<=x112));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = INT32_MAX;
	static int16_t x118 = -1;
	int64_t x120 = INT64_MAX;
	int32_t t18 = 194917679;

	t18 = ((x117&x118)%(x119<=x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x130 = 5U;
	static uint16_t x132 = UINT16_MAX;

	t19 = ((x129&x130)%(x131<=x132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x138 = INT32_MIN;
	uint64_t x139 = 38606LLU;
	static int16_t x140 = INT16_MIN;
	int32_t t20 = -138;

	t20 = ((x137&x138)%(x139<=x140));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x141 = 213920;
	int8_t x142 = -6;
	uint64_t x143 = 1220543483436LLU;
	volatile int32_t t21 = -7584;

	t21 = ((x141&x142)%(x143<=x144));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;
	int64_t t22 = 1599110LL;

	t22 = ((x145&x146)%(x147<=x148));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x161 = 370305;
	static int32_t x162 = INT32_MAX;
	static int64_t x164 = 90547LL;
	int32_t t23 = 249071;

	t23 = ((x161&x162)%(x163<=x164));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x169 = -1;
	uint64_t x170 = 6657873424947LLU;
	uint8_t x172 = 0U;
	volatile uint64_t t24 = 685948LLU;

	t24 = ((x169&x170)%(x171<=x172));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x173 = INT32_MIN;
	volatile int32_t x174 = 123;
	uint64_t x175 = 487294742LLU;
	uint64_t x176 = 1864864982386356126LLU;
	static int32_t t25 = -883;

	t25 = ((x173&x174)%(x175<=x176));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = 5438;
	int16_t x191 = -1;
	volatile uint8_t x192 = 60U;
	int32_t t26 = 113;

	t26 = ((x189&x190)%(x191<=x192));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x205 = 5372970LL;
	int32_t x206 = 0;
	volatile int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MAX;
	volatile int64_t t27 = 176961674LL;

	t27 = ((x205&x206)%(x207<=x208));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x210 = 46U;
	volatile int16_t x211 = -1;
	int8_t x212 = -1;
	volatile int32_t t28 = -21873552;

	t28 = ((x209&x210)%(x211<=x212));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x221 = 16U;
	static int32_t x222 = INT32_MIN;
	static uint64_t x223 = 4015752778179859LLU;
	int64_t x224 = INT64_MAX;
	static int32_t t29 = -401134541;

	t29 = ((x221&x222)%(x223<=x224));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x225 = -1;
	int16_t x227 = INT16_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t30 = 18;

	t30 = ((x225&x226)%(x227<=x228));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x241 = 0U;
	volatile int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MIN;
	int64_t x244 = -1LL;
	static volatile int32_t t31 = 4697;

	t31 = ((x241&x242)%(x243<=x244));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x249 = -1;
	static int64_t x250 = -1LL;
	volatile int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;
	static volatile int64_t t32 = 105431377LL;

	t32 = ((x249&x250)%(x251<=x252));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x254 = -1;
	uint8_t x255 = 6U;
	volatile int64_t t33 = -1LL;

	t33 = ((x253&x254)%(x255<=x256));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x269 = INT64_MIN;
	static int8_t x270 = 29;
	volatile int64_t x271 = -30LL;

	t34 = ((x269&x270)%(x271<=x272));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x277 = -11130973164LL;
	uint64_t x279 = 1LLU;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t35 = 599702599699173900LLU;

	t35 = ((x277&x278)%(x279<=x280));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x289 = -1;

	t36 = ((x289&x290)%(x291<=x292));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = INT8_MIN;
	volatile int32_t t37 = 73324;

	t37 = ((x293&x294)%(x295<=x296));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = -1;
	static uint8_t x300 = 1U;
	volatile int64_t t38 = -22639685145LL;

	t38 = ((x297&x298)%(x299<=x300));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x301 = -1LL;
	volatile int16_t x302 = 3;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;

	t39 = ((x301&x302)%(x303<=x304));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x309 = INT32_MIN;
	static volatile int64_t x310 = -1LL;
	int64_t t40 = 6LL;

	t40 = ((x309&x310)%(x311<=x312));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	int64_t t41 = 1032733202379450568LL;

	t41 = ((x321&x322)%(x323<=x324));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x325 = 6LL;
	int16_t x327 = -1;
	int64_t t42 = -4148565123LL;

	t42 = ((x325&x326)%(x327<=x328));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x334 = INT64_MAX;
	volatile int8_t x335 = INT8_MIN;
	static int8_t x336 = -19;
	volatile int64_t t43 = 40004769679701583LL;

	t43 = ((x333&x334)%(x335<=x336));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x342 = 0;
	int16_t x343 = INT16_MIN;
	static int16_t x344 = INT16_MAX;
	volatile int32_t t44 = -1077134;

	t44 = ((x341&x342)%(x343<=x344));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int16_t x354 = -1;
	static int32_t x356 = -1;
	int32_t t45 = -4053;

	t45 = ((x353&x354)%(x355<=x356));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = -266358407637188458LL;
	volatile int64_t x360 = 2962257775792441LL;
	volatile uint32_t t46 = 17059U;

	t46 = ((x357&x358)%(x359<=x360));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x379 = 3426U;
	int32_t x380 = INT32_MAX;
	volatile int32_t t47 = -50286030;

	t47 = ((x377&x378)%(x379<=x380));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x382 = 1U;
	volatile uint64_t x383 = 239764321723447666LLU;
	int64_t x384 = 968825856311546472LL;
	static int32_t t48 = 13739;

	t48 = ((x381&x382)%(x383<=x384));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x393 = 1630LLU;
	int32_t x394 = -25;
	volatile int32_t x396 = INT32_MAX;

	t49 = ((x393&x394)%(x395<=x396));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x398 = 34129454U;
	volatile int32_t x399 = -969759948;
	uint8_t x400 = UINT8_MAX;
	uint32_t t50 = 819471629U;

	t50 = ((x397&x398)%(x399<=x400));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x401 = 0U;
	int16_t x403 = 1;
	int64_t x404 = INT64_MAX;
	static int32_t t51 = 27;

	t51 = ((x401&x402)%(x403<=x404));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x405 = -1;
	int8_t x406 = -1;
	static volatile int64_t x407 = INT64_MIN;
	static int64_t x408 = INT64_MAX;

	t52 = ((x405&x406)%(x407<=x408));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x413 = INT32_MAX;
	static volatile int64_t x414 = INT64_MAX;
	static uint16_t x415 = 2U;
	int8_t x416 = INT8_MAX;
	int64_t t53 = -4911342574LL;

	t53 = ((x413&x414)%(x415<=x416));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x441 = INT32_MAX;
	static uint16_t x442 = 21556U;
	int64_t x443 = -1LL;
	int32_t t54 = 11571270;

	t54 = ((x441&x442)%(x443<=x444));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x445 = 3U;
	int8_t x446 = INT8_MAX;
	int32_t x447 = -1059;
	int8_t x448 = INT8_MAX;
	volatile int32_t t55 = -91076;

	t55 = ((x445&x446)%(x447<=x448));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x462 = INT64_MIN;
	int32_t x463 = -1;
	int8_t x464 = 0;
	volatile int64_t t56 = -4088LL;

	t56 = ((x461&x462)%(x463<=x464));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x465 = -24308;
	uint32_t x466 = 5U;
	uint32_t x467 = 13480U;
	uint64_t x468 = UINT64_MAX;

	t57 = ((x465&x466)%(x467<=x468));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x477 = 656784749844256LLU;
	uint32_t x478 = 47869512U;
	int16_t x479 = INT16_MAX;
	volatile uint16_t x480 = UINT16_MAX;
	volatile uint64_t t58 = 739629353757659880LLU;

	t58 = ((x477&x478)%(x479<=x480));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x482 = INT64_MAX;
	static int8_t x483 = INT8_MIN;
	uint32_t x484 = UINT32_MAX;
	static int64_t t59 = 43723471056LL;

	t59 = ((x481&x482)%(x483<=x484));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x485 = -1;
	static int16_t x486 = INT16_MIN;
	static volatile uint32_t x487 = 32U;

	t60 = ((x485&x486)%(x487<=x488));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x494 = INT32_MIN;
	int16_t x495 = -564;
	uint16_t x496 = 3U;
	int64_t t61 = 0LL;

	t61 = ((x493&x494)%(x495<=x496));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x501 = UINT32_MAX;
	volatile uint16_t x502 = 102U;
	static int32_t x503 = -2006329;
	uint32_t t62 = 11972U;

	t62 = ((x501&x502)%(x503<=x504));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x517 = INT64_MIN;
	int32_t x518 = -2222;
	static int8_t x519 = INT8_MIN;
	int64_t x520 = 169972794LL;
	int64_t t63 = 157166575100507357LL;

	t63 = ((x517&x518)%(x519<=x520));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x526 = UINT16_MAX;
	uint32_t x527 = 7966412U;
	volatile int64_t t64 = 9965LL;

	t64 = ((x525&x526)%(x527<=x528));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x529 = -60;
	uint32_t x530 = 1293563U;
	volatile int32_t x531 = INT32_MIN;
	uint8_t x532 = 2U;
	uint32_t t65 = 10417U;

	t65 = ((x529&x530)%(x531<=x532));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x534 = 46707LLU;

	t66 = ((x533&x534)%(x535<=x536));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x541 = -6134;
	int16_t x542 = INT16_MAX;
	int32_t x543 = -752192;
	int16_t x544 = 1;
	volatile int32_t t67 = -27484;

	t67 = ((x541&x542)%(x543<=x544));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x545 = INT32_MIN;
	volatile uint32_t x546 = 1368079U;
	uint8_t x547 = UINT8_MAX;
	uint8_t x548 = UINT8_MAX;
	uint32_t t68 = 413U;

	t68 = ((x545&x546)%(x547<=x548));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x549 = INT8_MAX;
	uint8_t x550 = 1U;
	int64_t x551 = INT64_MIN;
	uint16_t x552 = 2569U;

	t69 = ((x549&x550)%(x551<=x552));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x554 = 1;
	int8_t x555 = -1;
	int64_t x556 = 332903LL;
	int32_t t70 = -102361429;

	t70 = ((x553&x554)%(x555<=x556));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x557 = 2U;
	int16_t x558 = INT16_MAX;
	uint64_t x559 = 66LLU;
	int64_t x560 = INT64_MIN;
	volatile int32_t t71 = -668;

	t71 = ((x557&x558)%(x559<=x560));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MAX;
	static volatile int64_t x567 = INT64_MIN;
	volatile int32_t t72 = 70;

	t72 = ((x565&x566)%(x567<=x568));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x569 = 1U;
	volatile uint64_t x570 = 24414613528360LLU;
	uint16_t x571 = 70U;
	int8_t x572 = INT8_MAX;
	static volatile uint64_t t73 = 3597383381174884769LLU;

	t73 = ((x569&x570)%(x571<=x572));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x574 = -14;
	int16_t x575 = -1362;
	int64_t x576 = INT64_MAX;
	volatile int32_t t74 = -450954273;

	t74 = ((x573&x574)%(x575<=x576));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x578 = 431532756688281LLU;
	uint32_t x579 = 3631U;
	static int32_t x580 = 158389583;
	uint64_t t75 = 216822LLU;

	t75 = ((x577&x578)%(x579<=x580));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x586 = INT32_MAX;
	int16_t x587 = 0;
	int32_t t76 = -4517681;

	t76 = ((x585&x586)%(x587<=x588));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x589 = UINT16_MAX;
	static uint8_t x590 = 13U;
	int16_t x591 = INT16_MIN;
	static volatile uint64_t x592 = UINT64_MAX;
	volatile int32_t t77 = 18962;

	t77 = ((x589&x590)%(x591<=x592));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x593 = -1LL;
	int64_t x594 = INT64_MIN;
	volatile uint32_t x595 = 59532U;
	volatile int16_t x596 = INT16_MIN;

	t78 = ((x593&x594)%(x595<=x596));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x597 = 126U;
	int8_t x598 = -1;
	uint8_t x599 = 10U;
	volatile uint64_t x600 = 118904434437231340LLU;
	volatile int32_t t79 = 253;

	t79 = ((x597&x598)%(x599<=x600));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x602 = INT64_MIN;
	int16_t x603 = INT16_MIN;
	uint16_t x604 = 5U;
	volatile int64_t t80 = -7624018566599759LL;

	t80 = ((x601&x602)%(x603<=x604));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x613 = INT64_MAX;
	static volatile int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MIN;
	volatile int64_t t81 = -3120532124296816LL;

	t81 = ((x613&x614)%(x615<=x616));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x617 = INT16_MAX;
	uint32_t x618 = 21654672U;
	volatile int32_t x619 = INT32_MIN;
	uint16_t x620 = 2U;
	uint32_t t82 = 72267U;

	t82 = ((x617&x618)%(x619<=x620));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x621 = 4350450126344999LLU;
	int32_t x623 = -1042051;
	int16_t x624 = -1;
	uint64_t t83 = 27LLU;

	t83 = ((x621&x622)%(x623<=x624));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x625 = -1;
	int16_t x626 = 13;
	static int32_t x628 = 25322;
	static volatile int32_t t84 = 267792357;

	t84 = ((x625&x626)%(x627<=x628));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x634 = 291165;
	static int8_t x635 = -1;
	static int16_t x636 = 191;
	int32_t t85 = 0;

	t85 = ((x633&x634)%(x635<=x636));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x637 = INT16_MIN;
	static volatile uint64_t x639 = 6362332426463856LLU;
	static volatile uint64_t x640 = UINT64_MAX;
	int32_t t86 = 26240;

	t86 = ((x637&x638)%(x639<=x640));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x653 = 122U;
	static uint64_t x654 = 8758769201779176LLU;
	static uint16_t x655 = 0U;
	volatile int8_t x656 = INT8_MAX;
	static uint64_t t87 = 0LLU;

	t87 = ((x653&x654)%(x655<=x656));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x657 = -1;
	static volatile int16_t x658 = INT16_MIN;
	static int16_t x659 = INT16_MIN;
	int8_t x660 = 1;
	static volatile int32_t t88 = -530989797;

	t88 = ((x657&x658)%(x659<=x660));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x669 = INT64_MIN;
	static uint8_t x670 = UINT8_MAX;
	int64_t x671 = INT64_MIN;
	uint64_t x672 = UINT64_MAX;
	int64_t t89 = 631217742418107LL;

	t89 = ((x669&x670)%(x671<=x672));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x686 = INT64_MIN;
	static volatile uint64_t x687 = 82187122976343718LLU;
	volatile int64_t x688 = INT64_MAX;
	int64_t t90 = 179LL;

	t90 = ((x685&x686)%(x687<=x688));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x690 = 16;
	volatile int16_t x691 = INT16_MIN;
	int64_t x692 = INT64_MAX;

	t91 = ((x689&x690)%(x691<=x692));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x697 = 0;
	volatile int16_t x698 = -3;
	uint16_t x699 = 1809U;
	static volatile uint64_t x700 = 38622LLU;
	int32_t t92 = 0;

	t92 = ((x697&x698)%(x699<=x700));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x701 = INT64_MIN;
	volatile uint8_t x702 = 48U;
	uint8_t x703 = 2U;
	static uint16_t x704 = 26U;
	static int64_t t93 = 226195239LL;

	t93 = ((x701&x702)%(x703<=x704));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x709 = -57;
	volatile uint16_t x710 = 1713U;
	int32_t x711 = INT32_MIN;
	static volatile int32_t t94 = -1054606286;

	t94 = ((x709&x710)%(x711<=x712));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x713 = INT16_MAX;
	int32_t x714 = INT32_MAX;
	int32_t x715 = INT32_MIN;
	uint16_t x716 = UINT16_MAX;
	int32_t t95 = 21048;

	t95 = ((x713&x714)%(x715<=x716));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x717 = 0U;
	uint64_t x718 = 177107180195074608LLU;
	int8_t x719 = 14;
	volatile int8_t x720 = INT8_MAX;
	uint64_t t96 = 70LLU;

	t96 = ((x717&x718)%(x719<=x720));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x721 = -12;
	uint64_t x723 = UINT64_MAX;
	int32_t x724 = -1;
	volatile uint64_t t97 = 3LLU;

	t97 = ((x721&x722)%(x723<=x724));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x725 = -1491;
	int32_t x726 = -242;
	int64_t x727 = INT64_MIN;
	volatile int64_t x728 = INT64_MIN;

	t98 = ((x725&x726)%(x727<=x728));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x745 = 3;
	volatile int16_t x746 = INT16_MAX;
	uint16_t x747 = 1902U;
	uint64_t x748 = 321897223428080641LLU;
	int32_t t99 = 106378;

	t99 = ((x745&x746)%(x747<=x748));

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

