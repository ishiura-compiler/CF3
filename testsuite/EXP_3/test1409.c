#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -51;
int16_t x3 = -1;
int64_t x10 = 38288246431285LL;
static volatile uint64_t x29 = UINT64_MAX;
int32_t x30 = 13841570;
uint16_t x40 = 29U;
int64_t x61 = -1471570LL;
uint8_t x70 = UINT8_MAX;
static int32_t t6 = 159;
int32_t x97 = -15028;
uint16_t x98 = 3U;
int8_t x100 = INT8_MAX;
int8_t x110 = INT8_MIN;
int64_t x111 = -130LL;
int64_t x118 = -88LL;
int16_t x133 = -9294;
volatile int16_t x135 = INT16_MAX;
uint32_t t13 = 993U;
int64_t x148 = 73284LL;
uint16_t x168 = UINT16_MAX;
uint8_t x185 = UINT8_MAX;
static int32_t t18 = -206571903;
volatile uint16_t x194 = 2878U;
volatile int16_t x196 = INT16_MAX;
volatile int64_t t20 = 1086289035460LL;
volatile int32_t x215 = -554752;
int64_t x217 = -1LL;
static int32_t x243 = INT32_MIN;
volatile int8_t x250 = 24;
int16_t x275 = INT16_MIN;
int64_t x281 = INT64_MAX;
uint64_t x282 = UINT64_MAX;
int8_t x321 = INT8_MIN;
uint16_t x322 = 51U;
uint8_t x324 = 4U;
int64_t x328 = INT64_MAX;
uint64_t x350 = 1009161741905LLU;
volatile int32_t x355 = -537686886;
uint32_t x371 = 784U;
uint8_t x405 = UINT8_MAX;
static volatile uint16_t x435 = UINT16_MAX;
uint32_t t48 = 117U;
int32_t x443 = -1;
volatile uint64_t x458 = UINT64_MAX;
uint32_t x459 = 2696U;
uint32_t x482 = UINT32_MAX;
int8_t x500 = INT8_MAX;
int32_t x509 = 7225547;
int64_t x513 = INT64_MIN;
static uint64_t x522 = 209882971087LLU;
int64_t x523 = INT64_MIN;
int64_t x538 = -1LL;
int16_t x541 = -1;
volatile int64_t x542 = -34644787667644068LL;
int64_t x569 = INT64_MAX;
volatile int64_t x570 = INT64_MIN;
int8_t x609 = INT8_MAX;
volatile int64_t x614 = -5661192710523250LL;
uint8_t x622 = UINT8_MAX;
uint32_t x624 = 1824172U;
int8_t x642 = INT8_MIN;
int8_t x644 = 54;
int32_t t65 = -379961;
int8_t x653 = INT8_MIN;
uint32_t x655 = 105161793U;
int8_t x692 = -25;
int8_t x713 = INT8_MAX;
int8_t x715 = INT8_MIN;
int8_t x716 = INT8_MAX;
static int8_t x732 = -1;
volatile uint32_t t71 = 827416355U;
volatile uint32_t x742 = UINT32_MAX;
static int64_t x746 = INT64_MIN;
int16_t x750 = -1;
static uint16_t x752 = 925U;
int16_t x774 = INT16_MIN;
volatile int32_t t78 = -502;
uint8_t x801 = 89U;
volatile int16_t x803 = 10;
volatile uint64_t x812 = 6209136851635081LLU;
int64_t x814 = INT64_MAX;
int32_t x816 = INT32_MIN;
uint64_t x836 = 4199651581126842544LLU;
static int8_t x838 = INT8_MIN;
volatile int32_t t85 = -464164240;
int64_t x847 = INT64_MIN;
volatile uint32_t x870 = 491537U;
volatile uint64_t x871 = 24434LLU;
static int32_t x872 = -724901928;
volatile int32_t t90 = -2517;
int32_t x895 = -1;
int32_t x918 = -1;
static int8_t x926 = INT8_MAX;
static uint16_t x948 = UINT16_MAX;
int8_t x957 = -1;
int8_t x961 = 17;
int8_t x962 = INT8_MIN;


