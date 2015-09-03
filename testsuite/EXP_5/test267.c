#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x11 = 483U;
volatile int32_t t0 = INT32_MAX;
int32_t t2 = 248263;
int32_t x42 = -1264;
uint64_t t5 = UINT64_MAX;
volatile int64_t x50 = INT64_MAX;
static int64_t x51 = 21329623004324125LL;
static uint64_t x61 = 448292902LLU;
int32_t x63 = 2;
volatile uint64_t t7 = 793LLU;
volatile int64_t t8 = -843025195388580544LL;
int16_t x74 = -1;
volatile int32_t t10 = -58;
uint8_t x126 = 1U;
volatile uint8_t x130 = UINT8_MAX;
static uint8_t x149 = 29U;
int64_t x150 = -215925LL;
int32_t x152 = INT32_MIN;
int32_t x179 = INT32_MAX;
uint8_t x185 = 0U;
static volatile int64_t x190 = INT64_MAX;
int16_t x198 = 3;
int32_t t25 = -4;
uint16_t x209 = UINT16_MAX;
uint16_t x211 = UINT16_MAX;
uint64_t x212 = 3088965559428723LLU;
static int32_t t27 = 0;
volatile int64_t x225 = 1048027104LL;
uint8_t x226 = 12U;
static uint8_t x247 = 1U;
uint32_t x248 = UINT32_MAX;
uint64_t x267 = 109098838732898LLU;
int32_t x268 = -125332;
volatile int32_t t36 = -927006;
int64_t t37 = INT64_MAX;
int32_t x277 = INT32_MAX;
int8_t x280 = -1;
uint16_t x283 = 25U;
volatile uint16_t x301 = 26U;
int8_t x306 = -1;
static int16_t x307 = 21;
volatile int32_t t42 = -8373247;
static int16_t x311 = INT16_MIN;
uint64_t x315 = 15238897783623221LLU;
volatile uint64_t t44 = UINT64_MAX;
uint16_t x319 = 159U;
static int32_t x323 = -1;
static volatile int16_t x327 = INT16_MIN;
uint32_t x333 = 355296245U;
int64_t x352 = INT64_MIN;
static int64_t t50 = INT64_MAX;
int16_t x362 = INT16_MIN;
uint32_t x367 = 2897U;
uint64_t x368 = UINT64_MAX;
volatile int8_t x374 = -1;
static int64_t x384 = -123074LL;
uint16_t x385 = UINT16_MAX;
int64_t x397 = 3897937008356861702LL;
int64_t x405 = 22738071697LL;
static int32_t x414 = -1;
int64_t x427 = 3673941688816561LL;
static volatile uint64_t t65 = 8093584314287995LLU;
int32_t t66 = 124;
int32_t x501 = INT32_MAX;
uint32_t t69 = 1013082U;
volatile int64_t x516 = INT64_MIN;
int16_t x529 = 7;
int32_t x530 = INT32_MIN;
uint64_t x531 = 152LLU;
int64_t x547 = -1LL;
static int32_t t73 = 17;
uint8_t x552 = 88U;
uint64_t t74 = 5150894191154230LLU;
int16_t x556 = -209;
static uint8_t x557 = 4U;
int32_t x558 = INT32_MIN;
volatile int8_t x575 = -61;
static volatile uint64_t t77 = 100011769447349782LLU;
uint8_t x580 = 1U;
int32_t x588 = -18;
static int64_t x608 = INT64_MIN;
volatile int32_t t83 = -4517;
volatile uint32_t t86 = 469U;
volatile int32_t t87 = 298250483;
int16_t x690 = -1;
static volatile int8_t x695 = -1;
static int16_t x698 = INT16_MIN;
int64_t x710 = INT64_MIN;
uint16_t x737 = UINT16_MAX;
volatile int32_t t94 = -11329;
int64_t x743 = -1LL;
static int8_t x752 = -1;
volatile int32_t t96 = -42472;


