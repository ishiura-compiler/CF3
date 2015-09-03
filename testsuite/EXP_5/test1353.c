#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
int16_t x8 = -14907;
int64_t x13 = INT64_MAX;
int8_t x14 = INT8_MIN;
uint16_t x33 = UINT16_MAX;
int32_t x42 = -1;
int32_t x44 = -38917;
uint16_t x47 = 40U;
uint64_t t9 = 2726LLU;
static int16_t x54 = INT16_MIN;
int32_t t11 = -59600844;
static int8_t x60 = INT8_MIN;
uint64_t x61 = 126991073LLU;
int8_t x66 = -2;
int64_t x68 = INT64_MIN;
static int64_t x70 = INT64_MIN;
int64_t t15 = -2238743307806905206LL;
uint64_t x76 = 203220016LLU;
uint64_t t16 = 44904436560LLU;
uint32_t x77 = 16868098U;
uint16_t x78 = UINT16_MAX;
int16_t x81 = 298;
uint32_t x85 = UINT32_MAX;
int64_t x97 = -1LL;
static volatile int64_t t21 = 863274029534850LL;
static volatile int8_t x120 = INT8_MIN;
static uint32_t t25 = 18878294U;
static volatile int64_t x130 = INT64_MIN;
int32_t x131 = 13857769;
static volatile int32_t t28 = 42;
volatile int16_t x138 = INT16_MIN;
uint8_t x147 = 77U;
volatile uint32_t x152 = 11663307U;
static volatile uint32_t t31 = 7834U;
static volatile uint8_t x154 = 1U;
uint64_t t34 = 37868LLU;
static int32_t t35 = 4;
uint64_t x174 = UINT64_MAX;
volatile uint16_t x180 = UINT16_MAX;
int8_t x186 = -26;
static int8_t x189 = 1;
uint32_t x190 = 86582U;
static uint8_t x191 = 1U;
int32_t x192 = INT32_MIN;
volatile int32_t t39 = -22541455;
int16_t x196 = -1;
volatile int32_t t40 = -34010;
int16_t x200 = -196;
volatile uint64_t t42 = 0LLU;
int8_t x207 = 0;
int8_t x209 = INT8_MAX;
int16_t x215 = -1;
static int64_t t45 = -2342912LL;
uint16_t x233 = UINT16_MAX;
int16_t x235 = INT16_MAX;
volatile int32_t t48 = 0;
int64_t t49 = 5LL;
static int8_t x251 = INT8_MAX;
volatile int32_t t52 = -6591333;
int32_t x255 = -63545;
int32_t x262 = INT32_MAX;
volatile int64_t t54 = 69403252377441LL;
int32_t x266 = INT32_MAX;
volatile int32_t t55 = -85267;
static int16_t x271 = -49;
uint8_t x281 = 0U;
volatile int64_t t59 = 0LL;
int64_t x286 = INT64_MIN;
int16_t x288 = INT16_MIN;
static volatile int32_t t60 = -140255;
uint32_t x289 = 2U;
static volatile uint16_t x290 = 15U;
int8_t x309 = -1;
int32_t x313 = -1;
static int64_t x322 = INT64_MIN;
uint32_t x331 = 7U;
int8_t x332 = INT8_MAX;
int32_t t69 = INT32_MIN;
int16_t x343 = INT16_MIN;
static volatile uint32_t x349 = 700392752U;
static uint8_t x355 = 0U;
int64_t x367 = 1714522078274LL;
int32_t x368 = -2505;
uint8_t x373 = 2U;
int8_t x374 = 23;
static uint32_t x377 = 17569U;
static volatile uint8_t x378 = 0U;
static int64_t x383 = INT64_MAX;
uint32_t x389 = 30548521U;
static int16_t x393 = -20;
uint64_t x394 = 21876849LLU;
int64_t x403 = 18484642382LL;
int64_t x406 = INT64_MAX;
static int32_t x410 = INT32_MAX;
static uint8_t x412 = 12U;
int32_t x414 = INT32_MIN;
static int32_t x434 = -1;
int16_t x435 = INT16_MIN;
uint32_t x437 = UINT32_MAX;
static int8_t x444 = INT8_MAX;
volatile int32_t t95 = -81;
int32_t x454 = INT32_MAX;
int8_t x478 = 14;
static uint64_t x482 = UINT64_MAX;
int8_t x483 = INT8_MIN;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	uint16_t x3 = 23U;
	static uint64_t x4 = 33250140718LLU;
	volatile uint64_t t0 = 9111453LLU;

	t0 = (x1+((x2<x3)+x4));

	if (t0 != 33250140717LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	volatile int32_t t1 = -1761398;

	t1 = (x5+((x6<x7)+x8));

	if (t1 != -47674) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -14;
	uint32_t x10 = 686853U;
	static int64_t x11 = -123008996956780469LL;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 766663;

	t2 = (x9+((x10<x11)+x12));

	if (t2 != 65521) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 4181LL;

	t3 = (x13+((x14<x15)+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 544635577868LLU;
	int64_t x18 = 1LL;
	int32_t x19 = INT32_MIN;
	int16_t x20 = -1;
	volatile uint64_t t4 = 104LLU;

	t4 = (x17+((x18<x19)+x20));

	if (t4 != 544635577867LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 304454468;
	int64_t x22 = -73320096994390738LL;
	static uint64_t x23 = UINT64_MAX;
	static volatile uint16_t x24 = 183U;
	int32_t t5 = -1;

	t5 = (x21+((x22<x23)+x24));

	if (t5 != 304454652) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 1;
	int64_t x30 = -1LL;
	int32_t x31 = INT32_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -21;

	t6 = (x29+((x30<x31)+x32));

	if (t6 != -32766) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x34 = UINT8_MAX;
	static int16_t x35 = 12;
	static uint64_t x36 = 1LLU;
	volatile uint64_t t7 = 985LLU;

	t7 = (x33+((x34<x35)+x36));

	if (t7 != 65536LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 202LLU;
	uint8_t x43 = UINT8_MAX;
	uint64_t t8 = 88LLU;

	t8 = (x41+((x42<x43)+x44));

	if (t8 != 18446744073709512902LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	uint64_t x46 = UINT64_MAX;
	int16_t x48 = INT16_MAX;

	t9 = (x45+((x46<x47)+x48));

	if (t9 != 32766LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = 4;
	uint64_t x50 = UINT64_MAX;
	uint64_t x51 = UINT64_MAX;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t10 = 16759999LLU;

	t10 = (x49+((x50<x51)+x52));

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 3U;
	int16_t x55 = INT16_MAX;
	static int16_t x56 = 1;

	t11 = (x53+((x54<x55)+x56));

	if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 27320U;
	int8_t x58 = INT8_MIN;
	static volatile int16_t x59 = INT16_MIN;
	volatile int32_t t12 = -415;

	t12 = (x57+((x58<x59)+x60));

	if (t12 != 27192) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	volatile uint16_t x64 = 28U;
	uint64_t t13 = 370446890LLU;

	t13 = (x61+((x62<x63)+x64));

	if (t13 != 126991101LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x67 = 102;
	int64_t t14 = 30971LL;

	t14 = (x65+((x66<x67)+x68));

	if (t14 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x69 = 60U;
	static int64_t x71 = -6855270999LL;
	int64_t x72 = 68922038LL;

	t15 = (x69+((x70<x71)+x72));

	if (t15 != 68922099LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	uint16_t x75 = 23795U;

	t16 = (x73+((x74<x75)+x76));

	if (t16 != 203220016LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x79 = INT32_MIN;
	static uint64_t x80 = 5852657647888601315LLU;
	uint64_t t17 = 1235474LLU;

	t17 = (x77+((x78<x79)+x80));

	if (t17 != 5852657647905469413LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = 62;
	int64_t x83 = INT64_MIN;
	int64_t x84 = -1LL;
	volatile int64_t t18 = 7LL;

	t18 = (x81+((x82<x83)+x84));

	if (t18 != 297LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = -88LL;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = -333888808LL;
	int64_t t19 = 44463LL;

	t19 = (x85+((x86<x87)+x88));

	if (t19 != 3961078488LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = INT32_MIN;
	static int8_t x90 = INT8_MAX;
	static int8_t x91 = 5;
	static int16_t x92 = INT16_MAX;
	volatile int32_t t20 = 84;

	t20 = (x89+((x90<x91)+x92));

	if (t20 != -2147450881) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x98 = -41LL;
	int64_t x99 = INT64_MIN;
	int32_t x100 = -2957;

	t21 = (x97+((x98<x99)+x100));

	if (t21 != -2958LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 62;
	volatile int16_t x102 = INT16_MAX;
	static volatile int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t22 = 2243047;

	t22 = (x101+((x102<x103)+x104));

	if (t22 != -66) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 162921875U;
	static volatile uint8_t x111 = 7U;
	uint32_t x112 = 1132U;
	uint32_t t23 = 37097553U;

	t23 = (x109+((x110<x111)+x112));

	if (t23 != 1387U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MAX;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = 1070046;
	static volatile int32_t t24 = -127939;

	t24 = (x113+((x114<x115)+x116));

	if (t24 != 1037278) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 2U;
	uint16_t x118 = 2U;
	volatile int16_t x119 = 3099;

	t25 = (x117+((x118<x119)+x120));

	if (t25 != 4294967171U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x121 = -1LL;
	volatile int8_t x122 = 27;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	int64_t t26 = -70047284991LL;

	t26 = (x121+((x122<x123)+x124));

	if (t26 != 32766LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = -27;
	int64_t x128 = -1LL;
	static int64_t t27 = -2010454786561455471LL;

	t27 = (x125+((x126<x127)+x128));

	if (t27 != -32769LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x129 = UINT8_MAX;
	static volatile uint8_t x132 = 2U;

	t28 = (x129+((x130<x131)+x132));

	if (t28 != 258) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x137 = 23295371U;
	volatile uint64_t x139 = UINT64_MAX;
	volatile uint16_t x140 = UINT16_MAX;
	static uint32_t t29 = 489U;

	t29 = (x137+((x138<x139)+x140));

	if (t29 != 23360907U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;
	int32_t t30 = -280474968;

	t30 = (x145+((x146<x147)+x148));

	if (t30 != 98303) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MAX;
	uint64_t x150 = 11094074970493LLU;
	int8_t x151 = INT8_MIN;

	t31 = (x149+((x150<x151)+x152));

	if (t31 != 11696075U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MIN;
	int8_t x155 = -1;
	int16_t x156 = INT16_MAX;
	static volatile int32_t t32 = -22536628;

	t32 = (x153+((x154<x155)+x156));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = INT64_MIN;
	uint16_t x158 = 19523U;
	int8_t x159 = INT8_MAX;
	int64_t x160 = 22218LL;
	volatile int64_t t33 = 4440106743131767LL;

	t33 = (x157+((x158<x159)+x160));

	if (t33 != -9223372036854753590LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x161 = 24877LLU;
	int8_t x162 = -1;
	int16_t x163 = INT16_MIN;
	int8_t x164 = -1;

	t34 = (x161+((x162<x163)+x164));

	if (t34 != 24876LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x169 = -1;
	uint32_t x170 = 20U;
	uint16_t x171 = UINT16_MAX;
	static volatile uint16_t x172 = 7U;

	t35 = (x169+((x170<x171)+x172));

	if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x175 = 7823U;
	static volatile int64_t x176 = INT64_MAX;
	volatile int64_t t36 = -826919LL;

	t36 = (x173+((x174<x175)+x176));

	if (t36 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MAX;
	uint8_t x179 = UINT8_MAX;
	int32_t t37 = -105;

	t37 = (x177+((x178<x179)+x180));

	if (t37 != 65791) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t38 = -16125998;

	t38 = (x185+((x186<x187)+x188));

	if (t38 != 65408) { NG(); } else { ; }
	
}

void f39(void) {


	t39 = (x189+((x190<x191)+x192));

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x193 = 11U;
	int32_t x194 = INT32_MIN;
	volatile int64_t x195 = -1LL;

	t40 = (x193+((x194<x195)+x196));

	if (t40 != 11) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -1;
	int64_t x198 = -8709557219689LL;
	static uint32_t x199 = UINT32_MAX;
	static int32_t t41 = -495020;

	t41 = (x197+((x198<x199)+x200));

	if (t41 != -196) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = -3521;
	int16_t x202 = 14427;
	volatile int64_t x203 = INT64_MIN;
	static uint64_t x204 = 667455919319LLU;

	t42 = (x201+((x202<x203)+x204));

	if (t42 != 667455915798LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = -90434968;
	int8_t x206 = INT8_MIN;
	int8_t x208 = 0;
	int32_t t43 = 22372;

	t43 = (x205+((x206<x207)+x208));

	if (t43 != -90434967) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MIN;
	int64_t x212 = -2116130772808161LL;
	int64_t t44 = 482067421078964880LL;

	t44 = (x209+((x210<x211)+x212));

	if (t44 != -2116130772808034LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MIN;
	uint16_t x214 = 10940U;
	int64_t x216 = INT64_MAX;

	t45 = (x213+((x214<x215)+x216));

	if (t45 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = 2134;
	volatile int32_t x219 = INT32_MAX;
	static int8_t x220 = -19;
	static int32_t t46 = 712;

	t46 = (x217+((x218<x219)+x220));

	if (t46 != 109) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MAX;
	volatile int8_t x228 = INT8_MIN;
	static int32_t t47 = -519697;

	t47 = (x225+((x226<x227)+x228));

	if (t47 != -255) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x234 = INT8_MIN;
	int32_t x236 = INT32_MIN;

	t48 = (x233+((x234<x235)+x236));

	if (t48 != -2147418112) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = 238;
	int64_t x238 = 1449697LL;
	static int64_t x239 = INT64_MAX;
	int64_t x240 = 813887LL;

	t49 = (x237+((x238<x239)+x240));

	if (t49 != 814126LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = INT64_MIN;
	static int64_t x242 = INT64_MIN;
	static uint32_t x243 = 132194985U;
	static uint16_t x244 = 236U;
	static int64_t t50 = -13622520LL;

	t50 = (x241+((x242<x243)+x244));

	if (t50 != -9223372036854775571LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x245 = UINT16_MAX;
	int16_t x246 = -1;
	int16_t x247 = 2032;
	int8_t x248 = 0;
	int32_t t51 = -206;

	t51 = (x245+((x246<x247)+x248));

	if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x249 = INT16_MAX;
	int16_t x250 = 34;
	volatile int16_t x252 = -1;

	t52 = (x249+((x250<x251)+x252));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x253 = -1;
	uint32_t x254 = 54205931U;
	int16_t x256 = -1;
	int32_t t53 = 20096141;

	t53 = (x253+((x254<x255)+x256));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = INT64_MAX;
	uint32_t x263 = 2751U;
	int8_t x264 = -63;

	t54 = (x261+((x262<x263)+x264));

	if (t54 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 5U;
	int64_t x267 = 215566968057852208LL;
	volatile uint16_t x268 = 6678U;

	t55 = (x265+((x266<x267)+x268));

	if (t55 != 6684) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = 419010622305057217LL;
	static uint32_t x270 = 4U;
	volatile int16_t x272 = INT16_MIN;
	int64_t t56 = 346148094LL;

	t56 = (x269+((x270<x271)+x272));

	if (t56 != 419010622305024450LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = -1;
	uint16_t x274 = 4U;
	volatile uint8_t x275 = 30U;
	int16_t x276 = -3;
	volatile int32_t t57 = 1;

	t57 = (x273+((x274<x275)+x276));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = 50057LL;
	volatile uint64_t x278 = UINT64_MAX;
	int32_t x279 = 7848541;
	uint8_t x280 = 7U;
	int64_t t58 = -267194816LL;

	t58 = (x277+((x278<x279)+x280));

	if (t58 != 50064LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x282 = 6508U;
	uint16_t x283 = 53U;
	static int64_t x284 = -1LL;

	t59 = (x281+((x282<x283)+x284));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x285 = INT16_MIN;
	int64_t x287 = INT64_MIN;

	t60 = (x285+((x286<x287)+x288));

	if (t60 != -65536) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x291 = 12761LLU;
	volatile int32_t x292 = INT32_MIN;
	volatile uint32_t t61 = 25782U;

	t61 = (x289+((x290<x291)+x292));

	if (t61 != 2147483651U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x297 = INT64_MAX;
	uint16_t x298 = UINT16_MAX;
	uint8_t x299 = UINT8_MAX;
	static uint8_t x300 = 0U;
	volatile int64_t t62 = INT64_MAX;

	t62 = (x297+((x298<x299)+x300));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x310 = INT64_MIN;
	static int64_t x311 = 20925784109385663LL;
	int8_t x312 = 0;
	volatile int32_t t63 = 91;

	t63 = (x309+((x310<x311)+x312));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x314 = INT64_MAX;
	static int8_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	static uint32_t t64 = 11009U;

	t64 = (x313+((x314<x315)+x316));

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x317 = 508;
	int64_t x318 = -807283688LL;
	int64_t x319 = -1LL;
	int32_t x320 = -1;
	int32_t t65 = 781;

	t65 = (x317+((x318<x319)+x320));

	if (t65 != 508) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 8U;
	static int32_t t66 = 505494065;

	t66 = (x321+((x322<x323)+x324));

	if (t66 != -119) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x325 = -2387002017849LL;
	uint8_t x326 = 2U;
	static int8_t x327 = -1;
	static int64_t x328 = INT64_MAX;
	int64_t t67 = 26691433752LL;

	t67 = (x325+((x326<x327)+x328));

	if (t67 != 9223369649852757958LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = -1;
	int32_t x330 = INT32_MIN;
	int32_t t68 = 26;

	t68 = (x329+((x330<x331)+x332));

	if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x333 = INT32_MIN;
	volatile int64_t x334 = INT64_MIN;
	static uint64_t x335 = 22716697LLU;
	uint16_t x336 = 0U;

	t69 = (x333+((x334<x335)+x336));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = 3353;
	int64_t x338 = INT64_MIN;
	static volatile int32_t x339 = 6;
	uint32_t x340 = 2U;
	volatile uint32_t t70 = 844U;

	t70 = (x337+((x338<x339)+x340));

	if (t70 != 3356U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x341 = INT8_MAX;
	int64_t x342 = -1LL;
	int32_t x344 = INT32_MIN;
	int32_t t71 = -2238472;

	t71 = (x341+((x342<x343)+x344));

	if (t71 != -2147483521) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x350 = 409;
	volatile uint8_t x351 = 6U;
	static uint8_t x352 = UINT8_MAX;
	uint32_t t72 = 14564677U;

	t72 = (x349+((x350<x351)+x352));

	if (t72 != 700393007U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x353 = 2762474LLU;
	volatile int32_t x354 = -8;
	static uint8_t x356 = UINT8_MAX;
	uint64_t t73 = 463770404431545LLU;

	t73 = (x353+((x354<x355)+x356));

	if (t73 != 2762730LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = -1LL;
	volatile int8_t x358 = -15;
	uint32_t x359 = 74U;
	uint8_t x360 = 7U;
	volatile int64_t t74 = -334836255381354LL;

	t74 = (x357+((x358<x359)+x360));

	if (t74 != 6LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x365 = -1;
	volatile uint16_t x366 = UINT16_MAX;
	int32_t t75 = -13;

	t75 = (x365+((x366<x367)+x368));

	if (t75 != -2505) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x375 = INT32_MAX;
	static int64_t x376 = INT64_MIN;
	int64_t t76 = -1044738LL;

	t76 = (x373+((x374<x375)+x376));

	if (t76 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x379 = -24;
	volatile uint8_t x380 = 3U;
	uint32_t t77 = 211U;

	t77 = (x377+((x378<x379)+x380));

	if (t77 != 17572U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x381 = 0;
	int16_t x382 = 34;
	int8_t x384 = INT8_MIN;
	int32_t t78 = 225161054;

	t78 = (x381+((x382<x383)+x384));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MIN;
	static int32_t x387 = INT32_MIN;
	uint8_t x388 = 19U;
	int32_t t79 = -638;

	t79 = (x385+((x386<x387)+x388));

	if (t79 != -2147483629) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x390 = INT16_MAX;
	static uint64_t x391 = 1481708033LLU;
	int32_t x392 = 437475;
	uint32_t t80 = 1154U;

	t80 = (x389+((x390<x391)+x392));

	if (t80 != 30985997U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x395 = INT16_MAX;
	int8_t x396 = -1;
	int32_t t81 = 7229007;

	t81 = (x393+((x394<x395)+x396));

	if (t81 != -21) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x397 = -114248646;
	static uint32_t x398 = 30663172U;
	volatile uint16_t x399 = UINT16_MAX;
	int32_t x400 = -902354;
	volatile int32_t t82 = 6243370;

	t82 = (x397+((x398<x399)+x400));

	if (t82 != -115151000) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x401 = -269802;
	uint32_t x402 = 1U;
	volatile int64_t x404 = -33869215723LL;
	int64_t t83 = 1259576LL;

	t83 = (x401+((x402<x403)+x404));

	if (t83 != -33869485524LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x405 = 7U;
	uint32_t x407 = 119U;
	uint8_t x408 = 0U;
	volatile int32_t t84 = 231829;

	t84 = (x405+((x406<x407)+x408));

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x409 = INT64_MIN;
	static int16_t x411 = -1;
	static int64_t t85 = 1247694883LL;

	t85 = (x409+((x410<x411)+x412));

	if (t85 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x413 = INT16_MIN;
	uint16_t x415 = 16294U;
	int8_t x416 = -1;
	volatile int32_t t86 = 16893501;

	t86 = (x413+((x414<x415)+x416));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x417 = 1;
	int8_t x418 = 0;
	int32_t x419 = INT32_MIN;
	volatile uint16_t x420 = 76U;
	int32_t t87 = 380949072;

	t87 = (x417+((x418<x419)+x420));

	if (t87 != 77) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x421 = UINT64_MAX;
	volatile uint32_t x422 = 47657680U;
	static int8_t x423 = -1;
	uint32_t x424 = UINT32_MAX;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x421+((x422<x423)+x424));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x425 = 81265091273656LLU;
	int32_t x426 = INT32_MIN;
	int16_t x427 = -1;
	static int32_t x428 = -10583126;
	uint64_t t89 = 289234017LLU;

	t89 = (x425+((x426<x427)+x428));

	if (t89 != 81265080690531LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x429 = 0U;
	static volatile uint16_t x430 = 8U;
	uint32_t x431 = 25753041U;
	uint8_t x432 = 41U;
	volatile int32_t t90 = -2;

	t90 = (x429+((x430<x431)+x432));

	if (t90 != 42) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x433 = UINT32_MAX;
	uint8_t x436 = 62U;
	uint32_t t91 = 911540356U;

	t91 = (x433+((x434<x435)+x436));

	if (t91 != 61U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x438 = -3996;
	int8_t x439 = INT8_MAX;
	volatile int16_t x440 = -50;
	static volatile uint32_t t92 = 3335186U;

	t92 = (x437+((x438<x439)+x440));

	if (t92 != 4294967246U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x441 = UINT64_MAX;
	int64_t x442 = INT64_MIN;
	uint8_t x443 = 119U;
	uint64_t t93 = 6947935671621LLU;

	t93 = (x441+((x442<x443)+x444));

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x445 = INT16_MAX;
	static int64_t x446 = 1889848LL;
	int8_t x447 = -1;
	uint64_t x448 = 28LLU;
	volatile uint64_t t94 = 285765847285LLU;

	t94 = (x445+((x446<x447)+x448));

	if (t94 != 32795LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x449 = 193;
	int16_t x450 = INT16_MIN;
	int16_t x451 = 597;
	int8_t x452 = 2;

	t95 = (x449+((x450<x451)+x452));

	if (t95 != 196) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x453 = -1LL;
	static volatile uint16_t x455 = 59U;
	int64_t x456 = INT64_MAX;
	volatile int64_t t96 = -11809866LL;

	t96 = (x453+((x454<x455)+x456));

	if (t96 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x469 = INT16_MIN;
	uint16_t x470 = 7515U;
	uint8_t x471 = 2U;
	static uint8_t x472 = 12U;
	volatile int32_t t97 = 55637305;

	t97 = (x469+((x470<x471)+x472));

	if (t97 != -32756) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x477 = 252094484;
	int8_t x479 = 0;
	uint64_t x480 = 219LLU;
	uint64_t t98 = 239833500284LLU;

	t98 = (x477+((x478<x479)+x480));

	if (t98 != 252094703LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x481 = UINT32_MAX;
	volatile int16_t x484 = -1;
	static uint32_t t99 = 121U;

	t99 = (x481+((x482<x483)+x484));

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

