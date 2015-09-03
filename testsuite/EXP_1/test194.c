#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x5 = -191014906LL;
uint16_t x13 = 18U;
static uint64_t x14 = 2LLU;
uint64_t t1 = 1955558871550LLU;
int8_t x18 = INT8_MIN;
volatile int8_t x28 = INT8_MIN;
int8_t x30 = INT8_MIN;
uint32_t t5 = UINT32_MAX;
uint16_t x33 = 2U;
uint16_t x37 = UINT16_MAX;
int16_t x43 = -1;
static volatile int64_t x52 = -1LL;
int16_t x53 = INT16_MIN;
uint64_t x64 = 248540293014318LLU;
int16_t x68 = INT16_MIN;
volatile uint64_t t14 = 242149543LLU;
static int16_t x74 = 97;
volatile int64_t t15 = 12LL;
static uint8_t x85 = UINT8_MAX;
static int8_t x87 = 3;
int16_t x89 = INT16_MAX;
static int8_t x90 = INT8_MAX;
static int8_t x92 = 29;
static volatile int32_t t18 = -2298;
int32_t x98 = -292098;
volatile int32_t t19 = 21670065;
static volatile int64_t x110 = -1LL;
static uint64_t x112 = 116258042LLU;
int32_t x128 = INT32_MIN;
int8_t x137 = -1;
int64_t x141 = 660848230680164LL;
volatile uint32_t x148 = 0U;
static int32_t x152 = -377;
int64_t t30 = -995245872LL;
uint16_t x169 = UINT16_MAX;
int16_t x172 = -1;
uint64_t t32 = UINT64_MAX;
int32_t x180 = INT32_MIN;
int64_t t34 = -270723014107278LL;
int64_t x196 = -1LL;
volatile int64_t t36 = -466254LL;
int8_t x203 = -1;
static int8_t x206 = -28;
int32_t x207 = INT32_MIN;
int64_t t38 = -8723871LL;
int32_t x218 = INT32_MIN;
uint8_t x220 = 2U;
volatile uint64_t x229 = 0LLU;
int64_t x232 = INT64_MIN;
int32_t x234 = -1;
int16_t x237 = -44;
volatile int32_t x238 = INT32_MIN;
int64_t x240 = 13579LL;
volatile int32_t t46 = -508690;
uint32_t t47 = UINT32_MAX;
volatile int32_t t48 = -13899112;
int8_t x277 = INT8_MIN;
int32_t x281 = INT32_MAX;
uint16_t x282 = UINT16_MAX;
volatile int64_t x283 = 663190LL;
volatile int64_t x294 = -1LL;
static int8_t x295 = INT8_MIN;
uint32_t x298 = 627U;
uint32_t x299 = 11U;
static uint8_t x301 = 71U;
int8_t x313 = INT8_MIN;
int8_t x322 = INT8_MAX;
static uint32_t x324 = 34006222U;
static volatile uint32_t t61 = 1683543U;
int32_t x328 = INT32_MAX;
int32_t x334 = INT32_MIN;
static int64_t x336 = INT64_MIN;
uint64_t x337 = UINT64_MAX;
int8_t x339 = INT8_MIN;
int64_t t67 = 13821549762462LL;
static volatile int16_t x356 = 18;
volatile uint64_t t69 = 1310081578499836141LLU;
uint8_t x362 = 11U;
volatile int32_t t70 = INT32_MAX;
static uint16_t x379 = 853U;
volatile int64_t t75 = 176666317533429331LL;
static volatile int16_t x398 = -892;
static int8_t x405 = INT8_MIN;
volatile uint32_t x408 = UINT32_MAX;
volatile uint64_t t80 = 9024969412453376138LLU;
int8_t x412 = 1;
int8_t x413 = INT8_MIN;
volatile uint64_t t84 = 17LLU;
static int8_t x433 = INT8_MIN;
static int32_t x434 = INT32_MIN;
static int64_t x437 = -696812139503LL;
static int32_t x439 = INT32_MIN;
volatile int8_t x440 = INT8_MAX;
static int64_t x443 = 106LL;
int16_t x444 = INT16_MAX;
int64_t x453 = INT64_MAX;
static int16_t x456 = INT16_MIN;
uint8_t x459 = 24U;
uint32_t x479 = 11999431U;
int64_t x485 = -587LL;
int8_t x486 = INT8_MAX;
int32_t x490 = -1;
uint32_t x494 = 62U;
volatile int64_t x496 = INT64_MIN;
int32_t t99 = 36;


