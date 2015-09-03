#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 1LLU;
static volatile uint16_t x7 = UINT16_MAX;
static int32_t x9 = -1;
uint32_t x12 = 6U;
uint32_t t2 = 2433616U;
static int8_t x22 = -1;
int8_t x23 = INT8_MIN;
volatile int16_t x24 = INT16_MAX;
uint32_t x25 = 19376U;
volatile int64_t x27 = -1LL;
static int32_t t4 = 66018819;
int8_t x36 = -1;
int8_t x38 = INT8_MAX;
int32_t t7 = 1;
volatile int32_t x52 = -1;
volatile int32_t t8 = 41081999;
int64_t x54 = -1LL;
int32_t x58 = INT32_MAX;
static int16_t x68 = 655;
int8_t x71 = INT8_MAX;
uint32_t x79 = 505945806U;
int16_t x86 = -301;
int32_t x94 = 453848;
uint8_t x104 = 1U;
static int8_t x106 = INT8_MIN;
static volatile int32_t x109 = INT32_MAX;
int16_t x110 = INT16_MIN;
uint64_t x112 = 373LLU;
int16_t x118 = INT16_MIN;
uint32_t x126 = 6U;
int8_t x127 = INT8_MAX;
uint32_t x135 = UINT32_MAX;
volatile uint8_t x162 = 84U;
volatile int16_t x166 = -1;
volatile int64_t x181 = -1LL;
int16_t x183 = INT16_MIN;
int16_t x184 = INT16_MIN;
uint64_t t35 = 113LLU;
int64_t x202 = -1LL;
uint32_t x214 = 520911U;
int8_t x215 = INT8_MAX;
int32_t t38 = -22;
int32_t x220 = -1;
volatile uint8_t x226 = 68U;
static volatile int8_t x229 = -6;
static int32_t x234 = 32189832;
int64_t x236 = INT64_MIN;
static uint32_t x240 = UINT32_MAX;
uint64_t x245 = UINT64_MAX;
volatile int32_t t45 = 35767;
static int16_t x255 = -1;
uint32_t t46 = 1007596U;
int8_t x259 = 1;
uint16_t x268 = 442U;
static int8_t x269 = 19;
volatile uint16_t x273 = UINT16_MAX;
int32_t t50 = 1703;
int32_t x277 = 233;
static int16_t x278 = INT16_MIN;
volatile int32_t t51 = -14;
static uint64_t x282 = 8544947020827804013LLU;
int32_t t52 = 26741621;
int64_t x297 = -1LL;
int32_t x300 = INT32_MAX;
int32_t t55 = 1791476;
uint64_t x307 = 77812856127078LLU;
static uint64_t x323 = UINT64_MAX;
volatile uint32_t x330 = 9U;
static int64_t t60 = 9729745LL;
uint64_t x341 = 19709782LLU;
int16_t x342 = INT16_MIN;
int16_t x344 = 12197;
static int64_t x349 = INT64_MAX;
int8_t x350 = -26;
volatile int64_t t64 = 212571762LL;
int64_t x359 = -1LL;
uint8_t x397 = UINT8_MAX;
volatile int32_t t71 = -442493;
static volatile int32_t t74 = 1379728;
int8_t x417 = INT8_MAX;
int64_t x420 = 7622567635674LL;
volatile int32_t t76 = 0;
uint8_t x426 = 8U;
volatile int8_t x427 = INT8_MIN;
volatile int32_t t77 = 707641705;
int64_t x429 = -1LL;
int16_t x433 = INT16_MIN;
int8_t x436 = -1;
uint64_t x437 = UINT64_MAX;
static uint64_t x442 = 590216597616772LLU;
volatile int8_t x449 = 0;
uint8_t x457 = 1U;
int64_t x458 = INT64_MAX;
int32_t x468 = INT32_MIN;
static uint64_t x481 = 1092458093LLU;
static uint8_t x483 = 5U;
int8_t x485 = INT8_MIN;
int64_t x500 = INT64_MIN;
int64_t x507 = -1307199013509LL;
int16_t x520 = -184;
int8_t x521 = -6;
static uint32_t x523 = 25U;
int32_t t94 = 5855587;
int64_t x533 = 117922632LL;
int32_t x537 = INT32_MIN;
static uint16_t x543 = 135U;
static int16_t x552 = INT16_MAX;


