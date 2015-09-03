#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x37 = INT8_MAX;
int64_t x63 = INT64_MIN;
int64_t t7 = 958234527329LL;
int8_t x68 = INT8_MIN;
int32_t t8 = 12;
volatile int16_t x70 = -1;
int32_t x71 = INT32_MIN;
int32_t x106 = INT32_MIN;
int32_t x107 = INT32_MAX;
static int8_t x115 = -1;
volatile uint32_t x116 = 731806754U;
uint32_t x122 = UINT32_MAX;
int16_t x124 = 14;
uint64_t t13 = 779310862LLU;
static int16_t x140 = -1;
static uint16_t x148 = 1899U;
volatile int32_t x150 = -2038;
int16_t x156 = 3;
volatile uint64_t t18 = 11361385021943LLU;
int16_t x162 = -90;
volatile uint64_t t22 = 99289588407499279LLU;
int8_t x179 = INT8_MIN;
int64_t x183 = INT64_MAX;
int64_t x187 = -1LL;
static volatile uint64_t t25 = 4571LLU;
volatile uint64_t x193 = 197391061162270462LLU;
static volatile uint32_t x194 = UINT32_MAX;
uint32_t x198 = 17U;
volatile int8_t x217 = 10;
volatile int64_t t29 = 1087138465670046LL;
int8_t x237 = INT8_MIN;
volatile uint8_t x247 = UINT8_MAX;
static uint64_t x249 = UINT64_MAX;
int8_t x256 = INT8_MIN;
int8_t x272 = INT8_MAX;
uint8_t x275 = UINT8_MAX;
uint32_t x279 = UINT32_MAX;
int8_t x281 = INT8_MIN;
static int16_t x284 = 4;
static volatile int64_t x286 = INT64_MIN;
static int64_t x296 = -1LL;
int8_t x298 = INT8_MIN;
uint64_t x300 = UINT64_MAX;
uint64_t t42 = 15LLU;
int64_t x318 = INT64_MIN;
volatile int64_t x321 = INT64_MIN;
static uint32_t x324 = 31U;
uint8_t x337 = 0U;
volatile uint32_t t46 = 16526526U;
volatile uint32_t t47 = 11488031U;
int32_t t50 = -34;
volatile int64_t x377 = INT64_MIN;
volatile uint8_t x378 = 6U;
static int64_t x380 = -1395LL;
int32_t t52 = 372;
volatile uint64_t x392 = 23817278LLU;
volatile uint64_t t54 = 3LLU;
int64_t x413 = 188016LL;
volatile uint64_t t57 = 1948LLU;
int8_t x441 = INT8_MIN;
uint32_t x443 = UINT32_MAX;
uint8_t x457 = UINT8_MAX;
int32_t x477 = 11271;
static int16_t x478 = -1;
int32_t x482 = INT32_MIN;
volatile int32_t t66 = -6;
int8_t x495 = -8;
int64_t x504 = -1LL;
uint64_t x508 = 420LLU;
volatile uint16_t x511 = UINT16_MAX;
int64_t t70 = -1LL;
static int8_t x527 = -3;
int8_t x532 = 21;
static int8_t x538 = INT8_MIN;
uint16_t x551 = 1160U;
static uint64_t x560 = 107LLU;
uint32_t x570 = 1932U;
uint64_t x571 = 2767980LLU;
static int32_t x577 = -665;
static volatile int8_t x581 = INT8_MAX;
int16_t x588 = 1;
static uint64_t x593 = UINT64_MAX;
uint64_t x594 = 236186189119LLU;
int32_t x596 = 276745;
volatile uint64_t t83 = 791672722917762LLU;
uint32_t x616 = 58205U;
static int64_t t86 = 2036227LL;
int32_t x628 = -1;
int32_t x634 = -1;
volatile uint8_t x645 = UINT8_MAX;
uint32_t t90 = 67349U;
int8_t x657 = INT8_MIN;
int16_t x674 = -202;
volatile uint32_t t92 = 172626318U;
int16_t x692 = INT16_MIN;
uint64_t t93 = 86LLU;
int64_t x701 = INT64_MIN;
volatile int32_t x702 = INT32_MIN;
uint32_t x724 = 18U;
uint32_t t96 = 6237167U;
int8_t x725 = 0;
uint8_t x729 = UINT8_MAX;
static int64_t x730 = INT64_MAX;
volatile int8_t x731 = INT8_MIN;
volatile uint64_t x732 = 75836459LLU;
uint32_t x733 = 31U;
volatile uint8_t x735 = 78U;


