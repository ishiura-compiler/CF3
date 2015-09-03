#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x10 = 103U;
int32_t x12 = 0;
uint64_t t4 = 2LLU;
uint64_t x25 = 12676604075135190LLU;
uint64_t x48 = 18LLU;
int8_t x53 = INT8_MIN;
static int32_t x58 = -40798866;
volatile int64_t t14 = 337725343964850LL;
uint64_t x65 = UINT64_MAX;
static volatile int8_t x67 = INT8_MIN;
int8_t x68 = -2;
int64_t x88 = -962673347LL;
volatile uint32_t x95 = 14U;
int32_t x98 = 1;
static int64_t x100 = -16404399952246786LL;
int8_t x108 = 60;
uint8_t x109 = UINT8_MAX;
static uint64_t t24 = 10193842LLU;
uint32_t t26 = 228748418U;
volatile int16_t x135 = -1;
uint16_t x136 = 27U;
int16_t x141 = INT16_MIN;
static uint32_t x142 = 59U;
volatile uint16_t x144 = 7962U;
int64_t x146 = -1537709571434LL;
static volatile uint32_t x167 = 132286620U;
int64_t x170 = INT64_MIN;
static int64_t x174 = INT64_MAX;
static uint16_t x175 = 26U;
volatile int16_t x176 = INT16_MIN;
int16_t x180 = INT16_MAX;
static volatile int32_t x183 = -12175;
static uint64_t x193 = 62LLU;
uint64_t t41 = 1LLU;
int64_t x203 = 119962LL;
static int64_t t43 = 1LL;
static uint16_t x209 = UINT16_MAX;
uint16_t x219 = 8U;
int64_t x241 = 3LL;
int8_t x243 = -15;
int16_t x244 = INT16_MIN;
volatile int64_t x254 = INT64_MIN;
static uint64_t x264 = UINT64_MAX;
int16_t x265 = -126;
uint32_t x266 = 416U;
int8_t x276 = -1;
int16_t x283 = 1341;
volatile int64_t x289 = INT64_MIN;
uint32_t x293 = 6U;
int32_t x295 = INT32_MAX;
volatile uint8_t x299 = 19U;
int32_t x308 = INT32_MIN;
volatile int16_t x311 = INT16_MIN;
static volatile int32_t t65 = 16751;
uint64_t x316 = UINT64_MAX;
int8_t x341 = -1;
uint32_t x344 = 136113393U;
volatile int16_t x357 = -213;
uint32_t x369 = UINT32_MAX;
volatile uint32_t t75 = 1U;
int8_t x381 = 1;
uint64_t x390 = 62321745973LLU;
uint8_t x391 = 2U;
volatile uint64_t t78 = 12265718LLU;
uint8_t x399 = 1U;
int16_t x403 = 10017;
static volatile int32_t x412 = -1;
int64_t t84 = -12000LL;
static volatile uint32_t x428 = 52356010U;
int32_t t88 = 15676;
volatile int32_t x436 = INT32_MIN;
int64_t x438 = -148735580123LL;
static uint64_t x449 = 10774155730871602LLU;
uint16_t x454 = 19U;
uint8_t x473 = 47U;
int32_t x474 = -1;
int32_t x480 = INT32_MAX;
uint64_t t98 = 102168483632695LLU;


