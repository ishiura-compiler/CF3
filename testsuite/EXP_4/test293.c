#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x11 = 57219618063392382LLU;
uint64_t x15 = UINT64_MAX;
static uint32_t x34 = UINT32_MAX;
uint8_t x38 = 1U;
uint32_t t4 = 86292U;
int64_t x52 = INT64_MAX;
uint8_t x57 = 3U;
uint16_t x59 = 11U;
int32_t x60 = -194172311;
volatile int32_t t8 = 66976837;
int64_t x90 = -3453246514309527480LL;
int32_t x95 = 4027;
volatile int32_t x101 = INT32_MAX;
int32_t x102 = INT32_MIN;
int16_t x103 = -1;
int32_t t13 = -6591231;
int8_t x116 = -1;
volatile uint16_t x121 = 4221U;
uint64_t x137 = UINT64_MAX;
static uint16_t x142 = 128U;
volatile int64_t x144 = 124139LL;
int32_t t19 = 56;
int32_t x165 = INT32_MAX;
int16_t x168 = 2;
uint8_t x177 = 5U;
static volatile int32_t t22 = 1847425;
int32_t t23 = -10579;
uint16_t x185 = 1790U;
int16_t x187 = INT16_MIN;
int32_t t24 = 24983;
int64_t x191 = INT64_MAX;
uint16_t x228 = UINT16_MAX;
static int32_t t30 = 14;
volatile int16_t x236 = INT16_MIN;
int64_t x237 = 15652424605128628LL;
uint16_t x239 = 1U;
volatile int64_t t32 = -17650479138876LL;
volatile int8_t x242 = INT8_MIN;
static int64_t x251 = INT64_MAX;
uint64_t x257 = 2979439LLU;
int32_t x259 = -1;
uint64_t t35 = 10828LLU;
static uint64_t x263 = 3760LLU;
volatile int8_t x270 = 1;
uint16_t x286 = UINT16_MAX;
static volatile uint16_t x289 = UINT16_MAX;
int16_t x290 = INT16_MIN;
int8_t x307 = -1;
uint16_t x308 = UINT16_MAX;
static int8_t x312 = -1;
int8_t x329 = 1;
volatile uint32_t x330 = UINT32_MAX;
static int64_t x334 = INT64_MAX;
int64_t x358 = 1LL;
static uint32_t t46 = 1U;
volatile uint8_t x382 = 2U;
volatile int16_t x383 = -1;
static volatile int32_t t51 = 0;
static int32_t t52 = INT32_MAX;
volatile int64_t x408 = -68427896774LL;
uint64_t x428 = 421LLU;
int64_t x433 = INT64_MAX;
uint8_t x434 = UINT8_MAX;
int16_t x440 = INT16_MIN;
static int32_t x448 = -7746;
int8_t x456 = 29;
volatile int32_t t61 = -122;
volatile int32_t t62 = -569187053;
int8_t x487 = -2;
uint32_t t66 = 8067U;
volatile int8_t x509 = 0;
volatile int64_t x538 = INT64_MAX;
volatile uint64_t t70 = 9610462522303697LLU;
volatile int16_t x562 = INT16_MIN;
uint64_t x563 = 369LLU;
uint8_t x565 = 7U;
int32_t t73 = 11351;
static uint32_t x576 = 1046783U;
static volatile int32_t t75 = -1413807;
volatile uint64_t x591 = 4270678988423LLU;
uint32_t x615 = 980U;
int8_t x616 = -1;
static volatile int32_t t79 = 16882;
int8_t x619 = -1;
int16_t x624 = 893;
volatile uint32_t t82 = 686191U;
uint32_t x651 = 7052U;
volatile int64_t t83 = 6776LL;
int64_t x662 = 77135LL;
int32_t t85 = -468061;
int64_t x687 = -1LL;
int64_t x688 = INT64_MIN;
volatile uint32_t x737 = UINT32_MAX;
static int32_t t92 = 1;
static int32_t t93 = -2;
uint16_t x759 = 19940U;
volatile int32_t t95 = -2;
volatile int32_t x763 = INT32_MIN;
int32_t t97 = 734;
uint16_t x789 = 292U;
static int64_t x790 = -1435138LL;


