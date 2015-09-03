#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 0U;
static volatile int64_t x7 = INT64_MAX;
static int32_t t0 = INT32_MAX;
static volatile uint16_t x9 = 1U;
static int32_t t1 = -342822586;
int32_t x31 = 8499632;
volatile uint16_t x32 = 102U;
volatile int32_t x37 = 1355;
static int64_t x55 = INT64_MAX;
int64_t x61 = INT64_MAX;
int32_t x63 = 46;
uint64_t x89 = 3721680LLU;
int32_t x105 = 0;
static int32_t t11 = -5;
int32_t x151 = INT32_MAX;
static uint8_t x167 = UINT8_MAX;
int32_t x177 = INT32_MAX;
int64_t x178 = INT64_MAX;
uint64_t x179 = 345796438785098942LLU;
int16_t x192 = INT16_MIN;
uint16_t x201 = 10373U;
static int16_t x208 = -13420;
int32_t x222 = -1;
volatile int8_t x223 = -1;
static volatile int32_t t19 = INT32_MAX;
int8_t x241 = 11;
static int8_t x242 = 51;
volatile int32_t x243 = -1;
int64_t x262 = INT64_MIN;
static int32_t t22 = INT32_MAX;
static volatile int8_t x285 = INT8_MAX;
uint8_t x286 = UINT8_MAX;
static volatile int64_t x296 = -44273167LL;
volatile int32_t t25 = -23472148;
int64_t x298 = INT64_MAX;
uint32_t x345 = UINT32_MAX;
uint64_t x347 = 15997337703030917LLU;
static int32_t t30 = 2088596;
volatile int8_t x390 = 0;
static uint16_t x410 = 13U;
int32_t x424 = -1;
uint16_t x458 = 1U;
static uint64_t x460 = 821310335634LLU;
volatile int64_t t35 = INT64_MAX;
int16_t x490 = 4;
uint8_t x525 = 5U;
int64_t x527 = 1223405415290399156LL;
int32_t t38 = 2133;
volatile uint64_t x541 = 2667512955515LLU;
uint64_t t39 = 3997680942LLU;
static uint16_t x553 = 4U;
static int32_t t40 = 3176;
static int8_t x564 = 1;
volatile int32_t t41 = -1;
volatile int16_t x566 = 25;
volatile int16_t x568 = -1;
volatile int64_t x589 = INT64_MAX;
uint32_t x591 = UINT32_MAX;
static volatile int32_t t46 = INT32_MAX;
static int64_t x658 = 716073181790768LL;
volatile int16_t x687 = INT16_MAX;
uint16_t x699 = 1687U;
uint32_t x712 = 1U;
volatile int32_t t51 = 1;
uint16_t x715 = UINT16_MAX;
volatile int64_t x730 = INT64_MIN;
static uint32_t x731 = UINT32_MAX;
int32_t x774 = INT32_MAX;
uint64_t x776 = 1081518455LLU;
volatile int32_t t54 = -22;
volatile int32_t x833 = 190;
static volatile int16_t x834 = INT16_MIN;
volatile int32_t t57 = 1103;
int16_t x842 = -13;
static volatile int64_t t58 = 7LL;
int8_t x873 = INT8_MAX;
int64_t x874 = INT64_MIN;
volatile uint32_t t62 = UINT32_MAX;
static int16_t x892 = INT16_MIN;
uint16_t x901 = 15U;
int16_t x902 = INT16_MIN;
uint8_t x904 = 60U;
int8_t x913 = INT8_MAX;
int16_t x923 = 4;
int16_t x962 = 0;
int8_t x985 = INT8_MAX;
int32_t x998 = -2;
int8_t x1000 = INT8_MIN;
static int8_t x1008 = INT8_MIN;
uint8_t x1009 = UINT8_MAX;
int16_t x1011 = 3;
int8_t x1012 = -7;
volatile int8_t x1043 = INT8_MIN;
int16_t x1054 = 233;
uint64_t x1055 = UINT64_MAX;
static int64_t x1060 = -37859LL;
static int64_t x1070 = INT64_MIN;
int32_t x1073 = 0;
int32_t x1074 = -1;
static int32_t x1075 = -1;
volatile int32_t t79 = 189003128;
static int8_t x1083 = INT8_MIN;
int64_t x1087 = 961511LL;
static volatile int32_t t81 = 6298;
static uint16_t x1091 = 325U;
static volatile uint32_t x1097 = 3351083U;
int8_t x1098 = 0;
int8_t x1107 = INT8_MAX;
static int8_t x1129 = 1;
int16_t x1132 = -1;
int64_t x1145 = 1404544354759LL;
volatile uint16_t x1146 = 32U;
int32_t t88 = -948728321;
volatile int64_t t89 = INT64_MAX;
volatile uint32_t x1191 = 2742994U;
volatile uint8_t x1193 = UINT8_MAX;
int16_t x1206 = -3551;
static int64_t x1207 = -1LL;
int32_t t93 = 214559;
static uint16_t x1216 = UINT16_MAX;
volatile uint64_t x1229 = UINT64_MAX;
int16_t x1232 = 1;
static int16_t x1252 = INT16_MIN;
int32_t x1301 = INT32_MAX;
int32_t x1304 = 1;