void f0(void) {
	uint16_t x1 = 0U;
	static int16_t x2 = -1;
	int16_t x3 = INT16_MIN;
	int64_t x4 = 47LL;
	int64_t t0 = -1217129LL;

	t0 = ((x1^(x2|x3))*x4);

	if (t0 != -47LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int16_t x6 = 425;
	int16_t x7 = INT16_MIN;
	volatile int32_t x8 = -57878;
	volatile int32_t t1 = -4401;

	t1 = ((x5^(x6|x7))*x8);

	if (t1 != -1871890276) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 55LLU;
	int8_t x11 = 2;
	uint64_t t2 = 32557125LLU;

	t2 = ((x9^(x10|x11))*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 22017LLU;
	int8_t x14 = -1;
	uint8_t x15 = 44U;
	static int16_t x16 = 1;
	volatile uint64_t t3 = 116773560948040LLU;

	t3 = ((x13^(x14|x15))*x16);

	if (t3 != 18446744073709529598LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -29;
	static uint64_t x18 = 17340934901108LLU;
	static int16_t x19 = -1;
	int8_t x20 = -2;

	t4 = ((x17^(x18|x19))*x20);

	if (t4 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	static uint16_t x27 = 30607U;
	uint8_t x28 = 0U;
	static volatile uint64_t t5 = 3801LLU;

	t5 = ((x25^(x26|x27))*x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 22U;
	static int8_t x30 = 2;
	static int16_t x31 = 10;
	int64_t x32 = -1LL;
	int64_t t6 = 52LL;

	t6 = ((x29^(x30|x31))*x32);

	if (t6 != -28LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	volatile int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MAX;
	static int32_t x36 = -3507;
	volatile int32_t t7 = 25;

	t7 = ((x33^(x34|x35))*x36);

	if (t7 != -445389) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = 64U;
	int16_t x39 = 13;
	uint16_t x40 = 11U;
	int32_t t8 = 41;

	t8 = ((x37^(x38|x39))*x40);

	if (t8 != -561) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 31497132500834451LL;
	uint64_t x42 = 16626580480820188LLU;
	int32_t x43 = -181073;
	static int8_t x44 = -1;
	volatile uint64_t t9 = 109602LLU;

	t9 = ((x41^(x42|x43))*x44);

	if (t9 != 31497132500818068LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MAX;
	int64_t x47 = -1LL;
	volatile uint64_t t10 = 358543LLU;

	t10 = ((x45^(x46|x47))*x48);

	if (t10 != 18446744073708961792LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = -1;
	int8_t x50 = INT8_MIN;
	int8_t x51 = -1;
	static uint16_t x52 = 19U;
	int32_t t11 = -16102599;

	t11 = ((x49^(x50|x51))*x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x54 = 7491266672691102766LLU;
	static int16_t x55 = INT16_MIN;
	int8_t x56 = -1;
	static uint64_t t12 = 6493665844088614409LLU;

	t12 = ((x53^(x54|x55))*x56);

	if (t12 != 18446744073709536338LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x59 = 2234157;
	static uint32_t x60 = UINT32_MAX;
	uint32_t t13 = 88494918U;

	t13 = ((x57^(x58|x59))*x60);

	if (t13 != 4256397168U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x61 = 2U;
	static volatile int64_t x62 = INT64_MAX;
	uint16_t x63 = 774U;
	int32_t x64 = -1;

	t14 = ((x61^(x62|x63))*x64);

	if (t14 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = 51582089LL;
	static uint64_t t15 = 736377LLU;

	t15 = ((x65^(x66|x67))*x68);

	if (t15 != 18446744073709551380LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	volatile int16_t x70 = 2239;
	int64_t x71 = -1LL;
	int8_t x72 = INT8_MAX;
	static int64_t t16 = 15304241816496LL;

	t16 = ((x69^(x70|x71))*x72);

	if (t16 != -272730423296LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MAX;
	uint16_t x86 = UINT16_MAX;
	volatile int64_t x87 = -1LL;
	volatile int64_t t17 = -1012266465523LL;

	t17 = ((x85^(x86|x87))*x88);

	if (t17 != 31544880234496LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x90 = 332;
	static volatile int64_t x91 = 118015663LL;
	uint32_t x92 = 732326U;
	int64_t t18 = -42016261LL;

	t18 = ((x89^(x90|x91))*x92);

	if (t18 != 86399200467552LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x94 = UINT16_MAX;
	int8_t x96 = 29;
	uint32_t t19 = 2565U;

	t19 = ((x93^(x94|x95))*x96);

	if (t19 != 4293070435U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x97 = 98016606967869LLU;
	int64_t x99 = -1LL;
	uint64_t t20 = 4170725996981723LLU;

	t20 = ((x97^(x98|x99))*x100);

	if (t20 != 17216318812779069564LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 1U;
	int64_t x102 = INT64_MIN;
	volatile int32_t x103 = -1;
	uint64_t x104 = UINT64_MAX;
	static volatile uint64_t t21 = 23107098LLU;

	t21 = ((x101^(x102|x103))*x104);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	static int64_t t22 = -342943LL;

	t22 = ((x105^(x106|x107))*x108);

	if (t22 != 1958400LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x110 = -1;
	static int32_t x111 = INT32_MAX;
	int8_t x112 = -1;
	int32_t t23 = -206900545;

	t23 = ((x109^(x110|x111))*x112);

	if (t23 != 256) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -1;
	uint16_t x118 = 1U;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = -1LL;

	t24 = ((x117^(x118|x119))*x120);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	static int8_t x122 = -1;
	uint64_t x123 = 7783059557826LLU;
	uint64_t x124 = UINT64_MAX;
	uint64_t t25 = 650948610046573LLU;

	t25 = ((x121^(x122|x123))*x124);

	if (t25 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = 42;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 6U;

	t26 = ((x125^(x126|x127))*x128);

	if (t26 != 762U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = 41523934530918748LL;
	int64_t x134 = -209539461968LL;
	volatile int64_t t27 = -2018600LL;

	t27 = ((x133^(x134|x135))*x136);

	if (t27 != -1121146232334806223LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = 378486;
	volatile int8_t x138 = INT8_MAX;
	int64_t x139 = -1LL;
	static int8_t x140 = INT8_MAX;
	int64_t t28 = 119466986316084184LL;

	t28 = ((x137^(x138|x139))*x140);

	if (t28 != -48067849LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x143 = 0;
	uint32_t t29 = 7217U;

	t29 = ((x141^(x142|x143))*x144);

	if (t29 != 4034538238U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x145 = UINT16_MAX;
	volatile int16_t x147 = INT16_MIN;
	static int8_t x148 = INT8_MIN;
	volatile int64_t t30 = -19104852322934677LL;

	t30 = ((x145^(x146|x147))*x148);

	if (t30 != 4279168LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = 2093;
	int8_t x150 = INT8_MIN;
	uint64_t x151 = 536688939979277774LLU;
	uint32_t x152 = 235080304U;
	uint64_t t31 = 135260901904493LLU;

	t31 = ((x149^(x150|x151))*x152);

	if (t31 != 18446743585447760208LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x153 = -2;
	int32_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;
	uint64_t t32 = UINT64_MAX;

	t32 = ((x153^(x154|x155))*x156);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x157 = INT64_MIN;
	uint8_t x158 = 1U;
	int16_t x159 = -2527;
	int8_t x160 = 0;
	volatile int64_t t33 = -25LL;

	t33 = ((x157^(x158|x159))*x160);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x161 = 22370857LLU;
	volatile int64_t x162 = 25934312043112LL;
	uint32_t x163 = 1213669U;
	uint32_t x164 = 555U;
	volatile uint64_t t34 = 24331LLU;

	t34 = ((x161^(x162|x163))*x164);

	if (t34 != 14393530916506860LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = UINT16_MAX;
	int16_t x166 = 777;
	volatile uint8_t x168 = 22U;
	volatile uint32_t t35 = 2403U;

	t35 = ((x165^(x166|x167))*x168);

	if (t35 != 2910191724U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	int64_t x171 = -1LL;
	int64_t x172 = -1LL;
	int64_t t36 = 1926349952099345LL;

	t36 = ((x169^(x170|x171))*x172);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	volatile int64_t t37 = 117625802346579LL;

	t37 = ((x173^(x174|x175))*x176);

	if (t37 != 32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = 633U;
	int8_t x178 = -13;
	int32_t x179 = INT32_MIN;
	volatile int32_t t38 = -10;

	t38 = ((x177^(x178|x179))*x180);

	if (t38 != -20643210) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x181 = UINT8_MAX;
	static volatile uint16_t x182 = UINT16_MAX;
	int16_t x184 = INT16_MAX;
	volatile int32_t t39 = 3538;

	t39 = ((x181^(x182|x183))*x184);

	if (t39 != -8388352) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = 6U;
	static uint8_t x192 = 3U;
	int32_t t40 = -470;

	t40 = ((x189^(x190|x191))*x192);

	if (t40 != 18) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x194 = INT64_MAX;
	static int32_t x195 = INT32_MIN;
	uint16_t x196 = UINT16_MAX;

	t41 = ((x193^(x194|x195))*x196);

	if (t41 != 18446744073705422911LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x197 = 1;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 696921693LLU;
	volatile int32_t x200 = 106;
	volatile uint64_t t42 = 1371LLU;

	t42 = ((x197^(x198|x199))*x200);

	if (t42 != 73873699352LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = -1LL;
	int32_t x202 = INT32_MIN;
	int16_t x204 = INT16_MIN;

	t43 = ((x201^(x202|x203))*x204);

	if (t43 != -70364813230080LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x205 = -6050;
	int64_t x206 = -505579723595535LL;
	int16_t x207 = -7084;
	int32_t x208 = INT32_MIN;
	volatile int64_t t44 = 670923401711644LL;

	t44 = ((x205^(x206|x207))*x208);

	if (t44 != -6964289470464LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x210 = INT8_MIN;
	static uint16_t x211 = 1U;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t45 = 172;

	t45 = ((x209^(x210|x211))*x212);

	if (t45 != 8372480) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x213 = -114;
	int8_t x214 = INT8_MIN;
	int16_t x215 = -3329;
	static int8_t x216 = -5;
	static int32_t t46 = -65467837;

	t46 = ((x213^(x214|x215))*x216);

	if (t46 != -565) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x217 = 0U;
	static int16_t x218 = -341;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t47 = 249903;

	t47 = ((x217^(x218|x219))*x220);

	if (t47 != 11173888) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x225 = 447U;
	static uint16_t x226 = UINT16_MAX;
	uint16_t x227 = 73U;
	static int8_t x228 = INT8_MAX;
	uint32_t t48 = 20160U;

	t48 = ((x225^(x226|x227))*x228);

	if (t48 != 8266176U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MAX;
	static uint16_t x234 = 181U;
	uint64_t x235 = 200407102568LLU;
	static int32_t x236 = INT32_MIN;
	uint64_t t49 = 2934LLU;

	t49 = ((x233^(x234|x235))*x236);

	if (t49 != 6095862334641668096LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x237 = UINT16_MAX;
	uint32_t x238 = UINT32_MAX;
	int32_t x239 = -12650216;
	uint64_t x240 = 3333LLU;
	uint64_t t50 = 22LLU;

	t50 = ((x237^(x238|x239))*x240);

	if (t50 != 14314907566080LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x242 = -12687;
	volatile int64_t t51 = -118219547817LL;

	t51 = ((x241^(x242|x243))*x244);

	if (t51 != 458752LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x255 = 105791887749LLU;
	int32_t x256 = INT32_MIN;
	volatile uint64_t t52 = 55588LLU;

	t52 = ((x253^(x254|x255))*x256);

	if (t52 != 5825462457237241856LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x258 = 119627LLU;
	uint8_t x259 = 77U;
	int16_t x260 = 7355;
	uint64_t t53 = 4673556466603473LLU;

	t53 = ((x257^(x258|x259))*x260);

	if (t53 != 18446728279847206581LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = -1;
	int8_t x262 = 3;
	static int16_t x263 = -8;
	static uint64_t t54 = 33495797931458945LLU;

	t54 = ((x261^(x262|x263))*x264);

	if (t54 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x267 = -1;
	uint16_t x268 = 7965U;
	volatile uint32_t t55 = 4643047U;

	t55 = ((x265^(x266|x267))*x268);

	if (t55 != 995625U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = -1;
	int8_t x270 = INT8_MIN;
	volatile uint16_t x271 = UINT16_MAX;
	uint16_t x272 = UINT16_MAX;
	static int32_t t56 = 2510;

	t56 = ((x269^(x270|x271))*x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x273 = INT64_MIN;
	int32_t x274 = -9;
	int32_t x275 = INT32_MIN;
	volatile int64_t t57 = 7069360572400219LL;

	t57 = ((x273^(x274|x275))*x276);

	if (t57 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x277 = 22U;
	static volatile int16_t x278 = -1;
	int64_t x279 = -1LL;
	static volatile int32_t x280 = 501;
	volatile int64_t t58 = 107523246947001LL;

	t58 = ((x277^(x278|x279))*x280);

	if (t58 != -11523LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -12104613659794LL;
	volatile int32_t x282 = 37;
	static uint16_t x284 = 1U;
	static int64_t t59 = -22248773LL;

	t59 = ((x281^(x282|x283))*x284);

	if (t59 != -12104613659053LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x285 = 100U;
	int64_t x286 = INT64_MAX;
	uint64_t x287 = 378204767LLU;
	static uint32_t x288 = 10U;
	volatile uint64_t t60 = 2045986LLU;

	t60 = ((x285^(x286|x287))*x288);

	if (t60 != 18446744073709550606LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x290 = 0;
	uint64_t x291 = 9166643284649LLU;
	int64_t x292 = -1LL;
	uint64_t t61 = 3765LLU;

	t61 = ((x289^(x290|x291))*x292);

	if (t61 != 9223362870211491159LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x294 = 3;
	static uint32_t x296 = 16904645U;
	volatile uint32_t t62 = 58338U;

	t62 = ((x293^(x294|x295))*x296);

	if (t62 != 2029151133U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x297 = 18U;
	volatile int32_t x298 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t63 = 120086307;

	t63 = ((x297^(x298|x299))*x300);

	if (t63 != 2432) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x305 = INT32_MIN;
	static uint32_t x306 = 73536136U;
	int32_t x307 = INT32_MIN;
	volatile uint32_t t64 = 532U;

	t64 = ((x305^(x306|x307))*x308);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x309 = -1;
	int16_t x310 = 702;
	int16_t x312 = INT16_MIN;

	t65 = ((x309^(x310|x311))*x312);

	if (t65 != -1050705920) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x313 = -1546;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MIN;
	uint64_t t66 = 96399836579LLU;

	t66 = ((x313^(x314|x315))*x316);

	if (t66 != 18446744071562069514LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = INT16_MAX;
	volatile uint8_t x318 = UINT8_MAX;
	int16_t x319 = INT16_MIN;
	volatile int64_t x320 = -1LL;
	volatile int64_t t67 = 47773636187940790LL;

	t67 = ((x317^(x318|x319))*x320);

	if (t67 != 256LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	uint32_t x323 = 9331U;
	int8_t x324 = -1;
	int64_t t68 = 515949847313447LL;

	t68 = ((x321^(x322|x323))*x324);

	if (t68 != -9331LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x329 = 1U;
	uint64_t x330 = 237221LLU;
	int32_t x331 = INT32_MIN;
	int16_t x332 = -1;
	uint64_t t69 = 1LLU;

	t69 = ((x329^(x330|x331))*x332);

	if (t69 != 2147246428LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x342 = -1;
	volatile uint32_t x343 = UINT32_MAX;
	uint32_t t70 = 0U;

	t70 = ((x341^(x342|x343))*x344);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x345 = INT8_MIN;
	uint32_t x346 = UINT32_MAX;
	int32_t x347 = -28618520;
	uint8_t x348 = UINT8_MAX;
	uint32_t t71 = 6102850U;

	t71 = ((x345^(x346|x347))*x348);

	if (t71 != 32385U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x358 = 6LLU;
	uint64_t x359 = UINT64_MAX;
	static int16_t x360 = INT16_MAX;
	volatile uint64_t t72 = 3LLU;

	t72 = ((x357^(x358|x359))*x360);

	if (t72 != 6946604LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = 1603;
	int16_t x362 = -1;
	int32_t x363 = INT32_MIN;
	int64_t x364 = -19LL;
	static int64_t t73 = -44863LL;

	t73 = ((x361^(x362|x363))*x364);

	if (t73 != 30476LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x365 = 10828301772176LLU;
	int32_t x366 = -1;
	int32_t x367 = 7601;
	int32_t x368 = INT32_MIN;
	volatile uint64_t t74 = 107278LLU;

	t74 = ((x365^(x366|x367))*x368);

	if (t74 != 10703458485493825536LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x370 = 59;
	static uint16_t x371 = 20U;
	int8_t x372 = INT8_MIN;

	t75 = ((x369^(x370|x371))*x372);

	if (t75 != 8192U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x377 = 2U;
	volatile uint32_t x378 = UINT32_MAX;
	int16_t x379 = -15000;
	int64_t x380 = 1LL;
	volatile int64_t t76 = 29828597LL;

	t76 = ((x377^(x378|x379))*x380);

	if (t76 != 4294967293LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x382 = 16U;
	int32_t x383 = -11;
	uint8_t x384 = 105U;
	static volatile int32_t t77 = 901597;

	t77 = ((x381^(x382|x383))*x384);

	if (t77 != -1260) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = INT8_MAX;
	uint8_t x392 = 6U;

	t78 = ((x389^(x390|x391))*x392);

	if (t78 != 373930475952LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x393 = 32229U;
	int32_t x394 = -1;
	volatile int64_t x395 = INT64_MIN;
	uint32_t x396 = 63154234U;
	static volatile int64_t t79 = -1227283008338733LL;

	t79 = ((x393^(x394|x395))*x396);

	if (t79 != -2035460961820LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x397 = -1;
	static uint8_t x398 = 1U;
	int8_t x400 = INT8_MAX;
	int32_t t80 = -12116581;

	t80 = ((x397^(x398|x399))*x400);

	if (t80 != -254) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x401 = 5;
	volatile int8_t x402 = -1;
	int32_t x404 = 347952;
	int32_t t81 = -3999;

	t81 = ((x401^(x402|x403))*x404);

	if (t81 != -2087712) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x405 = UINT8_MAX;
	volatile uint64_t x406 = 3323353203751627452LLU;
	int32_t x407 = 88344;
	volatile int16_t x408 = INT16_MIN;
	volatile uint64_t t82 = 44241828LLU;

	t82 = ((x405^(x406|x407))*x408);

	if (t82 != 9939230647188881408LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x409 = UINT16_MAX;
	static uint8_t x410 = 49U;
	int32_t x411 = INT32_MIN;
	int32_t t83 = 2;

	t83 = ((x409^(x410|x411))*x412);

	if (t83 != 2147418162) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x413 = 118LL;
	static volatile int16_t x414 = 1;
	static uint16_t x415 = 7136U;
	volatile int32_t x416 = INT32_MIN;

	t84 = ((x413^(x414|x415))*x416);

	if (t84 != -15167677005824LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x417 = INT16_MAX;
	int16_t x418 = 135;
	int32_t x419 = 81958;
	int8_t x420 = -1;
	int32_t t85 = 36;

	t85 = ((x417^(x418|x419))*x420);

	if (t85 != -81752) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x421 = -5;
	static int8_t x422 = 1;
	int64_t x423 = -1LL;
	int32_t x424 = INT32_MIN;
	volatile int64_t t86 = 1114424191LL;

	t86 = ((x421^(x422|x423))*x424);

	if (t86 != -8589934592LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x425 = 4;
	int32_t x426 = -1;
	int32_t x427 = INT32_MIN;
	volatile uint32_t t87 = 1565452387U;

	t87 = ((x425^(x426|x427))*x428);

	if (t87 != 4033187246U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x429 = -173513;
	static volatile int8_t x430 = -1;
	int8_t x431 = -1;
	int8_t x432 = 1;

	t88 = ((x429^(x430|x431))*x432);

	if (t88 != 173512) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x433 = INT16_MAX;
	volatile uint32_t x434 = 108741210U;
	volatile uint32_t x435 = 137006U;
	static volatile uint32_t t89 = 3165023U;

	t89 = ((x433^(x434|x435))*x436);

	if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x437 = INT16_MIN;
	int64_t x439 = -34736898822164674LL;
	volatile uint32_t x440 = 0U;
	int64_t t90 = -863957296LL;

	t90 = ((x437^(x438|x439))*x440);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x441 = UINT32_MAX;
	uint16_t x442 = 131U;
	volatile int32_t x443 = INT32_MAX;
	int8_t x444 = 1;
	volatile uint32_t t91 = 1370215U;

	t91 = ((x441^(x442|x443))*x444);

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x445 = -1LL;
	int16_t x446 = INT16_MAX;
	int8_t x447 = 20;
	volatile int32_t x448 = -305966690;
	int64_t t92 = 809LL;

	t92 = ((x445^(x446|x447))*x448);

	if (t92 != 10025916497920LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x450 = 161409U;
	uint8_t x451 = 7U;
	static uint64_t x452 = 3061275LLU;
	volatile uint64_t t93 = 3163495091144354LLU;

	t93 = ((x449^(x450|x451))*x452);

	if (t93 != 18321924839885980183LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x453 = UINT8_MAX;
	volatile int8_t x455 = INT8_MIN;
	int8_t x456 = INT8_MIN;
	static volatile int32_t t94 = -383;

	t94 = ((x453^(x454|x455))*x456);

	if (t94 != 18944) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -1;
	int16_t x462 = INT16_MAX;
	static int16_t x463 = -1;
	static volatile int64_t x464 = -1LL;
	static int64_t t95 = -409676400678LL;

	t95 = ((x461^(x462|x463))*x464);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = -1LL;
	int8_t x470 = INT8_MIN;
	int32_t x471 = -1;
	static int16_t x472 = INT16_MAX;
	int64_t t96 = 81327LL;

	t96 = ((x469^(x470|x471))*x472);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x475 = -831002;
	volatile int16_t x476 = INT16_MAX;
	volatile int32_t t97 = 803935;

	t97 = ((x473^(x474|x475))*x476);

	if (t97 != -1572816) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = INT8_MIN;
	static int8_t x478 = INT8_MIN;
	uint64_t x479 = UINT64_MAX;

	t98 = ((x477^(x478|x479))*x480);

	if (t98 != 272730423169LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x501 = -1349;
	int64_t x502 = INT64_MIN;
	int32_t x503 = INT32_MIN;
	uint8_t x504 = 2U;
	int64_t t99 = 1LL;

	t99 = ((x501^(x502|x503))*x504);

	if (t99 != 4294964598LL) { NG(); } else { ; }
	
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