void f0(void) {
	int64_t x9 = INT64_MIN;
	uint64_t x10 = 34LLU;
	int32_t x11 = -1;
	int8_t x12 = 42;
	volatile uint64_t t0 = 1LLU;

	t0 = (x9%((x10|x11)/x12));

	if (t0 != 8LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = -1;
	uint32_t x18 = UINT32_MAX;
	int16_t x19 = INT16_MAX;
	int32_t x20 = -1;
	volatile uint32_t t1 = 18688911U;

	t1 = (x17%((x18|x19)/x20));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = INT32_MAX;
	uint16_t x30 = 1592U;
	int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t2 = 8;

	t2 = (x29%((x30|x31)/x32));

	if (t2 != 64) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	volatile uint64_t t3 = 6821LLU;

	t3 = (x37%((x38|x39)/x40));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x45 = UINT32_MAX;
	static int32_t x46 = -1;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = -1;
	uint32_t t4 = 131U;

	t4 = (x45%((x46|x47)/x48));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x49 = 187898565LLU;
	volatile int64_t x50 = INT64_MAX;
	volatile uint32_t x51 = 47371479U;
	uint16_t x52 = 11214U;
	volatile uint64_t t5 = 1LLU;

	t5 = (x49%((x50|x51)/x52));

	if (t5 != 187898565LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x58 = -1;
	uint32_t x59 = 485319U;
	int64_t x60 = -1LL;
	static int64_t t6 = 19LL;

	t6 = (x57%((x58|x59)/x60));

	if (t6 != 65535LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = -9935;
	uint32_t x62 = 1U;
	int16_t x64 = -1;

	t7 = (x61%((x62|x63)/x64));

	if (t7 != -9935LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x65 = INT8_MAX;
	volatile int16_t x66 = INT16_MIN;
	static uint16_t x67 = 584U;

	t8 = (x65%((x66|x67)/x68));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x69 = -1;
	int64_t x72 = -1LL;
	volatile int64_t t9 = -6050LL;

	t9 = (x69%((x70|x71)/x72));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x101 = INT32_MAX;
	uint32_t x102 = 28U;
	int64_t x103 = INT64_MIN;
	uint32_t x104 = 84083U;
	static int64_t t10 = 253769947053483LL;

	t10 = (x101%((x102|x103)/x104));

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x105 = 249846;
	volatile uint32_t x108 = UINT32_MAX;
	static volatile uint32_t t11 = 16486U;

	t11 = (x105%((x106|x107)/x108));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x113 = 2649U;
	uint8_t x114 = 12U;
	static volatile uint32_t t12 = 17956U;

	t12 = (x113%((x114|x115)/x116));

	if (t12 != 4U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile uint64_t x123 = UINT64_MAX;

	t13 = (x121%((x122|x123)/x124));

	if (t13 != 1317624574546055755LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x133 = -1;
	int16_t x134 = 414;
	volatile int8_t x135 = INT8_MIN;
	static int16_t x136 = -52;
	int32_t t14 = -15312877;

	t14 = (x133%((x134|x135)/x136));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x138 = INT8_MIN;
	volatile int16_t x139 = INT16_MIN;
	uint32_t t15 = 165070497U;

	t15 = (x137%((x138|x139)/x140));

	if (t15 != 127U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x145 = -1608437329LL;
	int32_t x146 = 797936;
	int16_t x147 = INT16_MAX;
	static int64_t t16 = -226177461LL;

	t16 = (x145%((x146|x147)/x148));

	if (t16 != -66LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x149 = 4123221036LLU;
	volatile int32_t x151 = 9685;
	uint64_t x152 = 4268448230LLU;
	volatile uint64_t t17 = 41622LLU;

	t17 = (x149%((x150|x151)/x152));

	if (t17 != 4123221036LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x153 = -1;
	static int8_t x154 = -1;
	uint64_t x155 = 20587066LLU;

	t18 = (x153%((x154|x155)/x156));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x157 = UINT8_MAX;
	static uint16_t x158 = 12U;
	int32_t x159 = INT32_MIN;
	uint8_t x160 = 96U;
	int32_t t19 = 1;

	t19 = (x157%((x158|x159)/x160));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x161 = 405871600965LL;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 14U;
	static int64_t t20 = -30166088431395LL;

	t20 = (x161%((x162|x163)/x164));

	if (t20 != 3LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x169 = 11373750;
	static volatile int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int32_t x172 = -1;
	int64_t t21 = -56469889270108LL;

	t21 = (x169%((x170|x171)/x172));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x173 = 72U;
	uint64_t x174 = 6767679704914LLU;
	uint32_t x175 = 113663585U;
	uint16_t x176 = 74U;

	t22 = (x173%((x174|x175)/x176));

	if (t22 != 72LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x177 = 12572545647851LLU;
	int16_t x178 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	volatile uint64_t t23 = 1587296508190455LLU;

	t23 = (x177%((x178|x179)/x180));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x181 = INT32_MIN;
	volatile uint64_t x182 = 63LLU;
	uint32_t x184 = 117131U;
	uint64_t t24 = 122481110901LLU;

	t24 = (x181%((x182|x183)/x184));

	if (t24 != 78741925920014LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x185 = 193519617LLU;
	uint32_t x186 = 66212U;
	volatile int32_t x188 = -1;

	t25 = (x185%((x186|x187)/x188));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x195 = 638923305U;
	int64_t x196 = -16702LL;
	static uint64_t t26 = 9647035706LLU;

	t26 = (x193%((x194|x195)/x196));

	if (t26 != 197391061162270462LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x197 = 0U;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = INT8_MIN;
	uint32_t t27 = 6U;

	t27 = (x197%((x198|x199)/x200));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x205 = -266298753;
	volatile int32_t x206 = INT32_MIN;
	volatile uint32_t x207 = 381690U;
	uint16_t x208 = UINT16_MAX;
	uint32_t t28 = 97378308U;

	t28 = (x205%((x206|x207)/x208));

	if (t28 != 22915U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x218 = 62058U;
	int8_t x219 = INT8_MIN;
	int64_t x220 = -3264923LL;

	t29 = (x217%((x218|x219)/x220));

	if (t29 != 10LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x233 = -1;
	static int64_t x234 = 76224324695068915LL;
	volatile uint8_t x235 = 94U;
	uint32_t x236 = 29291261U;
	static volatile int64_t t30 = 27652442728LL;

	t30 = (x233%((x234|x235)/x236));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x238 = 496516285U;
	volatile uint64_t x239 = UINT64_MAX;
	volatile int16_t x240 = -9;
	volatile uint64_t t31 = 30600541832LLU;

	t31 = (x237%((x238|x239)/x240));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x241 = UINT8_MAX;
	static uint16_t x242 = UINT16_MAX;
	int8_t x243 = 0;
	static uint16_t x244 = 1U;
	volatile int32_t t32 = -11619;

	t32 = (x241%((x242|x243)/x244));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x245 = -1;
	int64_t x246 = INT64_MIN;
	int32_t x248 = INT32_MAX;
	int64_t t33 = 706151811119613138LL;

	t33 = (x245%((x246|x247)/x248));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x250 = -1;
	static int32_t x251 = -34629922;
	uint32_t x252 = UINT32_MAX;
	static volatile uint64_t t34 = 92LLU;

	t34 = (x249%((x250|x251)/x252));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x253 = 11910183093651939LLU;
	uint32_t x254 = 2248U;
	static int64_t x255 = INT64_MAX;
	volatile uint64_t t35 = 3685LLU;

	t35 = (x253%((x254|x255)/x256));

	if (t35 != 11910183093651939LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x269 = 86;
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	static int32_t t36 = 1787;

	t36 = (x269%((x270|x271)/x272));

	if (t36 != 86) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MIN;
	uint8_t x276 = 14U;
	volatile int64_t t37 = 55009809233142LL;

	t37 = (x273%((x274|x275)/x276));

	if (t37 != 259LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x277 = -9;
	int16_t x278 = INT16_MIN;
	int64_t x280 = -1LL;
	int64_t t38 = -4LL;

	t38 = (x277%((x278|x279)/x280));

	if (t38 != -9LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	volatile int32_t t39 = -1781;

	t39 = (x281%((x282|x283)/x284));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x285 = -1;
	static int64_t x287 = 5271513082LL;
	int8_t x288 = INT8_MIN;
	static int64_t t40 = -12LL;

	t40 = (x285%((x286|x287)/x288));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x293 = INT8_MIN;
	static int16_t x294 = 61;
	uint32_t x295 = UINT32_MAX;
	int64_t t41 = -377274556LL;

	t41 = (x293%((x294|x295)/x296));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x297 = -1LL;
	int64_t x299 = INT64_MAX;

	t42 = (x297%((x298|x299)/x300));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x309 = 3U;
	int8_t x310 = 1;
	int32_t x311 = 1820246;
	int8_t x312 = -1;
	int32_t t43 = -2399140;

	t43 = (x309%((x310|x311)/x312));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x317 = INT16_MIN;
	static int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile int64_t t44 = 66116950090LL;

	t44 = (x317%((x318|x319)/x320));

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x322 = -1;
	uint8_t x323 = 71U;
	volatile int64_t t45 = 81821787217085846LL;

	t45 = (x321%((x322|x323)/x324));

	if (t45 != -8LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x338 = 1U;
	int16_t x339 = INT16_MIN;
	static uint32_t x340 = 17U;

	t46 = (x337%((x338|x339)/x340));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x349 = -1;
	volatile uint32_t x350 = 586417301U;
	static volatile uint8_t x351 = 1U;
	static uint16_t x352 = UINT16_MAX;

	t47 = (x349%((x350|x351)/x352));

	if (t47 != 7827U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = 40U;
	volatile int64_t x363 = INT64_MIN;
	int32_t x364 = -32843;
	volatile int64_t t48 = -3055599960378078LL;

	t48 = (x361%((x362|x363)/x364));

	if (t48 != -3999LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	static volatile uint64_t x367 = 3495218035LLU;
	uint32_t x368 = 18242955U;
	volatile uint64_t t49 = 2597135245796055500LLU;

	t49 = (x365%((x366|x367)/x368));

	if (t49 != 25LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x373 = INT16_MAX;
	static uint16_t x374 = 2U;
	int8_t x375 = INT8_MAX;
	uint8_t x376 = 14U;

	t50 = (x373%((x374|x375)/x376));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x379 = 12931;
	int64_t t51 = -592763375745277984LL;

	t51 = (x377%((x378|x379)/x380));

	if (t51 != -8LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x381 = 483;
	volatile int8_t x382 = 1;
	int8_t x383 = 0;
	int16_t x384 = -1;

	t52 = (x381%((x382|x383)/x384));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x389 = INT8_MIN;
	int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MIN;
	volatile uint64_t t53 = 79LLU;

	t53 = (x389%((x390|x391)/x392));

	if (t53 != 15170222LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = UINT16_MAX;
	uint64_t x395 = 6151798633936096LLU;
	static int32_t x396 = INT32_MAX;

	t54 = (x393%((x394|x395)/x396));

	if (t54 != 90228LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MIN;
	static int32_t x399 = INT32_MAX;
	volatile uint32_t x400 = 596U;
	int64_t t55 = -3212LL;

	t55 = (x397%((x398|x399)/x400));

	if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x414 = 45U;
	uint64_t x415 = 1020574761723332LLU;
	uint8_t x416 = 45U;
	uint64_t t56 = 1129255800991LLU;

	t56 = (x413%((x414|x415)/x416));

	if (t56 != 188016LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MAX;
	volatile uint64_t x428 = UINT64_MAX;

	t57 = (x425%((x426|x427)/x428));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x429 = 995924LL;
	static int32_t x430 = -118;
	uint64_t x431 = UINT64_MAX;
	int8_t x432 = -1;
	uint64_t t58 = 119505LLU;

	t58 = (x429%((x430|x431)/x432));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x442 = INT16_MIN;
	int8_t x444 = INT8_MIN;
	static uint32_t t59 = 2050179U;

	t59 = (x441%((x442|x443)/x444));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x445 = INT16_MIN;
	int64_t x446 = INT64_MAX;
	int16_t x447 = 12640;
	static int32_t x448 = INT32_MAX;
	static int64_t t60 = 55474LL;

	t60 = (x445%((x446|x447)/x448));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x449 = 33;
	static uint32_t x450 = 52180U;
	int16_t x451 = 1;
	uint16_t x452 = 17U;
	uint32_t t61 = 0U;

	t61 = (x449%((x450|x451)/x452));

	if (t61 != 33U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x453 = INT64_MIN;
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = -1;
	uint32_t x456 = UINT32_MAX;
	volatile int64_t t62 = 982LL;

	t62 = (x453%((x454|x455)/x456));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x458 = UINT8_MAX;
	int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MAX;
	volatile int32_t t63 = -3042;

	t63 = (x457%((x458|x459)/x460));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x469 = INT64_MAX;
	int16_t x470 = INT16_MIN;
	int32_t x471 = -1;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t64 = 86735700LLU;

	t64 = (x469%((x470|x471)/x472));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x479 = 258381492269464LLU;
	int32_t x480 = 1;
	volatile uint64_t t65 = 20505LLU;

	t65 = (x477%((x478|x479)/x480));

	if (t65 != 11271LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x481 = INT8_MIN;
	static volatile int32_t x483 = 89751;
	uint16_t x484 = 560U;

	t66 = (x481%((x482|x483)/x484));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x493 = INT64_MAX;
	static int16_t x494 = -1;
	volatile uint32_t x496 = 9366U;
	volatile int64_t t67 = -89535LL;

	t67 = (x493%((x494|x495)/x496));

	if (t67 != 228487LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x501 = -19LL;
	int64_t x502 = INT64_MIN;
	volatile int32_t x503 = -3393704;
	volatile int64_t t68 = -617LL;

	t68 = (x501%((x502|x503)/x504));

	if (t68 != -19LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x505 = 7U;
	int64_t x506 = -1LL;
	volatile uint8_t x507 = 0U;
	volatile uint64_t t69 = 4437100051647LLU;

	t69 = (x505%((x506|x507)/x508));

	if (t69 != 7LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x509 = INT64_MIN;
	uint8_t x510 = 3U;
	int8_t x512 = INT8_MIN;

	t70 = (x509%((x510|x511)/x512));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x521 = INT64_MIN;
	int64_t x522 = 99548253774893649LL;
	int32_t x523 = INT32_MIN;
	int8_t x524 = INT8_MAX;
	static int64_t t71 = 1LL;

	t71 = (x521%((x522|x523)/x524));

	if (t71 != -204608LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x525 = INT16_MAX;
	uint16_t x526 = 5U;
	int8_t x528 = -1;
	volatile int32_t t72 = -72;

	t72 = (x525%((x526|x527)/x528));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x529 = INT64_MAX;
	int32_t x530 = INT32_MIN;
	uint64_t x531 = 10068LLU;
	volatile uint64_t t73 = 1836116LLU;

	t73 = (x529%((x530|x531)/x532));

	if (t73 != 439208193253786267LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x537 = 0U;
	int8_t x539 = INT8_MIN;
	uint32_t x540 = 3173619U;
	static volatile uint32_t t74 = 33633187U;

	t74 = (x537%((x538|x539)/x540));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x549 = UINT64_MAX;
	int16_t x550 = 5;
	static int8_t x552 = INT8_MAX;
	volatile uint64_t t75 = 3709460LLU;

	t75 = (x549%((x550|x551)/x552));

	if (t75 != 6LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x553 = 1741U;
	static int64_t x554 = -1LL;
	volatile int16_t x555 = INT16_MIN;
	int64_t x556 = -1LL;
	int64_t t76 = -1203015660335763503LL;

	t76 = (x553%((x554|x555)/x556));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x557 = UINT32_MAX;
	int8_t x558 = 1;
	int8_t x559 = -1;
	volatile uint64_t t77 = 510571103509LLU;

	t77 = (x557%((x558|x559)/x560));

	if (t77 != 4294967295LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x565 = INT64_MIN;
	uint8_t x566 = UINT8_MAX;
	volatile int64_t x567 = INT64_MIN;
	uint64_t x568 = 64333LLU;
	uint64_t t78 = 3132199314619LLU;

	t78 = (x565%((x566|x567)/x568));

	if (t78 != 143369220102488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x569 = -1;
	static uint8_t x572 = UINT8_MAX;
	static volatile uint64_t t79 = 7LLU;

	t79 = (x569%((x570|x571)/x572));

	if (t79 != 5139LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x578 = 54U;
	int32_t x579 = -1;
	uint64_t x580 = 4019336936911431999LLU;
	uint64_t t80 = 7704LLU;

	t80 = (x577%((x578|x579)/x580));

	if (t80 != 3LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x582 = -1LL;
	int32_t x583 = INT32_MIN;
	int32_t x584 = -1;
	static volatile int64_t t81 = 254213LL;

	t81 = (x581%((x582|x583)/x584));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x585 = INT8_MAX;
	static uint8_t x586 = 2U;
	int32_t x587 = -259;
	static volatile int32_t t82 = 14;

	t82 = (x585%((x586|x587)/x588));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x595 = -1;

	t83 = (x593%((x594|x595)/x596));

	if (t83 != 40685LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x605 = 39U;
	int16_t x606 = INT16_MIN;
	static int8_t x607 = -2;
	volatile int64_t x608 = -1LL;
	int64_t t84 = 3369483914661LL;

	t84 = (x605%((x606|x607)/x608));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x609 = -488175;
	int32_t x610 = INT32_MIN;
	static volatile int8_t x611 = INT8_MIN;
	volatile uint8_t x612 = 10U;
	int32_t t85 = 464;

	t85 = (x609%((x610|x611)/x612));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x613 = -1LL;
	uint32_t x614 = 347965724U;
	volatile int64_t x615 = INT64_MIN;

	t86 = (x613%((x614|x615)/x616));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x625 = -1;
	uint64_t x626 = UINT64_MAX;
	volatile int8_t x627 = INT8_MIN;
	uint64_t t87 = 15089340LLU;

	t87 = (x625%((x626|x627)/x628));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x633 = -1;
	uint64_t x635 = 2LLU;
	volatile uint8_t x636 = 15U;
	volatile uint64_t t88 = 31925LLU;

	t88 = (x633%((x634|x635)/x636));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x641 = INT16_MIN;
	int8_t x642 = 0;
	int32_t x643 = INT32_MAX;
	int32_t x644 = INT32_MAX;
	int32_t t89 = -1;

	t89 = (x641%((x642|x643)/x644));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x646 = UINT32_MAX;
	static uint16_t x647 = UINT16_MAX;
	int16_t x648 = -1;

	t90 = (x645%((x646|x647)/x648));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x658 = 282U;
	int8_t x659 = INT8_MAX;
	int8_t x660 = -1;
	static volatile int32_t t91 = -5647420;

	t91 = (x657%((x658|x659)/x660));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x673 = 6U;
	int32_t x675 = -4;
	volatile int16_t x676 = -1;

	t92 = (x673%((x674|x675)/x676));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x689 = -1;
	volatile uint64_t x690 = UINT64_MAX;
	int32_t x691 = 3479;

	t93 = (x689%((x690|x691)/x692));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x703 = UINT8_MAX;
	int8_t x704 = -1;
	int64_t t94 = -4153208632371LL;

	t94 = (x701%((x702|x703)/x704));

	if (t94 != -130050LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x705 = INT32_MAX;
	volatile int16_t x706 = -3185;
	static int64_t x707 = -1LL;
	static int64_t x708 = -1LL;
	int64_t t95 = 21145006LL;

	t95 = (x705%((x706|x707)/x708));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x721 = -1;
	static uint32_t x722 = UINT32_MAX;
	int8_t x723 = 3;

	t96 = (x721%((x722|x723)/x724));

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x726 = 11U;
	int16_t x727 = INT16_MAX;
	volatile int8_t x728 = INT8_MIN;
	static volatile int32_t t97 = -5611530;

	t97 = (x725%((x726|x727)/x728));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t t98 = 15325433274LLU;

	t98 = (x729%((x730|x731)/x732));

	if (t98 != 255LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x734 = 0LL;
	uint8_t x736 = 4U;
	int64_t t99 = -124842177060LL;

	t99 = (x733%((x734|x735)/x736));

	if (t99 != 12LL) { NG(); } else { ; }
	
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

