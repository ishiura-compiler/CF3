#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -15352LL;
static int32_t x18 = INT32_MIN;
static uint32_t x24 = 956323U;
int32_t x30 = INT32_MIN;
volatile uint32_t x33 = UINT32_MAX;
int16_t x35 = -1;
static int8_t x36 = 9;
static uint8_t x41 = 1U;
int32_t t6 = 45;
uint32_t x49 = UINT32_MAX;
static uint64_t x61 = 1300174750LLU;
int16_t x62 = 5986;
static uint16_t x73 = 5U;
volatile int64_t x75 = -3LL;
uint64_t x81 = 54391369256517946LLU;
int8_t x94 = INT8_MIN;
volatile int32_t t11 = -25;
static int8_t x113 = 0;
static uint16_t x114 = UINT16_MAX;
volatile int32_t x125 = 58953;
static int8_t x127 = INT8_MAX;
uint64_t x128 = 1300302937LLU;
int32_t t15 = -337280874;
uint8_t x134 = 22U;
volatile int64_t x157 = INT64_MAX;
volatile uint64_t x159 = 10LLU;
int32_t x168 = INT32_MAX;
int32_t t18 = 3;
static volatile int16_t x177 = INT16_MAX;
int64_t x179 = INT64_MIN;
int16_t x186 = -1;
uint16_t x187 = 26U;
static int32_t x188 = -354779;
int8_t x194 = -11;
int64_t x210 = INT64_MAX;
int32_t x215 = -1;
volatile int8_t x231 = INT8_MIN;
uint32_t t27 = 3U;
int32_t t28 = -490812194;
volatile uint8_t x241 = 1U;
volatile int32_t t30 = 0;
int16_t x272 = -22;
volatile uint16_t x290 = UINT16_MAX;
int8_t x292 = -1;
int32_t x296 = 15317;
int32_t t35 = 2047;
uint64_t x301 = UINT64_MAX;
int8_t x305 = 0;
static uint64_t x307 = 207237647567LLU;
volatile int32_t t37 = -30;
uint64_t x310 = 1301662949393211528LLU;
static uint8_t x319 = 24U;
int8_t x323 = INT8_MIN;
int16_t x328 = INT16_MIN;
volatile int16_t x335 = INT16_MAX;
int32_t x336 = INT32_MIN;
uint64_t x346 = UINT64_MAX;
int32_t x347 = 12713;
uint16_t x348 = UINT16_MAX;
uint32_t x349 = 117133U;
uint64_t x353 = 33931020392LLU;
uint8_t x355 = 0U;
static uint64_t x362 = 260525306LLU;
int64_t t46 = INT64_MAX;
int64_t x374 = INT64_MIN;
uint64_t x375 = 33830794490LLU;
uint64_t x376 = UINT64_MAX;
static int32_t x383 = -1;
static uint8_t x427 = 3U;
volatile int8_t x430 = 1;
int8_t x432 = INT8_MIN;
int16_t x438 = 14;
volatile uint16_t x440 = UINT16_MAX;
uint64_t x498 = 2569LLU;
static uint16_t x501 = 8U;
volatile int16_t x503 = INT16_MIN;
int32_t t60 = -8652251;
uint8_t x513 = UINT8_MAX;
uint64_t x521 = UINT64_MAX;
static uint64_t t64 = UINT64_MAX;
int8_t x541 = 1;
int32_t t68 = INT32_MAX;
int64_t x577 = 1097414473368527256LL;
volatile int32_t x580 = INT32_MAX;
static int64_t t70 = 1981674852482243638LL;
volatile int32_t t71 = 1;
volatile int64_t x602 = INT64_MAX;
volatile int32_t t74 = 358190;
int64_t x621 = INT64_MAX;
uint32_t x622 = UINT32_MAX;
int8_t x624 = INT8_MAX;
volatile uint64_t x635 = 2LLU;
volatile int8_t x655 = -1;
volatile int32_t t78 = 0;
int64_t x675 = -1LL;
int16_t x694 = -1;
int16_t x698 = 4;
static int32_t t84 = -1013776;
int64_t x724 = INT64_MIN;
int64_t x748 = INT64_MIN;
int16_t x751 = INT16_MIN;
int8_t x777 = 1;
volatile int8_t x782 = INT8_MAX;
volatile uint8_t x786 = 70U;
volatile int32_t t95 = -3988452;
static int8_t x802 = INT8_MIN;
static volatile int8_t x814 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MAX;
	static int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -679109404;

	t0 = (x1>>((x2<x3)/x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x17 = 16U;
	volatile int8_t x19 = INT8_MAX;
	static int8_t x20 = INT8_MIN;
	int32_t t1 = 94716267;

	t1 = (x17>>((x18<x19)/x20));

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 14839750LLU;
	volatile int64_t x22 = -1LL;
	static int16_t x23 = -1;
	volatile uint64_t t2 = 8LLU;

	t2 = (x21>>((x22<x23)/x24));

	if (t2 != 14839750LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MAX;
	uint8_t x27 = 6U;
	static int16_t x28 = INT16_MAX;
	int32_t t3 = -5126676;

	t3 = (x25>>((x26<x27)/x28));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = 207721;
	int64_t x31 = 2492556584401208LL;
	volatile int32_t x32 = -743142834;
	volatile int32_t t4 = -64138;

	t4 = (x29>>((x30<x31)/x32));

	if (t4 != 207721) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x34 = INT16_MAX;
	static uint32_t t5 = UINT32_MAX;

	t5 = (x33>>((x34<x35)/x36));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x42 = 30U;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = 62657958784285739LLU;

	t6 = (x41>>((x42<x43)/x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x50 = 62038945210749817LLU;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (x49>>((x50<x51)/x52));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x63 = 88LLU;
	static int64_t x64 = 873579195LL;
	volatile uint64_t t8 = 169LLU;

	t8 = (x61>>((x62<x63)/x64));

	if (t8 != 1300174750LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x74 = -30LL;
	int8_t x76 = INT8_MAX;
	int32_t t9 = -45;

	t9 = (x73>>((x74<x75)/x76));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x82 = INT32_MAX;
	volatile uint16_t x83 = 241U;
	static int16_t x84 = INT16_MIN;
	static volatile uint64_t t10 = 34LLU;

	t10 = (x81>>((x82<x83)/x84));

	if (t10 != 54391369256517946LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x93 = 1U;
	int64_t x95 = INT64_MIN;
	int64_t x96 = -53091858054LL;

	t11 = (x93>>((x94<x95)/x96));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x105 = 0;
	int16_t x106 = INT16_MAX;
	int8_t x107 = -1;
	uint8_t x108 = 3U;
	volatile int32_t t12 = -237367;

	t12 = (x105>>((x106<x107)/x108));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x115 = -9LL;
	int64_t x116 = INT64_MIN;
	volatile int32_t t13 = -39;

	t13 = (x113>>((x114<x115)/x116));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x126 = UINT64_MAX;
	int32_t t14 = 28;

	t14 = (x125>>((x126<x127)/x128));

	if (t14 != 58953) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x129 = INT8_MAX;
	int16_t x130 = 275;
	int16_t x131 = INT16_MAX;
	int64_t x132 = -14689443358894894LL;

	t15 = (x129>>((x130<x131)/x132));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x133 = INT16_MAX;
	volatile int8_t x135 = INT8_MIN;
	uint64_t x136 = 36281318LLU;
	int32_t t16 = -226362384;

	t16 = (x133>>((x134<x135)/x136));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x158 = INT16_MIN;
	volatile int16_t x160 = 3;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x157>>((x158<x159)/x160));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x165 = 61;
	int8_t x166 = INT8_MIN;
	volatile uint64_t x167 = 1926632896976338902LLU;

	t18 = (x165>>((x166<x167)/x168));

	if (t18 != 61) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x169 = INT64_MAX;
	int8_t x170 = -26;
	static volatile int32_t x171 = 442;
	uint32_t x172 = 85391U;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x169>>((x170<x171)/x172));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x173 = 34826454916310LLU;
	int16_t x174 = INT16_MIN;
	uint8_t x175 = UINT8_MAX;
	static uint32_t x176 = 658901U;
	static uint64_t t20 = 495438LLU;

	t20 = (x173>>((x174<x175)/x176));

	if (t20 != 34826454916310LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x178 = 6U;
	int64_t x180 = INT64_MIN;
	volatile int32_t t21 = -7;

	t21 = (x177>>((x178<x179)/x180));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x185 = INT64_MAX;
	static int64_t t22 = INT64_MAX;

	t22 = (x185>>((x186<x187)/x188));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x193 = 0U;
	static uint32_t x195 = UINT32_MAX;
	uint64_t x196 = 1507229455474LLU;
	uint32_t t23 = 1666779469U;

	t23 = (x193>>((x194<x195)/x196));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x205 = INT32_MAX;
	volatile int32_t x206 = 7;
	uint64_t x207 = 15470LLU;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x205>>((x206<x207)/x208));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x209 = 7694764046LLU;
	int64_t x211 = INT64_MIN;
	int32_t x212 = 225018;
	static uint64_t t25 = 242264315LLU;

	t25 = (x209>>((x210<x211)/x212));

	if (t25 != 7694764046LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x213 = UINT8_MAX;
	uint16_t x214 = 32U;
	uint32_t x216 = 1652592U;
	volatile int32_t t26 = 235708;

	t26 = (x213>>((x214<x215)/x216));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x229 = 2055663688U;
	int64_t x230 = -99218327983LL;
	int8_t x232 = INT8_MIN;

	t27 = (x229>>((x230<x231)/x232));

	if (t27 != 2055663688U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MIN;
	int8_t x235 = 9;
	int8_t x236 = -3;

	t28 = (x233>>((x234<x235)/x236));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x237 = INT32_MAX;
	volatile int64_t x238 = 25LL;
	uint64_t x239 = 16195082LLU;
	int64_t x240 = INT64_MAX;
	int32_t t29 = INT32_MAX;

	t29 = (x237>>((x238<x239)/x240));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x242 = INT16_MIN;
	volatile int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MAX;

	t30 = (x241>>((x242<x243)/x244));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x257 = 6U;
	volatile int64_t x258 = INT64_MIN;
	volatile uint64_t x259 = 83021LLU;
	int64_t x260 = INT64_MAX;
	static volatile int32_t t31 = 18353;

	t31 = (x257>>((x258<x259)/x260));

	if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x269 = UINT64_MAX;
	static int64_t x270 = INT64_MAX;
	int8_t x271 = -1;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x269>>((x270<x271)/x272));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x281 = 34U;
	volatile int16_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t33 = 83653207U;

	t33 = (x281>>((x282<x283)/x284));

	if (t33 != 34U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x289 = 14U;
	int32_t x291 = -1;
	static int32_t t34 = 40175765;

	t34 = (x289>>((x290<x291)/x292));

	if (t34 != 14) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x293 = INT8_MAX;
	static volatile int32_t x294 = 1108;
	int8_t x295 = -29;

	t35 = (x293>>((x294<x295)/x296));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MAX;
	volatile int8_t x304 = -60;
	static uint64_t t36 = UINT64_MAX;

	t36 = (x301>>((x302<x303)/x304));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x306 = INT8_MAX;
	uint64_t x308 = UINT64_MAX;

	t37 = (x305>>((x306<x307)/x308));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x311 = 0;
	int8_t x312 = INT8_MIN;
	uint64_t t38 = UINT64_MAX;

	t38 = (x309>>((x310<x311)/x312));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x317 = 26;
	volatile uint8_t x318 = UINT8_MAX;
	int8_t x320 = INT8_MAX;
	volatile int32_t t39 = 170048934;

	t39 = (x317>>((x318<x319)/x320));

	if (t39 != 26) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x321 = INT64_MAX;
	int8_t x322 = 1;
	static int64_t x324 = -1LL;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x321>>((x322<x323)/x324));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x325 = 7228U;
	int8_t x326 = INT8_MIN;
	int64_t x327 = -2441038527LL;
	uint32_t t41 = 233630732U;

	t41 = (x325>>((x326<x327)/x328));

	if (t41 != 7228U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x333 = 1298276355180482670LL;
	uint32_t x334 = 4641156U;
	volatile int64_t t42 = 0LL;

	t42 = (x333>>((x334<x335)/x336));

	if (t42 != 1298276355180482670LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x345 = 2LL;
	int64_t t43 = -45LL;

	t43 = (x345>>((x346<x347)/x348));

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x350 = -1;
	int32_t x351 = INT32_MIN;
	int16_t x352 = -1;
	uint32_t t44 = 369338890U;

	t44 = (x349>>((x350<x351)/x352));

	if (t44 != 117133U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x354 = -4;
	uint32_t x356 = 1U;
	volatile uint64_t t45 = 3758761136913770956LLU;

	t45 = (x353>>((x354<x355)/x356));

	if (t45 != 16965510196LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x361 = INT64_MAX;
	int64_t x363 = -122950690624557194LL;
	static volatile int8_t x364 = 17;

	t46 = (x361>>((x362<x363)/x364));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x373 = 30U;
	uint32_t t47 = 118714U;

	t47 = (x373>>((x374<x375)/x376));

	if (t47 != 30U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x381 = 1;
	static volatile int16_t x382 = 7360;
	int16_t x384 = -13701;
	static int32_t t48 = -207460122;

	t48 = (x381>>((x382<x383)/x384));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x393 = 7853935;
	int64_t x394 = INT64_MIN;
	static volatile uint16_t x395 = UINT16_MAX;
	static int16_t x396 = INT16_MAX;
	static int32_t t49 = -5877;

	t49 = (x393>>((x394<x395)/x396));

	if (t49 != 7853935) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x409 = 7LL;
	static uint64_t x410 = 374519LLU;
	volatile int32_t x411 = INT32_MAX;
	int8_t x412 = -16;
	int64_t t50 = -2765787685924LL;

	t50 = (x409>>((x410<x411)/x412));

	if (t50 != 7LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x413 = 1LL;
	uint8_t x414 = UINT8_MAX;
	uint8_t x415 = UINT8_MAX;
	uint32_t x416 = 18573913U;
	int64_t t51 = 33919LL;

	t51 = (x413>>((x414<x415)/x416));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x417 = 50U;
	volatile uint32_t x418 = 796723499U;
	int32_t x419 = -46914712;
	int8_t x420 = -2;
	volatile int32_t t52 = 656561;

	t52 = (x417>>((x418<x419)/x420));

	if (t52 != 50) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x425 = 3U;
	int8_t x426 = 0;
	int16_t x428 = -14221;
	int32_t t53 = 53;

	t53 = (x425>>((x426<x427)/x428));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x429 = INT64_MAX;
	int64_t x431 = -1LL;
	int64_t t54 = INT64_MAX;

	t54 = (x429>>((x430<x431)/x432));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x437 = INT16_MAX;
	int16_t x439 = 610;
	static volatile int32_t t55 = 8;

	t55 = (x437>>((x438<x439)/x440));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x461 = 14797;
	uint32_t x462 = 315U;
	static int32_t x463 = INT32_MIN;
	volatile uint8_t x464 = 32U;
	volatile int32_t t56 = -685;

	t56 = (x461>>((x462<x463)/x464));

	if (t56 != 14797) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x465 = 600981089665903LLU;
	uint64_t x466 = 269583681262121051LLU;
	int8_t x467 = 0;
	int32_t x468 = -1;
	volatile uint64_t t57 = 308958461018811336LLU;

	t57 = (x465>>((x466<x467)/x468));

	if (t57 != 600981089665903LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x485 = 2307718213480LLU;
	volatile int8_t x486 = INT8_MAX;
	static int64_t x487 = -1LL;
	int32_t x488 = INT32_MAX;
	uint64_t t58 = 17727548760LLU;

	t58 = (x485>>((x486<x487)/x488));

	if (t58 != 2307718213480LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x497 = UINT8_MAX;
	int64_t x499 = -4379644928347LL;
	static volatile int64_t x500 = 115LL;
	int32_t t59 = 49;

	t59 = (x497>>((x498<x499)/x500));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x502 = 345355338509417LLU;
	uint8_t x504 = 30U;

	t60 = (x501>>((x502<x503)/x504));

	if (t60 != 8) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x509 = 3U;
	volatile int32_t x510 = INT32_MIN;
	uint16_t x511 = UINT16_MAX;
	static volatile int16_t x512 = 6;
	int32_t t61 = -2036527;

	t61 = (x509>>((x510<x511)/x512));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x514 = 1U;
	uint8_t x515 = 16U;
	volatile int64_t x516 = INT64_MAX;
	int32_t t62 = -545;

	t62 = (x513>>((x514<x515)/x516));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x517 = 11U;
	int32_t x518 = INT32_MAX;
	volatile int16_t x519 = INT16_MIN;
	int64_t x520 = INT64_MIN;
	static volatile int32_t t63 = 337350584;

	t63 = (x517>>((x518<x519)/x520));

	if (t63 != 11) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x522 = 1;
	volatile int16_t x523 = 7;
	uint16_t x524 = UINT16_MAX;

	t64 = (x521>>((x522<x523)/x524));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x525 = 2405462155LLU;
	int8_t x526 = INT8_MAX;
	static int16_t x527 = -1;
	volatile int64_t x528 = INT64_MAX;
	uint64_t t65 = 39591LLU;

	t65 = (x525>>((x526<x527)/x528));

	if (t65 != 2405462155LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x542 = INT8_MIN;
	volatile int64_t x543 = INT64_MIN;
	int8_t x544 = INT8_MIN;
	int32_t t66 = 1002;

	t66 = (x541>>((x542<x543)/x544));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x549 = 13U;
	int16_t x550 = -1;
	int16_t x551 = 1;
	uint64_t x552 = 81926823093840766LLU;
	volatile int32_t t67 = 1556;

	t67 = (x549>>((x550<x551)/x552));

	if (t67 != 13) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x557 = INT32_MAX;
	int16_t x558 = 1081;
	int16_t x559 = -5;
	uint8_t x560 = 62U;

	t68 = (x557>>((x558<x559)/x560));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x573 = 7880LLU;
	int16_t x574 = INT16_MAX;
	static int8_t x575 = -1;
	int8_t x576 = -57;
	volatile uint64_t t69 = 1421531052449LLU;

	t69 = (x573>>((x574<x575)/x576));

	if (t69 != 7880LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x578 = INT8_MIN;
	int32_t x579 = INT32_MIN;

	t70 = (x577>>((x578<x579)/x580));

	if (t70 != 1097414473368527256LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x581 = 7117;
	int64_t x582 = INT64_MIN;
	int32_t x583 = INT32_MIN;
	static volatile int8_t x584 = INT8_MAX;

	t71 = (x581>>((x582<x583)/x584));

	if (t71 != 7117) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x601 = UINT64_MAX;
	static uint64_t x603 = 780291690LLU;
	int8_t x604 = 1;
	static uint64_t t72 = UINT64_MAX;

	t72 = (x601>>((x602<x603)/x604));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x609 = UINT8_MAX;
	static uint8_t x610 = 29U;
	uint32_t x611 = 136894U;
	static int16_t x612 = INT16_MAX;
	static volatile int32_t t73 = 6802872;

	t73 = (x609>>((x610<x611)/x612));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x617 = 11U;
	volatile int8_t x618 = -1;
	int32_t x619 = INT32_MIN;
	uint64_t x620 = 223994540609866977LLU;

	t74 = (x617>>((x618<x619)/x620));

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x623 = 1U;
	int64_t t75 = INT64_MAX;

	t75 = (x621>>((x622<x623)/x624));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x633 = UINT64_MAX;
	int32_t x634 = INT32_MIN;
	int8_t x636 = INT8_MIN;
	uint64_t t76 = UINT64_MAX;

	t76 = (x633>>((x634<x635)/x636));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x649 = 104LLU;
	volatile int16_t x650 = INT16_MAX;
	int16_t x651 = INT16_MAX;
	uint8_t x652 = UINT8_MAX;
	volatile uint64_t t77 = 224575647032LLU;

	t77 = (x649>>((x650<x651)/x652));

	if (t77 != 104LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x653 = 0U;
	static int32_t x654 = -1;
	int64_t x656 = -1LL;

	t78 = (x653>>((x654<x655)/x656));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x661 = UINT32_MAX;
	uint32_t x662 = UINT32_MAX;
	int16_t x663 = INT16_MAX;
	int8_t x664 = INT8_MAX;
	uint32_t t79 = UINT32_MAX;

	t79 = (x661>>((x662<x663)/x664));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x673 = UINT64_MAX;
	int64_t x674 = -1LL;
	int64_t x676 = INT64_MIN;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x673>>((x674<x675)/x676));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x681 = INT16_MAX;
	volatile int8_t x682 = INT8_MAX;
	int32_t x683 = 268966509;
	uint32_t x684 = UINT32_MAX;
	volatile int32_t t81 = 51;

	t81 = (x681>>((x682<x683)/x684));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x693 = 625U;
	static int16_t x695 = INT16_MIN;
	int16_t x696 = INT16_MIN;
	volatile int32_t t82 = -4;

	t82 = (x693>>((x694<x695)/x696));

	if (t82 != 625) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x697 = INT64_MAX;
	int8_t x699 = INT8_MIN;
	uint32_t x700 = 5618779U;
	int64_t t83 = INT64_MAX;

	t83 = (x697>>((x698<x699)/x700));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x701 = UINT8_MAX;
	uint8_t x702 = 1U;
	volatile int64_t x703 = -643349LL;
	int8_t x704 = -1;

	t84 = (x701>>((x702<x703)/x704));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x717 = UINT32_MAX;
	volatile int64_t x718 = -21623085LL;
	static uint32_t x719 = UINT32_MAX;
	static int32_t x720 = INT32_MIN;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x717>>((x718<x719)/x720));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x721 = 13;
	static int16_t x722 = -1;
	volatile uint16_t x723 = 229U;
	int32_t t86 = 236;

	t86 = (x721>>((x722<x723)/x724));

	if (t86 != 13) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x729 = UINT16_MAX;
	uint64_t x730 = UINT64_MAX;
	int16_t x731 = 1320;
	static int64_t x732 = INT64_MIN;
	static volatile int32_t t87 = 82471;

	t87 = (x729>>((x730<x731)/x732));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x745 = INT64_MAX;
	int8_t x746 = INT8_MIN;
	uint32_t x747 = UINT32_MAX;
	static volatile int64_t t88 = INT64_MAX;

	t88 = (x745>>((x746<x747)/x748));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x749 = 2194U;
	int16_t x750 = INT16_MIN;
	uint32_t x752 = 242U;
	static int32_t t89 = -1467;

	t89 = (x749>>((x750<x751)/x752));

	if (t89 != 2194) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x765 = 5491683;
	static int8_t x766 = INT8_MIN;
	volatile int32_t x767 = INT32_MIN;
	int16_t x768 = -102;
	volatile int32_t t90 = 1;

	t90 = (x765>>((x766<x767)/x768));

	if (t90 != 5491683) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x778 = 2U;
	volatile int16_t x779 = 12;
	volatile uint64_t x780 = 42719850225248722LLU;
	volatile int32_t t91 = 35047072;

	t91 = (x777>>((x778<x779)/x780));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x781 = INT64_MAX;
	volatile int32_t x783 = 51841;
	volatile int32_t x784 = INT32_MAX;
	int64_t t92 = INT64_MAX;

	t92 = (x781>>((x782<x783)/x784));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x785 = 12U;
	int64_t x787 = 354345849662LL;
	uint16_t x788 = UINT16_MAX;
	volatile int32_t t93 = -14;

	t93 = (x785>>((x786<x787)/x788));

	if (t93 != 12) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x789 = 0U;
	uint16_t x790 = 6445U;
	int64_t x791 = INT64_MIN;
	int32_t x792 = INT32_MAX;
	volatile int32_t t94 = -4244;

	t94 = (x789>>((x790<x791)/x792));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x793 = 11U;
	int64_t x794 = -7LL;
	uint16_t x795 = 9588U;
	volatile int32_t x796 = INT32_MIN;

	t95 = (x793>>((x794<x795)/x796));

	if (t95 != 11) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x797 = INT32_MAX;
	volatile int32_t x798 = INT32_MIN;
	int8_t x799 = INT8_MIN;
	uint8_t x800 = 8U;
	static volatile int32_t t96 = INT32_MAX;

	t96 = (x797>>((x798<x799)/x800));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x801 = UINT64_MAX;
	int16_t x803 = INT16_MIN;
	static int64_t x804 = INT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x801>>((x802<x803)/x804));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x805 = 1U;
	uint8_t x806 = 72U;
	int16_t x807 = 43;
	int8_t x808 = -1;
	volatile int32_t t98 = 1666;

	t98 = (x805>>((x806<x807)/x808));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x813 = 7015U;
	uint32_t x815 = 3437U;
	int8_t x816 = -1;
	uint32_t t99 = 3722282U;

	t99 = (x813>>((x814<x815)/x816));

	if (t99 != 7015U) { NG(); } else { ; }
	
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

