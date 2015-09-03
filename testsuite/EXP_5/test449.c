#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = UINT16_MAX;
int64_t x16 = 24957LL;
uint8_t x17 = 43U;
static volatile int32_t t2 = 814967;
volatile uint64_t t3 = 4926721LLU;
volatile uint8_t x61 = 6U;
uint64_t x71 = 2099928806058255LLU;
volatile int32_t t9 = INT32_MAX;
static volatile int32_t x132 = INT32_MAX;
int64_t x136 = INT64_MAX;
int64_t x164 = -1LL;
static uint16_t x189 = 361U;
int32_t t16 = 249;
static volatile uint16_t x200 = 0U;
volatile uint64_t x201 = 8565246259523LLU;
static int16_t x202 = INT16_MAX;
int8_t x204 = INT8_MIN;
uint64_t t18 = 399LLU;
volatile int32_t t19 = -1039856917;
volatile int64_t x222 = -830287529184298LL;
static int32_t x228 = -1;
int64_t x229 = INT64_MAX;
uint32_t x231 = UINT32_MAX;
int64_t x244 = 9090719655501LL;
uint8_t x272 = 1U;
int32_t t28 = -2;
uint64_t x283 = 1276LLU;
static volatile int16_t x290 = 2;
int32_t x328 = INT32_MAX;
int32_t x348 = -67108012;
int64_t x352 = INT64_MAX;
static int32_t x358 = -1;
int32_t x359 = 26432857;
int8_t x366 = -40;
volatile int32_t t39 = 2964;
static uint64_t x397 = 289LLU;
volatile int16_t x399 = INT16_MIN;
uint64_t t43 = 592095925100LLU;
int64_t x458 = -13380482LL;
int64_t x459 = 1752765649LL;
volatile int32_t t46 = -673303;
uint8_t x464 = 0U;
uint64_t x473 = 1908004250746882288LLU;
static volatile int64_t x479 = 24LL;
int16_t x489 = INT16_MAX;
uint32_t x507 = 888131211U;
volatile int64_t t54 = -71376923LL;
int64_t x513 = 44451669991LL;
int8_t x522 = -1;
volatile int32_t t56 = -57;
uint16_t x525 = UINT16_MAX;
static volatile int32_t x528 = INT32_MIN;
int16_t x534 = INT16_MIN;
static uint64_t x535 = 68444355384LLU;
volatile uint32_t t58 = 87000534U;
static uint32_t x565 = 2511352U;
uint32_t t60 = 9429U;
volatile uint16_t x594 = UINT16_MAX;
int8_t x595 = INT8_MIN;
volatile uint32_t t63 = 594520189U;
static uint8_t x611 = 56U;
int32_t t65 = 23429;
int32_t t66 = -625;
static volatile int8_t x622 = 0;
int64_t x623 = 193410059736396LL;
volatile uint8_t x625 = UINT8_MAX;
volatile uint32_t x626 = 88U;
volatile uint32_t t69 = 19U;
int8_t x641 = INT8_MAX;
volatile int32_t t70 = -117116216;
int16_t x658 = -1;
int32_t t72 = 31067211;
volatile int64_t x665 = 61460LL;
volatile int16_t x666 = INT16_MIN;
int8_t x678 = -1;
int32_t x694 = INT32_MIN;
int16_t x696 = -19;
int64_t x748 = INT64_MIN;
uint16_t x749 = 30975U;
volatile int16_t x750 = INT16_MAX;
uint8_t x752 = UINT8_MAX;
int16_t x760 = INT16_MAX;
int64_t x764 = -1LL;
volatile uint16_t x765 = 98U;
volatile int8_t x766 = INT8_MIN;
int8_t x777 = INT8_MAX;
uint32_t x787 = UINT32_MAX;
int32_t x790 = -1;
int8_t x795 = INT8_MAX;
volatile int32_t x820 = -1;
static volatile int32_t t90 = -419319437;
static uint64_t x825 = 452369756461754LLU;
volatile int8_t x837 = 0;
static uint16_t x871 = 176U;
static volatile int16_t x874 = INT16_MAX;
static volatile int64_t x889 = INT64_MAX;


