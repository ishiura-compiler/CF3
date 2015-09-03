#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
volatile uint64_t x7 = 4176487LLU;
uint64_t t1 = 4446000LLU;
static int16_t x20 = INT16_MAX;
int16_t x21 = 5;
uint8_t x46 = UINT8_MAX;
static int64_t x57 = INT64_MIN;
static int8_t x79 = INT8_MAX;
int16_t x81 = 117;
int8_t x83 = 6;
uint32_t t17 = 15959U;
int64_t x105 = -6659782580LL;
static int64_t x113 = INT64_MIN;
uint64_t t20 = 3872846032475982445LLU;
int64_t x126 = INT64_MIN;
uint64_t x136 = 68909306LLU;
int32_t x137 = INT32_MIN;
volatile int16_t x145 = INT16_MIN;
volatile int16_t x147 = INT16_MIN;
static volatile int64_t x148 = -1LL;
volatile uint32_t x149 = 27U;
uint8_t x151 = 1U;
volatile int32_t t26 = 5312756;
volatile int32_t x158 = 5974;
volatile uint32_t t28 = 5U;
uint64_t x174 = 54386LLU;
int32_t x183 = INT32_MAX;
int16_t x207 = -321;
volatile int16_t x217 = -617;
static volatile uint32_t t34 = 5835U;
static uint8_t x226 = 9U;
uint32_t x228 = 506329607U;
static uint8_t x237 = UINT8_MAX;
uint64_t x239 = 23944244322831356LLU;
volatile uint64_t t36 = 155LLU;
uint64_t x241 = 1LLU;
volatile uint32_t t37 = 1953884U;
static int32_t x246 = INT32_MAX;
int8_t x248 = -17;
int16_t x252 = -13413;
static int32_t t39 = 592242183;
int16_t x254 = INT16_MIN;
int16_t x255 = -17;
int8_t x263 = 15;
uint16_t x271 = 1U;
uint64_t x273 = 178559469LLU;
uint8_t x275 = 4U;
int8_t x293 = INT8_MIN;
static volatile uint8_t x295 = 15U;
static volatile uint64_t x303 = UINT64_MAX;
volatile uint32_t x311 = UINT32_MAX;
static volatile uint16_t x316 = 1U;
volatile int32_t t48 = 0;
volatile int16_t x328 = INT16_MIN;
static int16_t x332 = INT16_MAX;
int64_t x346 = 1186148LL;
int32_t x348 = INT32_MIN;
volatile uint64_t t53 = 23160005166353463LLU;
int16_t x360 = INT16_MAX;
int32_t t55 = 0;
int64_t x365 = INT64_MAX;
static int8_t x370 = -1;
static int64_t x376 = -360492LL;
int64_t x380 = -1LL;
static uint32_t x382 = UINT32_MAX;
int8_t x383 = -1;
static int8_t x392 = 11;
volatile uint64_t t62 = 156764109713475960LLU;
int32_t t64 = -93465574;
static int16_t x405 = INT16_MAX;
int64_t x408 = -11236770001LL;
int64_t x413 = INT64_MAX;
uint64_t t66 = 1LLU;
volatile uint32_t x419 = 1485447U;
static int16_t x420 = INT16_MAX;
int8_t x434 = 26;
int32_t x437 = INT32_MIN;
static uint32_t x443 = UINT32_MAX;
volatile int8_t x450 = INT8_MIN;
int8_t x462 = -36;
volatile uint16_t x463 = 103U;
static volatile int64_t t74 = 6269751215952LL;
int64_t x465 = -1831077047819077237LL;
static volatile int64_t x467 = -6256920822892LL;
int64_t x475 = -138351873443675LL;
int16_t x478 = INT16_MIN;
int32_t x485 = INT32_MAX;
int64_t x491 = 40029375466745LL;
volatile int64_t t80 = 1LL;
int16_t x499 = -1;
int32_t t81 = -824686;
int32_t x502 = INT32_MIN;
volatile int64_t t82 = 14LL;
static int8_t x507 = INT8_MIN;
uint32_t t83 = 3624542U;
int32_t t85 = -117258302;
uint64_t t87 = 38713172390LLU;
uint16_t x525 = UINT16_MAX;
static int64_t x533 = 67910657LL;
uint32_t x535 = 1458U;
int8_t x539 = 1;
volatile uint64_t x544 = UINT64_MAX;
static int32_t x553 = INT32_MAX;
static int64_t x554 = 297414636985971LL;
int8_t x562 = -1;
volatile int64_t t95 = -350218098LL;
int8_t x565 = INT8_MIN;
static int32_t x566 = INT32_MIN;
static int32_t t97 = 0;
uint64_t t98 = 5786683LLU;
uint16_t x595 = 2U;


