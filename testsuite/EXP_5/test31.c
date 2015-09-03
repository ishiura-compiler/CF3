#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MAX;
volatile int64_t x27 = -1LL;
volatile int16_t x38 = INT16_MIN;
int8_t x46 = -3;
static volatile uint32_t x50 = 621U;
static int8_t x55 = INT8_MIN;
volatile uint16_t x76 = 2U;
uint64_t t9 = 527298497039097LLU;
static int16_t x96 = 9664;
int64_t x98 = -1LL;
volatile int64_t t12 = -2844036836046134118LL;
static uint8_t x102 = UINT8_MAX;
uint64_t t14 = 4238028761232633789LLU;
int8_t x151 = INT8_MIN;
int8_t x174 = INT8_MIN;
uint64_t t18 = 4103603LLU;
static int32_t x187 = INT32_MAX;
int16_t x189 = -1;
int16_t x192 = 380;
static int64_t t21 = 11076294LL;
int64_t x206 = -1LL;
uint8_t x207 = 28U;
volatile uint16_t x214 = 4U;
uint32_t x222 = 669977286U;
uint8_t x223 = UINT8_MAX;
int64_t x226 = INT64_MAX;
uint8_t x243 = UINT8_MAX;
int64_t t29 = 14929341547552908LL;
static int64_t x251 = -263409304263LL;
static volatile int32_t x252 = -1;
static int64_t t30 = 28693162807297847LL;
uint16_t x257 = 35U;
volatile int32_t t31 = -2118;
volatile uint32_t t32 = 231491U;
uint16_t x270 = 1303U;
uint8_t x294 = UINT8_MAX;
volatile int32_t t38 = -153;
uint32_t x323 = UINT32_MAX;
volatile int32_t x343 = -5;
static uint64_t t44 = 14585853823403LLU;
static uint64_t t45 = 2228288932156900897LLU;
volatile int16_t x363 = 7124;
uint64_t t47 = 8101692082422489LLU;
int16_t x374 = INT16_MIN;
int32_t t48 = -125268830;
static int64_t t49 = 537524589141573808LL;
static volatile int8_t x385 = INT8_MIN;
int16_t x386 = INT16_MIN;
volatile int16_t x387 = INT16_MAX;
int16_t x389 = -1;
volatile uint16_t x393 = 1118U;
volatile uint16_t x395 = 124U;
int32_t t52 = -12183;
static volatile int32_t x397 = -27705492;
uint32_t x433 = UINT32_MAX;
int16_t x434 = INT16_MAX;
int8_t x436 = INT8_MIN;
uint32_t t58 = 36355U;
uint8_t x440 = UINT8_MAX;
uint32_t x447 = UINT32_MAX;
uint16_t x448 = 13U;
int16_t x450 = 9587;
int8_t x461 = INT8_MAX;
int8_t x479 = -7;
static uint8_t x480 = 1U;
int32_t x485 = INT32_MIN;
uint16_t x488 = 251U;
volatile int64_t t65 = -2784861LL;
volatile uint8_t x500 = 6U;
uint32_t t69 = 0U;
int16_t x529 = -1;
static int32_t x532 = -1;
static int16_t x534 = 0;
int16_t x535 = INT16_MIN;
int8_t x539 = -1;
static int16_t x549 = -201;
static int16_t x550 = INT16_MIN;
volatile uint32_t x558 = UINT32_MAX;
uint8_t x567 = 9U;
static uint64_t t77 = 1619LLU;
volatile int8_t x580 = INT8_MIN;
volatile uint16_t x581 = 1012U;
uint16_t x593 = 24019U;
volatile uint16_t x594 = 0U;
volatile int32_t t80 = 0;
int8_t x602 = 26;
volatile uint32_t t86 = 34385725U;
int64_t x636 = INT64_MIN;
int16_t x638 = -1;
int16_t x641 = INT16_MAX;
volatile int32_t x643 = 1761100;
static volatile uint64_t t91 = 401LLU;
int32_t x670 = INT32_MAX;
uint32_t t93 = 4U;
uint64_t x680 = 142155LLU;
volatile uint32_t x692 = 2022U;
int64_t x700 = -1LL;