void f0(void) {
	int32_t x9 = INT32_MAX;
	static int32_t x10 = -6;
	uint64_t x12 = 14356673787LLU;

	t0 = (x9>>((x10-x11)==x12));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x13 = INT64_MAX;
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = -1;
	volatile uint32_t x16 = UINT32_MAX;
	int64_t t1 = INT64_MAX;

	t1 = (x13>>((x14-x15)==x16));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int8_t x18 = INT8_MIN;
	uint16_t x19 = 0U;
	int8_t x20 = INT8_MIN;

	t2 = (x17>>((x18-x19)==x20));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = UINT64_MAX;
	uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (x29>>((x30-x31)==x32));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x41 = 7;
	int32_t x43 = 66439;
	int16_t x44 = 1;
	int32_t t4 = -2;

	t4 = (x41>>((x42-x43)==x44));

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x45 = UINT64_MAX;
	volatile int8_t x46 = INT8_MAX;
	int32_t x47 = 19;
	uint8_t x48 = 1U;

	t5 = (x45>>((x46-x47)==x48));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	static volatile int64_t x52 = -1LL;
	uint64_t t6 = UINT64_MAX;

	t6 = (x49>>((x50-x51)==x52));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x62 = -1;
	static int16_t x64 = 3;

	t7 = (x61>>((x62-x63)==x64));

	if (t7 != 448292902LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x65 = 193601599655698LL;
	volatile uint64_t x66 = 12637242612286LLU;
	int64_t x67 = -4814296191359174LL;
	uint16_t x68 = 246U;

	t8 = (x65>>((x66-x67)==x68));

	if (t8 != 193601599655698LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = UINT32_MAX;
	volatile int16_t x71 = INT16_MIN;
	uint64_t x72 = 4890LLU;
	int32_t t9 = -143099;

	t9 = (x69>>((x70-x71)==x72));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x73 = 2U;
	int8_t x75 = -57;
	int32_t x76 = INT32_MAX;

	t10 = (x73>>((x74-x75)==x76));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x81 = INT32_MAX;
	volatile int64_t x82 = -3652LL;
	static uint8_t x83 = UINT8_MAX;
	int8_t x84 = -1;
	volatile int32_t t11 = INT32_MAX;

	t11 = (x81>>((x82-x83)==x84));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x101 = 28U;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = UINT32_MAX;
	volatile uint32_t x104 = UINT32_MAX;
	volatile int32_t t12 = -15;

	t12 = (x101>>((x102-x103)==x104));

	if (t12 != 28) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x109 = INT64_MAX;
	volatile int8_t x110 = -1;
	static int16_t x111 = -1;
	uint8_t x112 = 6U;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x109>>((x110-x111)==x112));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x113 = 6;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = INT32_MIN;
	static uint8_t x116 = 1U;
	static volatile int32_t t14 = 393931;

	t14 = (x113>>((x114-x115)==x116));

	if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x121 = 93LLU;
	uint16_t x122 = 6U;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = INT64_MAX;
	static uint64_t t15 = 87151324908LLU;

	t15 = (x121>>((x122-x123)==x124));

	if (t15 != 93LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x125 = UINT8_MAX;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = -1;
	static volatile int32_t t16 = 4560;

	t16 = (x125>>((x126-x127)==x128));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x129 = 4146378754LLU;
	int64_t x131 = -1LL;
	volatile int8_t x132 = -41;
	static volatile uint64_t t17 = 2166403865607LLU;

	t17 = (x129>>((x130-x131)==x132));

	if (t17 != 4146378754LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x133 = UINT16_MAX;
	int8_t x134 = -1;
	int16_t x135 = -1;
	volatile uint16_t x136 = 1U;
	volatile int32_t t18 = 256;

	t18 = (x133>>((x134-x135)==x136));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x137 = 27;
	static int64_t x138 = 4162047LL;
	static uint64_t x139 = 19327566640872LLU;
	int32_t x140 = -17787887;
	volatile int32_t t19 = 3824;

	t19 = (x137>>((x138-x139)==x140));

	if (t19 != 27) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x151 = INT8_MAX;
	volatile int32_t t20 = 233360;

	t20 = (x149>>((x150-x151)==x152));

	if (t20 != 29) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x169 = 68U;
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = -20092;
	int8_t x172 = 1;
	uint32_t t21 = 16716565U;

	t21 = (x169>>((x170-x171)==x172));

	if (t21 != 68U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x177 = INT64_MAX;
	uint32_t x178 = 1709792U;
	int32_t x180 = 27197;
	volatile int64_t t22 = INT64_MAX;

	t22 = (x177>>((x178-x179)==x180));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x186 = INT64_MAX;
	int8_t x187 = 55;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t23 = 1;

	t23 = (x185>>((x186-x187)==x188));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x189 = 2201;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t24 = 6;

	t24 = (x189>>((x190-x191)==x192));

	if (t24 != 2201) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x197 = 2;
	int8_t x199 = INT8_MAX;
	int32_t x200 = -11818;

	t25 = (x197>>((x198-x199)==x200));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x201 = 1U;
	static uint16_t x202 = UINT16_MAX;
	uint16_t x203 = 2888U;
	volatile int16_t x204 = INT16_MAX;
	volatile int32_t t26 = -257;

	t26 = (x201>>((x202-x203)==x204));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x210 = -391;

	t27 = (x209>>((x210-x211)==x212));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x221 = 444335U;
	volatile int8_t x222 = -1;
	static int64_t x223 = INT64_MIN;
	int16_t x224 = INT16_MIN;
	uint32_t t28 = 25U;

	t28 = (x221>>((x222-x223)==x224));

	if (t28 != 444335U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x227 = 56;
	uint32_t x228 = 220U;
	volatile int64_t t29 = -57349892309LL;

	t29 = (x225>>((x226-x227)==x228));

	if (t29 != 1048027104LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x229 = 7109LLU;
	static uint64_t x230 = 3830015076052LLU;
	volatile uint16_t x231 = 29618U;
	int8_t x232 = INT8_MIN;
	uint64_t t30 = 6878066600563957448LLU;

	t30 = (x229>>((x230-x231)==x232));

	if (t30 != 7109LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x237 = 5;
	static volatile int16_t x238 = -177;
	int64_t x239 = 1455LL;
	int32_t x240 = INT32_MIN;
	volatile int32_t t31 = -936799;

	t31 = (x237>>((x238-x239)==x240));

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = 11;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = 887U;
	volatile int32_t t32 = 452061;

	t32 = (x241>>((x242-x243)==x244));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x245 = UINT32_MAX;
	int64_t x246 = -322927132LL;
	uint32_t t33 = UINT32_MAX;

	t33 = (x245>>((x246-x247)==x248));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x253 = 7;
	static uint64_t x254 = 32860094939104LLU;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = -1LL;
	int32_t t34 = -2865;

	t34 = (x253>>((x254-x255)==x256));

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x265 = INT8_MAX;
	uint16_t x266 = 37U;
	int32_t t35 = -618054;

	t35 = (x265>>((x266-x267)==x268));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x269 = 1;
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	static volatile int32_t x272 = INT32_MAX;

	t36 = (x269>>((x270-x271)==x272));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x273 = INT64_MAX;
	volatile int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile int64_t x276 = INT64_MIN;

	t37 = (x273>>((x274-x275)==x276));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x278 = 127U;
	uint16_t x279 = 27878U;
	static volatile int32_t t38 = INT32_MAX;

	t38 = (x277>>((x278-x279)==x280));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x281 = 204LL;
	volatile uint8_t x282 = UINT8_MAX;
	int16_t x284 = INT16_MIN;
	int64_t t39 = 6LL;

	t39 = (x281>>((x282-x283)==x284));

	if (t39 != 204LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 15U;
	static int16_t x295 = -1;
	static uint16_t x296 = 277U;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x293>>((x294-x295)==x296));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x302 = INT64_MIN;
	uint64_t x303 = 70832984999682358LLU;
	static int32_t x304 = INT32_MAX;
	volatile int32_t t41 = 2;

	t41 = (x301>>((x302-x303)==x304));

	if (t41 != 26) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x305 = 13U;
	static uint64_t x308 = UINT64_MAX;

	t42 = (x305>>((x306-x307)==x308));

	if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x309 = 0;
	int32_t x310 = INT32_MIN;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t43 = 665005;

	t43 = (x309>>((x310-x311)==x312));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x313 = UINT64_MAX;
	static int16_t x314 = -1;
	int32_t x316 = 304;

	t44 = (x313>>((x314-x315)==x316));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x317 = 14;
	int32_t x318 = INT32_MAX;
	int16_t x320 = 3;
	static volatile int32_t t45 = 46999;

	t45 = (x317>>((x318-x319)==x320));

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x321 = 119;
	uint32_t x322 = UINT32_MAX;
	volatile int32_t x324 = 501984;
	int32_t t46 = -261;

	t46 = (x321>>((x322-x323)==x324));

	if (t46 != 119) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x325 = 6159;
	uint16_t x326 = 97U;
	static uint16_t x328 = 4358U;
	static int32_t t47 = -2804;

	t47 = (x325>>((x326-x327)==x328));

	if (t47 != 6159) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x330 = 0;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MIN;
	uint64_t t48 = UINT64_MAX;

	t48 = (x329>>((x330-x331)==x332));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x334 = INT8_MIN;
	int32_t x335 = -10;
	int32_t x336 = 174;
	static uint32_t t49 = 9U;

	t49 = (x333>>((x334-x335)==x336));

	if (t49 != 355296245U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x349 = INT64_MAX;
	uint16_t x350 = 24177U;
	static int64_t x351 = -88423802647124263LL;

	t50 = (x349>>((x350-x351)==x352));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x361 = INT16_MAX;
	volatile int32_t x363 = INT32_MIN;
	static int64_t x364 = INT64_MAX;
	int32_t t51 = -1150;

	t51 = (x361>>((x362-x363)==x364));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x365 = 11803858LLU;
	uint16_t x366 = UINT16_MAX;
	uint64_t t52 = 8174674LLU;

	t52 = (x365>>((x366-x367)==x368));

	if (t52 != 11803858LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x373 = 733180LLU;
	static uint8_t x375 = 90U;
	int32_t x376 = INT32_MAX;
	volatile uint64_t t53 = 129408762171204LLU;

	t53 = (x373>>((x374-x375)==x376));

	if (t53 != 733180LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = INT8_MAX;
	uint64_t x383 = 2084923844406314LLU;
	int32_t t54 = INT32_MAX;

	t54 = (x381>>((x382-x383)==x384));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x386 = INT16_MIN;
	uint8_t x387 = 31U;
	static volatile uint8_t x388 = 10U;
	int32_t t55 = -117786;

	t55 = (x385>>((x386-x387)==x388));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x389 = 3U;
	volatile int64_t x390 = INT64_MIN;
	int8_t x391 = -1;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t56 = -1620752;

	t56 = (x389>>((x390-x391)==x392));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x398 = -1;
	static uint32_t x399 = 1847534U;
	static int64_t x400 = -1LL;
	volatile int64_t t57 = -29LL;

	t57 = (x397>>((x398-x399)==x400));

	if (t57 != 3897937008356861702LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x401 = INT32_MAX;
	int64_t x402 = 10912460LL;
	volatile uint32_t x403 = 7061856U;
	int32_t x404 = -15168843;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x401>>((x402-x403)==x404));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x406 = INT32_MIN;
	static uint32_t x407 = 14070792U;
	volatile uint32_t x408 = 11022799U;
	volatile int64_t t59 = 63733LL;

	t59 = (x405>>((x406-x407)==x408));

	if (t59 != 22738071697LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x413 = 867U;
	volatile int16_t x415 = INT16_MAX;
	int16_t x416 = -1;
	volatile int32_t t60 = -35439;

	t60 = (x413>>((x414-x415)==x416));

	if (t60 != 867) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x417 = INT16_MAX;
	int8_t x418 = -3;
	uint16_t x419 = 41U;
	int16_t x420 = -2;
	volatile int32_t t61 = 34752847;

	t61 = (x417>>((x418-x419)==x420));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x425 = UINT32_MAX;
	int16_t x426 = INT16_MIN;
	static int32_t x428 = -88;
	uint32_t t62 = UINT32_MAX;

	t62 = (x425>>((x426-x427)==x428));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x429 = UINT16_MAX;
	int8_t x430 = -1;
	int16_t x431 = -1;
	int32_t x432 = -983;
	int32_t t63 = -236582624;

	t63 = (x429>>((x430-x431)==x432));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x445 = 733U;
	uint32_t x446 = 2131997661U;
	int32_t x447 = 0;
	static volatile int32_t x448 = -1295034;
	static uint32_t t64 = 305520U;

	t64 = (x445>>((x446-x447)==x448));

	if (t64 != 733U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x453 = 7575063588692481LLU;
	int32_t x454 = -1;
	int64_t x455 = -183508489591932177LL;
	uint64_t x456 = 1573992909LLU;

	t65 = (x453>>((x454-x455)==x456));

	if (t65 != 7575063588692481LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x477 = INT8_MAX;
	uint16_t x478 = UINT16_MAX;
	int16_t x479 = 15;
	int32_t x480 = 70158618;

	t66 = (x477>>((x478-x479)==x480));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x489 = 6630731U;
	static int32_t x490 = INT32_MIN;
	int32_t x491 = INT32_MIN;
	int16_t x492 = -1;
	uint32_t t67 = 12U;

	t67 = (x489>>((x490-x491)==x492));

	if (t67 != 6630731U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x502 = 2879;
	static int32_t x503 = INT32_MAX;
	static volatile int64_t x504 = 309862008235289LL;
	int32_t t68 = INT32_MAX;

	t68 = (x501>>((x502-x503)==x504));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x509 = UINT32_MAX;
	int8_t x510 = -2;
	uint32_t x511 = UINT32_MAX;
	int32_t x512 = -1;

	t69 = (x509>>((x510-x511)==x512));

	if (t69 != 2147483647U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x513 = 12U;
	volatile uint8_t x514 = 1U;
	int8_t x515 = INT8_MIN;
	volatile int32_t t70 = 1008325082;

	t70 = (x513>>((x514-x515)==x516));

	if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x532 = INT64_MIN;
	int32_t t71 = 27777700;

	t71 = (x529>>((x530-x531)==x532));

	if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x533 = 8144U;
	int16_t x534 = -1;
	int16_t x535 = INT16_MIN;
	int8_t x536 = 10;
	volatile int32_t t72 = 15325;

	t72 = (x533>>((x534-x535)==x536));

	if (t72 != 8144) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x545 = UINT8_MAX;
	volatile uint64_t x546 = 95427836042213728LLU;
	int64_t x548 = -1LL;

	t73 = (x545>>((x546-x547)==x548));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x549 = 70429220801LLU;
	int16_t x550 = INT16_MIN;
	int16_t x551 = INT16_MIN;

	t74 = (x549>>((x550-x551)==x552));

	if (t74 != 70429220801LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x553 = INT8_MAX;
	uint32_t x554 = 4U;
	int16_t x555 = -6258;
	static volatile int32_t t75 = -62;

	t75 = (x553>>((x554-x555)==x556));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x559 = -50;
	volatile int8_t x560 = -2;
	volatile int32_t t76 = 12201;

	t76 = (x557>>((x558-x559)==x560));

	if (t76 != 4) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x573 = 9608610001LLU;
	int8_t x574 = -25;
	int32_t x576 = -206;

	t77 = (x573>>((x574-x575)==x576));

	if (t77 != 9608610001LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x577 = 6075U;
	static int8_t x578 = -1;
	int16_t x579 = -10;
	volatile int32_t t78 = 213613841;

	t78 = (x577>>((x578-x579)==x580));

	if (t78 != 6075) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x581 = 73166U;
	int8_t x582 = 1;
	volatile int16_t x583 = -1;
	volatile uint64_t x584 = 659518469394264441LLU;
	uint32_t t79 = 493U;

	t79 = (x581>>((x582-x583)==x584));

	if (t79 != 73166U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x585 = 7U;
	static uint8_t x586 = UINT8_MAX;
	volatile int8_t x587 = INT8_MAX;
	volatile int32_t t80 = -22340;

	t80 = (x585>>((x586-x587)==x588));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x597 = INT32_MAX;
	int64_t x598 = -1LL;
	volatile uint16_t x599 = 132U;
	int8_t x600 = INT8_MAX;
	static int32_t t81 = INT32_MAX;

	t81 = (x597>>((x598-x599)==x600));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x605 = 4042U;
	uint64_t x606 = 48799866646LLU;
	uint16_t x607 = 1U;
	int32_t t82 = -1042574020;

	t82 = (x605>>((x606-x607)==x608));

	if (t82 != 4042) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x649 = 40U;
	static uint8_t x650 = UINT8_MAX;
	int16_t x651 = INT16_MIN;
	int64_t x652 = -1LL;

	t83 = (x649>>((x650-x651)==x652));

	if (t83 != 40) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x653 = INT32_MAX;
	static int64_t x654 = INT64_MAX;
	static int32_t x655 = 2500133;
	int16_t x656 = INT16_MAX;
	volatile int32_t t84 = INT32_MAX;

	t84 = (x653>>((x654-x655)==x656));

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x661 = UINT8_MAX;
	uint16_t x662 = 36U;
	volatile uint8_t x663 = 8U;
	int16_t x664 = 1491;
	volatile int32_t t85 = -6295534;

	t85 = (x661>>((x662-x663)==x664));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x673 = 5723806U;
	int8_t x674 = INT8_MAX;
	int64_t x675 = -1LL;
	int8_t x676 = INT8_MIN;

	t86 = (x673>>((x674-x675)==x676));

	if (t86 != 5723806U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x677 = 14285;
	static uint16_t x678 = 6U;
	int8_t x679 = 15;
	uint32_t x680 = 22U;

	t87 = (x677>>((x678-x679)==x680));

	if (t87 != 14285) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x685 = 14030U;
	int8_t x686 = INT8_MIN;
	uint64_t x687 = 259LLU;
	static volatile uint8_t x688 = 3U;
	static uint32_t t88 = 263814073U;

	t88 = (x685>>((x686-x687)==x688));

	if (t88 != 14030U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x689 = INT8_MAX;
	uint16_t x691 = 2U;
	int64_t x692 = -1LL;
	static volatile int32_t t89 = 150135;

	t89 = (x689>>((x690-x691)==x692));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x693 = 3842U;
	uint16_t x694 = UINT16_MAX;
	uint16_t x696 = 0U;
	int32_t t90 = 14;

	t90 = (x693>>((x694-x695)==x696));

	if (t90 != 3842) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x697 = UINT16_MAX;
	volatile uint16_t x699 = 1U;
	static int16_t x700 = INT16_MIN;
	int32_t t91 = 10546210;

	t91 = (x697>>((x698-x699)==x700));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x709 = UINT64_MAX;
	static volatile int8_t x711 = -1;
	uint64_t x712 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x709>>((x710-x711)==x712));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x721 = UINT64_MAX;
	int16_t x722 = INT16_MAX;
	uint64_t x723 = 7082298LLU;
	uint16_t x724 = UINT16_MAX;
	uint64_t t93 = UINT64_MAX;

	t93 = (x721>>((x722-x723)==x724));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x738 = -3279;
	uint32_t x739 = 30U;
	static volatile int32_t x740 = 1;

	t94 = (x737>>((x738-x739)==x740));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x741 = 11;
	int16_t x742 = INT16_MIN;
	static int64_t x744 = 115516LL;
	int32_t t95 = -894981179;

	t95 = (x741>>((x742-x743)==x744));

	if (t95 != 11) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x749 = 0;
	volatile int8_t x750 = INT8_MAX;
	volatile int16_t x751 = 1576;

	t96 = (x749>>((x750-x751)==x752));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x753 = INT32_MAX;
	static int16_t x754 = -1;
	int64_t x755 = INT64_MIN;
	int32_t x756 = 347;
	int32_t t97 = INT32_MAX;

	t97 = (x753>>((x754-x755)==x756));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x773 = 13871093255324008LL;
	uint8_t x774 = UINT8_MAX;
	uint16_t x775 = UINT16_MAX;
	int16_t x776 = 3413;
	volatile int64_t t98 = -1413686599308LL;

	t98 = (x773>>((x774-x775)==x776));

	if (t98 != 13871093255324008LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x777 = 4030U;
	volatile int16_t x778 = 0;
	volatile uint32_t x779 = 945U;
	int8_t x780 = -8;
	static int32_t t99 = -24500;

	t99 = (x777>>((x778-x779)==x780));

	if (t99 != 4030) { NG(); } else { ; }
	
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