void f0(void) {
	static uint8_t x1 = 1U;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = 2872U;
	int32_t t0 = -126486;

	t0 = ((x1<(x2*x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint32_t x6 = 50U;
	static int16_t x8 = INT16_MAX;
	int32_t t1 = -1;

	t1 = ((x5<(x6*x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 5U;
	uint32_t x11 = 31837U;

	t2 = ((x9<(x10*x11))/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 12930955838651LLU;
	static volatile int32_t t3 = -5193;

	t3 = ((x21<(x22*x23))/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = -1;
	int16_t x28 = INT16_MAX;

	t4 = ((x25<(x26*x27))/x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x33 = 5U;
	uint32_t x34 = 34U;
	uint64_t x35 = 19287387654568LLU;
	static int32_t t5 = 12409611;

	t5 = ((x33<(x34*x35))/x36);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x37 = -1LL;
	uint8_t x39 = UINT8_MAX;
	static volatile uint64_t x40 = 12572LLU;
	volatile uint64_t t6 = 7891885179LLU;

	t6 = ((x37<(x38*x39))/x40);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 1U;
	uint64_t x47 = 1LLU;
	static volatile int32_t x48 = INT32_MIN;

	t7 = ((x45<(x46*x47))/x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 43517739796252LLU;
	uint8_t x50 = 1U;
	static int16_t x51 = 0;

	t8 = ((x49<(x50*x51))/x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MAX;
	int32_t x55 = -1;
	int64_t x56 = INT64_MIN;
	int64_t t9 = 1035170020672318LL;

	t9 = ((x53<(x54*x55))/x56);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x57 = INT32_MIN;
	static int64_t x59 = -1LL;
	static volatile int32_t x60 = -71141;
	volatile int32_t t10 = 8184;

	t10 = ((x57<(x58*x59))/x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 2U;
	int16_t x66 = INT16_MAX;
	uint8_t x67 = UINT8_MAX;
	int32_t t11 = -28177326;

	t11 = ((x65<(x66*x67))/x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = 2;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t12 = 3425974998778317378LLU;

	t12 = ((x69<(x70*x71))/x72);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = -1;
	int32_t x80 = -467;
	static volatile int32_t t13 = 13235977;

	t13 = ((x77<(x78*x79))/x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x85 = UINT8_MAX;
	uint8_t x87 = 7U;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t14 = -17;

	t14 = ((x85<(x86*x87))/x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = INT8_MAX;
	uint8_t x95 = 1U;
	uint8_t x96 = 10U;
	int32_t t15 = 162;

	t15 = ((x93<(x94*x95))/x96);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = INT32_MIN;
	static uint16_t x98 = 121U;
	int8_t x99 = -1;
	int8_t x100 = INT8_MIN;
	volatile int32_t t16 = 1014191884;

	t16 = ((x97<(x98*x99))/x100);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x101 = -1;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	static volatile int32_t t17 = -168742096;

	t17 = ((x101<(x102*x103))/x104);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = 676;
	int32_t t18 = 0;

	t18 = ((x105<(x106*x107))/x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x111 = -1;
	volatile uint64_t t19 = 61LLU;

	t19 = ((x109<(x110*x111))/x112);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	int16_t x114 = -1;
	static int64_t x115 = -1LL;
	int64_t x116 = INT64_MAX;
	int64_t t20 = -277563725446984LL;

	t20 = ((x113<(x114*x115))/x116);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = -1540394934LL;
	int16_t x119 = -1;
	int32_t x120 = 40120;
	int32_t t21 = -270;

	t21 = ((x117<(x118*x119))/x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = 3;
	volatile int32_t x128 = INT32_MAX;
	volatile int32_t t22 = 6094;

	t22 = ((x125<(x126*x127))/x128);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x133 = INT8_MIN;
	volatile uint64_t x134 = UINT64_MAX;
	volatile int64_t x136 = INT64_MIN;
	static int64_t t23 = -820094LL;

	t23 = ((x133<(x134*x135))/x136);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MIN;
	int32_t x139 = 51;
	static int64_t x140 = INT64_MIN;
	volatile int64_t t24 = -1059715881315920032LL;

	t24 = ((x137<(x138*x139))/x140);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	static volatile uint32_t x143 = UINT32_MAX;
	int64_t x144 = 38LL;
	volatile int64_t t25 = -285LL;

	t25 = ((x141<(x142*x143))/x144);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = -163505;
	static uint16_t x146 = 30U;
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 1U;
	int32_t t26 = -964243;

	t26 = ((x145<(x146*x147))/x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x154 = 104U;
	static volatile int32_t x155 = 54;
	volatile int64_t x156 = -22689LL;
	volatile int64_t t27 = 78296642LL;

	t27 = ((x153<(x154*x155))/x156);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x157 = 7445733LLU;
	static uint8_t x158 = 70U;
	volatile int16_t x159 = INT16_MIN;
	static int8_t x160 = INT8_MIN;
	int32_t t28 = 1020;

	t28 = ((x157<(x158*x159))/x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = INT32_MIN;
	static uint16_t x163 = 4194U;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t29 = 8728042LLU;

	t29 = ((x161<(x162*x163))/x164);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x165 = -1;
	static int64_t x167 = INT64_MAX;
	int8_t x168 = -1;
	static int32_t t30 = 0;

	t30 = ((x165<(x166*x167))/x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x169 = UINT16_MAX;
	uint64_t x170 = 3224944LLU;
	int32_t x171 = 327293747;
	uint32_t x172 = 97194703U;
	volatile uint32_t t31 = 6359U;

	t31 = ((x169<(x170*x171))/x172);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x182 = -1348;
	volatile int32_t t32 = -84403882;

	t32 = ((x181<(x182*x183))/x184);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x185 = UINT64_MAX;
	uint32_t x186 = 5U;
	volatile uint64_t x187 = 3337183850581LLU;
	int32_t x188 = INT32_MIN;
	volatile int32_t t33 = -9;

	t33 = ((x185<(x186*x187))/x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x189 = 34U;
	static int16_t x190 = INT16_MAX;
	uint8_t x191 = UINT8_MAX;
	int32_t x192 = -1450155;
	volatile int32_t t34 = -180;

	t34 = ((x189<(x190*x191))/x192);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x193 = -1;
	volatile int16_t x194 = 339;
	int16_t x195 = INT16_MAX;
	uint64_t x196 = UINT64_MAX;

	t35 = ((x193<(x194*x195))/x196);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x197 = UINT32_MAX;
	uint32_t x198 = 5912169U;
	int16_t x199 = 1710;
	volatile int8_t x200 = INT8_MIN;
	int32_t t36 = 18064;

	t36 = ((x197<(x198*x199))/x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x201 = INT8_MIN;
	int8_t x203 = -61;
	static uint32_t x204 = 200U;
	uint32_t t37 = 15082788U;

	t37 = ((x201<(x202*x203))/x204);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = INT16_MAX;
	static int16_t x216 = INT16_MIN;

	t38 = ((x213<(x214*x215))/x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x217 = INT16_MIN;
	static uint32_t x218 = 824660U;
	int16_t x219 = -55;
	volatile int32_t t39 = -218;

	t39 = ((x217<(x218*x219))/x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x225 = INT8_MAX;
	static uint16_t x227 = 7U;
	uint32_t x228 = 7496U;
	volatile uint32_t t40 = 59027933U;

	t40 = ((x225<(x226*x227))/x228);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x230 = 14U;
	volatile uint16_t x231 = 82U;
	static uint32_t x232 = UINT32_MAX;
	static uint32_t t41 = 274U;

	t41 = ((x229<(x230*x231))/x232);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x233 = 58333596U;
	static int8_t x235 = -1;
	volatile int64_t t42 = -1689576394846377854LL;

	t42 = ((x233<(x234*x235))/x236);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x237 = INT16_MIN;
	volatile int64_t x238 = -1LL;
	uint64_t x239 = 151509854LLU;
	volatile uint32_t t43 = 1930992598U;

	t43 = ((x237<(x238*x239))/x240);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x246 = UINT8_MAX;
	volatile uint16_t x247 = 600U;
	int8_t x248 = -1;
	int32_t t44 = 188906;

	t44 = ((x245<(x246*x247))/x248);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x249 = 3U;
	int16_t x250 = INT16_MIN;
	static uint8_t x251 = 3U;
	uint16_t x252 = 38U;

	t45 = ((x249<(x250*x251))/x252);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x253 = -2427LL;
	volatile int16_t x254 = INT16_MIN;
	uint32_t x256 = 3185U;

	t46 = ((x253<(x254*x255))/x256);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x257 = 167129423184LL;
	uint64_t x258 = UINT64_MAX;
	int8_t x260 = -1;
	volatile int32_t t47 = 15338;

	t47 = ((x257<(x258*x259))/x260);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = -22321955;
	uint16_t x267 = 6U;
	volatile int32_t t48 = 3602;

	t48 = ((x265<(x266*x267))/x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x270 = -1LL;
	int32_t x271 = -50171782;
	uint64_t x272 = 217945LLU;
	volatile uint64_t t49 = 947351790527718LLU;

	t49 = ((x269<(x270*x271))/x272);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x274 = 3LL;
	int8_t x275 = 10;
	int8_t x276 = -1;

	t50 = ((x273<(x274*x275))/x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x279 = 16U;
	uint16_t x280 = 1U;

	t51 = ((x277<(x278*x279))/x280);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MAX;

	t52 = ((x281<(x282*x283))/x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -1LL;
	uint16_t x287 = UINT16_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	static int32_t t53 = 462697442;

	t53 = ((x285<(x286*x287))/x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x289 = 0U;
	int16_t x290 = 89;
	uint64_t x291 = UINT64_MAX;
	static int32_t x292 = 1595;
	int32_t t54 = 10;

	t54 = ((x289<(x290*x291))/x292);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x298 = 0;
	volatile int8_t x299 = -18;

	t55 = ((x297<(x298*x299))/x300);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x301 = 108309791382156LLU;
	static int32_t x302 = -229554433;
	int16_t x303 = -1;
	int32_t x304 = -1;
	volatile int32_t t56 = -654;

	t56 = ((x301<(x302*x303))/x304);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x305 = 2052584LLU;
	int32_t x306 = 126202714;
	int64_t x308 = -962099140LL;
	volatile int64_t t57 = -608543LL;

	t57 = ((x305<(x306*x307))/x308);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x313 = INT64_MIN;
	volatile uint32_t x314 = 30867U;
	int32_t x315 = -62842;
	volatile int8_t x316 = 1;
	volatile int32_t t58 = -5006;

	t58 = ((x313<(x314*x315))/x316);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 73288732230368LL;
	int32_t x324 = 18;
	static int32_t t59 = 187;

	t59 = ((x321<(x322*x323))/x324);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x329 = -1;
	int16_t x331 = -1;
	volatile int64_t x332 = 1492299LL;

	t60 = ((x329<(x330*x331))/x332);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x337 = -1;
	uint64_t x338 = 7831301634LLU;
	uint64_t x339 = 96LLU;
	uint32_t x340 = 2641214U;
	uint32_t t61 = 1518813242U;

	t61 = ((x337<(x338*x339))/x340);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x343 = INT8_MAX;
	int32_t t62 = 1430458;

	t62 = ((x341<(x342*x343))/x344);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x345 = INT64_MIN;
	static int16_t x346 = -1;
	uint16_t x347 = 17U;
	static volatile int16_t x348 = INT16_MIN;
	static int32_t t63 = 1;

	t63 = ((x345<(x346*x347))/x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x351 = 32U;
	int64_t x352 = 4321622844294969720LL;

	t64 = ((x349<(x350*x351))/x352);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x353 = INT64_MIN;
	static volatile uint8_t x354 = 24U;
	volatile uint64_t x355 = 2026LLU;
	static int16_t x356 = -266;
	int32_t t65 = -93803;

	t65 = ((x353<(x354*x355))/x356);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x357 = UINT32_MAX;
	volatile int32_t x358 = INT32_MIN;
	static uint64_t x360 = 3280620813367LLU;
	static volatile uint64_t t66 = 10811LLU;

	t66 = ((x357<(x358*x359))/x360);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x361 = INT64_MIN;
	volatile int16_t x362 = INT16_MAX;
	uint8_t x363 = 5U;
	uint64_t x364 = 109929478285558LLU;
	static volatile uint64_t t67 = 219731220LLU;

	t67 = ((x361<(x362*x363))/x364);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x365 = 128435481U;
	int32_t x366 = -1;
	volatile int64_t x367 = INT64_MAX;
	uint16_t x368 = 9270U;
	int32_t t68 = 381;

	t68 = ((x365<(x366*x367))/x368);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x377 = INT32_MIN;
	int64_t x378 = -1LL;
	uint8_t x379 = 3U;
	uint64_t x380 = 2074686662275285391LLU;
	uint64_t t69 = 2999835288874LLU;

	t69 = ((x377<(x378*x379))/x380);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = INT8_MIN;
	volatile int16_t x384 = -1;
	static volatile int32_t t70 = 7;

	t70 = ((x381<(x382*x383))/x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x398 = 58U;
	uint16_t x399 = 792U;
	volatile int8_t x400 = -1;

	t71 = ((x397<(x398*x399))/x400);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x401 = 6350222679667LLU;
	uint16_t x402 = 8937U;
	static uint64_t x403 = 1LLU;
	int16_t x404 = INT16_MIN;
	volatile int32_t t72 = 122515690;

	t72 = ((x401<(x402*x403))/x404);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x405 = -24175294448319LL;
	volatile int32_t x406 = INT32_MIN;
	uint32_t x407 = 28982618U;
	volatile uint32_t x408 = UINT32_MAX;
	uint32_t t73 = 1308188U;

	t73 = ((x405<(x406*x407))/x408);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x413 = INT32_MIN;
	static int16_t x414 = INT16_MIN;
	volatile uint64_t x415 = UINT64_MAX;
	int8_t x416 = INT8_MIN;

	t74 = ((x413<(x414*x415))/x416);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x418 = 1285137948868LL;
	static int8_t x419 = -1;
	volatile int64_t t75 = 3215818457848LL;

	t75 = ((x417<(x418*x419))/x420);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x421 = UINT32_MAX;
	int8_t x422 = -13;
	static int32_t x423 = -479229;
	int8_t x424 = -1;

	t76 = ((x421<(x422*x423))/x424);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x425 = INT16_MAX;
	volatile uint16_t x428 = 227U;

	t77 = ((x425<(x426*x427))/x428);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x430 = 6U;
	volatile uint16_t x431 = UINT16_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t78 = 409;

	t78 = ((x429<(x430*x431))/x432);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x434 = -13;
	uint32_t x435 = UINT32_MAX;
	int32_t t79 = 1784;

	t79 = ((x433<(x434*x435))/x436);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x438 = UINT32_MAX;
	static volatile int16_t x439 = INT16_MAX;
	int32_t x440 = -1;
	volatile int32_t t80 = 7185;

	t80 = ((x437<(x438*x439))/x440);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x441 = 224602592U;
	static volatile uint8_t x443 = 0U;
	int32_t x444 = INT32_MIN;
	int32_t t81 = -460641;

	t81 = ((x441<(x442*x443))/x444);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x450 = 1U;
	uint64_t x451 = 6947550769LLU;
	int8_t x452 = 2;
	volatile int32_t t82 = 787496;

	t82 = ((x449<(x450*x451))/x452);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x459 = UINT64_MAX;
	static uint64_t x460 = UINT64_MAX;
	volatile uint64_t t83 = 11973597250053158LLU;

	t83 = ((x457<(x458*x459))/x460);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x465 = INT32_MAX;
	uint32_t x466 = 2780U;
	static uint32_t x467 = 124806U;
	volatile int32_t t84 = -267144915;

	t84 = ((x465<(x466*x467))/x468);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x469 = INT8_MIN;
	volatile uint16_t x470 = 6U;
	static volatile int16_t x471 = INT16_MAX;
	static volatile int32_t x472 = -30;
	int32_t t85 = 0;

	t85 = ((x469<(x470*x471))/x472);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x482 = INT16_MIN;
	int64_t x484 = INT64_MIN;
	volatile int64_t t86 = 16LL;

	t86 = ((x481<(x482*x483))/x484);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x486 = 3233914U;
	int32_t x487 = INT32_MAX;
	int16_t x488 = -1;
	volatile int32_t t87 = -4;

	t87 = ((x485<(x486*x487))/x488);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x489 = INT64_MAX;
	uint64_t x490 = UINT64_MAX;
	uint32_t x491 = 45870185U;
	volatile uint8_t x492 = UINT8_MAX;
	volatile int32_t t88 = -97372578;

	t88 = ((x489<(x490*x491))/x492);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x497 = 8021U;
	volatile int8_t x498 = INT8_MIN;
	static uint16_t x499 = 0U;
	volatile int64_t t89 = 49405097813178090LL;

	t89 = ((x497<(x498*x499))/x500);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x505 = INT32_MIN;
	int32_t x506 = -86;
	int64_t x508 = INT64_MAX;
	int64_t t90 = 4409265920630354824LL;

	t90 = ((x505<(x506*x507))/x508);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x509 = UINT8_MAX;
	static int32_t x510 = -9;
	static int64_t x511 = -1LL;
	volatile int8_t x512 = -1;
	static int32_t t91 = 3;

	t91 = ((x509<(x510*x511))/x512);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x517 = -57902921LL;
	volatile int32_t x518 = INT32_MIN;
	static volatile int64_t x519 = -4389744LL;
	volatile int32_t t92 = 7;

	t92 = ((x517<(x518*x519))/x520);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x522 = UINT8_MAX;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t93 = 54343181;

	t93 = ((x521<(x522*x523))/x524);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x529 = -1;
	int64_t x530 = 8LL;
	uint8_t x531 = UINT8_MAX;
	int16_t x532 = -1;

	t94 = ((x529<(x530*x531))/x532);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x534 = -131;
	uint32_t x535 = UINT32_MAX;
	volatile int64_t x536 = 78313192919731277LL;
	volatile int64_t t95 = -650434LL;

	t95 = ((x533<(x534*x535))/x536);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x538 = INT16_MAX;
	uint16_t x539 = 4892U;
	uint16_t x540 = 41U;
	volatile int32_t t96 = 2237835;

	t96 = ((x537<(x538*x539))/x540);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x541 = INT64_MAX;
	int32_t x542 = -1;
	int16_t x544 = -1;
	int32_t t97 = -2737663;

	t97 = ((x541<(x542*x543))/x544);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x545 = 4441794679819942LLU;
	static volatile int16_t x546 = INT16_MIN;
	static int64_t x547 = 7LL;
	int8_t x548 = INT8_MIN;
	volatile int32_t t98 = 1713668;

	t98 = ((x545<(x546*x547))/x548);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x549 = INT32_MIN;
	int16_t x550 = INT16_MIN;
	static uint8_t x551 = UINT8_MAX;
	int32_t t99 = 4767;

	t99 = ((x549<(x550*x551))/x552);

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