void f0(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int32_t x10 = INT32_MAX;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t0 = -2077;

	t0 = (x9>>(x10<=(x11-x12)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x13 = UINT16_MAX;
	static int64_t x14 = INT64_MAX;
	int16_t x16 = -1;
	volatile int32_t t1 = -487;

	t1 = (x13>>(x14<=(x15-x16)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = 1;
	volatile uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	volatile int32_t x32 = INT32_MIN;
	static volatile int32_t t2 = -7329119;

	t2 = (x29>>(x30<=(x31-x32)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MAX;
	uint8_t x35 = UINT8_MAX;
	static int16_t x36 = -1325;
	volatile int32_t t3 = -150907;

	t3 = (x33>>(x34<=(x35-x36)));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = 82432514U;
	static uint8_t x39 = UINT8_MAX;
	uint8_t x40 = 23U;

	t4 = (x37>>(x38<=(x39-x40)));

	if (t4 != 41216257U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x41 = UINT8_MAX;
	int8_t x42 = 2;
	int16_t x43 = -2;
	volatile uint16_t x44 = 247U;
	static volatile int32_t t5 = 16840818;

	t5 = (x41>>(x42<=(x43-x44)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x49 = 11U;
	int8_t x50 = INT8_MIN;
	static int8_t x51 = -1;
	volatile int32_t t6 = -1;

	t6 = (x49>>(x50<=(x51-x52)));

	if (t6 != 11) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x58 = 0U;
	int32_t t7 = -6;

	t7 = (x57>>(x58<=(x59-x60)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x61 = INT16_MAX;
	int8_t x62 = INT8_MAX;
	int32_t x63 = -8415255;
	uint64_t x64 = 6653138433427LLU;

	t8 = (x61>>(x62<=(x63-x64)));

	if (t8 != 16383) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x65 = INT16_MAX;
	uint32_t x66 = 4598U;
	static volatile int8_t x67 = INT8_MAX;
	int64_t x68 = INT64_MAX;
	int32_t t9 = 87594;

	t9 = (x65>>(x66<=(x67-x68)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x73 = 0;
	volatile uint32_t x74 = 1U;
	volatile uint8_t x75 = UINT8_MAX;
	int32_t x76 = 514807;
	static int32_t t10 = 46243;

	t10 = (x73>>(x74<=(x75-x76)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x89 = INT64_MAX;
	int8_t x91 = INT8_MIN;
	volatile uint32_t x92 = 64U;
	int64_t t11 = 197459858077024104LL;

	t11 = (x89>>(x90<=(x91-x92)));

	if (t11 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x93 = 25428099069LLU;
	int8_t x94 = -21;
	volatile int16_t x96 = -19;
	uint64_t t12 = 292234LLU;

	t12 = (x93>>(x94<=(x95-x96)));

	if (t12 != 12714049534LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x104 = INT8_MIN;

	t13 = (x101>>(x102<=(x103-x104)));

	if (t13 != 1073741823) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x114 = 1797891787411LL;
	int16_t x115 = -1;
	uint32_t t14 = UINT32_MAX;

	t14 = (x113>>(x114<=(x115-x116)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x122 = -1465017158672LL;
	int8_t x123 = INT8_MIN;
	int32_t x124 = -447577;
	static volatile int32_t t15 = 2674;

	t15 = (x121>>(x122<=(x123-x124)));

	if (t15 != 2110) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x138 = INT64_MIN;
	int32_t x139 = -1;
	int64_t x140 = -1LL;
	volatile uint64_t t16 = 7166LLU;

	t16 = (x137>>(x138<=(x139-x140)));

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x141 = UINT64_MAX;
	uint8_t x143 = 2U;
	uint64_t t17 = UINT64_MAX;

	t17 = (x141>>(x142<=(x143-x144)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x145 = 9U;
	static int8_t x146 = 1;
	static int8_t x147 = INT8_MIN;
	int32_t x148 = -1;
	volatile int32_t t18 = 11201409;

	t18 = (x145>>(x146<=(x147-x148)));

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = INT32_MIN;
	static volatile int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;

	t19 = (x149>>(x150<=(x151-x152)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x161 = UINT8_MAX;
	static volatile int8_t x162 = INT8_MAX;
	int8_t x163 = -1;
	static int8_t x164 = -57;
	static int32_t t20 = 109;

	t20 = (x161>>(x162<=(x163-x164)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x166 = INT16_MAX;
	uint32_t x167 = UINT32_MAX;
	static int32_t t21 = 28438;

	t21 = (x165>>(x166<=(x167-x168)));

	if (t21 != 1073741823) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x178 = UINT32_MAX;
	int16_t x179 = -12;
	static uint32_t x180 = 214398U;

	t22 = (x177>>(x178<=(x179-x180)));

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x181 = UINT16_MAX;
	uint8_t x182 = 38U;
	static uint8_t x183 = 113U;
	int32_t x184 = INT32_MAX;

	t23 = (x181>>(x182<=(x183-x184)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x186 = UINT32_MAX;
	int32_t x188 = 5;

	t24 = (x185>>(x186<=(x187-x188)));

	if (t24 != 1790) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x189 = UINT32_MAX;
	static int64_t x190 = 6923147057LL;
	uint32_t x192 = 1031867U;
	uint32_t t25 = 815801877U;

	t25 = (x189>>(x190<=(x191-x192)));

	if (t25 != 2147483647U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x209 = 1862147676738LL;
	uint64_t x210 = 3888LLU;
	int16_t x211 = 110;
	uint64_t x212 = 1671249870539060LLU;
	volatile int64_t t26 = -21639240762739159LL;

	t26 = (x209>>(x210<=(x211-x212)));

	if (t26 != 931073838369LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x213 = 6603;
	int8_t x214 = 0;
	uint64_t x215 = 9LLU;
	static uint32_t x216 = 4189U;
	int32_t t27 = -124956;

	t27 = (x213>>(x214<=(x215-x216)));

	if (t27 != 3301) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	uint32_t x220 = UINT32_MAX;
	uint64_t t28 = 1271907228LLU;

	t28 = (x217>>(x218<=(x219-x220)));

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = -2269893637LL;
	static volatile uint64_t x223 = 3628800LLU;
	static uint32_t x224 = 691695538U;
	uint32_t t29 = 6172U;

	t29 = (x221>>(x222<=(x223-x224)));

	if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x225 = 27477U;
	uint8_t x226 = 0U;
	static uint8_t x227 = UINT8_MAX;

	t30 = (x225>>(x226<=(x227-x228)));

	if (t30 != 27477) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x233 = 5808;
	int64_t x234 = INT64_MIN;
	static volatile int32_t x235 = -1;
	int32_t t31 = 1046;

	t31 = (x233>>(x234<=(x235-x236)));

	if (t31 != 2904) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x238 = 1297745182LL;
	uint8_t x240 = 0U;

	t32 = (x237>>(x238<=(x239-x240)));

	if (t32 != 15652424605128628LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x241 = 3U;
	static int16_t x243 = INT16_MIN;
	static uint32_t x244 = 3420220U;
	uint32_t t33 = 13125U;

	t33 = (x241>>(x242<=(x243-x244)));

	if (t33 != 3U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x249 = 11U;
	static int64_t x250 = -68096972LL;
	volatile uint16_t x252 = 701U;
	volatile int32_t t34 = 1151;

	t34 = (x249>>(x250<=(x251-x252)));

	if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x258 = 509LLU;
	static int16_t x260 = 12;

	t35 = (x257>>(x258<=(x259-x260)));

	if (t35 != 1489719LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x261 = 533;
	volatile uint32_t x262 = 120U;
	int64_t x264 = INT64_MAX;
	int32_t t36 = -18232266;

	t36 = (x261>>(x262<=(x263-x264)));

	if (t36 != 266) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x269 = 2155064;
	int32_t x271 = -1;
	volatile int8_t x272 = INT8_MIN;
	int32_t t37 = -215337496;

	t37 = (x269>>(x270<=(x271-x272)));

	if (t37 != 1077532) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x285 = 0U;
	uint64_t x287 = 3369160665192998482LLU;
	uint16_t x288 = 2705U;
	volatile int32_t t38 = 33185345;

	t38 = (x285>>(x286<=(x287-x288)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x291 = 18162047LL;
	uint64_t x292 = 800207217438778LLU;
	static volatile int32_t t39 = 360719;

	t39 = (x289>>(x290<=(x291-x292)));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x297 = 5U;
	uint8_t x298 = UINT8_MAX;
	volatile uint8_t x299 = UINT8_MAX;
	uint64_t x300 = UINT64_MAX;
	int32_t t40 = 3054501;

	t40 = (x297>>(x298<=(x299-x300)));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x305 = INT8_MAX;
	volatile int8_t x306 = INT8_MIN;
	volatile int32_t t41 = 119343;

	t41 = (x305>>(x306<=(x307-x308)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x309 = 0U;
	volatile int64_t x310 = -1LL;
	volatile uint16_t x311 = UINT16_MAX;
	int32_t t42 = 989350;

	t42 = (x309>>(x310<=(x311-x312)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x331 = 893367208U;
	int8_t x332 = 4;
	int32_t t43 = 1370161;

	t43 = (x329>>(x330<=(x331-x332)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x333 = 952687563U;
	volatile uint64_t x335 = 24386825078065669LLU;
	static int64_t x336 = INT64_MAX;
	volatile uint32_t t44 = 968436231U;

	t44 = (x333>>(x334<=(x335-x336)));

	if (t44 != 476343781U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x349 = INT64_MAX;
	static uint8_t x350 = 1U;
	int32_t x351 = -1;
	static int64_t x352 = INT64_MAX;
	volatile int64_t t45 = INT64_MAX;

	t45 = (x349>>(x350<=(x351-x352)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x357 = UINT32_MAX;
	static uint64_t x359 = 884LLU;
	int8_t x360 = INT8_MIN;

	t46 = (x357>>(x358<=(x359-x360)));

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x365 = UINT16_MAX;
	static int32_t x366 = INT32_MIN;
	static volatile int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	int32_t t47 = -1;

	t47 = (x365>>(x366<=(x367-x368)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x369 = INT64_MAX;
	static uint32_t x370 = UINT32_MAX;
	uint8_t x371 = 0U;
	int64_t x372 = -2393093306LL;
	static volatile int64_t t48 = INT64_MAX;

	t48 = (x369>>(x370<=(x371-x372)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x377 = INT64_MAX;
	int32_t x378 = INT32_MIN;
	int8_t x379 = -2;
	int64_t x380 = INT64_MIN;
	static volatile int64_t t49 = 1861381602662170763LL;

	t49 = (x377>>(x378<=(x379-x380)));

	if (t49 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x381 = 55U;
	int8_t x384 = INT8_MAX;
	volatile int32_t t50 = 2254379;

	t50 = (x381>>(x382<=(x383-x384)));

	if (t50 != 55) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x385 = 170U;
	static uint32_t x386 = 1304498784U;
	int16_t x387 = INT16_MAX;
	static volatile uint8_t x388 = 0U;

	t51 = (x385>>(x386<=(x387-x388)));

	if (t51 != 170) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x393 = INT32_MAX;
	volatile int16_t x394 = INT16_MAX;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;

	t52 = (x393>>(x394<=(x395-x396)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x405 = UINT32_MAX;
	static volatile int16_t x406 = INT16_MIN;
	static volatile int32_t x407 = 11;
	volatile uint32_t t53 = 2893321U;

	t53 = (x405>>(x406<=(x407-x408)));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x425 = 58578052628LLU;
	volatile uint64_t x426 = 332342287LLU;
	volatile int8_t x427 = INT8_MAX;
	volatile uint64_t t54 = 125547LLU;

	t54 = (x425>>(x426<=(x427-x428)));

	if (t54 != 29289026314LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x429 = UINT8_MAX;
	static uint64_t x430 = 16766619236677LLU;
	volatile int8_t x431 = INT8_MAX;
	static uint64_t x432 = 3923536646525238LLU;
	int32_t t55 = -120597675;

	t55 = (x429>>(x430<=(x431-x432)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x435 = 3586U;
	uint32_t x436 = UINT32_MAX;
	volatile int64_t t56 = 109532LL;

	t56 = (x433>>(x434<=(x435-x436)));

	if (t56 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x437 = 228;
	uint32_t x438 = UINT32_MAX;
	int64_t x439 = -23997991LL;
	int32_t t57 = -3931;

	t57 = (x437>>(x438<=(x439-x440)));

	if (t57 != 228) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x445 = 4635;
	int8_t x446 = INT8_MIN;
	int64_t x447 = -1LL;
	static volatile int32_t t58 = -3819;

	t58 = (x445>>(x446<=(x447-x448)));

	if (t58 != 2317) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x449 = 4836248032LL;
	volatile uint8_t x450 = 1U;
	uint16_t x451 = 135U;
	static int8_t x452 = -1;
	volatile int64_t t59 = 251304089473LL;

	t59 = (x449>>(x450<=(x451-x452)));

	if (t59 != 2418124016LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x453 = 0;
	static uint16_t x454 = 54U;
	int16_t x455 = INT16_MIN;
	int32_t t60 = 85;

	t60 = (x453>>(x454<=(x455-x456)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x457 = 0;
	static int64_t x458 = INT64_MIN;
	int64_t x459 = 63749955396LL;
	uint16_t x460 = 39U;

	t61 = (x457>>(x458<=(x459-x460)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x461 = 8357;
	uint32_t x462 = 53U;
	static uint8_t x463 = 34U;
	int8_t x464 = INT8_MIN;

	t62 = (x461>>(x462<=(x463-x464)));

	if (t62 != 4178) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x469 = 56U;
	int32_t x470 = -1;
	int8_t x471 = -1;
	int64_t x472 = INT64_MIN;
	uint32_t t63 = 1067611U;

	t63 = (x469>>(x470<=(x471-x472)));

	if (t63 != 28U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x481 = UINT64_MAX;
	int8_t x482 = 9;
	int64_t x483 = -1LL;
	int16_t x484 = INT16_MIN;
	volatile uint64_t t64 = 2LLU;

	t64 = (x481>>(x482<=(x483-x484)));

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x485 = 13U;
	volatile uint16_t x486 = UINT16_MAX;
	int32_t x488 = -3015;
	volatile int32_t t65 = -569011186;

	t65 = (x485>>(x486<=(x487-x488)));

	if (t65 != 13) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x489 = 228U;
	int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MAX;
	static uint8_t x492 = 26U;

	t66 = (x489>>(x490<=(x491-x492)));

	if (t66 != 114U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x501 = UINT32_MAX;
	volatile int16_t x502 = 1;
	int16_t x503 = INT16_MIN;
	int16_t x504 = -56;
	uint32_t t67 = UINT32_MAX;

	t67 = (x501>>(x502<=(x503-x504)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x510 = INT8_MIN;
	static int8_t x511 = -1;
	int16_t x512 = INT16_MIN;
	static int32_t t68 = -17827272;

	t68 = (x509>>(x510<=(x511-x512)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x521 = 893U;
	static uint16_t x522 = 11U;
	static int32_t x523 = -1;
	volatile int64_t x524 = 3174624192158610LL;
	int32_t t69 = -491;

	t69 = (x521>>(x522<=(x523-x524)));

	if (t69 != 893) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x537 = 22009637472985LLU;
	int32_t x539 = INT32_MAX;
	uint16_t x540 = 516U;

	t70 = (x537>>(x538<=(x539-x540)));

	if (t70 != 22009637472985LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x541 = 7U;
	static volatile uint64_t x542 = 289996798606878314LLU;
	volatile uint8_t x543 = 0U;
	int8_t x544 = INT8_MIN;
	volatile uint32_t t71 = 1159645U;

	t71 = (x541>>(x542<=(x543-x544)));

	if (t71 != 7U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x561 = 3539U;
	volatile int64_t x564 = -127891LL;
	volatile int32_t t72 = -2497;

	t72 = (x561>>(x562<=(x563-x564)));

	if (t72 != 3539) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x566 = INT8_MAX;
	volatile int32_t x567 = INT32_MAX;
	uint8_t x568 = 29U;

	t73 = (x565>>(x566<=(x567-x568)));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x569 = INT32_MAX;
	int8_t x570 = INT8_MIN;
	uint16_t x571 = UINT16_MAX;
	int16_t x572 = INT16_MAX;
	int32_t t74 = -12;

	t74 = (x569>>(x570<=(x571-x572)));

	if (t74 != 1073741823) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x573 = 6U;
	uint32_t x574 = 102U;
	volatile int16_t x575 = -230;

	t75 = (x573>>(x574<=(x575-x576)));

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x581 = 998LLU;
	uint16_t x582 = UINT16_MAX;
	int32_t x583 = INT32_MAX;
	static int64_t x584 = -1LL;
	uint64_t t76 = 953337202334LLU;

	t76 = (x581>>(x582<=(x583-x584)));

	if (t76 != 499LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x589 = UINT8_MAX;
	int8_t x590 = 0;
	int8_t x592 = INT8_MIN;
	int32_t t77 = 12;

	t77 = (x589>>(x590<=(x591-x592)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x597 = 1434U;
	volatile uint32_t x598 = 2983U;
	uint64_t x599 = UINT64_MAX;
	uint64_t x600 = 974362650294704LLU;
	volatile int32_t t78 = -4474;

	t78 = (x597>>(x598<=(x599-x600)));

	if (t78 != 717) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x613 = INT8_MAX;
	int32_t x614 = INT32_MAX;

	t79 = (x613>>(x614<=(x615-x616)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x617 = 39;
	volatile int8_t x618 = 0;
	volatile uint8_t x620 = UINT8_MAX;
	static int32_t t80 = 1502;

	t80 = (x617>>(x618<=(x619-x620)));

	if (t80 != 39) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x621 = INT8_MAX;
	static uint64_t x622 = UINT64_MAX;
	int16_t x623 = INT16_MIN;
	int32_t t81 = -6;

	t81 = (x621>>(x622<=(x623-x624)));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x645 = 80502U;
	volatile int16_t x646 = -3083;
	int16_t x647 = INT16_MAX;
	uint32_t x648 = UINT32_MAX;

	t82 = (x645>>(x646<=(x647-x648)));

	if (t82 != 80502U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x649 = 62755253204459278LL;
	uint32_t x650 = 462691085U;
	static int8_t x652 = -21;

	t83 = (x649>>(x650<=(x651-x652)));

	if (t83 != 62755253204459278LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x657 = 345;
	int16_t x658 = INT16_MIN;
	int32_t x659 = -5;
	volatile uint8_t x660 = UINT8_MAX;
	static volatile int32_t t84 = 1873;

	t84 = (x657>>(x658<=(x659-x660)));

	if (t84 != 172) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x661 = INT16_MAX;
	volatile int64_t x663 = -1LL;
	uint16_t x664 = UINT16_MAX;

	t85 = (x661>>(x662<=(x663-x664)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x669 = 127U;
	int64_t x670 = -12573LL;
	uint8_t x671 = 15U;
	uint32_t x672 = 2133428550U;
	int32_t t86 = -19405626;

	t86 = (x669>>(x670<=(x671-x672)));

	if (t86 != 63) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x685 = 1938U;
	volatile uint64_t x686 = UINT64_MAX;
	static int32_t t87 = -877378;

	t87 = (x685>>(x686<=(x687-x688)));

	if (t87 != 1938) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x693 = 5U;
	int16_t x694 = -1;
	int8_t x695 = 1;
	int8_t x696 = INT8_MAX;
	volatile uint32_t t88 = 443454U;

	t88 = (x693>>(x694<=(x695-x696)));

	if (t88 != 5U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x709 = 17U;
	int8_t x710 = -1;
	int16_t x711 = INT16_MAX;
	int8_t x712 = INT8_MIN;
	uint32_t t89 = 78U;

	t89 = (x709>>(x710<=(x711-x712)));

	if (t89 != 8U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x725 = UINT8_MAX;
	static uint8_t x726 = 7U;
	int64_t x727 = INT64_MAX;
	uint8_t x728 = 120U;
	volatile int32_t t90 = -17;

	t90 = (x725>>(x726<=(x727-x728)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x738 = INT8_MIN;
	int8_t x739 = 55;
	static uint64_t x740 = 278269931536475LLU;
	uint32_t t91 = UINT32_MAX;

	t91 = (x737>>(x738<=(x739-x740)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x741 = 181;
	int16_t x742 = INT16_MIN;
	uint32_t x743 = UINT32_MAX;
	static uint64_t x744 = 170926LLU;

	t92 = (x741>>(x742<=(x743-x744)));

	if (t92 != 181) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x745 = 2;
	static uint8_t x746 = 89U;
	volatile int8_t x747 = 3;
	volatile int16_t x748 = INT16_MIN;

	t93 = (x745>>(x746<=(x747-x748)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x749 = INT16_MAX;
	static uint32_t x750 = 42339U;
	static uint32_t x751 = UINT32_MAX;
	volatile int32_t x752 = -1;
	int32_t t94 = -3321606;

	t94 = (x749>>(x750<=(x751-x752)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x757 = UINT8_MAX;
	uint16_t x758 = 48U;
	uint64_t x760 = 27600694336LLU;

	t95 = (x757>>(x758<=(x759-x760)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x761 = 2884508888978087LLU;
	uint64_t x762 = 696LLU;
	static int8_t x764 = INT8_MIN;
	volatile uint64_t t96 = 74733233167748LLU;

	t96 = (x761>>(x762<=(x763-x764)));

	if (t96 != 1442254444489043LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x773 = 2009;
	int32_t x774 = 1;
	int32_t x775 = 435260474;
	int64_t x776 = 30LL;

	t97 = (x773>>(x774<=(x775-x776)));

	if (t97 != 1004) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x791 = 0U;
	volatile uint64_t x792 = UINT64_MAX;
	volatile int32_t t98 = 314164;

	t98 = (x789>>(x790<=(x791-x792)));

	if (t98 != 292) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x793 = UINT32_MAX;
	int16_t x794 = INT16_MAX;
	uint32_t x795 = UINT32_MAX;
	uint64_t x796 = 196546LLU;
	volatile uint32_t t99 = 495U;

	t99 = (x793>>(x794<=(x795-x796)));

	if (t99 != 2147483647U) { NG(); } else { ; }
	
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

