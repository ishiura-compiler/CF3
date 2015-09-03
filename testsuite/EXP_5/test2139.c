#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x6 = 0;
volatile int64_t x32 = INT64_MAX;
static volatile uint64_t x38 = 3LLU;
static int32_t x39 = -1;
volatile int8_t x40 = -18;
static volatile uint64_t t6 = 409878649LLU;
uint32_t x94 = 477U;
static volatile int16_t x95 = INT16_MAX;
int64_t x98 = INT64_MIN;
static volatile int32_t t11 = -163180155;
static uint8_t x111 = 51U;
volatile int64_t x137 = INT64_MAX;
volatile int32_t x139 = 1205;
static uint16_t x143 = 39U;
int64_t x155 = INT64_MIN;
static int32_t x159 = INT32_MIN;
int32_t x164 = INT32_MIN;
int32_t x167 = INT32_MIN;
static int64_t x170 = INT64_MIN;
int32_t x171 = -1;
int16_t x189 = INT16_MAX;
uint64_t x190 = 213773538406949LLU;
volatile uint16_t x192 = UINT16_MAX;
uint8_t x209 = UINT8_MAX;
volatile uint8_t x210 = 108U;
static uint32_t x218 = 154019753U;
static int32_t x219 = INT32_MIN;
uint16_t x231 = 21U;
uint64_t x237 = 608093LLU;
int32_t x242 = INT32_MIN;
volatile int16_t x259 = -236;
uint8_t x264 = UINT8_MAX;
uint64_t x265 = UINT64_MAX;
volatile uint16_t x266 = UINT16_MAX;
int16_t x267 = -1;
volatile int16_t x275 = INT16_MIN;
uint64_t x277 = 510LLU;
static uint32_t x294 = 2797916U;
uint16_t x297 = UINT16_MAX;
static volatile int16_t x299 = INT16_MIN;
int32_t t44 = 1;
volatile int64_t t45 = INT64_MAX;
uint8_t x325 = UINT8_MAX;
uint32_t x329 = 42037928U;
int16_t x332 = 747;
volatile uint64_t x353 = 1208LLU;
static int32_t t52 = 57385;
int16_t x362 = 126;
int8_t x364 = -1;
int32_t x375 = -1;
static uint16_t x384 = 4U;
static volatile int64_t t56 = 1019008681028LL;
int32_t x394 = 3450627;
int32_t x399 = -64629789;
uint16_t x404 = UINT16_MAX;
static volatile uint32_t x412 = UINT32_MAX;
uint64_t x420 = UINT64_MAX;
uint64_t x421 = 7284735LLU;
uint32_t x422 = UINT32_MAX;
uint64_t x423 = 117734967717767460LLU;
uint8_t x424 = UINT8_MAX;
static uint64_t t63 = 30LLU;
volatile int32_t t64 = 22;
volatile int64_t x429 = INT64_MAX;
int32_t x430 = -1;
volatile int32_t x432 = -1;
int64_t t65 = 226005830LL;
uint32_t x433 = 15650U;
volatile int32_t x434 = -11976;
int32_t x435 = 76182;
uint32_t t66 = 118336759U;
uint8_t x437 = 76U;
uint64_t x441 = 188212904153544542LLU;
uint8_t x445 = 22U;
uint8_t x457 = 1U;
uint64_t x463 = 75433LLU;
int16_t x477 = INT16_MAX;
uint8_t x488 = 1U;
static uint32_t x491 = UINT32_MAX;
uint32_t x495 = 19851772U;
static int64_t x503 = INT64_MIN;
int64_t x504 = INT64_MIN;
uint64_t x507 = 231316LLU;
uint8_t x519 = 76U;
int8_t x530 = INT8_MIN;
volatile int32_t t83 = 15;
volatile int64_t x533 = INT64_MAX;
uint16_t x534 = UINT16_MAX;
int16_t x535 = -2123;
uint8_t x565 = 2U;
volatile int64_t t88 = -6124614105995006LL;
int64_t x597 = INT64_MAX;
volatile int16_t x598 = -1;
uint8_t x605 = 4U;
static volatile int32_t x607 = INT32_MAX;
int32_t x611 = 251212297;
int8_t x612 = -1;
volatile int64_t x624 = INT64_MAX;
int64_t x629 = 2695314555LL;
int8_t x630 = -36;
volatile int32_t x644 = INT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int16_t x2 = INT16_MAX;
	int32_t x3 = -1;
	int32_t x4 = -501906735;
	volatile int32_t t0 = 4;

	t0 = (x1>>((x2^x3)<x4));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int64_t x7 = 1324387050314LL;
	static int64_t x8 = INT64_MIN;
	int32_t t1 = -465;

	t1 = (x5>>((x6^x7)<x8));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x29 = INT32_MAX;
	int32_t x30 = -505835096;
	int16_t x31 = INT16_MAX;
	int32_t t2 = -106882922;

	t2 = (x29>>((x30^x31)<x32));

	if (t2 != 1073741823) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x37 = 9U;
	int32_t t3 = 26508771;

	t3 = (x37>>((x38^x39)<x40));

	if (t3 != 9) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x49 = INT16_MAX;
	int8_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	int32_t t4 = -7;

	t4 = (x49>>((x50^x51)<x52));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x53 = 7U;
	int16_t x54 = 61;
	int16_t x55 = -7;
	uint64_t x56 = UINT64_MAX;
	static int32_t t5 = -283978022;

	t5 = (x53>>((x54^x55)<x56));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x61 = 2554933007780LLU;
	int64_t x62 = -1LL;
	volatile int16_t x63 = -1;
	static int8_t x64 = INT8_MIN;

	t6 = (x61>>((x62^x63)<x64));

	if (t6 != 2554933007780LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x69 = UINT8_MAX;
	static uint8_t x70 = 7U;
	int64_t x71 = 413040764LL;
	static int32_t x72 = -5105;
	static int32_t t7 = -26004;

	t7 = (x69>>((x70^x71)<x72));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x77 = UINT64_MAX;
	static int16_t x78 = -1;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	uint64_t t8 = UINT64_MAX;

	t8 = (x77>>((x78^x79)<x80));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x81 = 551965257U;
	volatile uint16_t x82 = 2561U;
	static uint64_t x83 = 313LLU;
	int16_t x84 = INT16_MAX;
	uint32_t t9 = 14U;

	t9 = (x81>>((x82^x83)<x84));

	if (t9 != 275982628U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x93 = INT16_MAX;
	uint8_t x96 = 27U;
	static int32_t t10 = 1;

	t10 = (x93>>((x94^x95)<x96));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x97 = 1;
	uint8_t x99 = 119U;
	volatile int8_t x100 = INT8_MIN;

	t11 = (x97>>((x98^x99)<x100));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x101 = 38U;
	static uint64_t x102 = 77089491LLU;
	int16_t x103 = 217;
	uint8_t x104 = UINT8_MAX;
	volatile uint32_t t12 = 5633652U;

	t12 = (x101>>((x102^x103)<x104));

	if (t12 != 38U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x105 = 1292U;
	static int64_t x106 = INT64_MIN;
	volatile int64_t x107 = 2678484657LL;
	static int8_t x108 = INT8_MAX;
	int32_t t13 = -66469;

	t13 = (x105>>((x106^x107)<x108));

	if (t13 != 646) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MIN;
	int64_t x112 = -6LL;
	volatile int32_t t14 = 14515617;

	t14 = (x109>>((x110^x111)<x112));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x117 = 48U;
	int32_t x118 = INT32_MIN;
	static uint8_t x119 = 6U;
	static int32_t x120 = -1;
	int32_t t15 = 115507170;

	t15 = (x117>>((x118^x119)<x120));

	if (t15 != 24) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x129 = 2U;
	uint8_t x130 = 1U;
	volatile int16_t x131 = 1484;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t16 = -10;

	t16 = (x129>>((x130^x131)<x132));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x138 = 870228U;
	static uint32_t x140 = 1590U;
	int64_t t17 = INT64_MAX;

	t17 = (x137>>((x138^x139)<x140));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x141 = UINT16_MAX;
	int16_t x142 = 7;
	int32_t x144 = -195565853;
	int32_t t18 = -534682099;

	t18 = (x141>>((x142^x143)<x144));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	static int16_t x146 = INT16_MIN;
	static volatile int64_t x147 = 3850LL;
	int32_t x148 = -1;
	volatile uint32_t t19 = 67943U;

	t19 = (x145>>((x146^x147)<x148));

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x153 = 341;
	static uint32_t x154 = 2941U;
	int8_t x156 = -3;
	int32_t t20 = -678348;

	t20 = (x153>>((x154^x155)<x156));

	if (t20 != 170) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x157 = 7128U;
	int64_t x158 = INT64_MAX;
	volatile int64_t x160 = -1LL;
	static int32_t t21 = -62586;

	t21 = (x157>>((x158^x159)<x160));

	if (t21 != 3564) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x161 = UINT16_MAX;
	volatile uint64_t x162 = 2258393805LLU;
	static int8_t x163 = INT8_MAX;
	volatile int32_t t22 = -1943;

	t22 = (x161>>((x162^x163)<x164));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x165 = 74U;
	uint32_t x166 = 149104600U;
	int8_t x168 = 0;
	int32_t t23 = 15571113;

	t23 = (x165>>((x166^x167)<x168));

	if (t23 != 74) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x169 = 5;
	int64_t x172 = INT64_MIN;
	volatile int32_t t24 = 3558195;

	t24 = (x169>>((x170^x171)<x172));

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x173 = 85703;
	int64_t x174 = INT64_MAX;
	int32_t x175 = INT32_MIN;
	static volatile int16_t x176 = 8;
	int32_t t25 = -131156988;

	t25 = (x173>>((x174^x175)<x176));

	if (t25 != 42851) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x181 = 1U;
	int8_t x182 = -30;
	int8_t x183 = INT8_MAX;
	uint32_t x184 = 1709152434U;
	uint32_t t26 = 168U;

	t26 = (x181>>((x182^x183)<x184));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x191 = -10183143820957LL;
	static int32_t t27 = 6073955;

	t27 = (x189>>((x190^x191)<x192));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x193 = 16639021U;
	volatile int8_t x194 = INT8_MAX;
	uint16_t x195 = 116U;
	volatile uint64_t x196 = 227828389781805LLU;
	static volatile uint32_t t28 = 31U;

	t28 = (x193>>((x194^x195)<x196));

	if (t28 != 8319510U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x211 = -662618100390880776LL;
	int32_t x212 = INT32_MIN;
	int32_t t29 = 0;

	t29 = (x209>>((x210^x211)<x212));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x217 = 1LLU;
	static int32_t x220 = INT32_MIN;
	uint64_t t30 = 23233579863LLU;

	t30 = (x217>>((x218^x219)<x220));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x221 = 1060482LLU;
	volatile int8_t x222 = INT8_MAX;
	static volatile int16_t x223 = INT16_MIN;
	uint8_t x224 = 126U;
	static volatile uint64_t t31 = 243525222LLU;

	t31 = (x221>>((x222^x223)<x224));

	if (t31 != 530241LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int32_t x226 = INT32_MIN;
	uint16_t x227 = 1252U;
	volatile int64_t x228 = -1LL;
	volatile int32_t t32 = -1;

	t32 = (x225>>((x226^x227)<x228));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x229 = 56723LLU;
	int64_t x230 = INT64_MAX;
	int32_t x232 = INT32_MIN;
	static uint64_t t33 = 2310333209256LLU;

	t33 = (x229>>((x230^x231)<x232));

	if (t33 != 56723LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x238 = 0;
	uint64_t x239 = 74480639258618LLU;
	uint8_t x240 = UINT8_MAX;
	static volatile uint64_t t34 = 8644LLU;

	t34 = (x237>>((x238^x239)<x240));

	if (t34 != 608093LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x241 = 60;
	uint64_t x243 = 86LLU;
	int8_t x244 = INT8_MIN;
	int32_t t35 = 1;

	t35 = (x241>>((x242^x243)<x244));

	if (t35 != 30) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x253 = UINT8_MAX;
	static int32_t x254 = INT32_MIN;
	volatile int8_t x255 = INT8_MIN;
	uint32_t x256 = UINT32_MAX;
	int32_t t36 = 5722;

	t36 = (x253>>((x254^x255)<x256));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x257 = 0U;
	int16_t x258 = INT16_MIN;
	uint16_t x260 = 76U;
	volatile int32_t t37 = 93;

	t37 = (x257>>((x258^x259)<x260));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x261 = 2U;
	uint32_t x262 = 10U;
	static int8_t x263 = INT8_MIN;
	static volatile uint32_t t38 = 3407U;

	t38 = (x261>>((x262^x263)<x264));

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x268 = -5162;
	volatile uint64_t t39 = 194829976752378206LLU;

	t39 = (x265>>((x266^x267)<x268));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x273 = 26377LLU;
	int16_t x274 = INT16_MIN;
	int16_t x276 = 2;
	volatile uint64_t t40 = 3LLU;

	t40 = (x273>>((x274^x275)<x276));

	if (t40 != 13188LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x278 = -1;
	int64_t x279 = INT64_MIN;
	int64_t x280 = -1LL;
	uint64_t t41 = 806LLU;

	t41 = (x277>>((x278^x279)<x280));

	if (t41 != 510LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x293 = 100354009048495LLU;
	int32_t x295 = 4877;
	int8_t x296 = INT8_MIN;
	uint64_t t42 = 78626LLU;

	t42 = (x293>>((x294^x295)<x296));

	if (t42 != 50177004524247LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x298 = 82185179U;
	int16_t x300 = -1;
	int32_t t43 = 3;

	t43 = (x297>>((x298^x299)<x300));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x301 = 2017U;
	static int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MAX;

	t44 = (x301>>((x302^x303)<x304));

	if (t44 != 1008) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MAX;
	int64_t x315 = -1LL;
	int8_t x316 = INT8_MIN;

	t45 = (x313>>((x314^x315)<x316));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x322 = -32;
	int8_t x323 = 0;
	int64_t x324 = INT64_MIN;
	uint64_t t46 = UINT64_MAX;

	t46 = (x321>>((x322^x323)<x324));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x326 = -1860430253927857283LL;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -1;
	int32_t t47 = 4;

	t47 = (x325>>((x326^x327)<x328));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x330 = INT8_MIN;
	uint16_t x331 = 0U;
	uint32_t t48 = 1415343U;

	t48 = (x329>>((x330^x331)<x332));

	if (t48 != 21018964U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x341 = UINT16_MAX;
	volatile int16_t x342 = 3;
	uint16_t x343 = UINT16_MAX;
	static volatile int32_t x344 = INT32_MIN;
	volatile int32_t t49 = -242349;

	t49 = (x341>>((x342^x343)<x344));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x345 = 14;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = -1;
	static int16_t x348 = -1;
	int32_t t50 = -1;

	t50 = (x345>>((x346^x347)<x348));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x354 = INT32_MAX;
	uint64_t x355 = UINT64_MAX;
	int64_t x356 = INT64_MIN;
	uint64_t t51 = 67LLU;

	t51 = (x353>>((x354^x355)<x356));

	if (t51 != 1208LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x357 = 2629;
	int64_t x358 = 4270719236830LL;
	static uint16_t x359 = UINT16_MAX;
	int32_t x360 = INT32_MIN;

	t52 = (x357>>((x358^x359)<x360));

	if (t52 != 2629) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x361 = 24049U;
	static int32_t x363 = -59661;
	volatile int32_t t53 = 246545;

	t53 = (x361>>((x362^x363)<x364));

	if (t53 != 12024) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	volatile int8_t x372 = 0;
	volatile int32_t t54 = -1956;

	t54 = (x369>>((x370^x371)<x372));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x373 = 19654896102335994LLU;
	int8_t x374 = 0;
	volatile int64_t x376 = INT64_MIN;
	static volatile uint64_t t55 = 29LLU;

	t55 = (x373>>((x374^x375)<x376));

	if (t55 != 19654896102335994LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x381 = 24225157LL;
	static uint64_t x382 = UINT64_MAX;
	uint8_t x383 = 1U;

	t56 = (x381>>((x382^x383)<x384));

	if (t56 != 24225157LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x393 = UINT64_MAX;
	static int32_t x395 = INT32_MIN;
	int8_t x396 = 12;
	uint64_t t57 = 54022853777258LLU;

	t57 = (x393>>((x394^x395)<x396));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x397 = UINT64_MAX;
	static volatile uint16_t x398 = 118U;
	uint16_t x400 = 160U;
	static uint64_t t58 = 41075534972578LLU;

	t58 = (x397>>((x398^x399)<x400));

	if (t58 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x401 = 443944376U;
	uint64_t x402 = 488450472054155532LLU;
	int16_t x403 = INT16_MIN;
	uint32_t t59 = 1025129860U;

	t59 = (x401>>((x402^x403)<x404));

	if (t59 != 443944376U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x409 = 1;
	static int16_t x410 = INT16_MIN;
	int64_t x411 = -544052851165LL;
	int32_t t60 = -13;

	t60 = (x409>>((x410^x411)<x412));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x413 = 1259U;
	static volatile int16_t x414 = INT16_MIN;
	volatile int32_t x415 = 1944;
	int64_t x416 = INT64_MIN;
	int32_t t61 = 12502792;

	t61 = (x413>>((x414^x415)<x416));

	if (t61 != 1259) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x417 = 42;
	int16_t x418 = -3;
	uint32_t x419 = 2121141935U;
	int32_t t62 = -1007656820;

	t62 = (x417>>((x418^x419)<x420));

	if (t62 != 21) { NG(); } else { ; }
	
}

void f63(void) {


	t63 = (x421>>((x422^x423)<x424));

	if (t63 != 7284735LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x425 = 0;
	int16_t x426 = INT16_MIN;
	static volatile int64_t x427 = -31827LL;
	static uint64_t x428 = 11382LLU;

	t64 = (x425>>((x426^x427)<x428));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x431 = 6047U;

	t65 = (x429>>((x430^x431)<x432));

	if (t65 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x436 = -1LL;

	t66 = (x433>>((x434^x435)<x436));

	if (t66 != 7825U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x438 = 9291LLU;
	uint64_t x439 = UINT64_MAX;
	static uint64_t x440 = UINT64_MAX;
	volatile int32_t t67 = -18320934;

	t67 = (x437>>((x438^x439)<x440));

	if (t67 != 38) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x442 = UINT32_MAX;
	int8_t x443 = -1;
	volatile uint32_t x444 = UINT32_MAX;
	uint64_t t68 = 2309858625LLU;

	t68 = (x441>>((x442^x443)<x444));

	if (t68 != 94106452076772271LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x446 = -8713;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	volatile int32_t t69 = -2686276;

	t69 = (x445>>((x446^x447)<x448));

	if (t69 != 22) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x453 = 39U;
	static int16_t x454 = INT16_MAX;
	static volatile int32_t x455 = INT32_MIN;
	volatile int64_t x456 = INT64_MIN;
	volatile uint32_t t70 = 5869407U;

	t70 = (x453>>((x454^x455)<x456));

	if (t70 != 39U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x458 = INT16_MAX;
	int16_t x459 = -1;
	static int64_t x460 = 10020561499175647LL;
	volatile int32_t t71 = 1053861;

	t71 = (x457>>((x458^x459)<x460));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x461 = 5;
	int16_t x462 = -1;
	uint32_t x464 = 199188U;
	static int32_t t72 = -196044;

	t72 = (x461>>((x462^x463)<x464));

	if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x473 = UINT16_MAX;
	uint64_t x474 = 286423876797259LLU;
	volatile int16_t x475 = -1;
	int8_t x476 = -7;
	volatile int32_t t73 = 2180136;

	t73 = (x473>>((x474^x475)<x476));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x478 = INT16_MIN;
	int8_t x479 = INT8_MIN;
	uint8_t x480 = 2U;
	volatile int32_t t74 = -375921447;

	t74 = (x477>>((x478^x479)<x480));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x485 = UINT64_MAX;
	static uint16_t x486 = UINT16_MAX;
	int8_t x487 = -1;
	uint64_t t75 = 37360LLU;

	t75 = (x485>>((x486^x487)<x488));

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x489 = 3218207312519LL;
	int8_t x490 = INT8_MAX;
	volatile int16_t x492 = INT16_MAX;
	int64_t t76 = -82578327LL;

	t76 = (x489>>((x490^x491)<x492));

	if (t76 != 3218207312519LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x493 = UINT8_MAX;
	int8_t x494 = INT8_MIN;
	volatile uint16_t x496 = 3U;
	int32_t t77 = -118320180;

	t77 = (x493>>((x494^x495)<x496));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x497 = UINT32_MAX;
	uint64_t x498 = 2302329481850683LLU;
	int16_t x499 = -29;
	int16_t x500 = -18;
	uint32_t t78 = 1119514158U;

	t78 = (x497>>((x498^x499)<x500));

	if (t78 != 2147483647U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x501 = 99096149;
	int32_t x502 = INT32_MIN;
	volatile int32_t t79 = 47739220;

	t79 = (x501>>((x502^x503)<x504));

	if (t79 != 99096149) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x505 = 450465LLU;
	volatile int16_t x506 = INT16_MAX;
	volatile int64_t x508 = INT64_MIN;
	static uint64_t t80 = 89LLU;

	t80 = (x505>>((x506^x507)<x508));

	if (t80 != 225232LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x517 = 8982U;
	uint16_t x518 = UINT16_MAX;
	int64_t x520 = INT64_MIN;
	int32_t t81 = 340304;

	t81 = (x517>>((x518^x519)<x520));

	if (t81 != 8982) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x521 = INT8_MAX;
	int16_t x522 = INT16_MAX;
	int64_t x523 = -1LL;
	uint64_t x524 = UINT64_MAX;
	static volatile int32_t t82 = 109;

	t82 = (x521>>((x522^x523)<x524));

	if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x529 = 1563;
	volatile int64_t x531 = 60LL;
	int16_t x532 = -85;

	t83 = (x529>>((x530^x531)<x532));

	if (t83 != 1563) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x536 = 1;
	volatile int64_t t84 = -6111507156988613LL;

	t84 = (x533>>((x534^x535)<x536));

	if (t84 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x557 = 316886750391187422LLU;
	static uint8_t x558 = 44U;
	int32_t x559 = INT32_MIN;
	volatile uint64_t x560 = 73LLU;
	uint64_t t85 = 15809010LLU;

	t85 = (x557>>((x558^x559)<x560));

	if (t85 != 316886750391187422LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x561 = UINT32_MAX;
	uint64_t x562 = 28LLU;
	int16_t x563 = 16344;
	static int8_t x564 = 4;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (x561>>((x562^x563)<x564));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x566 = -3252;
	static int16_t x567 = INT16_MIN;
	static uint16_t x568 = UINT16_MAX;
	int32_t t87 = -112972;

	t87 = (x565>>((x566^x567)<x568));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x569 = 152LL;
	static uint32_t x570 = 11U;
	static int16_t x571 = -1;
	static volatile int8_t x572 = -13;

	t88 = (x569>>((x570^x571)<x572));

	if (t88 != 152LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x585 = 64U;
	int32_t x586 = INT32_MAX;
	static int64_t x587 = -81627272LL;
	int64_t x588 = -1LL;
	int32_t t89 = 0;

	t89 = (x585>>((x586^x587)<x588));

	if (t89 != 32) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x599 = INT32_MIN;
	int64_t x600 = INT64_MIN;
	volatile int64_t t90 = INT64_MAX;

	t90 = (x597>>((x598^x599)<x600));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x606 = -3;
	static uint16_t x608 = 10182U;
	volatile int32_t t91 = 0;

	t91 = (x605>>((x606^x607)<x608));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x609 = 0;
	volatile uint8_t x610 = 24U;
	int32_t t92 = -222694;

	t92 = (x609>>((x610^x611)<x612));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x613 = UINT16_MAX;
	uint64_t x614 = UINT64_MAX;
	int64_t x615 = -1LL;
	int64_t x616 = INT64_MIN;
	int32_t t93 = -76336;

	t93 = (x613>>((x614^x615)<x616));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x621 = 6U;
	int32_t x622 = -1;
	uint8_t x623 = UINT8_MAX;
	int32_t t94 = 1272578;

	t94 = (x621>>((x622^x623)<x624));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x625 = 1871U;
	static int32_t x626 = INT32_MIN;
	uint16_t x627 = UINT16_MAX;
	static int8_t x628 = INT8_MAX;
	int32_t t95 = 16;

	t95 = (x625>>((x626^x627)<x628));

	if (t95 != 935) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x631 = UINT16_MAX;
	static int64_t x632 = INT64_MIN;
	volatile int64_t t96 = 0LL;

	t96 = (x629>>((x630^x631)<x632));

	if (t96 != 2695314555LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x633 = 22U;
	volatile int16_t x634 = -465;
	uint64_t x635 = UINT64_MAX;
	int32_t x636 = INT32_MIN;
	volatile int32_t t97 = 4;

	t97 = (x633>>((x634^x635)<x636));

	if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x637 = 1803949963LLU;
	int32_t x638 = 26253;
	int64_t x639 = 971598068396848322LL;
	volatile uint8_t x640 = UINT8_MAX;
	volatile uint64_t t98 = 1342688LLU;

	t98 = (x637>>((x638^x639)<x640));

	if (t98 != 1803949963LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x641 = UINT32_MAX;
	uint32_t x642 = 14125U;
	int16_t x643 = -29;
	uint32_t t99 = UINT32_MAX;

	t99 = (x641>>((x642^x643)<x644));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

