#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = 852527LL;
uint8_t x5 = 1U;
int64_t t1 = 324968282051488597LL;
uint8_t x10 = UINT8_MAX;
int8_t x18 = INT8_MIN;
int64_t x23 = -5640LL;
volatile uint32_t x24 = UINT32_MAX;
volatile int32_t x26 = INT32_MAX;
int16_t x28 = INT16_MIN;
int16_t x37 = INT16_MAX;
static volatile uint64_t x41 = 34121986371868LLU;
static int16_t x55 = -11452;
uint8_t x59 = 2U;
static volatile uint32_t t14 = 64184U;
int64_t x70 = INT64_MAX;
int32_t x71 = -1;
static int64_t t16 = -23620047287LL;
volatile int8_t x84 = INT8_MIN;
int16_t x87 = -1;
int32_t x89 = INT32_MAX;
int16_t x92 = 966;
int32_t t20 = -14;
static int16_t x103 = -1;
static uint32_t x108 = 227456U;
volatile uint64_t t24 = 67319551LLU;
int8_t x110 = -6;
uint16_t x111 = 2U;
int16_t x113 = -4165;
int32_t x114 = 448726561;
int32_t t26 = -362266536;
int64_t x125 = INT64_MIN;
int64_t t29 = 9190176776270817LL;
volatile uint64_t t30 = 14124537429812LLU;
uint16_t x139 = 63U;
static uint64_t t33 = 12641541686LLU;
static int64_t t35 = -383193155LL;
static int32_t x162 = -1;
static int64_t x163 = -1LL;
int32_t x169 = INT32_MIN;
uint64_t t38 = 590872377804LLU;
int16_t x173 = -4;
int64_t x176 = -394081345791LL;
static volatile int64_t t39 = 207739795917853LL;
int64_t x178 = INT64_MAX;
int64_t x180 = INT64_MAX;
static volatile int64_t t40 = 12LL;
static uint32_t x187 = 3829U;
static volatile uint8_t x189 = UINT8_MAX;
uint16_t x195 = UINT16_MAX;
static int16_t x196 = -1;
int32_t t44 = 18124;
static int32_t t46 = -3609;
volatile int64_t x210 = INT64_MAX;
volatile uint64_t x211 = 21017411LLU;
int16_t x212 = -1;
volatile int64_t t50 = 238LL;
uint8_t x234 = 18U;
volatile int16_t x239 = INT16_MAX;
static volatile uint32_t t52 = 110U;
uint64_t x245 = 1023763LLU;
static uint8_t x248 = 6U;
uint64_t t53 = 13584881685283LLU;
volatile uint32_t t54 = 6U;
static int32_t x263 = INT32_MAX;
int8_t x274 = -3;
uint8_t x280 = UINT8_MAX;
uint64_t x285 = 3049579528016710LLU;
int32_t x299 = INT32_MIN;
int32_t x314 = -1;
int16_t x317 = 9;
static int16_t x321 = INT16_MAX;
int8_t x328 = 3;
int16_t x331 = INT16_MIN;
uint64_t t70 = 1409559147LLU;
static volatile int64_t t71 = -19LL;
uint32_t t73 = 137503U;
uint16_t x354 = 185U;
volatile int16_t x356 = INT16_MAX;
uint64_t x360 = 27599646LLU;
static int64_t x370 = INT64_MIN;
int16_t x377 = INT16_MIN;
static int32_t t78 = -12710;
uint8_t x382 = 1U;
static int16_t x387 = -24;
int16_t x390 = INT16_MAX;
uint64_t x392 = 19100499LLU;
volatile int64_t x393 = INT64_MAX;
int32_t x394 = INT32_MIN;
volatile int64_t t82 = -63654LL;
int64_t x397 = -1LL;
volatile int64_t x398 = INT64_MAX;
volatile uint16_t x405 = 26U;
int8_t x421 = INT8_MIN;
int8_t x422 = INT8_MAX;
volatile uint16_t x423 = UINT16_MAX;
uint32_t x426 = 1748557299U;
int64_t x428 = INT64_MIN;
uint64_t t89 = 78LLU;
int16_t x433 = INT16_MAX;
int8_t x435 = 1;
uint8_t x437 = 7U;
int64_t x438 = INT64_MAX;
uint8_t x441 = UINT8_MAX;
int64_t t93 = -2372506277197627LL;
int16_t x449 = INT16_MAX;
uint8_t x451 = UINT8_MAX;
volatile uint64_t t94 = 641276887619290LLU;
static int64_t x456 = INT64_MAX;
int64_t t95 = -391442434LL;
static volatile int32_t x461 = -1;
int32_t x477 = INT32_MAX;
int64_t x480 = INT64_MIN;
static volatile int64_t t99 = 298188312451165LL;