void f0(void) {
	int32_t x5 = INT32_MAX;
	static int16_t x8 = -1;

	t0 = (x5>>(x6*(x7<x8)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x10 = 0;
	int32_t x11 = 2520;
	static int64_t x12 = INT64_MIN;

	t1 = (x9>>(x10*(x11<x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = INT32_MAX;
	int64_t x30 = 1053479LL;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x29>>(x30*(x31<x32)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x38 = INT8_MIN;
	int64_t x39 = 221443LL;
	int16_t x40 = -1;
	static volatile int32_t t3 = -333358;

	t3 = (x37>>(x38*(x39<x40)));

	if (t3 != 1355) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = 5070186LLU;
	static int16_t x56 = INT16_MAX;
	int32_t t4 = -1;

	t4 = (x53>>(x54*(x55<x56)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x62 = INT64_MIN;
	int16_t x64 = -1;
	int64_t t5 = INT64_MAX;

	t5 = (x61>>(x62*(x63<x64)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x90 = 90U;
	static int32_t x91 = -1;
	int8_t x92 = INT8_MIN;
	uint64_t t6 = 878259516LLU;

	t6 = (x89>>(x90*(x91<x92)));

	if (t6 != 3721680LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x93 = 76U;
	int8_t x94 = INT8_MIN;
	uint8_t x95 = UINT8_MAX;
	int64_t x96 = INT64_MIN;
	static int32_t t7 = 48747;

	t7 = (x93>>(x94*(x95<x96)));

	if (t7 != 76) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MAX;
	static int16_t x108 = INT16_MAX;
	int32_t t8 = 66503795;

	t8 = (x105>>(x106*(x107<x108)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x109 = 387374U;
	int8_t x110 = 2;
	static int8_t x111 = -1;
	int16_t x112 = 25;
	uint32_t t9 = 939836U;

	t9 = (x109>>(x110*(x111<x112)));

	if (t9 != 96843U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x121 = 2U;
	int64_t x122 = -1LL;
	uint64_t x123 = 34224669LLU;
	uint64_t x124 = 45169LLU;
	int32_t t10 = 250034;

	t10 = (x121>>(x122*(x123<x124)));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x129 = 1U;
	volatile int8_t x130 = 3;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;

	t11 = (x129>>(x130*(x131<x132)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x137 = 293570;
	int64_t x138 = INT64_MAX;
	static volatile int16_t x139 = 722;
	int8_t x140 = INT8_MAX;
	volatile int32_t t12 = -109616;

	t12 = (x137>>(x138*(x139<x140)));

	if (t12 != 293570) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x149 = UINT16_MAX;
	uint16_t x150 = UINT16_MAX;
	uint32_t x152 = 17178U;
	volatile int32_t t13 = 121;

	t13 = (x149>>(x150*(x151<x152)));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x165 = 0U;
	int16_t x166 = INT16_MIN;
	static int64_t x168 = -1LL;
	static volatile int32_t t14 = 1;

	t14 = (x165>>(x166*(x167<x168)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x180 = 3477U;
	int32_t t15 = INT32_MAX;

	t15 = (x177>>(x178*(x179<x180)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x189 = 41U;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = 50;
	int32_t t16 = -31479;

	t16 = (x189>>(x190*(x191<x192)));

	if (t16 != 41) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x202 = 49U;
	static uint8_t x203 = UINT8_MAX;
	int8_t x204 = -1;
	volatile int32_t t17 = 121;

	t17 = (x201>>(x202*(x203<x204)));

	if (t17 != 10373) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x205 = 1828807609U;
	uint64_t x206 = 3470053006LLU;
	static volatile int8_t x207 = INT8_MIN;
	uint32_t t18 = 66645137U;

	t18 = (x205>>(x206*(x207<x208)));

	if (t18 != 1828807609U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x221 = INT32_MAX;
	uint32_t x224 = 9530101U;

	t19 = (x221>>(x222*(x223<x224)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x244 = UINT64_MAX;
	volatile int32_t t20 = 812634621;

	t20 = (x241>>(x242*(x243<x244)));

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x261 = 5;
	int8_t x263 = 49;
	int16_t x264 = INT16_MIN;
	volatile int32_t t21 = -232799;

	t21 = (x261>>(x262*(x263<x264)));

	if (t21 != 5) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x273 = INT32_MAX;
	int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MAX;
	static uint32_t x276 = 711U;

	t22 = (x273>>(x274*(x275<x276)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x281 = 0U;
	uint32_t x282 = 76471U;
	int32_t x283 = INT32_MAX;
	static int32_t x284 = -94703;
	int32_t t23 = 437334934;

	t23 = (x281>>(x282*(x283<x284)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x287 = INT16_MAX;
	int32_t x288 = -1;
	int32_t t24 = 3438;

	t24 = (x285>>(x286*(x287<x288)));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x293 = UINT8_MAX;
	volatile uint16_t x294 = UINT16_MAX;
	int16_t x295 = 15;

	t25 = (x293>>(x294*(x295<x296)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int16_t x299 = -1;
	int32_t x300 = INT32_MIN;
	uint32_t t26 = UINT32_MAX;

	t26 = (x297>>(x298*(x299<x300)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x329 = 1201LLU;
	volatile int8_t x330 = 0;
	int16_t x331 = INT16_MIN;
	static volatile int32_t x332 = INT32_MIN;
	uint64_t t27 = 15154LLU;

	t27 = (x329>>(x330*(x331<x332)));

	if (t27 != 1201LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x346 = UINT8_MAX;
	volatile uint8_t x348 = 1U;
	uint32_t t28 = UINT32_MAX;

	t28 = (x345>>(x346*(x347<x348)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x353 = 25;
	volatile int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MAX;
	int8_t x356 = -1;
	static volatile int32_t t29 = -60965;

	t29 = (x353>>(x354*(x355<x356)));

	if (t29 != 25) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x373 = 30;
	int16_t x374 = INT16_MIN;
	int64_t x375 = 71533368485316LL;
	static volatile int32_t x376 = 30768123;

	t30 = (x373>>(x374*(x375<x376)));

	if (t30 != 30) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x377 = 30330U;
	uint8_t x378 = 1U;
	int16_t x379 = INT16_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t31 = 529092805;

	t31 = (x377>>(x378*(x379<x380)));

	if (t31 != 15165) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x389 = 117U;
	uint8_t x391 = UINT8_MAX;
	static int64_t x392 = INT64_MIN;
	int32_t t32 = -30;

	t32 = (x389>>(x390*(x391<x392)));

	if (t32 != 117) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x409 = UINT32_MAX;
	uint64_t x411 = 718LLU;
	int32_t x412 = -1;
	volatile uint32_t t33 = 53751U;

	t33 = (x409>>(x410*(x411<x412)));

	if (t33 != 524287U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x421 = 28U;
	volatile uint16_t x422 = 18728U;
	uint8_t x423 = UINT8_MAX;
	volatile int32_t t34 = 47603387;

	t34 = (x421>>(x422*(x423<x424)));

	if (t34 != 28) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x457 = INT64_MAX;
	uint64_t x459 = UINT64_MAX;

	t35 = (x457>>(x458*(x459<x460)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x481 = 0;
	int8_t x482 = -4;
	int16_t x483 = 2167;
	static int16_t x484 = -1;
	volatile int32_t t36 = -3656258;

	t36 = (x481>>(x482*(x483<x484)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x489 = 8U;
	uint16_t x491 = UINT16_MAX;
	int64_t x492 = -1LL;
	volatile int32_t t37 = -11459015;

	t37 = (x489>>(x490*(x491<x492)));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x526 = 1U;
	int32_t x528 = -404943754;

	t38 = (x525>>(x526*(x527<x528)));

	if (t38 != 5) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x542 = 0U;
	volatile int16_t x543 = 409;
	int8_t x544 = INT8_MIN;

	t39 = (x541>>(x542*(x543<x544)));

	if (t39 != 2667512955515LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x554 = 32325305LL;
	static uint32_t x555 = 174U;
	int64_t x556 = -92475907139LL;

	t40 = (x553>>(x554*(x555<x556)));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x561 = INT16_MAX;
	int32_t x562 = INT32_MIN;
	int8_t x563 = INT8_MAX;

	t41 = (x561>>(x562*(x563<x564)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x565 = 3612577;
	volatile uint8_t x567 = UINT8_MAX;
	volatile int32_t t42 = 270980436;

	t42 = (x565>>(x566*(x567<x568)));

	if (t42 != 3612577) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x569 = 54U;
	int8_t x570 = INT8_MAX;
	int16_t x571 = -1;
	uint64_t x572 = 2519370147624LLU;
	volatile int32_t t43 = 58994;

	t43 = (x569>>(x570*(x571<x572)));

	if (t43 != 54) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x590 = 50U;
	int32_t x592 = INT32_MIN;
	volatile int64_t t44 = INT64_MAX;

	t44 = (x589>>(x590*(x591<x592)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x597 = 94903U;
	int16_t x598 = -1;
	uint64_t x599 = UINT64_MAX;
	int8_t x600 = INT8_MIN;
	uint32_t t45 = 153U;

	t45 = (x597>>(x598*(x599<x600)));

	if (t45 != 94903U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x601 = INT32_MAX;
	volatile uint16_t x602 = UINT16_MAX;
	int32_t x603 = INT32_MAX;
	int32_t x604 = -14736;

	t46 = (x601>>(x602*(x603<x604)));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x657 = 0;
	uint8_t x659 = 42U;
	static volatile int64_t x660 = -1LL;
	volatile int32_t t47 = 1;

	t47 = (x657>>(x658*(x659<x660)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x685 = 7543;
	static uint16_t x686 = 17U;
	int16_t x688 = INT16_MIN;
	volatile int32_t t48 = -1918659;

	t48 = (x685>>(x686*(x687<x688)));

	if (t48 != 7543) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x693 = 344;
	int64_t x694 = -1LL;
	int8_t x695 = INT8_MIN;
	uint64_t x696 = 433833794662514LLU;
	volatile int32_t t49 = -13499361;

	t49 = (x693>>(x694*(x695<x696)));

	if (t49 != 344) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x697 = 357442LLU;
	static volatile int8_t x698 = -23;
	int16_t x700 = -1;
	uint64_t t50 = 299740040169282495LLU;

	t50 = (x697>>(x698*(x699<x700)));

	if (t50 != 357442LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x709 = 1;
	uint32_t x710 = 796546815U;
	int8_t x711 = -1;

	t51 = (x709>>(x710*(x711<x712)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x713 = UINT32_MAX;
	uint64_t x714 = 90500995774517LLU;
	static int16_t x716 = -132;
	static volatile uint32_t t52 = UINT32_MAX;

	t52 = (x713>>(x714*(x715<x716)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x729 = INT64_MAX;
	static int8_t x732 = 0;
	int64_t t53 = INT64_MAX;

	t53 = (x729>>(x730*(x731<x732)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x773 = 1;
	static uint32_t x775 = UINT32_MAX;

	t54 = (x773>>(x774*(x775<x776)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x801 = 124U;
	uint8_t x802 = 53U;
	static int8_t x803 = -1;
	int32_t x804 = INT32_MIN;
	volatile int32_t t55 = 142;

	t55 = (x801>>(x802*(x803<x804)));

	if (t55 != 124) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x813 = 117;
	volatile uint32_t x814 = 970525684U;
	int16_t x815 = -1;
	int16_t x816 = INT16_MIN;
	volatile int32_t t56 = -15;

	t56 = (x813>>(x814*(x815<x816)));

	if (t56 != 117) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x835 = 952455442499011LLU;
	volatile uint32_t x836 = 6U;

	t57 = (x833>>(x834*(x835<x836)));

	if (t57 != 190) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x841 = 47300LL;
	static uint64_t x843 = 8411569737350694768LLU;
	int8_t x844 = 0;

	t58 = (x841>>(x842*(x843<x844)));

	if (t58 != 47300LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x845 = 11342501;
	static int16_t x846 = INT16_MIN;
	uint8_t x847 = 3U;
	int16_t x848 = 1;
	int32_t t59 = 763315515;

	t59 = (x845>>(x846*(x847<x848)));

	if (t59 != 11342501) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x849 = 10U;
	int32_t x850 = 5;
	int64_t x851 = 5LL;
	int64_t x852 = INT64_MIN;
	int32_t t60 = -1154997;

	t60 = (x849>>(x850*(x851<x852)));

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x875 = 7;
	int8_t x876 = -62;
	static volatile int32_t t61 = -9817;

	t61 = (x873>>(x874*(x875<x876)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x881 = UINT32_MAX;
	static uint32_t x882 = UINT32_MAX;
	uint16_t x883 = 1727U;
	int16_t x884 = -15859;

	t62 = (x881>>(x882*(x883<x884)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x889 = 40;
	int16_t x890 = 6;
	int32_t x891 = INT32_MAX;
	volatile int32_t t63 = 70196;

	t63 = (x889>>(x890*(x891<x892)));

	if (t63 != 40) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x903 = UINT64_MAX;
	volatile int32_t t64 = 819331;

	t64 = (x901>>(x902*(x903<x904)));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x914 = INT64_MAX;
	volatile int16_t x915 = -1;
	volatile int64_t x916 = INT64_MIN;
	int32_t t65 = 361323;

	t65 = (x913>>(x914*(x915<x916)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x921 = 0U;
	int64_t x922 = -6680107714795LL;
	volatile int32_t x924 = -1;
	int32_t t66 = 1;

	t66 = (x921>>(x922*(x923<x924)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x945 = UINT32_MAX;
	int16_t x946 = INT16_MAX;
	int16_t x947 = INT16_MIN;
	volatile int32_t x948 = INT32_MIN;
	uint32_t t67 = UINT32_MAX;

	t67 = (x945>>(x946*(x947<x948)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x961 = 30U;
	uint16_t x963 = 96U;
	uint8_t x964 = UINT8_MAX;
	int32_t t68 = -5839745;

	t68 = (x961>>(x962*(x963<x964)));

	if (t68 != 30) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x981 = 16U;
	static int32_t x982 = INT32_MIN;
	volatile int32_t x983 = -1;
	int8_t x984 = -56;
	int32_t t69 = -12957;

	t69 = (x981>>(x982*(x983<x984)));

	if (t69 != 16) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x986 = -114;
	int16_t x987 = -1;
	uint32_t x988 = 274502343U;
	static int32_t t70 = -75348229;

	t70 = (x985>>(x986*(x987<x988)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x997 = 236799414310LLU;
	uint64_t x999 = UINT64_MAX;
	uint64_t t71 = 13033362448914139LLU;

	t71 = (x997>>(x998*(x999<x1000)));

	if (t71 != 236799414310LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1005 = 4146U;
	int64_t x1006 = -1LL;
	static uint16_t x1007 = UINT16_MAX;
	static volatile uint32_t t72 = 45072U;

	t72 = (x1005>>(x1006*(x1007<x1008)));

	if (t72 != 4146U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1010 = 0U;
	int32_t t73 = 39;

	t73 = (x1009>>(x1010*(x1011<x1012)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x1025 = 1;
	int64_t x1026 = -1LL;
	int16_t x1027 = -1;
	int8_t x1028 = INT8_MIN;
	volatile int32_t t74 = 176;

	t74 = (x1025>>(x1026*(x1027<x1028)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1041 = 13U;
	volatile uint16_t x1042 = 54U;
	uint64_t x1044 = 629359552619LLU;
	volatile int32_t t75 = -2;

	t75 = (x1041>>(x1042*(x1043<x1044)));

	if (t75 != 13) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1053 = UINT32_MAX;
	uint8_t x1056 = 119U;
	uint32_t t76 = UINT32_MAX;

	t76 = (x1053>>(x1054*(x1055<x1056)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x1057 = INT8_MAX;
	int64_t x1058 = INT64_MIN;
	int32_t x1059 = -97;
	volatile int32_t t77 = -45924164;

	t77 = (x1057>>(x1058*(x1059<x1060)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1069 = 9;
	int16_t x1071 = INT16_MIN;
	uint64_t x1072 = 65145835699LLU;
	volatile int32_t t78 = 9346739;

	t78 = (x1069>>(x1070*(x1071<x1072)));

	if (t78 != 9) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1076 = -1;

	t79 = (x1073>>(x1074*(x1075<x1076)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1081 = UINT16_MAX;
	uint16_t x1082 = 13U;
	int8_t x1084 = INT8_MIN;
	volatile int32_t t80 = -3;

	t80 = (x1081>>(x1082*(x1083<x1084)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1085 = 39U;
	int8_t x1086 = 27;
	volatile int16_t x1088 = 194;

	t81 = (x1085>>(x1086*(x1087<x1088)));

	if (t81 != 39) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x1089 = 1U;
	int32_t x1090 = -1;
	static int64_t x1092 = INT64_MIN;
	volatile int32_t t82 = -70;

	t82 = (x1089>>(x1090*(x1091<x1092)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1099 = UINT8_MAX;
	int16_t x1100 = INT16_MAX;
	volatile uint32_t t83 = 190U;

	t83 = (x1097>>(x1098*(x1099<x1100)));

	if (t83 != 3351083U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x1105 = 2515;
	volatile uint8_t x1106 = 8U;
	int16_t x1108 = INT16_MIN;
	volatile int32_t t84 = -130102;

	t84 = (x1105>>(x1106*(x1107<x1108)));

	if (t84 != 2515) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x1125 = 5531198LLU;
	int64_t x1126 = 1127498049328313219LL;
	int16_t x1127 = 15;
	int8_t x1128 = 12;
	uint64_t t85 = 1LLU;

	t85 = (x1125>>(x1126*(x1127<x1128)));

	if (t85 != 5531198LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x1130 = INT32_MIN;
	uint8_t x1131 = 3U;
	int32_t t86 = 118441485;

	t86 = (x1129>>(x1130*(x1131<x1132)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1147 = 3U;
	static uint64_t x1148 = 285747926LLU;
	volatile int64_t t87 = 82917613LL;

	t87 = (x1145>>(x1146*(x1147<x1148)));

	if (t87 != 327LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1149 = UINT16_MAX;
	int16_t x1150 = INT16_MIN;
	uint16_t x1151 = 29202U;
	uint8_t x1152 = UINT8_MAX;

	t88 = (x1149>>(x1150*(x1151<x1152)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1153 = INT64_MAX;
	uint64_t x1154 = 9532711721839LLU;
	uint8_t x1155 = 3U;
	static int16_t x1156 = INT16_MIN;

	t89 = (x1153>>(x1154*(x1155<x1156)));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x1169 = 69U;
	int16_t x1170 = -10917;
	int8_t x1171 = -1;
	int16_t x1172 = INT16_MIN;
	volatile int32_t t90 = 714441702;

	t90 = (x1169>>(x1170*(x1171<x1172)));

	if (t90 != 69) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1189 = 12608LLU;
	volatile int8_t x1190 = -1;
	volatile int8_t x1192 = INT8_MAX;
	volatile uint64_t t91 = 884628122990LLU;

	t91 = (x1189>>(x1190*(x1191<x1192)));

	if (t91 != 12608LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1194 = INT8_MIN;
	int16_t x1195 = INT16_MIN;
	int64_t x1196 = INT64_MIN;
	volatile int32_t t92 = 38;

	t92 = (x1193>>(x1194*(x1195<x1196)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1205 = INT8_MAX;
	int8_t x1208 = INT8_MIN;

	t93 = (x1205>>(x1206*(x1207<x1208)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1213 = 5006932U;
	static int32_t x1214 = INT32_MIN;
	volatile uint64_t x1215 = UINT64_MAX;
	volatile uint32_t t94 = 133121U;

	t94 = (x1213>>(x1214*(x1215<x1216)));

	if (t94 != 5006932U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1217 = INT64_MAX;
	static int8_t x1218 = 1;
	int32_t x1219 = -170;
	int16_t x1220 = -161;
	int64_t t95 = -4220253336331LL;

	t95 = (x1217>>(x1218*(x1219<x1220)));

	if (t95 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1230 = INT16_MAX;
	uint32_t x1231 = 60U;
	uint64_t t96 = UINT64_MAX;

	t96 = (x1229>>(x1230*(x1231<x1232)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x1241 = 1;
	int8_t x1242 = 1;
	int8_t x1243 = -16;
	static uint32_t x1244 = 29899U;
	static int32_t t97 = 5936;

	t97 = (x1241>>(x1242*(x1243<x1244)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x1249 = 6;
	int64_t x1250 = -64093963548LL;
	volatile int64_t x1251 = -729LL;
	int32_t t98 = 120019;

	t98 = (x1249>>(x1250*(x1251<x1252)));

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1302 = -1;
	int16_t x1303 = 216;
	int32_t t99 = INT32_MAX;

	t99 = (x1301>>(x1302*(x1303<x1304)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

