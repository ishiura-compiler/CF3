#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MIN;
uint64_t x6 = UINT64_MAX;
int32_t x7 = -1;
uint64_t t1 = 10236681340LLU;
uint32_t x13 = 91205U;
static int8_t x21 = -27;
int32_t x29 = INT32_MAX;
static uint32_t x30 = UINT32_MAX;
int8_t x31 = INT8_MIN;
int8_t x48 = INT8_MAX;
int32_t x53 = INT32_MAX;
volatile int8_t x65 = INT8_MAX;
int16_t x72 = INT16_MIN;
uint32_t x111 = UINT32_MAX;
int16_t x137 = -1;
uint8_t x150 = 124U;
volatile uint64_t t17 = 2817590LLU;
uint16_t x157 = 982U;
int8_t x159 = 2;
int32_t x192 = -2659603;
int8_t x193 = -2;
int64_t x195 = INT64_MIN;
static int64_t t20 = -2075233044305LL;
int32_t x213 = INT32_MIN;
uint32_t x215 = 584887U;
int64_t t22 = -949463898LL;
static uint16_t x235 = 1812U;
int64_t x244 = INT64_MIN;
int32_t x246 = INT32_MIN;
uint64_t t27 = 1822474587333781LLU;
volatile int8_t x274 = INT8_MIN;
uint32_t x297 = 12165089U;
static volatile int16_t x298 = -2;
uint64_t x299 = UINT64_MAX;
static uint16_t x325 = 6U;
volatile uint32_t t37 = 56348356U;
int32_t x334 = INT32_MAX;
volatile int64_t t38 = 2063911786662671678LL;
int64_t x341 = 0LL;
uint8_t x343 = UINT8_MAX;
uint16_t x350 = UINT16_MAX;
static uint16_t x353 = UINT16_MAX;
static int64_t t42 = 98542LL;
static volatile int32_t t43 = -209;
int64_t x422 = INT64_MIN;
int16_t x430 = -212;
int64_t x445 = INT64_MIN;
uint16_t x464 = UINT16_MAX;
static int16_t x477 = 3694;
uint16_t x480 = 36U;
int64_t t50 = 555666128190LL;
volatile int32_t t54 = 54;
int32_t x534 = INT32_MIN;
uint64_t x535 = UINT64_MAX;
int64_t x542 = -1LL;
int32_t x546 = -1;
uint32_t x552 = 8U;
int16_t x613 = 0;
static int32_t x629 = -1366569;
int32_t x630 = -4094;
volatile int32_t t67 = 995;
volatile uint64_t x633 = 116717546102LLU;
static int8_t x655 = INT8_MIN;
volatile int8_t x685 = INT8_MIN;
int32_t x695 = INT32_MIN;
static int16_t x725 = INT16_MIN;
static uint8_t x728 = 45U;
uint64_t t74 = 67619LLU;
uint32_t x735 = UINT32_MAX;
volatile uint32_t t75 = 32428U;
int16_t x751 = INT16_MIN;
static int32_t x770 = -1;
int32_t x783 = INT32_MIN;
int32_t x799 = INT32_MAX;
uint8_t x800 = 67U;
int16_t x805 = -1;
uint64_t x806 = 481040063941299LLU;
volatile uint64_t t85 = 29LLU;
int32_t x816 = INT32_MAX;
int16_t x821 = INT16_MIN;
int32_t x828 = INT32_MIN;
volatile int16_t x855 = -45;
int16_t x883 = INT16_MAX;
uint32_t x885 = UINT32_MAX;
uint16_t x888 = UINT16_MAX;
uint16_t x903 = 1621U;
static volatile int64_t t96 = 278156423453253236LL;
uint16_t x913 = UINT16_MAX;
volatile uint32_t x922 = UINT32_MAX;
uint32_t x923 = UINT32_MAX;


