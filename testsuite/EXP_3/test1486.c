#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 2476819U;
volatile uint64_t x13 = UINT64_MAX;
static uint64_t x14 = 898629210823644746LLU;
uint32_t x35 = 51232270U;
volatile int8_t x36 = INT8_MIN;
volatile int32_t t3 = 1;
static int8_t x45 = -1;
int16_t x56 = INT16_MIN;
int8_t x62 = -1;
int16_t x71 = INT16_MIN;
static volatile int32_t t10 = 29677787;
uint16_t x87 = 102U;
int32_t x99 = INT32_MIN;
uint64_t x130 = 19760754448731157LLU;
static volatile uint64_t t16 = 413232088866631683LLU;
int16_t x133 = -1;
uint8_t x136 = UINT8_MAX;
volatile int64_t t19 = 1036813378500735LL;
static uint64_t t22 = 945732044303669433LLU;
volatile int64_t t23 = -435280LL;
int32_t t24 = 49767759;
int16_t x194 = -1;
uint16_t x196 = 3U;
int32_t x205 = INT32_MIN;
uint16_t x208 = UINT16_MAX;
int16_t x235 = INT16_MIN;
uint32_t t29 = 99465U;
uint64_t x245 = 834818327061LLU;
static volatile int32_t x247 = INT32_MIN;
int16_t x251 = INT16_MIN;
volatile int64_t x268 = INT64_MAX;
volatile uint32_t x289 = 324340736U;
int32_t x292 = INT32_MAX;
int64_t x294 = 2081948LL;
volatile int32_t x341 = 212170065;
int16_t x351 = INT16_MIN;
volatile int32_t t39 = -3059;
volatile uint32_t t40 = 192U;
static volatile int16_t x366 = -1;
static uint32_t x367 = 604989U;
volatile uint32_t t41 = 1589U;
volatile int8_t x374 = -1;
uint64_t t43 = 7983LLU;
static uint16_t x413 = UINT16_MAX;
static int64_t x432 = -1LL;
uint64_t t45 = 16077921LLU;
uint32_t x442 = 91214594U;
uint16_t x452 = 7U;
int32_t t49 = 1;
int64_t x459 = INT64_MIN;
static int32_t x487 = INT32_MIN;
static int32_t x491 = -10;
static uint32_t x519 = 9580U;
uint16_t x534 = 31U;
uint8_t x536 = UINT8_MAX;
int8_t x550 = INT8_MIN;
int32_t t62 = -90548194;
static uint8_t x568 = 45U;
int16_t x569 = INT16_MIN;
static int64_t x572 = -1LL;
int16_t x573 = INT16_MAX;
uint8_t x574 = 4U;
volatile int8_t x575 = INT8_MIN;
volatile int64_t t68 = -15356LL;
volatile int64_t x609 = INT64_MIN;
volatile int32_t t73 = 4467657;
int16_t x656 = 0;
volatile int32_t x661 = INT32_MIN;
volatile uint16_t x662 = 3U;
volatile int32_t t75 = -19;
volatile int8_t x668 = INT8_MAX;
uint8_t x669 = 2U;
uint16_t x670 = 2010U;
uint64_t x675 = 732643982511LLU;
static volatile int8_t x676 = INT8_MIN;
volatile int32_t t79 = -16051;
int64_t t80 = 7412848LL;
int32_t x731 = INT32_MIN;
int16_t x738 = INT16_MAX;
int32_t x739 = -1;
int64_t x740 = 2LL;
uint8_t x748 = 2U;
int32_t x750 = 239;
uint8_t x752 = 44U;
int8_t x760 = INT8_MAX;
uint8_t x778 = 3U;
int32_t x788 = -1;
volatile int32_t t91 = 8963;
int64_t t92 = 1757LL;
int64_t x818 = 1113LL;
int8_t x833 = -1;
int32_t x836 = INT32_MAX;
int8_t x848 = INT8_MIN;
volatile int32_t t96 = -47901168;
uint16_t x866 = UINT16_MAX;
uint64_t t99 = 27505028803918LLU;


