#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x3 = 846581U;
static uint16_t x4 = 3389U;
static int64_t t1 = -124358LL;
volatile int8_t x13 = -1;
int32_t x14 = INT32_MIN;
volatile int32_t t5 = -94655651;
int8_t x29 = 1;
int64_t x31 = INT64_MIN;
uint32_t x36 = UINT32_MAX;
static uint32_t t7 = 7U;
int16_t x38 = INT16_MIN;
int32_t t8 = 2631;
int16_t x50 = INT16_MIN;
int32_t x51 = -1;
int32_t x52 = -445;
volatile int32_t t10 = 1796;
int64_t x54 = 3014981877696843931LL;
uint32_t x59 = 1837U;
volatile int8_t x61 = -1;
static int8_t x62 = -1;
int16_t x67 = -1;
uint64_t x70 = 24794565781547LLU;
static int16_t x73 = 0;
volatile int32_t x74 = INT32_MIN;
int64_t x83 = INT64_MIN;
uint16_t x105 = 24U;
volatile int8_t x110 = INT8_MAX;
volatile int32_t t20 = -16230903;
volatile int64_t x126 = -8661538248825818LL;
static int64_t x127 = 1028573LL;
static uint32_t x131 = 1311U;
volatile uint32_t x133 = 5187U;
int16_t x134 = INT16_MAX;
volatile int8_t x152 = INT8_MAX;
static int32_t t25 = -105382;
int16_t x153 = -9;
int32_t t26 = 71446380;
static uint64_t t27 = 264100071534625LLU;
int8_t x169 = INT8_MAX;
static int32_t x178 = 399;
int32_t x182 = -1;
volatile uint32_t x184 = 85299981U;
static uint8_t x208 = UINT8_MAX;
int32_t t36 = 2;
int8_t x209 = -1;
uint64_t x214 = UINT64_MAX;
static int32_t x218 = 0;
uint64_t x219 = UINT64_MAX;
uint8_t x227 = 32U;
static uint32_t x230 = 29U;
int32_t x242 = INT32_MAX;
volatile int32_t x243 = 0;
volatile int16_t x246 = -25;
static volatile int16_t x251 = -1524;
uint64_t x258 = 1752LLU;
static int32_t t50 = 783401;
int64_t x271 = -3478559LL;
volatile int32_t t52 = 388310163;
int16_t x286 = -4369;
int64_t t56 = -46238LL;
static int16_t x324 = 805;
int32_t x328 = INT32_MAX;
int64_t t58 = 24854179LL;
int32_t t59 = 56;
volatile uint64_t x333 = 38231279LLU;
volatile int32_t x334 = -76;
int32_t x336 = -847685;
uint32_t x338 = 599U;
uint16_t x340 = 1U;
static uint64_t t62 = 388469019929559598LLU;
int64_t x351 = -1LL;
volatile int32_t x352 = -1;
int64_t x371 = INT64_MIN;
uint32_t t68 = UINT32_MAX;
volatile uint16_t x375 = 177U;
volatile uint64_t t70 = 53LLU;
uint32_t x381 = 11811029U;
int16_t x382 = INT16_MIN;
uint32_t t71 = 892U;
static uint64_t x385 = 83760058598508661LLU;
volatile int64_t x388 = 202LL;
volatile int32_t x397 = -14431032;
int32_t t75 = 28;
int16_t x413 = 27;
int8_t x415 = INT8_MAX;
int16_t x421 = INT16_MIN;
static volatile int32_t t80 = -2164654;
int64_t x434 = 73LL;
int16_t x438 = INT16_MIN;
int16_t x439 = -19;
static int32_t t84 = 0;
uint64_t x441 = UINT64_MAX;
static volatile uint16_t x442 = UINT16_MAX;
uint32_t x444 = UINT32_MAX;
int32_t x463 = 17;
static uint8_t x466 = 13U;
int16_t x467 = INT16_MAX;
int32_t x472 = -1;
uint16_t x473 = 127U;
int64_t x481 = -1LL;
uint16_t x488 = 27U;
volatile int64_t x490 = -38040852928259LL;
int8_t x495 = INT8_MIN;
uint16_t x513 = 1428U;