void f0(void) {
	volatile int32_t x1 = -1;
	uint32_t x3 = UINT32_MAX;
	static uint64_t x4 = 42813741249LLU;
	volatile uint64_t t0 = 76527897349846LLU;

	t0 = (x1%((x2+x3)*x4));

	if (t0 != 3702572826891LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x17 = 28022164LLU;
	int8_t x18 = INT8_MAX;
	uint64_t x19 = UINT64_MAX;
	static volatile uint16_t x20 = 29365U;
	uint64_t t1 = 3808053412799879969LLU;

	t1 = (x17%((x18+x19)*x20));

	if (t1 != 2122234LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = -43;
	int16_t x28 = -1;
	int64_t t2 = 13933417569LL;

	t2 = (x25%((x26+x27)*x28));

	if (t2 != -24LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x37 = INT64_MAX;
	static int32_t x39 = 171;
	int8_t x40 = INT8_MAX;
	static int64_t t3 = 201230145595184718LL;

	t3 = (x37%((x38+x39)*x40));

	if (t3 != 3035300LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x45 = INT64_MIN;
	volatile int16_t x47 = -6505;
	volatile int16_t x48 = INT16_MAX;
	volatile int64_t t4 = -14243576917LL;

	t4 = (x45%((x46+x47)*x48));

	if (t4 != -162393260LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x49 = 4179331;
	volatile uint64_t x51 = 29LLU;
	static volatile uint64_t x52 = 302859588LLU;
	static volatile uint64_t t5 = 6LLU;

	t5 = (x49%((x50+x51)*x52));

	if (t5 != 4179331LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x53 = 12;
	int16_t x54 = 3805;
	int8_t x56 = INT8_MAX;
	volatile int32_t t6 = -122837;

	t6 = (x53%((x54+x55)*x56));

	if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x65 = INT32_MAX;
	int8_t x66 = 0;
	int64_t x67 = -1LL;
	volatile int8_t x68 = INT8_MIN;
	int64_t t7 = -34LL;

	t7 = (x65%((x66+x67)*x68));

	if (t7 != 127LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x70 = -454;
	uint64_t x71 = 148367972164LLU;
	int32_t x72 = -17730;
	volatile uint64_t t8 = 0LLU;

	t8 = (x69%((x70+x71)*x72));

	if (t8 != 4294967295LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x73 = 3117LLU;
	static int8_t x74 = INT8_MAX;
	volatile uint32_t x75 = 32665390U;

	t9 = (x73%((x74+x75)*x76));

	if (t9 != 3117LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x77 = 3U;
	int32_t x78 = 56;
	static int8_t x79 = 35;
	int8_t x80 = -1;
	static volatile int32_t t10 = 14466;

	t10 = (x77%((x78+x79)*x80));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x93 = INT16_MAX;
	int8_t x94 = -1;
	volatile int16_t x95 = INT16_MIN;
	static volatile int32_t t11 = -52617;

	t11 = (x93%((x94+x95)*x96));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x97 = -1;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = -1;

	t12 = (x97%((x98+x99)*x100));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x101 = INT16_MAX;
	int32_t x103 = 17;
	int16_t x104 = INT16_MIN;
	volatile int32_t t13 = 106990;

	t13 = (x101%((x102+x103)*x104));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x117 = -772;
	int32_t x118 = INT32_MIN;
	static uint64_t x119 = 9570LLU;
	int8_t x120 = 29;

	t14 = (x117%((x118+x119)*x120));

	if (t14 != 62276747490LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x149 = 0U;
	uint8_t x150 = UINT8_MAX;
	uint8_t x152 = 18U;
	static volatile int32_t t15 = -4933;

	t15 = (x149%((x150+x151)*x152));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int16_t x154 = INT16_MAX;
	uint32_t x155 = 772629U;
	volatile uint64_t x156 = 1755030LLU;
	uint64_t t16 = 433LLU;

	t16 = (x153%((x154+x155)*x156));

	if (t16 != 968846854335LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x157 = -189305113668LL;
	static int8_t x158 = INT8_MIN;
	static uint16_t x159 = UINT16_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t17 = 3LL;

	t17 = (x157%((x158+x159)*x160));

	if (t17 != -329430552LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x173 = -30;
	uint64_t x175 = 45884947042548286LLU;
	int64_t x176 = 2045021LL;

	t18 = (x173%((x174+x175)*x176));

	if (t18 != 2906817061612449244LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x181 = 23U;
	uint32_t x182 = 1251098U;
	volatile uint16_t x183 = 14U;
	static uint64_t x184 = 559577551669978LLU;
	static volatile uint64_t t19 = 7657995054451LLU;

	t19 = (x181%((x182+x183)*x184));

	if (t19 != 23LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x185 = INT8_MAX;
	uint64_t x186 = 311228879532733LLU;
	int8_t x188 = INT8_MAX;
	uint64_t t20 = 244468139630LLU;

	t20 = (x185%((x186+x187)*x188));

	if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x190 = INT8_MAX;
	int64_t x191 = -1LL;

	t21 = (x189%((x190+x191)*x192));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = 0;
	int16_t x199 = INT16_MIN;
	static uint16_t x200 = 6862U;
	volatile int32_t t22 = 379;

	t22 = (x197%((x198+x199)*x200));

	if (t22 != -123797504) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x201 = 26953LLU;
	int64_t x202 = INT64_MAX;
	int64_t x203 = INT64_MIN;
	int32_t x204 = -1;
	volatile uint64_t t23 = 436462361291789558LLU;

	t23 = (x201%((x202+x203)*x204));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x205 = INT64_MIN;
	int32_t x208 = INT32_MAX;
	volatile int64_t t24 = 32132667045137411LL;

	t24 = (x205%((x206+x207)*x208));

	if (t24 != -51539607530LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x213 = INT8_MIN;
	volatile uint32_t x215 = 2U;
	uint64_t x216 = UINT64_MAX;
	static uint64_t t25 = 2228217934800LLU;

	t25 = (x213%((x214+x215)*x216));

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x221 = 44625677U;
	uint8_t x224 = 8U;
	volatile uint32_t t26 = 1998522863U;

	t26 = (x221%((x222+x223)*x224));

	if (t26 != 44625677U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x225 = -1;
	uint64_t x227 = 3098026045332805LLU;
	int64_t x228 = -185450634LL;
	static volatile uint64_t t27 = 3474LLU;

	t27 = (x225%((x226+x227)*x228));

	if (t27 != 7050079797257717415LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x229 = -30567;
	int32_t x230 = -18;
	int8_t x231 = -1;
	static int64_t x232 = 71LL;
	volatile int64_t t28 = 3758558LL;

	t28 = (x229%((x230+x231)*x232));

	if (t28 != -889LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x241 = UINT16_MAX;
	static int16_t x242 = 30;
	int64_t x244 = -1LL;

	t29 = (x241%((x242+x243)*x244));

	if (t29 != 270LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x249 = 17642U;
	static uint16_t x250 = 148U;

	t30 = (x249%((x250+x251)*x252));

	if (t30 != 17642LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x258 = -3;
	volatile int16_t x259 = 9258;
	int16_t x260 = -1;

	t31 = (x257%((x258+x259)*x260));

	if (t31 != 35) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x265 = 0U;
	static uint8_t x266 = 0U;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 12U;

	t32 = (x265%((x266+x267)*x268));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x269 = -1LL;
	static int8_t x271 = INT8_MIN;
	int8_t x272 = 19;
	int64_t t33 = 163798LL;

	t33 = (x269%((x270+x271)*x272));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x273 = -1;
	int64_t x274 = -1LL;
	uint16_t x275 = 2U;
	static int32_t x276 = -1;
	int64_t t34 = -109251115029886LL;

	t34 = (x273%((x274+x275)*x276));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x277 = 5U;
	static volatile uint16_t x278 = 17U;
	int16_t x279 = -1;
	int8_t x280 = INT8_MAX;
	int32_t t35 = 278236193;

	t35 = (x277%((x278+x279)*x280));

	if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x285 = 2U;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MAX;
	volatile int8_t x288 = 1;
	int32_t t36 = 41568;

	t36 = (x285%((x286+x287)*x288));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x293 = 31U;
	uint8_t x295 = 47U;
	int8_t x296 = -1;
	int32_t t37 = 252372;

	t37 = (x293%((x294+x295)*x296));

	if (t37 != 31) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x313 = -1;
	int8_t x314 = 4;
	volatile int16_t x315 = 609;
	int32_t x316 = -74;

	t38 = (x313%((x314+x315)*x316));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x317 = -11;
	int32_t x318 = INT32_MIN;
	uint64_t x319 = UINT64_MAX;
	volatile uint64_t x320 = 9973301612140LLU;
	static uint64_t t39 = 1153931LLU;

	t39 = (x317%((x318+x319)*x320));

	if (t39 != 832269039200472673LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MAX;
	int8_t x324 = INT8_MAX;
	uint32_t t40 = 23659U;

	t40 = (x321%((x322+x323)*x324));

	if (t40 != 14366U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x325 = 119U;
	uint32_t x326 = 2867654U;
	int32_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	static uint32_t t41 = 1390322U;

	t41 = (x325%((x326+x327)*x328));

	if (t41 != 119U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x337 = 38690U;
	uint64_t x338 = 4003941854405466LLU;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = -1;
	uint64_t t42 = 77LLU;

	t42 = (x337%((x338+x339)*x340));

	if (t42 != 38690LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x341 = UINT64_MAX;
	static uint8_t x342 = 7U;
	uint16_t x344 = UINT16_MAX;
	static volatile uint64_t t43 = 15048535735413LLU;

	t43 = (x341%((x342+x343)*x344));

	if (t43 != 65535LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x349 = 255782695LLU;
	int64_t x350 = -1LL;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;

	t44 = (x349%((x350+x351)*x352));

	if (t44 != 255782695LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x357 = UINT64_MAX;
	int8_t x358 = INT8_MAX;
	int32_t x359 = INT32_MIN;
	uint64_t x360 = 256072941LLU;

	t45 = (x357%((x358+x359)*x360));

	if (t45 != 549912420971505260LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x361 = 17U;
	static int64_t x362 = -1LL;
	static int8_t x364 = INT8_MIN;
	volatile int64_t t46 = 6570397061LL;

	t46 = (x361%((x362+x363)*x364));

	if (t46 != 17LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x369 = -87LL;
	static int8_t x370 = INT8_MAX;
	static uint64_t x371 = 1372LLU;
	uint8_t x372 = 28U;

	t47 = (x369%((x370+x371)*x372));

	if (t47 != 34369LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x373 = -11;
	int16_t x375 = INT16_MAX;
	volatile int32_t x376 = -130141933;

	t48 = (x373%((x374+x375)*x376));

	if (t48 != -11) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x381 = -1;
	static volatile int16_t x382 = INT16_MIN;
	int64_t x383 = 21880637621LL;
	volatile int32_t x384 = -45;

	t49 = (x381%((x382+x383)*x384));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x388 = 35281348LLU;
	uint64_t t50 = 132659165LLU;

	t50 = (x385%((x386+x387)*x388));

	if (t50 != 35281220LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x390 = 362852718LLU;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 7U;
	volatile uint64_t t51 = 39788218LLU;

	t51 = (x389%((x390+x391)*x392));

	if (t51 != 894162865LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x394 = -3;
	int8_t x396 = -1;

	t52 = (x393%((x394+x395)*x396));

	if (t52 != 29) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x398 = -1LL;
	static int32_t x399 = -1;
	static int16_t x400 = -1;
	volatile int64_t t53 = -13381LL;

	t53 = (x397%((x398+x399)*x400));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x405 = INT64_MAX;
	uint64_t x406 = 2476230931952LLU;
	int16_t x407 = 0;
	static volatile int8_t x408 = INT8_MIN;
	static volatile uint64_t t54 = 153451986833907317LLU;

	t54 = (x405%((x406+x407)*x408));

	if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x409 = -1;
	static int8_t x410 = INT8_MIN;
	int64_t x411 = 1844LL;
	volatile int32_t x412 = INT32_MAX;
	volatile int64_t t55 = -8375664330LL;

	t55 = (x409%((x410+x411)*x412));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x417 = -14;
	volatile uint16_t x418 = 0U;
	uint16_t x419 = 77U;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t56 = 9572;

	t56 = (x417%((x418+x419)*x420));

	if (t56 != -14) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x425 = -1;
	int64_t x426 = -1LL;
	int32_t x427 = -174;
	int32_t x428 = 245288;
	volatile int64_t t57 = 135753393246LL;

	t57 = (x425%((x426+x427)*x428));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x435 = 1;

	t58 = (x433%((x434+x435)*x436));

	if (t58 != 4194303U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x437 = 6469004846878LLU;
	int32_t x438 = -1;
	uint8_t x439 = 7U;
	volatile uint64_t t59 = 2173964386521933575LLU;

	t59 = (x437%((x438+x439)*x440));

	if (t59 != 88LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x445 = 78736395;
	volatile uint16_t x446 = 792U;
	volatile uint32_t t60 = 0U;

	t60 = (x445%((x446+x447)*x448));

	if (t60 != 9747U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x449 = -6463;
	int16_t x451 = INT16_MAX;
	int8_t x452 = INT8_MIN;
	volatile int32_t t61 = -3657364;

	t61 = (x449%((x450+x451)*x452));

	if (t61 != -6463) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x453 = 43;
	int16_t x454 = 1192;
	volatile int8_t x455 = INT8_MIN;
	uint64_t x456 = 3678908703670598LLU;
	volatile uint64_t t62 = 8299860247740104LLU;

	t62 = (x453%((x454+x455)*x456));

	if (t62 != 43LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x462 = 5U;
	int16_t x463 = 1;
	uint32_t x464 = 746U;
	volatile uint32_t t63 = 134514U;

	t63 = (x461%((x462+x463)*x464));

	if (t63 != 127U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x477 = INT8_MIN;
	uint32_t x478 = 43U;
	volatile uint32_t t64 = 0U;

	t64 = (x477%((x478+x479)*x480));

	if (t64 != 20U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x486 = -225020764047LL;
	uint8_t x487 = 13U;

	t65 = (x485%((x486+x487)*x488));

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x489 = INT16_MAX;
	int8_t x490 = INT8_MIN;
	volatile int64_t x491 = -1LL;
	int16_t x492 = INT16_MAX;
	static int64_t t66 = 1699287646316263927LL;

	t66 = (x489%((x490+x491)*x492));

	if (t66 != 32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x493 = INT64_MIN;
	int16_t x494 = INT16_MAX;
	volatile int16_t x495 = -1;
	static int8_t x496 = -1;
	int64_t t67 = -61LL;

	t67 = (x493%((x494+x495)*x496));

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x497 = INT16_MIN;
	uint64_t x498 = 121485926846434LLU;
	int16_t x499 = -1;
	volatile uint64_t t68 = 7202506158311117439LLU;

	t68 = (x497%((x498+x499)*x500));

	if (t68 != 77969493439262LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x505 = INT16_MAX;
	static int16_t x506 = -8;
	static volatile int8_t x507 = INT8_MAX;
	static uint32_t x508 = 1647300U;

	t69 = (x505%((x506+x507)*x508));

	if (t69 != 32767U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x530 = 108136650LL;
	uint64_t x531 = 244704LLU;
	uint64_t t70 = 91733LLU;

	t70 = (x529%((x530+x531)*x532));

	if (t70 != 108381353LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x533 = UINT8_MAX;
	volatile uint8_t x536 = UINT8_MAX;
	volatile int32_t t71 = -156;

	t71 = (x533%((x534+x535)*x536));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x537 = 102304;
	uint32_t x538 = UINT32_MAX;
	int8_t x540 = INT8_MIN;
	uint32_t t72 = 403U;

	t72 = (x537%((x538+x539)*x540));

	if (t72 != 160U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x551 = UINT32_MAX;
	uint64_t x552 = UINT64_MAX;
	uint64_t t73 = 119913181LLU;

	t73 = (x549%((x550+x551)*x552));

	if (t73 != 4294934326LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x557 = INT8_MIN;
	uint8_t x559 = 8U;
	static volatile uint16_t x560 = 12U;
	static volatile uint32_t t74 = 1698U;

	t74 = (x557%((x558+x559)*x560));

	if (t74 != 44U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x561 = 0;
	int64_t x562 = INT64_MIN;
	volatile uint64_t x563 = UINT64_MAX;
	int16_t x564 = INT16_MIN;
	uint64_t t75 = 7479959571LLU;

	t75 = (x561%((x562+x563)*x564));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x565 = -1;
	uint16_t x566 = 25U;
	uint16_t x568 = 28U;
	static volatile int32_t t76 = -7833;

	t76 = (x565%((x566+x567)*x568));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x569 = INT32_MAX;
	static uint32_t x570 = UINT32_MAX;
	uint16_t x571 = 7U;
	uint64_t x572 = 990186LLU;

	t77 = (x569%((x570+x571)*x572));

	if (t77 != 2740771LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x577 = 377;
	static int64_t x578 = 5073926203LL;
	static uint16_t x579 = 7U;
	volatile int64_t t78 = 534369772LL;

	t78 = (x577%((x578+x579)*x580));

	if (t78 != 377LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x582 = INT16_MIN;
	volatile int16_t x583 = INT16_MIN;
	static int32_t x584 = -1;
	static volatile int32_t t79 = 14770;

	t79 = (x581%((x582+x583)*x584));

	if (t79 != 1012) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x595 = -83;
	int16_t x596 = -1;

	t80 = (x593%((x594+x595)*x596));

	if (t80 != 32) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x597 = -1235;
	static int16_t x598 = 0;
	int16_t x599 = INT16_MIN;
	static int32_t x600 = -605;
	volatile int32_t t81 = -153411705;

	t81 = (x597%((x598+x599)*x600));

	if (t81 != -1235) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x601 = 3U;
	volatile int16_t x603 = -1;
	uint32_t x604 = 1118U;
	uint32_t t82 = 12U;

	t82 = (x601%((x602+x603)*x604));

	if (t82 != 3U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x605 = 209U;
	int64_t x606 = -1LL;
	uint16_t x607 = 770U;
	int32_t x608 = INT32_MAX;
	static volatile int64_t t83 = 7764520264834862LL;

	t83 = (x605%((x606+x607)*x608));

	if (t83 != 209LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x617 = INT64_MAX;
	static int8_t x618 = INT8_MIN;
	uint8_t x619 = UINT8_MAX;
	int64_t x620 = -1802721LL;
	int64_t t84 = -2151549042LL;

	t84 = (x617%((x618+x619)*x620));

	if (t84 != 103466011LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x625 = INT16_MIN;
	uint32_t x626 = UINT32_MAX;
	volatile int32_t x627 = -21;
	static volatile int16_t x628 = 13412;
	volatile uint32_t t85 = 357809U;

	t85 = (x625%((x626+x627)*x628));

	if (t85 != 262296U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x629 = -26552;
	uint32_t x630 = 12U;
	static int8_t x631 = INT8_MIN;
	volatile uint16_t x632 = 10666U;

	t86 = (x629%((x630+x631)*x632));

	if (t86 != 1210704U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x633 = -1;
	int8_t x634 = INT8_MIN;
	uint64_t x635 = 1271853LLU;
	volatile uint64_t t87 = 21375LLU;

	t87 = (x633%((x634+x635)*x636));

	if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x637 = INT16_MAX;
	int16_t x639 = -1;
	static uint8_t x640 = UINT8_MAX;
	volatile int32_t t88 = -8;

	t88 = (x637%((x638+x639)*x640));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x642 = 62450139214714LLU;
	volatile uint32_t x644 = 3444578U;
	static volatile uint64_t t89 = 882199481766LLU;

	t89 = (x641%((x642+x643)*x644));

	if (t89 != 32767LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x645 = INT64_MAX;
	uint64_t x646 = UINT64_MAX;
	static volatile int32_t x647 = 115746416;
	int8_t x648 = INT8_MIN;
	uint64_t t90 = 148095LLU;

	t90 = (x645%((x646+x647)*x648));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x657 = 595;
	static uint64_t x658 = 1003LLU;
	uint64_t x659 = 809029992668884LLU;
	static int16_t x660 = INT16_MIN;

	t91 = (x657%((x658+x659)*x660));

	if (t91 != 595LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x665 = -1;
	static int32_t x666 = -306641;
	int16_t x667 = INT16_MIN;
	static volatile uint16_t x668 = 237U;
	int32_t t92 = -31384975;

	t92 = (x665%((x666+x667)*x668));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x669 = INT8_MIN;
	uint32_t x671 = 980572928U;
	int8_t x672 = INT8_MIN;

	t93 = (x669%((x670+x671)*x672));

	if (t93 != 959282944U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x677 = -1;
	uint64_t x678 = 107339238428LLU;
	uint16_t x679 = 134U;
	volatile uint64_t t94 = 55983001520LLU;

	t94 = (x677%((x678+x679)*x680));

	if (t94 != 14102248709970735LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x681 = -50;
	volatile int64_t x682 = INT64_MAX;
	volatile uint64_t x683 = UINT64_MAX;
	int32_t x684 = INT32_MIN;
	uint64_t t95 = 5339293149377LLU;

	t95 = (x681%((x682+x683)*x684));

	if (t95 != 4294967246LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x689 = INT16_MIN;
	int16_t x690 = INT16_MIN;
	volatile uint64_t x691 = 634621552LLU;
	volatile uint64_t t96 = 270512519338LLU;

	t96 = (x689%((x690+x691)*x692));

	if (t96 != 811124576384LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x693 = -1;
	int64_t x694 = -1LL;
	int64_t x695 = -1LL;
	static uint64_t x696 = UINT64_MAX;
	uint64_t t97 = 468435798614LLU;

	t97 = (x693%((x694+x695)*x696));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x697 = INT16_MAX;
	uint64_t x698 = 1694013198194334410LLU;
	int16_t x699 = 1930;
	volatile uint64_t t98 = 118251579LLU;

	t98 = (x697%((x698+x699)*x700));

	if (t98 != 32767LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x701 = 54246280948132429LL;
	int16_t x702 = -2533;
	int16_t x703 = INT16_MIN;
	static volatile int8_t x704 = -1;
	volatile int64_t t99 = -491090531932678LL;

	t99 = (x701%((x702+x703)*x704));

	if (t99 != 1402LL) { NG(); } else { ; }
	
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

