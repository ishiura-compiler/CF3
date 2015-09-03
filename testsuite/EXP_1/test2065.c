#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = 17935U;
static uint16_t x14 = 4U;
volatile uint64_t t4 = 80LLU;
int16_t x25 = -76;
int16_t x26 = INT16_MIN;
volatile uint16_t x31 = 4U;
static uint8_t x32 = 69U;
int32_t t7 = -20707427;
int8_t x37 = INT8_MIN;
int16_t x39 = -4;
static volatile uint16_t x41 = 7U;
uint8_t x44 = 0U;
uint32_t x49 = UINT32_MAX;
int16_t x61 = INT16_MAX;
volatile int8_t x65 = -10;
static uint32_t x84 = UINT32_MAX;
int64_t x88 = INT64_MIN;
volatile int16_t x89 = -1;
uint16_t x90 = 14502U;
uint16_t x93 = 1U;
int8_t x94 = -12;
volatile int8_t x95 = 11;
uint64_t x101 = 9268611462228817LLU;
int64_t x104 = -1LL;
uint64_t t22 = 3326898849470834LLU;
static int8_t x114 = INT8_MIN;
uint64_t x115 = 45166732138LLU;
uint64_t x116 = UINT64_MAX;
volatile int8_t x119 = -1;
uint64_t x120 = 177863705LLU;
uint64_t t26 = 2LLU;
static uint32_t x134 = 1430208U;
static int32_t x135 = -26699;
volatile int16_t x153 = INT16_MIN;
uint8_t x157 = UINT8_MAX;
int64_t x160 = -7743386922LL;
uint32_t x163 = UINT32_MAX;
static uint16_t x167 = UINT16_MAX;
uint8_t x169 = 75U;
volatile uint64_t x173 = 828883LLU;
int64_t x176 = -1LL;
int8_t x182 = INT8_MAX;
volatile int64_t x192 = INT64_MAX;
uint8_t x196 = 86U;
static uint64_t t42 = 2628818LLU;
uint32_t x198 = 3795512U;
int16_t x200 = -1117;
static uint64_t t44 = 7323LLU;
int64_t x221 = INT64_MAX;
static int64_t t48 = -263704848616LL;
uint8_t x231 = UINT8_MAX;
int64_t x233 = INT64_MIN;
static int64_t x234 = -34795488499171LL;
uint64_t x235 = 7666075886610789LLU;
int8_t x241 = INT8_MIN;
volatile int64_t t53 = -6813962LL;
volatile int64_t x264 = INT64_MIN;
volatile uint64_t t57 = 18898LLU;
int32_t x265 = INT32_MIN;
uint64_t t59 = 354518828800048LLU;
volatile uint64_t x274 = UINT64_MAX;
int16_t x275 = INT16_MAX;
volatile int64_t x278 = INT64_MIN;
volatile uint64_t t61 = 87051559425066LLU;
volatile int32_t x294 = INT32_MIN;
volatile int16_t x303 = INT16_MIN;
volatile int64_t t64 = -8179974LL;
uint32_t t65 = 1187939U;
int32_t t67 = 28507;
uint8_t x326 = 40U;
static int32_t x328 = -376713;
uint16_t x329 = 5874U;
uint64_t x334 = 460525768876LLU;
int64_t x335 = -161054417254485LL;
static uint16_t x342 = 4U;
int16_t x343 = INT16_MIN;
int16_t x345 = -1;
uint64_t t74 = 1137LLU;
volatile int64_t x356 = INT64_MAX;
volatile int64_t t76 = -95380446LL;
int16_t x367 = 3115;
volatile int8_t x368 = INT8_MAX;
static volatile uint32_t t77 = 230740299U;
int32_t x376 = INT32_MIN;
uint32_t t79 = 250773419U;
uint16_t x379 = 3U;
int16_t x386 = INT16_MIN;
int16_t x388 = INT16_MAX;
volatile uint64_t t82 = 6LLU;
static int8_t x399 = 0;
volatile uint32_t t84 = 664960048U;
uint64_t x409 = 51747301777LLU;
static uint16_t x415 = UINT16_MAX;
volatile int32_t t87 = -14312912;
static int8_t x419 = 48;
uint64_t x420 = 858LLU;
int16_t x427 = INT16_MIN;
int8_t x430 = INT8_MIN;
uint8_t x435 = 0U;
volatile int64_t t93 = 80935573575459113LL;
static volatile uint32_t t94 = 337066U;
int64_t x465 = -121096LL;
int16_t x466 = INT16_MAX;
static int64_t x471 = -1LL;
volatile int64_t t98 = 61LL;
int32_t x474 = INT32_MIN;
static volatile int64_t x475 = 95703LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MAX;
	static int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 11428;

	t0 = (((x1^x2)*x3)&x4);

	if (t0 != 32641) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	static int64_t x6 = -7290468987LL;
	uint32_t x7 = 520910577U;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -88LL;

	t1 = (((x5^x6)*x7)&x8);

	if (t1 != 3797682406097864922LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 55U;
	uint32_t x10 = UINT32_MAX;
	int8_t x11 = 7;
	static volatile uint32_t t2 = 48215836U;

	t2 = (((x9^x10)*x11)&x12);

	if (t2 != 17928U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int16_t x15 = INT16_MAX;
	volatile uint8_t x16 = 6U;
	int32_t t3 = 5093;

	t3 = (((x13^x14)*x15)&x16);

	if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	uint16_t x18 = 354U;
	uint16_t x19 = 3477U;
	uint64_t x20 = 60377479LLU;

	t4 = (((x17^x18)*x19)&x20);

	if (t4 != 1132801LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 93862U;
	uint32_t x22 = 21451U;
	uint64_t x23 = 1870078LLU;
	static volatile uint64_t x24 = UINT64_MAX;
	volatile uint64_t t5 = 89793910459033763LLU;

	t5 = (((x21^x22)*x23)&x24);

	if (t5 != 151964408358LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = 405857U;
	int32_t x28 = 239;
	uint32_t t6 = 144073049U;

	t6 = (((x25^x26)*x27)&x28);

	if (t6 != 36U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int8_t x30 = 2;

	t7 = (((x29^x30)*x31)&x32);

	if (t7 != 68) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 1548071371421685686LLU;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MAX;
	volatile int32_t x36 = -3;
	volatile uint64_t t8 = 18473797623091LLU;

	t8 = (((x33^x34)*x35)&x36);

	if (t8 != 3113833219943471048LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = 22;
	int64_t x40 = -347061LL;
	volatile int64_t t9 = -1007124501LL;

	t9 = (((x37^x38)*x39)&x40);

	if (t9 != 8LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MAX;
	int16_t x43 = 1;
	int64_t t10 = 222LL;

	t10 = (((x41^x42)*x43)&x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -7;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = 1222;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = -13419379082951740LL;

	t11 = (((x45^x46)*x47)&x48);

	if (t11 != 9223372036854470308LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MIN;
	uint16_t x52 = 70U;
	uint32_t t12 = 998177U;

	t12 = (((x49^x50)*x51)&x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1791035768253232LL;
	uint32_t x54 = 342U;
	uint64_t x55 = 1559696389LLU;
	int8_t x56 = -1;
	uint64_t t13 = 944648875315LLU;

	t13 = (((x53^x54)*x55)&x56);

	if (t13 != 10668488083025732510LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 2U;
	int32_t x58 = -1;
	static volatile int8_t x59 = 4;
	int64_t x60 = INT64_MIN;
	int64_t t14 = INT64_MIN;

	t14 = (((x57^x58)*x59)&x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -1LL;
	static volatile int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	static int64_t t15 = -47518618441LL;

	t15 = (((x61^x62)*x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	uint64_t x67 = 26793LLU;
	int16_t x68 = 6082;
	static volatile uint64_t t16 = 11LLU;

	t16 = (((x65^x66)*x67)&x68);

	if (t16 != 322LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	uint64_t x70 = 11696LLU;
	int8_t x71 = 1;
	uint16_t x72 = UINT16_MAX;
	volatile uint64_t t17 = 1726888780303148LLU;

	t17 = (((x69^x70)*x71)&x72);

	if (t17 != 53808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	static int8_t x82 = -1;
	int64_t x83 = INT64_MAX;
	volatile int64_t t18 = -13132365490897361LL;

	t18 = (((x81^x82)*x83)&x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 7U;
	uint8_t x86 = 1U;
	int32_t x87 = 140736;
	volatile int64_t t19 = -59965263978506LL;

	t19 = (((x85^x86)*x87)&x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x91 = 2692U;
	volatile int16_t x92 = INT16_MIN;
	static int32_t t20 = -109;

	t20 = (((x89^x90)*x91)&x92);

	if (t20 != -39059456) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x96 = -1;
	int32_t t21 = 240;

	t21 = (((x93^x94)*x95)&x96);

	if (t21 != -121) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x102 = -1;
	int16_t x103 = INT16_MIN;

	t22 = (((x101^x102)*x103)&x104);

	if (t22 != 8565955214961082368LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MIN;
	uint64_t x106 = UINT64_MAX;
	volatile int16_t x107 = 1;
	volatile int16_t x108 = -4;
	volatile uint64_t t23 = 16796799372643LLU;

	t23 = (((x105^x106)*x107)&x108);

	if (t23 != 124LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	volatile int64_t x110 = 539LL;
	int16_t x111 = -1;
	int64_t x112 = -2195687793405986LL;
	volatile int64_t t24 = -21794LL;

	t24 = (((x109^x110)*x111)&x112);

	if (t24 != -2195687793425892LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x113 = 27U;
	uint64_t t25 = 1417037073274LLU;

	t25 = (((x113^x114)*x115)&x116);

	if (t25 != 18446739511869605678LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = -10554LL;

	t26 = (((x117^x118)*x119)&x120);

	if (t26 != 10264LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MAX;
	volatile int32_t x122 = -1;
	volatile int8_t x123 = -1;
	uint8_t x124 = 1U;
	volatile int32_t t27 = -182094;

	t27 = (((x121^x122)*x123)&x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	uint16_t x126 = UINT16_MAX;
	static volatile uint16_t x127 = 6926U;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t28 = INT32_MIN;

	t28 = (((x125^x126)*x127)&x128);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = -7;
	int8_t x131 = -22;
	int8_t x132 = INT8_MIN;
	int32_t t29 = 1;

	t29 = (((x129^x130)*x131)&x132);

	if (t29 != 2560) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	static uint32_t x136 = UINT32_MAX;
	volatile uint32_t t30 = 7U;

	t30 = (((x133^x134)*x135)&x136);

	if (t30 != 3825411723U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x137 = INT32_MAX;
	volatile int8_t x138 = 0;
	uint64_t x139 = 1228190LLU;
	int32_t x140 = 4;
	static volatile uint64_t t31 = 113190890LLU;

	t31 = (((x137^x138)*x139)&x140);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = INT64_MIN;
	volatile int32_t x142 = -1;
	int16_t x143 = -1;
	int16_t x144 = -6159;
	volatile int64_t t32 = 567871634780514988LL;

	t32 = (((x141^x142)*x143)&x144);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x154 = -1;
	uint64_t x155 = 944398081705LLU;
	static int8_t x156 = -3;
	volatile uint64_t t33 = 32184981813275LLU;

	t33 = (((x153^x154)*x155)&x156);

	if (t33 != 30945091943227733LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x158 = 89U;
	volatile int8_t x159 = -1;
	static volatile int64_t t34 = 41481346239969LL;

	t34 = (((x157^x158)*x159)&x160);

	if (t34 != -7743387054LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x161 = 44U;
	static uint32_t x162 = UINT32_MAX;
	static uint8_t x164 = UINT8_MAX;
	volatile uint32_t t35 = 64U;

	t35 = (((x161^x162)*x163)&x164);

	if (t35 != 45U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = INT8_MAX;
	uint64_t x166 = UINT64_MAX;
	static uint8_t x168 = UINT8_MAX;
	uint64_t t36 = 5565LLU;

	t36 = (((x165^x166)*x167)&x168);

	if (t36 != 128LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x170 = 5LLU;
	int64_t x171 = -148LL;
	int64_t x172 = INT64_MIN;
	volatile uint64_t t37 = 7932582LLU;

	t37 = (((x169^x170)*x171)&x172);

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x174 = INT8_MIN;
	volatile int32_t x175 = 2;
	volatile uint64_t t38 = 2087770LLU;

	t38 = (((x173^x174)*x175)&x176);

	if (t38 != 18446744073707893926LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MAX;
	int32_t x179 = -1362612;
	int64_t x180 = 1812883890LL;
	volatile int64_t t39 = -291799864026751845LL;

	t39 = (((x177^x178)*x179)&x180);

	if (t39 != 280752LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 25374915LLU;
	int32_t x183 = 313382;
	static int64_t x184 = -3529645LL;
	volatile uint64_t t40 = 51LLU;

	t40 = (((x181^x182)*x183)&x184);

	if (t40 != 7952036003904LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x189 = 31U;
	int32_t x190 = -1;
	static int8_t x191 = -1;
	int64_t t41 = 31370LL;

	t41 = (((x189^x190)*x191)&x192);

	if (t41 != 32LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 222239LLU;
	volatile int64_t x194 = INT64_MIN;
	int32_t x195 = -47186;

	t42 = (((x193^x194)*x195)&x196);

	if (t42 != 18LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = UINT64_MAX;
	volatile uint64_t x199 = 61868LLU;
	volatile uint64_t t43 = 105576905547430245LLU;

	t43 = (((x197^x198)*x199)&x200);

	if (t43 != 18446743838888753312LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x205 = UINT64_MAX;
	static volatile uint32_t x206 = 2846U;
	static uint64_t x207 = 14796995LLU;
	static int8_t x208 = INT8_MIN;

	t44 = (((x205^x206)*x207)&x208);

	if (t44 != 18446744031582506752LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MIN;
	static int32_t x210 = INT32_MIN;
	int32_t x211 = -1;
	int64_t x212 = INT64_MIN;
	int64_t t45 = INT64_MIN;

	t45 = (((x209^x210)*x211)&x212);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x213 = -1;
	uint64_t x214 = 5525190LLU;
	int16_t x215 = INT16_MAX;
	volatile uint64_t x216 = 29081790462LLU;
	volatile uint64_t t46 = 7260947LLU;

	t46 = (((x213^x214)*x215)&x216);

	if (t46 != 20407436998LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = -1;
	uint16_t x218 = 53U;
	static uint64_t x219 = UINT64_MAX;
	static volatile int32_t x220 = 397371607;
	volatile uint64_t t47 = 2290933LLU;

	t47 = (((x217^x218)*x219)&x220);

	if (t47 != 22LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x222 = 8U;
	int64_t x223 = -1LL;
	static volatile uint16_t x224 = 12613U;

	t48 = (((x221^x222)*x223)&x224);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = -7;
	uint16_t x227 = 3U;
	int32_t x228 = 3488;
	volatile int32_t t49 = -180054;

	t49 = (((x225^x226)*x227)&x228);

	if (t49 != 3328) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = -588;
	int32_t x230 = 7817;
	int16_t x232 = -1;
	volatile int32_t t50 = 1;

	t50 = (((x229^x230)*x231)&x232);

	if (t50 != -1877565) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x236 = INT8_MIN;
	static uint64_t t51 = 6245873185LLU;

	t51 = (((x233^x234)*x235)&x236);

	if (t51 != 3845128111738683904LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	static uint32_t x239 = 231U;
	uint16_t x240 = UINT16_MAX;
	static volatile uint32_t t52 = 7U;

	t52 = (((x237^x238)*x239)&x240);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x242 = 2583LL;
	volatile int16_t x243 = 91;
	volatile int64_t x244 = -1LL;

	t53 = (((x241^x242)*x243)&x244);

	if (t53 != -242515LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = 16048035LLU;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -1;
	int64_t x248 = -1LL;
	uint64_t t54 = 44168LLU;

	t54 = (((x245^x246)*x247)&x248);

	if (t54 != 16031837LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = 1591U;
	uint16_t x250 = 7U;
	static int8_t x251 = INT8_MIN;
	static int32_t x252 = INT32_MIN;
	uint32_t t55 = 100710U;

	t55 = (((x249^x250)*x251)&x252);

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = -460363;
	uint8_t x254 = 1U;
	uint64_t x255 = 11622126LLU;
	uint8_t x256 = UINT8_MAX;
	uint64_t t56 = 118994018885LLU;

	t56 = (((x253^x254)*x255)&x256);

	if (t56 != 88LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x261 = UINT64_MAX;
	volatile uint16_t x262 = 28U;
	static int8_t x263 = -23;

	t57 = (((x261^x262)*x263)&x264);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x266 = 5194743663LLU;
	uint64_t x267 = 4934LLU;
	volatile int16_t x268 = INT16_MAX;
	static uint64_t t58 = 7931975LLU;

	t58 = (((x265^x266)*x267)&x268);

	if (t58 != 5466LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x269 = INT8_MIN;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x271 = -17192760;
	static int8_t x272 = -9;

	t59 = (((x269^x270)*x271)&x272);

	if (t59 != 18446744071526071088LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = UINT16_MAX;
	int32_t x276 = INT32_MIN;
	volatile uint64_t t60 = 790426225LLU;

	t60 = (((x273^x274)*x275)&x276);

	if (t60 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x277 = UINT64_MAX;
	volatile uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;

	t61 = (((x277^x278)*x279)&x280);

	if (t61 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MAX;
	int32_t x292 = -1;
	int64_t t62 = -25932942441111881LL;

	t62 = (((x289^x290)*x291)&x292);

	if (t62 != -2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = -1LL;
	int16_t x295 = INT16_MIN;
	volatile int8_t x296 = -1;
	static int64_t t63 = -519LL;

	t63 = (((x293^x294)*x295)&x296);

	if (t63 != -70368744144896LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MAX;
	int64_t x304 = INT64_MIN;

	t64 = (((x301^x302)*x303)&x304);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x305 = 181143920U;
	volatile int32_t x306 = INT32_MIN;
	uint16_t x307 = UINT16_MAX;
	static int16_t x308 = -1;

	t65 = (((x305^x306)*x307)&x308);

	if (t65 != 2124674704U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x313 = -238919817226LL;
	int64_t x314 = -1LL;
	int16_t x315 = -1023;
	uint16_t x316 = 852U;
	int64_t t66 = -121LL;

	t66 = (((x313^x314)*x315)&x316);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	static int16_t x319 = INT16_MAX;
	int8_t x320 = INT8_MIN;

	t67 = (((x317^x318)*x319)&x320);

	if (t67 != -8388352) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	volatile int64_t x327 = -47307LL;
	static volatile int64_t t68 = 136543104888760270LL;

	t68 = (((x325^x326)*x327)&x328);

	if (t68 != 3801152LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x330 = INT16_MAX;
	int8_t x331 = -1;
	int64_t x332 = -619794LL;
	static volatile int64_t t69 = -1177696036384LL;

	t69 = (((x329^x330)*x331)&x332);

	if (t69 != -621854LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x333 = -1;
	static uint16_t x336 = UINT16_MAX;
	volatile uint64_t t70 = 7254LLU;

	t70 = (((x333^x334)*x335)&x336);

	if (t70 != 8561LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = -34;
	int32_t x338 = -143027;
	static uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t71 = 3442;

	t71 = (((x337^x338)*x339)&x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x341 = 137803523267960LL;
	uint32_t x344 = UINT32_MAX;
	int64_t t72 = -31950536LL;

	t72 = (((x341^x342)*x343)&x344);

	if (t72 != 826408960LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x346 = 13U;
	static int16_t x347 = -3;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t73 = 697U;

	t73 = (((x345^x346)*x347)&x348);

	if (t73 != 42U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 36087336LLU;
	uint64_t x351 = 1433682778059149LLU;
	int32_t x352 = INT32_MIN;

	t74 = (((x349^x350)*x351)&x352);

	if (t74 != 3898374514865602560LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = INT8_MIN;
	static volatile int32_t x354 = -1;
	uint32_t x355 = UINT32_MAX;
	volatile int64_t t75 = -36572020874788LL;

	t75 = (((x353^x354)*x355)&x356);

	if (t75 != 4294967169LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x358 = 375541748LL;
	volatile int32_t x359 = 32661851;
	int8_t x360 = INT8_MIN;

	t76 = (((x357^x358)*x359)&x360);

	if (t76 != 12266692066328192LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x365 = 26U;
	uint32_t x366 = UINT32_MAX;

	t77 = (((x365^x366)*x367)&x368);

	if (t77 != 119U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x369 = 9473U;
	volatile int16_t x370 = INT16_MIN;
	static int32_t x371 = -1;
	volatile int8_t x372 = INT8_MAX;
	volatile int32_t t78 = 1;

	t78 = (((x369^x370)*x371)&x372);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MAX;
	uint32_t x375 = 5U;

	t79 = (((x373^x374)*x375)&x376);

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x377 = -1;
	static int16_t x378 = -1588;
	uint32_t x380 = 40463154U;
	volatile uint32_t t80 = 11634U;

	t80 = (((x377^x378)*x379)&x380);

	if (t80 != 528U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = INT8_MIN;
	uint64_t x387 = 24238276LLU;
	volatile uint64_t t81 = 93LLU;

	t81 = (((x385^x386)*x387)&x388);

	if (t81 != 7680LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x389 = 4LLU;
	volatile int32_t x390 = -1;
	int16_t x391 = INT16_MAX;
	static volatile uint16_t x392 = UINT16_MAX;

	t82 = (((x389^x390)*x391)&x392);

	if (t82 != 32773LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x393 = 319818539453520LL;
	uint64_t x394 = UINT64_MAX;
	static int16_t x395 = -1;
	int32_t x396 = -1;
	static uint64_t t83 = 611937368264671LLU;

	t83 = (((x393^x394)*x395)&x396);

	if (t83 != 319818539453521LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = 296059U;
	int8_t x400 = -32;

	t84 = (((x397^x398)*x399)&x400);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x405 = 102985535;
	volatile uint8_t x406 = 6U;
	static volatile uint32_t x407 = UINT32_MAX;
	uint64_t x408 = UINT64_MAX;
	uint64_t t85 = 119238041078089LLU;

	t85 = (((x405^x406)*x407)&x408);

	if (t85 != 4191981767LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x410 = UINT64_MAX;
	uint64_t x411 = 0LLU;
	int32_t x412 = INT32_MIN;
	volatile uint64_t t86 = 264886503LLU;

	t86 = (((x409^x410)*x411)&x412);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x413 = -15;
	int32_t x414 = 45;
	uint16_t x416 = 225U;

	t87 = (((x413^x414)*x415)&x416);

	if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x417 = -6;
	int32_t x418 = 95864;
	volatile uint64_t t88 = 2261430616LLU;

	t88 = (((x417^x418)*x419)&x420);

	if (t88 != 64LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = -1LL;
	uint16_t x426 = 22833U;
	static int16_t x428 = 1;
	int64_t t89 = 67106125LL;

	t89 = (((x425^x426)*x427)&x428);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = INT8_MIN;
	int32_t x431 = INT32_MAX;
	static int32_t x432 = INT32_MAX;
	volatile int32_t t90 = 3;

	t90 = (((x429^x430)*x431)&x432);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x433 = UINT8_MAX;
	static int64_t x434 = INT64_MIN;
	volatile uint16_t x436 = UINT16_MAX;
	int64_t t91 = 2379LL;

	t91 = (((x433^x434)*x435)&x436);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x441 = -1;
	static int16_t x442 = INT16_MIN;
	volatile int8_t x443 = -1;
	int32_t x444 = 1136;
	int32_t t92 = 951591312;

	t92 = (((x441^x442)*x443)&x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x449 = -50;
	volatile uint8_t x450 = UINT8_MAX;
	int16_t x451 = INT16_MAX;
	int64_t x452 = -67LL;

	t93 = (((x449^x450)*x451)&x452);

	if (t93 != -6782835LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = -90;
	int16_t x454 = -363;
	int32_t x455 = -1078;
	uint32_t x456 = 481355U;

	t94 = (((x453^x454)*x455)&x456);

	if (t94 != 151562U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x457 = 0U;
	int64_t x458 = -46832LL;
	volatile int32_t x459 = -21553;
	static int64_t x460 = INT64_MIN;
	volatile int64_t t95 = 55LL;

	t95 = (((x457^x458)*x459)&x460);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x461 = UINT16_MAX;
	static int32_t x462 = -8626223;
	volatile uint64_t x463 = 63549LLU;
	int16_t x464 = 404;
	static uint64_t t96 = 56103562644640749LLU;

	t96 = (((x461^x462)*x463)&x464);

	if (t96 != 148LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x467 = UINT16_MAX;
	int32_t x468 = INT32_MIN;
	volatile int64_t t97 = -89LL;

	t97 = (((x465^x466)*x467)&x468);

	if (t97 != -8589934592LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x469 = INT32_MIN;
	int8_t x470 = -1;
	volatile int16_t x472 = INT16_MIN;

	t98 = (((x469^x470)*x471)&x472);

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x473 = 2258U;
	int16_t x476 = INT16_MIN;
	int64_t t99 = 2134LL;

	t99 = (((x473^x474)*x475)&x476);

	if (t99 != -205520411492352LL) { NG(); } else { ; }
	
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