void f0(void) {
	int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	static int64_t x8 = -17986LL;
	static int64_t t0 = -118LL;

	t0 = (((x5-x6)-x7)|x8);

	if (t0 != -1602LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x15 = INT8_MAX;
	int8_t x16 = 1;

	t1 = (((x13-x14)-x15)|x16);

	if (t1 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int16_t x19 = INT16_MAX;
	uint8_t x20 = 14U;
	int32_t t2 = 365007;

	t2 = (((x17-x18)-x19)|x20);

	if (t2 != -32753) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = 6854302U;
	static int16_t x22 = INT16_MIN;
	uint16_t x23 = 5010U;
	volatile uint8_t x24 = UINT8_MAX;
	uint32_t t3 = 1U;

	t3 = (((x21-x22)-x23)|x24);

	if (t3 != 6882303U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = -1;
	static uint32_t x26 = UINT32_MAX;
	static int64_t x27 = INT64_MAX;
	static volatile int64_t t4 = 376LL;

	t4 = (((x25-x26)-x27)|x28);

	if (t4 != -127LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = 38;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = UINT32_MAX;

	t5 = (((x29-x30)-x31)|x32);

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x34 = UINT16_MAX;
	static int64_t x35 = -1LL;
	int64_t x36 = INT64_MAX;
	volatile int64_t t6 = -4490774114104493LL;

	t6 = (((x33-x34)-x35)|x36);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x38 = 37U;
	volatile int64_t x39 = -499727LL;
	int32_t x40 = INT32_MIN;
	static int64_t t7 = 1LL;

	t7 = (((x37-x38)-x39)|x40);

	if (t7 != -2146918423LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = 1;
	volatile int64_t x42 = -1LL;
	int64_t x44 = -1LL;
	int64_t t8 = 55052098LL;

	t8 = (((x41-x42)-x43)|x44);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	volatile int64_t t9 = -22799370LL;

	t9 = (((x45-x46)-x47)|x48);

	if (t9 != -32640LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	uint64_t x50 = 7957077360022300895LLU;
	int8_t x51 = -11;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (((x49-x50)-x51)|x52);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = INT8_MIN;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = -1LL;
	int64_t t11 = 1LL;

	t11 = (((x53-x54)-x55)|x56);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 3U;
	static int8_t x59 = INT8_MIN;
	uint64_t x60 = 7397218LLU;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = (((x57-x58)-x59)|x60);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x61 = UINT8_MAX;
	static int16_t x62 = INT16_MAX;
	volatile uint32_t x63 = 494086675U;
	volatile uint64_t t13 = 1242459446134LLU;

	t13 = (((x61-x62)-x63)|x64);

	if (t13 != 248540830693359LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x65 = UINT64_MAX;
	volatile uint16_t x66 = 181U;
	int64_t x67 = -1LL;

	t14 = (((x65-x66)-x67)|x68);

	if (t14 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x73 = INT64_MAX;
	int8_t x75 = -1;
	int32_t x76 = -1;

	t15 = (((x73-x74)-x75)|x76);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 0U;
	static uint32_t x78 = UINT32_MAX;
	static int64_t x79 = 1918153405LL;
	uint8_t x80 = 8U;
	int64_t t16 = -1LL;

	t16 = (((x77-x78)-x79)|x80);

	if (t16 != -1918153396LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x86 = INT64_MAX;
	int64_t x88 = INT64_MIN;
	volatile int64_t t17 = 1309075038748604170LL;

	t17 = (((x85-x86)-x87)|x88);

	if (t17 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x91 = -1;

	t18 = (((x89-x90)-x91)|x92);

	if (t18 != 32669) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -364;
	uint8_t x99 = UINT8_MAX;
	static int8_t x100 = -1;

	t19 = (((x97-x98)-x99)|x100);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x101 = 0U;
	int16_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = 0;
	volatile uint32_t t20 = 619345U;

	t20 = (((x101-x102)-x103)|x104);

	if (t20 != 4294967042U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = INT16_MIN;
	uint16_t x106 = UINT16_MAX;
	static volatile int8_t x107 = INT8_MAX;
	volatile int16_t x108 = -10;
	static int32_t t21 = 6055;

	t21 = (((x105-x106)-x107)|x108);

	if (t21 != -10) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MAX;
	int64_t x111 = 1460319516079LL;
	uint64_t t22 = 39LLU;

	t22 = (((x109-x110)-x111)|x112);

	if (t22 != 18446742613402713851LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MAX;
	int64_t x122 = INT64_MAX;
	int64_t x123 = INT64_MIN;
	static int64_t x124 = INT64_MIN;
	volatile int64_t t23 = 55LL;

	t23 = (((x121-x122)-x123)|x124);

	if (t23 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	uint16_t x127 = 1U;
	uint64_t t24 = UINT64_MAX;

	t24 = (((x125-x126)-x127)|x128);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x129 = 740845U;
	int16_t x130 = INT16_MIN;
	uint64_t x131 = 381008LLU;
	int8_t x132 = INT8_MAX;
	uint64_t t25 = 151762LLU;

	t25 = (((x129-x130)-x131)|x132);

	if (t25 != 392703LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x138 = 0;
	int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	volatile int64_t t26 = 5286060741LL;

	t26 = (((x137-x138)-x139)|x140);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x142 = -1;
	uint8_t x143 = 94U;
	uint16_t x144 = 16201U;
	volatile int64_t t27 = -64918184816LL;

	t27 = (((x141-x142)-x143)|x144);

	if (t27 != 660848230694735LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = 1457LLU;
	volatile int64_t x146 = -18686534164LL;
	uint32_t x147 = 2856053U;
	volatile uint64_t t28 = 1255610513199LLU;

	t28 = (((x145-x146)-x147)|x148);

	if (t28 != 18683679568LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = 3;
	volatile uint64_t x150 = 2805659175120792972LLU;
	volatile uint32_t x151 = 430U;
	volatile uint64_t t29 = 4LLU;

	t29 = (((x149-x150)-x151)|x152);

	if (t29 != 18446744073709551311LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MIN;
	uint32_t x154 = UINT32_MAX;
	int64_t x155 = -28952586414LL;
	int8_t x156 = -1;

	t30 = (((x153-x154)-x155)|x156);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = -1LL;
	volatile uint16_t x158 = 252U;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	int64_t t31 = -111911069939LL;

	t31 = (((x157-x158)-x159)|x160);

	if (t31 != -125LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x170 = 0LLU;
	int8_t x171 = -1;

	t32 = (((x169-x170)-x171)|x172);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	volatile uint16_t x179 = 59U;
	uint64_t t33 = 80048427426791762LLU;

	t33 = (((x177-x178)-x179)|x180);

	if (t33 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = -1LL;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = 14;

	t34 = (((x185-x186)-x187)|x188);

	if (t34 != 32526LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x189 = -1831;
	int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 3U;
	volatile int64_t t35 = 1268096420173LL;

	t35 = (((x189-x190)-x191)|x192);

	if (t35 != 9223372036854773851LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x193 = UINT16_MAX;
	int32_t x194 = -1;
	volatile uint32_t x195 = 3124337U;

	t36 = (((x193-x194)-x195)|x196);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = -5403529;
	volatile uint64_t x202 = 312175906039565LLU;
	static uint32_t x204 = UINT32_MAX;
	static uint64_t t37 = 126LLU;

	t37 = (((x201-x202)-x203)|x204);

	if (t37 != 18446431898306609151LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x205 = -377683LL;
	int32_t x208 = INT32_MIN;

	t38 = (((x205-x206)-x207)|x208);

	if (t38 != -377655LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = UINT16_MAX;
	int16_t x211 = -6920;
	static int32_t x212 = 63070;
	volatile int32_t t39 = -2126;

	t39 = (((x209-x210)-x211)|x212);

	if (t39 != -289) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x217 = UINT64_MAX;
	uint8_t x219 = 12U;
	volatile uint64_t t40 = 3LLU;

	t40 = (((x217-x218)-x219)|x220);

	if (t40 != 2147483635LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x222 = -1;
	static int8_t x223 = INT8_MAX;
	int64_t x224 = INT64_MAX;
	volatile int64_t t41 = INT64_MAX;

	t41 = (((x221-x222)-x223)|x224);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x225 = 114952109685023312LL;
	int16_t x226 = -48;
	static int16_t x227 = -35;
	int32_t x228 = -1;
	int64_t t42 = -31980392LL;

	t42 = (((x225-x226)-x227)|x228);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x230 = INT64_MIN;
	static uint16_t x231 = 50U;
	static uint64_t t43 = 440496520062820834LLU;

	t43 = (((x229-x230)-x231)|x232);

	if (t43 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x233 = -57591;
	int64_t x235 = -1LL;
	uint8_t x236 = 17U;
	volatile int64_t t44 = 20540LL;

	t44 = (((x233-x234)-x235)|x236);

	if (t44 != -57573LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x239 = 2U;
	int64_t t45 = 18501123LL;

	t45 = (((x237-x238)-x239)|x240);

	if (t45 != 2147483611LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = 6;
	static volatile int32_t x246 = 2374;
	int32_t x247 = -1;
	int16_t x248 = 95;

	t46 = (((x245-x246)-x247)|x248);

	if (t46 != -2337) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x249 = UINT32_MAX;
	volatile int8_t x250 = INT8_MAX;
	volatile uint32_t x251 = 67062U;
	uint32_t x252 = UINT32_MAX;

	t47 = (((x249-x250)-x251)|x252);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x261 = -1;
	int16_t x262 = INT16_MIN;
	uint8_t x263 = UINT8_MAX;
	static uint8_t x264 = 0U;

	t48 = (((x261-x262)-x263)|x264);

	if (t48 != 32512) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x273 = -1LL;
	static int8_t x274 = 3;
	int16_t x275 = -1;
	int8_t x276 = INT8_MIN;
	static int64_t t49 = -1055990017385323763LL;

	t49 = (((x273-x274)-x275)|x276);

	if (t49 != -3LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x278 = UINT16_MAX;
	int64_t x279 = -1LL;
	int64_t x280 = INT64_MAX;
	volatile int64_t t50 = 798LL;

	t50 = (((x277-x278)-x279)|x280);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x284 = -1;
	int64_t t51 = 149LL;

	t51 = (((x281-x282)-x283)|x284);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x285 = 1065091292183291369LLU;
	volatile uint8_t x286 = 22U;
	int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	volatile uint64_t t52 = 25110682LLU;

	t52 = (((x285-x286)-x287)|x288);

	if (t52 != 18446744072030938707LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x289 = INT16_MAX;
	static uint8_t x290 = 96U;
	static uint32_t x291 = 13212567U;
	static int16_t x292 = INT16_MIN;
	volatile uint32_t t53 = 6U;

	t53 = (((x289-x290)-x291)|x292);

	if (t53 != 4294960136U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x293 = 15LLU;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t54 = 1060192376LLU;

	t54 = (((x293-x294)-x295)|x296);

	if (t54 != 18446744071562068112LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x297 = 24325;
	int32_t x300 = -19544340;
	static uint32_t t55 = 4U;

	t55 = (((x297-x298)-x299)|x300);

	if (t55 != 4275429103U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x302 = UINT8_MAX;
	int32_t x303 = 102;
	static int8_t x304 = -1;
	int32_t t56 = -41;

	t56 = (((x301-x302)-x303)|x304);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x305 = -1;
	int8_t x306 = -1;
	volatile int8_t x307 = -1;
	int16_t x308 = 0;
	volatile int32_t t57 = -40850;

	t57 = (((x305-x306)-x307)|x308);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = 282U;
	static volatile uint16_t x311 = UINT16_MAX;
	volatile uint8_t x312 = 43U;
	volatile uint32_t t58 = 2035530U;

	t58 = (((x309-x310)-x311)|x312);

	if (t58 != 4294901359U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x314 = -2704464;
	uint32_t x315 = 461U;
	uint16_t x316 = UINT16_MAX;
	volatile uint32_t t59 = 7075429U;

	t59 = (((x313-x314)-x315)|x316);

	if (t59 != 2752511U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x317 = 64916U;
	static int32_t x318 = -1;
	volatile int32_t x319 = 444797;
	int16_t x320 = -12;
	uint32_t t60 = 2415679U;

	t60 = (((x317-x318)-x319)|x320);

	if (t60 != 4294967292U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x321 = INT32_MAX;
	int32_t x323 = -1;

	t61 = (((x321-x322)-x323)|x324);

	if (t61 != 2147483599U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x325 = -1816138;
	uint64_t x326 = 52850584028785373LLU;
	int16_t x327 = -2322;
	volatile uint64_t t62 = 19650308901605905LLU;

	t62 = (((x325-x326)-x327)|x328);

	if (t62 != 18393893491814957055LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x329 = 6548U;
	int64_t x330 = 750180059807553594LL;
	static int32_t x331 = -1;
	static uint8_t x332 = 25U;
	volatile int64_t t63 = -2556795145LL;

	t63 = (((x329-x330)-x331)|x332);

	if (t63 != -750180059807547045LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x333 = -1983;
	uint32_t x335 = UINT32_MAX;
	volatile int64_t t64 = 132528606LL;

	t64 = (((x333-x334)-x335)|x336);

	if (t64 != -9223372034707294142LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x338 = INT8_MIN;
	static uint64_t x340 = 141622514508289283LLU;
	volatile uint64_t t65 = 9001363193927862LLU;

	t65 = (((x337-x338)-x339)|x340);

	if (t65 != 141622514508289535LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = INT16_MIN;
	static int64_t x344 = INT64_MAX;
	static int64_t t66 = INT64_MAX;

	t66 = (((x341-x342)-x343)|x344);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x345 = 1;
	int64_t x346 = -2438274785154209357LL;
	volatile int32_t x347 = 591851;
	int8_t x348 = INT8_MIN;

	t67 = (((x345-x346)-x347)|x348);

	if (t67 != -29LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x353 = 3363858U;
	volatile int32_t x354 = INT32_MIN;
	static int32_t x355 = INT32_MIN;
	volatile uint32_t t68 = 11756876U;

	t68 = (((x353-x354)-x355)|x356);

	if (t68 != 3363858U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = 413166384LLU;
	int32_t x359 = INT32_MIN;
	uint64_t x360 = 8792655362711208LLU;

	t69 = (((x357-x358)-x359)|x360);

	if (t69 != 9232164693901041391LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x361 = UINT16_MAX;
	static int8_t x363 = -1;
	int32_t x364 = INT32_MAX;

	t70 = (((x361-x362)-x363)|x364);

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x365 = INT8_MAX;
	uint16_t x366 = 125U;
	static volatile int64_t x367 = -1LL;
	static uint32_t x368 = 124705409U;
	volatile int64_t t71 = -1343639834574025806LL;

	t71 = (((x365-x366)-x367)|x368);

	if (t71 != 124705411LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x369 = INT8_MIN;
	volatile uint8_t x370 = UINT8_MAX;
	volatile uint32_t x371 = UINT32_MAX;
	uint16_t x372 = UINT16_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (((x369-x370)-x371)|x372);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = -1;
	static int64_t x374 = -271993041115LL;
	int8_t x375 = INT8_MAX;
	int32_t x376 = INT32_MIN;
	static volatile int64_t t73 = -5469LL;

	t73 = (((x373-x374)-x375)|x376);

	if (t73 != -737382309LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = -1LL;
	uint8_t x378 = 29U;
	int16_t x380 = INT16_MIN;
	static int64_t t74 = -1922LL;

	t74 = (((x377-x378)-x379)|x380);

	if (t74 != -883LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = -1LL;
	static volatile uint8_t x382 = 0U;
	uint16_t x383 = 12U;
	int16_t x384 = INT16_MIN;

	t75 = (((x381-x382)-x383)|x384);

	if (t75 != -13LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x385 = 10;
	int16_t x386 = INT16_MIN;
	static int8_t x387 = 1;
	volatile int32_t x388 = -1;
	int32_t t76 = -2;

	t76 = (((x385-x386)-x387)|x388);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x389 = -2;
	uint64_t x390 = 2098LLU;
	static int64_t x391 = 221LL;
	volatile int32_t x392 = INT32_MIN;
	static uint64_t t77 = 30345394946399LLU;

	t77 = (((x389-x390)-x391)|x392);

	if (t77 != 18446744073709549295LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x397 = INT64_MIN;
	volatile int8_t x399 = -1;
	static uint64_t x400 = 530243029LLU;
	uint64_t t78 = 3LLU;

	t78 = (((x397-x398)-x399)|x400);

	if (t78 != 9223372037385019389LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x401 = INT32_MIN;
	int32_t x402 = -1;
	int8_t x403 = -5;
	uint32_t x404 = 24U;
	volatile uint32_t t79 = 719824239U;

	t79 = (((x401-x402)-x403)|x404);

	if (t79 != 2147483678U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x406 = 61270126877161LLU;
	volatile int16_t x407 = INT16_MIN;

	t80 = (((x405-x406)-x407)|x408);

	if (t80 != 18446682806001074175LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = -2514;
	volatile uint32_t x411 = 26U;
	volatile int64_t t81 = -40070LL;

	t81 = (((x409-x410)-x411)|x412);

	if (t81 != -9223372036854773319LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x414 = INT64_MIN;
	uint32_t x415 = 77812825U;
	int32_t x416 = 3823832;
	int64_t t82 = 329519511767387LL;

	t82 = (((x413-x414)-x415)|x416);

	if (t82 != 9223372036779211775LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x417 = 28817U;
	int16_t x418 = 11;
	static volatile uint16_t x419 = UINT16_MAX;
	static volatile uint16_t x420 = 891U;
	int32_t t83 = 0;

	t83 = (((x417-x418)-x419)|x420);

	if (t83 != -35841) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x421 = 1290U;
	int16_t x422 = 18;
	uint64_t x423 = 695194885388680LLU;
	int32_t x424 = INT32_MIN;

	t84 = (((x421-x422)-x423)|x424);

	if (t84 != 18446744072968113008LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x429 = 6985LLU;
	static int16_t x430 = 1756;
	volatile int16_t x431 = INT16_MAX;
	int32_t x432 = 124746;
	static volatile uint64_t t85 = 455395840050064LLU;

	t85 = (((x429-x430)-x431)|x432);

	if (t85 != 18446744073709549422LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x435 = -1LL;
	static int32_t x436 = 1088077;
	static volatile int64_t t86 = -509118LL;

	t86 = (((x433-x434)-x435)|x436);

	if (t86 != 2147483597LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x438 = UINT32_MAX;
	volatile int64_t t87 = 18961LL;

	t87 = (((x437-x438)-x439)|x440);

	if (t87 != -698959623041LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x441 = 1U;
	int8_t x442 = 31;
	static int64_t t88 = 258403496710125698LL;

	t88 = (((x441-x442)-x443)|x444);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x449 = UINT16_MAX;
	volatile uint32_t x450 = 0U;
	static volatile uint8_t x451 = UINT8_MAX;
	int16_t x452 = INT16_MIN;
	static volatile uint32_t t89 = 1625063U;

	t89 = (((x449-x450)-x451)|x452);

	if (t89 != 4294967040U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x454 = 1659U;
	uint16_t x455 = 14U;
	int64_t t90 = -5733213583706LL;

	t90 = (((x453-x454)-x455)|x456);

	if (t90 != -1674LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x457 = 3142U;
	int8_t x458 = INT8_MIN;
	volatile int64_t x460 = -1LL;
	volatile int64_t t91 = 341116665140251LL;

	t91 = (((x457-x458)-x459)|x460);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x461 = 1258168LLU;
	uint32_t x462 = UINT32_MAX;
	int8_t x463 = INT8_MAX;
	int8_t x464 = -3;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x461-x462)-x463)|x464);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x473 = UINT64_MAX;
	uint64_t x474 = UINT64_MAX;
	int16_t x475 = INT16_MAX;
	uint16_t x476 = 930U;
	volatile uint64_t t93 = 16118417469786288LLU;

	t93 = (((x473-x474)-x475)|x476);

	if (t93 != 18446744073709519779LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x477 = INT64_MIN;
	uint64_t x478 = UINT64_MAX;
	uint8_t x480 = UINT8_MAX;
	static volatile uint64_t t94 = 790179478972778LLU;

	t94 = (((x477-x478)-x479)|x480);

	if (t94 != 9223372036842776575LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x481 = UINT64_MAX;
	static volatile int32_t x482 = INT32_MIN;
	int16_t x483 = INT16_MAX;
	uint32_t x484 = 113113160U;
	uint64_t t95 = 749412529352LLU;

	t95 = (((x481-x482)-x483)|x484);

	if (t95 != 2147481672LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x487 = -274;
	int32_t x488 = INT32_MIN;
	int64_t t96 = -5118999729LL;

	t96 = (((x485-x486)-x487)|x488);

	if (t96 != -440LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = INT8_MIN;
	int64_t x491 = 3LL;
	volatile uint8_t x492 = 0U;
	volatile int64_t t97 = -25030298068423LL;

	t97 = (((x489-x490)-x491)|x492);

	if (t97 != -130LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x493 = INT16_MAX;
	static int32_t x495 = INT32_MAX;
	static volatile int64_t t98 = -4174306367297236136LL;

	t98 = (((x493-x494)-x495)|x496);

	if (t98 != -9223372034707259454LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x497 = INT8_MIN;
	volatile int16_t x498 = -1;
	uint16_t x499 = UINT16_MAX;
	int32_t x500 = -15786;

	t99 = (((x497-x498)-x499)|x500);

	if (t99 != -42) { NG(); } else { ; }
	
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

