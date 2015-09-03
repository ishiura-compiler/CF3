#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 812636749785397511LLU;
volatile int16_t x10 = -3221;
uint32_t x11 = UINT32_MAX;
volatile int32_t x18 = INT32_MAX;
uint32_t x27 = 136U;
uint16_t x33 = UINT16_MAX;
static uint8_t x41 = 1U;
static uint64_t t7 = 3574LLU;
uint64_t t8 = 7645087609LLU;
volatile uint32_t t9 = 11U;
volatile int32_t x55 = INT32_MAX;
uint64_t x56 = 99110178651888LLU;
uint16_t x65 = UINT16_MAX;
static int64_t x70 = -1LL;
int64_t x71 = INT64_MIN;
int32_t x76 = INT32_MIN;
volatile uint64_t t15 = 30995192809LLU;
volatile uint32_t x93 = UINT32_MAX;
int64_t x96 = -44940370LL;
static volatile int64_t t16 = -26569LL;
int32_t x100 = -1;
uint8_t x108 = 17U;
int16_t x109 = -770;
int8_t x110 = INT8_MAX;
static uint32_t x115 = UINT32_MAX;
int64_t t21 = 120766096914807929LL;
volatile int32_t x119 = -102969;
volatile uint32_t t22 = 1933854U;
int64_t x122 = INT64_MIN;
volatile uint32_t t25 = 6600U;
volatile uint8_t x139 = UINT8_MAX;
int8_t x144 = INT8_MIN;
int8_t x152 = INT8_MIN;
int32_t t29 = -18770763;
int64_t x160 = -1LL;
uint64_t x165 = 27385987528597LLU;
uint32_t x166 = 4U;
uint8_t x168 = UINT8_MAX;
static volatile uint64_t t32 = 133807543773287919LLU;
int8_t x177 = INT8_MIN;
int8_t x180 = INT8_MIN;
static volatile int32_t x187 = INT32_MIN;
int64_t t35 = -3210222477662LL;
int8_t x189 = INT8_MAX;
static uint8_t x192 = UINT8_MAX;
volatile uint32_t t36 = 2U;
volatile uint16_t x194 = 30U;
volatile int64_t x196 = 1690LL;
volatile int64_t x210 = INT64_MIN;
int16_t x215 = 7;
int64_t x218 = INT64_MAX;
static int64_t t42 = -9LL;
int64_t x227 = 2LL;
uint32_t x228 = UINT32_MAX;
uint64_t t43 = 26LLU;
static int32_t t44 = 440399;
volatile int64_t x235 = INT64_MIN;
uint16_t x236 = 1003U;
int64_t x238 = -1291867933740LL;
static volatile uint32_t x239 = 85282166U;
int8_t x240 = -1;
uint64_t t48 = 23LLU;
int16_t x264 = INT16_MIN;
uint64_t x266 = 189898080564437LLU;
int16_t x277 = INT16_MIN;
int64_t x281 = -3984LL;
static int64_t x282 = 31LL;
int8_t x294 = -49;
int8_t x295 = INT8_MIN;
volatile int8_t x297 = 1;
uint8_t x299 = 1U;
volatile uint64_t t60 = 5169525228497LLU;
int64_t x305 = -1376LL;
int64_t x309 = INT64_MIN;
uint32_t x311 = 190U;
static int64_t x318 = -3871LL;
volatile int16_t x321 = -1;
uint16_t x326 = UINT16_MAX;
int16_t x331 = INT16_MIN;
int64_t x341 = INT64_MIN;
volatile int64_t x351 = INT64_MAX;
uint64_t x352 = 1058058065827LLU;
volatile int16_t x357 = -1;
static int32_t x374 = 102;
uint64_t x375 = 3649048992LLU;
uint64_t t75 = 15817LLU;
int32_t x392 = INT32_MIN;
volatile uint64_t t80 = 15LLU;
int32_t x403 = INT32_MAX;
volatile uint64_t t84 = 104153848361158618LLU;
int32_t x421 = INT32_MIN;
static int32_t x425 = -9746905;
int32_t t88 = 278;
uint16_t x442 = UINT16_MAX;
int64_t x444 = -253083890049123LL;
int16_t x448 = INT16_MIN;
int32_t x459 = INT32_MIN;
uint32_t x460 = 6730U;
static uint64_t t93 = 67373887080650LLU;
volatile uint64_t x466 = UINT64_MAX;
uint64_t t94 = 1262812519409417887LLU;
int8_t x469 = INT8_MAX;
uint16_t x470 = 9U;
static volatile uint64_t t95 = 92709LLU;
uint32_t x478 = 1U;
volatile uint64_t x481 = 3629476183079961067LLU;
uint16_t x488 = 16202U;
uint64_t t99 = 5486059172LLU;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	volatile uint64_t x2 = 75997141492LLU;
	volatile int8_t x4 = INT8_MIN;
	uint64_t t0 = 2LLU;

	t0 = (x1%(x2%(x3+x4)));

	if (t0 != 21772778183LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = -80213;
	int32_t x6 = INT32_MAX;
	volatile int8_t x7 = -1;
	uint32_t x8 = 28U;
	static volatile uint32_t t1 = 78959349U;

	t1 = (x5%(x6%(x7+x8)));

	if (t1 != 3U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	uint16_t x12 = 73U;
	uint32_t t2 = 229307709U;

	t2 = (x9%(x10%(x11+x12)));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x17 = 1501198U;
	uint64_t x19 = 538LLU;
	static int64_t x20 = -3LL;
	uint64_t t3 = 399430568LLU;

	t3 = (x17%(x18%(x19+x20)));

	if (t3 != 63LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	int64_t x26 = INT64_MAX;
	uint8_t x28 = UINT8_MAX;
	int64_t t4 = 112541397LL;

	t4 = (x25%(x26%(x27+x28)));

	if (t4 != -8LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -5LL;
	uint16_t x30 = 60U;
	int8_t x31 = -3;
	int8_t x32 = INT8_MIN;
	int64_t t5 = -180450099LL;

	t5 = (x29%(x30%(x31+x32)));

	if (t5 != -5LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = INT32_MIN;
	int64_t x35 = -1LL;
	static uint16_t x36 = UINT16_MAX;
	int64_t t6 = -28349330LL;

	t6 = (x33%(x34%(x35+x36)));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x42 = 9036409017206533LLU;
	static int8_t x43 = -1;
	volatile int8_t x44 = INT8_MIN;

	t7 = (x41%(x42%(x43+x44)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -783121LL;
	uint64_t x46 = 194845285186LLU;
	int64_t x47 = INT64_MIN;
	volatile uint64_t x48 = 2154439959626040LLU;

	t8 = (x45%(x46%(x47+x48)));

	if (t8 != 123375871323LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x49 = UINT8_MAX;
	static int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MAX;
	uint32_t x52 = 11086U;

	t9 = (x49%(x50%(x51+x52)));

	if (t9 != 255U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MIN;
	uint64_t t10 = 254355157338LLU;

	t10 = (x53%(x54%(x55+x56)));

	if (t10 != 3322921514708LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x66 = -17153536228353LL;
	volatile int64_t x67 = -1LL;
	int64_t x68 = 1920349LL;
	volatile int64_t t11 = -53779LL;

	t11 = (x65%(x66%(x67+x68)));

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x69 = 0U;
	static int32_t x72 = 3141;
	static int64_t t12 = 425468458703383LL;

	t12 = (x69%(x70%(x71+x72)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = INT32_MAX;
	int32_t x74 = INT32_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	uint64_t t13 = 49874400755279LLU;

	t13 = (x73%(x74%(x75+x76)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x85 = 75892269LLU;
	volatile uint16_t x86 = 15774U;
	static uint64_t x87 = 58483417953685LLU;
	static int64_t x88 = INT64_MAX;
	uint64_t t14 = 6386LLU;

	t14 = (x85%(x86%(x87+x88)));

	if (t14 != 3555LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x89 = 6563254847175710161LLU;
	volatile int64_t x90 = -1LL;
	volatile int16_t x91 = INT16_MAX;
	uint16_t x92 = UINT16_MAX;

	t15 = (x89%(x90%(x91+x92)));

	if (t15 != 6563254847175710161LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MAX;

	t16 = (x93%(x94%(x95+x96)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x97 = UINT16_MAX;
	static uint16_t x98 = 9418U;
	int64_t x99 = -1122962036LL;
	volatile int64_t t17 = 7023839908091LL;

	t17 = (x97%(x98%(x99+x100)));

	if (t17 != 9027LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 552816464LLU;
	int16_t x102 = -1;
	static volatile uint32_t x103 = 118077U;
	static int32_t x104 = 0;
	uint64_t t18 = 1636011181449917LLU;

	t18 = (x101%(x102%(x103+x104)));

	if (t18 != 2039LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MAX;
	static int8_t x106 = -10;
	uint64_t x107 = 17660090498016215LLU;
	volatile uint64_t t19 = 9LLU;

	t19 = (x105%(x106%(x107+x108)));

	if (t19 != 32767LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x111 = INT64_MIN;
	static int16_t x112 = 4306;
	static volatile int64_t t20 = -6074164932635355LL;

	t20 = (x109%(x110%(x111+x112)));

	if (t20 != -8LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = 0;
	int64_t x114 = INT64_MIN;
	int64_t x116 = -1LL;

	t21 = (x113%(x114%(x115+x116)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = -1;
	uint32_t x120 = UINT32_MAX;

	t22 = (x117%(x118%(x119+x120)));

	if (t22 != 127U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x121 = 61U;
	int16_t x123 = INT16_MIN;
	int64_t x124 = 182394060655700483LL;
	volatile int64_t t23 = 7491LL;

	t23 = (x121%(x122%(x123+x124)));

	if (t23 != 61LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x125 = UINT16_MAX;
	int32_t x126 = -1;
	uint8_t x127 = 7U;
	volatile int8_t x128 = -13;
	int32_t t24 = -140843873;

	t24 = (x125%(x126%(x127+x128)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x129 = UINT16_MAX;
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = 1907277554U;

	t25 = (x129%(x130%(x131+x132)));

	if (t25 != 65535U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x137 = 13U;
	uint16_t x138 = UINT16_MAX;
	uint8_t x140 = UINT8_MAX;
	static uint32_t t26 = 516U;

	t26 = (x137%(x138%(x139+x140)));

	if (t26 != 13U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = -1;
	volatile uint32_t x142 = 90U;
	uint64_t x143 = UINT64_MAX;
	volatile uint64_t t27 = 9735651LLU;

	t27 = (x141%(x142%(x143+x144)));

	if (t27 != 15LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 62U;
	int8_t x146 = -1;
	static int8_t x147 = INT8_MAX;
	uint16_t x148 = UINT16_MAX;
	static volatile int32_t t28 = 402814;

	t28 = (x145%(x146%(x147+x148)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = -1;
	static int8_t x150 = -3;
	int8_t x151 = 2;

	t29 = (x149%(x150%(x151+x152)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = INT64_MIN;
	volatile int16_t x158 = -28;
	static int32_t x159 = INT32_MIN;
	int64_t t30 = -32079283125961084LL;

	t30 = (x157%(x158%(x159+x160)));

	if (t30 != -8LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x167 = -1;
	uint64_t t31 = 596349526078LLU;

	t31 = (x165%(x166%(x167+x168)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = -1;
	int64_t x170 = -68494489613015LL;
	uint64_t x171 = 3469435707099432LLU;
	uint8_t x172 = 10U;

	t32 = (x169%(x170%(x171+x172)));

	if (t32 != 507880892936681LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MIN;
	int32_t x175 = 306916685;
	int16_t x176 = INT16_MIN;
	volatile int32_t t33 = 56301015;

	t33 = (x173%(x174%(x175+x176)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x178 = 13;
	uint64_t x179 = 10042953LLU;
	volatile uint64_t t34 = 2147006703152LLU;

	t34 = (x177%(x178%(x179+x180)));

	if (t34 != 5LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x185 = -1;
	int8_t x186 = -1;
	int64_t x188 = 378789LL;

	t35 = (x185%(x186%(x187+x188)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x190 = 364890U;
	static int16_t x191 = INT16_MIN;

	t36 = (x189%(x190%(x191+x192)));

	if (t36 != 127U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = INT16_MAX;
	uint32_t x195 = UINT32_MAX;
	int64_t t37 = -5776LL;

	t37 = (x193%(x194%(x195+x196)));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x201 = INT8_MIN;
	static int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MAX;
	volatile int16_t x204 = 7;
	static volatile int64_t t38 = -43936933303621LL;

	t38 = (x201%(x202%(x203+x204)));

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x205 = INT8_MIN;
	uint32_t x206 = 61U;
	static int32_t x207 = -1;
	int64_t x208 = -1LL;
	int64_t t39 = -29079131118991281LL;

	t39 = (x205%(x206%(x207+x208)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = 11U;
	int16_t x211 = -16300;
	uint16_t x212 = 3U;
	int64_t t40 = -680122LL;

	t40 = (x209%(x210%(x211+x212)));

	if (t40 != 11LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = -285423681800996699LL;
	volatile int8_t x214 = INT8_MAX;
	int64_t x216 = -1LL;
	static volatile int64_t t41 = 2434966132167594894LL;

	t41 = (x213%(x214%(x215+x216)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x217 = INT64_MIN;
	int8_t x219 = 8;
	int8_t x220 = INT8_MIN;

	t42 = (x217%(x218%(x219+x220)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = UINT16_MAX;

	t43 = (x225%(x226%(x227+x228)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x229 = -1;
	int8_t x230 = 8;
	int32_t x231 = -1;
	int8_t x232 = INT8_MIN;

	t44 = (x229%(x230%(x231+x232)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = -2016;
	int32_t x234 = INT32_MAX;
	int64_t t45 = -1LL;

	t45 = (x233%(x234%(x235+x236)));

	if (t45 != -2016LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x237 = 707LLU;
	uint64_t t46 = 91LLU;

	t46 = (x237%(x238%(x239+x240)));

	if (t46 != 707LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = -1LL;
	static uint32_t x242 = 328U;
	uint8_t x243 = 0U;
	uint16_t x244 = 8047U;
	volatile int64_t t47 = -9LL;

	t47 = (x241%(x242%(x243+x244)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x249 = 19781U;
	int32_t x250 = 166767;
	uint64_t x251 = 703098800LLU;
	uint8_t x252 = UINT8_MAX;

	t48 = (x249%(x250%(x251+x252)));

	if (t48 != 19781LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = -1;
	uint8_t x254 = 3U;
	int32_t x255 = INT32_MAX;
	volatile int64_t x256 = INT64_MIN;
	int64_t t49 = 16712563LL;

	t49 = (x253%(x254%(x255+x256)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = INT64_MIN;
	volatile int32_t x258 = INT32_MIN;
	int8_t x259 = 32;
	int16_t x260 = INT16_MAX;
	static int64_t t50 = -109LL;

	t50 = (x257%(x258%(x259+x260)));

	if (t50 != -1062LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = -1;
	int64_t x262 = INT64_MAX;
	int32_t x263 = -1;
	int64_t t51 = -929030396LL;

	t51 = (x261%(x262%(x263+x264)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = 12544677;
	static uint16_t x267 = 382U;
	static volatile int8_t x268 = INT8_MAX;
	volatile uint64_t t52 = 1235042327441727075LLU;

	t52 = (x265%(x266%(x267+x268)));

	if (t52 != 12LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x269 = 2U;
	int32_t x270 = INT32_MIN;
	int32_t x271 = 11780;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t53 = 6694674666LL;

	t53 = (x269%(x270%(x271+x272)));

	if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = UINT64_MAX;
	volatile uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	int8_t x276 = 47;
	volatile uint64_t t54 = 186408517LLU;

	t54 = (x273%(x274%(x275+x276)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x278 = UINT16_MAX;
	volatile int16_t x279 = -1;
	uint64_t x280 = 269219197832015LLU;
	uint64_t t55 = 319882842LLU;

	t55 = (x277%(x278%(x279+x280)));

	if (t55 != 32768LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x283 = UINT8_MAX;
	static int64_t x284 = -57372560830155LL;
	int64_t t56 = -2134762767LL;

	t56 = (x281%(x282%(x283+x284)));

	if (t56 != -16LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x289 = INT32_MIN;
	uint64_t x290 = UINT64_MAX;
	int64_t x291 = 1051693331830LL;
	static int8_t x292 = INT8_MAX;
	volatile uint64_t t57 = 49207255LLU;

	t57 = (x289%(x290%(x291+x292)));

	if (t57 != 662903757068LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x293 = UINT8_MAX;
	static uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t58 = 107LLU;

	t58 = (x293%(x294%(x295+x296)));

	if (t58 != 15LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x298 = 364U;
	int16_t x300 = -615;
	uint32_t t59 = 93U;

	t59 = (x297%(x298%(x299+x300)));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = 0;
	volatile int32_t x302 = 183482497;
	volatile uint64_t x303 = 7074511918508221618LLU;
	int64_t x304 = -14LL;

	t60 = (x301%(x302%(x303+x304)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x306 = UINT64_MAX;
	static int8_t x307 = INT8_MAX;
	static volatile uint8_t x308 = 2U;
	volatile uint64_t t61 = 9482542923774906LLU;

	t61 = (x305%(x306%(x307+x308)));

	if (t61 != 26LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x310 = -1;
	int32_t x312 = INT32_MAX;
	int64_t t62 = 1005645102800268162LL;

	t62 = (x309%(x310%(x311+x312)));

	if (t62 != -72200LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x313 = INT32_MIN;
	volatile int64_t x314 = INT64_MAX;
	volatile int8_t x315 = INT8_MIN;
	volatile uint32_t x316 = 297475019U;
	static int64_t t63 = 55187691589LL;

	t63 = (x313%(x314%(x315+x316)));

	if (t63 != -88080092LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x317 = 6271005LLU;
	static int16_t x319 = -179;
	int8_t x320 = INT8_MAX;
	volatile uint64_t t64 = 120142120022110LLU;

	t64 = (x317%(x318%(x319+x320)));

	if (t64 != 6271005LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x322 = 1;
	int8_t x323 = -1;
	int8_t x324 = INT8_MAX;
	int32_t t65 = -571;

	t65 = (x321%(x322%(x323+x324)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x325 = 2U;
	volatile uint16_t x327 = UINT16_MAX;
	int32_t x328 = 7522;
	volatile int32_t t66 = -188;

	t66 = (x325%(x326%(x327+x328)));

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x329 = INT32_MIN;
	int64_t x330 = 7884209LL;
	static uint8_t x332 = 4U;
	volatile int64_t t67 = -2387086228750328781LL;

	t67 = (x329%(x330%(x331+x332)));

	if (t67 != -15799LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x337 = -14064LL;
	int64_t x338 = -1LL;
	uint32_t x339 = 10215755U;
	uint16_t x340 = 694U;
	volatile int64_t t68 = -15557766LL;

	t68 = (x337%(x338%(x339+x340)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x342 = INT32_MIN;
	uint16_t x343 = 61U;
	uint32_t x344 = UINT32_MAX;
	static volatile int64_t t69 = -5546206LL;

	t69 = (x341%(x342%(x343+x344)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x345 = INT32_MIN;
	static int16_t x346 = -1;
	uint16_t x347 = 3U;
	int64_t x348 = INT64_MIN;
	int64_t t70 = 169618777898LL;

	t70 = (x345%(x346%(x347+x348)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x349 = -9598LL;
	uint8_t x350 = 1U;
	volatile uint64_t t71 = 56853490959337343LLU;

	t71 = (x349%(x350%(x351+x352)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = INT8_MIN;
	int8_t x354 = 1;
	int64_t x355 = INT64_MIN;
	static uint64_t x356 = UINT64_MAX;
	static volatile uint64_t t72 = 8330429574338LLU;

	t72 = (x353%(x354%(x355+x356)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x358 = INT32_MIN;
	static uint32_t x359 = 52U;
	int32_t x360 = 38002650;
	volatile uint32_t t73 = 12521U;

	t73 = (x357%(x358%(x359+x360)));

	if (t73 != 3188703U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int8_t x362 = -1;
	int16_t x363 = -33;
	static volatile int32_t x364 = -1;
	static volatile uint64_t t74 = 4533296633976720010LLU;

	t74 = (x361%(x362%(x363+x364)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x373 = 2LLU;
	int16_t x376 = INT16_MAX;

	t75 = (x373%(x374%(x375+x376)));

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x377 = INT64_MIN;
	static int64_t x378 = INT64_MAX;
	static uint64_t x379 = UINT64_MAX;
	static uint16_t x380 = 131U;
	volatile uint64_t t76 = 1092591266888546LLU;

	t76 = (x377%(x378%(x379+x380)));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x381 = -1;
	int32_t x382 = INT32_MAX;
	int32_t x383 = 31;
	int8_t x384 = -1;
	static int32_t t77 = 934357402;

	t77 = (x381%(x382%(x383+x384)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x385 = INT64_MAX;
	int64_t x386 = INT64_MAX;
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = INT8_MAX;
	static volatile int64_t t78 = -5LL;

	t78 = (x385%(x386%(x387+x388)));

	if (t78 != 7LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x389 = INT32_MIN;
	static uint64_t x390 = 28LLU;
	uint8_t x391 = UINT8_MAX;
	uint64_t t79 = 1156999177793612735LLU;

	t79 = (x389%(x390%(x391+x392)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x393 = -1LL;
	uint64_t x394 = UINT64_MAX;
	int16_t x395 = 28;
	int16_t x396 = 54;

	t80 = (x393%(x394%(x395+x396)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x401 = 5LL;
	int64_t x402 = INT64_MIN;
	volatile int16_t x404 = -1;
	volatile int64_t t81 = -5426283315LL;

	t81 = (x401%(x402%(x403+x404)));

	if (t81 != 5LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x409 = 15U;
	int16_t x410 = INT16_MAX;
	uint64_t x411 = 755173172269751LLU;
	volatile int32_t x412 = INT32_MIN;
	volatile uint64_t t82 = 76171880010869024LLU;

	t82 = (x409%(x410%(x411+x412)));

	if (t82 != 15LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x413 = INT64_MIN;
	volatile int16_t x414 = -105;
	uint16_t x415 = UINT16_MAX;
	volatile int8_t x416 = 14;
	static int64_t t83 = -60819237307805542LL;

	t83 = (x413%(x414%(x415+x416)));

	if (t83 != -8LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x417 = INT8_MIN;
	static uint64_t x418 = UINT64_MAX;
	int8_t x419 = -1;
	volatile int32_t x420 = -56065;

	t84 = (x417%(x418%(x419+x420)));

	if (t84 != 29133LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x422 = INT8_MAX;
	static volatile uint16_t x423 = 105U;
	uint8_t x424 = 108U;
	static int32_t t85 = -3593;

	t85 = (x421%(x422%(x423+x424)));

	if (t85 != -8) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x426 = INT64_MIN;
	volatile uint8_t x427 = 4U;
	int16_t x428 = -94;
	int64_t t86 = 27480241455087584LL;

	t86 = (x425%(x426%(x427+x428)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x429 = 549;
	int64_t x430 = INT64_MIN;
	volatile int64_t x431 = INT64_MIN;
	static uint16_t x432 = UINT16_MAX;
	int64_t t87 = 435837885LL;

	t87 = (x429%(x430%(x431+x432)));

	if (t87 != 549LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x433 = INT32_MIN;
	int32_t x434 = -136213;
	uint8_t x435 = 0U;
	int32_t x436 = 4;

	t88 = (x433%(x434%(x435+x436)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x437 = 0U;
	int16_t x438 = INT16_MIN;
	int16_t x439 = -7044;
	int16_t x440 = 3574;
	volatile int32_t t89 = -1;

	t89 = (x437%(x438%(x439+x440)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x441 = 1196;
	static int32_t x443 = 48315488;
	volatile int64_t t90 = 881420863LL;

	t90 = (x441%(x442%(x443+x444)));

	if (t90 != 1196LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x445 = -1;
	int16_t x446 = 14;
	static int32_t x447 = -1;
	volatile int32_t t91 = 956;

	t91 = (x445%(x446%(x447+x448)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x453 = 47629594;
	static int64_t x454 = -273311516145614LL;
	static int32_t x455 = 4171430;
	int64_t x456 = 6303LL;
	int64_t t92 = -1LL;

	t92 = (x453%(x454%(x455+x456)));

	if (t92 != 2326186LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x457 = -195;
	uint64_t x458 = UINT64_MAX;

	t93 = (x457%(x458%(x459+x460)));

	if (t93 != 118018162LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x465 = INT32_MIN;
	int8_t x467 = 3;
	volatile int8_t x468 = -1;

	t94 = (x465%(x466%(x467+x468)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x471 = UINT64_MAX;
	static int64_t x472 = INT64_MAX;

	t95 = (x469%(x470%(x471+x472)));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x473 = -3;
	int8_t x474 = INT8_MAX;
	int64_t x475 = INT64_MIN;
	static uint32_t x476 = UINT32_MAX;
	volatile int64_t t96 = -1585LL;

	t96 = (x473%(x474%(x475+x476)));

	if (t96 != -3LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x477 = 1811167U;
	volatile int16_t x479 = INT16_MAX;
	static volatile int8_t x480 = -3;
	volatile uint32_t t97 = 220U;

	t97 = (x477%(x478%(x479+x480)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x482 = INT16_MIN;
	static int32_t x483 = INT32_MIN;
	static volatile int64_t x484 = -1LL;
	uint64_t t98 = 509716192LLU;

	t98 = (x481%(x482%(x483+x484)));

	if (t98 != 3629476183079961067LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = INT64_MIN;
	int64_t x486 = 3594218487119593LL;
	uint64_t x487 = 49975254LLU;

	t99 = (x485%(x486%(x487+x488)));

	if (t99 != 3731864LLU) { NG(); } else { ; }
	
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

