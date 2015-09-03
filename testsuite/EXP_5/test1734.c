#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 208288453LLU;
static int16_t x22 = -1;
uint32_t t1 = 25327234U;
static int64_t t3 = 0LL;
int8_t x67 = INT8_MIN;
int16_t x68 = INT16_MIN;
int32_t x95 = INT32_MIN;
int32_t t6 = 101704031;
int64_t x102 = INT64_MAX;
uint32_t x103 = UINT32_MAX;
static uint64_t x149 = 0LLU;
volatile int16_t x150 = INT16_MAX;
int16_t x161 = -108;
volatile int8_t x162 = -1;
volatile int16_t x163 = INT16_MIN;
int32_t x165 = -1;
int16_t x167 = INT16_MIN;
volatile int64_t x250 = -116342LL;
int16_t x252 = INT16_MIN;
static volatile int64_t t18 = -61122715446LL;
volatile int64_t t20 = -4331302894140577LL;
volatile int32_t t22 = 522;
uint8_t x296 = 12U;
int8_t x314 = INT8_MIN;
static int64_t x325 = -404271512064883LL;
int32_t x327 = -701107319;
int64_t x331 = INT64_MAX;
volatile int16_t x337 = 0;
int16_t x358 = INT16_MAX;
int32_t t30 = -35924;
int32_t x386 = 96181692;
int32_t x387 = -203195;
uint8_t x392 = 3U;
volatile int32_t t37 = -64220;
int64_t x433 = -1LL;
int64_t x442 = INT64_MIN;
static uint16_t x489 = 5U;
int16_t x501 = INT16_MIN;
static int64_t x502 = INT64_MAX;
int32_t x540 = 3;
int32_t x549 = 6160;
volatile int16_t x552 = INT16_MIN;
uint32_t x572 = 2U;
int16_t x589 = INT16_MAX;
uint8_t x592 = UINT8_MAX;
static uint64_t t52 = 103117850146780LLU;
int8_t x624 = -1;
volatile int64_t t53 = 3783113233741525LL;
int32_t x637 = -1;
int8_t x667 = -1;
static volatile int32_t t56 = 5396871;
static int16_t x697 = INT16_MAX;
int8_t x709 = INT8_MAX;
int32_t x722 = -1;
volatile uint32_t t60 = 238U;
volatile uint16_t x747 = UINT16_MAX;
static int8_t x755 = INT8_MIN;
static volatile uint8_t x759 = UINT8_MAX;
static uint32_t x762 = UINT32_MAX;
static volatile int8_t x771 = INT8_MIN;
int16_t x801 = INT16_MAX;
uint32_t x806 = UINT32_MAX;
int64_t t70 = -926989133LL;
uint8_t x829 = UINT8_MAX;
int8_t x844 = -36;
volatile int64_t t73 = -823920613242LL;
uint16_t x849 = 6U;
volatile int16_t x862 = -9501;
int64_t t75 = -3LL;
uint16_t x869 = 1U;
volatile uint64_t x911 = UINT64_MAX;
int8_t x920 = INT8_MIN;
int32_t x929 = -1;
int32_t x932 = INT32_MAX;
int64_t t80 = -5028530LL;
int32_t x934 = -44935;
volatile uint16_t x936 = 15752U;
int64_t t81 = -11578196LL;
static int64_t x941 = 401494156LL;
uint64_t x947 = 11498252LLU;
volatile uint8_t x953 = UINT8_MAX;
int8_t x955 = -1;
int32_t x958 = 829620222;
static int8_t x985 = INT8_MIN;
uint64_t x986 = UINT64_MAX;
int64_t x987 = -16742225098950LL;
volatile uint64_t t88 = 854LLU;
int16_t x1010 = -1;
static volatile uint32_t t93 = 3766U;
uint16_t x1070 = 11072U;
int16_t x1111 = -1;
int8_t x1126 = INT8_MIN;
volatile int32_t x1129 = INT32_MIN;
int8_t x1131 = -2;
int8_t x1132 = INT8_MAX;
volatile int32_t t98 = 79430;


