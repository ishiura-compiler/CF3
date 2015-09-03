#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x26 = INT32_MIN;
volatile int32_t t3 = 65466007;
volatile int8_t x60 = INT8_MIN;
int32_t t5 = -494247;
uint64_t x63 = 333752543134LLU;
int32_t x64 = -1110035;
int32_t x73 = INT32_MAX;
uint32_t x76 = UINT32_MAX;
int32_t t7 = INT32_MAX;
uint16_t x93 = 7U;
int16_t x96 = 91;
static int64_t x97 = -1LL;
static int64_t x109 = INT64_MIN;
static uint8_t x110 = 19U;
uint32_t x111 = UINT32_MAX;
uint64_t x119 = 111757924050270LLU;
uint64_t x120 = UINT64_MAX;
volatile int32_t t13 = 11;
volatile int32_t t14 = -994512;
int64_t x141 = -3576852023041665197LL;
static uint8_t x144 = UINT8_MAX;
uint64_t t17 = 6338383259344724LLU;
volatile uint8_t x149 = UINT8_MAX;
int16_t x161 = -1;
int32_t t19 = 1;
static volatile int16_t x167 = INT16_MIN;
int64_t t20 = 3968130324LL;
static volatile int64_t x175 = INT64_MIN;
volatile int64_t x183 = INT64_MIN;
volatile int16_t x207 = -1;
static int64_t x212 = INT64_MIN;
uint64_t x246 = 304LLU;
volatile uint64_t x248 = UINT64_MAX;
static volatile uint64_t x250 = 1732LLU;
uint32_t x256 = 4344U;
uint64_t x257 = UINT64_MAX;
volatile uint64_t x269 = 19629894LLU;
volatile int32_t x273 = INT32_MIN;
int32_t t35 = -4347796;
uint32_t x303 = 1U;
uint8_t x307 = UINT8_MAX;
volatile uint64_t t38 = 954755LLU;
uint64_t x318 = 34711962293068698LLU;
static volatile uint32_t t40 = 702748460U;
int8_t x337 = INT8_MIN;
uint16_t x354 = UINT16_MAX;
int64_t x355 = -1LL;
uint64_t x356 = UINT64_MAX;
int32_t t44 = -3;
uint64_t x358 = 8042LLU;
int32_t x371 = INT32_MIN;
uint8_t x382 = 15U;
uint8_t x395 = UINT8_MAX;
int8_t x408 = INT8_MAX;
volatile int64_t t52 = 866581340LL;
volatile int8_t x409 = -18;
int32_t x417 = INT32_MIN;
uint64_t x426 = 294660374873213797LLU;
static volatile int64_t x437 = -77627813LL;
uint8_t x439 = 102U;
int64_t t57 = 2148277933439LL;
int16_t x453 = 7405;
static volatile uint16_t x465 = UINT16_MAX;
volatile int32_t t62 = -26;
int8_t x469 = INT8_MAX;
int64_t x470 = INT64_MIN;
static int32_t x477 = -42111963;
int16_t x480 = INT16_MAX;
int16_t x481 = 0;
static volatile int64_t t67 = -3845LL;
int16_t x498 = INT16_MIN;
int64_t x499 = INT64_MIN;
uint8_t x511 = 44U;
uint32_t x512 = 48456U;
static volatile int64_t t70 = INT64_MAX;
volatile int32_t t73 = -22;
volatile uint64_t t75 = UINT64_MAX;
static uint64_t x552 = 1365LLU;
static volatile int16_t x555 = -1;
static int32_t x556 = INT32_MAX;
int8_t x571 = -1;
int64_t x579 = INT64_MIN;
int64_t x581 = INT64_MIN;
static int8_t x591 = 1;
uint64_t t82 = UINT64_MAX;
uint32_t x596 = UINT32_MAX;
uint32_t x598 = 25U;
static uint32_t x599 = 14U;
uint32_t x606 = 30118U;
volatile int16_t x614 = INT16_MIN;
static uint32_t t88 = 0U;
int32_t x641 = -1;
uint64_t x654 = UINT64_MAX;
volatile int64_t x655 = INT64_MIN;
int64_t x658 = INT64_MAX;
int64_t t93 = 19468760468419487LL;
static int32_t x685 = 15;
static int64_t x706 = 47360462043111LL;
static int32_t x708 = 253957;
int32_t x723 = -1;
static uint64_t x731 = 253LLU;