void f0(void) {
	static int32_t x1 = 1;
	static volatile uint8_t x2 = UINT8_MAX;
	static volatile int32_t t0 = 556;

	t0 = (x1*(x2|(x3<=x4)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 21043U;
	static int64_t x10 = 1LL;
	uint16_t x11 = UINT16_MAX;
	static uint16_t x12 = 5007U;

	t1 = (x9*(x10|(x11<=x12)));

	if (t1 != 21043LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x15 = INT8_MIN;
	static uint64_t x16 = UINT64_MAX;
	static volatile int32_t t2 = INT32_MAX;

	t2 = (x13*(x14|(x15<=x16)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MIN;
	static volatile int64_t x20 = -8353027102271LL;
	int32_t t3 = 3747544;

	t3 = (x17*(x18|(x19<=x20)));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = UINT16_MAX;
	volatile int8_t x22 = INT8_MAX;
	uint32_t x23 = 1019593U;
	static int32_t x24 = 414;
	volatile int32_t t4 = 729476145;

	t4 = (x21*(x22|(x23<=x24)));

	if (t4 != 8322945) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 530U;
	int8_t x26 = 11;
	int32_t x27 = -1708;
	int8_t x28 = INT8_MIN;

	t5 = (x25*(x26|(x27<=x28)));

	if (t5 != 5830) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MAX;
	int32_t x32 = 222;
	int32_t t6 = -5831;

	t6 = (x29*(x30|(x31<=x32)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	volatile uint32_t x34 = UINT32_MAX;
	static uint16_t x35 = 1357U;

	t7 = (x33*(x34|(x35<=x36)));

	if (t7 != 4294967041U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x37 = -1;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MAX;

	t8 = (x37*(x38|(x39<=x40)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -1;
	volatile int32_t x46 = -1;
	static uint8_t x47 = 8U;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t9 = 11297122;

	t9 = (x45*(x46|(x47<=x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;

	t10 = (x49*(x50|(x51<=x52)));

	if (t10 != 32768) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x53 = UINT64_MAX;
	static int8_t x55 = 1;
	int8_t x56 = INT8_MAX;
	volatile uint64_t t11 = 4LLU;

	t11 = (x53*(x54|(x55<=x56)));

	if (t11 != 15431762196012707685LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = 0;
	int64_t x58 = INT64_MIN;
	int64_t x60 = -306030176909186569LL;
	static volatile int64_t t12 = -8LL;

	t12 = (x57*(x58|(x59<=x60)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x63 = -1;
	volatile int32_t x64 = -1;
	volatile int32_t t13 = -260870;

	t13 = (x61*(x62|(x63<=x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -64;
	volatile int16_t x66 = 1097;
	int16_t x68 = INT16_MIN;
	int32_t t14 = 20815556;

	t14 = (x65*(x66|(x67<=x68)));

	if (t14 != -70208) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = -1;
	volatile int32_t x71 = -4328;
	static int16_t x72 = -1;
	static uint64_t t15 = 14LLU;

	t15 = (x69*(x70|(x71<=x72)));

	if (t15 != 18446719279143770069LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x75 = 69687145935017LL;
	uint64_t x76 = 299LLU;
	volatile int32_t t16 = -9362463;

	t16 = (x73*(x74|(x75<=x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x81 = UINT64_MAX;
	int32_t x82 = -1;
	volatile uint8_t x84 = 19U;
	static uint64_t t17 = 101400473LLU;

	t17 = (x81*(x82|(x83<=x84)));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	int64_t x94 = -1LL;
	static int8_t x95 = -1;
	volatile int64_t x96 = -1LL;
	volatile int64_t t18 = 15LL;

	t18 = (x93*(x94|(x95<=x96)));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = 4;
	int8_t x108 = 0;
	volatile uint32_t t19 = 1571197U;

	t19 = (x105*(x106|(x107<=x108)));

	if (t19 != 4294967272U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x109 = 0;
	int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MAX;

	t20 = (x109*(x110|(x111<=x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x125 = INT8_MIN;
	static volatile int8_t x128 = -1;
	int64_t t21 = 0LL;

	t21 = (x125*(x126|(x127<=x128)));

	if (t21 != 1108676895849704704LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x129 = INT64_MIN;
	uint64_t x130 = UINT64_MAX;
	uint8_t x132 = UINT8_MAX;
	static volatile uint64_t t22 = 107LLU;

	t22 = (x129*(x130|(x131<=x132)));

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	uint32_t t23 = 872U;

	t23 = (x133*(x134|(x135<=x136)));

	if (t23 != 169962429U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x145 = -1;
	uint32_t x146 = 109451U;
	uint32_t x147 = 134006U;
	uint32_t x148 = 11766U;
	volatile uint32_t t24 = 96996U;

	t24 = (x145*(x146|(x147<=x148)));

	if (t24 != 4294857845U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -1;
	volatile int8_t x150 = INT8_MIN;
	int8_t x151 = -1;

	t25 = (x149*(x150|(x151<=x152)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x154 = -787;
	int8_t x155 = -1;
	static volatile int8_t x156 = INT8_MIN;

	t26 = (x153*(x154|(x155<=x156)));

	if (t26 != 7083) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x157 = 1377100;
	uint64_t x158 = 4LLU;
	int64_t x159 = INT64_MIN;
	uint32_t x160 = 36645525U;

	t27 = (x157*(x158|(x159<=x160)));

	if (t27 != 6885500LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x165 = 31063269U;
	uint64_t x166 = 410326176284786LLU;
	volatile uint8_t x167 = 35U;
	uint16_t x168 = UINT16_MAX;
	uint64_t t28 = 100LLU;

	t28 = (x165*(x166|(x167<=x168)));

	if (t28 != 17818980816168573663LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x170 = 52575LL;
	int8_t x171 = -1;
	uint8_t x172 = 125U;
	static int64_t t29 = -367LL;

	t29 = (x169*(x170|(x171<=x172)));

	if (t29 != 6677025LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x173 = UINT64_MAX;
	uint8_t x174 = UINT8_MAX;
	static uint16_t x175 = 19U;
	int16_t x176 = -1;
	uint64_t t30 = 1053925103LLU;

	t30 = (x173*(x174|(x175<=x176)));

	if (t30 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x177 = 3435U;
	int64_t x179 = -57944854809232LL;
	uint32_t x180 = UINT32_MAX;
	uint32_t t31 = 1U;

	t31 = (x177*(x178|(x179<=x180)));

	if (t31 != 1370565U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = INT16_MAX;
	int8_t x183 = INT8_MIN;
	volatile int32_t t32 = 78434211;

	t32 = (x181*(x182|(x183<=x184)));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x185 = INT16_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	static volatile int8_t x187 = -16;
	int64_t x188 = INT64_MIN;
	volatile int32_t t33 = -660;

	t33 = (x185*(x186|(x187<=x188)));

	if (t33 != -8355840) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = INT16_MAX;
	uint32_t x190 = 5925U;
	int16_t x191 = INT16_MIN;
	static uint16_t x192 = 5578U;
	uint32_t t34 = 25U;

	t34 = (x189*(x190|(x191<=x192)));

	if (t34 != 194144475U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x197 = 76U;
	volatile uint8_t x198 = 27U;
	volatile int32_t x199 = 55404622;
	volatile int8_t x200 = INT8_MIN;
	int32_t t35 = 303;

	t35 = (x197*(x198|(x199<=x200)));

	if (t35 != 2052) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = 1;
	int64_t x207 = INT64_MIN;

	t36 = (x205*(x206|(x207<=x208)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x210 = 10U;
	int16_t x211 = -1;
	uint64_t x212 = 2278989253LLU;
	volatile int32_t t37 = -12;

	t37 = (x209*(x210|(x211<=x212)));

	if (t37 != -10) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x213 = -41292147;
	int16_t x215 = INT16_MAX;
	uint8_t x216 = 1U;
	uint64_t t38 = 170353LLU;

	t38 = (x213*(x214|(x215<=x216)));

	if (t38 != 41292147LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x217 = UINT8_MAX;
	volatile int16_t x220 = -570;
	int32_t t39 = -2;

	t39 = (x217*(x218|(x219<=x220)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x221 = -1;
	volatile int32_t x222 = INT32_MAX;
	volatile uint16_t x223 = UINT16_MAX;
	int32_t x224 = -172520196;
	volatile int32_t t40 = -983235;

	t40 = (x221*(x222|(x223<=x224)));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x225 = 53U;
	uint64_t x226 = 435404260004240805LLU;
	int64_t x228 = 70952098971782963LL;
	volatile uint64_t t41 = 245137773LLU;

	t41 = (x225*(x226|(x227<=x228)));

	if (t41 != 4629681706515211049LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = 4;
	int32_t x231 = 5;
	uint64_t x232 = UINT64_MAX;
	static volatile uint32_t t42 = 690816537U;

	t42 = (x229*(x230|(x231<=x232)));

	if (t42 != 116U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x233 = -1LL;
	int16_t x234 = INT16_MIN;
	static int16_t x235 = INT16_MIN;
	static int32_t x236 = -1;
	int64_t t43 = -1279LL;

	t43 = (x233*(x234|(x235<=x236)));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x237 = -14673;
	uint16_t x238 = 54U;
	int64_t x239 = INT64_MAX;
	volatile uint8_t x240 = 17U;
	volatile int32_t t44 = -4353377;

	t44 = (x237*(x238|(x239<=x240)));

	if (t44 != -792342) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = -1;
	uint32_t x244 = 98425U;
	volatile int32_t t45 = 436;

	t45 = (x241*(x242|(x243<=x244)));

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x245 = -1;
	int64_t x247 = -1LL;
	int16_t x248 = INT16_MIN;
	int32_t t46 = -8;

	t46 = (x245*(x246|(x247<=x248)));

	if (t46 != 25) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 15171171LLU;
	int16_t x252 = -1;
	volatile uint64_t t47 = 68243116701LLU;

	t47 = (x249*(x250|(x251<=x252)));

	if (t47 != 18414164232066039808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x253 = INT8_MAX;
	static uint32_t x254 = UINT32_MAX;
	static int16_t x255 = 3;
	volatile int16_t x256 = INT16_MIN;
	uint32_t t48 = 6U;

	t48 = (x253*(x254|(x255<=x256)));

	if (t48 != 4294967169U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x257 = UINT32_MAX;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = -7025;
	uint64_t t49 = 250059174586677347LLU;

	t49 = (x257*(x258|(x259<=x260)));

	if (t49 != 7524782700840LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x261 = INT8_MAX;
	volatile int16_t x262 = INT16_MIN;
	volatile uint32_t x263 = 210370U;
	static uint8_t x264 = 100U;

	t50 = (x261*(x262|(x263<=x264)));

	if (t50 != -4161536) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x265 = 9286U;
	int16_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	static int64_t x268 = INT64_MIN;
	volatile int32_t t51 = 3921;

	t51 = (x265*(x266|(x267<=x268)));

	if (t51 != -9286) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	int16_t x272 = INT16_MIN;

	t52 = (x269*(x270|(x271<=x272)));

	if (t52 != 1073709056) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x273 = 503821;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 30U;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t53 = 219733076;

	t53 = (x273*(x274|(x275<=x276)));

	if (t53 != -63985267) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = -3659795;
	int32_t x283 = -1;
	static uint16_t x284 = 2U;
	volatile int32_t t54 = 469249775;

	t54 = (x281*(x282|(x283<=x284)));

	if (t54 != 468453760) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x285 = -2;
	uint8_t x287 = 15U;
	static int16_t x288 = -1;
	volatile int32_t t55 = 2506;

	t55 = (x285*(x286|(x287<=x288)));

	if (t55 != 8738) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x297 = UINT8_MAX;
	volatile int64_t x298 = 62704305LL;
	int64_t x299 = -218586221206792LL;
	static volatile int16_t x300 = -1;

	t56 = (x297*(x298|(x299<=x300)));

	if (t56 != 15989597775LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x321 = UINT8_MAX;
	int8_t x322 = INT8_MAX;
	int16_t x323 = INT16_MIN;
	static volatile int32_t t57 = -2174248;

	t57 = (x321*(x322|(x323<=x324)));

	if (t57 != 32385) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x325 = 0;
	static int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;

	t58 = (x325*(x326|(x327<=x328)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = 2;
	int8_t x330 = -1;
	uint32_t x331 = UINT32_MAX;
	uint16_t x332 = UINT16_MAX;

	t59 = (x329*(x330|(x331<=x332)));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x335 = UINT64_MAX;
	volatile uint64_t t60 = 922092754116978LLU;

	t60 = (x333*(x334|(x335<=x336)));

	if (t60 != 18446744070803974412LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x337 = -1;
	static volatile int32_t x339 = INT32_MIN;
	volatile uint32_t t61 = 25737481U;

	t61 = (x337*(x338|(x339<=x340)));

	if (t61 != 4294966697U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x341 = UINT64_MAX;
	uint64_t x342 = 12219764LLU;
	uint16_t x343 = 3U;
	int16_t x344 = 19;

	t62 = (x341*(x342|(x343<=x344)));

	if (t62 != 18446744073697331851LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x349 = -990;
	uint32_t x350 = 66499969U;
	static volatile uint32_t t63 = 993U;

	t63 = (x349*(x350|(x351<=x352)));

	if (t63 != 2884507426U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x353 = UINT16_MAX;
	int16_t x354 = 0;
	int64_t x355 = -5732165233LL;
	uint16_t x356 = UINT16_MAX;
	int32_t t64 = 138346089;

	t64 = (x353*(x354|(x355<=x356)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int8_t x358 = INT8_MIN;
	int64_t x359 = -14191852840LL;
	int16_t x360 = INT16_MIN;
	int32_t t65 = 26320;

	t65 = (x357*(x358|(x359<=x360)));

	if (t65 != -8322945) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x361 = -79;
	uint64_t x362 = 1350352935524725622LLU;
	int64_t x363 = -1LL;
	static volatile uint64_t x364 = 2729482LLU;
	volatile uint64_t t66 = 7113LLU;

	t66 = (x361*(x362|(x363<=x364)));

	if (t66 != 4002582535803985558LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x365 = 5U;
	int64_t x366 = -1LL;
	static int32_t x367 = 1;
	int64_t x368 = 2490559952261927738LL;
	static volatile int64_t t67 = 95341LL;

	t67 = (x365*(x366|(x367<=x368)));

	if (t67 != -5LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x369 = 1U;
	uint32_t x370 = UINT32_MAX;
	volatile int16_t x372 = INT16_MIN;

	t68 = (x369*(x370|(x371<=x372)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x373 = 691U;
	int16_t x374 = 1;
	int8_t x376 = INT8_MIN;
	uint32_t t69 = 2494U;

	t69 = (x373*(x374|(x375<=x376)));

	if (t69 != 691U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x377 = -30;
	uint64_t x378 = 1LLU;
	int32_t x379 = INT32_MIN;
	volatile int32_t x380 = -1;

	t70 = (x377*(x378|(x379<=x380)));

	if (t70 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x383 = INT16_MIN;
	volatile uint16_t x384 = 11U;

	t71 = (x381*(x382|(x383<=x384)));

	if (t71 != 3830036693U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x386 = INT8_MIN;
	static int64_t x387 = -1LL;
	uint64_t t72 = 13963443432695LLU;

	t72 = (x385*(x386|(x387<=x388)));

	if (t72 != 7809216631698951669LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	static volatile uint32_t x391 = 137277790U;
	volatile int64_t x392 = INT64_MIN;
	static volatile int32_t t73 = 28952;

	t73 = (x389*(x390|(x391<=x392)));

	if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x393 = 59U;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -1;
	int32_t x396 = -998240388;
	volatile int32_t t74 = 6250030;

	t74 = (x393*(x394|(x395<=x396)));

	if (t74 != -1933312) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x398 = INT8_MIN;
	static int32_t x399 = -1;
	int16_t x400 = 3819;

	t75 = (x397*(x398|(x399<=x400)));

	if (t75 != 1832741064) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x405 = INT8_MAX;
	int64_t x406 = -580682651716LL;
	static volatile int16_t x407 = INT16_MIN;
	int16_t x408 = -1542;
	volatile int64_t t76 = -43319038199728848LL;

	t76 = (x405*(x406|(x407<=x408)));

	if (t76 != -73746696767805LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x409 = -1;
	static int16_t x410 = -1338;
	int8_t x411 = -1;
	volatile uint8_t x412 = 43U;
	int32_t t77 = -525665762;

	t77 = (x409*(x410|(x411<=x412)));

	if (t77 != 1337) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x414 = 61875891U;
	int16_t x416 = 1;
	volatile uint32_t t78 = 30646U;

	t78 = (x413*(x414|(x415<=x416)));

	if (t78 != 1670649057U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x417 = INT16_MIN;
	int8_t x418 = -1;
	int64_t x419 = -1LL;
	uint64_t x420 = UINT64_MAX;
	static int32_t t79 = 7428;

	t79 = (x417*(x418|(x419<=x420)));

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x422 = 7132;
	int8_t x423 = -1;
	int8_t x424 = INT8_MAX;

	t80 = (x421*(x422|(x423<=x424)));

	if (t80 != -233734144) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x425 = -1;
	volatile int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MAX;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t81 = 103209;

	t81 = (x425*(x426|(x427<=x428)));

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x429 = 5U;
	static int32_t x430 = -1;
	static uint32_t x431 = 840U;
	int32_t x432 = -1;
	volatile int32_t t82 = -142040;

	t82 = (x429*(x430|(x431<=x432)));

	if (t82 != -5) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x433 = 4238LL;
	int16_t x435 = INT16_MIN;
	static int8_t x436 = INT8_MIN;
	int64_t t83 = -62LL;

	t83 = (x433*(x434|(x435<=x436)));

	if (t83 != 309374LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x437 = 3U;
	int32_t x440 = 989288;

	t84 = (x437*(x438|(x439<=x440)));

	if (t84 != -98301) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x443 = INT8_MIN;
	volatile uint64_t t85 = 15180550464714LLU;

	t85 = (x441*(x442|(x443<=x444)));

	if (t85 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x445 = 1;
	static uint64_t x446 = UINT64_MAX;
	volatile uint16_t x447 = UINT16_MAX;
	volatile int8_t x448 = INT8_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x445*(x446|(x447<=x448)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x449 = INT32_MIN;
	int8_t x450 = 0;
	uint8_t x451 = 18U;
	int64_t x452 = INT64_MIN;
	int32_t t87 = -7;

	t87 = (x449*(x450|(x451<=x452)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x453 = 260234U;
	static int16_t x454 = INT16_MAX;
	volatile int8_t x455 = 0;
	static int8_t x456 = INT8_MAX;
	static uint32_t t88 = 17489U;

	t88 = (x453*(x454|(x455<=x456)));

	if (t88 != 4232120182U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x457 = -6818;
	int16_t x458 = INT16_MIN;
	int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t89 = 33412138;

	t89 = (x457*(x458|(x459<=x460)));

	if (t89 != 223405406) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x461 = INT16_MAX;
	int32_t x462 = 1;
	static int16_t x464 = INT16_MIN;
	volatile int32_t t90 = -492858;

	t90 = (x461*(x462|(x463<=x464)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x465 = -3;
	int64_t x468 = 8927444104925305LL;
	volatile int32_t t91 = 1505230;

	t91 = (x465*(x466|(x467<=x468)));

	if (t91 != -39) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x469 = UINT64_MAX;
	int8_t x470 = INT8_MAX;
	uint8_t x471 = 1U;
	uint64_t t92 = 301LLU;

	t92 = (x469*(x470|(x471<=x472)));

	if (t92 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x474 = UINT64_MAX;
	int8_t x475 = INT8_MAX;
	volatile int64_t x476 = 48995999561035LL;
	volatile uint64_t t93 = 14619621465LLU;

	t93 = (x473*(x474|(x475<=x476)));

	if (t93 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x482 = 26LL;
	static int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MIN;
	volatile int64_t t94 = -1794099412714228LL;

	t94 = (x481*(x482|(x483<=x484)));

	if (t94 != -27LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x485 = 68U;
	int16_t x486 = INT16_MAX;
	volatile int64_t x487 = INT64_MIN;
	int32_t t95 = -38;

	t95 = (x485*(x486|(x487<=x488)));

	if (t95 != 2228156) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x489 = -1;
	int16_t x491 = -962;
	volatile uint64_t x492 = 118635239032394LLU;
	volatile int64_t t96 = -8327101822LL;

	t96 = (x489*(x490|(x491<=x492)));

	if (t96 != 38040852928259LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x493 = 11366U;
	static int8_t x494 = INT8_MAX;
	int64_t x496 = INT64_MIN;
	volatile int32_t t97 = -433091539;

	t97 = (x493*(x494|(x495<=x496)));

	if (t97 != 1443482) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x505 = -1;
	volatile uint32_t x506 = 16117026U;
	uint16_t x507 = 6U;
	volatile int16_t x508 = -1;
	uint32_t t98 = 1765U;

	t98 = (x505*(x506|(x507<=x508)));

	if (t98 != 4278850270U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x514 = -1LL;
	int8_t x515 = -1;
	int32_t x516 = -1;
	static volatile int64_t t99 = -1LL;

	t99 = (x513*(x514|(x515<=x516)));

	if (t99 != -1428LL) { NG(); } else { ; }
	
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

