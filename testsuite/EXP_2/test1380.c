#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 386;
volatile uint32_t t2 = 2U;
uint64_t x21 = 7531LLU;
static int64_t x24 = -1659924LL;
uint64_t x30 = 70785519093627LLU;
int64_t x44 = -1LL;
int32_t x46 = -1;
uint8_t x49 = 46U;
uint32_t t11 = 188144U;
static uint16_t x55 = 1U;
uint8_t x58 = UINT8_MAX;
int16_t x61 = INT16_MIN;
int16_t x64 = INT16_MIN;
volatile int16_t x70 = INT16_MAX;
int16_t x71 = -1;
int16_t x73 = INT16_MIN;
volatile int8_t x77 = 63;
int32_t t17 = -297;
int64_t x87 = 29692LL;
int64_t x88 = -1LL;
int64_t x91 = 311891687201025358LL;
int64_t x97 = INT64_MIN;
uint32_t t23 = 3797U;
uint16_t x106 = UINT16_MAX;
int8_t x107 = INT8_MIN;
int16_t x124 = INT16_MIN;
int8_t x126 = -1;
int64_t x133 = INT64_MAX;
uint8_t x135 = 66U;
volatile int64_t t27 = 21770316LL;
uint64_t x137 = 4243612419204190LLU;
uint16_t x139 = 6U;
int64_t x143 = INT64_MIN;
int64_t x144 = -1LL;
volatile int32_t x145 = INT32_MAX;
int16_t x151 = INT16_MAX;
uint16_t x160 = 16U;
static volatile int32_t t36 = -102;
volatile uint64_t x174 = UINT64_MAX;
uint8_t x180 = 24U;
int8_t x187 = -1;
int8_t x190 = INT8_MAX;
volatile uint8_t x198 = 1U;
static int32_t x213 = -1089;
uint64_t x215 = 11427865LLU;
int32_t x217 = -1;
int64_t x227 = INT64_MIN;
volatile uint32_t x233 = 1U;
static uint32_t x237 = UINT32_MAX;
static int32_t x241 = -3127;
uint32_t x246 = 1U;
int64_t x251 = 14530246LL;
uint8_t x256 = UINT8_MAX;
int32_t t54 = 85300;
volatile int32_t t55 = -4;
int32_t x268 = 294356030;
volatile uint32_t t57 = 14U;
volatile int32_t x275 = -1;
int64_t x278 = -16850306804371202LL;
static int8_t x279 = -6;
volatile int32_t t60 = -7178;
volatile int64_t x293 = 2039540879506153554LL;
static volatile uint32_t x294 = 43U;
uint32_t x302 = UINT32_MAX;
int32_t x307 = INT32_MAX;
static volatile uint8_t x308 = UINT8_MAX;
volatile int32_t t65 = 7872;
uint64_t x311 = UINT64_MAX;
int32_t t66 = -21497758;
int32_t x316 = INT32_MIN;
volatile int64_t t67 = 1549985830883LL;
int32_t x317 = INT32_MAX;
int16_t x325 = INT16_MIN;
int64_t x328 = -1LL;
uint16_t x330 = UINT16_MAX;
uint32_t x331 = 7307U;
uint32_t x332 = 396U;
static volatile uint8_t x333 = 122U;
int64_t x335 = INT64_MAX;
uint8_t x336 = UINT8_MAX;
volatile int8_t x342 = -1;
int8_t x345 = INT8_MIN;
static uint64_t x354 = 490787484LLU;
static int8_t x356 = INT8_MIN;
volatile uint32_t t77 = 319370U;
static int32_t t78 = 396;
volatile int32_t x364 = -1;
volatile uint8_t x368 = 54U;
volatile int32_t t80 = -2;
volatile int8_t x370 = INT8_MIN;
static volatile int32_t t81 = 18930;
static int16_t x392 = INT16_MIN;
int8_t x395 = INT8_MIN;
int8_t x396 = 9;
volatile int32_t x412 = INT32_MIN;
uint8_t x416 = UINT8_MAX;
static uint8_t x431 = 3U;
uint8_t x452 = 47U;
int64_t t97 = -3696725340978LL;
uint16_t x460 = 4565U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int16_t x2 = INT16_MIN;
	int32_t x3 = -1;
	uint8_t x4 = 29U;
	static volatile int32_t t0 = 15;

	t0 = ((x1*(x2<x3))-x4);

	if (t0 != 65506) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -5;
	int8_t x6 = -1;
	volatile int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MAX;

	t1 = ((x5*(x6<x7))-x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 7287056U;
	uint16_t x10 = 524U;
	uint16_t x11 = UINT16_MAX;
	volatile int16_t x12 = 12498;

	t2 = ((x9*(x10<x11))-x12);

	if (t2 != 7274558U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	volatile int64_t x14 = -1LL;
	int64_t x15 = -23993357181LL;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = 20079U;

	t3 = ((x13*(x14<x15))-x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 36020283217530335LLU;
	uint16_t x18 = 61U;
	volatile int8_t x19 = INT8_MIN;
	int16_t x20 = -9534;
	volatile uint64_t t4 = 3718LLU;

	t4 = ((x17*(x18<x19))-x20);

	if (t4 != 9534LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = -180;
	volatile uint64_t t5 = 3863396772LLU;

	t5 = ((x21*(x22<x23))-x24);

	if (t5 != 1659924LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 15;
	static uint32_t x26 = 1401958U;
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = -1;
	static volatile int32_t t6 = -18417;

	t6 = ((x25*(x26<x27))-x28);

	if (t6 != 16) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 67LLU;
	static volatile int16_t x31 = -53;
	int32_t x32 = INT32_MIN;
	static uint64_t t7 = 679772LLU;

	t7 = ((x29*(x30<x31))-x32);

	if (t7 != 2147483715LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	uint8_t x34 = 12U;
	uint8_t x35 = 15U;
	static uint32_t x36 = 92687U;
	volatile uint32_t t8 = 2443U;

	t8 = ((x33*(x34<x35))-x36);

	if (t8 != 2147390960U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = 7355U;
	static int16_t x42 = INT16_MAX;
	int64_t x43 = INT64_MAX;
	static int64_t t9 = 876148574908531529LL;

	t9 = ((x41*(x42<x43))-x44);

	if (t9 != 7356LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 1U;
	int64_t x47 = INT64_MIN;
	volatile int16_t x48 = INT16_MAX;
	volatile int32_t t10 = -207736531;

	t10 = ((x45*(x46<x47))-x48);

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x50 = UINT64_MAX;
	int32_t x51 = -15686;
	uint32_t x52 = 85U;

	t11 = ((x49*(x50<x51))-x52);

	if (t11 != 4294967211U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MAX;
	static uint8_t x56 = 118U;
	volatile int64_t t12 = 555LL;

	t12 = ((x53*(x54<x55))-x56);

	if (t12 != -118LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -116;
	int64_t x59 = 5791LL;
	int16_t x60 = 16140;
	volatile int32_t t13 = 1780086;

	t13 = ((x57*(x58<x59))-x60);

	if (t13 != -16256) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = 1;
	volatile int16_t x63 = -384;
	volatile int32_t t14 = 10;

	t14 = ((x61*(x62<x63))-x64);

	if (t14 != 32768) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	static int8_t x72 = -1;
	int32_t t15 = 601459482;

	t15 = ((x69*(x70<x71))-x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = 1218U;
	int32_t t16 = 45;

	t16 = ((x73*(x74<x75))-x76);

	if (t16 != -1218) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x78 = 7910U;
	uint32_t x79 = 4804480U;
	int32_t x80 = -1;

	t17 = ((x77*(x78<x79))-x80);

	if (t17 != 64) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -24087755902164737LL;
	static int32_t x82 = INT32_MAX;
	volatile int16_t x83 = -1;
	int32_t x84 = 821092169;
	volatile int64_t t18 = -1LL;

	t18 = ((x81*(x82<x83))-x84);

	if (t18 != -821092169LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MAX;
	volatile int64_t t19 = 678LL;

	t19 = ((x85*(x86<x87))-x88);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = -1;
	int8_t x92 = INT8_MIN;
	int32_t t20 = -642387928;

	t20 = ((x89*(x90<x91))-x92);

	if (t20 != 383) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 3;
	static volatile uint8_t x94 = UINT8_MAX;
	uint8_t x95 = 0U;
	int16_t x96 = INT16_MAX;
	int32_t t21 = -6;

	t21 = ((x93*(x94<x95))-x96);

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x98 = 730831924LL;
	int8_t x99 = INT8_MAX;
	volatile int64_t x100 = INT64_MAX;
	int64_t t22 = 498547475LL;

	t22 = ((x97*(x98<x99))-x100);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	uint16_t x103 = UINT16_MAX;
	volatile uint32_t x104 = 1698003031U;

	t23 = ((x101*(x102<x103))-x104);

	if (t23 != 2596964265U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 82U;
	volatile uint8_t x108 = 25U;
	uint32_t t24 = 1U;

	t24 = ((x105*(x106<x107))-x108);

	if (t24 != 4294967271U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x121 = 47031854277460496LLU;
	static int32_t x122 = INT32_MIN;
	int32_t x123 = -61;
	volatile uint64_t t25 = 1137541375233841880LLU;

	t25 = ((x121*(x122<x123))-x124);

	if (t25 != 47031854277493264LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = UINT8_MAX;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MAX;
	volatile int32_t t26 = 1547355;

	t26 = ((x125*(x126<x127))-x128);

	if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x134 = -33;
	int8_t x136 = INT8_MAX;

	t27 = ((x133*(x134<x135))-x136);

	if (t27 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x138 = INT8_MIN;
	uint32_t x140 = UINT32_MAX;
	uint64_t t28 = 6894930881LLU;

	t28 = ((x137*(x138<x139))-x140);

	if (t28 != 4243608124236895LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = 2851630263603722LL;
	volatile int64_t t29 = 0LL;

	t29 = ((x141*(x142<x143))-x144);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x146 = UINT64_MAX;
	volatile uint64_t x147 = 3806669599783LLU;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t30 = 1;

	t30 = ((x145*(x146<x147))-x148);

	if (t30 != -65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x149 = INT64_MIN;
	static int16_t x150 = 1;
	int8_t x152 = -1;
	static int64_t t31 = -8148701085648LL;

	t31 = ((x149*(x150<x151))-x152);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = UINT8_MAX;
	int64_t x154 = INT64_MIN;
	uint16_t x155 = 3951U;
	uint8_t x156 = 4U;
	volatile int32_t t32 = -15914;

	t32 = ((x153*(x154<x155))-x156);

	if (t32 != 251) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x157 = 10;
	int32_t x158 = 12810;
	int16_t x159 = -271;
	int32_t t33 = -69315;

	t33 = ((x157*(x158<x159))-x160);

	if (t33 != -16) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x161 = INT32_MIN;
	int64_t x162 = 43LL;
	int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t34 = -636844973;

	t34 = ((x161*(x162<x163))-x164);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = 89113245639LLU;
	int32_t x166 = 616677162;
	uint8_t x167 = 0U;
	int32_t x168 = 616283;
	volatile uint64_t t35 = 29485827635LLU;

	t35 = ((x165*(x166<x167))-x168);

	if (t35 != 18446744073708935333LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x169 = -819;
	volatile uint64_t x170 = 23LLU;
	int8_t x171 = -1;
	volatile int16_t x172 = -1;

	t36 = ((x169*(x170<x171))-x172);

	if (t36 != -818) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = 30;
	volatile int16_t x175 = 38;
	int64_t x176 = INT64_MAX;
	volatile int64_t t37 = -71LL;

	t37 = ((x173*(x174<x175))-x176);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x178 = 432567966341248838LLU;
	uint32_t x179 = 6340862U;
	int32_t t38 = 1793;

	t38 = ((x177*(x178<x179))-x180);

	if (t38 != -24) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x181 = INT64_MAX;
	uint64_t x182 = 28217186245LLU;
	uint32_t x183 = 32U;
	volatile int32_t x184 = -1;
	volatile int64_t t39 = -5276LL;

	t39 = ((x181*(x182<x183))-x184);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = INT32_MAX;
	uint64_t x186 = 16829804104510LLU;
	uint16_t x188 = 3U;
	int32_t t40 = -4038;

	t40 = ((x185*(x186<x187))-x188);

	if (t40 != 2147483644) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int32_t x191 = -1;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t41 = 24040LLU;

	t41 = ((x189*(x190<x191))-x192);

	if (t41 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MAX;
	static volatile int32_t x196 = -1;
	volatile int32_t t42 = 5030679;

	t42 = ((x193*(x194<x195))-x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x197 = -648;
	volatile int16_t x199 = -1;
	static volatile int16_t x200 = INT16_MIN;
	volatile int32_t t43 = 55876;

	t43 = ((x197*(x198<x199))-x200);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = INT64_MIN;
	int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 19245U;
	static int64_t t44 = -4122595611LL;

	t44 = ((x201*(x202<x203))-x204);

	if (t44 != -19245LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = -192;
	int64_t x206 = INT64_MIN;
	int64_t x207 = -1923586883840379357LL;
	int32_t x208 = 136;
	volatile int32_t t45 = -34767186;

	t45 = ((x205*(x206<x207))-x208);

	if (t45 != -328) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x214 = UINT32_MAX;
	volatile uint8_t x216 = UINT8_MAX;
	volatile int32_t t46 = 283619875;

	t46 = ((x213*(x214<x215))-x216);

	if (t46 != -255) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x218 = INT64_MIN;
	int8_t x219 = 24;
	uint16_t x220 = UINT16_MAX;
	static volatile int32_t t47 = 426675244;

	t47 = ((x217*(x218<x219))-x220);

	if (t47 != -65536) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MAX;
	volatile int8_t x228 = INT8_MAX;
	static int64_t t48 = -26822721934767LL;

	t48 = ((x225*(x226<x227))-x228);

	if (t48 != -127LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MAX;
	uint8_t x236 = 1U;
	volatile uint32_t t49 = 54473432U;

	t49 = ((x233*(x234<x235))-x236);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x238 = 472354LL;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = -1;
	static uint32_t t50 = 1057311609U;

	t50 = ((x237*(x238<x239))-x240);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x242 = -56503633810502974LL;
	int32_t x243 = INT32_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	uint64_t t51 = 387386LLU;

	t51 = ((x241*(x242<x243))-x244);

	if (t51 != 18446744073709548490LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = 19350782LLU;
	static volatile int64_t x247 = 0LL;
	volatile int8_t x248 = INT8_MAX;
	uint64_t t52 = 1LLU;

	t52 = ((x245*(x246<x247))-x248);

	if (t52 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MAX;
	volatile int32_t x250 = INT32_MIN;
	static int8_t x252 = INT8_MIN;
	int32_t t53 = -4788762;

	t53 = ((x249*(x250<x251))-x252);

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = -1;
	static int16_t x254 = INT16_MIN;
	int16_t x255 = 1;

	t54 = ((x253*(x254<x255))-x256);

	if (t54 != -256) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x257 = -14;
	volatile int16_t x258 = 5;
	int8_t x259 = INT8_MAX;
	int32_t x260 = -1;

	t55 = ((x257*(x258<x259))-x260);

	if (t55 != -13) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x261 = INT16_MIN;
	static uint64_t x262 = 843397435423LLU;
	static volatile int64_t x263 = -18168531664922329LL;
	static uint8_t x264 = UINT8_MAX;
	volatile int32_t t56 = -17241;

	t56 = ((x261*(x262<x263))-x264);

	if (t56 != -33023) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = 3U;
	volatile int8_t x266 = -1;
	uint8_t x267 = 40U;

	t57 = ((x265*(x266<x267))-x268);

	if (t57 != 4000611269U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = INT16_MAX;
	static int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	uint8_t x272 = 10U;
	int32_t t58 = -38025;

	t58 = ((x269*(x270<x271))-x272);

	if (t58 != 32757) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x273 = INT64_MIN;
	uint8_t x274 = UINT8_MAX;
	static uint32_t x276 = UINT32_MAX;
	int64_t t59 = 6200201404439LL;

	t59 = ((x273*(x274<x275))-x276);

	if (t59 != -4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x277 = 0;
	volatile uint16_t x280 = UINT16_MAX;

	t60 = ((x277*(x278<x279))-x280);

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x285 = INT8_MIN;
	static volatile int32_t x286 = 103062476;
	volatile int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t61 = 213;

	t61 = ((x285*(x286<x287))-x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = -1;
	int16_t x290 = 2586;
	uint8_t x291 = UINT8_MAX;
	static int32_t x292 = -677527;
	volatile int32_t t62 = 5559;

	t62 = ((x289*(x290<x291))-x292);

	if (t62 != 677527) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x295 = INT64_MIN;
	volatile int32_t x296 = -1;
	volatile int64_t t63 = -3961LL;

	t63 = ((x293*(x294<x295))-x296);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = -1;
	volatile uint32_t x303 = UINT32_MAX;
	int64_t x304 = -43497528732611LL;
	static int64_t t64 = 5979611847489LL;

	t64 = ((x301*(x302<x303))-x304);

	if (t64 != 43497528732611LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = -16;
	int32_t x306 = -436189;

	t65 = ((x305*(x306<x307))-x308);

	if (t65 != -271) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x309 = -1;
	int8_t x310 = INT8_MAX;
	static int16_t x312 = INT16_MAX;

	t66 = ((x309*(x310<x311))-x312);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MIN;

	t67 = ((x313*(x314<x315))-x316);

	if (t67 != 2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x318 = 1U;
	int32_t x319 = -1;
	uint8_t x320 = 2U;
	int32_t t68 = -5619;

	t68 = ((x317*(x318<x319))-x320);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x321 = 821U;
	int32_t x322 = -1;
	int64_t x323 = -1007074987942067136LL;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t69 = -1;

	t69 = ((x321*(x322<x323))-x324);

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x326 = INT64_MAX;
	static uint32_t x327 = UINT32_MAX;
	static volatile int64_t t70 = 175938229209LL;

	t70 = ((x325*(x326<x327))-x328);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x329 = -1LL;
	int64_t t71 = 1192LL;

	t71 = ((x329*(x330<x331))-x332);

	if (t71 != -396LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x334 = -1;
	static volatile int32_t t72 = -30263;

	t72 = ((x333*(x334<x335))-x336);

	if (t72 != -133) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	volatile uint16_t x338 = 3U;
	static uint16_t x339 = 28187U;
	uint64_t x340 = UINT64_MAX;
	static uint64_t t73 = 155242LLU;

	t73 = ((x337*(x338<x339))-x340);

	if (t73 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = -1;
	volatile int16_t x343 = INT16_MAX;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t74 = -120577599;

	t74 = ((x341*(x342<x343))-x344);

	if (t74 != -65536) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 2U;
	int64_t x348 = -1LL;
	static int64_t t75 = -28140679LL;

	t75 = ((x345*(x346<x347))-x348);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = 420;
	int8_t x350 = 14;
	static uint64_t x351 = 30064882942LLU;
	int16_t x352 = -1;
	static int32_t t76 = -2290;

	t76 = ((x349*(x350<x351))-x352);

	if (t76 != 421) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x353 = 61U;
	int32_t x355 = INT32_MAX;

	t77 = ((x353*(x354<x355))-x356);

	if (t77 != 189U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = INT8_MIN;
	volatile int16_t x358 = 8;
	volatile int8_t x359 = INT8_MAX;
	volatile int8_t x360 = -1;

	t78 = ((x357*(x358<x359))-x360);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x361 = 142LLU;
	int8_t x362 = INT8_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	volatile uint64_t t79 = 2101035669418LLU;

	t79 = ((x361*(x362<x363))-x364);

	if (t79 != 143LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x365 = 176;
	int64_t x366 = INT64_MIN;
	int8_t x367 = -1;

	t80 = ((x365*(x366<x367))-x368);

	if (t80 != 122) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x369 = 8496U;
	uint32_t x371 = UINT32_MAX;
	static int16_t x372 = INT16_MIN;

	t81 = ((x369*(x370<x371))-x372);

	if (t81 != 41264) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x373 = 60U;
	int16_t x374 = INT16_MIN;
	int64_t x375 = -20939128320568LL;
	volatile uint64_t x376 = 55829LLU;
	uint64_t t82 = 522LLU;

	t82 = ((x373*(x374<x375))-x376);

	if (t82 != 18446744073709495787LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	static uint32_t x379 = 97163U;
	int16_t x380 = 1724;
	static int32_t t83 = 523117;

	t83 = ((x377*(x378<x379))-x380);

	if (t83 != -1724) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x389 = INT32_MAX;
	volatile int32_t x390 = INT32_MAX;
	int16_t x391 = INT16_MIN;
	int32_t t84 = 28746;

	t84 = ((x389*(x390<x391))-x392);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x393 = -14;
	int8_t x394 = INT8_MAX;
	volatile int32_t t85 = 39204633;

	t85 = ((x393*(x394<x395))-x396);

	if (t85 != -9) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x401 = 14239U;
	uint32_t x402 = 7462U;
	volatile int32_t x403 = 518006452;
	int8_t x404 = 7;
	uint32_t t86 = 2900006U;

	t86 = ((x401*(x402<x403))-x404);

	if (t86 != 14232U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x405 = INT64_MIN;
	uint32_t x406 = 37395U;
	int64_t x407 = INT64_MAX;
	int32_t x408 = -126714742;
	int64_t t87 = 1LL;

	t87 = ((x405*(x406<x407))-x408);

	if (t87 != -9223372036728061066LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = UINT32_MAX;
	static uint16_t x410 = 466U;
	int16_t x411 = 12628;
	volatile uint32_t t88 = 125180553U;

	t88 = ((x409*(x410<x411))-x412);

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int32_t x414 = INT32_MAX;
	static int64_t x415 = -1LL;
	volatile uint64_t t89 = 6762386LLU;

	t89 = ((x413*(x414<x415))-x416);

	if (t89 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x421 = -1;
	uint64_t x422 = 83430762LLU;
	int32_t x423 = INT32_MIN;
	static volatile int16_t x424 = INT16_MAX;
	static int32_t t90 = 638677987;

	t90 = ((x421*(x422<x423))-x424);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x425 = INT8_MIN;
	volatile int64_t x426 = -14967031978LL;
	volatile uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t91 = 58;

	t91 = ((x425*(x426<x427))-x428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x429 = INT64_MIN;
	int16_t x430 = INT16_MIN;
	int64_t x432 = -1LL;
	int64_t t92 = 183216722707027975LL;

	t92 = ((x429*(x430<x431))-x432);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x433 = UINT8_MAX;
	int64_t x434 = -1LL;
	uint32_t x435 = UINT32_MAX;
	uint8_t x436 = UINT8_MAX;
	int32_t t93 = -21;

	t93 = ((x433*(x434<x435))-x436);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = 1;
	volatile int16_t x438 = INT16_MIN;
	static volatile int16_t x439 = INT16_MIN;
	static int16_t x440 = INT16_MAX;
	int32_t t94 = -8074893;

	t94 = ((x437*(x438<x439))-x440);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x445 = -31662011;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = INT32_MAX;
	int8_t x448 = INT8_MIN;
	static int32_t t95 = 80339;

	t95 = ((x445*(x446<x447))-x448);

	if (t95 != -31661883) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = -1;
	uint32_t x450 = 1368092827U;
	int64_t x451 = INT64_MAX;
	int32_t t96 = -3;

	t96 = ((x449*(x450<x451))-x452);

	if (t96 != -48) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = INT64_MAX;
	int64_t x454 = 99427565386291LL;
	volatile int8_t x455 = 2;
	int8_t x456 = 1;

	t97 = ((x453*(x454<x455))-x456);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = -1;
	volatile uint8_t x458 = 31U;
	static uint8_t x459 = 40U;
	volatile int32_t t98 = 11141;

	t98 = ((x457*(x458<x459))-x460);

	if (t98 != -4566) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x461 = UINT64_MAX;
	uint16_t x462 = 60U;
	volatile int8_t x463 = INT8_MIN;
	int64_t x464 = -1LL;
	static volatile uint64_t t99 = 722LLU;

	t99 = ((x461*(x462<x463))-x464);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