void f0(void) {
	int16_t x1 = -1;
	static int16_t x2 = -1;
	static int16_t x3 = -168;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = -313618550;

	t0 = (x1-(x2%(x3<=x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = 3836;
	uint8_t x10 = UINT8_MAX;
	uint64_t x11 = 229LLU;
	int16_t x12 = INT16_MIN;
	int32_t t1 = 1;

	t1 = (x9-(x10%(x11<=x12)));

	if (t1 != 3836) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 60265307U;
	volatile uint32_t x18 = 29U;
	static int64_t x19 = -1LL;
	int16_t x20 = 39;
	volatile uint32_t t2 = 320941232U;

	t2 = (x17-(x18%(x19<=x20)));

	if (t2 != 60265307U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = -1;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;

	t3 = (x25-(x26%(x27<=x28)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x49 = 0U;
	int32_t x50 = 61894;
	int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t4 = -591264;

	t4 = (x49-(x50%(x51<=x52)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x57 = 0U;
	volatile int16_t x58 = INT16_MIN;
	static volatile uint64_t x59 = 26451518LLU;

	t5 = (x57-(x58%(x59<=x60)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x61 = -58;
	int16_t x62 = -1;
	int32_t t6 = -357662;

	t6 = (x61-(x62%(x63<=x64)));

	if (t6 != -58) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x74 = INT16_MAX;
	uint8_t x75 = 56U;

	t7 = (x73-(x74%(x75<=x76)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x81 = 2U;
	int16_t x82 = -1;
	uint32_t x83 = 621U;
	volatile int8_t x84 = -22;
	int32_t t8 = -90828321;

	t8 = (x81-(x82%(x83<=x84)));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = 1019141146850LLU;
	int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MIN;
	uint64_t t9 = 781351947497470272LLU;

	t9 = (x85-(x86%(x87<=x88)));

	if (t9 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x94 = UINT16_MAX;
	static int16_t x95 = -1;
	static int32_t t10 = -1618;

	t10 = (x93-(x94%(x95<=x96)));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x98 = 1757;
	uint16_t x99 = 388U;
	int64_t x100 = INT64_MAX;
	int64_t t11 = 5265853320998759LL;

	t11 = (x97-(x98%(x99<=x100)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x112 = UINT64_MAX;
	static volatile int64_t t12 = INT64_MIN;

	t12 = (x109-(x110%(x111<=x112)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x117 = 103037;
	int8_t x118 = INT8_MIN;

	t13 = (x117-(x118%(x119<=x120)));

	if (t13 != 103037) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x125 = -57;
	int8_t x126 = 7;
	uint32_t x127 = 3U;
	int32_t x128 = 450;

	t14 = (x125-(x126%(x127<=x128)));

	if (t14 != -57) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x133 = -1;
	static uint64_t x134 = 11731LLU;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x133-(x134%(x135<=x136)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x142 = INT8_MAX;
	volatile int8_t x143 = INT8_MAX;
	int64_t t16 = -8108293LL;

	t16 = (x141-(x142%(x143<=x144)));

	if (t16 != -3576852023041665197LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x146 = 17693439200339LLU;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;

	t17 = (x145-(x146%(x147<=x148)));

	if (t17 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x150 = INT32_MIN;
	uint8_t x151 = 0U;
	int8_t x152 = INT8_MAX;
	int32_t t18 = 14069227;

	t18 = (x149-(x150%(x151<=x152)));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x162 = INT16_MAX;
	uint64_t x163 = 955073696359983LLU;
	static int16_t x164 = INT16_MIN;

	t19 = (x161-(x162%(x163<=x164)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x165 = 3172773623961LL;
	int64_t x166 = -239462220908032LL;
	int16_t x168 = -1;

	t20 = (x165-(x166%(x167<=x168)));

	if (t20 != 3172773623961LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x173 = -7;
	uint32_t x174 = 10355603U;
	int64_t x176 = -1LL;
	volatile uint32_t t21 = 474U;

	t21 = (x173-(x174%(x175<=x176)));

	if (t21 != 4294967289U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x181 = 1U;
	static volatile uint32_t x182 = 93170796U;
	int32_t x184 = INT32_MAX;
	static volatile uint32_t t22 = 46560823U;

	t22 = (x181-(x182%(x183<=x184)));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x193 = UINT64_MAX;
	static volatile int8_t x194 = INT8_MIN;
	volatile uint8_t x195 = 13U;
	uint32_t x196 = 419471U;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x193-(x194%(x195<=x196)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x205 = UINT64_MAX;
	static int32_t x206 = INT32_MIN;
	int32_t x208 = 2117;
	uint64_t t24 = UINT64_MAX;

	t24 = (x205-(x206%(x207<=x208)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x209 = UINT8_MAX;
	uint32_t x210 = UINT32_MAX;
	volatile int64_t x211 = INT64_MIN;
	static volatile uint32_t t25 = 60U;

	t25 = (x209-(x210%(x211<=x212)));

	if (t25 != 255U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x233 = INT16_MAX;
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MAX;
	volatile uint64_t t26 = 1593339LLU;

	t26 = (x233-(x234%(x235<=x236)));

	if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	int64_t x239 = -1LL;
	uint16_t x240 = UINT16_MAX;
	int64_t t27 = INT64_MIN;

	t27 = (x237-(x238%(x239<=x240)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x245 = INT16_MAX;
	static volatile int8_t x247 = INT8_MIN;
	volatile uint64_t t28 = 8340166247304962351LLU;

	t28 = (x245-(x246%(x247<=x248)));

	if (t28 != 32767LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x249 = INT64_MIN;
	volatile int32_t x251 = INT32_MIN;
	volatile int16_t x252 = 1;
	static uint64_t t29 = 42510692855LLU;

	t29 = (x249-(x250%(x251<=x252)));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x253 = -24LL;
	int16_t x254 = 30;
	static uint16_t x255 = 158U;
	volatile int64_t t30 = 59453LL;

	t30 = (x253-(x254%(x255<=x256)));

	if (t30 != -24LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = -46;
	static uint16_t x260 = 167U;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x257-(x258%(x259<=x260)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x270 = -1821;
	int64_t x271 = -648150900239098556LL;
	int16_t x272 = INT16_MAX;
	static volatile uint64_t t32 = 27433199392901LLU;

	t32 = (x269-(x270%(x271<=x272)));

	if (t32 != 19629894LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x274 = INT8_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile int8_t x276 = 7;
	static int32_t t33 = INT32_MIN;

	t33 = (x273-(x274%(x275<=x276)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x277 = INT8_MIN;
	volatile int32_t x278 = 59876;
	int32_t x279 = -1574741;
	static uint32_t x280 = UINT32_MAX;
	int32_t t34 = 5828540;

	t34 = (x277-(x278%(x279<=x280)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x281 = -1;
	int8_t x282 = INT8_MAX;
	static uint32_t x283 = 19512U;
	uint16_t x284 = UINT16_MAX;

	t35 = (x281-(x282%(x283<=x284)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x289 = INT64_MIN;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = -1;
	uint16_t x292 = 0U;
	int64_t t36 = INT64_MIN;

	t36 = (x289-(x290%(x291<=x292)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x301 = INT64_MIN;
	static int8_t x302 = -1;
	int16_t x304 = 1;
	static volatile int64_t t37 = INT64_MIN;

	t37 = (x301-(x302%(x303<=x304)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x305 = INT16_MIN;
	static uint64_t x306 = UINT64_MAX;
	uint32_t x308 = 16340U;

	t38 = (x305-(x306%(x307<=x308)));

	if (t38 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x319 = 24839U;
	int16_t x320 = INT16_MIN;
	uint64_t t39 = 8041581328097308919LLU;

	t39 = (x317-(x318%(x319<=x320)));

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x329 = 1U;
	int8_t x330 = 26;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MAX;

	t40 = (x329-(x330%(x331<=x332)));

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x338 = UINT8_MAX;
	uint8_t x339 = 40U;
	static uint16_t x340 = 143U;
	volatile int32_t t41 = -5;

	t41 = (x337-(x338%(x339<=x340)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x341 = INT8_MIN;
	volatile int64_t x342 = -25383580989LL;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 1U;
	volatile int64_t t42 = -27025606LL;

	t42 = (x341-(x342%(x343<=x344)));

	if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x345 = -3;
	int32_t x346 = -1;
	int64_t x347 = -217226160829LL;
	volatile int32_t x348 = INT32_MIN;
	int32_t t43 = 2868905;

	t43 = (x345-(x346%(x347<=x348)));

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x353 = INT8_MIN;

	t44 = (x353-(x354%(x355<=x356)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x357 = 8176711LL;
	int32_t x359 = -630106;
	int32_t x360 = -1;
	volatile uint64_t t45 = 334285349710LLU;

	t45 = (x357-(x358%(x359<=x360)));

	if (t45 != 8176711LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = 90U;
	int32_t x372 = INT32_MAX;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x369-(x370%(x371<=x372)));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x373 = 2U;
	static int16_t x374 = -1024;
	int16_t x375 = -878;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t47 = -125179512;

	t47 = (x373-(x374%(x375<=x376)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x381 = 1;
	volatile uint64_t x383 = 13697057212027LLU;
	static int32_t x384 = -54;
	int32_t t48 = -20;

	t48 = (x381-(x382%(x383<=x384)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x393 = 1942426012LLU;
	volatile int32_t x394 = 40392;
	volatile uint32_t x396 = 845174U;
	static volatile uint64_t t49 = 8575224757444173LLU;

	t49 = (x393-(x394%(x395<=x396)));

	if (t49 != 1942426012LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MIN;
	static int16_t x399 = INT16_MIN;
	volatile int64_t x400 = 5014324637444LL;
	static volatile int64_t t50 = -257110543485703013LL;

	t50 = (x397-(x398%(x399<=x400)));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x401 = INT16_MIN;
	uint32_t x402 = 12577192U;
	volatile uint64_t x403 = 4395390985538LLU;
	static int64_t x404 = -1LL;
	uint32_t t51 = 1346U;

	t51 = (x401-(x402%(x403<=x404)));

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x405 = -1;
	int64_t x406 = -1LL;
	int32_t x407 = -1;

	t52 = (x405-(x406%(x407<=x408)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x410 = INT64_MIN;
	static int64_t x411 = INT64_MIN;
	volatile int8_t x412 = -1;
	int64_t t53 = -2LL;

	t53 = (x409-(x410%(x411<=x412)));

	if (t53 != -18LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x413 = 0LL;
	uint32_t x414 = 594213U;
	int8_t x415 = INT8_MIN;
	static uint64_t x416 = UINT64_MAX;
	volatile int64_t t54 = 56LL;

	t54 = (x413-(x414%(x415<=x416)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x418 = UINT8_MAX;
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t55 = INT32_MIN;

	t55 = (x417-(x418%(x419<=x420)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x425 = -1;
	int16_t x427 = INT16_MIN;
	volatile uint8_t x428 = 25U;
	uint64_t t56 = UINT64_MAX;

	t56 = (x425-(x426%(x427<=x428)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x438 = INT32_MIN;
	uint32_t x440 = UINT32_MAX;

	t57 = (x437-(x438%(x439<=x440)));

	if (t57 != -77627813LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x445 = 0U;
	volatile int64_t x446 = 137612LL;
	static int32_t x447 = 17491008;
	uint64_t x448 = UINT64_MAX;
	volatile int64_t t58 = 29LL;

	t58 = (x445-(x446%(x447<=x448)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x449 = -1;
	int32_t x450 = 788176344;
	int16_t x451 = -1;
	int32_t x452 = 1207;
	volatile int32_t t59 = -354;

	t59 = (x449-(x450%(x451<=x452)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x454 = -1;
	volatile uint32_t x455 = 1U;
	int64_t x456 = 142272131LL;
	static volatile int32_t t60 = 511;

	t60 = (x453-(x454%(x455<=x456)));

	if (t60 != 7405) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x461 = INT64_MIN;
	int32_t x462 = 452531925;
	int8_t x463 = 0;
	int32_t x464 = 3330407;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x461-(x462%(x463<=x464)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x466 = 0U;
	int64_t x467 = INT64_MIN;
	int64_t x468 = -4223235618913970LL;

	t62 = (x465-(x466%(x467<=x468)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x471 = UINT8_MAX;
	uint32_t x472 = 1344962166U;
	volatile int64_t t63 = 12816505562898LL;

	t63 = (x469-(x470%(x471<=x472)));

	if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x478 = INT32_MIN;
	int16_t x479 = INT16_MIN;
	static int32_t t64 = 51441;

	t64 = (x477-(x478%(x479<=x480)));

	if (t64 != -42111963) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x482 = INT16_MIN;
	volatile int16_t x483 = INT16_MIN;
	int16_t x484 = INT16_MIN;
	volatile int32_t t65 = -52;

	t65 = (x481-(x482%(x483<=x484)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	int16_t x491 = -1;
	int8_t x492 = -1;
	static volatile int32_t t66 = 2817;

	t66 = (x489-(x490%(x491<=x492)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x493 = -1596LL;
	int16_t x494 = INT16_MIN;
	uint64_t x495 = 384994902699973586LLU;
	int16_t x496 = -1;

	t67 = (x493-(x494%(x495<=x496)));

	if (t67 != -1596LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x497 = 10U;
	uint16_t x500 = 25U;
	volatile int32_t t68 = 22155542;

	t68 = (x497-(x498%(x499<=x500)));

	if (t68 != 10) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x505 = 1933;
	int16_t x506 = INT16_MIN;
	uint8_t x507 = 0U;
	volatile uint64_t x508 = UINT64_MAX;
	volatile int32_t t69 = -11100189;

	t69 = (x505-(x506%(x507<=x508)));

	if (t69 != 1933) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x509 = INT64_MAX;
	static int64_t x510 = -1929LL;

	t70 = (x509-(x510%(x511<=x512)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x521 = 224U;
	static int32_t x522 = 3119;
	volatile uint16_t x523 = 328U;
	volatile uint16_t x524 = UINT16_MAX;
	uint32_t t71 = 134640675U;

	t71 = (x521-(x522%(x523<=x524)));

	if (t71 != 224U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x529 = -136187LL;
	volatile uint32_t x530 = 16647U;
	int8_t x531 = -4;
	int32_t x532 = 1577;
	volatile int64_t t72 = 1419003447832499252LL;

	t72 = (x529-(x530%(x531<=x532)));

	if (t72 != -136187LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x533 = UINT16_MAX;
	volatile int32_t x534 = 113591793;
	int64_t x535 = INT64_MIN;
	int64_t x536 = 13LL;

	t73 = (x533-(x534%(x535<=x536)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x537 = INT16_MIN;
	uint64_t x538 = UINT64_MAX;
	static volatile int8_t x539 = -1;
	int64_t x540 = 8552370172LL;
	volatile uint64_t t74 = 19589899280235LLU;

	t74 = (x537-(x538%(x539<=x540)));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x545 = -1;
	volatile uint64_t x546 = UINT64_MAX;
	int32_t x547 = -3126;
	int64_t x548 = 2605LL;

	t75 = (x545-(x546%(x547<=x548)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x549 = 5292;
	static int16_t x550 = INT16_MIN;
	int32_t x551 = 823;
	volatile int32_t t76 = -31448159;

	t76 = (x549-(x550%(x551<=x552)));

	if (t76 != 5292) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x553 = UINT16_MAX;
	uint64_t x554 = UINT64_MAX;
	uint64_t t77 = 1306631561LLU;

	t77 = (x553-(x554%(x555<=x556)));

	if (t77 != 65535LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x569 = 3764490606507882592LL;
	volatile int64_t x570 = INT64_MIN;
	static int8_t x572 = -1;
	int64_t t78 = 3833416854704LL;

	t78 = (x569-(x570%(x571<=x572)));

	if (t78 != 3764490606507882592LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x573 = INT8_MAX;
	int16_t x574 = INT16_MIN;
	int32_t x575 = INT32_MIN;
	volatile int64_t x576 = 2114783451796LL;
	int32_t t79 = -50453656;

	t79 = (x573-(x574%(x575<=x576)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x577 = -1LL;
	static uint8_t x578 = UINT8_MAX;
	uint8_t x580 = 19U;
	volatile int64_t t80 = 1LL;

	t80 = (x577-(x578%(x579<=x580)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x582 = 151U;
	volatile int32_t x583 = INT32_MIN;
	int32_t x584 = INT32_MIN;
	static int64_t t81 = INT64_MIN;

	t81 = (x581-(x582%(x583<=x584)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x589 = -1;
	uint64_t x590 = 376186647514913849LLU;
	static uint16_t x592 = UINT16_MAX;

	t82 = (x589-(x590%(x591<=x592)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x593 = INT8_MAX;
	static uint64_t x594 = 39460896295669418LLU;
	int32_t x595 = -1;
	uint64_t t83 = 2453LLU;

	t83 = (x593-(x594%(x595<=x596)));

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x597 = 9792;
	static uint8_t x600 = 17U;
	volatile uint32_t t84 = 126232U;

	t84 = (x597-(x598%(x599<=x600)));

	if (t84 != 9792U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x605 = 6U;
	int16_t x607 = INT16_MIN;
	int8_t x608 = -28;
	uint32_t t85 = 287U;

	t85 = (x605-(x606%(x607<=x608)));

	if (t85 != 6U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x613 = INT16_MIN;
	int64_t x615 = INT64_MIN;
	uint8_t x616 = UINT8_MAX;
	volatile int32_t t86 = -420141286;

	t86 = (x613-(x614%(x615<=x616)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x625 = UINT32_MAX;
	uint16_t x626 = 1483U;
	int64_t x627 = INT64_MIN;
	volatile int64_t x628 = INT64_MIN;
	uint32_t t87 = UINT32_MAX;

	t87 = (x625-(x626%(x627<=x628)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x629 = INT16_MIN;
	volatile uint32_t x630 = 45349U;
	uint64_t x631 = 7240285251LLU;
	int16_t x632 = -1;

	t88 = (x629-(x630%(x631<=x632)));

	if (t88 != 4294934528U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x642 = INT8_MIN;
	static volatile int32_t x643 = INT32_MIN;
	volatile int32_t x644 = INT32_MIN;
	volatile int32_t t89 = -252311;

	t89 = (x641-(x642%(x643<=x644)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x645 = 43U;
	uint64_t x646 = 6066755199365900536LLU;
	int16_t x647 = INT16_MIN;
	static int16_t x648 = -1;
	volatile uint64_t t90 = 1361LLU;

	t90 = (x645-(x646%(x647<=x648)));

	if (t90 != 43LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x649 = INT32_MIN;
	int16_t x650 = -1;
	int64_t x651 = INT64_MIN;
	volatile int8_t x652 = INT8_MIN;
	static volatile int32_t t91 = INT32_MIN;

	t91 = (x649-(x650%(x651<=x652)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x653 = -1;
	int64_t x656 = INT64_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x653-(x654%(x655<=x656)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x657 = 335LL;
	uint8_t x659 = UINT8_MAX;
	int64_t x660 = 3997634657714259256LL;

	t93 = (x657-(x658%(x659<=x660)));

	if (t93 != 335LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x677 = UINT16_MAX;
	volatile int16_t x678 = -1;
	int64_t x679 = -21906LL;
	int8_t x680 = INT8_MAX;
	volatile int32_t t94 = -675498;

	t94 = (x677-(x678%(x679<=x680)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x686 = UINT64_MAX;
	static int16_t x687 = -1;
	int8_t x688 = -1;
	static uint64_t t95 = 3LLU;

	t95 = (x685-(x686%(x687<=x688)));

	if (t95 != 15LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x689 = 21;
	int16_t x690 = -1;
	static int8_t x691 = -1;
	static volatile int64_t x692 = 6462633LL;
	volatile int32_t t96 = 2794;

	t96 = (x689-(x690%(x691<=x692)));

	if (t96 != 21) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x705 = -1LL;
	int16_t x707 = 1;
	static volatile int64_t t97 = 11333242672741LL;

	t97 = (x705-(x706%(x707<=x708)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x721 = UINT64_MAX;
	uint8_t x722 = UINT8_MAX;
	uint8_t x724 = 23U;
	static uint64_t t98 = UINT64_MAX;

	t98 = (x721-(x722%(x723<=x724)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x729 = -246979LL;
	int32_t x730 = 19;
	int16_t x732 = INT16_MIN;
	int64_t t99 = -17LL;

	t99 = (x729-(x730%(x731<=x732)));

	if (t99 != -246979LL) { NG(); } else { ; }
	
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

