#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
static int8_t x10 = INT8_MIN;
int64_t t2 = 2588223765642198986LL;
uint64_t x19 = 78075113LLU;
uint64_t t3 = 5996942019873387LLU;
uint8_t x30 = UINT8_MAX;
uint64_t x38 = 56LLU;
volatile uint64_t t7 = 1LLU;
static int16_t x51 = 955;
static int64_t x52 = -21125287LL;
uint8_t x53 = UINT8_MAX;
int16_t x56 = INT16_MIN;
int32_t t10 = 23;
volatile int64_t t11 = 335403870786117923LL;
int64_t x72 = -1LL;
int64_t t13 = 1LL;
volatile int32_t x80 = 233;
int16_t x88 = INT16_MIN;
static uint64_t x97 = 372629LLU;
volatile int64_t x98 = -535800349360LL;
int8_t x105 = 0;
uint64_t x112 = 2151LLU;
static int64_t x115 = 105153875LL;
volatile int32_t x118 = 584008;
uint32_t x119 = 3U;
static int8_t x120 = -4;
int32_t x124 = -1;
static int64_t t22 = 1055739910LL;
uint16_t x133 = 11U;
uint64_t x136 = 27361883LLU;
static volatile int16_t x151 = INT16_MIN;
uint8_t x160 = UINT8_MAX;
uint64_t x172 = UINT64_MAX;
static int16_t x175 = INT16_MIN;
int64_t x181 = 1924609082LL;
int8_t x182 = INT8_MIN;
int64_t x189 = 15388LL;
int16_t x190 = -1;
int16_t x197 = INT16_MIN;
int16_t x198 = -1;
int32_t x200 = INT32_MIN;
uint8_t x203 = UINT8_MAX;
int16_t x204 = INT16_MIN;
int64_t t43 = 72LL;
volatile int64_t t45 = 222358603LL;
uint64_t t46 = 956164511LLU;
volatile int16_t x243 = INT16_MIN;
volatile uint64_t t49 = 438106LLU;
uint16_t x260 = 3885U;
int64_t x261 = -30759812572658LL;
uint64_t x263 = 8850071675609594LLU;
volatile int64_t t52 = 90006LL;
int64_t x269 = INT64_MAX;
int64_t x271 = -30930910683LL;
volatile int16_t x272 = -1;
static int16_t x273 = 0;
uint16_t x278 = 279U;
int32_t x281 = INT32_MIN;
volatile int8_t x283 = -1;
int32_t x292 = 21463468;
int8_t x293 = INT8_MAX;
volatile uint64_t x302 = 14178629LLU;
volatile int32_t t60 = 66;
volatile int8_t x314 = -25;
int32_t x315 = INT32_MAX;
uint64_t t63 = 111035LLU;
int8_t x321 = INT8_MAX;
int32_t x326 = INT32_MAX;
uint64_t x329 = 37002496LLU;
static int8_t x332 = 7;
static int32_t x335 = INT32_MAX;
int16_t x336 = -1;
int16_t x342 = INT16_MIN;
uint64_t x345 = 98234LLU;
uint32_t x346 = 37886849U;
volatile uint32_t x348 = 34546U;
volatile int32_t x355 = INT32_MAX;
int8_t x360 = INT8_MIN;
uint64_t x361 = UINT64_MAX;
int8_t x379 = 0;
int32_t x385 = 877521;
static int32_t t80 = -7;
static uint32_t x396 = UINT32_MAX;
static volatile uint64_t x397 = UINT64_MAX;
uint64_t x400 = 128724778710352539LLU;
int16_t x401 = -10859;
int16_t x408 = INT16_MIN;
int64_t t85 = -8331966155LL;
int32_t x418 = INT32_MIN;
static uint8_t x422 = UINT8_MAX;
int64_t t88 = -462476LL;
int32_t x426 = INT32_MIN;
volatile uint8_t x429 = 2U;
int8_t x431 = INT8_MIN;
volatile int64_t t91 = 779467929624014LL;
volatile int64_t x439 = INT64_MAX;
static uint32_t x442 = 7615800U;
int16_t x448 = -1;
static uint64_t x454 = 27497LLU;
volatile uint32_t x455 = UINT32_MAX;
uint64_t x460 = UINT64_MAX;
uint64_t t97 = 14LLU;