void f0(void) {
	volatile uint16_t x1 = 13U;
	static int32_t x2 = INT32_MIN;
	uint16_t x3 = 1U;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = 501771;

	t0 = ((x1<=x2)%(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int32_t x8 = 2;

	t1 = ((x5<=x6)%(x7*x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	volatile uint16_t x10 = UINT16_MAX;
	int64_t x11 = -1LL;
	static int32_t x12 = INT32_MIN;
	volatile int64_t t2 = -21235823LL;

	t2 = ((x9<=x10)%(x11*x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = 2;
	int32_t x15 = 8123170;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 26311;

	t3 = ((x13<=x14)%(x15*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x18 = 1010586U;
	int16_t x19 = 1;
	static int32_t t4 = 3249;

	t4 = ((x17<=x18)%(x19*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x22 = 343U;
	uint32_t x23 = 1U;
	uint16_t x24 = UINT16_MAX;
	volatile uint32_t t5 = 7U;

	t5 = ((x21<=x22)%(x23*x24));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int16_t x26 = INT16_MAX;
	static volatile int8_t x27 = INT8_MIN;
	uint8_t x28 = 1U;
	int32_t t6 = 199735;

	t6 = ((x25<=x26)%(x27*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 207787717589LLU;
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;
	static int64_t t7 = 474903830LL;

	t7 = ((x29<=x30)%(x31*x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = 2;
	uint16_t x47 = 15736U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t8 = 84556432;

	t8 = ((x45<=x46)%(x47*x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = UINT32_MAX;
	int16_t x50 = 640;
	volatile int8_t x51 = INT8_MAX;
	int8_t x52 = -1;
	int32_t t9 = 222875235;

	t9 = ((x49<=x50)%(x51*x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x58 = 247620U;
	volatile uint64_t x59 = 223576841802169669LLU;
	int32_t x60 = -9;
	static volatile uint64_t t10 = 14561033136761LLU;

	t10 = ((x57<=x58)%(x59*x60));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x65 = UINT64_MAX;
	volatile int64_t x66 = INT64_MAX;
	int64_t x67 = 5474388037761LL;
	static uint32_t x68 = 172U;
	int64_t t11 = -15639160562114795LL;

	t11 = ((x65<=x66)%(x67*x68));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x73 = 51;
	static uint32_t x74 = 1813240U;
	static int8_t x75 = INT8_MIN;
	int16_t x76 = 9;
	int32_t t12 = -163717706;

	t12 = ((x73<=x74)%(x75*x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x77 = -129501056;
	static volatile int64_t x78 = -1LL;
	int64_t x80 = -1LL;
	volatile int64_t t13 = 508552794836LL;

	t13 = ((x77<=x78)%(x79*x80));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x82 = 44U;
	uint8_t x84 = 46U;
	int32_t t14 = 794436417;

	t14 = ((x81<=x82)%(x83*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x89 = INT16_MIN;
	static volatile int16_t x90 = INT16_MIN;
	volatile uint64_t x91 = UINT64_MAX;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t15 = 30144029LLU;

	t15 = ((x89<=x90)%(x91*x92));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x93 = 1U;
	static uint16_t x94 = 1U;
	uint32_t x95 = UINT32_MAX;
	uint64_t x96 = 10835626LLU;
	volatile uint64_t t16 = 281818433365719177LLU;

	t16 = ((x93<=x94)%(x95*x96));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x101 = -31;
	static int64_t x102 = -11681290317562LL;
	uint32_t x103 = 45U;
	static uint16_t x104 = UINT16_MAX;

	t17 = ((x101<=x102)%(x103*x104));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x106 = -6614228278LL;
	uint8_t x107 = 3U;
	int8_t x108 = 44;
	int32_t t18 = 5918;

	t18 = ((x105<=x106)%(x107*x108));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = INT8_MIN;
	static int64_t x110 = 0LL;
	int32_t x111 = 25206;
	int16_t x112 = INT16_MAX;
	int32_t t19 = -436155;

	t19 = ((x109<=x110)%(x111*x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x114 = -1;
	uint64_t x115 = 33190184595LLU;
	int32_t x116 = -1;

	t20 = ((x113<=x114)%(x115*x116));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = 158046318263221LLU;
	int8_t x118 = 1;
	int32_t x119 = INT32_MIN;
	volatile int64_t x120 = 46LL;
	int64_t t21 = -3846000LL;

	t21 = ((x117<=x118)%(x119*x120));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x125 = 14633701LLU;
	int16_t x127 = INT16_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t22 = -38;

	t22 = ((x125<=x126)%(x127*x128));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x133 = INT8_MAX;
	static volatile int16_t x134 = -56;
	int32_t x135 = -1;
	volatile uint64_t t23 = 32573LLU;

	t23 = ((x133<=x134)%(x135*x136));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x138 = INT64_MIN;
	static int8_t x139 = -1;
	static uint64_t x140 = 4895209840796LLU;
	uint64_t t24 = 59658464875422705LLU;

	t24 = ((x137<=x138)%(x139*x140));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x146 = UINT8_MAX;
	int64_t t25 = 3743282592022698569LL;

	t25 = ((x145<=x146)%(x147*x148));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x150 = INT16_MIN;
	uint8_t x152 = 2U;

	t26 = ((x149<=x150)%(x151*x152));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x157 = INT32_MAX;
	int64_t x159 = INT64_MAX;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t27 = 10564LLU;

	t27 = ((x157<=x158)%(x159*x160));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x161 = INT64_MIN;
	static int32_t x162 = INT32_MIN;
	uint16_t x163 = 41U;
	uint32_t x164 = 478832018U;

	t28 = ((x161<=x162)%(x163*x164));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x173 = 51U;
	int64_t x175 = -1LL;
	int8_t x176 = INT8_MAX;
	static int64_t t29 = 1805459130253297554LL;

	t29 = ((x173<=x174)%(x175*x176));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x181 = INT16_MIN;
	uint32_t x182 = 705290U;
	volatile uint32_t x184 = 11278U;
	volatile uint32_t t30 = 33514105U;

	t30 = ((x181<=x182)%(x183*x184));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x197 = -1;
	int16_t x198 = 1;
	static int8_t x199 = 1;
	volatile int64_t x200 = 13773856529069540LL;
	volatile int64_t t31 = 367944719375LL;

	t31 = ((x197<=x198)%(x199*x200));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x205 = 190;
	int16_t x206 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t32 = 27454;

	t32 = ((x205<=x206)%(x207*x208));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x218 = -1;
	volatile int32_t x219 = INT32_MIN;
	volatile uint64_t x220 = 47LLU;
	volatile uint64_t t33 = 1286LLU;

	t33 = ((x217<=x218)%(x219*x220));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MAX;
	uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 50949202U;

	t34 = ((x221<=x222)%(x223*x224));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x225 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	volatile uint32_t t35 = 25U;

	t35 = ((x225<=x226)%(x227*x228));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x238 = 6798U;
	volatile int16_t x240 = INT16_MIN;

	t36 = ((x237<=x238)%(x239*x240));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x242 = 1;
	int32_t x243 = INT32_MAX;
	uint32_t x244 = 1919U;

	t37 = ((x241<=x242)%(x243*x244));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x245 = 258784469LLU;
	uint64_t x247 = UINT64_MAX;
	volatile uint64_t t38 = 297373LLU;

	t38 = ((x245<=x246)%(x247*x248));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 811U;
	int8_t x251 = INT8_MAX;

	t39 = ((x249<=x250)%(x251*x252));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x253 = -9;
	uint8_t x256 = UINT8_MAX;
	int32_t t40 = -114;

	t40 = ((x253<=x254)%(x255*x256));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x261 = UINT64_MAX;
	static int64_t x262 = INT64_MIN;
	uint32_t x264 = UINT32_MAX;
	uint32_t t41 = 2U;

	t41 = ((x261<=x262)%(x263*x264));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x269 = -1781837;
	int32_t x270 = INT32_MIN;
	int8_t x272 = -1;
	int32_t t42 = 1604697;

	t42 = ((x269<=x270)%(x271*x272));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x274 = INT64_MIN;
	volatile int8_t x276 = INT8_MIN;
	static int32_t t43 = -5166792;

	t43 = ((x273<=x274)%(x275*x276));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 5U;
	uint32_t x283 = 1989U;
	int8_t x284 = INT8_MAX;
	uint32_t t44 = 50469U;

	t44 = ((x281<=x282)%(x283*x284));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x294 = -1;
	int32_t x296 = -1;
	int32_t t45 = 28;

	t45 = ((x293<=x294)%(x295*x296));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x301 = UINT64_MAX;
	int16_t x302 = -11998;
	int16_t x304 = 9806;
	static uint64_t t46 = 144750626LLU;

	t46 = ((x301<=x302)%(x303*x304));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	static volatile int8_t x312 = INT8_MAX;
	static uint32_t t47 = 3715137U;

	t47 = ((x309<=x310)%(x311*x312));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x313 = INT32_MAX;
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MIN;

	t48 = ((x313<=x314)%(x315*x316));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = -1LL;
	static int8_t x327 = -1;
	volatile int32_t t49 = 50445150;

	t49 = ((x325<=x326)%(x327*x328));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x329 = INT64_MAX;
	uint32_t x330 = 59593458U;
	volatile uint64_t x331 = UINT64_MAX;
	uint64_t t50 = 799044127952976LLU;

	t50 = ((x329<=x330)%(x331*x332));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x333 = INT16_MAX;
	volatile uint64_t x334 = 0LLU;
	int16_t x335 = -417;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t51 = 251681;

	t51 = ((x333<=x334)%(x335*x336));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x345 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	uint32_t t52 = 257173025U;

	t52 = ((x345<=x346)%(x347*x348));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MAX;
	uint64_t x352 = 131038701661290LLU;

	t53 = ((x349<=x350)%(x351*x352));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x353 = 823U;
	volatile int32_t x354 = INT32_MIN;
	volatile int8_t x355 = -1;
	uint32_t x356 = 6264U;
	static uint32_t t54 = 5217606U;

	t54 = ((x353<=x354)%(x355*x356));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x357 = 127U;
	int32_t x358 = INT32_MIN;
	uint16_t x359 = UINT16_MAX;

	t55 = ((x357<=x358)%(x359*x360));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x361 = 12U;
	volatile int64_t x362 = INT64_MIN;
	static uint32_t x363 = 1795725U;
	uint8_t x364 = 1U;
	uint32_t t56 = 556U;

	t56 = ((x361<=x362)%(x363*x364));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x366 = 3U;
	uint16_t x367 = 2U;
	static int8_t x368 = 1;
	volatile int32_t t57 = -11;

	t57 = ((x365<=x366)%(x367*x368));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x369 = INT32_MIN;
	uint32_t x371 = 61U;
	int32_t x372 = INT32_MIN;
	static uint32_t t58 = 106U;

	t58 = ((x369<=x370)%(x371*x372));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x373 = -1776681264828LL;
	static volatile int8_t x374 = INT8_MIN;
	int8_t x375 = -9;
	int64_t t59 = -4679003657953408LL;

	t59 = ((x373<=x374)%(x375*x376));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x377 = INT8_MIN;
	int32_t x378 = 100;
	int8_t x379 = -5;
	volatile int64_t t60 = 215095175180433LL;

	t60 = ((x377<=x378)%(x379*x380));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x381 = INT16_MIN;
	int64_t x384 = -11882821551863LL;
	int64_t t61 = -47LL;

	t61 = ((x381<=x382)%(x383*x384));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x389 = INT16_MIN;
	static uint64_t x390 = UINT64_MAX;
	uint64_t x391 = 49LLU;

	t62 = ((x389<=x390)%(x391*x392));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	volatile int32_t x395 = INT32_MAX;
	int16_t x396 = 1;
	static int32_t t63 = 49033;

	t63 = ((x393<=x394)%(x395*x396));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = -1LL;
	int8_t x403 = -1;
	static volatile int32_t x404 = INT32_MAX;

	t64 = ((x401<=x402)%(x403*x404));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x406 = INT64_MIN;
	int16_t x407 = 5004;
	volatile int64_t t65 = 480LL;

	t65 = ((x405<=x406)%(x407*x408));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x414 = INT16_MIN;
	uint64_t x415 = UINT64_MAX;
	static uint32_t x416 = 964366U;

	t66 = ((x413<=x414)%(x415*x416));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x417 = -1LL;
	int32_t x418 = INT32_MIN;
	volatile uint32_t t67 = 55760193U;

	t67 = ((x417<=x418)%(x419*x420));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x433 = 4701U;
	uint64_t x435 = 13LLU;
	volatile int16_t x436 = INT16_MIN;
	static volatile uint64_t t68 = 95958LLU;

	t68 = ((x433<=x434)%(x435*x436));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x438 = INT64_MAX;
	uint8_t x439 = 30U;
	static int64_t x440 = -1LL;
	volatile int64_t t69 = -6333602901115473LL;

	t69 = ((x437<=x438)%(x439*x440));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x441 = INT16_MAX;
	int64_t x442 = -1LL;
	int32_t x444 = INT32_MIN;
	uint32_t t70 = 187390U;

	t70 = ((x441<=x442)%(x443*x444));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x446 = UINT64_MAX;
	int8_t x447 = 53;
	static int16_t x448 = INT16_MAX;
	int32_t t71 = 4440748;

	t71 = ((x445<=x446)%(x447*x448));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x449 = 432433319U;
	int32_t x451 = INT32_MIN;
	uint8_t x452 = 1U;
	int32_t t72 = -20065;

	t72 = ((x449<=x450)%(x451*x452));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x453 = 2;
	int32_t x454 = INT32_MAX;
	volatile int8_t x455 = INT8_MAX;
	int16_t x456 = -38;
	volatile int32_t t73 = -2972272;

	t73 = ((x453<=x454)%(x455*x456));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x461 = INT16_MIN;
	int64_t x464 = -32LL;

	t74 = ((x461<=x462)%(x463*x464));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x466 = INT8_MIN;
	int16_t x468 = -18;
	int64_t t75 = 914396LL;

	t75 = ((x465<=x466)%(x467*x468));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x469 = -1LL;
	uint64_t x470 = UINT64_MAX;
	volatile uint8_t x471 = 3U;
	static uint16_t x472 = 15588U;
	volatile int32_t t76 = 41;

	t76 = ((x469<=x470)%(x471*x472));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x473 = INT16_MIN;
	uint16_t x474 = UINT16_MAX;
	int64_t x476 = -1LL;
	int64_t t77 = -33405965335765828LL;

	t77 = ((x473<=x474)%(x475*x476));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x477 = UINT64_MAX;
	static uint16_t x479 = 1468U;
	volatile uint8_t x480 = UINT8_MAX;
	volatile int32_t t78 = -1;

	t78 = ((x477<=x478)%(x479*x480));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x486 = -1;
	uint8_t x487 = 5U;
	int8_t x488 = INT8_MAX;
	int32_t t79 = -225574;

	t79 = ((x485<=x486)%(x487*x488));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x489 = 10LL;
	int64_t x490 = INT64_MIN;
	int8_t x492 = INT8_MIN;

	t80 = ((x489<=x490)%(x491*x492));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x497 = INT32_MAX;
	volatile uint32_t x498 = UINT32_MAX;
	volatile int8_t x500 = -1;

	t81 = ((x497<=x498)%(x499*x500));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x501 = -1;
	int8_t x503 = INT8_MIN;
	int64_t x504 = -94780405957548LL;

	t82 = ((x501<=x502)%(x503*x504));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x505 = 2890;
	volatile uint32_t x506 = UINT32_MAX;
	uint32_t x508 = 70104162U;

	t83 = ((x505<=x506)%(x507*x508));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x509 = UINT32_MAX;
	uint8_t x510 = 1U;
	uint16_t x511 = 39U;
	volatile int8_t x512 = INT8_MIN;
	int32_t t84 = -18;

	t84 = ((x509<=x510)%(x511*x512));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x513 = UINT8_MAX;
	static uint32_t x514 = 20450963U;
	int16_t x515 = INT16_MIN;
	int8_t x516 = INT8_MIN;

	t85 = ((x513<=x514)%(x515*x516));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x517 = 4601U;
	static int16_t x518 = -634;
	static int64_t x519 = INT64_MAX;
	static int64_t x520 = -1LL;
	int64_t t86 = -125151278793139952LL;

	t86 = ((x517<=x518)%(x519*x520));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x521 = 12U;
	static uint32_t x522 = 15665935U;
	int64_t x523 = -1LL;
	static uint64_t x524 = 447836499LLU;

	t87 = ((x521<=x522)%(x523*x524));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x526 = INT16_MIN;
	int16_t x527 = -102;
	int16_t x528 = INT16_MIN;
	volatile int32_t t88 = 4692;

	t88 = ((x525<=x526)%(x527*x528));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x534 = -9;
	int64_t x536 = -873457285LL;
	volatile int64_t t89 = 7960LL;

	t89 = ((x533<=x534)%(x535*x536));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x537 = 48;
	static int8_t x538 = INT8_MAX;
	int16_t x540 = INT16_MIN;
	volatile int32_t t90 = -1413761;

	t90 = ((x537<=x538)%(x539*x540));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x541 = INT8_MIN;
	static int16_t x542 = INT16_MIN;
	int8_t x543 = -1;
	volatile uint64_t t91 = 900636574227LLU;

	t91 = ((x541<=x542)%(x543*x544));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x545 = UINT16_MAX;
	int8_t x546 = INT8_MAX;
	static uint8_t x547 = UINT8_MAX;
	int16_t x548 = 61;
	static volatile int32_t t92 = 2512;

	t92 = ((x545<=x546)%(x547*x548));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x555 = -1;
	int16_t x556 = -1;
	static volatile int32_t t93 = -39797365;

	t93 = ((x553<=x554)%(x555*x556));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x557 = -1;
	uint16_t x558 = UINT16_MAX;
	static int64_t x559 = 64235224LL;
	volatile int64_t x560 = 13371960LL;
	volatile int64_t t94 = -1122446510850771148LL;

	t94 = ((x557<=x558)%(x559*x560));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x561 = -38893027664LL;
	int64_t x563 = -1LL;
	uint16_t x564 = UINT16_MAX;

	t95 = ((x561<=x562)%(x563*x564));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x567 = 1304523157LLU;
	int16_t x568 = INT16_MIN;
	uint64_t t96 = 418441419878227LLU;

	t96 = ((x565<=x566)%(x567*x568));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x573 = INT32_MAX;
	volatile int16_t x574 = -1;
	int8_t x575 = INT8_MIN;
	volatile uint8_t x576 = 3U;

	t97 = ((x573<=x574)%(x575*x576));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x589 = INT16_MIN;
	static int64_t x590 = -50430563332998LL;
	static uint64_t x591 = 783570973413LLU;
	int8_t x592 = 13;

	t98 = ((x589<=x590)%(x591*x592));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x593 = -1LL;
	volatile uint16_t x594 = 2U;
	int32_t x596 = 10;
	int32_t t99 = 219502691;

	t99 = ((x593<=x594)%(x595*x596));

	if (t99 != 1) { NG(); } else { ; }
	
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