void f0(void) {
	static int8_t x1 = -60;
	int64_t x2 = -1LL;
	volatile int8_t x3 = 2;
	int64_t t0 = -59962084912LL;

	t0 = ((x1&x2)/(x3<x4));

	if (t0 != -60LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	volatile int64_t x10 = -31LL;
	int64_t x11 = -644226090839751822LL;
	int16_t x12 = INT16_MIN;
	int64_t t1 = 143841311783821427LL;

	t1 = ((x9&x10)/(x11<x12));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x15 = INT8_MIN;
	static volatile int8_t x16 = -2;
	uint64_t t2 = 1559112342534LLU;

	t2 = ((x13&x14)/(x15<x16));

	if (t2 != 898629210823644746LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = 61U;

	t3 = ((x33&x34)/(x35<x36));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = INT16_MAX;
	int64_t x38 = INT64_MAX;
	static int64_t x39 = INT64_MIN;
	int32_t x40 = -9091887;
	static volatile int64_t t4 = -68771742614785LL;

	t4 = ((x37&x38)/(x39<x40));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x41 = INT64_MIN;
	uint8_t x42 = 4U;
	int8_t x43 = INT8_MIN;
	uint8_t x44 = 1U;
	int64_t t5 = 183335697299LL;

	t5 = ((x41&x42)/(x43<x44));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x46 = 10927U;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MIN;
	uint32_t t6 = 27562U;

	t6 = ((x45&x46)/(x47<x48));

	if (t6 != 10927U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x53 = INT8_MIN;
	int64_t x54 = 20095078776646LL;
	int64_t x55 = -5733771298775LL;
	int64_t t7 = -303661038091LL;

	t7 = ((x53&x54)/(x55<x56));

	if (t7 != 20095078776576LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x61 = INT32_MIN;
	static int8_t x63 = 12;
	uint16_t x64 = 10205U;
	int32_t t8 = INT32_MIN;

	t8 = ((x61&x62)/(x63<x64));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x65 = INT32_MIN;
	static uint64_t x66 = 23310852LLU;
	int8_t x67 = 10;
	uint32_t x68 = UINT32_MAX;
	uint64_t t9 = 437909241927LLU;

	t9 = ((x65&x66)/(x67<x68));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = 1;
	int32_t x70 = INT32_MIN;
	int8_t x72 = 17;

	t10 = ((x69&x70)/(x71<x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = 9;
	int32_t x74 = 24471051;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = UINT16_MAX;
	int32_t t11 = 15899826;

	t11 = ((x73&x74)/(x75<x76));

	if (t11 != 9) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x85 = 58108078U;
	int64_t x86 = -1LL;
	static int16_t x88 = INT16_MAX;
	static volatile int64_t t12 = -66LL;

	t12 = ((x85&x86)/(x87<x88));

	if (t12 != 58108078LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = INT8_MAX;
	uint32_t x98 = 87669632U;
	uint8_t x100 = 111U;
	uint32_t t13 = 1472316947U;

	t13 = ((x97&x98)/(x99<x100));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x109 = -13437505945348LL;
	volatile int16_t x110 = -11;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = UINT8_MAX;
	int64_t t14 = 16664306542LL;

	t14 = ((x109&x110)/(x111<x112));

	if (t14 != -13437505945356LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MIN;
	int64_t x119 = INT64_MIN;
	volatile uint64_t x120 = UINT64_MAX;
	volatile int64_t t15 = -59795585536LL;

	t15 = ((x117&x118)/(x119<x120));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x129 = UINT8_MAX;
	volatile int16_t x131 = INT16_MIN;
	int16_t x132 = 1;

	t16 = ((x129&x130)/(x131<x132));

	if (t16 != 21LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x134 = INT8_MIN;
	uint8_t x135 = 92U;
	volatile int32_t t17 = 0;

	t17 = ((x133&x134)/(x135<x136));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x137 = INT64_MIN;
	static int16_t x138 = INT16_MIN;
	uint8_t x139 = 37U;
	uint32_t x140 = 83472U;
	int64_t t18 = INT64_MIN;

	t18 = ((x137&x138)/(x139<x140));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x141 = -1LL;
	int32_t x142 = INT32_MIN;
	static int16_t x143 = -22;
	static uint16_t x144 = 224U;

	t19 = ((x141&x142)/(x143<x144));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x145 = INT64_MAX;
	uint32_t x146 = UINT32_MAX;
	static int32_t x147 = INT32_MIN;
	static int8_t x148 = -30;
	int64_t t20 = -36711875227245LL;

	t20 = ((x145&x146)/(x147<x148));

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = 147046;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = UINT32_MAX;
	static volatile int32_t t21 = -16;

	t21 = ((x149&x150)/(x151<x152));

	if (t21 != 102) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x157 = 633LLU;
	uint16_t x158 = 4U;
	volatile uint8_t x159 = 87U;
	volatile int32_t x160 = INT32_MAX;

	t22 = ((x157&x158)/(x159<x160));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x173 = -1LL;
	int64_t x174 = 2960514LL;
	int64_t x175 = -263286172683441LL;
	int8_t x176 = -41;

	t23 = ((x173&x174)/(x175<x176));

	if (t23 != 2960514LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x189 = 3229315;
	static int16_t x190 = INT16_MIN;
	uint32_t x191 = 26U;
	uint16_t x192 = UINT16_MAX;

	t24 = ((x189&x190)/(x191<x192));

	if (t24 != 3211264) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x193 = -1461LL;
	volatile int64_t x195 = -1LL;
	static volatile int64_t t25 = -1226523LL;

	t25 = ((x193&x194)/(x195<x196));

	if (t25 != -1461LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x206 = -20;
	volatile int16_t x207 = INT16_MAX;
	int32_t t26 = INT32_MIN;

	t26 = ((x205&x206)/(x207<x208));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x213 = INT64_MIN;
	static volatile uint8_t x214 = UINT8_MAX;
	static int16_t x215 = INT16_MIN;
	uint8_t x216 = 88U;
	int64_t t27 = -15304968399416LL;

	t27 = ((x213&x214)/(x215<x216));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x217 = 851U;
	uint64_t x218 = 22439467995LLU;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = UINT64_MAX;
	volatile uint64_t t28 = 530468613051LLU;

	t28 = ((x217&x218)/(x219<x220));

	if (t28 != 851LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x233 = INT32_MAX;
	static uint32_t x234 = 100941171U;
	int8_t x236 = INT8_MIN;

	t29 = ((x233&x234)/(x235<x236));

	if (t29 != 100941171U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x246 = INT64_MIN;
	static volatile int32_t x248 = 121077;
	uint64_t t30 = 33901417205274LLU;

	t30 = ((x245&x246)/(x247<x248));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x249 = 6U;
	static uint8_t x250 = UINT8_MAX;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t31 = 4104864;

	t31 = ((x249&x250)/(x251<x252));

	if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x253 = INT64_MIN;
	uint8_t x254 = UINT8_MAX;
	uint32_t x255 = 7733171U;
	static uint64_t x256 = 6464686886LLU;
	volatile int64_t t32 = -137980547403177694LL;

	t32 = ((x253&x254)/(x255<x256));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int32_t t33 = -1;

	t33 = ((x265&x266)/(x267<x268));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t t34 = 100422740U;

	t34 = ((x289&x290)/(x291<x292));

	if (t34 != 324340736U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x293 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MAX;
	uint64_t t35 = 1596351699193LLU;

	t35 = ((x293&x294)/(x295<x296));

	if (t35 != 2081948LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x317 = 828620876;
	int64_t x318 = 244406LL;
	int8_t x319 = INT8_MAX;
	int16_t x320 = 224;
	int64_t t36 = -51530561854970853LL;

	t36 = ((x317&x318)/(x319<x320));

	if (t36 != 229380LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x342 = UINT64_MAX;
	volatile uint8_t x343 = 106U;
	int64_t x344 = 848425153378203LL;
	static uint64_t t37 = 5058LLU;

	t37 = ((x341&x342)/(x343<x344));

	if (t37 != 212170065LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x345 = -1;
	int8_t x346 = -1;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = -774;
	volatile int32_t t38 = -510594203;

	t38 = ((x345&x346)/(x347<x348));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = 4;
	int8_t x352 = -1;

	t39 = ((x349&x350)/(x351<x352));

	if (t39 != 4) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x353 = 235U;
	int8_t x354 = -1;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MAX;

	t40 = ((x353&x354)/(x355<x356));

	if (t40 != 235U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x365 = 0U;
	static int8_t x368 = -1;

	t41 = ((x365&x366)/(x367<x368));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x373 = 19U;
	uint64_t x375 = 4885622LLU;
	int64_t x376 = INT64_MAX;
	int32_t t42 = 1564551;

	t42 = ((x373&x374)/(x375<x376));

	if (t42 != 19) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x405 = INT64_MIN;
	uint64_t x406 = 79500LLU;
	static volatile int16_t x407 = 2;
	volatile uint64_t x408 = UINT64_MAX;

	t43 = ((x405&x406)/(x407<x408));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x414 = 1U;
	int16_t x415 = 1;
	static uint8_t x416 = 6U;
	static int32_t t44 = 55312233;

	t44 = ((x413&x414)/(x415<x416));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x429 = 29888181468055LLU;
	static uint32_t x430 = 41749U;
	uint64_t x431 = 6198506061886229654LLU;

	t45 = ((x429&x430)/(x431<x432));

	if (t45 != 8981LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x441 = 5063LL;
	static volatile int8_t x443 = INT8_MIN;
	uint8_t x444 = 3U;
	int64_t t46 = -7805849075LL;

	t46 = ((x441&x442)/(x443<x444));

	if (t46 != 4866LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x445 = 23U;
	volatile int32_t x446 = 1;
	uint32_t x447 = 6464U;
	volatile uint32_t x448 = UINT32_MAX;
	uint32_t t47 = 550U;

	t47 = ((x445&x446)/(x447<x448));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x449 = 0U;
	int8_t x450 = -1;
	volatile int64_t x451 = INT64_MIN;
	volatile int32_t t48 = -933429;

	t48 = ((x449&x450)/(x451<x452));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x453 = INT8_MIN;
	int32_t x454 = INT32_MAX;
	int32_t x455 = INT32_MIN;
	static volatile int16_t x456 = INT16_MAX;

	t49 = ((x453&x454)/(x455<x456));

	if (t49 != 2147483520) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x457 = -6;
	uint16_t x458 = 30650U;
	static volatile int64_t x460 = -1LL;
	volatile int32_t t50 = 239838;

	t50 = ((x457&x458)/(x459<x460));

	if (t50 != 30650) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x461 = 84;
	static volatile int8_t x462 = INT8_MIN;
	static volatile int64_t x463 = -37650796689540LL;
	uint16_t x464 = 59U;
	int32_t t51 = 4;

	t51 = ((x461&x462)/(x463<x464));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x469 = -18LL;
	uint16_t x470 = 7U;
	int32_t x471 = -80562333;
	uint32_t x472 = UINT32_MAX;
	volatile int64_t t52 = 2845734574059411LL;

	t52 = ((x469&x470)/(x471<x472));

	if (t52 != 6LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x473 = UINT8_MAX;
	uint64_t x474 = 7300LLU;
	int64_t x475 = INT64_MIN;
	volatile int16_t x476 = INT16_MIN;
	uint64_t t53 = 99382394120LLU;

	t53 = ((x473&x474)/(x475<x476));

	if (t53 != 132LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x481 = -5880;
	static int32_t x482 = -5321715;
	static int32_t x483 = INT32_MIN;
	int8_t x484 = INT8_MAX;
	volatile int32_t t54 = -1377;

	t54 = ((x481&x482)/(x483<x484));

	if (t54 != -5322744) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x485 = 1LL;
	static int8_t x486 = INT8_MIN;
	int8_t x488 = INT8_MIN;
	int64_t t55 = -104599008026LL;

	t55 = ((x485&x486)/(x487<x488));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x489 = -21;
	int16_t x490 = 158;
	int32_t x492 = INT32_MAX;
	volatile int32_t t56 = 3599;

	t56 = ((x489&x490)/(x491<x492));

	if (t56 != 138) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x501 = -45500163;
	volatile uint64_t x502 = UINT64_MAX;
	static int16_t x503 = INT16_MIN;
	int32_t x504 = 12122377;
	uint64_t t57 = 6535911854578LLU;

	t57 = ((x501&x502)/(x503<x504));

	if (t57 != 18446744073664051453LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x505 = 1;
	uint32_t x506 = 10213609U;
	static volatile int8_t x507 = INT8_MIN;
	uint16_t x508 = UINT16_MAX;
	static volatile uint32_t t58 = 57144897U;

	t58 = ((x505&x506)/(x507<x508));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x517 = UINT16_MAX;
	volatile int64_t x518 = 26560402582LL;
	int32_t x520 = INT32_MIN;
	int64_t t59 = 2983981LL;

	t59 = ((x517&x518)/(x519<x520));

	if (t59 != 38038LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x525 = INT8_MAX;
	volatile int32_t x526 = INT32_MIN;
	int32_t x527 = INT32_MIN;
	static int32_t x528 = -248021545;
	int32_t t60 = -7;

	t60 = ((x525&x526)/(x527<x528));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x533 = -1;
	int64_t x535 = -5632239653869832LL;
	static volatile int32_t t61 = 0;

	t61 = ((x533&x534)/(x535<x536));

	if (t61 != 31) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x549 = 8700;
	int64_t x551 = INT64_MIN;
	volatile int16_t x552 = -1;

	t62 = ((x549&x550)/(x551<x552));

	if (t62 != 8576) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x565 = -2305367648358905110LL;
	int8_t x566 = INT8_MIN;
	uint32_t x567 = 1U;
	volatile int64_t t63 = -3789063721603612LL;

	t63 = ((x565&x566)/(x567<x568));

	if (t63 != -2305367648358905216LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x570 = UINT64_MAX;
	static int32_t x571 = INT32_MIN;
	volatile uint64_t t64 = 1826409499668939LLU;

	t64 = ((x569&x570)/(x571<x572));

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x576 = 7371U;
	static volatile int32_t t65 = 5389598;

	t65 = ((x573&x574)/(x575<x576));

	if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x585 = INT32_MIN;
	int8_t x586 = INT8_MIN;
	int32_t x587 = INT32_MAX;
	static uint64_t x588 = UINT64_MAX;
	volatile int32_t t66 = INT32_MIN;

	t66 = ((x585&x586)/(x587<x588));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x589 = 5100U;
	int32_t x590 = INT32_MIN;
	uint8_t x591 = 0U;
	volatile uint16_t x592 = UINT16_MAX;
	volatile int32_t t67 = 113496121;

	t67 = ((x589&x590)/(x591<x592));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x605 = 1005;
	int64_t x606 = INT64_MIN;
	volatile uint64_t x607 = 1058125LLU;
	int32_t x608 = INT32_MIN;

	t68 = ((x605&x606)/(x607<x608));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x610 = INT64_MIN;
	volatile uint8_t x611 = 6U;
	volatile uint32_t x612 = 2378U;
	volatile int64_t t69 = INT64_MIN;

	t69 = ((x609&x610)/(x611<x612));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x613 = 8;
	uint32_t x614 = 125341712U;
	static uint8_t x615 = 1U;
	uint64_t x616 = 25LLU;
	volatile uint32_t t70 = 5097U;

	t70 = ((x613&x614)/(x615<x616));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x625 = 322U;
	uint32_t x626 = 15480U;
	volatile int32_t x627 = INT32_MIN;
	static int8_t x628 = 29;
	static volatile uint32_t t71 = 979123182U;

	t71 = ((x625&x626)/(x627<x628));

	if (t71 != 64U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x641 = 40U;
	uint8_t x642 = 78U;
	int8_t x643 = INT8_MAX;
	uint32_t x644 = 219U;
	uint32_t t72 = 234616U;

	t72 = ((x641&x642)/(x643<x644));

	if (t72 != 8U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x645 = INT16_MAX;
	int8_t x646 = 15;
	int16_t x647 = INT16_MIN;
	int8_t x648 = INT8_MIN;

	t73 = ((x645&x646)/(x647<x648));

	if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x653 = -620LL;
	static int16_t x654 = -1;
	int32_t x655 = INT32_MIN;
	static int64_t t74 = 2696LL;

	t74 = ((x653&x654)/(x655<x656));

	if (t74 != -620LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x663 = -7;
	int64_t x664 = 93189LL;

	t75 = ((x661&x662)/(x663<x664));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x665 = UINT16_MAX;
	int32_t x666 = -423694;
	int64_t x667 = -1LL;
	volatile int32_t t76 = 1185703;

	t76 = ((x665&x666)/(x667<x668));

	if (t76 != 35058) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x671 = INT16_MAX;
	int64_t x672 = 218117LL;
	int32_t t77 = -191104933;

	t77 = ((x669&x670)/(x671<x672));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x673 = 3599;
	static int16_t x674 = INT16_MAX;
	int32_t t78 = 202;

	t78 = ((x673&x674)/(x675<x676));

	if (t78 != 3599) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x685 = UINT16_MAX;
	int8_t x686 = INT8_MIN;
	int64_t x687 = INT64_MIN;
	static volatile int64_t x688 = INT64_MAX;

	t79 = ((x685&x686)/(x687<x688));

	if (t79 != 65408) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x689 = UINT32_MAX;
	int64_t x690 = INT64_MAX;
	volatile int16_t x691 = -29;
	int32_t x692 = 0;

	t80 = ((x689&x690)/(x691<x692));

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x693 = INT32_MAX;
	static int8_t x694 = 1;
	int16_t x695 = INT16_MIN;
	int16_t x696 = -8500;
	volatile int32_t t81 = 2358;

	t81 = ((x693&x694)/(x695<x696));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x709 = UINT64_MAX;
	int8_t x710 = INT8_MIN;
	uint16_t x711 = 226U;
	int64_t x712 = 613012LL;
	static volatile uint64_t t82 = 30167588788342LLU;

	t82 = ((x709&x710)/(x711<x712));

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x729 = 3U;
	static int64_t x730 = -1LL;
	int8_t x732 = 3;
	volatile int64_t t83 = -237LL;

	t83 = ((x729&x730)/(x731<x732));

	if (t83 != 3LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x737 = 13;
	static volatile int32_t t84 = -1;

	t84 = ((x737&x738)/(x739<x740));

	if (t84 != 13) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x745 = UINT32_MAX;
	static uint16_t x746 = 245U;
	int16_t x747 = -1;
	volatile uint32_t t85 = 99999378U;

	t85 = ((x745&x746)/(x747<x748));

	if (t85 != 245U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x749 = INT32_MAX;
	volatile uint64_t x751 = 18LLU;
	int32_t t86 = -255;

	t86 = ((x749&x750)/(x751<x752));

	if (t86 != 239) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x757 = INT16_MIN;
	static int64_t x758 = -1LL;
	static int16_t x759 = -1;
	int64_t t87 = -314533LL;

	t87 = ((x757&x758)/(x759<x760));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x761 = INT16_MIN;
	volatile int64_t x762 = -390561447759587LL;
	int8_t x763 = 6;
	uint32_t x764 = 1453906U;
	static volatile int64_t t88 = -470266LL;

	t88 = ((x761&x762)/(x763<x764));

	if (t88 != -390561447772160LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x777 = UINT16_MAX;
	static int64_t x779 = INT64_MIN;
	volatile int64_t x780 = 1066456843938157971LL;
	int32_t t89 = -1648;

	t89 = ((x777&x778)/(x779<x780));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x785 = 2136;
	static int16_t x786 = -1;
	int8_t x787 = INT8_MIN;
	static volatile int32_t t90 = 461;

	t90 = ((x785&x786)/(x787<x788));

	if (t90 != 2136) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x789 = 3U;
	uint16_t x790 = 1930U;
	int8_t x791 = INT8_MIN;
	static int16_t x792 = INT16_MAX;

	t91 = ((x789&x790)/(x791<x792));

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x793 = INT32_MIN;
	int64_t x794 = 14875165358LL;
	int64_t x795 = INT64_MIN;
	uint8_t x796 = 26U;

	t92 = ((x793&x794)/(x795<x796));

	if (t92 != 12884901888LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x805 = INT32_MIN;
	static volatile int16_t x806 = INT16_MAX;
	int64_t x807 = INT64_MIN;
	uint8_t x808 = 7U;
	volatile int32_t t93 = -1;

	t93 = ((x805&x806)/(x807<x808));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x817 = 1;
	volatile int64_t x819 = -32809623596008LL;
	uint16_t x820 = 3U;
	volatile int64_t t94 = -26297631453217405LL;

	t94 = ((x817&x818)/(x819<x820));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x834 = INT16_MIN;
	static volatile int32_t x835 = INT32_MIN;
	static volatile int32_t t95 = 34884;

	t95 = ((x833&x834)/(x835<x836));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x845 = INT16_MIN;
	int32_t x846 = -1;
	int32_t x847 = INT32_MIN;

	t96 = ((x845&x846)/(x847<x848));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x853 = INT32_MIN;
	int64_t x854 = INT64_MIN;
	int16_t x855 = INT16_MIN;
	int16_t x856 = -1;
	static int64_t t97 = INT64_MIN;

	t97 = ((x853&x854)/(x855<x856));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x865 = -36;
	static int32_t x867 = -563;
	volatile int8_t x868 = 1;
	int32_t t98 = 16046377;

	t98 = ((x865&x866)/(x867<x868));

	if (t98 != 65500) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x881 = UINT64_MAX;
	volatile uint32_t x882 = UINT32_MAX;
	volatile int8_t x883 = 11;
	int8_t x884 = 19;

	t99 = ((x881&x882)/(x883<x884));

	if (t99 != 4294967295LLU) { NG(); } else { ; }
	
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