void f0(void) {
	volatile uint8_t x1 = 59U;
	uint32_t x2 = 2U;
	volatile int8_t x3 = INT8_MIN;
	uint32_t x4 = 107614298U;
	static uint32_t t0 = 1702764761U;

	t0 = (x1/((x2+x3)/x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x8 = 1160712898309765505LLU;

	t1 = (x5/((x6+x7)/x8));

	if (t1 != 1229782938247301256LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = 613308LL;
	static uint8_t x15 = 17U;
	static int16_t x16 = -940;
	int64_t t2 = -557640953544149998LL;

	t2 = (x13/((x14+x15)/x16));

	if (t2 != -139LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x17 = 3964U;
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = 7U;
	int16_t x20 = -1;
	volatile uint32_t t3 = 0U;

	t3 = (x17/((x18+x19)/x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -3672444614745LL;
	int64_t x23 = 89252869495LL;
	int8_t x24 = -1;
	static int64_t t4 = 1LL;

	t4 = (x21/((x22+x23)/x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x32 = INT8_MAX;
	uint32_t t5 = 419U;

	t5 = (x29/((x30+x31)/x32));

	if (t5 != 63U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = 1U;
	volatile int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	volatile uint32_t t6 = 4U;

	t6 = (x45/((x46+x47)/x48));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 228839901U;
	volatile uint64_t x56 = 3903LLU;
	uint64_t t7 = 12922725447342LLU;

	t7 = (x53/((x54+x55)/x56));

	if (t7 != 36632LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x61 = INT64_MAX;
	static uint64_t x62 = 933LLU;
	int64_t x63 = INT64_MIN;
	static int32_t x64 = INT32_MAX;
	volatile uint64_t t8 = 61114904764649202LLU;

	t8 = (x61/((x62+x63)/x64));

	if (t8 != 2147483647LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x66 = -101;
	uint32_t x67 = UINT32_MAX;
	uint16_t x68 = 1477U;
	static uint32_t t9 = 9968642U;

	t9 = (x65/((x66+x67)/x68));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = -1573751LL;
	int16_t x71 = -203;
	uint64_t t10 = 11036449848793251LLU;

	t10 = (x69/((x70+x71)/x72));

	if (t10 != 384307168202282325LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x77 = 10147084589920LL;
	int16_t x78 = 2462;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	int64_t t11 = -1454LL;

	t11 = (x77/((x78+x79)/x80));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x81 = INT64_MAX;
	volatile int64_t x82 = INT64_MIN;
	uint8_t x83 = 2U;
	int8_t x84 = -1;
	volatile int64_t t12 = 686889600LL;

	t12 = (x81/((x82+x83)/x84));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x109 = 2;
	int64_t x110 = 401884117158189LL;
	volatile int32_t x112 = -164428;
	volatile int64_t t13 = -3583015LL;

	t13 = (x109/((x110+x111)/x112));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x121 = 5724;
	static int32_t x122 = INT32_MAX;
	int8_t x123 = INT8_MIN;
	uint16_t x124 = 2163U;
	volatile int32_t t14 = -240;

	t14 = (x121/((x122+x123)/x124));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 4015U;
	volatile uint64_t x131 = 2389523062LLU;
	uint8_t x132 = UINT8_MAX;
	volatile uint64_t t15 = 8821684344034406705LLU;

	t15 = (x129/((x130+x131)/x132));

	if (t15 != 1968556872490LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x138 = 2U;
	volatile int64_t x139 = INT64_MIN;
	static volatile uint64_t x140 = 23712047385394LLU;
	uint64_t t16 = 97LLU;

	t16 = (x137/((x138+x139)/x140));

	if (t16 != 47424105656700LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x149 = -3237989;
	static uint16_t x151 = UINT16_MAX;
	uint64_t x152 = 1204LLU;

	t17 = (x149/((x150+x151)/x152));

	if (t17 != 341606371735302104LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x158 = INT32_MIN;
	static volatile int8_t x160 = -20;
	static int32_t t18 = -2;

	t18 = (x157/((x158+x159)/x160));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	static volatile int64_t t19 = -46LL;

	t19 = (x189/((x190+x191)/x192));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x194 = 1U;
	int8_t x196 = -25;

	t20 = (x193/((x194+x195)/x196));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x214 = INT32_MIN;
	int8_t x216 = 1;
	volatile uint32_t t21 = 27832U;

	t21 = (x213/((x214+x215)/x216));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x217 = 4U;
	int64_t x218 = -1LL;
	int8_t x219 = INT8_MIN;
	uint8_t x220 = 4U;

	t22 = (x217/((x218+x219)/x220));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x221 = UINT8_MAX;
	int32_t x222 = INT32_MIN;
	static volatile uint64_t x223 = UINT64_MAX;
	volatile uint64_t x224 = 5LLU;
	uint64_t t23 = 502520328LLU;

	t23 = (x221/((x222+x223)/x224));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = 93U;
	static int8_t x227 = -23;
	int64_t x228 = -1LL;
	int64_t t24 = -13LL;

	t24 = (x225/((x226+x227)/x228));

	if (t24 != 131762457669353940LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x233 = -1;
	volatile int8_t x234 = -1;
	static volatile int8_t x236 = INT8_MIN;
	volatile int32_t t25 = -783805630;

	t25 = (x233/((x234+x235)/x236));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x242 = UINT64_MAX;
	static int64_t x243 = -1LL;
	static uint64_t t26 = 59919080968LLU;

	t26 = (x241/((x242+x243)/x244));

	if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x245 = INT32_MIN;
	uint64_t x247 = 273854806LLU;
	uint16_t x248 = UINT16_MAX;

	t27 = (x245/((x246+x247)/x248));

	if (t27 != 65534LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x261 = -1LL;
	int64_t x262 = 5323476LL;
	int32_t x263 = -1;
	int8_t x264 = 1;
	int64_t t28 = -2279991LL;

	t28 = (x261/((x262+x263)/x264));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x265 = 0LLU;
	int32_t x266 = 1057250802;
	volatile int32_t x267 = -16655527;
	int8_t x268 = -4;
	volatile uint64_t t29 = 47609726520971479LLU;

	t29 = (x265/((x266+x267)/x268));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x273 = UINT8_MAX;
	int8_t x275 = -1;
	int8_t x276 = 62;
	int32_t t30 = -1;

	t30 = (x273/((x274+x275)/x276));

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x281 = 13556LLU;
	uint32_t x282 = 191U;
	int8_t x283 = -1;
	uint8_t x284 = 25U;
	volatile uint64_t t31 = 36LLU;

	t31 = (x281/((x282+x283)/x284));

	if (t31 != 1936LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x289 = 189LLU;
	int16_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MIN;
	uint64_t t32 = 374LLU;

	t32 = (x289/((x290+x291)/x292));

	if (t32 != 189LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x300 = 125U;
	uint64_t t33 = 4127218552586062141LLU;

	t33 = (x297/((x298+x299)/x300));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x305 = INT64_MIN;
	static volatile uint16_t x306 = 109U;
	int16_t x307 = INT16_MIN;
	static uint64_t x308 = 2563059LLU;
	uint64_t t34 = 6697622930302LLU;

	t34 = (x305/((x306+x307)/x308));

	if (t34 != 1281529LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x317 = INT16_MIN;
	static uint64_t x318 = 3675705LLU;
	uint16_t x319 = 22U;
	uint8_t x320 = UINT8_MAX;
	volatile uint64_t t35 = 36LLU;

	t35 = (x317/((x318+x319)/x320));

	if (t35 != 1279779663778931LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x321 = -1;
	volatile uint64_t x322 = UINT64_MAX;
	int32_t x323 = -1;
	int16_t x324 = 2470;
	uint64_t t36 = 2280577324408295812LLU;

	t36 = (x321/((x322+x323)/x324));

	if (t36 != 2470LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x326 = 0U;
	uint32_t x327 = UINT32_MAX;
	static uint8_t x328 = UINT8_MAX;

	t37 = (x325/((x326+x327)/x328));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x333 = INT8_MIN;
	static int64_t x335 = -760951691406LL;
	int16_t x336 = INT16_MIN;

	t38 = (x333/((x334+x335)/x336));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x342 = 14;
	uint8_t x344 = 2U;
	static int64_t t39 = -1LL;

	t39 = (x341/((x342+x343)/x344));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x349 = UINT8_MAX;
	int32_t x351 = INT32_MIN;
	int8_t x352 = 7;
	static volatile int32_t t40 = -731;

	t40 = (x349/((x350+x351)/x352));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x354 = 11;
	int32_t x355 = 140504;
	volatile uint8_t x356 = 1U;
	volatile int32_t t41 = -224117505;

	t41 = (x353/((x354+x355)/x356));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x389 = INT16_MAX;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -768918259LL;
	static int16_t x392 = 13;

	t42 = (x389/((x390+x391)/x392));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x401 = -3;
	volatile int16_t x402 = INT16_MAX;
	int16_t x403 = -1;
	uint8_t x404 = 33U;

	t43 = (x401/((x402+x403)/x404));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x421 = INT64_MIN;
	int64_t x423 = 33910228653LL;
	uint8_t x424 = 2U;
	int64_t t44 = -3184864LL;

	t44 = (x421/((x422+x423)/x424));

	if (t44 != 2LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x429 = -636235;
	int8_t x431 = -1;
	volatile int8_t x432 = 42;
	int32_t t45 = -35811892;

	t45 = (x429/((x430+x431)/x432));

	if (t45 != 127247) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x446 = 678891468LLU;
	volatile int64_t x447 = INT64_MIN;
	int8_t x448 = 1;
	static uint64_t t46 = 5LLU;

	t46 = (x445/((x446+x447)/x448));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x453 = -1;
	int16_t x454 = -171;
	static int8_t x455 = -20;
	volatile uint8_t x456 = 4U;
	volatile int32_t t47 = 32983724;

	t47 = (x453/((x454+x455)/x456));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x461 = INT16_MAX;
	volatile int64_t x462 = INT64_MAX;
	int32_t x463 = -1;
	volatile int64_t t48 = 5704424894LL;

	t48 = (x461/((x462+x463)/x464));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x478 = INT16_MAX;
	int64_t x479 = -1LL;
	volatile int64_t t49 = -210447070201LL;

	t49 = (x477/((x478+x479)/x480));

	if (t49 != 4LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x481 = UINT16_MAX;
	int16_t x482 = -3;
	int64_t x483 = INT64_MAX;
	static int8_t x484 = -55;

	t50 = (x481/((x482+x483)/x484));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x489 = 1954U;
	static volatile int32_t x490 = INT32_MAX;
	uint32_t x491 = 21U;
	static volatile uint8_t x492 = 99U;
	uint32_t t51 = 359U;

	t51 = (x489/((x490+x491)/x492));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x501 = UINT8_MAX;
	uint64_t x502 = UINT64_MAX;
	static int8_t x503 = -1;
	uint32_t x504 = UINT32_MAX;
	uint64_t t52 = 963800164311239694LLU;

	t52 = (x501/((x502+x503)/x504));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x509 = 7U;
	int64_t x510 = INT64_MIN;
	int32_t x511 = INT32_MAX;
	int64_t x512 = -1LL;
	int64_t t53 = 208836332735908LL;

	t53 = (x509/((x510+x511)/x512));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x521 = UINT8_MAX;
	int32_t x522 = -1;
	int32_t x523 = INT32_MAX;
	int8_t x524 = 1;

	t54 = (x521/((x522+x523)/x524));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x533 = INT16_MIN;
	int64_t x536 = INT64_MIN;
	uint64_t t55 = 135168970040260727LLU;

	t55 = (x533/((x534+x535)/x536));

	if (t55 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x541 = INT32_MIN;
	uint32_t x543 = 25345786U;
	int16_t x544 = INT16_MAX;
	volatile int64_t t56 = 63LL;

	t56 = (x541/((x542+x543)/x544));

	if (t56 != -2778115LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x545 = 7U;
	int64_t x547 = -157439958966344278LL;
	uint16_t x548 = 491U;
	int64_t t57 = -2092707229150427511LL;

	t57 = (x545/((x546+x547)/x548));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x549 = 1839U;
	int64_t x550 = -15LL;
	uint8_t x551 = UINT8_MAX;
	volatile int64_t t58 = -2LL;

	t58 = (x549/((x550+x551)/x552));

	if (t58 != 61LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x553 = -1;
	int32_t x554 = 3006262;
	volatile int64_t x555 = -40092859LL;
	static uint16_t x556 = 6U;
	int64_t t59 = 193621LL;

	t59 = (x553/((x554+x555)/x556));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x565 = INT16_MAX;
	int16_t x566 = INT16_MIN;
	int8_t x567 = INT8_MIN;
	int16_t x568 = 28;
	int32_t t60 = -55;

	t60 = (x565/((x566+x567)/x568));

	if (t60 != -27) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x581 = UINT32_MAX;
	int32_t x582 = -4143;
	int16_t x583 = INT16_MIN;
	int8_t x584 = 4;
	volatile uint32_t t61 = 93242U;

	t61 = (x581/((x582+x583)/x584));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x589 = INT16_MIN;
	static uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MIN;
	static int8_t x592 = -1;
	volatile int32_t t62 = 368;

	t62 = (x589/((x590+x591)/x592));

	if (t62 != 258) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x597 = -5097568;
	uint16_t x598 = UINT16_MAX;
	static int64_t x599 = INT64_MIN;
	uint32_t x600 = 279U;
	static volatile int64_t t63 = 422583559743LL;

	t63 = (x597/((x598+x599)/x600));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x609 = 55201108U;
	int16_t x610 = INT16_MIN;
	static int32_t x611 = -44244;
	int32_t x612 = 109;
	static volatile uint32_t t64 = 102U;

	t64 = (x609/((x610+x611)/x612));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x614 = UINT8_MAX;
	uint8_t x615 = 1U;
	int32_t x616 = -1;
	volatile int32_t t65 = -244063;

	t65 = (x613/((x614+x615)/x616));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x625 = 10U;
	static uint64_t x626 = 10625LLU;
	static uint16_t x627 = 16U;
	uint16_t x628 = 3807U;
	static volatile uint64_t t66 = 1LLU;

	t66 = (x625/((x626+x627)/x628));

	if (t66 != 5LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x631 = -1;
	int8_t x632 = INT8_MAX;

	t67 = (x629/((x630+x631)/x632));

	if (t67 != 42705) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x634 = -93606261742315LL;
	static volatile int8_t x635 = INT8_MIN;
	int32_t x636 = 56263;
	volatile uint64_t t68 = 1028768842548LLU;

	t68 = (x633/((x634+x635)/x636));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x641 = 5558U;
	static int64_t x642 = INT64_MIN;
	int64_t x643 = 7654566415LL;
	uint8_t x644 = 4U;
	volatile int64_t t69 = 777066276396643382LL;

	t69 = (x641/((x642+x643)/x644));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x653 = INT64_MAX;
	static int16_t x654 = INT16_MAX;
	int8_t x656 = -1;
	int64_t t70 = 6945413427LL;

	t70 = (x653/((x654+x655)/x656));

	if (t70 != -282587457852715LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x657 = -240;
	static volatile uint16_t x658 = 168U;
	uint16_t x659 = UINT16_MAX;
	uint8_t x660 = UINT8_MAX;
	int32_t t71 = -16;

	t71 = (x657/((x658+x659)/x660));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x686 = -1;
	volatile int32_t x687 = 63553637;
	volatile int64_t x688 = -452LL;
	int64_t t72 = -79750601870LL;

	t72 = (x685/((x686+x687)/x688));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x693 = UINT16_MAX;
	int32_t x694 = 1038758;
	int32_t x696 = 208868588;
	static volatile int32_t t73 = 7531642;

	t73 = (x693/((x694+x695)/x696));

	if (t73 != -6553) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x726 = 102LLU;
	uint16_t x727 = 0U;

	t74 = (x725/((x726+x727)/x728));

	if (t74 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x733 = 1U;
	int32_t x734 = -6685;
	static int32_t x736 = INT32_MIN;

	t75 = (x733/((x734+x735)/x736));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x749 = -1;
	int16_t x750 = 0;
	volatile uint16_t x752 = 1263U;
	int32_t t76 = 960031;

	t76 = (x749/((x750+x751)/x752));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x753 = -1;
	int32_t x754 = INT32_MAX;
	int16_t x755 = INT16_MIN;
	int64_t x756 = 357370LL;
	volatile int64_t t77 = -299419605989431493LL;

	t77 = (x753/((x754+x755)/x756));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x757 = INT8_MIN;
	volatile int16_t x758 = INT16_MAX;
	volatile uint32_t x759 = UINT32_MAX;
	uint8_t x760 = 115U;
	uint32_t t78 = 6989043U;

	t78 = (x757/((x758+x759)/x760));

	if (t78 != 15123123U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x769 = INT8_MIN;
	volatile int64_t x771 = -4519365LL;
	volatile uint16_t x772 = 36U;
	int64_t t79 = -385157312225610893LL;

	t79 = (x769/((x770+x771)/x772));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x773 = UINT16_MAX;
	static int32_t x774 = INT32_MIN;
	static uint8_t x775 = 1U;
	int8_t x776 = INT8_MIN;
	volatile int32_t t80 = -130240863;

	t80 = (x773/((x774+x775)/x776));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x781 = UINT8_MAX;
	uint8_t x782 = 104U;
	uint16_t x784 = 11038U;
	int32_t t81 = 1627048;

	t81 = (x781/((x782+x783)/x784));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x789 = 13U;
	int32_t x790 = 524618704;
	volatile int64_t x791 = INT64_MIN;
	int32_t x792 = -704318;
	volatile int64_t t82 = 3058535LL;

	t82 = (x789/((x790+x791)/x792));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x797 = 21912U;
	static uint32_t x798 = UINT32_MAX;
	volatile uint32_t t83 = 194U;

	t83 = (x797/((x798+x799)/x800));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x801 = -13655;
	int64_t x802 = -157428852494395901LL;
	int32_t x803 = 55;
	volatile uint32_t x804 = UINT32_MAX;
	volatile int64_t t84 = -1LL;

	t84 = (x801/((x802+x803)/x804));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x807 = 2467U;
	static uint16_t x808 = 14U;

	t85 = (x805/((x806+x807)/x808));

	if (t85 != 536866LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x813 = -1LL;
	uint64_t x814 = 91548217550530264LLU;
	static int32_t x815 = 444798;
	static uint64_t t86 = 50LLU;

	t86 = (x813/((x814+x815)/x816));

	if (t86 != 432712761572LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x822 = 40651U;
	volatile int16_t x823 = INT16_MAX;
	uint8_t x824 = UINT8_MAX;
	static volatile uint32_t t87 = 2U;

	t87 = (x821/((x822+x823)/x824));

	if (t87 != 14964928U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x825 = 3783109643162LLU;
	volatile int32_t x826 = -1;
	static int64_t x827 = INT64_MAX;
	volatile uint64_t t88 = 3908387051274LLU;

	t88 = (x825/((x826+x827)/x828));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x853 = -1;
	uint64_t x854 = UINT64_MAX;
	int64_t x856 = 23991610343101324LL;
	volatile uint64_t t89 = 339979375011420325LLU;

	t89 = (x853/((x854+x855)/x856));

	if (t89 != 24019198012642645LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x857 = 137U;
	uint32_t x858 = UINT32_MAX;
	static uint16_t x859 = 544U;
	uint8_t x860 = UINT8_MAX;
	static uint32_t t90 = 15708335U;

	t90 = (x857/((x858+x859)/x860));

	if (t90 != 68U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x881 = INT64_MIN;
	static int16_t x882 = -1;
	int8_t x884 = INT8_MAX;
	int64_t t91 = -6LL;

	t91 = (x881/((x882+x883)/x884));

	if (t91 != -35749504018816960LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x886 = 733805U;
	int16_t x887 = INT16_MAX;
	volatile uint32_t t92 = 1473562U;

	t92 = (x885/((x886+x887)/x888));

	if (t92 != 390451572U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x889 = INT32_MAX;
	static volatile int8_t x890 = INT8_MAX;
	static int8_t x891 = INT8_MIN;
	int8_t x892 = 1;
	int32_t t93 = -22;

	t93 = (x889/((x890+x891)/x892));

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x901 = -1;
	uint16_t x902 = UINT16_MAX;
	static volatile int8_t x904 = INT8_MAX;
	static int32_t t94 = 1457794;

	t94 = (x901/((x902+x903)/x904));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x905 = 7U;
	int16_t x906 = INT16_MIN;
	uint32_t x907 = 3915970U;
	static volatile int8_t x908 = 1;
	static uint32_t t95 = 12786U;

	t95 = (x905/((x906+x907)/x908));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x909 = -1;
	int64_t x910 = 2364062068388LL;
	volatile int32_t x911 = INT32_MIN;
	int16_t x912 = 78;

	t96 = (x909/((x910+x911)/x912));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x914 = -1;
	int8_t x915 = INT8_MIN;
	volatile int8_t x916 = INT8_MAX;
	static volatile int32_t t97 = -1;

	t97 = (x913/((x914+x915)/x916));

	if (t97 != -65535) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x917 = -45LL;
	uint8_t x918 = UINT8_MAX;
	int16_t x919 = INT16_MAX;
	int16_t x920 = 1485;
	int64_t t98 = 4250LL;

	t98 = (x917/((x918+x919)/x920));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x921 = INT32_MAX;
	static int16_t x924 = INT16_MIN;
	volatile uint32_t t99 = 50386U;

	t99 = (x921/((x922+x923)/x924));

	if (t99 != 2147483647U) { NG(); } else { ; }
	
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

