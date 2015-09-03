#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x22 = -1;
int32_t x24 = -911;
volatile int16_t x29 = INT16_MIN;
volatile int32_t x33 = INT32_MIN;
volatile uint32_t x39 = UINT32_MAX;
uint8_t x45 = 22U;
uint8_t x49 = 15U;
int16_t x52 = -17;
int8_t x66 = -60;
uint32_t t9 = 8231U;
static int64_t x73 = -2134513770LL;
volatile int16_t x74 = INT16_MIN;
int32_t t12 = -3;
volatile int64_t x89 = 8405529LL;
int16_t x92 = INT16_MAX;
volatile int8_t x106 = 6;
int32_t t16 = -485759;
volatile uint32_t x119 = UINT32_MAX;
uint16_t x120 = 1923U;
int16_t x121 = 1;
int32_t t18 = -239509;
static volatile int64_t x132 = -19198538302141111LL;
int8_t x135 = -22;
uint64_t x156 = UINT64_MAX;
volatile int8_t x162 = INT8_MIN;
volatile uint32_t x163 = 984222183U;
volatile int64_t x178 = -963392581827240LL;
int8_t x185 = 0;
int8_t x207 = -1;
int64_t x210 = INT64_MIN;
int64_t x216 = 3125387718LL;
int64_t x221 = -1041194511429LL;
volatile uint16_t x239 = UINT16_MAX;
int8_t x241 = INT8_MIN;
volatile uint16_t x246 = UINT16_MAX;
volatile int64_t t39 = 30175LL;
volatile int16_t x262 = 1556;
static int64_t t43 = 60884098272LL;
volatile int8_t x274 = INT8_MIN;
int64_t x282 = -21808247644785559LL;
int32_t x283 = 1350429;
int16_t x288 = INT16_MIN;
volatile int16_t x303 = INT16_MAX;
uint8_t x313 = UINT8_MAX;
static uint8_t x319 = 1U;
int32_t t54 = -4065;
int64_t x326 = -1LL;
volatile int32_t t56 = 712660;
volatile int8_t x339 = 8;
int64_t x350 = -14LL;
int8_t x369 = -1;
int64_t x384 = 22482100378LL;
uint32_t t67 = 95148358U;
static uint64_t x392 = UINT64_MAX;
uint64_t t68 = 62LLU;
int8_t x398 = INT8_MAX;
int32_t x403 = -754920;
uint16_t x407 = 679U;
static int8_t x420 = 7;
int32_t x425 = -9988;
uint64_t x427 = UINT64_MAX;
volatile int8_t x429 = 1;
volatile int8_t x430 = -1;
static volatile int64_t x438 = -1LL;
int32_t t78 = -52424;
static volatile uint32_t x455 = 1220U;
static int16_t x463 = 1;
int8_t x482 = INT8_MIN;
int32_t t86 = -621;
int64_t x490 = -1705LL;
static int16_t x495 = INT16_MIN;
volatile int64_t x538 = 1081278LL;
int8_t x539 = -1;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile uint16_t x2 = 619U;
	int16_t x3 = 66;
	int8_t x4 = 0;
	int32_t t0 = -59467984;

	t0 = ((x1<=x2)&(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x18 = INT16_MIN;
	static volatile int16_t x19 = -1;
	int16_t x20 = -88;
	volatile int32_t t1 = 20041;

	t1 = ((x17<=x18)&(x19*x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x21 = INT64_MAX;
	uint8_t x23 = 2U;
	static int32_t t2 = 5426506;

	t2 = ((x21<=x22)&(x23*x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x30 = -1;
	static int32_t x31 = INT32_MAX;
	static uint32_t x32 = UINT32_MAX;
	static volatile uint32_t t3 = 15U;

	t3 = ((x29<=x30)&(x31*x32));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x34 = 0;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = 97650;
	int32_t t4 = 33427144;

	t4 = ((x33<=x34)&(x35*x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MIN;
	int32_t x38 = -145;
	uint8_t x40 = 3U;
	volatile uint32_t t5 = 244924741U;

	t5 = ((x37<=x38)&(x39*x40));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x46 = UINT64_MAX;
	uint8_t x47 = 0U;
	uint8_t x48 = 46U;
	int32_t t6 = -988129;

	t6 = ((x45<=x46)&(x47*x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile uint32_t t7 = 7026407U;

	t7 = ((x49<=x50)&(x51*x52));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = 0;
	int8_t x62 = -23;
	volatile int32_t x63 = 1;
	static volatile int32_t x64 = -1;
	int32_t t8 = -5573;

	t8 = ((x61<=x62)&(x63*x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x65 = 7674688039916330117LLU;
	static int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = 88997U;

	t9 = ((x65<=x66)&(x67*x68));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x69 = 1493;
	static int16_t x70 = 32;
	uint16_t x71 = 1U;
	static int16_t x72 = -1;
	int32_t t10 = 8954983;

	t10 = ((x69<=x70)&(x71*x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x75 = -1;
	uint8_t x76 = UINT8_MAX;
	static int32_t t11 = -78199156;

	t11 = ((x73<=x74)&(x75*x76));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x81 = 2983313U;
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = -1;
	uint8_t x84 = 58U;

	t12 = ((x81<=x82)&(x83*x84));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x86 = 6U;
	static int32_t x87 = -2325244;
	int16_t x88 = -1;
	int32_t t13 = -427117359;

	t13 = ((x85<=x86)&(x87*x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x90 = 1084409855316LLU;
	int16_t x91 = 6262;
	volatile int32_t t14 = 0;

	t14 = ((x89<=x90)&(x91*x92));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x105 = INT64_MIN;
	volatile uint32_t x107 = 1383377U;
	int32_t x108 = -29;
	volatile uint32_t t15 = 3631U;

	t15 = ((x105<=x106)&(x107*x108));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x109 = 171433LLU;
	uint16_t x110 = 3U;
	uint16_t x111 = 294U;
	int8_t x112 = 3;

	t16 = ((x109<=x110)&(x111*x112));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	volatile uint32_t t17 = 2077184U;

	t17 = ((x117<=x118)&(x119*x120));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x122 = INT32_MIN;
	uint8_t x123 = 83U;
	int8_t x124 = INT8_MIN;

	t18 = ((x121<=x122)&(x123*x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x125 = -1;
	uint32_t x126 = 20U;
	int8_t x127 = -53;
	uint8_t x128 = UINT8_MAX;
	static int32_t t19 = -202005;

	t19 = ((x125<=x126)&(x127*x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x129 = -304;
	int32_t x130 = 1054595045;
	volatile int32_t x131 = -1;
	volatile int64_t t20 = -25608558561700624LL;

	t20 = ((x129<=x130)&(x131*x132));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x133 = INT32_MAX;
	static int16_t x134 = INT16_MIN;
	static uint8_t x136 = 2U;
	volatile int32_t t21 = -1587785;

	t21 = ((x133<=x134)&(x135*x136));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x153 = 11011;
	volatile uint64_t x154 = 201674667LLU;
	uint16_t x155 = UINT16_MAX;
	static volatile uint64_t t22 = 672396378512LLU;

	t22 = ((x153<=x154)&(x155*x156));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x161 = 25U;
	int32_t x164 = -6346348;
	volatile uint32_t t23 = 1U;

	t23 = ((x161<=x162)&(x163*x164));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x165 = 6197;
	uint32_t x166 = 294070629U;
	uint32_t x167 = 14184282U;
	volatile uint32_t x168 = 31805080U;
	volatile uint32_t t24 = 480779811U;

	t24 = ((x165<=x166)&(x167*x168));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x173 = INT8_MIN;
	volatile int8_t x174 = -1;
	uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	static int32_t t25 = -66;

	t25 = ((x173<=x174)&(x175*x176));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x177 = 6U;
	int32_t x179 = -282;
	volatile int8_t x180 = -3;
	volatile int32_t t26 = 1066;

	t26 = ((x177<=x178)&(x179*x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	volatile int8_t x188 = INT8_MIN;
	int32_t t27 = 207;

	t27 = ((x185<=x186)&(x187*x188));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x197 = -1138;
	static int32_t x198 = -50923945;
	uint64_t x199 = 3642251097884LLU;
	static uint32_t x200 = UINT32_MAX;
	static volatile uint64_t t28 = 317877160809944547LLU;

	t28 = ((x197<=x198)&(x199*x200));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x205 = 1835U;
	volatile int16_t x206 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t29 = -13136220;

	t29 = ((x205<=x206)&(x207*x208));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x209 = INT8_MIN;
	static uint16_t x211 = 0U;
	static volatile int32_t x212 = INT32_MIN;
	int32_t t30 = 30830733;

	t30 = ((x209<=x210)&(x211*x212));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x213 = INT64_MIN;
	int16_t x214 = -2591;
	int8_t x215 = INT8_MIN;
	int64_t t31 = 113626762550848LL;

	t31 = ((x213<=x214)&(x215*x216));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x217 = INT64_MIN;
	int16_t x218 = -568;
	uint16_t x219 = 4U;
	static int32_t x220 = -1541;
	int32_t t32 = 696288021;

	t32 = ((x217<=x218)&(x219*x220));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x222 = -2;
	uint8_t x223 = 1U;
	uint8_t x224 = 3U;
	volatile int32_t t33 = 119006;

	t33 = ((x221<=x222)&(x223*x224));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = 67U;
	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MAX;
	volatile uint8_t x228 = 31U;
	int32_t t34 = -3722741;

	t34 = ((x225<=x226)&(x227*x228));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x233 = -8;
	static uint8_t x234 = 0U;
	int32_t x235 = 996270;
	uint32_t x236 = 44U;
	uint32_t t35 = 27356454U;

	t35 = ((x233<=x234)&(x235*x236));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x237 = -1;
	uint16_t x238 = 2U;
	static int16_t x240 = 6;
	int32_t t36 = 2;

	t36 = ((x237<=x238)&(x239*x240));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t37 = 0;

	t37 = ((x241<=x242)&(x243*x244));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x245 = INT32_MAX;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t x248 = 0;
	volatile uint32_t t38 = 481471682U;

	t38 = ((x245<=x246)&(x247*x248));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x249 = 4229360939683704LL;
	int32_t x250 = -102885029;
	volatile int8_t x251 = -1;
	int64_t x252 = -10LL;

	t39 = ((x249<=x250)&(x251*x252));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = 53161LLU;
	volatile int8_t x255 = INT8_MAX;
	int8_t x256 = INT8_MIN;
	volatile int32_t t40 = 90;

	t40 = ((x253<=x254)&(x255*x256));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x257 = 2;
	int64_t x258 = 1718757848629123LL;
	static uint8_t x259 = 19U;
	static uint16_t x260 = 7U;
	int32_t t41 = 5;

	t41 = ((x257<=x258)&(x259*x260));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x261 = 1586743;
	int8_t x263 = -1;
	static int32_t x264 = 4140705;
	int32_t t42 = 0;

	t42 = ((x261<=x262)&(x263*x264));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x269 = 3U;
	volatile uint8_t x270 = 0U;
	static uint32_t x271 = 10061706U;
	static int64_t x272 = -834LL;

	t43 = ((x269<=x270)&(x271*x272));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x273 = -1;
	uint16_t x275 = 4532U;
	static uint16_t x276 = 3U;
	int32_t t44 = -6750911;

	t44 = ((x273<=x274)&(x275*x276));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	static uint8_t x279 = 0U;
	volatile int64_t x280 = INT64_MAX;
	static volatile int64_t t45 = 13784129LL;

	t45 = ((x277<=x278)&(x279*x280));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x281 = UINT64_MAX;
	volatile int16_t x284 = -1;
	volatile int32_t t46 = -93;

	t46 = ((x281<=x282)&(x283*x284));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	int32_t t47 = -170161;

	t47 = ((x285<=x286)&(x287*x288));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x289 = INT64_MIN;
	volatile int16_t x290 = 1;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;
	int32_t t48 = 857422432;

	t48 = ((x289<=x290)&(x291*x292));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x293 = INT16_MIN;
	volatile int8_t x294 = 1;
	uint32_t x295 = UINT32_MAX;
	uint16_t x296 = UINT16_MAX;
	volatile uint32_t t49 = 278132U;

	t49 = ((x293<=x294)&(x295*x296));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x301 = 68U;
	int64_t x302 = INT64_MAX;
	volatile int16_t x304 = 37;
	int32_t t50 = 450;

	t50 = ((x301<=x302)&(x303*x304));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x306 = 651392951464LLU;
	volatile int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t51 = -241;

	t51 = ((x305<=x306)&(x307*x308));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x314 = UINT64_MAX;
	uint16_t x315 = 774U;
	static volatile int16_t x316 = -1;
	int32_t t52 = 490116;

	t52 = ((x313<=x314)&(x315*x316));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = -26923928;
	volatile int16_t x318 = -11096;
	uint32_t x320 = UINT32_MAX;
	uint32_t t53 = 15U;

	t53 = ((x317<=x318)&(x319*x320));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x321 = 104LLU;
	volatile int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	static int8_t x324 = -1;

	t54 = ((x321<=x322)&(x323*x324));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x325 = 41014U;
	volatile int8_t x327 = INT8_MIN;
	uint8_t x328 = 0U;
	int32_t t55 = 142;

	t55 = ((x325<=x326)&(x327*x328));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x333 = UINT16_MAX;
	static int32_t x334 = -1;
	volatile int8_t x335 = 7;
	volatile uint8_t x336 = 37U;

	t56 = ((x333<=x334)&(x335*x336));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x338 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t57 = 548557202;

	t57 = ((x337<=x338)&(x339*x340));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x346 = INT64_MIN;
	uint16_t x347 = 27U;
	int16_t x348 = -1;
	static volatile int32_t t58 = 19320;

	t58 = ((x345<=x346)&(x347*x348));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x349 = INT32_MIN;
	volatile uint8_t x351 = 100U;
	volatile int8_t x352 = -9;
	volatile int32_t t59 = -377;

	t59 = ((x349<=x350)&(x351*x352));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x353 = 32196506817476562LLU;
	int16_t x354 = -1;
	uint8_t x355 = 55U;
	int32_t x356 = 0;
	volatile int32_t t60 = -4;

	t60 = ((x353<=x354)&(x355*x356));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x357 = 14929U;
	int32_t x358 = -401;
	volatile int8_t x359 = INT8_MIN;
	static volatile uint64_t x360 = UINT64_MAX;
	uint64_t t61 = 2248389509334221LLU;

	t61 = ((x357<=x358)&(x359*x360));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x361 = -1LL;
	int16_t x362 = INT16_MIN;
	int32_t x363 = -93809020;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t62 = 4LLU;

	t62 = ((x361<=x362)&(x363*x364));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x365 = 505U;
	uint32_t x366 = UINT32_MAX;
	uint64_t x367 = UINT64_MAX;
	uint32_t x368 = 428U;
	volatile uint64_t t63 = 164315122LLU;

	t63 = ((x365<=x366)&(x367*x368));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x370 = -1LL;
	int16_t x371 = INT16_MAX;
	int8_t x372 = INT8_MIN;
	static int32_t t64 = 1;

	t64 = ((x369<=x370)&(x371*x372));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x377 = 5488U;
	int16_t x378 = 24;
	int64_t x379 = -1LL;
	int16_t x380 = -5;
	int64_t t65 = -2348349848162LL;

	t65 = ((x377<=x378)&(x379*x380));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x381 = 0U;
	static uint64_t x382 = 690884740939LLU;
	int8_t x383 = -12;
	volatile int64_t t66 = 413430036454670LL;

	t66 = ((x381<=x382)&(x383*x384));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x385 = 11U;
	volatile int8_t x386 = -1;
	static int32_t x387 = INT32_MAX;
	static uint32_t x388 = UINT32_MAX;

	t67 = ((x385<=x386)&(x387*x388));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x389 = INT16_MAX;
	int16_t x390 = 21;
	static int64_t x391 = INT64_MAX;

	t68 = ((x389<=x390)&(x391*x392));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x397 = 11U;
	volatile int32_t x399 = -1;
	volatile int8_t x400 = -1;
	int32_t t69 = -825616;

	t69 = ((x397<=x398)&(x399*x400));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x401 = 1U;
	static volatile uint32_t x402 = 13U;
	uint8_t x404 = 3U;
	int32_t t70 = -14733;

	t70 = ((x401<=x402)&(x403*x404));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x405 = INT32_MIN;
	static int8_t x406 = INT8_MIN;
	static int32_t x408 = 74;
	static int32_t t71 = 330758977;

	t71 = ((x405<=x406)&(x407*x408));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;
	uint32_t x412 = 19875127U;
	volatile uint32_t t72 = 3U;

	t72 = ((x409<=x410)&(x411*x412));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int32_t x414 = -1;
	int16_t x415 = INT16_MIN;
	int8_t x416 = -9;
	int32_t t73 = 2747;

	t73 = ((x413<=x414)&(x415*x416));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x417 = 17U;
	volatile int32_t x418 = INT32_MIN;
	uint64_t x419 = UINT64_MAX;
	uint64_t t74 = 4235075241LLU;

	t74 = ((x417<=x418)&(x419*x420));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x426 = 222;
	int8_t x428 = -53;
	volatile uint64_t t75 = 4460LLU;

	t75 = ((x425<=x426)&(x427*x428));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x431 = UINT64_MAX;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t76 = 10583230952053LLU;

	t76 = ((x429<=x430)&(x431*x432));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x437 = 15U;
	uint8_t x439 = 1U;
	int64_t x440 = -1018LL;
	int64_t t77 = -1334LL;

	t77 = ((x437<=x438)&(x439*x440));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x441 = INT64_MIN;
	volatile uint8_t x442 = 29U;
	uint8_t x443 = UINT8_MAX;
	uint16_t x444 = UINT16_MAX;

	t78 = ((x441<=x442)&(x443*x444));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x445 = -1LL;
	int64_t x446 = 474679772LL;
	int16_t x447 = -1;
	int64_t x448 = 122LL;
	static int64_t t79 = 130LL;

	t79 = ((x445<=x446)&(x447*x448));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x449 = INT8_MIN;
	uint32_t x450 = 3U;
	volatile uint8_t x451 = 11U;
	volatile int8_t x452 = INT8_MIN;
	int32_t t80 = -1;

	t80 = ((x449<=x450)&(x451*x452));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = -1;
	int64_t x456 = -1LL;
	static volatile int64_t t81 = -179034274LL;

	t81 = ((x453<=x454)&(x455*x456));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x457 = -1;
	static int64_t x458 = INT64_MAX;
	uint8_t x459 = 50U;
	int8_t x460 = INT8_MIN;
	int32_t t82 = -589607856;

	t82 = ((x457<=x458)&(x459*x460));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x461 = UINT32_MAX;
	int16_t x462 = INT16_MIN;
	static volatile int32_t x464 = 28662558;
	volatile int32_t t83 = -524750333;

	t83 = ((x461<=x462)&(x463*x464));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x465 = 9U;
	uint64_t x466 = 84488LLU;
	volatile uint8_t x467 = 83U;
	static volatile int64_t x468 = 2174LL;
	volatile int64_t t84 = -749220724284245LL;

	t84 = ((x465<=x466)&(x467*x468));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x473 = INT8_MIN;
	volatile uint64_t x474 = 1528326048443595LLU;
	int16_t x475 = -7051;
	uint32_t x476 = 74U;
	volatile uint32_t t85 = 770783172U;

	t85 = ((x473<=x474)&(x475*x476));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x481 = 43386227422LLU;
	uint16_t x483 = 1U;
	uint16_t x484 = 484U;

	t86 = ((x481<=x482)&(x483*x484));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x489 = -1;
	static int16_t x491 = INT16_MIN;
	volatile int8_t x492 = INT8_MIN;
	int32_t t87 = 12033152;

	t87 = ((x489<=x490)&(x491*x492));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x493 = INT16_MIN;
	int64_t x494 = INT64_MAX;
	volatile int64_t x496 = -1LL;
	volatile int64_t t88 = -315402864880230LL;

	t88 = ((x493<=x494)&(x495*x496));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x513 = -1LL;
	static int32_t x514 = -1;
	int8_t x515 = INT8_MIN;
	volatile int8_t x516 = INT8_MAX;
	volatile int32_t t89 = 69737;

	t89 = ((x513<=x514)&(x515*x516));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x517 = INT16_MAX;
	int64_t x518 = INT64_MIN;
	static uint64_t x519 = 141076539691771255LLU;
	int8_t x520 = INT8_MAX;
	volatile uint64_t t90 = 47751572LLU;

	t90 = ((x517<=x518)&(x519*x520));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x521 = INT16_MAX;
	int8_t x522 = INT8_MIN;
	int64_t x523 = -1LL;
	static int64_t x524 = -214626643534LL;
	int64_t t91 = -53268350493787011LL;

	t91 = ((x521<=x522)&(x523*x524));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x525 = UINT32_MAX;
	uint16_t x526 = UINT16_MAX;
	int16_t x527 = INT16_MAX;
	uint8_t x528 = UINT8_MAX;
	int32_t t92 = 127615721;

	t92 = ((x525<=x526)&(x527*x528));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x529 = -177;
	int8_t x530 = INT8_MIN;
	volatile int64_t x531 = 19835LL;
	static volatile int32_t x532 = INT32_MIN;
	static volatile int64_t t93 = -1838019175549624LL;

	t93 = ((x529<=x530)&(x531*x532));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x537 = 25U;
	volatile uint16_t x540 = 4878U;
	int32_t t94 = 15187756;

	t94 = ((x537<=x538)&(x539*x540));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x541 = 54;
	static uint64_t x542 = UINT64_MAX;
	uint32_t x543 = 3986U;
	int16_t x544 = INT16_MIN;
	volatile uint32_t t95 = 1789415586U;

	t95 = ((x541<=x542)&(x543*x544));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x549 = INT64_MAX;
	int32_t x550 = INT32_MIN;
	uint16_t x551 = 10U;
	int8_t x552 = INT8_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x549<=x550)&(x551*x552));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x557 = -217107;
	volatile int16_t x558 = INT16_MIN;
	volatile uint64_t x559 = 6LLU;
	uint64_t x560 = 29103974071LLU;
	volatile uint64_t t97 = 25559566703LLU;

	t97 = ((x557<=x558)&(x559*x560));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x561 = INT32_MIN;
	int8_t x562 = 1;
	static int16_t x563 = -593;
	uint8_t x564 = UINT8_MAX;
	int32_t t98 = 1093;

	t98 = ((x561<=x562)&(x563*x564));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x565 = -2;
	int64_t x566 = -1LL;
	static volatile int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MAX;
	volatile int32_t t99 = -76343761;

	t99 = ((x565<=x566)&(x567*x568));

	if (t99 != 0) { NG(); } else { ; }
	
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

