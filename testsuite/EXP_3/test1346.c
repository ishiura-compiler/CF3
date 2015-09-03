#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -11124917;
volatile int64_t t2 = INT64_MAX;
volatile int32_t x17 = 3;
int64_t x44 = -1LL;
int64_t t5 = -36454728128LL;
static volatile int64_t x65 = INT64_MIN;
int8_t x69 = -3;
int32_t x88 = INT32_MAX;
volatile int64_t t11 = 104796LL;
volatile int16_t x94 = INT16_MIN;
static uint32_t t12 = 1U;
static int16_t x98 = -2439;
static int8_t x99 = -1;
static int32_t x104 = -1;
int64_t x139 = INT64_MIN;
int8_t x144 = INT8_MIN;
int8_t x146 = 14;
int64_t x147 = INT64_MIN;
uint8_t x148 = 96U;
int16_t x154 = -1;
uint64_t t21 = 1344LLU;
int64_t t22 = -22095464LL;
int16_t x174 = -1;
volatile uint32_t x176 = 6775U;
uint32_t x185 = UINT32_MAX;
static int8_t x189 = 2;
uint32_t x197 = 145732U;
static int64_t x199 = -1LL;
static uint32_t x205 = 10U;
static int32_t x206 = 1;
int32_t x208 = -145323;
uint32_t t28 = 100682665U;
int32_t t30 = 34;
static int8_t x223 = -1;
uint32_t x227 = 167U;
uint32_t t34 = 1220U;
volatile uint16_t x249 = 10108U;
int32_t t35 = -130;
uint32_t x258 = 951593U;
int8_t x284 = 59;
uint16_t x286 = 54U;
volatile int8_t x287 = INT8_MIN;
static int16_t x292 = -1;
uint16_t x319 = 155U;
volatile int32_t t44 = -219735209;
int16_t x322 = INT16_MIN;
int64_t t46 = 3921816LL;
volatile int64_t x353 = -73913284810LL;
int64_t x354 = INT64_MIN;
volatile uint64_t t52 = 11843LLU;
int32_t x376 = -1;
volatile int32_t t54 = -3;
int32_t x378 = 2368973;
uint64_t x379 = 1122394482162860LLU;
int32_t t56 = -83152;
int64_t x391 = INT64_MIN;
volatile uint64_t t58 = 209535454098LLU;
volatile int32_t t59 = -227306;
static int32_t x437 = 779327906;
int32_t x438 = 245331;
volatile int32_t x439 = INT32_MAX;
static uint32_t x440 = UINT32_MAX;
uint8_t x445 = 12U;
volatile int32_t x449 = 211470;
int8_t x450 = INT8_MAX;
static uint8_t x452 = 10U;
int32_t t65 = 22274;
static volatile int32_t t66 = 258355;
uint32_t x461 = 13033218U;
uint32_t t68 = 81U;
volatile int8_t x467 = INT8_MIN;
int32_t x481 = -1;
int64_t x482 = -456349615LL;
static int16_t x487 = -1;
int8_t x488 = INT8_MIN;
volatile int32_t x494 = INT32_MIN;
volatile int32_t t72 = INT32_MAX;
int8_t x497 = 0;
int32_t x498 = 775;
uint32_t t75 = 2U;
int32_t x530 = INT32_MAX;
int32_t x531 = INT32_MAX;
int16_t x532 = 0;
static uint16_t x543 = UINT16_MAX;
uint32_t x547 = UINT32_MAX;
int64_t x555 = INT64_MIN;
int32_t t80 = -589014226;
uint8_t x561 = 40U;
volatile int8_t x562 = 21;
int16_t x567 = -1;
volatile uint16_t x570 = 13U;
uint32_t x586 = 42055U;
volatile int64_t t87 = 54714695355330LL;
int64_t x608 = INT64_MIN;
volatile uint32_t t90 = 7U;
uint16_t x619 = 234U;
uint8_t x642 = 9U;
int32_t t95 = 143;
volatile int16_t x677 = INT16_MIN;
uint16_t x692 = 8691U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	static volatile uint16_t x2 = 1U;
	int8_t x4 = 0;
	int64_t t0 = 2853LL;

	t0 = ((x1^x2)>>(x3==x4));

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int16_t x6 = INT16_MIN;
	static int8_t x7 = -1;
	int64_t x8 = INT64_MIN;
	static int32_t t1 = -218274;

	t1 = ((x5^x6)>>(x7==x8));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = -1LL;
	volatile int64_t x11 = INT64_MIN;
	volatile int16_t x12 = -1;

	t2 = ((x9^x10)>>(x11==x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x18 = INT8_MAX;
	uint16_t x19 = 9367U;
	int64_t x20 = INT64_MAX;
	int32_t t3 = 1655;

	t3 = ((x17^x18)>>(x19==x20));

	if (t3 != 124) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 35U;
	uint64_t x22 = 174277978942453339LLU;
	volatile uint8_t x23 = UINT8_MAX;
	static int8_t x24 = -1;
	static volatile uint64_t t4 = 4159401555LLU;

	t4 = ((x21^x22)>>(x23==x24));

	if (t4 != 174277978942453368LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MAX;
	uint32_t x42 = 1752058U;
	uint8_t x43 = 3U;

	t5 = ((x41^x42)>>(x43==x44));

	if (t5 != 9223372036853023749LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x49 = UINT32_MAX;
	static int8_t x50 = 14;
	volatile uint64_t x51 = UINT64_MAX;
	static uint64_t x52 = UINT64_MAX;
	uint32_t t6 = 78U;

	t6 = ((x49^x50)>>(x51==x52));

	if (t6 != 2147483640U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x66 = INT32_MIN;
	uint32_t x67 = 21577U;
	volatile uint8_t x68 = 56U;
	int64_t t7 = 390LL;

	t7 = ((x65^x66)>>(x67==x68));

	if (t7 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x70 = -14;
	int8_t x71 = INT8_MIN;
	volatile int16_t x72 = 59;
	volatile int32_t t8 = 928838331;

	t8 = ((x69^x70)>>(x71==x72));

	if (t8 != 15) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = -4;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MAX;
	volatile int64_t t9 = 842377LL;

	t9 = ((x77^x78)>>(x79==x80));

	if (t9 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x81 = INT8_MIN;
	static int8_t x82 = -1;
	static volatile int64_t x83 = INT64_MIN;
	static int64_t x84 = INT64_MIN;
	volatile int32_t t10 = 1177181;

	t10 = ((x81^x82)>>(x83==x84));

	if (t10 != 63) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x85 = 11U;
	int64_t x86 = INT64_MAX;
	uint16_t x87 = UINT16_MAX;

	t11 = ((x85^x86)>>(x87==x88));

	if (t11 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x95 = INT32_MIN;
	volatile int32_t x96 = INT32_MIN;

	t12 = ((x93^x94)>>(x95==x96));

	if (t12 != 16383U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x97 = -1;
	int64_t x100 = INT64_MAX;
	volatile int32_t t13 = 1;

	t13 = ((x97^x98)>>(x99==x100));

	if (t13 != 2438) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = -112;
	static int16_t x103 = INT16_MIN;
	volatile uint32_t t14 = 1547U;

	t14 = ((x101^x102)>>(x103==x104));

	if (t14 != 111U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x109 = 26081344U;
	static uint64_t x110 = 188935LLU;
	uint16_t x111 = UINT16_MAX;
	int8_t x112 = 13;
	static volatile uint64_t t15 = 7635LLU;

	t15 = ((x109^x110)>>(x111==x112));

	if (t15 != 26155591LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x113 = INT16_MAX;
	volatile int16_t x114 = 8669;
	int8_t x115 = -9;
	static uint32_t x116 = UINT32_MAX;
	static int32_t t16 = 451;

	t16 = ((x113^x114)>>(x115==x116));

	if (t16 != 24098) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x121 = UINT64_MAX;
	int64_t x122 = INT64_MAX;
	int8_t x123 = -7;
	uint8_t x124 = 2U;
	static uint64_t t17 = 1009677144505823LLU;

	t17 = ((x121^x122)>>(x123==x124));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x137 = -1LL;
	static volatile int64_t x138 = INT64_MIN;
	static int16_t x140 = 12456;
	volatile int64_t t18 = INT64_MAX;

	t18 = ((x137^x138)>>(x139==x140));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x141 = -1;
	int16_t x142 = -1;
	int8_t x143 = -1;
	static int32_t t19 = 30707318;

	t19 = ((x141^x142)>>(x143==x144));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x145 = 2080763548259438LLU;
	volatile uint64_t t20 = 8053676084487867LLU;

	t20 = ((x145^x146)>>(x147==x148));

	if (t20 != 2080763548259424LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x153 = 724190815LLU;
	static int16_t x155 = INT16_MAX;
	uint64_t x156 = 7168636LLU;

	t21 = ((x153^x154)>>(x155==x156));

	if (t21 != 18446744072985360800LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x157 = INT16_MIN;
	static int64_t x158 = -1063243882780588LL;
	int16_t x159 = 4999;
	int16_t x160 = INT16_MIN;

	t22 = ((x157^x158)>>(x159==x160));

	if (t22 != 1063243882768468LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x173 = INT64_MIN;
	volatile int64_t x175 = 6499LL;
	static int64_t t23 = INT64_MAX;

	t23 = ((x173^x174)>>(x175==x176));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x186 = INT16_MAX;
	static uint8_t x187 = 13U;
	uint64_t x188 = UINT64_MAX;
	volatile uint32_t t24 = 1U;

	t24 = ((x185^x186)>>(x187==x188));

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x190 = 0;
	int8_t x191 = -1;
	int16_t x192 = -1;
	volatile int32_t t25 = -517278;

	t25 = ((x189^x190)>>(x191==x192));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x193 = 263762171637LL;
	uint8_t x194 = 18U;
	volatile int8_t x195 = 0;
	uint32_t x196 = 8U;
	volatile int64_t t26 = -230967955011LL;

	t26 = ((x193^x194)>>(x195==x196));

	if (t26 != 263762171623LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x198 = 4361639426627148LLU;
	uint8_t x200 = 120U;
	static uint64_t t27 = 210719835344456LLU;

	t27 = ((x197^x198)>>(x199==x200));

	if (t27 != 4361639426764552LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x207 = -1LL;

	t28 = ((x205^x206)>>(x207==x208));

	if (t28 != 11U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = -1;
	volatile int64_t x215 = -326948346747526728LL;
	int64_t x216 = INT64_MIN;
	int64_t t29 = INT64_MAX;

	t29 = ((x213^x214)>>(x215==x216));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x217 = -1995;
	int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MAX;
	static int16_t x220 = -104;

	t30 = ((x217^x218)>>(x219==x220));

	if (t30 != 2147481653) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x221 = 185151644U;
	int8_t x222 = 16;
	int64_t x224 = -15955031738LL;
	volatile uint32_t t31 = 80579U;

	t31 = ((x221^x222)>>(x223==x224));

	if (t31 != 185151628U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x225 = INT8_MIN;
	static uint32_t x226 = 1207391U;
	uint64_t x228 = UINT64_MAX;
	volatile uint32_t t32 = 55259092U;

	t32 = ((x225^x226)>>(x227==x228));

	if (t32 != 4293759967U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int16_t x242 = 81;
	static volatile int32_t x243 = INT32_MAX;
	int64_t x244 = -38918350412LL;
	uint64_t t33 = 1063904596431056198LLU;

	t33 = ((x241^x242)>>(x243==x244));

	if (t33 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x245 = 8U;
	static int16_t x246 = 861;
	int64_t x247 = 193714785LL;
	uint64_t x248 = 206460LLU;

	t34 = ((x245^x246)>>(x247==x248));

	if (t34 != 853U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x250 = 2;
	uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = INT16_MAX;

	t35 = ((x249^x250)>>(x251==x252));

	if (t35 != 10110) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x257 = INT32_MIN;
	int16_t x259 = -7;
	int32_t x260 = -56;
	volatile uint32_t t36 = 0U;

	t36 = ((x257^x258)>>(x259==x260));

	if (t36 != 2148435241U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x261 = -252307246399LL;
	uint64_t x262 = 2281824143363517138LLU;
	uint32_t x263 = 843824U;
	uint32_t x264 = UINT32_MAX;
	uint64_t t37 = 282371446917241092LLU;

	t37 = ((x261^x262)>>(x263==x264));

	if (t37 != 16164920159076046867LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x265 = 19;
	uint32_t x266 = 698114669U;
	volatile int64_t x267 = INT64_MAX;
	volatile int8_t x268 = -1;
	volatile uint32_t t38 = 877U;

	t38 = ((x265^x266)>>(x267==x268));

	if (t38 != 698114686U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x277 = 72148236987226098LLU;
	volatile uint16_t x278 = 388U;
	int64_t x279 = -703569LL;
	int8_t x280 = -3;
	volatile uint64_t t39 = 15268LLU;

	t39 = ((x277^x278)>>(x279==x280));

	if (t39 != 72148236987225718LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x281 = UINT32_MAX;
	static int16_t x282 = -1;
	int32_t x283 = INT32_MAX;
	volatile uint32_t t40 = 819292180U;

	t40 = ((x281^x282)>>(x283==x284));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x285 = 0;
	static uint8_t x288 = UINT8_MAX;
	volatile int32_t t41 = -4961;

	t41 = ((x285^x286)>>(x287==x288));

	if (t41 != 54) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x289 = 23714156897LL;
	uint64_t x290 = 373451LLU;
	volatile int16_t x291 = INT16_MIN;
	static uint64_t t42 = 134LLU;

	t42 = ((x289^x290)>>(x291==x292));

	if (t42 != 23714390954LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x301 = 11U;
	static uint64_t x302 = 61632507118658LLU;
	int8_t x303 = -1;
	int64_t x304 = 1089587517944671767LL;
	uint64_t t43 = 1298858174714306712LLU;

	t43 = ((x301^x302)>>(x303==x304));

	if (t43 != 61632507118665LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x317 = 2;
	int16_t x318 = 7;
	static int16_t x320 = INT16_MAX;

	t44 = ((x317^x318)>>(x319==x320));

	if (t44 != 5) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x321 = 2LLU;
	volatile uint16_t x323 = UINT16_MAX;
	int32_t x324 = INT32_MAX;
	uint64_t t45 = 31558880779168085LLU;

	t45 = ((x321^x322)>>(x323==x324));

	if (t45 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x337 = -1181844LL;
	int8_t x338 = -1;
	static int8_t x339 = -1;
	int16_t x340 = 13061;

	t46 = ((x337^x338)>>(x339==x340));

	if (t46 != 1181843LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x341 = -1;
	int16_t x342 = INT16_MIN;
	volatile int16_t x343 = INT16_MIN;
	volatile uint8_t x344 = 41U;
	static int32_t t47 = -35;

	t47 = ((x341^x342)>>(x343==x344));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x345 = UINT32_MAX;
	static int32_t x346 = 0;
	int8_t x347 = INT8_MIN;
	static volatile int16_t x348 = INT16_MIN;
	uint32_t t48 = UINT32_MAX;

	t48 = ((x345^x346)>>(x347==x348));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x349 = INT16_MAX;
	int64_t x350 = 10899426095195062LL;
	static volatile uint8_t x351 = UINT8_MAX;
	uint32_t x352 = UINT32_MAX;
	volatile int64_t t49 = -35201LL;

	t49 = ((x349^x350)>>(x351==x352));

	if (t49 != 10899426095176777LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x355 = 310294548U;
	uint16_t x356 = UINT16_MAX;
	volatile int64_t t50 = -1851680656LL;

	t50 = ((x353^x354)>>(x355==x356));

	if (t50 != 9223371962941490998LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x357 = INT32_MAX;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = -205336;
	int16_t x360 = -1;
	volatile uint32_t t51 = 100382892U;

	t51 = ((x357^x358)>>(x359==x360));

	if (t51 != 2147483648U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x365 = UINT64_MAX;
	static uint8_t x366 = 65U;
	int32_t x367 = INT32_MAX;
	volatile uint64_t x368 = UINT64_MAX;

	t52 = ((x365^x366)>>(x367==x368));

	if (t52 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x369 = -1;
	uint32_t x370 = 57990U;
	uint64_t x371 = 1914LLU;
	int8_t x372 = INT8_MAX;
	volatile uint32_t t53 = 147U;

	t53 = ((x369^x370)>>(x371==x372));

	if (t53 != 4294909305U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x373 = -2;
	int32_t x374 = INT32_MIN;
	uint16_t x375 = 15U;

	t54 = ((x373^x374)>>(x375==x376));

	if (t54 != 2147483646) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x377 = 78U;
	int8_t x380 = INT8_MAX;
	volatile int32_t t55 = 3;

	t55 = ((x377^x378)>>(x379==x380));

	if (t55 != 2368899) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x385 = -1;
	int16_t x386 = -1;
	int8_t x387 = -1;
	volatile uint32_t x388 = 367544U;

	t56 = ((x385^x386)>>(x387==x388));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x389 = INT64_MAX;
	static uint64_t x390 = 872167309507LLU;
	int16_t x392 = INT16_MIN;
	uint64_t t57 = 2513520LLU;

	t57 = ((x389^x390)>>(x391==x392));

	if (t57 != 9223371164687466300LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x401 = INT16_MAX;
	uint64_t x402 = 94488LLU;
	static volatile int64_t x403 = 1LL;
	volatile int16_t x404 = 504;

	t58 = ((x401^x402)>>(x403==x404));

	if (t58 != 69351LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	static int8_t x407 = INT8_MIN;
	static int16_t x408 = INT16_MIN;

	t59 = ((x405^x406)>>(x407==x408));

	if (t59 != 32640) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x413 = INT8_MIN;
	volatile int32_t x414 = INT32_MIN;
	uint16_t x415 = 19475U;
	int32_t x416 = INT32_MAX;
	int32_t t60 = 806697424;

	t60 = ((x413^x414)>>(x415==x416));

	if (t60 != 2147483520) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x429 = 13535247U;
	static uint64_t x430 = 80676946503369982LLU;
	int32_t x431 = -9;
	volatile int8_t x432 = INT8_MIN;
	static volatile uint64_t t61 = 2LLU;

	t61 = ((x429^x430)>>(x431==x432));

	if (t61 != 80676946491149553LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x433 = UINT64_MAX;
	int64_t x434 = INT64_MIN;
	static volatile int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MAX;
	volatile uint64_t t62 = 13792447LLU;

	t62 = ((x433^x434)>>(x435==x436));

	if (t62 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t t63 = 16006;

	t63 = ((x437^x438)>>(x439==x440));

	if (t63 != 779102193) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x446 = 219;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;
	int32_t t64 = -26801021;

	t64 = ((x445^x446)>>(x447==x448));

	if (t64 != 215) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x451 = 5491;

	t65 = ((x449^x450)>>(x451==x452));

	if (t65 != 211569) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x453 = 588U;
	int32_t x454 = INT32_MAX;
	int32_t x455 = INT32_MAX;
	uint32_t x456 = 263717U;

	t66 = ((x453^x454)>>(x455==x456));

	if (t66 != 2147483059) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x457 = INT64_MIN;
	static int32_t x458 = -1;
	int64_t x459 = 550993544132878LL;
	int32_t x460 = INT32_MAX;
	volatile int64_t t67 = INT64_MAX;

	t67 = ((x457^x458)>>(x459==x460));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x462 = 96U;
	uint32_t x463 = 2U;
	static int8_t x464 = INT8_MIN;

	t68 = ((x461^x462)>>(x463==x464));

	if (t68 != 13033314U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x465 = 1LLU;
	uint8_t x466 = 0U;
	int32_t x468 = 7871490;
	uint64_t t69 = 195127LLU;

	t69 = ((x465^x466)>>(x467==x468));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x483 = 0U;
	int32_t x484 = -211190;
	int64_t t70 = 25382173692814LL;

	t70 = ((x481^x482)>>(x483==x484));

	if (t70 != 456349614LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x485 = -1;
	static uint32_t x486 = UINT32_MAX;
	static volatile uint32_t t71 = 0U;

	t71 = ((x485^x486)>>(x487==x488));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x493 = -1;
	static int16_t x495 = INT16_MAX;
	volatile int16_t x496 = -1;

	t72 = ((x493^x494)>>(x495==x496));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x499 = -1LL;
	static uint8_t x500 = UINT8_MAX;
	volatile int32_t t73 = -30769702;

	t73 = ((x497^x498)>>(x499==x500));

	if (t73 != 775) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x513 = INT32_MAX;
	int16_t x514 = INT16_MAX;
	int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MAX;
	static int32_t t74 = -1;

	t74 = ((x513^x514)>>(x515==x516));

	if (t74 != 2147450880) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x517 = 4071734U;
	uint8_t x518 = UINT8_MAX;
	int16_t x519 = INT16_MAX;
	static uint16_t x520 = 511U;

	t75 = ((x517^x518)>>(x519==x520));

	if (t75 != 4071881U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x525 = INT32_MIN;
	int16_t x526 = -1;
	volatile uint16_t x527 = UINT16_MAX;
	uint64_t x528 = 578573LLU;
	volatile int32_t t76 = INT32_MAX;

	t76 = ((x525^x526)>>(x527==x528));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x529 = INT16_MAX;
	int32_t t77 = -86032;

	t77 = ((x529^x530)>>(x531==x532));

	if (t77 != 2147450880) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x541 = INT64_MIN;
	int64_t x542 = -1LL;
	int32_t x544 = -1;
	int64_t t78 = INT64_MAX;

	t78 = ((x541^x542)>>(x543==x544));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x545 = INT64_MIN;
	static volatile int32_t x546 = -19;
	uint16_t x548 = 398U;
	int64_t t79 = 40964840LL;

	t79 = ((x545^x546)>>(x547==x548));

	if (t79 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x553 = INT8_MIN;
	int8_t x554 = INT8_MIN;
	int16_t x556 = -8002;

	t80 = ((x553^x554)>>(x555==x556));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x563 = INT8_MAX;
	uint8_t x564 = 11U;
	volatile int32_t t81 = 99915445;

	t81 = ((x561^x562)>>(x563==x564));

	if (t81 != 61) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x565 = 134873039973LLU;
	int16_t x566 = INT16_MIN;
	int16_t x568 = -3961;
	uint64_t t82 = 101463LLU;

	t82 = ((x565^x566)>>(x567==x568));

	if (t82 != 18446743938836513893LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x569 = INT64_MAX;
	uint64_t x571 = 8LLU;
	int64_t x572 = -1LL;
	volatile int64_t t83 = 50525034LL;

	t83 = ((x569^x570)>>(x571==x572));

	if (t83 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x573 = INT16_MIN;
	int8_t x574 = -59;
	int16_t x575 = -157;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t84 = 403086807;

	t84 = ((x573^x574)>>(x575==x576));

	if (t84 != 32709) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x577 = -127;
	int64_t x578 = INT64_MIN;
	int32_t x579 = INT32_MIN;
	volatile int16_t x580 = INT16_MIN;
	int64_t t85 = 893023788555822128LL;

	t85 = ((x577^x578)>>(x579==x580));

	if (t85 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x585 = -1;
	volatile int16_t x587 = INT16_MIN;
	static volatile int8_t x588 = -1;
	uint32_t t86 = 313U;

	t86 = ((x585^x586)>>(x587==x588));

	if (t86 != 4294925240U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x589 = 48U;
	int64_t x590 = 78973589LL;
	uint16_t x591 = 18U;
	static volatile uint64_t x592 = 9LLU;

	t87 = ((x589^x590)>>(x591==x592));

	if (t87 != 78973605LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x597 = UINT16_MAX;
	volatile uint64_t x598 = 21LLU;
	int32_t x599 = INT32_MIN;
	int32_t x600 = INT32_MIN;
	volatile uint64_t t88 = 0LLU;

	t88 = ((x597^x598)>>(x599==x600));

	if (t88 != 32757LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x605 = 422898LLU;
	uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MAX;
	uint64_t t89 = 28318144734949LLU;

	t89 = ((x605^x606)>>(x607==x608));

	if (t89 != 429069LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x609 = UINT32_MAX;
	uint8_t x610 = 2U;
	uint64_t x611 = 1652301437563LLU;
	static volatile uint64_t x612 = 102714LLU;

	t90 = ((x609^x610)>>(x611==x612));

	if (t90 != 4294967293U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x617 = 555LLU;
	volatile uint16_t x618 = 8640U;
	int32_t x620 = INT32_MIN;
	static uint64_t t91 = 4054216LLU;

	t91 = ((x617^x618)>>(x619==x620));

	if (t91 != 9195LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x629 = INT16_MIN;
	static int32_t x630 = -1;
	int8_t x631 = -1;
	volatile int16_t x632 = -1;
	volatile int32_t t92 = -735686246;

	t92 = ((x629^x630)>>(x631==x632));

	if (t92 != 16383) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x637 = 8694859LLU;
	static uint32_t x638 = UINT32_MAX;
	int64_t x639 = -551654647952786LL;
	static int32_t x640 = INT32_MIN;
	uint64_t t93 = 9220073LLU;

	t93 = ((x637^x638)>>(x639==x640));

	if (t93 != 4286272436LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x641 = INT32_MAX;
	int32_t x643 = -5709710;
	uint8_t x644 = 23U;
	static int32_t t94 = 3599;

	t94 = ((x641^x642)>>(x643==x644));

	if (t94 != 2147483638) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x645 = INT8_MIN;
	int32_t x646 = INT32_MIN;
	int64_t x647 = -60879809037850LL;
	int8_t x648 = 0;

	t95 = ((x645^x646)>>(x647==x648));

	if (t95 != 2147483520) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x649 = INT16_MIN;
	volatile int64_t x650 = -23188062667960350LL;
	int16_t x651 = -5;
	int64_t x652 = INT64_MIN;
	volatile int64_t t96 = 6206656563964LL;

	t96 = ((x649^x650)>>(x651==x652));

	if (t96 != 23188062667935714LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x669 = 0;
	uint8_t x670 = 23U;
	uint32_t x671 = 1405U;
	static int8_t x672 = INT8_MIN;
	volatile int32_t t97 = -70656036;

	t97 = ((x669^x670)>>(x671==x672));

	if (t97 != 23) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x678 = INT8_MIN;
	int8_t x679 = INT8_MAX;
	static int64_t x680 = -1LL;
	int32_t t98 = 112;

	t98 = ((x677^x678)>>(x679==x680));

	if (t98 != 32640) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x689 = 387U;
	uint16_t x690 = 94U;
	static int64_t x691 = INT64_MIN;
	volatile uint32_t t99 = 32907656U;

	t99 = ((x689^x690)>>(x691==x692));

	if (t99 != 477U) { NG(); } else { ; }
	
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