void f0(void) {
	int32_t x9 = -1;
	volatile uint16_t x10 = UINT16_MAX;
	static int8_t x11 = -1;
	static uint64_t x12 = 4LLU;

	t0 = (x9%((x10&x11)/x12));

	if (t0 != 255LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x21 = 90309183U;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MAX;

	t1 = (x21%((x22&x23)/x24));

	if (t1 != 90309183U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = 705285087LLU;
	int64_t x26 = INT64_MAX;
	volatile int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = 88110653888LLU;
	uint64_t t2 = 12LLU;

	t2 = (x25%((x26&x27)/x28));

	if (t2 != 77208579LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x41 = 173LL;
	uint8_t x42 = 82U;
	int64_t x43 = -47032783806LL;
	uint8_t x44 = 2U;

	t3 = (x41%((x42&x43)/x44));

	if (t3 != 8LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x65 = -9198831;
	static uint16_t x66 = UINT16_MAX;
	volatile int32_t t4 = -96;

	t4 = (x65%((x66&x67)/x68));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x73 = INT16_MAX;
	volatile int64_t x74 = -1LL;
	static int64_t x75 = INT64_MIN;
	uint16_t x76 = 1U;
	volatile int64_t t5 = -229LL;

	t5 = (x73%((x74&x75)/x76));

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = -804686;
	int8_t x96 = INT8_MIN;

	t6 = (x93%((x94&x95)/x96));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x101 = 829;
	int32_t x104 = 10061733;
	volatile int64_t t7 = -526294827LL;

	t7 = (x101%((x102&x103)/x104));

	if (t7 != 403LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x109 = -1LL;
	int32_t x110 = -331;
	int64_t x111 = -648884240767220LL;
	volatile int32_t x112 = -15794088;
	int64_t t8 = 0LL;

	t8 = (x109%((x110&x111)/x112));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x121 = 4090986U;
	int32_t x122 = 1471;
	static int32_t x123 = -140369;
	static int64_t x124 = -1LL;
	volatile int64_t t9 = -126495888561LL;

	t9 = (x121%((x122&x123)/x124));

	if (t9 != 365LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x151 = INT32_MAX;
	uint8_t x152 = 2U;
	uint64_t t10 = 104158411158LLU;

	t10 = (x149%((x150&x151)/x152));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x153 = 26638LLU;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = -1LL;
	static int32_t x156 = 14;
	volatile uint64_t t11 = 4190898665LLU;

	t11 = (x153%((x154&x155)/x156));

	if (t11 != 3233LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x164 = -1LL;
	static int64_t t12 = 0LL;

	t12 = (x161%((x162&x163)/x164));

	if (t12 != -108LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x166 = -1LL;
	volatile int32_t x168 = 1;
	int64_t t13 = 1463105225924590LL;

	t13 = (x165%((x166&x167)/x168));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x185 = INT32_MIN;
	static int16_t x186 = -1;
	static int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	volatile int32_t t14 = -492243140;

	t14 = (x185%((x186&x187)/x188));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MAX;
	volatile uint64_t t15 = 905740258LLU;

	t15 = (x221%((x222&x223)/x224));

	if (t15 != 2147450883LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x245 = -416314739271LL;
	volatile int32_t x246 = INT32_MIN;
	int32_t x247 = -6919926;
	uint32_t x248 = 752726U;
	volatile int64_t t16 = -214355675155195LL;

	t16 = (x245%((x246&x247)/x248));

	if (t16 != -2803LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x249 = INT64_MIN;
	int8_t x251 = INT8_MIN;
	int64_t t17 = -83825345015470LL;

	t17 = (x249%((x250&x251)/x252));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x257 = INT16_MIN;
	uint32_t x258 = 189971U;
	int8_t x259 = INT8_MIN;
	int64_t x260 = -1LL;

	t18 = (x257%((x258&x259)/x260));

	if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x261 = 8212U;
	int64_t x262 = -69586678824LL;
	int8_t x263 = 25;
	volatile int32_t x264 = -3;
	static volatile int64_t t19 = -415303774631495916LL;

	t19 = (x261%((x262&x263)/x264));

	if (t19 != 4LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile uint16_t x270 = UINT16_MAX;
	static volatile int64_t x271 = -260630608910LL;
	int8_t x272 = INT8_MIN;

	t20 = (x269%((x270&x271)/x272));

	if (t20 != -156LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x277 = -1LL;
	static int8_t x278 = INT8_MIN;
	static volatile uint64_t x279 = UINT64_MAX;
	int16_t x280 = 818;
	static uint64_t t21 = 877129154799221LLU;

	t21 = (x277%((x278&x279)/x280));

	if (t21 != 897LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x281 = -30;
	int32_t x282 = -802;
	uint16_t x283 = 354U;
	int8_t x284 = -48;

	t22 = (x281%((x282&x283)/x284));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x294 = -1;
	static volatile int8_t x295 = INT8_MAX;
	int32_t t23 = 851527;

	t23 = (x293%((x294&x295)/x296));

	if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x297 = UINT64_MAX;
	volatile int16_t x298 = -56;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	volatile uint64_t t24 = 34591LLU;

	t24 = (x297%((x298&x299)/x300));

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x313 = 8090;
	int64_t x315 = INT64_MIN;
	volatile int8_t x316 = INT8_MAX;
	int64_t t25 = -1LL;

	t25 = (x313%((x314&x315)/x316));

	if (t25 != 8090LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x326 = -1;
	volatile int16_t x328 = 2259;
	volatile int64_t t26 = 692508714419LL;

	t26 = (x325%((x326&x327)/x328));

	if (t26 != -262913LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x329 = 5639U;
	static int16_t x330 = INT16_MIN;
	int32_t x332 = -4331282;
	int64_t t27 = 11LL;

	t27 = (x329%((x330&x331)/x332));

	if (t27 != 5639LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	int8_t x340 = 1;
	volatile int32_t t28 = -642;

	t28 = (x337%((x338&x339)/x340));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x349 = -15;
	int32_t x350 = -1;
	volatile int16_t x351 = INT16_MIN;
	static int8_t x352 = -1;
	volatile int32_t t29 = 974;

	t29 = (x349%((x350&x351)/x352));

	if (t29 != -15) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x357 = -1;
	uint16_t x359 = UINT16_MAX;
	volatile int16_t x360 = INT16_MAX;

	t30 = (x357%((x358&x359)/x360));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x361 = 37;
	int16_t x362 = INT16_MIN;
	volatile int64_t x363 = INT64_MIN;
	static int8_t x364 = INT8_MIN;
	static int64_t t31 = 63417498537146672LL;

	t31 = (x361%((x362&x363)/x364));

	if (t31 != 37LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x365 = 0;
	int8_t x366 = 1;
	uint8_t x367 = 105U;
	static int8_t x368 = -1;
	static volatile int32_t t32 = -15505128;

	t32 = (x365%((x366&x367)/x368));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MAX;
	static int64_t x375 = -1LL;
	int32_t x376 = -1;
	static int64_t t33 = -174306560588LL;

	t33 = (x373%((x374&x375)/x376));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x385 = INT8_MIN;
	static volatile int32_t x388 = -6;
	volatile int32_t t34 = -1;

	t34 = (x385%((x386&x387)/x388));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	volatile uint32_t t35 = 830U;

	t35 = (x389%((x390&x391)/x392));

	if (t35 != 715827881U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x409 = -70;
	uint64_t x410 = 275008040LLU;
	int32_t x411 = -1;
	static uint16_t x412 = 3U;
	uint64_t t36 = 16413107964391LLU;

	t36 = (x409%((x410&x411)/x412));

	if (t36 != 9370818LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;
	static volatile int32_t x431 = INT32_MIN;
	int8_t x432 = INT8_MIN;

	t37 = (x429%((x430&x431)/x432));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x434 = -1LL;
	uint32_t x435 = 256988146U;
	static int16_t x436 = 9;
	int64_t t38 = -10LL;

	t38 = (x433%((x434&x435)/x436));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x441 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = INT8_MAX;
	volatile int64_t t39 = 19646187LL;

	t39 = (x441%((x442&x443)/x444));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x490 = INT8_MAX;
	static int64_t x491 = 14122078092621LL;
	int64_t x492 = -1LL;
	int64_t t40 = -1LL;

	t40 = (x489%((x490&x491)/x492));

	if (t40 != 5LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x493 = UINT64_MAX;
	int16_t x494 = 722;
	volatile int8_t x495 = INT8_MIN;
	int8_t x496 = -1;
	volatile uint64_t t41 = 1355472010381LLU;

	t41 = (x493%((x494&x495)/x496));

	if (t41 != 639LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x503 = INT8_MIN;
	int64_t x504 = -4054723LL;
	static int64_t t42 = -6007613306LL;

	t42 = (x501%((x502&x503)/x504));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x517 = -331;
	static int16_t x518 = INT16_MIN;
	uint64_t x519 = UINT64_MAX;
	volatile int32_t x520 = -21087050;
	static uint64_t t43 = 6978544721561140LLU;

	t43 = (x517%((x518&x519)/x520));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x533 = 7454U;
	int32_t x534 = 8430;
	volatile int8_t x535 = -24;
	int32_t x536 = -1;
	uint32_t t44 = 7563291U;

	t44 = (x533%((x534&x535)/x536));

	if (t44 != 7454U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x537 = -1;
	volatile int32_t x538 = INT32_MIN;
	volatile int64_t x539 = INT64_MIN;
	volatile int64_t t45 = -13239LL;

	t45 = (x537%((x538&x539)/x540));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x550 = INT16_MIN;
	int32_t x551 = -39006678;
	static int32_t t46 = 11312;

	t46 = (x549%((x550&x551)/x552));

	if (t46 != 205) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x553 = 35;
	static int64_t x554 = INT64_MAX;
	int64_t x555 = -1LL;
	static uint16_t x556 = 1U;
	static int64_t t47 = 480591688404043154LL;

	t47 = (x553%((x554&x555)/x556));

	if (t47 != 35LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x569 = UINT64_MAX;
	int8_t x570 = INT8_MIN;
	int32_t x571 = INT32_MAX;
	uint64_t t48 = 1418957399LLU;

	t48 = (x569%((x570&x571)/x572));

	if (t48 != 65535LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x573 = -9109722879032LL;
	static uint32_t x574 = UINT32_MAX;
	volatile int8_t x575 = INT8_MIN;
	static int16_t x576 = INT16_MAX;
	static volatile int64_t t49 = -4770978LL;

	t49 = (x573%((x574&x575)/x576));

	if (t49 != -24107LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x577 = -1;
	static volatile uint64_t x578 = UINT64_MAX;
	static volatile int32_t x579 = INT32_MIN;
	int32_t x580 = INT32_MIN;
	volatile uint64_t t50 = 6321829LLU;

	t50 = (x577%((x578&x579)/x580));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x590 = UINT16_MAX;
	uint8_t x591 = UINT8_MAX;
	int32_t t51 = -40044;

	t51 = (x589%((x590&x591)/x592));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x605 = UINT64_MAX;
	uint8_t x606 = 108U;
	int16_t x607 = INT16_MAX;
	int16_t x608 = 60;

	t52 = (x605%((x606&x607)/x608));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x621 = -1LL;
	volatile int16_t x622 = INT16_MIN;
	static int32_t x623 = -2;

	t53 = (x621%((x622&x623)/x624));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x638 = -214;
	volatile int64_t x639 = INT64_MAX;
	uint64_t x640 = 4092LLU;
	uint64_t t54 = 4383507892LLU;

	t54 = (x637%((x638&x639)/x640));

	if (t54 != 8199LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x661 = UINT16_MAX;
	static int64_t x662 = INT64_MIN;
	static int64_t x663 = -21686663430016LL;
	volatile uint32_t x664 = 416649328U;
	int64_t t55 = -55833287LL;

	t55 = (x661%((x662&x663)/x664));

	if (t55 != 65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x665 = -1;
	uint16_t x666 = UINT16_MAX;
	int32_t x668 = 3469;

	t56 = (x665%((x666&x667)/x668));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x698 = -1;
	static int16_t x699 = INT16_MAX;
	volatile int16_t x700 = INT16_MAX;
	int32_t t57 = 3;

	t57 = (x697%((x698&x699)/x700));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x710 = UINT32_MAX;
	int8_t x711 = INT8_MIN;
	uint16_t x712 = 8U;
	uint32_t t58 = 4862426U;

	t58 = (x709%((x710&x711)/x712));

	if (t58 != 127U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x721 = -1;
	volatile uint64_t x723 = 698938521917199LLU;
	uint8_t x724 = UINT8_MAX;
	uint64_t t59 = 24LLU;

	t59 = (x721%((x722&x723)/x724));

	if (t59 != 2281674435585LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x729 = -1;
	volatile uint32_t x730 = 25248201U;
	static int16_t x731 = INT16_MIN;
	volatile uint8_t x732 = 13U;

	t60 = (x729%((x730&x731)/x732));

	if (t60 != 1756219U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x745 = -1;
	static uint64_t x746 = 7815537117LLU;
	uint64_t x748 = 1087LLU;
	uint64_t t61 = 2770920992817LLU;

	t61 = (x745%((x746&x747)/x748));

	if (t61 != 35LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x753 = 64091529U;
	int64_t x754 = -2LL;
	int8_t x756 = INT8_MIN;
	int64_t t62 = -351641799LL;

	t62 = (x753%((x754&x755)/x756));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x757 = INT32_MIN;
	volatile int8_t x758 = INT8_MIN;
	uint16_t x760 = 12U;
	static int32_t t63 = 1;

	t63 = (x757%((x758&x759)/x760));

	if (t63 != -8) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x761 = 101796210548434645LLU;
	volatile int32_t x763 = -1;
	int8_t x764 = INT8_MAX;
	volatile uint64_t t64 = 2LLU;

	t64 = (x761%((x762&x763)/x764));

	if (t64 != 20291125LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x769 = INT64_MIN;
	int32_t x770 = 7400918;
	volatile int16_t x772 = INT16_MAX;
	volatile int64_t t65 = -4009361LL;

	t65 = (x769%((x770&x771)/x772));

	if (t65 != -8LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x781 = 22;
	volatile int16_t x782 = 10;
	volatile int64_t x783 = -3140739LL;
	uint8_t x784 = 3U;
	static int64_t t66 = 296930622822156680LL;

	t66 = (x781%((x782&x783)/x784));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x785 = INT8_MAX;
	int8_t x786 = INT8_MIN;
	volatile int16_t x787 = INT16_MIN;
	uint32_t x788 = 3U;
	uint32_t t67 = 134033U;

	t67 = (x785%((x786&x787)/x788));

	if (t67 != 127U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x789 = INT16_MIN;
	int64_t x790 = INT64_MAX;
	int32_t x791 = 11743518;
	uint16_t x792 = UINT16_MAX;
	volatile int64_t t68 = 15057LL;

	t68 = (x789%((x790&x791)/x792));

	if (t68 != -11LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x802 = 69486297142722343LL;
	int16_t x803 = -13;
	uint32_t x804 = 12U;
	volatile int64_t t69 = 1373271079882LL;

	t69 = (x801%((x802&x803)/x804));

	if (t69 != 32767LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x805 = 25337001643853LL;
	int8_t x807 = INT8_MIN;
	uint32_t x808 = 64286305U;

	t70 = (x805%((x806&x807)/x808));

	if (t70 != 53LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x809 = -225807794;
	int16_t x810 = INT16_MIN;
	volatile int8_t x811 = -5;
	int16_t x812 = 5;
	volatile int32_t t71 = 202593943;

	t71 = (x809%((x810&x811)/x812));

	if (t71 != -4520) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x830 = INT64_MIN;
	static int64_t x831 = INT64_MIN;
	volatile int32_t x832 = INT32_MIN;
	static int64_t t72 = 4581LL;

	t72 = (x829%((x830&x831)/x832));

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x841 = 339U;
	int64_t x842 = INT64_MAX;
	int64_t x843 = -30LL;

	t73 = (x841%((x842&x843)/x844));

	if (t73 != 339LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x850 = INT32_MIN;
	static volatile int64_t x851 = -1LL;
	volatile int32_t x852 = INT32_MAX;
	volatile int64_t t74 = -100989228489216LL;

	t74 = (x849%((x850&x851)/x852));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x861 = -1;
	int64_t x863 = INT64_MIN;
	static volatile uint32_t x864 = 8U;

	t75 = (x861%((x862&x863)/x864));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x870 = INT64_MIN;
	static volatile int32_t x871 = INT32_MIN;
	volatile uint32_t x872 = 326U;
	int64_t t76 = 507050LL;

	t76 = (x869%((x870&x871)/x872));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x909 = 0U;
	static int16_t x910 = -1;
	static uint16_t x912 = 915U;
	uint64_t t77 = 3125LLU;

	t77 = (x909%((x910&x911)/x912));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x917 = INT8_MAX;
	static int32_t x918 = 75251;
	int16_t x919 = INT16_MIN;
	volatile int32_t t78 = -17085278;

	t78 = (x917%((x918&x919)/x920));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x921 = UINT16_MAX;
	int16_t x922 = 2341;
	static int32_t x923 = 24124;
	int8_t x924 = INT8_MIN;
	int32_t t79 = 126528155;

	t79 = (x921%((x922&x923)/x924));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x930 = -2316794972456144LL;
	static int16_t x931 = INT16_MIN;

	t80 = (x929%((x930&x931)/x932));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x933 = -18408958263364LL;
	static int64_t x935 = 8430167036LL;

	t81 = (x933%((x934&x935)/x936));

	if (t81 != -388444LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x937 = -713439;
	int64_t x938 = INT64_MAX;
	static int8_t x939 = INT8_MIN;
	static volatile int16_t x940 = 1;
	volatile int64_t t82 = -12856756602411251LL;

	t82 = (x937%((x938&x939)/x940));

	if (t82 != -713439LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x942 = -2;
	int8_t x943 = INT8_MAX;
	uint8_t x944 = 2U;
	volatile int64_t t83 = 3LL;

	t83 = (x941%((x942&x943)/x944));

	if (t83 != 7LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x945 = 5226LL;
	static int32_t x946 = -1;
	static uint8_t x948 = 5U;
	static volatile uint64_t t84 = 1231076657LLU;

	t84 = (x945%((x946&x947)/x948));

	if (t84 != 5226LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x954 = INT64_MAX;
	static uint32_t x956 = UINT32_MAX;
	volatile int64_t t85 = 125883479146782LL;

	t85 = (x953%((x954&x955)/x956));

	if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x957 = INT8_MIN;
	int16_t x959 = INT16_MIN;
	uint16_t x960 = UINT16_MAX;
	volatile int32_t t86 = -1014;

	t86 = (x957%((x958&x959)/x960));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x977 = -52;
	int8_t x978 = INT8_MIN;
	int64_t x979 = 6755823720LL;
	int8_t x980 = -1;
	static volatile int64_t t87 = 706769739LL;

	t87 = (x977%((x978&x979)/x980));

	if (t87 != -52LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x988 = 84U;

	t88 = (x985%((x986&x987)/x988));

	if (t88 != 16742225098844LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x997 = 543416434;
	uint8_t x998 = 61U;
	int16_t x999 = -1;
	volatile int8_t x1000 = -1;
	int32_t t89 = -31;

	t89 = (x997%((x998&x999)/x1000));

	if (t89 != 8) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1009 = 1025336LL;
	uint64_t x1011 = 147185883LLU;
	int8_t x1012 = INT8_MAX;
	static uint64_t t90 = 584830LLU;

	t90 = (x1009%((x1010&x1011)/x1012));

	if (t90 != 1025336LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1013 = INT32_MAX;
	volatile int64_t x1014 = 1618229147473097LL;
	static int16_t x1015 = INT16_MAX;
	uint16_t x1016 = 30U;
	int64_t t91 = 245927554309969LL;

	t91 = (x1013%((x1014&x1015)/x1016));

	if (t91 != 172LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1029 = INT8_MIN;
	int64_t x1030 = -1LL;
	volatile uint64_t x1031 = UINT64_MAX;
	uint64_t x1032 = UINT64_MAX;
	uint64_t t92 = 4622946477585LLU;

	t92 = (x1029%((x1030&x1031)/x1032));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1065 = -1;
	uint32_t x1066 = 21014536U;
	static int16_t x1067 = -1;
	int16_t x1068 = INT16_MAX;

	t93 = (x1065%((x1066&x1067)/x1068));

	if (t93 != 639U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x1069 = UINT8_MAX;
	int32_t x1071 = -16520;
	int32_t x1072 = 108;
	volatile int32_t t94 = 245620764;

	t94 = (x1069%((x1070&x1071)/x1072));

	if (t94 != 51) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1093 = -1LL;
	static int16_t x1094 = INT16_MIN;
	int32_t x1095 = -1;
	volatile int8_t x1096 = INT8_MIN;
	static volatile int64_t t95 = 7887LL;

	t95 = (x1093%((x1094&x1095)/x1096));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1109 = -6;
	volatile int64_t x1110 = INT64_MAX;
	int32_t x1112 = INT32_MIN;
	static int64_t t96 = -120423121LL;

	t96 = (x1109%((x1110&x1111)/x1112));

	if (t96 != -6LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1125 = UINT32_MAX;
	volatile uint16_t x1127 = 685U;
	int32_t x1128 = 1;
	volatile uint32_t t97 = 18838U;

	t97 = (x1125%((x1126&x1127)/x1128));

	if (t97 != 255U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1130 = 14728U;

	t98 = (x1129%((x1130&x1131)/x1132));

	if (t98 != -98) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1137 = 65520034971367LLU;
	int64_t x1138 = INT64_MAX;
	int8_t x1139 = -1;
	uint16_t x1140 = UINT16_MAX;
	static volatile uint64_t t99 = 718163154LLU;

	t99 = (x1137%((x1138&x1139)/x1140));

	if (t99 != 65520034971367LLU) { NG(); } else { ; }
	
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