void f0(void) {
	static uint32_t x5 = 1232U;
	volatile int8_t x7 = -1;
	static uint64_t x8 = 118108LLU;
	uint32_t t0 = 1659U;

	t0 = (x5>>((x6*x7)<x8));

	if (t0 != 1232U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x13 = 655U;
	volatile int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	volatile uint32_t t1 = 3032513U;

	t1 = (x13>>((x14*x15)<x16));

	if (t1 != 655U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x18 = -1;
	int16_t x19 = INT16_MIN;
	int64_t x20 = -1LL;

	t2 = (x17>>((x18*x19)<x20));

	if (t2 != 43) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x53 = 383971879265831LLU;
	volatile uint8_t x54 = 15U;
	int8_t x55 = INT8_MAX;
	uint16_t x56 = 187U;

	t3 = (x53>>((x54*x55)<x56));

	if (t3 != 383971879265831LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = -1;
	volatile int32_t x59 = INT32_MAX;
	int8_t x60 = INT8_MIN;
	volatile int64_t t4 = 15922331897LL;

	t4 = (x57>>((x58*x59)<x60));

	if (t4 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x62 = -1;
	int8_t x63 = INT8_MIN;
	volatile int32_t x64 = INT32_MAX;
	int32_t t5 = -187437421;

	t5 = (x61>>((x62*x63)<x64));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x69 = 25LLU;
	uint16_t x70 = 15U;
	volatile uint64_t x72 = UINT64_MAX;
	uint64_t t6 = 9417000763LLU;

	t6 = (x69>>((x70*x71)<x72));

	if (t6 != 12LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x73 = 675490938U;
	static int8_t x74 = INT8_MAX;
	static int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MIN;
	volatile uint32_t t7 = 16533891U;

	t7 = (x73>>((x74*x75)<x76));

	if (t7 != 675490938U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x105 = 0;
	int16_t x106 = INT16_MIN;
	int16_t x107 = -83;
	uint8_t x108 = 63U;
	int32_t t8 = 275342;

	t8 = (x105>>((x106*x107)<x108));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x113 = INT32_MAX;
	volatile uint16_t x114 = 3U;
	uint16_t x115 = UINT16_MAX;
	int8_t x116 = 1;

	t9 = (x113>>((x114*x115)<x116));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x129 = 0U;
	int8_t x130 = INT8_MIN;
	uint8_t x131 = 39U;
	static int32_t t10 = -53414;

	t10 = (x129>>((x130*x131)<x132));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x133 = INT32_MAX;
	static uint8_t x134 = UINT8_MAX;
	int8_t x135 = 37;
	volatile int32_t t11 = -109245;

	t11 = (x133>>((x134*x135)<x136));

	if (t11 != 1073741823) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x161 = 601446987058245118LL;
	volatile uint8_t x162 = 1U;
	static uint8_t x163 = 115U;
	static volatile int64_t t12 = 2001283LL;

	t12 = (x161>>((x162*x163)<x164));

	if (t12 != 601446987058245118LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x169 = 286U;
	uint64_t x170 = 0LLU;
	int16_t x171 = 144;
	uint8_t x172 = 5U;
	volatile int32_t t13 = -497996;

	t13 = (x169>>((x170*x171)<x172));

	if (t13 != 143) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x177 = 1;
	int32_t x178 = -1;
	volatile int8_t x179 = 0;
	static uint64_t x180 = 3996LLU;
	volatile int32_t t14 = 12044667;

	t14 = (x177>>((x178*x179)<x180));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x181 = INT64_MAX;
	uint8_t x182 = 1U;
	uint8_t x183 = UINT8_MAX;
	volatile uint16_t x184 = UINT16_MAX;
	int64_t t15 = 1121LL;

	t15 = (x181>>((x182*x183)<x184));

	if (t15 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x190 = INT16_MIN;
	int8_t x191 = -30;
	int32_t x192 = INT32_MIN;

	t16 = (x189>>((x190*x191)<x192));

	if (t16 != 361) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x197 = INT16_MAX;
	volatile uint16_t x198 = 11U;
	int8_t x199 = INT8_MAX;
	int32_t t17 = -31047;

	t17 = (x197>>((x198*x199)<x200));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x203 = 2U;

	t18 = (x201>>((x202*x203)<x204));

	if (t18 != 4282623129761LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x217 = 10U;
	volatile uint64_t x218 = 16LLU;
	int16_t x219 = -1;
	uint8_t x220 = 122U;

	t19 = (x217>>((x218*x219)<x220));

	if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x221 = 3078017;
	int64_t x223 = 4797LL;
	int8_t x224 = -1;
	int32_t t20 = -10129318;

	t20 = (x221>>((x222*x223)<x224));

	if (t20 != 1539008) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x225 = INT32_MAX;
	uint16_t x226 = UINT16_MAX;
	uint8_t x227 = 59U;
	volatile int32_t t21 = INT32_MAX;

	t21 = (x225>>((x226*x227)<x228));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x230 = 6;
	volatile int16_t x232 = -1;
	volatile int64_t t22 = -12941792491048465LL;

	t22 = (x229>>((x230*x231)<x232));

	if (t22 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x233 = INT8_MAX;
	static uint64_t x234 = UINT64_MAX;
	static uint32_t x235 = 172U;
	volatile int16_t x236 = INT16_MIN;
	static volatile int32_t t23 = 1712732;

	t23 = (x233>>((x234*x235)<x236));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x241 = INT64_MAX;
	static int32_t x242 = -1;
	volatile uint8_t x243 = 1U;
	int64_t t24 = 112430707126LL;

	t24 = (x241>>((x242*x243)<x244));

	if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x249 = 3LL;
	uint32_t x250 = 98771167U;
	volatile int32_t x251 = INT32_MAX;
	static uint16_t x252 = 8U;
	volatile int64_t t25 = -764LL;

	t25 = (x249>>((x250*x251)<x252));

	if (t25 != 3LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x253 = 88726U;
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = -1LL;
	int8_t x256 = INT8_MAX;
	uint32_t t26 = 0U;

	t26 = (x253>>((x254*x255)<x256));

	if (t26 != 88726U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x261 = 21964247495LLU;
	static uint32_t x262 = UINT32_MAX;
	static int8_t x263 = 45;
	static int64_t x264 = -99017088221528254LL;
	uint64_t t27 = 6423037169LLU;

	t27 = (x261>>((x262*x263)<x264));

	if (t27 != 21964247495LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x269 = 2519U;
	uint8_t x270 = UINT8_MAX;
	static uint8_t x271 = UINT8_MAX;

	t28 = (x269>>((x270*x271)<x272));

	if (t28 != 2519) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x281 = INT8_MAX;
	volatile uint64_t x282 = UINT64_MAX;
	int32_t x284 = 636277137;
	static int32_t t29 = -45;

	t29 = (x281>>((x282*x283)<x284));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x289 = INT16_MAX;
	static uint8_t x291 = UINT8_MAX;
	volatile int8_t x292 = -36;
	volatile int32_t t30 = -584454;

	t30 = (x289>>((x290*x291)<x292));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x301 = UINT32_MAX;
	static volatile uint16_t x302 = 5060U;
	int64_t x303 = -1LL;
	int64_t x304 = -1LL;
	static volatile uint32_t t31 = 5508757U;

	t31 = (x301>>((x302*x303)<x304));

	if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x313 = 83U;
	uint16_t x314 = UINT16_MAX;
	uint64_t x315 = UINT64_MAX;
	uint64_t x316 = 177978297641467374LLU;
	volatile int32_t t32 = 15;

	t32 = (x313>>((x314*x315)<x316));

	if (t32 != 83) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x325 = 4328481712047567332LLU;
	uint16_t x326 = 8251U;
	uint16_t x327 = 104U;
	uint64_t t33 = 16563526046LLU;

	t33 = (x325>>((x326*x327)<x328));

	if (t33 != 2164240856023783666LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x329 = INT64_MAX;
	int8_t x330 = INT8_MIN;
	volatile int64_t x331 = -1LL;
	volatile int8_t x332 = 2;
	int64_t t34 = INT64_MAX;

	t34 = (x329>>((x330*x331)<x332));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x341 = 33092582LLU;
	static int32_t x342 = INT32_MAX;
	volatile int8_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	uint64_t t35 = 28569573120210LLU;

	t35 = (x341>>((x342*x343)<x344));

	if (t35 != 16546291LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x345 = UINT16_MAX;
	static int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	int32_t t36 = -1318;

	t36 = (x345>>((x346*x347)<x348));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static int16_t x350 = INT16_MAX;
	static uint16_t x351 = UINT16_MAX;
	volatile uint64_t t37 = 1830924995280387LLU;

	t37 = (x349>>((x350*x351)<x352));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x357 = 30125LLU;
	volatile int8_t x360 = -9;
	uint64_t t38 = 4690656515001433763LLU;

	t38 = (x357>>((x358*x359)<x360));

	if (t38 != 15062LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x365 = 16146;
	uint32_t x367 = 1276054842U;
	int16_t x368 = -1;

	t39 = (x365>>((x366*x367)<x368));

	if (t39 != 8073) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = -2887;
	static volatile int8_t x375 = 0;
	static uint16_t x376 = 202U;
	int64_t t40 = 5481LL;

	t40 = (x373>>((x374*x375)<x376));

	if (t40 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x381 = 3978;
	volatile int8_t x382 = 58;
	int64_t x383 = -79881537395484206LL;
	int64_t x384 = -1LL;
	int32_t t41 = 2456534;

	t41 = (x381>>((x382*x383)<x384));

	if (t41 != 1989) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x398 = -1;
	int8_t x400 = INT8_MIN;
	volatile uint64_t t42 = 201456LLU;

	t42 = (x397>>((x398*x399)<x400));

	if (t42 != 289LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x401 = 3738279LLU;
	static int16_t x402 = INT16_MAX;
	static int16_t x403 = -1671;
	static volatile int16_t x404 = INT16_MIN;

	t43 = (x401>>((x402*x403)<x404));

	if (t43 != 1869139LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x413 = INT16_MAX;
	uint64_t x414 = 52177580474LLU;
	uint16_t x415 = UINT16_MAX;
	uint64_t x416 = 79293690102384614LLU;
	static int32_t t44 = 1;

	t44 = (x413>>((x414*x415)<x416));

	if (t44 != 16383) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x429 = INT8_MAX;
	int32_t x430 = -10803058;
	uint32_t x431 = UINT32_MAX;
	int8_t x432 = INT8_MAX;
	int32_t t45 = 53386504;

	t45 = (x429>>((x430*x431)<x432));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x457 = 0U;
	int16_t x460 = 3;

	t46 = (x457>>((x458*x459)<x460));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x461 = 29535006358LLU;
	int64_t x462 = 6520738035683366LL;
	uint16_t x463 = 55U;
	volatile uint64_t t47 = 151359485204LLU;

	t47 = (x461>>((x462*x463)<x464));

	if (t47 != 29535006358LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x474 = -6;
	volatile int8_t x475 = -1;
	int16_t x476 = 1511;
	static uint64_t t48 = 769LLU;

	t48 = (x473>>((x474*x475)<x476));

	if (t48 != 954002125373441144LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x477 = 20493LL;
	int64_t x478 = -222716LL;
	static int16_t x480 = -1;
	volatile int64_t t49 = -6LL;

	t49 = (x477>>((x478*x479)<x480));

	if (t49 != 10246LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x490 = -1;
	int32_t x491 = INT32_MAX;
	int8_t x492 = -1;
	static int32_t t50 = 1048;

	t50 = (x489>>((x490*x491)<x492));

	if (t50 != 16383) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x497 = INT16_MAX;
	static volatile uint64_t x498 = 132695377378047711LLU;
	int64_t x499 = INT64_MIN;
	int16_t x500 = -1;
	int32_t t51 = -38516;

	t51 = (x497>>((x498*x499)<x500));

	if (t51 != 16383) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x501 = INT32_MAX;
	int16_t x502 = INT16_MAX;
	int8_t x503 = INT8_MAX;
	uint32_t x504 = 422U;
	int32_t t52 = INT32_MAX;

	t52 = (x501>>((x502*x503)<x504));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x505 = INT16_MAX;
	volatile int16_t x506 = INT16_MIN;
	int32_t x508 = INT32_MAX;
	int32_t t53 = 926;

	t53 = (x505>>((x506*x507)<x508));

	if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x509 = 28LL;
	int64_t x510 = -1LL;
	uint16_t x511 = 0U;
	uint32_t x512 = UINT32_MAX;

	t54 = (x509>>((x510*x511)<x512));

	if (t54 != 14LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x514 = UINT64_MAX;
	volatile int8_t x515 = 0;
	int16_t x516 = 1;
	volatile int64_t t55 = 6697852750671833LL;

	t55 = (x513>>((x514*x515)<x516));

	if (t55 != 22225834995LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x521 = 2514115;
	int16_t x523 = -230;
	volatile uint32_t x524 = 29368U;

	t56 = (x521>>((x522*x523)<x524));

	if (t56 != 1257057) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x526 = -71;
	uint16_t x527 = 224U;
	int32_t t57 = -180;

	t57 = (x525>>((x526*x527)<x528));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x533 = 48U;
	volatile int16_t x536 = INT16_MIN;

	t58 = (x533>>((x534*x535)<x536));

	if (t58 != 24U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x537 = 111LLU;
	int16_t x538 = INT16_MIN;
	static int8_t x539 = -1;
	uint32_t x540 = 816766U;
	uint64_t t59 = 121083033061060LLU;

	t59 = (x537>>((x538*x539)<x540));

	if (t59 != 55LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x566 = INT32_MAX;
	uint32_t x567 = UINT32_MAX;
	int32_t x568 = 256365;

	t60 = (x565>>((x566*x567)<x568));

	if (t60 != 2511352U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x577 = 1799U;
	int32_t x578 = 3;
	volatile int32_t x579 = 142;
	static volatile int32_t x580 = INT32_MIN;
	volatile uint32_t t61 = 41514U;

	t61 = (x577>>((x578*x579)<x580));

	if (t61 != 1799U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x581 = INT64_MAX;
	uint16_t x582 = 14686U;
	int64_t x583 = -1LL;
	int32_t x584 = INT32_MIN;
	int64_t t62 = INT64_MAX;

	t62 = (x581>>((x582*x583)<x584));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x593 = 1590690792U;
	uint32_t x596 = 40U;

	t63 = (x593>>((x594*x595)<x596));

	if (t63 != 1590690792U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x609 = 2U;
	uint64_t x610 = UINT64_MAX;
	uint8_t x612 = 4U;
	volatile int32_t t64 = 82286575;

	t64 = (x609>>((x610*x611)<x612));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x613 = 85U;
	static int8_t x614 = -5;
	volatile int32_t x615 = 0;
	uint8_t x616 = 7U;

	t65 = (x613>>((x614*x615)<x616));

	if (t65 != 42) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x617 = INT16_MAX;
	uint32_t x618 = 24U;
	int32_t x619 = 1;
	int8_t x620 = -35;

	t66 = (x617>>((x618*x619)<x620));

	if (t66 != 16383) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x621 = UINT32_MAX;
	static volatile int8_t x624 = 3;
	uint32_t t67 = 32828617U;

	t67 = (x621>>((x622*x623)<x624));

	if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x627 = -1;
	int64_t x628 = INT64_MIN;
	int32_t t68 = 122029;

	t68 = (x625>>((x626*x627)<x628));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x633 = 742650U;
	int32_t x634 = 616;
	int8_t x635 = 14;
	int32_t x636 = INT32_MAX;

	t69 = (x633>>((x634*x635)<x636));

	if (t69 != 371325U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x642 = 1676U;
	static volatile int64_t x643 = -1LL;
	static int32_t x644 = -1;

	t70 = (x641>>((x642*x643)<x644));

	if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x649 = 2U;
	int32_t x650 = -1;
	int16_t x651 = -585;
	int32_t x652 = INT32_MIN;
	static volatile uint32_t t71 = 4227706U;

	t71 = (x649>>((x650*x651)<x652));

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x657 = INT8_MAX;
	int32_t x659 = -29;
	int64_t x660 = INT64_MIN;

	t72 = (x657>>((x658*x659)<x660));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x667 = 54;
	uint16_t x668 = UINT16_MAX;
	static int64_t t73 = -36LL;

	t73 = (x665>>((x666*x667)<x668));

	if (t73 != 30730LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x677 = INT8_MAX;
	volatile uint64_t x679 = 33387126LLU;
	volatile int16_t x680 = INT16_MIN;
	int32_t t74 = 1426447;

	t74 = (x677>>((x678*x679)<x680));

	if (t74 != 63) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x693 = 2;
	static volatile uint32_t x695 = UINT32_MAX;
	static int32_t t75 = 6;

	t75 = (x693>>((x694*x695)<x696));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x701 = UINT16_MAX;
	static uint64_t x702 = 2407LLU;
	int8_t x703 = INT8_MAX;
	static volatile uint16_t x704 = 8818U;
	volatile int32_t t76 = 111;

	t76 = (x701>>((x702*x703)<x704));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x717 = 10U;
	int32_t x718 = INT32_MAX;
	volatile uint32_t x719 = UINT32_MAX;
	int8_t x720 = INT8_MIN;
	static volatile int32_t t77 = -4;

	t77 = (x717>>((x718*x719)<x720));

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x725 = INT8_MAX;
	uint32_t x726 = 24U;
	int32_t x727 = INT32_MAX;
	int32_t x728 = -1;
	int32_t t78 = 194;

	t78 = (x725>>((x726*x727)<x728));

	if (t78 != 63) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x741 = 3U;
	static uint32_t x742 = 56267266U;
	int32_t x743 = 314367996;
	uint16_t x744 = 0U;
	uint32_t t79 = 78U;

	t79 = (x741>>((x742*x743)<x744));

	if (t79 != 3U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x745 = UINT32_MAX;
	static uint64_t x746 = 157787840184422LLU;
	volatile int64_t x747 = -1LL;
	uint32_t t80 = UINT32_MAX;

	t80 = (x745>>((x746*x747)<x748));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x751 = 428;
	int32_t t81 = -4873088;

	t81 = (x749>>((x750*x751)<x752));

	if (t81 != 30975) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x757 = 19011663110LL;
	static volatile int8_t x758 = 1;
	volatile int64_t x759 = -300029LL;
	int64_t t82 = 227712685394LL;

	t82 = (x757>>((x758*x759)<x760));

	if (t82 != 9505831555LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x761 = INT16_MAX;
	int16_t x762 = -1;
	int8_t x763 = INT8_MAX;
	int32_t t83 = -54926;

	t83 = (x761>>((x762*x763)<x764));

	if (t83 != 16383) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x767 = INT16_MIN;
	int32_t x768 = 60;
	volatile int32_t t84 = -654547544;

	t84 = (x765>>((x766*x767)<x768));

	if (t84 != 98) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x769 = 86LLU;
	int16_t x770 = 72;
	int32_t x771 = -1;
	int32_t x772 = INT32_MIN;
	volatile uint64_t t85 = 9040456523LLU;

	t85 = (x769>>((x770*x771)<x772));

	if (t85 != 86LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x778 = INT8_MAX;
	uint32_t x779 = 0U;
	volatile int64_t x780 = 13082854LL;
	int32_t t86 = 1044609698;

	t86 = (x777>>((x778*x779)<x780));

	if (t86 != 63) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x785 = 15025466LLU;
	int16_t x786 = 1;
	int16_t x788 = -13010;
	uint64_t t87 = 85514875LLU;

	t87 = (x785>>((x786*x787)<x788));

	if (t87 != 15025466LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x789 = 7861U;
	uint8_t x791 = 64U;
	volatile int64_t x792 = -1LL;
	volatile int32_t t88 = 884043909;

	t88 = (x789>>((x790*x791)<x792));

	if (t88 != 3930) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x793 = UINT32_MAX;
	uint8_t x794 = UINT8_MAX;
	int64_t x796 = INT64_MIN;
	static volatile uint32_t t89 = UINT32_MAX;

	t89 = (x793>>((x794*x795)<x796));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x817 = 9U;
	volatile int16_t x818 = INT16_MIN;
	uint8_t x819 = UINT8_MAX;

	t90 = (x817>>((x818*x819)<x820));

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x826 = INT8_MIN;
	static int64_t x827 = -83895515599943LL;
	int8_t x828 = INT8_MAX;
	volatile uint64_t t91 = 136696893532LLU;

	t91 = (x825>>((x826*x827)<x828));

	if (t91 != 452369756461754LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x838 = UINT8_MAX;
	volatile uint8_t x839 = 87U;
	static volatile int64_t x840 = INT64_MIN;
	int32_t t92 = 1;

	t92 = (x837>>((x838*x839)<x840));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x841 = 0U;
	uint64_t x842 = 55952LLU;
	int8_t x843 = -36;
	int16_t x844 = -20;
	int32_t t93 = -747;

	t93 = (x841>>((x842*x843)<x844));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x857 = INT8_MAX;
	int16_t x858 = 6;
	uint16_t x859 = 22321U;
	int16_t x860 = 1;
	static volatile int32_t t94 = -1;

	t94 = (x857>>((x858*x859)<x860));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x865 = 0U;
	uint32_t x866 = UINT32_MAX;
	uint64_t x867 = 797990953556LLU;
	int16_t x868 = INT16_MAX;
	int32_t t95 = -333;

	t95 = (x865>>((x866*x867)<x868));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x869 = 2373480661525997LLU;
	volatile int32_t x870 = -237;
	uint32_t x872 = 0U;
	volatile uint64_t t96 = 522444228LLU;

	t96 = (x869>>((x870*x871)<x872));

	if (t96 != 2373480661525997LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x873 = UINT16_MAX;
	volatile int16_t x875 = 7299;
	int16_t x876 = -37;
	volatile int32_t t97 = 28808961;

	t97 = (x873>>((x874*x875)<x876));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x881 = UINT32_MAX;
	int16_t x882 = 2;
	static int64_t x883 = -1577330953626746LL;
	int8_t x884 = -1;
	uint32_t t98 = 6356U;

	t98 = (x881>>((x882*x883)<x884));

	if (t98 != 2147483647U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x890 = -1;
	int32_t x891 = -1;
	volatile int32_t x892 = -927;
	int64_t t99 = INT64_MAX;

	t99 = (x889>>((x890*x891)<x892));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