void f0(void) {
	volatile uint64_t x2 = UINT64_MAX;
	uint8_t x4 = 34U;
	static volatile uint64_t t0 = 4LLU;

	t0 = ((x1%x2)%(x3<x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 1230506500432409LLU;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MAX;
	volatile uint64_t t1 = 17813LLU;

	t1 = ((x9%x10)%(x11<x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x31 = 3571U;
	uint64_t x32 = 137622981698010LLU;
	volatile uint64_t t2 = 394283162LLU;

	t2 = ((x29%x30)%(x31<x32));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	uint16_t x35 = 1U;
	uint8_t x36 = 27U;
	uint32_t t3 = 121105501U;

	t3 = ((x33%x34)%(x35<x36));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x37 = 2249371;
	volatile int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MIN;
	volatile int64_t t4 = 2046LL;

	t4 = ((x37%x38)%(x39<x40));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x62 = -1LL;
	int16_t x63 = INT16_MAX;
	static uint32_t x64 = 63192U;
	int64_t t5 = -181LL;

	t5 = ((x61%x62)%(x63<x64));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x69 = 9U;
	int64_t x71 = INT64_MIN;
	int64_t x72 = 299976LL;

	t6 = ((x69%x70)%(x71<x72));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = 8899LLU;
	int32_t x75 = INT32_MIN;
	volatile int16_t x76 = 103;
	uint64_t t7 = 4675502234736LLU;

	t7 = ((x73%x74)%(x75<x76));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x85 = INT8_MIN;
	static uint8_t x86 = UINT8_MAX;
	static int64_t x87 = INT64_MIN;
	int8_t x88 = -5;
	static int32_t t8 = 4043;

	t8 = ((x85%x86)%(x87<x88));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x99 = 70U;
	static int32_t t9 = 16804;

	t9 = ((x97%x98)%(x99<x100));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x109 = 111U;
	static int8_t x112 = INT8_MIN;
	int32_t t10 = 210;

	t10 = ((x109%x110)%(x111<x112));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x117 = INT64_MIN;
	int64_t x119 = -1LL;
	static int64_t x120 = INT64_MAX;
	int64_t t11 = 27LL;

	t11 = ((x117%x118)%(x119<x120));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x134 = INT64_MAX;
	int64_t x136 = INT64_MAX;
	volatile int64_t t12 = 2067665180105813793LL;

	t12 = ((x133%x134)%(x135<x136));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x141 = 9076010U;
	static int16_t x142 = -2;
	int32_t x143 = -241;
	volatile uint64_t x144 = UINT64_MAX;

	t13 = ((x141%x142)%(x143<x144));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x145 = -1;
	int16_t x146 = -2;
	int32_t x147 = -5630;
	static volatile int32_t t14 = -1;

	t14 = ((x145%x146)%(x147<x148));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x161 = 7534U;
	volatile int16_t x162 = -1;
	static int16_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile uint32_t t15 = 29661U;

	t15 = ((x161%x162)%(x163<x164));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x165 = INT8_MAX;
	static volatile uint8_t x166 = 15U;
	volatile int64_t x167 = -1LL;
	static int32_t t16 = -8932;

	t16 = ((x165%x166)%(x167<x168));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x173 = -1301871748788025055LL;
	uint8_t x174 = 2U;
	volatile int64_t x175 = INT64_MIN;
	uint32_t x176 = 54638U;
	int64_t t17 = -3284933389666106421LL;

	t17 = ((x173%x174)%(x175<x176));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x186 = INT16_MIN;
	volatile uint32_t x187 = 0U;
	int16_t x188 = INT16_MIN;

	t18 = ((x185%x186)%(x187<x188));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x193 = -1;
	int32_t x195 = INT32_MIN;
	int32_t t19 = 0;

	t19 = ((x193%x194)%(x195<x196));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x197 = 1LL;
	int16_t x198 = INT16_MIN;
	int64_t x199 = 7LL;
	uint8_t x200 = UINT8_MAX;

	t20 = ((x197%x198)%(x199<x200));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x201 = INT16_MAX;
	static int16_t x202 = INT16_MIN;
	int64_t x203 = -8196LL;
	int8_t x204 = INT8_MIN;
	int32_t t21 = 543878;

	t21 = ((x201%x202)%(x203<x204));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x213 = 6;
	uint32_t x214 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	uint32_t t22 = 168047647U;

	t22 = ((x213%x214)%(x215<x216));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x218 = 1;
	static int8_t x219 = 57;
	uint64_t x220 = 15286653830349029LLU;
	volatile int64_t t23 = -326575146LL;

	t23 = ((x217%x218)%(x219<x220));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x221 = 16;
	static int8_t x222 = INT8_MIN;
	volatile uint64_t x223 = 536LLU;
	volatile int64_t x224 = INT64_MAX;
	volatile int32_t t24 = -78247743;

	t24 = ((x221%x222)%(x223<x224));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x225 = 113U;
	uint16_t x226 = UINT16_MAX;
	uint16_t x227 = 1U;
	int32_t x228 = INT32_MAX;
	volatile int32_t t25 = 1766;

	t25 = ((x225%x226)%(x227<x228));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x241 = 10589U;
	int8_t x242 = -1;
	int64_t x244 = INT64_MAX;
	uint32_t t26 = 220U;

	t26 = ((x241%x242)%(x243<x244));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x245 = 17503U;
	volatile uint16_t x246 = 208U;
	int64_t x247 = INT64_MIN;
	int16_t x248 = -1;
	volatile int32_t t27 = -738854983;

	t27 = ((x245%x246)%(x247<x248));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x249 = -1;
	int16_t x251 = INT16_MIN;
	int8_t x252 = -1;
	int32_t t28 = -1;

	t28 = ((x249%x250)%(x251<x252));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x253 = INT8_MAX;
	static int16_t x254 = INT16_MIN;
	uint32_t x255 = 11U;
	uint8_t x256 = 56U;
	int32_t t29 = 3719;

	t29 = ((x253%x254)%(x255<x256));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x265 = UINT32_MAX;
	static int16_t x266 = INT16_MAX;
	int64_t x267 = -1LL;
	uint32_t x268 = 434U;
	volatile uint32_t t30 = 32049U;

	t30 = ((x265%x266)%(x267<x268));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x273 = -1;
	volatile int16_t x274 = -1;
	uint8_t x276 = UINT8_MAX;
	static int32_t t31 = -78098;

	t31 = ((x273%x274)%(x275<x276));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x283 = INT32_MIN;
	uint16_t x284 = UINT16_MAX;
	uint64_t t32 = 26046484866LLU;

	t32 = ((x281%x282)%(x283<x284));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x293 = -1;
	int16_t x294 = 1003;
	volatile uint32_t x295 = 14U;
	int32_t x296 = -1;
	volatile int32_t t33 = -82;

	t33 = ((x293%x294)%(x295<x296));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x305 = INT64_MAX;
	int64_t x306 = 1691LL;
	volatile uint64_t x307 = 48724871870LLU;
	int32_t x308 = -181;
	volatile int64_t t34 = 40138199069913274LL;

	t34 = ((x305%x306)%(x307<x308));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x323 = -1;
	volatile int32_t t35 = 1;

	t35 = ((x321%x322)%(x323<x324));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x325 = 57415U;
	volatile int64_t x326 = INT64_MIN;
	static int8_t x327 = -1;
	int64_t t36 = 2078606LL;

	t36 = ((x325%x326)%(x327<x328));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x341 = 3065513935571265130LLU;
	int64_t x342 = 5274LL;
	uint32_t x343 = 85124078U;
	volatile int8_t x344 = -1;
	volatile uint64_t t37 = 346880221712LLU;

	t37 = ((x341%x342)%(x343<x344));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x349 = UINT32_MAX;
	static int32_t x351 = -517;
	uint16_t x352 = 4518U;
	static uint64_t t38 = 75LLU;

	t38 = ((x349%x350)%(x351<x352));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x353 = 12341416LLU;
	int8_t x354 = INT8_MIN;
	int16_t x356 = 0;
	uint64_t t39 = 24642238455375840LLU;

	t39 = ((x353%x354)%(x355<x356));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x369 = INT16_MAX;
	volatile uint16_t x370 = 5U;
	static int8_t x372 = -1;
	int32_t t40 = 538468;

	t40 = ((x369%x370)%(x371<x372));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x401 = 9U;
	uint64_t x402 = 404LLU;
	int64_t x403 = INT64_MIN;
	volatile int8_t x404 = -1;
	uint64_t t41 = 904504466063047LLU;

	t41 = ((x401%x402)%(x403<x404));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x406 = INT16_MAX;
	int64_t x407 = -74687715571616LL;
	volatile uint8_t x408 = 111U;
	volatile int32_t t42 = 51;

	t42 = ((x405%x406)%(x407<x408));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x409 = INT8_MIN;
	uint64_t x410 = 1728LLU;
	int8_t x411 = INT8_MIN;
	static uint8_t x412 = 2U;
	uint64_t t43 = 5876974653030279196LLU;

	t43 = ((x409%x410)%(x411<x412));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x413 = INT64_MIN;
	int64_t x414 = -24981229LL;
	int16_t x415 = -2;
	uint16_t x416 = 29162U;
	int64_t t44 = -7904956922866LL;

	t44 = ((x413%x414)%(x415<x416));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x417 = INT8_MIN;
	int64_t x418 = -44LL;
	int8_t x419 = -1;
	int64_t x420 = INT64_MAX;
	volatile int64_t t45 = 121088796866728LL;

	t45 = ((x417%x418)%(x419<x420));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x421 = 0;
	volatile int64_t x422 = INT64_MIN;
	uint8_t x423 = UINT8_MAX;
	volatile int32_t x424 = 346414;
	volatile int64_t t46 = 41493581804655388LL;

	t46 = ((x421%x422)%(x423<x424));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x425 = -9;
	volatile uint64_t x426 = 24699350263LLU;
	int16_t x427 = -113;
	static int64_t x428 = INT64_MAX;
	uint64_t t47 = 3642410523LLU;

	t47 = ((x425%x426)%(x427<x428));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x433 = -1;
	uint32_t x434 = 56U;
	int32_t x436 = INT32_MAX;

	t48 = ((x433%x434)%(x435<x436));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x441 = UINT32_MAX;
	uint32_t x442 = UINT32_MAX;
	volatile int64_t x444 = 208328LL;
	volatile uint32_t t49 = 866850U;

	t49 = ((x441%x442)%(x443<x444));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x445 = INT32_MIN;
	static int8_t x446 = INT8_MAX;
	uint8_t x447 = 5U;
	uint64_t x448 = 3175914009262774037LLU;
	static int32_t t50 = 829;

	t50 = ((x445%x446)%(x447<x448));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x457 = 324276768U;
	int32_t x460 = INT32_MAX;
	volatile uint64_t t51 = 1098742333LLU;

	t51 = ((x457%x458)%(x459<x460));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x481 = INT32_MIN;
	volatile int64_t x483 = -17561LL;
	static int64_t x484 = 0LL;
	volatile uint32_t t52 = 344592U;

	t52 = ((x481%x482)%(x483<x484));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x497 = 329U;
	int32_t x498 = -1;
	int32_t x499 = INT32_MIN;
	volatile uint32_t t53 = 186U;

	t53 = ((x497%x498)%(x499<x500));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x510 = UINT16_MAX;
	uint32_t x511 = 734U;
	int32_t x512 = INT32_MAX;
	volatile int32_t t54 = 7352494;

	t54 = ((x509%x510)%(x511<x512));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x514 = INT16_MIN;
	int64_t x515 = INT64_MIN;
	static volatile uint32_t x516 = 8394U;
	static int64_t t55 = -68072260462LL;

	t55 = ((x513%x514)%(x515<x516));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x521 = INT16_MIN;
	static int64_t x524 = -1LL;
	uint64_t t56 = 1904412LLU;

	t56 = ((x521%x522)%(x523<x524));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x537 = 1635555;
	uint32_t x539 = 434315U;
	int16_t x540 = -7;
	int64_t t57 = -3LL;

	t57 = ((x537%x538)%(x539<x540));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x543 = INT16_MIN;
	int8_t x544 = INT8_MIN;
	volatile int64_t t58 = -237611468329447LL;

	t58 = ((x541%x542)%(x543<x544));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MAX;
	volatile int64_t t59 = -20475084313653905LL;

	t59 = ((x569%x570)%(x571<x572));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x610 = INT8_MIN;
	volatile uint16_t x611 = 3U;
	static uint64_t x612 = 1873851677614167753LLU;
	volatile int32_t t60 = -279895;

	t60 = ((x609%x610)%(x611<x612));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x613 = INT64_MIN;
	static int32_t x615 = -4059858;
	uint16_t x616 = 8136U;
	int64_t t61 = 675921793LL;

	t61 = ((x613%x614)%(x615<x616));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x621 = -155530279523038164LL;
	uint16_t x623 = UINT16_MAX;
	volatile int64_t t62 = -97535LL;

	t62 = ((x621%x622)%(x623<x624));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x637 = 3;
	uint8_t x638 = UINT8_MAX;
	int32_t x639 = INT32_MIN;
	uint8_t x640 = 0U;
	static int32_t t63 = -11;

	t63 = ((x637%x638)%(x639<x640));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x641 = 0U;
	int8_t x643 = 1;
	static volatile uint32_t t64 = 4464161U;

	t64 = ((x641%x642)%(x643<x644));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x649 = INT16_MIN;
	uint16_t x650 = 7334U;
	uint32_t x651 = 718276U;
	int8_t x652 = INT8_MIN;

	t65 = ((x649%x650)%(x651<x652));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x654 = UINT16_MAX;
	uint64_t x656 = 37232848386152LLU;
	volatile int32_t t66 = 535803;

	t66 = ((x653%x654)%(x655<x656));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x661 = -213803772340LL;
	volatile int8_t x662 = -4;
	int16_t x663 = -1887;
	int16_t x664 = INT16_MAX;
	volatile int64_t t67 = 286LL;

	t67 = ((x661%x662)%(x663<x664));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x669 = 2U;
	int8_t x670 = 6;
	static int16_t x671 = INT16_MIN;
	static int32_t x672 = INT32_MAX;
	volatile int32_t t68 = 6;

	t68 = ((x669%x670)%(x671<x672));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x689 = 0;
	uint8_t x690 = UINT8_MAX;
	volatile int32_t x691 = INT32_MIN;
	int32_t t69 = 47325040;

	t69 = ((x689%x690)%(x691<x692));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x714 = INT16_MAX;
	int32_t t70 = -1301161;

	t70 = ((x713%x714)%(x715<x716));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x729 = 23852572U;
	int16_t x730 = INT16_MAX;
	int32_t x731 = -351;

	t71 = ((x729%x730)%(x731<x732));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x733 = 3U;
	static int8_t x734 = INT8_MIN;
	static uint32_t x735 = 0U;
	volatile uint8_t x736 = 28U;
	volatile int32_t t72 = -10349509;

	t72 = ((x733%x734)%(x735<x736));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x741 = INT8_MIN;
	int16_t x743 = INT16_MIN;
	volatile int16_t x744 = INT16_MAX;
	volatile uint32_t t73 = 928U;

	t73 = ((x741%x742)%(x743<x744));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x745 = UINT32_MAX;
	int16_t x747 = -1;
	uint8_t x748 = 15U;
	volatile int64_t t74 = 5129860877871165LL;

	t74 = ((x745%x746)%(x747<x748));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x749 = INT16_MAX;
	int16_t x751 = -354;
	volatile int32_t t75 = -11674;

	t75 = ((x749%x750)%(x751<x752));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x753 = INT64_MAX;
	volatile int16_t x754 = INT16_MIN;
	static uint64_t x755 = 2LLU;
	static int32_t x756 = 35214824;
	volatile int64_t t76 = -678104782LL;

	t76 = ((x753%x754)%(x755<x756));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x769 = 87U;
	volatile int8_t x770 = -10;
	int8_t x771 = INT8_MIN;
	static int64_t x772 = INT64_MAX;
	int32_t t77 = -4;

	t77 = ((x769%x770)%(x771<x772));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x773 = 24;
	int16_t x775 = INT16_MIN;
	volatile int8_t x776 = -1;

	t78 = ((x773%x774)%(x775<x776));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x785 = -340LL;
	uint32_t x786 = 1558U;
	int16_t x787 = -4036;
	static uint8_t x788 = 9U;
	volatile int64_t t79 = -90029561LL;

	t79 = ((x785%x786)%(x787<x788));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x802 = -1LL;
	int16_t x804 = 5074;
	static int64_t t80 = 57222280LL;

	t80 = ((x801%x802)%(x803<x804));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x809 = 0U;
	int32_t x810 = -1;
	uint32_t x811 = UINT32_MAX;
	static int32_t t81 = -241241;

	t81 = ((x809%x810)%(x811<x812));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x813 = 23U;
	volatile uint64_t x815 = 5642512212041853825LLU;
	static int64_t t82 = 264572167991LL;

	t82 = ((x813%x814)%(x815<x816));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x829 = INT16_MIN;
	int32_t x830 = 200925;
	static int16_t x831 = 1;
	int16_t x832 = INT16_MAX;
	volatile int32_t t83 = 20738707;

	t83 = ((x829%x830)%(x831<x832));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x833 = INT64_MIN;
	int32_t x834 = INT32_MIN;
	volatile uint64_t x835 = 202LLU;
	static int64_t t84 = -181382592771LL;

	t84 = ((x833%x834)%(x835<x836));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x837 = 1411U;
	uint64_t x839 = 12LLU;
	uint8_t x840 = UINT8_MAX;

	t85 = ((x837%x838)%(x839<x840));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x845 = 68U;
	uint16_t x846 = UINT16_MAX;
	volatile int64_t x848 = INT64_MAX;
	uint32_t t86 = 1468U;

	t86 = ((x845%x846)%(x847<x848));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x849 = 71653482U;
	int8_t x850 = INT8_MIN;
	int32_t x851 = INT32_MIN;
	volatile uint16_t x852 = 7U;
	static uint32_t t87 = 18392U;

	t87 = ((x849%x850)%(x851<x852));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x857 = -1;
	int16_t x858 = 15;
	int64_t x859 = INT64_MIN;
	uint8_t x860 = 115U;
	int32_t t88 = 44546300;

	t88 = ((x857%x858)%(x859<x860));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x869 = 1526;
	volatile uint32_t t89 = 0U;

	t89 = ((x869%x870)%(x871<x872));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x881 = INT32_MIN;
	int32_t x882 = -1;
	int64_t x883 = INT64_MIN;
	int64_t x884 = -1891976574LL;

	t90 = ((x881%x882)%(x883<x884));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x885 = -18;
	volatile int32_t x886 = INT32_MIN;
	int64_t x887 = INT64_MIN;
	int16_t x888 = INT16_MAX;
	volatile int32_t t91 = -1009;

	t91 = ((x885%x886)%(x887<x888));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x889 = 25;
	int32_t x890 = -1;
	int64_t x891 = -2928318290147LL;
	int8_t x892 = -2;
	volatile int32_t t92 = -3931792;

	t92 = ((x889%x890)%(x891<x892));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x893 = UINT16_MAX;
	int32_t x894 = INT32_MIN;
	static uint16_t x896 = 41U;
	int32_t t93 = -10106;

	t93 = ((x893%x894)%(x895<x896));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x905 = -1;
	int16_t x906 = -1;
	int16_t x907 = INT16_MIN;
	int64_t x908 = INT64_MAX;
	int32_t t94 = 671209;

	t94 = ((x905%x906)%(x907<x908));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x917 = 39731LL;
	int32_t x919 = INT32_MIN;
	int16_t x920 = 11749;
	int64_t t95 = 62789178865384143LL;

	t95 = ((x917%x918)%(x919<x920));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x925 = INT32_MAX;
	int8_t x927 = INT8_MAX;
	uint16_t x928 = 228U;
	volatile int32_t t96 = 19920;

	t96 = ((x925%x926)%(x927<x928));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x945 = 2U;
	int32_t x946 = INT32_MIN;
	static int8_t x947 = 1;
	static int32_t t97 = -346;

	t97 = ((x945%x946)%(x947<x948));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x958 = INT64_MAX;
	uint32_t x959 = 24U;
	uint32_t x960 = UINT32_MAX;
	int64_t t98 = -6LL;

	t98 = ((x957%x958)%(x959<x960));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x963 = INT32_MIN;
	volatile int64_t x964 = -1LL;
	int32_t t99 = -3158;

	t99 = ((x961%x962)%(x963<x964));

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

