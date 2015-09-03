#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x17 = -185892328LL;
uint64_t x28 = 376LLU;
uint64_t t2 = 0LLU;
int8_t x36 = INT8_MIN;
static int64_t t6 = -2904949403117LL;
uint16_t x75 = UINT16_MAX;
static int64_t x76 = -1LL;
int64_t t10 = 281883346610LL;
uint8_t x85 = 1U;
uint32_t x87 = UINT32_MAX;
volatile uint32_t t11 = 1396229504U;
int32_t x90 = INT32_MIN;
uint64_t t14 = 2707276106671LLU;
uint32_t x107 = 235257U;
uint32_t x114 = 305U;
static int32_t x123 = INT32_MIN;
uint64_t x129 = 1414760198460615468LLU;
int16_t x131 = INT16_MIN;
uint64_t x132 = 450126572LLU;
uint64_t x147 = UINT64_MAX;
int8_t x158 = INT8_MIN;
volatile uint32_t x165 = 1U;
int64_t x170 = INT64_MAX;
int16_t x172 = INT16_MAX;
int64_t t23 = -57428313634006602LL;
int32_t x175 = -67;
uint8_t x176 = 1U;
static int32_t x185 = INT32_MIN;
static volatile int16_t x186 = -2118;
int8_t x187 = -1;
int32_t x217 = -43064;
volatile uint64_t x218 = 456LLU;
int8_t x220 = -50;
uint16_t x225 = UINT16_MAX;
volatile uint32_t t29 = 9273U;
uint32_t t30 = 14U;
uint16_t x250 = 16391U;
int8_t x251 = INT8_MIN;
volatile uint64_t t34 = 31078407721627474LLU;
static int8_t x282 = INT8_MIN;
static int64_t t38 = 56477329040LL;
uint32_t x304 = 55683U;
static volatile uint32_t t39 = 2U;
static volatile int32_t x306 = 14920;
static volatile int16_t x308 = -24;
volatile int32_t t40 = 7126839;
static volatile uint8_t x324 = 25U;
int32_t t41 = 926;
int64_t x331 = INT64_MAX;
static uint16_t x345 = UINT16_MAX;
static uint64_t x348 = 6287661LLU;
uint64_t x350 = 3739045061164941LLU;
volatile int64_t x352 = -665371LL;
uint64_t t44 = 1858LLU;
int64_t x353 = INT64_MIN;
int32_t x354 = INT32_MIN;
volatile int8_t x355 = INT8_MIN;
int8_t x356 = -1;
volatile uint64_t x358 = 66230253049LLU;
volatile int8_t x360 = 6;
uint64_t t46 = 10949131593637LLU;
int16_t x366 = 729;
int8_t x368 = 24;
int32_t x369 = -588546065;
uint32_t x371 = UINT32_MAX;
static int32_t x392 = INT32_MAX;
int8_t x395 = -12;
int32_t t50 = 74994;
static uint32_t x409 = 3327U;
static volatile uint64_t x426 = UINT64_MAX;
int32_t t54 = -4;
uint32_t x459 = 78U;
volatile uint64_t x468 = 278672LLU;
static int32_t x557 = INT32_MIN;
volatile uint32_t x560 = 40067606U;
volatile int64_t t63 = 218102379534624413LL;
static uint16_t x562 = UINT16_MAX;
volatile int8_t x565 = INT8_MIN;
int8_t x567 = -1;
uint64_t t65 = 6227LLU;
static int64_t x608 = -1LL;
volatile int32_t t67 = -1;
int64_t x641 = INT64_MIN;
int32_t x643 = INT32_MIN;
static volatile int16_t x644 = 67;
uint8_t x659 = UINT8_MAX;
volatile int64_t x664 = -1LL;
int8_t x668 = -1;
static int16_t x674 = INT16_MIN;
int8_t x698 = INT8_MIN;
uint16_t x699 = UINT16_MAX;
int32_t x700 = -4111;
int32_t t78 = -474258466;
int32_t x706 = INT32_MIN;
int64_t t80 = -1LL;
uint32_t x717 = 251U;
static int8_t x719 = INT8_MIN;
volatile int8_t x720 = INT8_MIN;
static volatile int32_t t84 = -101;
static volatile int8_t x751 = INT8_MIN;
static int16_t x757 = -369;
uint32_t x759 = UINT32_MAX;
int16_t x767 = INT16_MIN;
static int16_t x819 = INT16_MIN;
static int64_t t90 = 194024619242LL;
int64_t t92 = -64860248014847818LL;
static int8_t x848 = -1;
int64_t x865 = -1LL;
static volatile int64_t t94 = -1LL;
static int8_t x875 = INT8_MIN;
int16_t x876 = -1;
static int32_t x881 = -1;
static int8_t x882 = INT8_MIN;
volatile int8_t x883 = 3;
volatile int16_t x884 = 1;
volatile int64_t t98 = -2181344204216LL;
int16_t x898 = INT16_MIN;