void f0(void) {
	uint8_t x1 = 0U;
	int64_t x2 = -1LL;
	uint16_t x3 = UINT16_MAX;
	uint8_t x4 = 4U;

	t0 = (x1/(x2%(x3+x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 74579068;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MAX;

	t1 = (x5/(x6%(x7+x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 13U;
	static uint64_t x11 = 14227750LLU;
	int64_t x12 = 8818253LL;
	uint64_t t2 = 207341710269527060LLU;

	t2 = (x9/(x10%(x11+x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	int8_t x19 = INT8_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t3 = 432629;

	t3 = (x17/(x18%(x19+x20)));

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = UINT16_MAX;
	volatile int8_t x22 = INT8_MAX;
	int64_t t4 = 22877113249LL;

	t4 = (x21/(x22%(x23+x24)));

	if (t4 != 516LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -969;
	uint8_t x27 = UINT8_MAX;
	static int32_t t5 = -8285;

	t5 = (x25/(x26%(x27+x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static volatile uint16_t x30 = 778U;
	int32_t x31 = -1;
	int64_t x32 = -1014LL;
	int64_t t6 = 1LL;

	t6 = (x29/(x30%(x31+x32)));

	if (t6 != -42LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	int32_t x34 = -1;
	volatile int64_t x35 = -75LL;
	int32_t x36 = 105673151;
	volatile int64_t t7 = -23366919LL;

	t7 = (x33/(x34%(x35+x36)));

	if (t7 != -32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = 2550303713689LL;
	uint16_t x39 = 14U;
	int16_t x40 = INT16_MIN;
	int64_t t8 = 1150LL;

	t8 = (x37/(x38%(x39+x40)));

	if (t8 != 4LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x42 = UINT64_MAX;
	uint8_t x43 = UINT8_MAX;
	volatile int32_t x44 = 335921;
	static uint64_t t9 = 127LLU;

	t9 = (x41/(x42%(x43+x44)));

	if (t9 != 460417297LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = UINT32_MAX;
	uint64_t x46 = 51494703432570270LLU;
	uint32_t x47 = UINT32_MAX;
	static int16_t x48 = INT16_MIN;
	uint64_t t10 = 897367549370LLU;

	t10 = (x45/(x46%(x47+x48)));

	if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -11;
	static uint32_t x50 = 91281449U;
	int64_t x51 = 0LL;
	static uint16_t x52 = 4U;
	volatile int64_t t11 = -6133LL;

	t11 = (x49/(x50%(x51+x52)));

	if (t11 != -11LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	volatile uint8_t x54 = UINT8_MAX;
	uint64_t x56 = 34433453758LLU;
	volatile uint64_t t12 = 1885908530049729151LLU;

	t12 = (x53/(x54%(x55+x56)));

	if (t12 != 16843009LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = -6181;
	volatile uint32_t x58 = 35853U;
	static int32_t x60 = 139584407;
	uint32_t t13 = 10973717U;

	t13 = (x57/(x58%(x59+x60)));

	if (t13 != 119793U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 39U;
	int8_t x66 = -1;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MIN;

	t14 = (x65/(x66%(x67+x68)));

	if (t14 != 39U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	int32_t x72 = -271774;
	volatile int64_t t15 = -254760029634LL;

	t15 = (x69/(x70%(x71+x72)));

	if (t15 != -17042LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MIN;
	uint32_t x74 = 39424U;
	int64_t x75 = -1LL;
	static uint8_t x76 = UINT8_MAX;

	t16 = (x73/(x74%(x75+x76)));

	if (t16 != -606LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MAX;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = 0;
	static int16_t x80 = INT16_MIN;
	static uint32_t t17 = 883451U;

	t17 = (x77/(x78%(x79+x80)));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 453684772946LL;
	uint64_t x82 = 312LLU;
	static volatile int32_t x83 = -245918907;
	uint64_t t18 = 63143762LLU;

	t18 = (x81/(x82%(x83+x84)));

	if (t18 != 1454117862LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 903U;
	int8_t x86 = INT8_MIN;
	int16_t x88 = 13;
	int32_t t19 = 108422;

	t19 = (x85/(x86%(x87+x88)));

	if (t19 != -112) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x90 = -1;
	int16_t x91 = -12695;

	t20 = (x89/(x90%(x91+x92)));

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x93 = 15459128LLU;
	static int8_t x94 = -1;
	int16_t x95 = INT16_MAX;
	uint32_t x96 = 1U;
	static uint64_t t21 = 17127LLU;

	t21 = (x93/(x94%(x95+x96)));

	if (t21 != 471LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 2413U;
	static int16_t x98 = INT16_MIN;
	uint16_t x99 = 1045U;
	static uint32_t x100 = UINT32_MAX;
	volatile uint32_t t22 = 204318U;

	t22 = (x97/(x98%(x99+x100)));

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 9;
	uint8_t x102 = UINT8_MAX;
	uint32_t x104 = 0U;
	static uint32_t t23 = 794605U;

	t23 = (x101/(x102%(x103+x104)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = 8;
	int8_t x106 = INT8_MAX;
	volatile uint64_t x107 = 193363232670LLU;

	t24 = (x105/(x106%(x107+x108)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = -334;
	int8_t x112 = INT8_MAX;
	volatile int32_t t25 = 492;

	t25 = (x109/(x110%(x111+x112)));

	if (t25 != 55) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x115 = 6U;
	int8_t x116 = INT8_MIN;

	t26 = (x113/(x114%(x115+x116)));

	if (t26 != -60) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 4349U;
	int64_t x118 = INT64_MIN;
	int32_t x119 = 6;
	uint16_t x120 = 0U;
	volatile int64_t t27 = -23163046505621LL;

	t27 = (x117/(x118%(x119+x120)));

	if (t27 != -2174LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	uint16_t x122 = 3137U;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MAX;
	volatile int32_t t28 = 212052627;

	t28 = (x121/(x122%(x123+x124)));

	if (t28 != 684566) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = INT32_MIN;
	uint32_t x127 = 1896241U;
	uint32_t x128 = UINT32_MAX;

	t29 = (x125/(x126%(x127+x128)));

	if (t29 != -9812431951784LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 108136829821931134LLU;
	uint64_t x130 = 35730LLU;
	uint8_t x131 = 8U;
	int32_t x132 = INT32_MIN;

	t30 = (x129/(x130%(x131+x132)));

	if (t30 != 3026499575200LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MAX;
	int8_t x138 = 1;
	int8_t x140 = 0;
	volatile int32_t t31 = -2094926;

	t31 = (x137/(x138%(x139+x140)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MAX;
	volatile int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MAX;
	int64_t t32 = 235420455576860174LL;

	t32 = (x141/(x142%(x143+x144)));

	if (t32 != -258LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MAX;
	volatile int8_t x146 = INT8_MIN;
	uint64_t x147 = UINT64_MAX;
	uint16_t x148 = 4369U;

	t33 = (x145/(x146%(x147+x148)));

	if (t33 != 2167145685351216LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x153 = 6U;
	uint8_t x154 = UINT8_MAX;
	static int32_t x155 = -841725152;
	int32_t x156 = -1;
	int32_t t34 = -277520187;

	t34 = (x153/(x154%(x155+x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x157 = -455;
	uint8_t x158 = 61U;
	static int64_t x159 = -1LL;
	int8_t x160 = INT8_MAX;

	t35 = (x157/(x158%(x159+x160)));

	if (t35 != -7LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MAX;
	int8_t x164 = 26;
	volatile int64_t t36 = -1LL;

	t36 = (x161/(x162%(x163+x164)));

	if (t36 != -127LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = 24117301LLU;
	int8_t x166 = INT8_MIN;
	int16_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	static volatile uint64_t t37 = 1657LLU;

	t37 = (x165/(x166%(x167+x168)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x170 = UINT8_MAX;
	uint64_t x171 = 72358104755LLU;
	uint32_t x172 = 2U;

	t38 = (x169/(x170%(x171+x172)));

	if (t38 != 72340172829655168LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x174 = 19U;
	int16_t x175 = 2;

	t39 = (x173/(x174%(x175+x176)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = 79075424LL;
	int16_t x179 = INT16_MIN;

	t40 = (x177/(x178%(x179+x180)));

	if (t40 != 2413LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 46170773U;
	static volatile uint32_t x182 = UINT32_MAX;
	static uint8_t x183 = 121U;
	static int16_t x184 = -30;
	uint32_t t41 = 2381459U;

	t41 = (x181/(x182%(x183+x184)));

	if (t41 != 632476U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 29U;
	int16_t x186 = -1;
	uint16_t x188 = 265U;
	volatile uint32_t t42 = 6U;

	t42 = (x185/(x186%(x187+x188)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x190 = -272;
	uint64_t x191 = UINT64_MAX;
	static uint16_t x192 = 22U;
	uint64_t t43 = 1147114474930911233LLU;

	t43 = (x189/(x190%(x191+x192)));

	if (t43 != 15LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x193 = 9U;
	volatile int8_t x194 = INT8_MAX;

	t44 = (x193/(x194%(x195+x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = 1954953396198230LL;
	static volatile int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	uint32_t x200 = 13728U;
	volatile int64_t t45 = -492844392658182LL;

	t45 = (x197/(x198%(x199+x200)));

	if (t45 != -367887353443LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = 105715;
	static int16_t x202 = -76;
	volatile int8_t x203 = 10;
	int16_t x204 = INT16_MIN;

	t46 = (x201/(x202%(x203+x204)));

	if (t46 != -1390) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	int64_t x207 = 149936244260370LL;
	uint32_t x208 = UINT32_MAX;
	static int64_t t47 = -8942558664LL;

	t47 = (x205/(x206%(x207+x208)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x209 = 622;
	uint64_t t48 = 202281240469LLU;

	t48 = (x209/(x210%(x211+x212)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MAX;
	int16_t x214 = INT16_MIN;
	static uint8_t x215 = 21U;
	int64_t x216 = INT64_MIN;
	int64_t t49 = -1607909LL;

	t49 = (x213/(x214%(x215+x216)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -1;
	uint32_t x230 = 86U;
	static int64_t x231 = -1LL;
	static int16_t x232 = INT16_MAX;

	t50 = (x229/(x230%(x231+x232)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MIN;
	uint16_t x235 = 252U;
	static int8_t x236 = INT8_MAX;
	volatile int64_t t51 = -319901113LL;

	t51 = (x233/(x234%(x235+x236)));

	if (t51 != -512409557603043100LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = UINT32_MAX;
	static int8_t x238 = -59;
	int8_t x240 = -2;

	t52 = (x237/(x238%(x239+x240)));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x246 = 13887U;
	static int64_t x247 = -12595982LL;

	t53 = (x245/(x246%(x247+x248)));

	if (t53 != 73LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = -1;
	uint16_t x254 = UINT16_MAX;
	volatile uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;

	t54 = (x253/(x254%(x255+x256)));

	if (t54 != 65537U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = 8283851LLU;
	volatile uint64_t x264 = 3088579174LLU;
	uint64_t t55 = 25195LLU;

	t55 = (x261/(x262%(x263+x264)));

	if (t55 != 2226831949742LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x269 = -5;
	int16_t x270 = INT16_MAX;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = -1;
	volatile uint32_t t56 = 24U;

	t56 = (x269/(x270%(x271+x272)));

	if (t56 != 131075U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x273 = 182790U;
	static uint32_t x275 = 21052494U;
	int32_t x276 = INT32_MIN;
	volatile uint32_t t57 = 782U;

	t57 = (x273/(x274%(x275+x276)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x277 = 26214U;
	int32_t x278 = INT32_MAX;
	uint32_t x279 = UINT32_MAX;
	volatile uint32_t t58 = 7694462U;

	t58 = (x277/(x278%(x279+x280)));

	if (t58 != 3744U) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x281 = UINT16_MAX;
	static int32_t x282 = 356335;
	uint16_t x283 = 3U;
	volatile uint64_t x284 = 42771487493259569LLU;
	uint64_t t59 = 15800919060LLU;

	t59 = (x281/(x282%(x283+x284)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MAX;
	uint32_t x288 = UINT32_MAX;
	static uint64_t t60 = 19900010LLU;

	t60 = (x285/(x286%(x287+x288)));

	if (t60 != 1420092LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x289 = -3;
	int32_t x290 = INT32_MAX;
	int16_t x291 = 6947;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t61 = 15178281U;

	t61 = (x289/(x290%(x291+x292)));

	if (t61 != 1579612U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x297 = 3U;
	int32_t x298 = 82907;
	volatile uint16_t x300 = 770U;
	int32_t t62 = 29736616;

	t62 = (x297/(x298%(x299+x300)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x301 = INT64_MAX;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = 15U;
	int16_t x304 = INT16_MAX;
	volatile int64_t t63 = -1LL;

	t63 = (x301/(x302%(x303+x304)));

	if (t63 != -281474976710655LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = INT32_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	uint64_t x307 = UINT64_MAX;
	uint64_t x308 = UINT64_MAX;
	static volatile uint64_t t64 = 75744247235LLU;

	t64 = (x305/(x306%(x307+x308)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x309 = -56894589LL;
	volatile int32_t x310 = -1;
	uint32_t x311 = 118860132U;
	uint64_t x312 = 114960454799657LLU;
	uint64_t t65 = 13019776945LLU;

	t65 = (x309/(x310%(x311+x312)));

	if (t65 != 332591LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = -5691584207336LL;
	int64_t x315 = -441354552633488633LL;
	volatile uint32_t x316 = UINT32_MAX;
	static volatile int64_t t66 = 229709438383LL;

	t66 = (x313/(x314%(x315+x316)));

	if (t66 != 5691584207336LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x318 = 643045265LLU;
	int64_t x319 = INT64_MIN;
	static uint16_t x320 = 8U;
	volatile uint64_t t67 = 152200852LLU;

	t67 = (x317/(x318%(x319+x320)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x322 = -3;
	uint64_t x323 = 15960LLU;
	uint32_t x324 = 371279U;
	volatile uint64_t t68 = 146781173059LLU;

	t68 = (x321/(x322%(x323+x324)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x325 = 235761886U;
	static volatile int32_t x326 = 16384587;
	static int8_t x327 = -13;
	uint32_t t69 = 14611U;

	t69 = (x325/(x326%(x327+x328)));

	if (t69 != 33680269U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x329 = 1343887002867964175LL;
	int64_t x330 = 232523538084244674LL;
	volatile uint64_t x332 = 985852540LLU;

	t70 = (x329/(x330%(x331+x332)));

	if (t70 != 1390388936LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = UINT8_MAX;
	int64_t x334 = INT64_MIN;
	int32_t x335 = -43784286;
	static int32_t x336 = -1;

	t71 = (x333/(x334%(x335+x336)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x337 = -20;
	volatile int32_t x338 = 188790028;
	int32_t x339 = -1;
	int16_t x340 = INT16_MAX;
	volatile int32_t t72 = 1;

	t72 = (x337/(x338%(x339+x340)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = UINT32_MAX;
	static int16_t x342 = INT16_MIN;
	int32_t x343 = -784895;
	volatile int32_t x344 = INT32_MAX;

	t73 = (x341/(x342%(x343+x344)));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x353 = INT16_MIN;
	int32_t x355 = -238;
	int32_t t74 = -53;

	t74 = (x353/(x354%(x355+x356)));

	if (t74 != -177) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x357 = INT16_MIN;
	static int32_t x358 = INT32_MIN;
	static volatile int16_t x359 = -1;
	volatile uint64_t t75 = 174458357319820354LLU;

	t75 = (x357/(x358%(x359+x360)));

	if (t75 != 1016830050967LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = 2U;
	uint8_t x362 = UINT8_MAX;
	uint32_t x363 = 183U;
	volatile int16_t x364 = 893;
	volatile uint32_t t76 = 2063476734U;

	t76 = (x361/(x362%(x363+x364)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x369 = UINT16_MAX;
	int8_t x371 = -61;
	volatile int8_t x372 = INT8_MIN;
	static int64_t t77 = 932284855LL;

	t77 = (x369/(x370%(x371+x372)));

	if (t77 != -489LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x378 = 25U;
	int8_t x379 = -1;
	static uint16_t x380 = 54U;

	t78 = (x377/(x378%(x379+x380)));

	if (t78 != -1310) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x381 = UINT32_MAX;
	int16_t x383 = INT16_MIN;
	static uint64_t x384 = 1869050LLU;
	uint64_t t79 = 26348LLU;

	t79 = (x381/(x382%(x383+x384)));

	if (t79 != 4294967295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x385 = 336LLU;
	int8_t x386 = INT8_MIN;
	uint64_t x388 = UINT64_MAX;
	uint64_t t80 = 5807465LLU;

	t80 = (x385/(x386%(x387+x388)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = INT32_MIN;
	static uint8_t x391 = 14U;
	uint64_t t81 = 32523826900988LLU;

	t81 = (x389/(x390%(x391+x392)));

	if (t81 != 562967133749262LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x395 = INT8_MIN;
	int16_t x396 = INT16_MIN;

	t82 = (x393/(x394%(x395+x396)));

	if (t82 != -281474976710655LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x399 = INT32_MIN;
	uint32_t x400 = 722286U;
	int64_t t83 = -738426126LL;

	t83 = (x397/(x398%(x399+x400)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = -254018975156LL;
	int32_t x402 = 307;
	uint64_t x403 = 2311510061LLU;
	uint8_t x404 = 56U;
	volatile uint64_t t84 = 69445198447215181LLU;

	t84 = (x401/(x402%(x403+x404)));

	if (t84 != 60087113419187545LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x406 = -1;
	uint64_t x407 = 16592LLU;
	static uint16_t x408 = 0U;
	uint64_t t85 = 124720592LLU;

	t85 = (x405/(x406%(x407+x408)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x409 = 13U;
	uint16_t x410 = UINT16_MAX;
	int8_t x411 = INT8_MIN;
	int8_t x412 = 1;
	volatile int32_t t86 = 0;

	t86 = (x409/(x410%(x411+x412)));

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x413 = 335825339816LLU;
	static volatile int32_t x414 = INT32_MAX;
	uint32_t x415 = 929627640U;
	uint16_t x416 = UINT16_MAX;
	volatile uint64_t t87 = 13362365807LLU;

	t87 = (x413/(x414%(x415+x416)));

	if (t87 != 1165LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x424 = UINT16_MAX;
	static int32_t t88 = 23588;

	t88 = (x421/(x422%(x423+x424)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x425 = INT16_MIN;
	static volatile uint64_t x427 = 543690008218245532LLU;

	t89 = (x425/(x426%(x427+x428)));

	if (t89 != 10549693787LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x434 = -1;
	uint64_t x436 = 129020505450860LLU;
	static uint64_t t90 = 13176239LLU;

	t90 = (x433/(x434%(x435+x436)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x439 = -1;
	int8_t x440 = -1;
	int64_t t91 = 1LL;

	t91 = (x437/(x438%(x439+x440)));

	if (t91 != 7LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x442 = INT16_MIN;
	uint32_t x443 = UINT32_MAX;
	int16_t x444 = INT16_MIN;
	uint32_t t92 = 51260858U;

	t92 = (x441/(x442%(x443+x444)));

	if (t92 != 255U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = 17335805137LL;
	uint8_t x447 = 28U;
	volatile uint32_t x448 = 13496935U;

	t93 = (x445/(x446%(x447+x448)));

	if (t93 != -376LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x450 = 2914483924716LLU;
	int8_t x452 = -1;

	t94 = (x449/(x450%(x451+x452)));

	if (t94 != 431LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x453 = -1;
	volatile int64_t x454 = -22933808LL;
	int16_t x455 = -1;

	t95 = (x453/(x454%(x455+x456)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x457 = -46098597049691595LL;
	static int8_t x458 = INT8_MAX;
	uint8_t x459 = 2U;
	int64_t x460 = -32125768843505LL;
	int64_t t96 = -1096807365031219LL;

	t96 = (x457/(x458%(x459+x460)));

	if (t96 != -362981079131429LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x462 = INT32_MIN;
	int16_t x463 = 14142;
	int64_t x464 = -12723895165289LL;
	volatile int64_t t97 = -1504538985LL;

	t97 = (x461/(x462%(x463+x464)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x465 = -1;
	int64_t x466 = 487LL;
	static int64_t x467 = INT64_MAX;
	uint64_t x468 = 15007654LLU;
	uint64_t t98 = 0LLU;

	t98 = (x465/(x466%(x467+x468)));

	if (t98 != 37878324586672590LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x478 = -62275LL;
	static int8_t x479 = INT8_MAX;

	t99 = (x477/(x478%(x479+x480)));

	if (t99 != -34483LL) { NG(); } else { ; }
	
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

