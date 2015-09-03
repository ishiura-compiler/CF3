#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -1;
int16_t x13 = -299;
static int8_t x14 = -20;
static int8_t x15 = -1;
int32_t x16 = -1;
static volatile int16_t x25 = INT16_MIN;
static uint64_t x26 = 40522534249LLU;
static uint32_t x31 = 1U;
static volatile uint16_t x32 = 5495U;
int8_t x33 = INT8_MAX;
uint8_t x37 = 6U;
int16_t x38 = 8;
static uint8_t x42 = 5U;
int32_t x52 = -2242;
volatile int32_t t7 = 69931933;
volatile uint64_t t9 = 1LLU;
int64_t x78 = 1200655794582LL;
int32_t x79 = INT32_MIN;
int16_t x86 = 27;
int16_t x87 = -1443;
uint64_t t12 = 147176LLU;
volatile uint32_t t13 = 99348936U;
static int64_t x108 = -26742153249327LL;
volatile int64_t x111 = 18223LL;
volatile uint8_t x113 = UINT8_MAX;
static uint64_t x114 = 1838203204052LLU;
uint8_t x115 = 5U;
int8_t x120 = INT8_MIN;
static int16_t x127 = 150;
volatile int64_t t19 = -2326LL;
int8_t x148 = 0;
static int32_t x161 = -29456;
int32_t x164 = -1;
uint8_t x170 = 18U;
int8_t x172 = INT8_MAX;
int16_t x219 = INT16_MIN;
int64_t x227 = INT64_MIN;
int16_t x228 = 1;
int64_t x233 = INT64_MAX;
int8_t x245 = -1;
int16_t x247 = 124;
int8_t x250 = 2;
volatile uint64_t t32 = 122815103LLU;
int16_t x258 = INT16_MAX;
uint16_t x265 = 1245U;
static volatile uint32_t t36 = 637U;
static volatile uint32_t x276 = 4U;
volatile int64_t t37 = 14884258520260LL;
uint8_t x278 = UINT8_MAX;
uint16_t x279 = 5097U;
int32_t t38 = 25014267;
uint16_t x289 = 3579U;
int32_t x291 = INT32_MIN;
static uint32_t t39 = 151070U;
volatile int64_t x307 = -1LL;
int32_t x318 = INT32_MIN;
static uint16_t x321 = 1368U;
uint64_t x325 = UINT64_MAX;
uint64_t t45 = 34175443LLU;
static volatile int32_t x349 = -1;
uint32_t x350 = 1141U;
volatile uint32_t t46 = 6720248U;
uint32_t x354 = UINT32_MAX;
int32_t x371 = -1;
uint16_t x372 = UINT16_MAX;
uint32_t x389 = 397U;
static uint32_t t51 = 224421788U;
volatile int32_t x396 = -64169;
int32_t t52 = INT32_MAX;
int64_t x409 = INT64_MIN;
static int8_t x410 = -1;
int64_t x412 = -58780817LL;
static volatile uint8_t x413 = 24U;
uint64_t t55 = 5168601674623LLU;
int64_t x421 = INT64_MIN;
volatile int8_t x424 = -1;
int64_t t57 = -2706260495257811897LL;
int64_t x428 = -1LL;
uint32_t t58 = 82U;
volatile int64_t x435 = 8170193408910024LL;
static uint64_t x437 = 8259432010269844608LLU;
volatile uint64_t t60 = 8019636LLU;
uint32_t x444 = UINT32_MAX;
int8_t x454 = INT8_MIN;
int8_t x455 = -3;
uint32_t x456 = 915U;
volatile int32_t t62 = 20;
uint32_t x461 = 297480U;
int64_t x462 = INT64_MAX;
volatile int32_t x471 = INT32_MIN;
volatile int64_t x478 = INT64_MIN;
volatile uint32_t t67 = 217U;
int64_t x488 = INT64_MIN;
uint32_t x489 = UINT32_MAX;
int32_t x490 = INT32_MIN;
uint16_t x499 = 3U;
int64_t x500 = 1832230LL;
static volatile int8_t x505 = 0;
int16_t x507 = -1;
int8_t x522 = -1;
uint8_t x530 = 3U;
uint32_t x531 = 2161962U;
volatile int32_t x534 = 83;
volatile int64_t t76 = -47LL;
static int64_t x539 = -102445LL;
uint32_t x572 = 96243U;
int16_t x573 = -1;
volatile int32_t t80 = -10;
volatile int8_t x590 = -6;
static volatile int8_t x592 = INT8_MIN;
uint16_t x594 = UINT16_MAX;
uint32_t x609 = 695669179U;
int8_t x610 = -1;
int32_t x611 = INT32_MAX;
uint64_t t86 = 7492572126165697LLU;
int32_t x618 = INT32_MAX;
int32_t x641 = INT32_MIN;
uint64_t x656 = 484509753002532LLU;
uint64_t t92 = 2504088579985420883LLU;
uint8_t x657 = 92U;
static volatile int32_t t94 = 172;
int8_t x688 = INT8_MIN;
static int8_t x690 = 3;