void f0(void) {
	static uint64_t x9 = 134170164478652180LLU;
	static int64_t x10 = INT64_MIN;
	volatile int32_t x11 = -1;
	int8_t x12 = -1;
	uint64_t t0 = 49959LLU;

	t0 = ((x9%x10)%(x11/x12));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x18 = 26U;
	static uint16_t x19 = UINT16_MAX;
	int8_t x20 = INT8_MIN;
	int64_t t1 = -239LL;

	t1 = ((x17%x18)%(x19/x20));

	if (t1 != -24LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x25 = 8U;
	volatile uint32_t x26 = 165910688U;
	int32_t x27 = -1;

	t2 = ((x25%x26)%(x27/x28));

	if (t2 != 8LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x33 = UINT8_MAX;
	volatile int8_t x34 = INT8_MAX;
	int16_t x35 = INT16_MIN;
	volatile int32_t t3 = -61343;

	t3 = ((x33%x34)%(x35/x36));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x41 = -1;
	uint64_t x42 = 13834765410LLU;
	int8_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	uint64_t t4 = 24LLU;

	t4 = ((x41%x42)%(x43/x44));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint32_t x46 = 2U;
	static int16_t x47 = -1;
	int32_t x48 = 1;
	static volatile uint32_t t5 = 109U;

	t5 = ((x45%x46)%(x47/x48));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MIN;
	volatile int16_t x50 = -3;
	int32_t x51 = INT32_MIN;
	static int64_t x52 = -1LL;

	t6 = ((x49%x50)%(x51/x52));

	if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x61 = -2;
	int8_t x62 = -1;
	volatile uint64_t x63 = UINT64_MAX;
	int16_t x64 = -1;
	static volatile uint64_t t7 = 22LLU;

	t7 = ((x61%x62)%(x63/x64));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x69 = 26U;
	int64_t x70 = INT64_MIN;
	static uint64_t x71 = UINT64_MAX;
	int64_t x72 = INT64_MIN;
	static uint64_t t8 = 6764LLU;

	t8 = ((x69%x70)%(x71/x72));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x73 = -1;
	uint16_t x74 = 75U;
	static int64_t t9 = -703762896LL;

	t9 = ((x73%x74)%(x75/x76));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x81 = INT32_MIN;
	static int8_t x82 = INT8_MIN;
	int64_t x83 = 68025558145256467LL;
	volatile int16_t x84 = 15219;

	t10 = ((x81%x82)%(x83/x84));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x86 = INT16_MAX;
	int8_t x88 = INT8_MIN;

	t11 = ((x85%x86)%(x87/x88));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x89 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	uint64_t t12 = 31955LLU;

	t12 = ((x89%x90)%(x91/x92));

	if (t12 != 281479271710722LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x93 = INT64_MIN;
	volatile int64_t x94 = INT64_MIN;
	int64_t x95 = INT64_MIN;
	static uint32_t x96 = 85286U;
	volatile int64_t t13 = 138172861464942127LL;

	t13 = ((x93%x94)%(x95/x96));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = 3LLU;
	uint32_t x98 = 9878676U;
	static volatile uint64_t x99 = 10626946513125LLU;
	volatile uint16_t x100 = UINT16_MAX;

	t14 = ((x97%x98)%(x99/x100));

	if (t14 != 3LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x105 = -16595385828LL;
	uint64_t x106 = UINT64_MAX;
	uint8_t x108 = UINT8_MAX;
	static uint64_t t15 = 21219LLU;

	t15 = ((x105%x106)%(x107/x108));

	if (t15 != 490LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x113 = 10;
	int32_t x115 = -1;
	static uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t16 = 12310492667487999LLU;

	t16 = ((x113%x114)%(x115/x116));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x121 = INT64_MIN;
	static int32_t x122 = INT32_MAX;
	int32_t x124 = 5;
	static volatile int64_t t17 = -1031504797585LL;

	t17 = ((x121%x122)%(x123/x124));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x130 = INT32_MIN;
	volatile uint64_t t18 = 212581144056179002LLU;

	t18 = ((x129%x130)%(x131/x132));

	if (t18 != 6900958732LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x137 = INT16_MIN;
	static int64_t x138 = INT64_MIN;
	int8_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	uint64_t t19 = 1855337LLU;

	t19 = ((x137%x138)%(x139/x140));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x145 = 3081380U;
	uint32_t x146 = 110389053U;
	int8_t x148 = INT8_MIN;
	static volatile uint64_t t20 = 255645202LLU;

	t20 = ((x145%x146)%(x147/x148));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x157 = 34552053751069670LLU;
	volatile uint64_t x159 = UINT64_MAX;
	int16_t x160 = INT16_MIN;
	uint64_t t21 = 675LLU;

	t21 = ((x157%x158)%(x159/x160));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x166 = 2U;
	volatile uint16_t x167 = 1625U;
	int8_t x168 = INT8_MIN;
	volatile uint32_t t22 = 237U;

	t22 = ((x165%x166)%(x167/x168));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x169 = 114U;
	volatile uint16_t x171 = UINT16_MAX;

	t23 = ((x169%x170)%(x171/x172));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x173 = -3;
	static volatile int64_t x174 = INT64_MIN;
	volatile int64_t t24 = 21832624969433452LL;

	t24 = ((x173%x174)%(x175/x176));

	if (t24 != -3LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x188 = -1;
	int32_t t25 = 618663;

	t25 = ((x185%x186)%(x187/x188));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = -18913199676LL;
	volatile int32_t x207 = -47779729;
	int32_t x208 = -3;
	int64_t t26 = 1274934151918662298LL;

	t26 = ((x205%x206)%(x207/x208));

	if (t26 != 13322463LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x213 = INT8_MIN;
	volatile int64_t x214 = INT64_MIN;
	int8_t x215 = -1;
	static uint64_t x216 = 534043664737479208LLU;
	static uint64_t t27 = 3206731536646LLU;

	t27 = ((x213%x214)%(x215/x216));

	if (t27 != 26LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x219 = 124U;
	uint64_t t28 = 7LLU;

	t28 = ((x217%x218)%(x219/x220));

	if (t28 != 368LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x226 = 1U;
	int32_t x227 = INT32_MAX;
	int16_t x228 = INT16_MAX;

	t29 = ((x225%x226)%(x227/x228));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x241 = 67240U;
	static uint32_t x242 = 9U;
	static volatile int16_t x243 = INT16_MIN;
	int32_t x244 = -1446;

	t30 = ((x241%x242)%(x243/x244));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x245 = 0U;
	static int64_t x246 = -1LL;
	uint64_t x247 = UINT64_MAX;
	uint16_t x248 = 51U;
	volatile uint64_t t31 = 41031052LLU;

	t31 = ((x245%x246)%(x247/x248));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x249 = UINT64_MAX;
	int64_t x252 = -1LL;
	static uint64_t t32 = 196LLU;

	t32 = ((x249%x250)%(x251/x252));

	if (t32 != 124LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x257 = 6715U;
	uint8_t x258 = UINT8_MAX;
	static uint16_t x259 = UINT16_MAX;
	static uint16_t x260 = 1175U;
	static volatile int32_t t33 = 11844;

	t33 = ((x257%x258)%(x259/x260));

	if (t33 != 30) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x269 = 403U;
	static uint64_t x270 = UINT64_MAX;
	static int64_t x271 = -826226LL;
	int16_t x272 = INT16_MAX;

	t34 = ((x269%x270)%(x271/x272));

	if (t34 != 403LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x273 = -1;
	int8_t x274 = INT8_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	uint16_t x276 = UINT16_MAX;
	int32_t t35 = 151741060;

	t35 = ((x273%x274)%(x275/x276));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x277 = 1;
	uint32_t x278 = 699905522U;
	uint16_t x279 = 10310U;
	int16_t x280 = 19;
	uint32_t t36 = 76953U;

	t36 = ((x277%x278)%(x279/x280));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x281 = 4662U;
	int32_t x283 = INT32_MAX;
	int32_t x284 = -27790;
	static volatile uint32_t t37 = 149333344U;

	t37 = ((x281%x282)%(x283/x284));

	if (t37 != 4662U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x285 = INT16_MIN;
	volatile int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = -914LL;

	t38 = ((x285%x286)%(x287/x288));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x301 = -1;
	int16_t x302 = -539;
	int8_t x303 = INT8_MIN;

	t39 = ((x301%x302)%(x303/x304));

	if (t39 != 26139U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x305 = UINT16_MAX;
	static int32_t x307 = INT32_MIN;

	t40 = ((x305%x306)%(x307/x308));

	if (t40 != 5855) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	static int32_t x323 = -23613;

	t41 = ((x321%x322)%(x323/x324));

	if (t41 != -672) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x329 = 0U;
	int64_t x330 = INT64_MIN;
	static int64_t x332 = -1LL;
	int64_t t42 = 12LL;

	t42 = ((x329%x330)%(x331/x332));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x346 = 3U;
	static volatile int16_t x347 = INT16_MIN;
	uint64_t t43 = 13777163043394LLU;

	t43 = ((x345%x346)%(x347/x348));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x349 = INT8_MAX;
	static volatile int32_t x351 = INT32_MIN;

	t44 = ((x349%x350)%(x351/x352));

	if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t t45 = 130LL;

	t45 = ((x353%x354)%(x355/x356));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x357 = 114455127;
	int32_t x359 = INT32_MIN;

	t46 = ((x357%x358)%(x359/x360));

	if (t46 != 114455127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x365 = 33U;
	uint64_t x367 = UINT64_MAX;
	uint64_t t47 = 387143LLU;

	t47 = ((x365%x366)%(x367/x368));

	if (t47 != 33LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x370 = INT8_MIN;
	int8_t x372 = -1;
	volatile uint32_t t48 = 0U;

	t48 = ((x369%x370)%(x371/x372));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x389 = 628433852;
	uint64_t x390 = 2012387772704700LLU;
	int64_t x391 = INT64_MIN;
	volatile uint64_t t49 = 93339LLU;

	t49 = ((x389%x390)%(x391/x392));

	if (t49 != 628433852LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = -13;
	static uint8_t x396 = 12U;

	t50 = ((x393%x394)%(x395/x396));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x410 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -1;
	int64_t t51 = -1476981LL;

	t51 = ((x409%x410)%(x411/x412));

	if (t51 != 3327LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x421 = 925641093637484LL;
	static int32_t x422 = 27670;
	int32_t x423 = INT32_MAX;
	int8_t x424 = -1;
	int64_t t52 = -6189809948017LL;

	t52 = ((x421%x422)%(x423/x424));

	if (t52 != 24714LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x425 = -6;
	int64_t x427 = 17125305224LL;
	int16_t x428 = INT16_MAX;
	volatile uint64_t t53 = 210045019352241LLU;

	t53 = ((x425%x426)%(x427/x428));

	if (t53 != 306258LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x437 = UINT8_MAX;
	int16_t x438 = -1;
	static int16_t x439 = INT16_MIN;
	int8_t x440 = -1;

	t54 = ((x437%x438)%(x439/x440));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x457 = 31093U;
	static int8_t x458 = -1;
	volatile int64_t x460 = -1LL;
	volatile int64_t t55 = -127130132LL;

	t55 = ((x457%x458)%(x459/x460));

	if (t55 != 49LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x465 = 1U;
	uint64_t x466 = UINT64_MAX;
	static int32_t x467 = INT32_MAX;
	volatile uint64_t t56 = 1332267807105511LLU;

	t56 = ((x465%x466)%(x467/x468));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x473 = INT32_MIN;
	volatile int8_t x474 = 13;
	int16_t x475 = -4294;
	int8_t x476 = INT8_MIN;
	static int32_t t57 = 1408;

	t57 = ((x473%x474)%(x475/x476));

	if (t57 != -11) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x477 = INT8_MIN;
	uint8_t x478 = 1U;
	static int64_t x479 = -1LL;
	uint8_t x480 = 1U;
	int64_t t58 = -65017393915LL;

	t58 = ((x477%x478)%(x479/x480));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x481 = -1;
	uint32_t x482 = 2718U;
	volatile int16_t x483 = -15437;
	int8_t x484 = INT8_MAX;
	volatile uint32_t t59 = 63285902U;

	t59 = ((x481%x482)%(x483/x484));

	if (t59 != 3U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x489 = 18849U;
	static int32_t x490 = INT32_MAX;
	int32_t x491 = INT32_MIN;
	uint32_t x492 = 1731631U;
	volatile uint32_t t60 = 6U;

	t60 = ((x489%x490)%(x491/x492));

	if (t60 != 249U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x513 = 205U;
	int16_t x514 = INT16_MAX;
	int64_t x515 = -66438198195125683LL;
	volatile int32_t x516 = INT32_MIN;
	int64_t t61 = -203400210LL;

	t61 = ((x513%x514)%(x515/x516));

	if (t61 != 205LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x525 = INT8_MIN;
	volatile int8_t x526 = -1;
	static int32_t x527 = INT32_MAX;
	static volatile uint16_t x528 = 832U;
	volatile int32_t t62 = -1001370;

	t62 = ((x525%x526)%(x527/x528));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x558 = -321922;
	int64_t x559 = INT64_MIN;

	t63 = ((x557%x558)%(x559/x560));

	if (t63 != -263908LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x561 = 99U;
	int32_t x563 = INT32_MAX;
	int64_t x564 = 103LL;
	volatile int64_t t64 = 7653LL;

	t64 = ((x561%x562)%(x563/x564));

	if (t64 != 99LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x566 = INT16_MIN;
	uint64_t x568 = 244422773LLU;

	t65 = ((x565%x566)%(x567/x568));

	if (t65 != 88146457LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x605 = -19960959LL;
	volatile int16_t x606 = INT16_MIN;
	static int8_t x607 = INT8_MIN;
	static volatile int64_t t66 = -743530025869222010LL;

	t66 = ((x605%x606)%(x607/x608));

	if (t66 != -127LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x609 = UINT16_MAX;
	volatile int8_t x610 = -1;
	static int16_t x611 = INT16_MIN;
	int16_t x612 = INT16_MIN;

	t67 = ((x609%x610)%(x611/x612));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x637 = 1;
	uint8_t x638 = 41U;
	int32_t x639 = 71;
	volatile int16_t x640 = 1;
	volatile int32_t t68 = 7221757;

	t68 = ((x637%x638)%(x639/x640));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x642 = -1;
	int64_t t69 = -7042996022292130LL;

	t69 = ((x641%x642)%(x643/x644));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x653 = 4;
	volatile int16_t x654 = INT16_MIN;
	volatile int32_t x655 = INT32_MAX;
	int8_t x656 = INT8_MIN;
	int32_t t70 = 3698;

	t70 = ((x653%x654)%(x655/x656));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x657 = INT8_MIN;
	int32_t x658 = -1;
	uint16_t x660 = 81U;
	static int32_t t71 = -979745;

	t71 = ((x657%x658)%(x659/x660));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x661 = INT64_MIN;
	static volatile int32_t x662 = INT32_MAX;
	int8_t x663 = INT8_MIN;
	int64_t t72 = -7682LL;

	t72 = ((x661%x662)%(x663/x664));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x665 = 0;
	volatile int64_t x666 = INT64_MAX;
	int32_t x667 = 20538;
	volatile int64_t t73 = -323688100LL;

	t73 = ((x665%x666)%(x667/x668));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x669 = UINT16_MAX;
	static uint8_t x670 = UINT8_MAX;
	int64_t x671 = INT64_MIN;
	static int64_t x672 = -2225585341174922LL;
	volatile int64_t t74 = -5732866792LL;

	t74 = ((x669%x670)%(x671/x672));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x673 = 7;
	int32_t x675 = INT32_MIN;
	uint8_t x676 = 11U;
	volatile int32_t t75 = 36;

	t75 = ((x673%x674)%(x675/x676));

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x681 = INT8_MAX;
	int16_t x682 = INT16_MAX;
	int32_t x683 = INT32_MIN;
	uint64_t x684 = 27LLU;
	uint64_t t76 = 2634011872LLU;

	t76 = ((x681%x682)%(x683/x684));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x685 = -452;
	int8_t x686 = -14;
	uint16_t x687 = UINT16_MAX;
	volatile uint8_t x688 = 1U;
	static volatile int32_t t77 = -7218742;

	t77 = ((x685%x686)%(x687/x688));

	if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x697 = -1;

	t78 = ((x697%x698)%(x699/x700));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x705 = 513;
	int32_t x707 = 141544035;
	volatile uint8_t x708 = 19U;
	static int32_t t79 = 0;

	t79 = ((x705%x706)%(x707/x708));

	if (t79 != 513) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x713 = INT64_MAX;
	int64_t x714 = -1LL;
	int16_t x715 = 3734;
	int32_t x716 = -1;

	t80 = ((x713%x714)%(x715/x716));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x718 = INT16_MIN;
	static uint32_t t81 = 61259851U;

	t81 = ((x717%x718)%(x719/x720));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x729 = INT8_MIN;
	static int32_t x730 = -5;
	int16_t x731 = -15610;
	volatile uint32_t x732 = 494009984U;
	volatile uint32_t t82 = 30U;

	t82 = ((x729%x730)%(x731/x732));

	if (t82 != 5U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x737 = 505U;
	static int32_t x738 = INT32_MIN;
	int64_t x739 = INT64_MIN;
	int32_t x740 = INT32_MAX;
	volatile int64_t t83 = -56435946483472LL;

	t83 = ((x737%x738)%(x739/x740));

	if (t83 != 505LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x741 = INT32_MIN;
	int16_t x742 = -1;
	int8_t x743 = 51;
	static int32_t x744 = -1;

	t84 = ((x741%x742)%(x743/x744));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x749 = UINT32_MAX;
	int8_t x750 = 29;
	int8_t x752 = INT8_MAX;
	static volatile uint32_t t85 = 507916298U;

	t85 = ((x749%x750)%(x751/x752));

	if (t85 != 15U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x758 = 1U;
	static int32_t x760 = 231284;
	uint32_t t86 = 1404368365U;

	t86 = ((x757%x758)%(x759/x760));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x765 = INT64_MIN;
	int32_t x766 = 187;
	int64_t x768 = -1LL;
	volatile int64_t t87 = 3930LL;

	t87 = ((x765%x766)%(x767/x768));

	if (t87 != -162LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x769 = 11607347293LL;
	int8_t x770 = -3;
	int32_t x771 = INT32_MIN;
	volatile int16_t x772 = -429;
	volatile int64_t t88 = -1LL;

	t88 = ((x769%x770)%(x771/x772));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x789 = UINT8_MAX;
	static int8_t x790 = INT8_MIN;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MIN;
	uint64_t t89 = 4519752901LLU;

	t89 = ((x789%x790)%(x791/x792));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x817 = INT32_MIN;
	static int64_t x818 = INT64_MIN;
	uint32_t x820 = 310U;

	t90 = ((x817%x818)%(x819/x820));

	if (t90 != -16463LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x821 = UINT32_MAX;
	int8_t x822 = INT8_MAX;
	int16_t x823 = INT16_MIN;
	static uint8_t x824 = 6U;
	uint32_t t91 = 184946U;

	t91 = ((x821%x822)%(x823/x824));

	if (t91 != 15U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x841 = INT64_MIN;
	int32_t x842 = INT32_MIN;
	static int8_t x843 = -1;
	int8_t x844 = 1;

	t92 = ((x841%x842)%(x843/x844));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x845 = INT32_MIN;
	static uint32_t x846 = 874426285U;
	static int32_t x847 = -1;
	volatile uint32_t t93 = 333126U;

	t93 = ((x845%x846)%(x847/x848));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x866 = -1LL;
	volatile int16_t x867 = INT16_MIN;
	uint32_t x868 = 120319U;

	t94 = ((x865%x866)%(x867/x868));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x869 = 48999712;
	uint16_t x870 = 225U;
	volatile uint16_t x871 = 6009U;
	volatile int16_t x872 = -275;
	static int32_t t95 = 4065094;

	t95 = ((x869%x870)%(x871/x872));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x873 = INT16_MIN;
	volatile int16_t x874 = INT16_MIN;
	int32_t t96 = 517209722;

	t96 = ((x873%x874)%(x875/x876));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t t97 = 922;

	t97 = ((x881%x882)%(x883/x884));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x893 = INT64_MIN;
	int16_t x894 = -22;
	int16_t x895 = 407;
	int32_t x896 = -1;

	t98 = ((x893%x894)%(x895/x896));

	if (t98 != -8LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x897 = INT32_MIN;
	static volatile uint32_t x899 = UINT32_MAX;
	volatile uint8_t x900 = UINT8_MAX;
	static volatile uint32_t t99 = 44U;

	t99 = ((x897%x898)%(x899/x900));

	if (t99 != 0U) { NG(); } else { ; }
	
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