void f0(void) {
	uint32_t x1 = 529010U;
	static int32_t x2 = -229;
	uint8_t x3 = 1U;
	static volatile uint32_t t0 = 2156385U;

	t0 = ((x1|x2)*(x3|x4));

	if (t0 != 4294950405U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	static int64_t x6 = -1LL;
	uint16_t x7 = UINT16_MAX;
	uint32_t x8 = 2450954U;
	int64_t t1 = -115600070028LL;

	t1 = ((x5|x6)*(x7|x8));

	if (t1 != -2490367LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MIN;
	volatile int64_t x11 = -1LL;
	int8_t x12 = INT8_MIN;

	t2 = ((x9|x10)*(x11|x12));

	if (t2 != 128LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 955;
	int64_t x18 = INT64_MAX;
	volatile int64_t x20 = INT64_MAX;

	t3 = ((x17|x18)*(x19|x20));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	static int16_t x27 = -2218;
	int64_t x28 = INT64_MIN;
	int64_t t4 = -1183666791LL;

	t4 = ((x25|x26)*(x27|x28));

	if (t4 != 283904LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x29 = -1;
	uint8_t x31 = UINT8_MAX;
	int32_t x32 = -1;
	int32_t t5 = 556;

	t5 = ((x29|x30)*(x31|x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	static volatile uint64_t x34 = 8131857826046LLU;
	static int16_t x35 = INT16_MAX;
	volatile uint16_t x36 = 26090U;
	uint64_t t6 = 20211546874990671LLU;

	t6 = ((x33|x34)*(x35|x36));

	if (t6 != 18446744073181019906LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = 49;
	int32_t x39 = -1;
	static uint32_t x40 = 504395142U;

	t7 = ((x37|x38)*(x39|x40));

	if (t7 != 244813135815LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x45 = INT8_MIN;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MAX;
	volatile int32_t t8 = 194781;

	t8 = ((x45|x46)*(x47|x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = -1;
	int8_t x50 = INT8_MAX;
	volatile int64_t t9 = 1421957472620LL;

	t9 = ((x49|x50)*(x51|x52));

	if (t9 != 21125125LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x54 = 73U;
	int16_t x55 = INT16_MIN;

	t10 = ((x53|x54)*(x55|x56));

	if (t10 != -8355840) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = -386LL;
	static int64_t x62 = -3465910978924041LL;
	uint16_t x63 = 14179U;
	int8_t x64 = INT8_MIN;

	t11 = ((x61|x62)*(x63|x64));

	if (t11 != 29LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x65 = 352;
	uint32_t x66 = UINT32_MAX;
	static int8_t x67 = -3;
	static int64_t x68 = INT64_MIN;
	volatile int64_t t12 = 458LL;

	t12 = ((x65|x66)*(x67|x68));

	if (t12 != -12884901885LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -1;
	int8_t x70 = 5;
	uint32_t x71 = 90787897U;

	t13 = ((x69|x70)*(x71|x72));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -4;
	uint32_t x78 = 0U;
	int32_t x79 = INT32_MIN;
	volatile uint32_t t14 = 113121273U;

	t14 = ((x77|x78)*(x79|x80));

	if (t14 != 4294966364U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x81 = 578LL;
	int32_t x82 = INT32_MIN;
	volatile uint64_t x83 = 1307972LLU;
	static uint32_t x84 = 248U;
	volatile uint64_t t15 = 357LLU;

	t15 = ((x81|x82)*(x83|x84));

	if (t15 != 18443934830846632696LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x85 = -2;
	int32_t x86 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	static int32_t t16 = 22266;

	t16 = ((x85|x86)*(x87|x88));

	if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = -1;
	static volatile uint64_t t17 = 473379LLU;

	t17 = ((x97|x98)*(x99|x100));

	if (t17 != 535800315947LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x106 = -1;
	uint8_t x107 = 2U;
	static volatile int8_t x108 = INT8_MIN;
	int32_t t18 = 348758;

	t18 = ((x105|x106)*(x107|x108));

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = 119U;
	int64_t x110 = 1019752328224LL;
	int8_t x111 = 2;
	volatile uint64_t t19 = 1543640248797038LLU;

	t19 = ((x109|x110)*(x111|x112));

	if (t19 != 2193487258196961LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = 0;
	static int32_t x114 = INT32_MIN;
	static uint8_t x116 = 7U;
	int64_t t20 = 17536085629623600LL;

	t20 = ((x113|x114)*(x115|x116));

	if (t20 != -225816235676270592LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = 0;
	volatile uint32_t t21 = 96361871U;

	t21 = ((x117|x118)*(x119|x120));

	if (t21 != 4294383288U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x121 = INT32_MIN;
	volatile int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;

	t22 = ((x121|x122)*(x123|x124));

	if (t22 != 2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x125 = UINT64_MAX;
	int32_t x126 = 246409;
	uint8_t x127 = UINT8_MAX;
	uint16_t x128 = 15085U;
	static uint64_t t23 = 1110702529833739003LLU;

	t23 = ((x125|x126)*(x127|x128));

	if (t23 != 18446744073709536513LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x134 = 7U;
	int8_t x135 = -1;
	static volatile uint64_t t24 = 3850722939LLU;

	t24 = ((x133|x134)*(x135|x136));

	if (t24 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x137 = 201527919781LLU;
	uint8_t x138 = 18U;
	static int8_t x139 = 23;
	int16_t x140 = INT16_MIN;
	static volatile uint64_t t25 = 749LLU;

	t25 = ((x137|x138)*(x139|x140));

	if (t25 != 18440145041975733361LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = -1;
	int16_t x142 = 0;
	int32_t x143 = -445;
	int32_t x144 = INT32_MIN;
	volatile int32_t t26 = 445;

	t26 = ((x141|x142)*(x143|x144));

	if (t26 != 445) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x145 = INT16_MIN;
	int16_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static int32_t x148 = INT32_MIN;
	static volatile int32_t t27 = 21;

	t27 = ((x145|x146)*(x147|x148));

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = INT32_MIN;
	volatile uint8_t x150 = UINT8_MAX;
	int64_t x152 = -3300229014378LL;
	static int64_t t28 = -3637998416010LL;

	t28 = ((x149|x150)*(x151|x152));

	if (t28 != 54653452351850LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x157 = INT8_MIN;
	volatile uint8_t x158 = 92U;
	static int16_t x159 = INT16_MAX;
	int32_t t29 = -3432;

	t29 = ((x157|x158)*(x159|x160));

	if (t29 != -1179612) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = -1;
	volatile int32_t x166 = INT32_MAX;
	int16_t x167 = INT16_MAX;
	int8_t x168 = INT8_MAX;
	int32_t t30 = 1182;

	t30 = ((x165|x166)*(x167|x168));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = -1;
	uint8_t x170 = 59U;
	int16_t x171 = -251;
	uint64_t t31 = 374294545LLU;

	t31 = ((x169|x170)*(x171|x172));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x173 = -1;
	int32_t x174 = 11;
	static int16_t x176 = -27;
	int32_t t32 = 3;

	t32 = ((x173|x174)*(x175|x176));

	if (t32 != 27) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x177 = 5U;
	int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = 1047806U;
	uint32_t t33 = 103336284U;

	t33 = ((x177|x178)*(x179|x180));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x183 = 365;
	uint32_t x184 = 1392474U;
	volatile int64_t t34 = 86335668LL;

	t34 = ((x181|x182)*(x183|x184));

	if (t34 != -97475770LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = INT64_MIN;
	volatile uint8_t x186 = 26U;
	int16_t x187 = 27;
	uint64_t x188 = UINT64_MAX;
	static uint64_t t35 = 11LLU;

	t35 = ((x185|x186)*(x187|x188));

	if (t35 != 9223372036854775782LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x191 = 28U;
	volatile uint64_t x192 = 15168593570140033LLU;
	static uint64_t t36 = 3390759102LLU;

	t36 = ((x189|x190)*(x191|x192));

	if (t36 != 18431575480139411555LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x199 = -16837302LL;
	int64_t t37 = 135557466LL;

	t37 = ((x197|x198)*(x199|x200));

	if (t37 != 16837302LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = 414887LL;
	uint8_t x202 = 6U;
	int64_t t38 = -63028624493393LL;

	t38 = ((x201|x202)*(x203|x204));

	if (t38 != -13489221031LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	volatile uint32_t x206 = 2U;
	uint64_t x207 = 35517841380515642LLU;
	volatile int32_t x208 = INT32_MAX;
	uint64_t t39 = 11123LLU;

	t39 = ((x205|x206)*(x207|x208));

	if (t39 != 13971495985021452414LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = -1;
	static uint8_t x211 = 1U;
	volatile uint8_t x212 = 125U;
	int32_t t40 = 1037790507;

	t40 = ((x209|x210)*(x211|x212));

	if (t40 != -125) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x213 = -238395;
	volatile int64_t x214 = -27868351LL;
	int16_t x215 = -134;
	int16_t x216 = -559;
	volatile int64_t t41 = -206496578165LL;

	t41 = ((x213|x214)*(x215|x216));

	if (t41 != 368935LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x217 = 50U;
	static uint8_t x218 = 0U;
	int32_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile int32_t t42 = 772225;

	t42 = ((x217|x218)*(x219|x220));

	if (t42 != -50) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x221 = INT32_MIN;
	static int32_t x222 = -1;
	int32_t x223 = INT32_MIN;
	static int64_t x224 = 1276098103LL;

	t43 = ((x221|x222)*(x223|x224));

	if (t43 != 871385545LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x226 = 25221124LLU;
	uint64_t x227 = 468517900513806626LLU;
	int32_t x228 = 298426759;
	uint64_t t44 = 247031963LLU;

	t44 = ((x225|x226)*(x227|x228));

	if (t44 != 3370748532868484764LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MIN;
	static volatile int16_t x230 = -1;
	int64_t x231 = INT64_MIN;
	uint16_t x232 = 13838U;

	t45 = ((x229|x230)*(x231|x232));

	if (t45 != 9223372036854761970LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MIN;
	static int32_t x235 = -4624718;
	uint64_t x236 = 368923850167LLU;

	t46 = ((x233|x234)*(x235|x236));

	if (t46 != 4489289LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = -1;
	int16_t x238 = 0;
	int8_t x239 = -1;
	static uint32_t x240 = 989U;
	volatile uint32_t t47 = 0U;

	t47 = ((x237|x238)*(x239|x240));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x241 = -6;
	int32_t x242 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t48 = -25595;

	t48 = ((x241|x242)*(x243|x244));

	if (t48 != 768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = INT16_MAX;
	static uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	volatile uint16_t x256 = 240U;

	t49 = ((x253|x254)*(x255|x256));

	if (t49 != 32528LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x257 = INT16_MIN;
	static uint8_t x258 = 30U;
	volatile uint8_t x259 = UINT8_MAX;
	volatile int32_t t50 = -50758;

	t50 = ((x257|x258)*(x259|x260));

	if (t50 != -134062110) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x262 = 1U;
	static int16_t x264 = INT16_MIN;
	uint64_t t51 = 21LLU;

	t51 = ((x261|x262)*(x263|x264));

	if (t51 != 740388688623853990LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x265 = INT16_MAX;
	static volatile int64_t x266 = 1133525182791666LL;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;

	t52 = ((x265|x266)*(x267|x268));

	if (t52 != -145091223399432064LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x270 = 1695U;
	int64_t t53 = 3648124642229571193LL;

	t53 = ((x269|x270)*(x271|x272));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x274 = 10;
	static int16_t x275 = 1;
	int16_t x276 = 0;
	int32_t t54 = -115;

	t54 = ((x273|x274)*(x275|x276));

	if (t54 != 10) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = -22;
	int64_t x279 = -1LL;
	uint32_t x280 = UINT32_MAX;
	volatile int64_t t55 = -1310936813152926590LL;

	t55 = ((x277|x278)*(x279|x280));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x282 = 7741U;
	static int32_t x284 = -1;
	volatile int32_t t56 = 3537332;

	t56 = ((x281|x282)*(x283|x284));

	if (t56 != 2147475907) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x289 = 470LLU;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = UINT64_MAX;
	uint64_t t57 = 1LLU;

	t57 = ((x289|x290)*(x291|x292));

	if (t57 != 42LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x294 = 448884659U;
	int64_t x295 = -277622792432LL;
	int32_t x296 = -276;
	volatile int64_t t58 = 8012114LL;

	t58 = ((x293|x294)*(x295|x296));

	if (t58 != -1795538940LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x301 = INT8_MIN;
	static volatile uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 64U;
	volatile uint64_t t59 = 452651755755168013LLU;

	t59 = ((x301|x302)*(x303|x304));

	if (t59 != 18446744073705685051LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x305 = -22;
	int8_t x306 = -35;
	int16_t x307 = -1;
	int8_t x308 = INT8_MIN;

	t60 = ((x305|x306)*(x307|x308));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -3;
	int32_t x311 = -1033425;
	int64_t x312 = INT64_MIN;
	volatile int64_t t61 = -51042297339302321LL;

	t61 = ((x309|x310)*(x311|x312));

	if (t61 != 3100275LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x313 = -1LL;
	volatile int8_t x316 = INT8_MIN;
	volatile int64_t t62 = -8710190554741LL;

	t62 = ((x313|x314)*(x315|x316));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x317 = UINT64_MAX;
	int16_t x318 = -1;
	uint16_t x319 = 12070U;
	uint32_t x320 = UINT32_MAX;

	t63 = ((x317|x318)*(x319|x320));

	if (t63 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x322 = 5U;
	int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	static volatile int64_t t64 = -576734LL;

	t64 = ((x321|x322)*(x323|x324));

	if (t64 != -4161536LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = 164;
	int8_t x327 = INT8_MIN;
	uint16_t x328 = UINT16_MAX;
	int32_t t65 = 4;

	t65 = ((x325|x326)*(x327|x328));

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x330 = -1LL;
	volatile uint32_t x331 = 6U;
	volatile uint64_t t66 = 391856LLU;

	t66 = ((x329|x330)*(x331|x332));

	if (t66 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x333 = -1;
	int16_t x334 = -3026;
	static int32_t t67 = -468873;

	t67 = ((x333|x334)*(x335|x336));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = 106900961335LLU;
	static int64_t x338 = 2LL;
	static int64_t x339 = INT64_MIN;
	static int64_t x340 = INT64_MIN;
	static volatile uint64_t t68 = 2174899863LLU;

	t68 = ((x337|x338)*(x339|x340));

	if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x341 = 9027;
	int16_t x343 = 22;
	volatile int8_t x344 = -1;
	int32_t t69 = 13633695;

	t69 = ((x341|x342)*(x343|x344));

	if (t69 != 23741) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x347 = INT16_MIN;
	volatile uint64_t t70 = 38755844753136LLU;

	t70 = ((x345|x346)*(x347|x348));

	if (t70 != 163113275711529158LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x349 = 8351946LL;
	int64_t x350 = 829LL;
	int8_t x351 = 1;
	static uint32_t x352 = 552831740U;
	volatile int64_t t71 = -5915LL;

	t71 = ((x349|x350)*(x351|x352));

	if (t71 != 4617674722777347LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = -48;
	static int16_t x354 = INT16_MAX;
	volatile int64_t x356 = 94899374224660812LL;
	int64_t t72 = -53LL;

	t72 = ((x353|x354)*(x355|x356));

	if (t72 != -94899374726840319LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x357 = INT32_MIN;
	static uint64_t x358 = 36777354016LLU;
	int32_t x359 = INT32_MAX;
	uint64_t t73 = 23LLU;

	t73 = ((x357|x358)*(x359|x360));

	if (t73 != 1877351648LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x362 = 0;
	static uint32_t x363 = 169879U;
	int64_t x364 = INT64_MIN;
	uint64_t t74 = 1627LLU;

	t74 = ((x361|x362)*(x363|x364));

	if (t74 != 9223372036854605929LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x369 = INT8_MIN;
	static int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MAX;
	uint16_t x372 = 147U;
	volatile int32_t t75 = -423279;

	t75 = ((x369|x370)*(x371|x372));

	if (t75 != -4194176) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = -352313926;
	uint64_t x376 = 917226974LLU;
	uint64_t t76 = 618691556619108544LLU;

	t76 = ((x373|x374)*(x375|x376));

	if (t76 != 18423062783686091266LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x377 = 131329501371551404LLU;
	static int32_t x378 = INT32_MIN;
	int8_t x380 = INT8_MIN;
	static volatile uint64_t t77 = 378LLU;

	t77 = ((x377|x378)*(x379|x380));

	if (t77 != 90665691648LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x381 = -13349;
	static uint32_t x382 = 24675243U;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MIN;
	static volatile uint32_t t78 = 783062U;

	t78 = ((x381|x382)*(x383|x384));

	if (t78 != 1704576U) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x386 = INT8_MIN;
	static uint64_t x387 = 3076959257592LLU;
	int32_t x388 = -1;
	static uint64_t t79 = 892452612502878LLU;

	t79 = ((x385|x386)*(x387|x388));

	if (t79 != 47LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = -116;
	int32_t x390 = -11214117;
	static int32_t x391 = 0;
	int16_t x392 = -1;

	t80 = ((x389|x390)*(x391|x392));

	if (t80 != 33) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = -1LL;
	int64_t x395 = INT64_MAX;
	volatile int64_t t81 = 88295628926877985LL;

	t81 = ((x393|x394)*(x395|x396));

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x398 = INT64_MAX;
	static int8_t x399 = -1;
	volatile uint64_t t82 = 565218975255LLU;

	t82 = ((x397|x398)*(x399|x400));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x402 = INT16_MIN;
	int8_t x403 = 11;
	int8_t x404 = INT8_MAX;
	int32_t t83 = -58518361;

	t83 = ((x401|x402)*(x403|x404));

	if (t83 != -1379093) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x405 = UINT8_MAX;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = INT16_MIN;
	volatile uint64_t t84 = 16053808LLU;

	t84 = ((x405|x406)*(x407|x408));

	if (t84 != 32768LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x409 = INT32_MIN;
	volatile int64_t x410 = INT64_MIN;
	int32_t x411 = INT32_MAX;
	int32_t x412 = INT32_MIN;

	t85 = ((x409|x410)*(x411|x412));

	if (t85 != 2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x413 = -1;
	int16_t x414 = 2371;
	uint16_t x415 = 44U;
	uint8_t x416 = UINT8_MAX;
	static volatile int32_t t86 = 77335372;

	t86 = ((x413|x414)*(x415|x416));

	if (t86 != -255) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x417 = INT16_MIN;
	static int16_t x419 = -1;
	volatile uint16_t x420 = 34U;
	volatile int32_t t87 = -33482422;

	t87 = ((x417|x418)*(x419|x420));

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x421 = UINT16_MAX;
	int64_t x423 = 1932LL;
	int64_t x424 = -1LL;

	t88 = ((x421|x422)*(x423|x424));

	if (t88 != -65535LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x425 = INT64_MAX;
	volatile int8_t x427 = -23;
	uint32_t x428 = 49U;
	volatile int64_t t89 = -3847LL;

	t89 = ((x425|x426)*(x427|x428));

	if (t89 != -4294967289LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x430 = 59U;
	static uint64_t x432 = UINT64_MAX;
	static uint64_t t90 = 12LLU;

	t90 = ((x429|x430)*(x431|x432));

	if (t90 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x433 = UINT16_MAX;
	static int64_t x434 = INT64_MIN;
	int32_t x435 = 2878;
	static volatile int32_t x436 = -1;

	t91 = ((x433|x434)*(x435|x436));

	if (t91 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = INT16_MIN;
	uint64_t x438 = 16183LLU;
	uint16_t x440 = 1209U;
	static uint64_t t92 = 9979474271829LLU;

	t92 = ((x437|x438)*(x439|x440));

	if (t92 != 9223372036854792393LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = -1;
	int8_t x443 = INT8_MIN;
	int16_t x444 = 444;
	static volatile uint32_t t93 = 3145660U;

	t93 = ((x441|x442)*(x443|x444));

	if (t93 != 68U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x445 = -1;
	int64_t x446 = INT64_MIN;
	static uint32_t x447 = 492U;
	int64_t t94 = -94260471234383LL;

	t94 = ((x445|x446)*(x447|x448));

	if (t94 != -4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x449 = -1;
	int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MIN;
	int64_t x452 = -1LL;
	volatile int64_t t95 = -156200956740LL;

	t95 = ((x449|x450)*(x451|x452));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x453 = INT16_MIN;
	static uint8_t x456 = 43U;
	static volatile uint64_t t96 = 1845907845455155508LLU;

	t96 = ((x453|x454)*(x455|x456));

	if (t96 != 18446721434936939671LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x457 = -1LL;
	static volatile int32_t x458 = INT32_MAX;
	static uint64_t x459 = 32343237LLU;

	t97 = ((x457|x458)*(x459|x460));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = 3854359;
	int16_t x462 = INT16_MAX;
	volatile uint8_t x463 = UINT8_MAX;
	static uint8_t x464 = UINT8_MAX;
	int32_t t98 = 13927;

	t98 = ((x461|x462)*(x463|x464));

	if (t98 != 985988865) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x465 = INT32_MIN;
	uint32_t x466 = UINT32_MAX;
	volatile int16_t x467 = -1;
	uint16_t x468 = 2398U;
	uint32_t t99 = 17526470U;

	t99 = ((x465|x466)*(x467|x468));

	if (t99 != 1U) { NG(); } else { ; }
	
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