void f0(void) {
	int8_t x10 = INT8_MIN;
	volatile uint64_t x11 = 7890216LLU;
	int32_t x12 = INT32_MIN;
	int32_t t0 = -13194596;

	t0 = ((x9^x10)>>(x11<x12));

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t t1 = -748636;

	t1 = ((x13^x14)>>(x15<x16));

	if (t1 != 313) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x27 = 59LLU;
	static volatile int8_t x28 = INT8_MIN;
	uint64_t t2 = 7563950LLU;

	t2 = ((x25^x26)>>(x27<x28));

	if (t2 != 9223372016593512116LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x29 = 93993U;
	int8_t x30 = INT8_MAX;
	uint32_t t3 = 181981213U;

	t3 = ((x29^x30)>>(x31<x32));

	if (t3 != 47019U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x34 = 0;
	int16_t x35 = INT16_MIN;
	static volatile uint8_t x36 = UINT8_MAX;
	int32_t t4 = 3947;

	t4 = ((x33^x34)>>(x35<x36));

	if (t4 != 63) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x39 = 41;
	uint64_t x40 = 148362016LLU;
	int32_t t5 = -11447;

	t5 = ((x37^x38)>>(x39<x40));

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x41 = UINT8_MAX;
	static int32_t x43 = -6;
	static int32_t x44 = -1;
	volatile int32_t t6 = -3462055;

	t6 = ((x41^x42)>>(x43<x44));

	if (t6 != 125) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = 14180895;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MAX;

	t7 = ((x49^x50)>>(x51<x52));

	if (t7 != 14196192) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x53 = UINT32_MAX;
	uint16_t x54 = 15U;
	uint32_t x55 = 0U;
	static uint16_t x56 = 1271U;
	volatile uint32_t t8 = 91U;

	t8 = ((x53^x54)>>(x55<x56));

	if (t8 != 2147483640U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MAX;
	static uint64_t x62 = 4866888939989880LLU;
	volatile int8_t x63 = -1;
	uint8_t x64 = 6U;

	t9 = ((x61^x62)>>(x63<x64));

	if (t9 != 2433444469983811LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = 24;
	volatile int8_t x80 = -8;
	static int64_t t10 = -185426462583971LL;

	t10 = ((x77^x78)>>(x79<x80));

	if (t10 != 600327897287LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x85 = 1592358851U;
	int8_t x88 = -3;
	uint32_t t11 = 4U;

	t11 = ((x85^x86)>>(x87<x88));

	if (t11 != 796179436U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	uint32_t x94 = 84306013U;
	static volatile int32_t x95 = INT32_MIN;
	static int8_t x96 = -1;

	t12 = ((x93^x94)>>(x95<x96));

	if (t12 != 9223372036812622801LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x101 = 6242U;
	uint32_t x102 = 56U;
	volatile uint16_t x103 = UINT16_MAX;
	uint8_t x104 = 8U;

	t13 = ((x101^x102)>>(x103<x104));

	if (t13 != 6234U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x105 = -5;
	int32_t x106 = INT32_MIN;
	static int32_t x107 = INT32_MAX;
	int32_t t14 = 7446667;

	t14 = ((x105^x106)>>(x107<x108));

	if (t14 != 2147483643) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x109 = -1;
	int8_t x110 = -22;
	int32_t x112 = INT32_MAX;
	volatile int32_t t15 = 51;

	t15 = ((x109^x110)>>(x111<x112));

	if (t15 != 10) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x116 = -1;
	uint64_t t16 = 286832515656LLU;

	t16 = ((x113^x114)>>(x115<x116));

	if (t16 != 1838203203883LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x117 = 13U;
	static int64_t x118 = INT64_MAX;
	int64_t x119 = -1LL;
	volatile int64_t t17 = 28065892442397818LL;

	t17 = ((x117^x118)>>(x119<x120));

	if (t17 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x125 = 1;
	static uint64_t x126 = 8122575612633032LLU;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t18 = 23602032987277640LLU;

	t18 = ((x125^x126)>>(x127<x128));

	if (t18 != 8122575612633033LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x137 = -1296401LL;
	static int16_t x138 = -1;
	int64_t x139 = -1LL;
	int64_t x140 = INT64_MIN;

	t19 = ((x137^x138)>>(x139<x140));

	if (t19 != 1296400LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x145 = 789839U;
	uint32_t x146 = 671643210U;
	int32_t x147 = INT32_MIN;
	volatile uint32_t t20 = 0U;

	t20 = ((x145^x146)>>(x147<x148));

	if (t20 != 335691138U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x149 = INT32_MAX;
	uint8_t x150 = 0U;
	int32_t x151 = -1;
	static int64_t x152 = 168545LL;
	int32_t t21 = 174;

	t21 = ((x149^x150)>>(x151<x152));

	if (t21 != 1073741823) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x162 = -1761473823871LL;
	static uint8_t x163 = UINT8_MAX;
	int64_t t22 = 398522518411584411LL;

	t22 = ((x161^x162)>>(x163<x164));

	if (t22 != 1761473853297LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x171 = INT64_MAX;
	volatile uint32_t t23 = 16640729U;

	t23 = ((x169^x170)>>(x171<x172));

	if (t23 != 4294967277U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x173 = 104711198LLU;
	int8_t x174 = INT8_MIN;
	static uint8_t x175 = UINT8_MAX;
	static uint32_t x176 = 39562U;
	volatile uint64_t t24 = 535620LLU;

	t24 = ((x173^x174)>>(x175<x176));

	if (t24 != 9223372036802420175LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x205 = INT8_MAX;
	uint32_t x206 = 234124U;
	volatile int16_t x207 = INT16_MIN;
	uint16_t x208 = 1U;
	static uint32_t t25 = 1131247U;

	t25 = ((x205^x206)>>(x207<x208));

	if (t25 != 117113U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x209 = 4;
	uint16_t x210 = 58U;
	uint64_t x211 = 298657659977LLU;
	volatile int16_t x212 = INT16_MIN;
	int32_t t26 = 328;

	t26 = ((x209^x210)>>(x211<x212));

	if (t26 != 31) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x217 = INT32_MAX;
	static volatile uint32_t x218 = 1923480576U;
	uint32_t x220 = 761163U;
	static uint32_t t27 = 422138880U;

	t27 = ((x217^x218)>>(x219<x220));

	if (t27 != 224003071U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x221 = 23;
	static uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 9U;
	int32_t x224 = INT32_MIN;
	static volatile uint64_t t28 = 7883693291489LLU;

	t28 = ((x221^x222)>>(x223<x224));

	if (t28 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x225 = INT64_MIN;
	static int64_t x226 = INT64_MIN;
	int64_t t29 = -52367LL;

	t29 = ((x225^x226)>>(x227<x228));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x234 = 26930270U;
	uint8_t x235 = 86U;
	int32_t x236 = INT32_MAX;
	volatile int64_t t30 = 31415LL;

	t30 = ((x233^x234)>>(x235<x236));

	if (t30 != 4611686018413922768LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x246 = INT8_MIN;
	int64_t x248 = 113116798412786LL;
	int32_t t31 = 25;

	t31 = ((x245^x246)>>(x247<x248));

	if (t31 != 63) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x249 = 3940LLU;
	uint8_t x251 = 1U;
	int8_t x252 = 0;

	t32 = ((x249^x250)>>(x251<x252));

	if (t32 != 3942LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x253 = 1532234;
	int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t33 = 0;

	t33 = ((x253^x254)>>(x255<x256));

	if (t33 != 766106) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x257 = 7U;
	uint64_t x259 = 281121555084423521LLU;
	static volatile int32_t x260 = INT32_MAX;
	static uint32_t t34 = 204127559U;

	t34 = ((x257^x258)>>(x259<x260));

	if (t34 != 32760U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x266 = 1747U;
	static uint64_t x267 = 3346LLU;
	static volatile int8_t x268 = INT8_MIN;
	volatile uint32_t t35 = 1303023U;

	t35 = ((x265^x266)>>(x267<x268));

	if (t35 != 263U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x269 = 0U;
	uint32_t x270 = 17858U;
	int8_t x271 = -61;
	int64_t x272 = -999608529758696LL;

	t36 = ((x269^x270)>>(x271<x272));

	if (t36 != 17858U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x273 = INT64_MAX;
	int16_t x274 = 505;
	static volatile uint16_t x275 = 2U;

	t37 = ((x273^x274)>>(x275<x276));

	if (t37 != 4611686018427387651LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x277 = UINT16_MAX;
	int32_t x280 = -1;

	t38 = ((x277^x278)>>(x279<x280));

	if (t38 != 65280) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x290 = UINT32_MAX;
	int16_t x292 = -1;

	t39 = ((x289^x290)>>(x291<x292));

	if (t39 != 2147481858U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x293 = -1;
	int32_t x294 = INT32_MIN;
	static int16_t x295 = -1;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t40 = INT32_MAX;

	t40 = ((x293^x294)>>(x295<x296));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x301 = UINT32_MAX;
	uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 223637599LLU;
	int8_t x304 = INT8_MAX;
	uint32_t t41 = 129497U;

	t41 = ((x301^x302)>>(x303<x304));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x305 = INT32_MAX;
	uint16_t x306 = 49U;
	static volatile uint32_t x308 = 132745559U;
	int32_t t42 = -179435658;

	t42 = ((x305^x306)>>(x307<x308));

	if (t42 != 1073741799) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x317 = INT8_MIN;
	int16_t x319 = -4;
	static volatile int64_t x320 = INT64_MIN;
	int32_t t43 = -16913;

	t43 = ((x317^x318)>>(x319<x320));

	if (t43 != 2147483520) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x322 = 2U;
	static volatile int16_t x323 = -1;
	int8_t x324 = -1;
	volatile int32_t t44 = -1;

	t44 = ((x321^x322)>>(x323<x324));

	if (t44 != 1370) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x326 = 9;
	int8_t x327 = 35;
	volatile int8_t x328 = -1;

	t45 = ((x325^x326)>>(x327<x328));

	if (t45 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x351 = -1;
	volatile int8_t x352 = INT8_MIN;

	t46 = ((x349^x350)>>(x351<x352));

	if (t46 != 4294966154U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x353 = 7749;
	uint64_t x355 = 977LLU;
	uint16_t x356 = UINT16_MAX;
	static uint32_t t47 = 14470828U;

	t47 = ((x353^x354)>>(x355<x356));

	if (t47 != 2147479773U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x369 = 94722931978767LLU;
	int64_t x370 = INT64_MIN;
	uint64_t t48 = 103LLU;

	t48 = ((x369^x370)>>(x371<x372));

	if (t48 != 4611733379893377287LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x381 = UINT64_MAX;
	volatile int64_t x382 = INT64_MIN;
	int64_t x383 = -1LL;
	int8_t x384 = INT8_MAX;
	uint64_t t49 = 45007355070LLU;

	t49 = ((x381^x382)>>(x383<x384));

	if (t49 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x385 = -7LL;
	int8_t x386 = -17;
	int32_t x387 = INT32_MAX;
	static uint32_t x388 = 0U;
	static int64_t t50 = 775386686258368271LL;

	t50 = ((x385^x386)>>(x387<x388));

	if (t50 != 22LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	static uint16_t x392 = 31U;

	t51 = ((x389^x390)>>(x391<x392));

	if (t51 != 2147483398U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = -1;
	int64_t x395 = INT64_MAX;

	t52 = ((x393^x394)>>(x395<x396));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x401 = INT8_MIN;
	uint64_t x402 = 119865246LLU;
	static volatile int8_t x403 = INT8_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t53 = 781187976550894LLU;

	t53 = ((x401^x402)>>(x403<x404));

	if (t53 != 9223372036794843151LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x411 = UINT8_MAX;
	static int64_t t54 = INT64_MAX;

	t54 = ((x409^x410)>>(x411<x412));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x414 = 233LLU;
	uint32_t x415 = 0U;
	uint32_t x416 = 30446U;

	t55 = ((x413^x414)>>(x415<x416));

	if (t55 != 120LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x417 = INT8_MAX;
	int64_t x418 = 116298734915721091LL;
	int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MAX;
	int64_t t56 = -652240362742556729LL;

	t56 = ((x417^x418)>>(x419<x420));

	if (t56 != 58149367457860606LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x422 = -109059;
	int16_t x423 = INT16_MIN;

	t57 = ((x421^x422)>>(x423<x424));

	if (t57 != 4611686018427333374LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	int16_t x427 = INT16_MIN;

	t58 = ((x425^x426)>>(x427<x428));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x433 = -38441LL;
	static volatile int16_t x434 = INT16_MIN;
	uint64_t x436 = 427624024678089838LLU;
	int64_t t59 = -2925088357460006LL;

	t59 = ((x433^x434)>>(x435<x436));

	if (t59 != 29931LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x438 = -1;
	int8_t x439 = -1;
	uint32_t x440 = 3U;

	t60 = ((x437^x438)>>(x439<x440));

	if (t60 != 10187312063439707007LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x441 = -429390120871LL;
	uint64_t x442 = 0LLU;
	uint64_t x443 = UINT64_MAX;
	volatile uint64_t t61 = 448329LLU;

	t61 = ((x441^x442)>>(x443<x444));

	if (t61 != 18446743644319430745LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x453 = INT32_MIN;

	t62 = ((x453^x454)>>(x455<x456));

	if (t62 != 2147483520) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x463 = INT8_MAX;
	uint8_t x464 = UINT8_MAX;
	int64_t t63 = 494LL;

	t63 = ((x461^x462)>>(x463<x464));

	if (t63 != 4611686018427239163LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x465 = 31;
	uint32_t x466 = 320U;
	uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MAX;
	volatile uint32_t t64 = 430U;

	t64 = ((x465^x466)>>(x467<x468));

	if (t64 != 175U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x469 = UINT16_MAX;
	volatile uint64_t x470 = 48LLU;
	int32_t x472 = -1;
	volatile uint64_t t65 = 0LLU;

	t65 = ((x469^x470)>>(x471<x472));

	if (t65 != 32743LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x477 = 2348098923034LLU;
	uint32_t x479 = 12559120U;
	uint16_t x480 = 10751U;
	volatile uint64_t t66 = 28769209461LLU;

	t66 = ((x477^x478)>>(x479<x480));

	if (t66 != 9223374384953698842LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x481 = 25331250U;
	uint32_t x482 = 279530U;
	static uint32_t x483 = UINT32_MAX;
	volatile int16_t x484 = INT16_MIN;

	t67 = ((x481^x482)>>(x483<x484));

	if (t67 != 25609688U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x485 = UINT32_MAX;
	int16_t x486 = -1;
	int32_t x487 = INT32_MIN;
	uint32_t t68 = 690U;

	t68 = ((x485^x486)>>(x487<x488));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x491 = INT8_MIN;
	static int64_t x492 = INT64_MAX;
	volatile uint32_t t69 = 6013438U;

	t69 = ((x489^x490)>>(x491<x492));

	if (t69 != 1073741823U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x493 = 6U;
	int64_t x494 = INT64_MAX;
	uint8_t x495 = 110U;
	int16_t x496 = -1;
	static int64_t t70 = 1721259778173LL;

	t70 = ((x493^x494)>>(x495<x496));

	if (t70 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x497 = INT64_MIN;
	volatile int8_t x498 = INT8_MIN;
	int64_t t71 = 3935083LL;

	t71 = ((x497^x498)>>(x499<x500));

	if (t71 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x506 = 984735;
	volatile int16_t x508 = 4005;
	static int32_t t72 = -31952;

	t72 = ((x505^x506)>>(x507<x508));

	if (t72 != 492367) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x509 = 7192255196LLU;
	volatile int64_t x510 = -748301374LL;
	int64_t x511 = INT64_MIN;
	static int64_t x512 = -1LL;
	uint64_t t73 = 14085LLU;

	t73 = ((x509^x510)>>(x511<x512));

	if (t73 != 9223372033632134287LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x521 = -1;
	int64_t x523 = INT64_MAX;
	int16_t x524 = -3170;
	int32_t t74 = 69636184;

	t74 = ((x521^x522)>>(x523<x524));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x529 = INT32_MAX;
	int8_t x532 = INT8_MAX;
	int32_t t75 = 123472;

	t75 = ((x529^x530)>>(x531<x532));

	if (t75 != 2147483644) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x533 = INT64_MAX;
	uint16_t x535 = 2597U;
	int32_t x536 = -3821171;

	t76 = ((x533^x534)>>(x535<x536));

	if (t76 != 9223372036854775724LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x537 = UINT32_MAX;
	int16_t x538 = 40;
	volatile uint64_t x540 = 1933596569821546LLU;
	volatile uint32_t t77 = 1U;

	t77 = ((x537^x538)>>(x539<x540));

	if (t77 != 4294967255U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x545 = INT16_MIN;
	uint32_t x546 = 1957U;
	volatile int8_t x547 = 2;
	static int64_t x548 = -1LL;
	uint32_t t78 = 11U;

	t78 = ((x545^x546)>>(x547<x548));

	if (t78 != 4294936485U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x569 = 6358;
	uint16_t x570 = UINT16_MAX;
	int16_t x571 = INT16_MAX;
	int32_t t79 = 932;

	t79 = ((x569^x570)>>(x571<x572));

	if (t79 != 29588) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x574 = -1;
	int32_t x575 = INT32_MIN;
	int16_t x576 = -1;

	t80 = ((x573^x574)>>(x575<x576));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x585 = INT8_MAX;
	volatile uint64_t x586 = UINT64_MAX;
	static volatile int16_t x587 = INT16_MIN;
	int16_t x588 = 5;
	uint64_t t81 = 1046432LLU;

	t81 = ((x585^x586)>>(x587<x588));

	if (t81 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x589 = 189U;
	static uint32_t x591 = UINT32_MAX;
	volatile uint32_t t82 = 3U;

	t82 = ((x589^x590)>>(x591<x592));

	if (t82 != 4294967111U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x593 = INT64_MAX;
	int8_t x595 = -19;
	volatile int16_t x596 = INT16_MAX;
	volatile int64_t t83 = -978169432583LL;

	t83 = ((x593^x594)>>(x595<x596));

	if (t83 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x601 = -1LL;
	uint64_t x602 = 206579700273LLU;
	uint16_t x603 = UINT16_MAX;
	static int16_t x604 = -3241;
	volatile uint64_t t84 = 125LLU;

	t84 = ((x601^x602)>>(x603<x604));

	if (t84 != 18446743867129851342LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x612 = 54U;
	uint32_t t85 = 403U;

	t85 = ((x609^x610)>>(x611<x612));

	if (t85 != 3599298116U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x613 = UINT8_MAX;
	uint64_t x614 = 933007881111674LLU;
	int8_t x615 = -48;
	int16_t x616 = INT16_MIN;

	t86 = ((x613^x614)>>(x615<x616));

	if (t86 != 933007881111685LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x617 = UINT8_MAX;
	static int64_t x619 = INT64_MIN;
	int16_t x620 = INT16_MAX;
	int32_t t87 = 221719;

	t87 = ((x617^x618)>>(x619<x620));

	if (t87 != 1073741696) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x625 = INT32_MAX;
	int64_t x626 = INT64_MAX;
	int64_t x627 = 8927748LL;
	uint8_t x628 = 7U;
	int64_t t88 = -183851749625LL;

	t88 = ((x625^x626)>>(x627<x628));

	if (t88 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x629 = INT8_MIN;
	static int32_t x630 = INT32_MIN;
	uint64_t x631 = 102919LLU;
	uint8_t x632 = 9U;
	int32_t t89 = -3510984;

	t89 = ((x629^x630)>>(x631<x632));

	if (t89 != 2147483520) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x642 = UINT64_MAX;
	uint16_t x643 = UINT16_MAX;
	uint8_t x644 = 1U;
	uint64_t t90 = 3460832LLU;

	t90 = ((x641^x642)>>(x643<x644));

	if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x649 = 108U;
	int64_t x650 = 109889822358LL;
	int64_t x651 = INT64_MAX;
	static int16_t x652 = INT16_MIN;
	volatile int64_t t91 = -11142016212LL;

	t91 = ((x649^x650)>>(x651<x652));

	if (t91 != 109889822458LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x653 = INT16_MAX;
	uint64_t x654 = 513728546LLU;
	volatile int32_t x655 = INT32_MIN;

	t92 = ((x653^x654)>>(x655<x656));

	if (t92 != 513712093LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x658 = INT32_MAX;
	volatile uint16_t x659 = UINT16_MAX;
	uint8_t x660 = 7U;
	int32_t t93 = -15;

	t93 = ((x657^x658)>>(x659<x660));

	if (t93 != 2147483555) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x661 = UINT16_MAX;
	int16_t x662 = 10;
	volatile uint8_t x663 = 15U;
	volatile uint16_t x664 = UINT16_MAX;

	t94 = ((x661^x662)>>(x663<x664));

	if (t94 != 32762) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x665 = UINT8_MAX;
	int32_t x666 = 12442493;
	volatile uint32_t x667 = 12U;
	static int8_t x668 = -1;
	volatile int32_t t95 = -692034624;

	t95 = ((x665^x666)>>(x667<x668));

	if (t95 != 6221249) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x673 = -1;
	int32_t x674 = -1;
	uint64_t x675 = UINT64_MAX;
	int8_t x676 = INT8_MAX;
	static volatile int32_t t96 = -79;

	t96 = ((x673^x674)>>(x675<x676));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x681 = 0U;
	int32_t x682 = 1;
	static uint64_t x683 = 1LLU;
	int8_t x684 = INT8_MAX;
	static volatile int32_t t97 = -235073;

	t97 = ((x681^x682)>>(x683<x684));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x685 = -6;
	uint32_t x686 = 10350208U;
	static int16_t x687 = 11267;
	uint32_t t98 = 46650409U;

	t98 = ((x685^x686)>>(x687<x688));

	if (t98 != 4284617082U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x689 = INT8_MAX;
	int8_t x691 = -1;
	uint64_t x692 = UINT64_MAX;
	static volatile int32_t t99 = 695980;

	t99 = ((x689^x690)>>(x691<x692));

	if (t99 != 124) { NG(); } else { ; }
	
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

