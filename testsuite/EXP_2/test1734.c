#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x16 = INT32_MAX;
uint32_t x25 = 4718U;
int16_t x26 = 20;
volatile uint32_t t4 = 424255U;
uint16_t x35 = 3401U;
int64_t x40 = -1LL;
static uint8_t x48 = UINT8_MAX;
int32_t t8 = -20623941;
uint8_t x50 = UINT8_MAX;
uint32_t x55 = 1294U;
uint16_t x56 = UINT16_MAX;
volatile int8_t x58 = INT8_MIN;
static int16_t x60 = INT16_MIN;
static volatile int32_t t11 = 218194742;
int16_t x70 = INT16_MIN;
static volatile int16_t x71 = INT16_MIN;
int8_t x81 = -18;
uint64_t x84 = UINT64_MAX;
uint64_t t15 = 2508810786626LLU;
int8_t x88 = INT8_MIN;
uint64_t x89 = 1361606039LLU;
uint32_t x90 = 6U;
int32_t x95 = INT32_MIN;
static volatile int32_t x100 = INT32_MIN;
int32_t t19 = -3;
int32_t x102 = -60797;
volatile int32_t x108 = -1;
static int8_t x117 = INT8_MAX;
volatile int64_t x120 = INT64_MIN;
uint16_t x124 = 202U;
volatile int64_t t23 = 87117855231195LL;
uint64_t x129 = UINT64_MAX;
static uint32_t x131 = UINT32_MAX;
static int8_t x132 = INT8_MIN;
int8_t x146 = 31;
int64_t x150 = -1LL;
static volatile int64_t t28 = -712749LL;
uint16_t x156 = UINT16_MAX;
int32_t t29 = -49565;
int32_t x157 = 254464480;
static volatile int8_t x160 = 1;
static uint64_t x162 = UINT64_MAX;
static uint64_t t31 = 515531908531808LLU;
int16_t x166 = -1;
int8_t x168 = -1;
static int64_t x180 = 55080LL;
volatile int64_t t34 = -210545351300LL;
int64_t x182 = 369614720975LL;
volatile int64_t t35 = -7156LL;
volatile int32_t x186 = INT32_MIN;
int64_t x190 = INT64_MAX;
static uint8_t x205 = 27U;
static uint16_t x212 = UINT16_MAX;
int8_t x219 = -1;
int32_t t41 = 150707;
int16_t x226 = -9;
volatile int64_t x236 = 179LL;
uint8_t x271 = 43U;
static uint16_t x285 = 1U;
int32_t x295 = -1;
uint32_t x297 = UINT32_MAX;
static volatile uint32_t t59 = 12460U;
int32_t x301 = INT32_MAX;
int16_t x318 = INT16_MAX;
int32_t x328 = -1;
int8_t x329 = -11;
static int32_t x330 = INT32_MAX;
volatile uint64_t x331 = 2522275081LLU;
uint16_t x335 = UINT16_MAX;
volatile uint64_t t66 = 504937549836751610LLU;
int16_t x347 = 917;
volatile int32_t t68 = 15257;
int16_t x356 = -890;
static uint64_t x363 = UINT64_MAX;
volatile int64_t x371 = 1040873761LL;
int32_t x384 = INT32_MAX;
static volatile uint32_t x385 = 13U;
int8_t x391 = INT8_MAX;
int32_t x395 = 5949322;
volatile uint32_t x403 = UINT32_MAX;
volatile int32_t x413 = -1;
static int8_t x418 = INT8_MIN;
uint64_t x419 = 16010144006891262LLU;
volatile int64_t t82 = -61267LL;
int16_t x432 = INT16_MIN;
uint16_t x434 = UINT16_MAX;
int8_t x446 = INT8_MIN;
static uint64_t t86 = 674136262611LLU;
uint16_t x465 = 11403U;
int32_t t87 = 358861784;
static volatile int8_t x480 = 1;
int32_t x481 = -2095225;
uint16_t x491 = UINT16_MAX;
uint16_t x500 = UINT16_MAX;
volatile int64_t x506 = -193709LL;
volatile int64_t t93 = -1646474195LL;
uint32_t x516 = 185095U;
static volatile int64_t x526 = -1LL;
int16_t x541 = INT16_MAX;
int32_t x543 = INT32_MIN;
int64_t x547 = INT64_MIN;
static uint64_t t99 = 1108865269381765092LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MAX;
	volatile uint16_t x3 = 16U;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = -733194;

	t0 = ((x1/(x2&x3))%x4);

	if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 78LLU;
	volatile int64_t x14 = INT64_MIN;
	static int64_t x15 = INT64_MIN;
	uint64_t t1 = 4775612435944806411LLU;

	t1 = ((x13/(x14&x15))%x16);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = -8;
	int16_t x18 = -1;
	int32_t x19 = INT32_MIN;
	volatile int64_t x20 = -3456412461LL;
	int64_t t2 = -12992199407612252LL;

	t2 = ((x17/(x18&x19))%x20);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -47258198;
	int64_t x22 = 8430121025892957LL;
	int64_t x23 = -6137381815111778LL;
	int64_t x24 = INT64_MIN;
	int64_t t3 = -2780LL;

	t3 = ((x21/(x22&x23))%x24);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x27 = -1;
	static uint8_t x28 = 3U;

	t4 = ((x25/(x26&x27))%x28);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = INT8_MIN;
	static int64_t x30 = 1892734019316671850LL;
	uint64_t x31 = 12271LLU;
	static int64_t x32 = 257303781275262476LL;
	static uint64_t t5 = 8144LLU;

	t5 = ((x29/(x30&x31))%x32);

	if (t5 != 1925949475225469LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 205;
	uint32_t x34 = UINT32_MAX;
	int32_t x36 = -1;
	volatile uint32_t t6 = 71675436U;

	t6 = ((x33/(x34&x35))%x36);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	static uint64_t x38 = UINT64_MAX;
	volatile uint32_t x39 = 599U;
	uint64_t t7 = 0LLU;

	t7 = ((x37/(x38&x39))%x40);

	if (t7 != 30795899956109435LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = -1;
	int32_t x46 = INT32_MAX;
	uint8_t x47 = UINT8_MAX;

	t8 = ((x45/(x46&x47))%x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int32_t x51 = -1;
	volatile uint16_t x52 = 15U;
	static volatile uint32_t t9 = 222405587U;

	t9 = ((x49/(x50&x51))%x52);

	if (t9 != 4U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	int64_t t10 = 0LL;

	t10 = ((x53/(x54&x55))%x56);

	if (t10 != -20182LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int32_t x59 = INT32_MIN;

	t11 = ((x57/(x58&x59))%x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 4120671LLU;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 117677470397443983LLU;
	static int32_t x68 = INT32_MIN;
	uint64_t t12 = 753368299LLU;

	t12 = ((x65/(x66&x67))%x68);

	if (t12 != 338LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x69 = INT8_MIN;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t13 = 1;

	t13 = ((x69/(x70&x71))%x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = -1012703LL;
	int16_t x79 = INT16_MAX;
	int64_t x80 = 8182LL;
	volatile int64_t t14 = 6412393141LL;

	t14 = ((x77/(x78&x79))%x80);

	if (t14 != -4333LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MAX;

	t15 = ((x81/(x82&x83))%x84);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x85 = INT32_MAX;
	static uint32_t x86 = 863274440U;
	static int64_t x87 = 1401LL;
	static volatile int64_t t16 = -3694268434296387801LL;

	t16 = ((x85/(x86&x87))%x88);

	if (t16 != 23LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x91 = INT16_MAX;
	uint64_t x92 = UINT64_MAX;
	uint64_t t17 = 15050212960LLU;

	t17 = ((x89/(x90&x91))%x92);

	if (t17 != 226934339LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x93 = 5;
	static int64_t x94 = INT64_MIN;
	int64_t x96 = -1LL;
	volatile int64_t t18 = -8LL;

	t18 = ((x93/(x94&x95))%x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	int32_t x99 = INT32_MIN;

	t19 = ((x97/(x98&x99))%x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = -1;
	int8_t x103 = -2;
	static volatile int8_t x104 = INT8_MAX;
	int32_t t20 = -132031598;

	t20 = ((x101/(x102&x103))%x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = INT16_MAX;
	int64_t x106 = -224880608788952468LL;
	static uint16_t x107 = 64U;
	static volatile int64_t t21 = -1012468LL;

	t21 = ((x105/(x106&x107))%x108);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = 22;
	uint16_t x119 = 218U;
	int64_t t22 = -18LL;

	t22 = ((x117/(x118&x119))%x120);

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x121 = UINT16_MAX;
	uint8_t x122 = 13U;
	volatile int64_t x123 = INT64_MAX;

	t23 = ((x121/(x122&x123))%x124);

	if (t23 != 193LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x125 = 0U;
	uint32_t x126 = UINT32_MAX;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = -1;
	uint32_t t24 = 253U;

	t24 = ((x125/(x126&x127))%x128);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x130 = INT64_MAX;
	uint64_t t25 = 6089879635677LLU;

	t25 = ((x129/(x130&x131))%x132);

	if (t25 != 4294967297LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x133 = UINT16_MAX;
	static uint16_t x134 = 17407U;
	int32_t x135 = -196891196;
	uint32_t x136 = 3837U;
	volatile uint32_t t26 = 784U;

	t26 = ((x133/(x134&x135))%x136);

	if (t26 != 144U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x145 = INT64_MIN;
	volatile uint16_t x147 = 29U;
	int16_t x148 = INT16_MIN;
	int64_t t27 = -75LL;

	t27 = ((x145/(x146&x147))%x148);

	if (t27 != -25988LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = -1;
	int8_t x151 = INT8_MIN;
	static int16_t x152 = INT16_MIN;

	t28 = ((x149/(x150&x151))%x152);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = -14;
	int32_t x154 = INT32_MAX;
	static uint8_t x155 = UINT8_MAX;

	t29 = ((x153/(x154&x155))%x156);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x158 = 8;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t30 = 3744;

	t30 = ((x157/(x158&x159))%x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x161 = INT32_MIN;
	int8_t x163 = -1;
	uint8_t x164 = UINT8_MAX;

	t31 = ((x161/(x162&x163))%x164);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x165 = INT64_MAX;
	int16_t x167 = INT16_MAX;
	volatile int64_t t32 = -52120346138681LL;

	t32 = ((x165/(x166&x167))%x168);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x173 = INT16_MIN;
	volatile int32_t x174 = INT32_MAX;
	int16_t x175 = 4325;
	static volatile uint32_t x176 = 186U;
	uint32_t t33 = 316U;

	t33 = ((x173/(x174&x175))%x176);

	if (t33 != 183U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x177 = 50U;
	static uint32_t x178 = 354U;
	volatile int16_t x179 = INT16_MAX;

	t34 = ((x177/(x178&x179))%x180);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x181 = 44U;
	volatile int16_t x183 = -193;
	static volatile uint32_t x184 = 2565528U;

	t35 = ((x181/(x182&x183))%x184);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x185 = UINT32_MAX;
	volatile uint64_t x187 = UINT64_MAX;
	static volatile int64_t x188 = INT64_MIN;
	volatile uint64_t t36 = 1893999LLU;

	t36 = ((x185/(x186&x187))%x188);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x189 = INT32_MAX;
	int16_t x191 = 221;
	int32_t x192 = INT32_MIN;
	int64_t t37 = -973LL;

	t37 = ((x189/(x190&x191))%x192);

	if (t37 != 9717120LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x197 = 1;
	int32_t x198 = INT32_MIN;
	int16_t x199 = -641;
	static volatile uint16_t x200 = 3908U;
	volatile int32_t t38 = -397303;

	t38 = ((x197/(x198&x199))%x200);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x206 = 1U;
	volatile uint8_t x207 = 59U;
	static uint32_t x208 = 1687045U;
	uint32_t t39 = 48U;

	t39 = ((x205/(x206&x207))%x208);

	if (t39 != 27U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x209 = INT64_MIN;
	volatile int64_t x210 = INT64_MAX;
	int8_t x211 = INT8_MIN;
	volatile int64_t t40 = 16044LL;

	t40 = ((x209/(x210&x211))%x212);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = INT8_MIN;
	volatile uint8_t x218 = 2U;
	int8_t x220 = -21;

	t41 = ((x217/(x218&x219))%x220);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = 123682;
	volatile uint64_t x222 = UINT64_MAX;
	uint16_t x223 = 11U;
	static int32_t x224 = -1;
	uint64_t t42 = 100980LLU;

	t42 = ((x221/(x222&x223))%x224);

	if (t42 != 11243LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x227 = 2497;
	int32_t x228 = INT32_MAX;
	int32_t t43 = 250;

	t43 = ((x225/(x226&x227))%x228);

	if (t43 != 26) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -1;
	uint64_t x230 = UINT64_MAX;
	volatile uint8_t x231 = 17U;
	int8_t x232 = INT8_MIN;
	volatile uint64_t t44 = 2261768867944LLU;

	t44 = ((x229/(x230&x231))%x232);

	if (t44 != 1085102592571150095LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x233 = UINT8_MAX;
	static uint32_t x234 = 31036788U;
	uint64_t x235 = 9051LLU;
	volatile uint64_t t45 = 4287462865LLU;

	t45 = ((x233/(x234&x235))%x236);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x237 = 25U;
	int16_t x238 = -1;
	volatile int64_t x239 = INT64_MAX;
	uint16_t x240 = 1220U;
	volatile int64_t t46 = -6944258LL;

	t46 = ((x237/(x238&x239))%x240);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x245 = UINT32_MAX;
	uint64_t x246 = 1322888866LLU;
	int32_t x247 = -1;
	int64_t x248 = INT64_MAX;
	static uint64_t t47 = 6774632032LLU;

	t47 = ((x245/(x246&x247))%x248);

	if (t47 != 3LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x249 = -1;
	int64_t x250 = -530826669006589443LL;
	uint32_t x251 = 106670734U;
	volatile int16_t x252 = INT16_MIN;
	volatile int64_t t48 = -39049527LL;

	t48 = ((x249/(x250&x251))%x252);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = -1;
	int32_t x258 = 39530;
	volatile uint16_t x259 = UINT16_MAX;
	volatile int64_t x260 = -72703793LL;
	volatile int64_t t49 = -751151109LL;

	t49 = ((x257/(x258&x259))%x260);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = INT64_MAX;
	int64_t x262 = 5LL;
	uint32_t x263 = 814U;
	int16_t x264 = INT16_MIN;
	volatile int64_t t50 = 85747360663288351LL;

	t50 = ((x261/(x262&x263))%x264);

	if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x265 = UINT16_MAX;
	static int32_t x266 = -1;
	uint64_t x267 = 462066888355475LLU;
	int16_t x268 = INT16_MAX;
	volatile uint64_t t51 = 616203533122899LLU;

	t51 = ((x265/(x266&x267))%x268);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x269 = 6;
	volatile uint8_t x270 = UINT8_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t52 = -1;

	t52 = ((x269/(x270&x271))%x272);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x273 = UINT16_MAX;
	int16_t x274 = -1;
	int16_t x275 = 27;
	int16_t x276 = INT16_MIN;
	volatile int32_t t53 = -48101581;

	t53 = ((x273/(x274&x275))%x276);

	if (t53 != 2427) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x277 = UINT64_MAX;
	int8_t x278 = INT8_MIN;
	static int32_t x279 = INT32_MIN;
	static uint8_t x280 = 2U;
	volatile uint64_t t54 = 4062106005LLU;

	t54 = ((x277/(x278&x279))%x280);

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x281 = 80U;
	int16_t x282 = -1;
	uint32_t x283 = 402393948U;
	static int8_t x284 = INT8_MIN;
	volatile uint32_t t55 = 9U;

	t55 = ((x281/(x282&x283))%x284);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x286 = 1298016167LLU;
	int8_t x287 = 31;
	volatile uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t56 = 417653952110699LLU;

	t56 = ((x285/(x286&x287))%x288);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x289 = INT32_MAX;
	uint16_t x290 = 27U;
	int8_t x291 = -1;
	volatile uint32_t x292 = 920449382U;
	uint32_t t57 = 29186092U;

	t57 = ((x289/(x290&x291))%x292);

	if (t57 != 79536431U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = INT16_MAX;
	static volatile uint16_t x294 = 25U;
	static volatile int16_t x296 = -1;
	volatile int32_t t58 = -238211;

	t58 = ((x293/(x294&x295))%x296);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x298 = 2828U;
	int8_t x299 = -1;
	volatile uint32_t x300 = 1903422U;

	t59 = ((x297/(x298&x299))%x300);

	if (t59 != 1518729U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x302 = 1U;
	int8_t x303 = -1;
	int64_t x304 = INT64_MIN;
	static volatile int64_t t60 = -14049828813550LL;

	t60 = ((x301/(x302&x303))%x304);

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x306 = -5;
	int16_t x307 = -1;
	uint16_t x308 = 3053U;
	volatile uint32_t t61 = 25U;

	t61 = ((x305/(x306&x307))%x308);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x317 = 61U;
	int8_t x319 = INT8_MAX;
	uint64_t x320 = 3324084LLU;
	volatile uint64_t t62 = 31344LLU;

	t62 = ((x317/(x318&x319))%x320);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x325 = 1;
	int32_t x326 = 1;
	int32_t x327 = -1;
	static int32_t t63 = 51;

	t63 = ((x325/(x326&x327))%x328);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x332 = INT16_MAX;
	uint64_t t64 = 1039145630LLU;

	t64 = ((x329/(x330&x331))%x332);

	if (t64 != 3789LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x333 = 123322677764LL;
	int64_t x334 = -1LL;
	int32_t x336 = -1;
	static volatile int64_t t65 = 79111197580LL;

	t65 = ((x333/(x334&x335))%x336);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x337 = INT8_MIN;
	static int8_t x338 = -1;
	uint64_t x339 = 77089263LLU;
	volatile int8_t x340 = -1;

	t66 = ((x337/(x338&x339))%x340);

	if (t66 != 239290704773LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	static int16_t x342 = INT16_MAX;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MAX;
	static volatile int32_t t67 = 7727;

	t67 = ((x341/(x342&x343))%x344);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x345 = 2478;
	volatile int8_t x346 = -6;
	int8_t x348 = INT8_MAX;

	t68 = ((x345/(x346&x347))%x348);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x349 = 2U;
	static volatile uint32_t x350 = UINT32_MAX;
	static int32_t x351 = -1;
	uint8_t x352 = 60U;
	uint32_t t69 = 8990757U;

	t69 = ((x349/(x350&x351))%x352);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x353 = -1LL;
	static int64_t x354 = 11LL;
	volatile int64_t x355 = -394LL;
	volatile int64_t t70 = 378785004163561409LL;

	t70 = ((x353/(x354&x355))%x356);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = INT8_MAX;
	volatile uint16_t x362 = 3U;
	int32_t x364 = -1;
	volatile uint64_t t71 = 3559127826146670424LLU;

	t71 = ((x361/(x362&x363))%x364);

	if (t71 != 42LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	uint16_t x372 = 6U;
	static int64_t t72 = 48764LL;

	t72 = ((x369/(x370&x371))%x372);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = INT16_MIN;
	static int16_t x374 = -1;
	volatile uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MAX;
	uint64_t t73 = 399933585LLU;

	t73 = ((x373/(x374&x375))%x376);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x381 = INT16_MIN;
	static uint16_t x382 = UINT16_MAX;
	int8_t x383 = 4;
	volatile int32_t t74 = 986020;

	t74 = ((x381/(x382&x383))%x384);

	if (t74 != -8192) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	static int8_t x388 = -15;
	volatile uint32_t t75 = 2362299U;

	t75 = ((x385/(x386&x387))%x388);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x389 = INT32_MAX;
	static int8_t x390 = 46;
	int32_t x392 = INT32_MIN;
	int32_t t76 = -16023;

	t76 = ((x389/(x390&x391))%x392);

	if (t76 != 46684427) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = 114914880U;
	int64_t x396 = -471694116830915LL;
	int64_t t77 = 30295318904024LL;

	t77 = ((x393/(x394&x395))%x396);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x401 = -1;
	int8_t x402 = INT8_MIN;
	int32_t x404 = 1416051;
	uint32_t t78 = 38015U;

	t78 = ((x401/(x402&x403))%x404);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	volatile uint32_t x412 = UINT32_MAX;
	uint64_t t79 = 24252812050LLU;

	t79 = ((x409/(x410&x411))%x412);

	if (t79 != 2147549184LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x414 = UINT32_MAX;
	uint64_t x415 = 893LLU;
	volatile int32_t x416 = 38;
	uint64_t t80 = 1036489696911808LLU;

	t80 = ((x413/(x414&x415))%x416);

	if (t80 != 29LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x417 = 0U;
	static int64_t x420 = -365062LL;
	uint64_t t81 = 2LLU;

	t81 = ((x417/(x418&x419))%x420);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = INT64_MIN;
	volatile int64_t x427 = INT64_MIN;
	uint16_t x428 = UINT16_MAX;

	t82 = ((x425/(x426&x427))%x428);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x429 = 65U;
	int8_t x430 = INT8_MIN;
	volatile int32_t x431 = INT32_MAX;
	int32_t t83 = 0;

	t83 = ((x429/(x430&x431))%x432);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x433 = INT64_MIN;
	int8_t x435 = INT8_MAX;
	volatile int32_t x436 = INT32_MAX;
	volatile int64_t t84 = 6465135577424LL;

	t84 = ((x433/(x434&x435))%x436);

	if (t84 != -304367761LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x437 = INT8_MAX;
	int8_t x438 = -1;
	volatile uint32_t x439 = UINT32_MAX;
	int8_t x440 = 1;
	volatile uint32_t t85 = 43688U;

	t85 = ((x437/(x438&x439))%x440);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x445 = 1027U;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = -1319567487954LL;

	t86 = ((x445/(x446&x447))%x448);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x466 = INT16_MIN;
	volatile int8_t x467 = INT8_MIN;
	static uint8_t x468 = UINT8_MAX;

	t87 = ((x465/(x466&x467))%x468);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x477 = 191;
	int64_t x478 = -1LL;
	volatile int64_t x479 = -1LL;
	volatile int64_t t88 = -120LL;

	t88 = ((x477/(x478&x479))%x480);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x482 = 3584275;
	volatile int8_t x483 = 1;
	int8_t x484 = -1;
	int32_t t89 = 136735;

	t89 = ((x481/(x482&x483))%x484);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x489 = INT16_MAX;
	int32_t x490 = INT32_MAX;
	static volatile uint32_t x492 = UINT32_MAX;
	volatile uint32_t t90 = 930U;

	t90 = ((x489/(x490&x491))%x492);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x497 = UINT8_MAX;
	int64_t x498 = INT64_MAX;
	static int16_t x499 = -1;
	volatile int64_t t91 = -66726LL;

	t91 = ((x497/(x498&x499))%x500);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x501 = INT16_MIN;
	int64_t x502 = -295167617LL;
	uint32_t x503 = UINT32_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int64_t t92 = -61LL;

	t92 = ((x501/(x502&x503))%x504);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x505 = -2;
	volatile int16_t x507 = -1;
	volatile int32_t x508 = INT32_MIN;

	t93 = ((x505/(x506&x507))%x508);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x513 = INT32_MAX;
	int8_t x514 = INT8_MIN;
	int64_t x515 = INT64_MAX;
	int64_t t94 = -8016826212LL;

	t94 = ((x513/(x514&x515))%x516);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x525 = UINT64_MAX;
	uint16_t x527 = 5U;
	static int32_t x528 = INT32_MAX;
	volatile uint64_t t95 = 880914411014018LLU;

	t95 = ((x525/(x526&x527))%x528);

	if (t95 != 429496730LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x542 = INT16_MIN;
	volatile int32_t x544 = INT32_MAX;
	static int32_t t96 = 29;

	t96 = ((x541/(x542&x543))%x544);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x545 = UINT16_MAX;
	int32_t x546 = -28;
	int16_t x548 = INT16_MAX;
	static volatile int64_t t97 = -22LL;

	t97 = ((x545/(x546&x547))%x548);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x549 = UINT64_MAX;
	int32_t x550 = -5349880;
	int16_t x551 = INT16_MIN;
	volatile uint64_t x552 = UINT64_MAX;
	volatile uint64_t t98 = 436147LLU;

	t98 = ((x549/(x550&x551))%x552);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x553 = 24805564865894LLU;
	volatile uint32_t x554 = 1321329763U;
	int32_t x555 = -6577;
	uint16_t x556 = 1U;

	t99 = ((x553/(x554&x555))%x556);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

