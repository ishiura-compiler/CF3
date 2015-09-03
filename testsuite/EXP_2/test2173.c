#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
static uint32_t x6 = 1159176U;
int64_t x8 = -2384500LL;
int32_t t3 = 20;
static int64_t x25 = -27416LL;
uint32_t x26 = 82256775U;
int32_t x27 = -339799661;
int16_t x30 = -7190;
static volatile int8_t x35 = INT8_MIN;
int32_t x38 = INT32_MAX;
int16_t x40 = INT16_MIN;
int16_t x43 = INT16_MAX;
int8_t x51 = INT8_MIN;
int16_t x61 = -1;
uint16_t x70 = 2238U;
int8_t x76 = INT8_MIN;
static int64_t t15 = 47704518279295861LL;
uint32_t x77 = UINT32_MAX;
uint8_t x80 = 46U;
uint64_t t17 = 193768782901265LLU;
static volatile uint32_t x88 = 3329U;
int32_t x102 = -7;
volatile uint64_t t22 = 12773004438LLU;
static volatile int8_t x105 = INT8_MIN;
int32_t x112 = INT32_MIN;
uint64_t x113 = UINT64_MAX;
static int64_t x114 = 21593856488352458LL;
int32_t x115 = -1;
int16_t x119 = INT16_MAX;
int32_t x124 = INT32_MIN;
int32_t x131 = -393;
uint64_t x140 = 28294519947783127LLU;
int64_t x141 = INT64_MIN;
int32_t x143 = INT32_MIN;
volatile uint32_t x144 = 567058U;
volatile int8_t x151 = -1;
volatile uint32_t x162 = UINT32_MAX;
int8_t x163 = -1;
int32_t x164 = INT32_MAX;
static int32_t x168 = INT32_MIN;
int32_t x171 = INT32_MAX;
volatile int16_t x173 = INT16_MIN;
volatile int32_t x183 = INT32_MIN;
int64_t x184 = INT64_MIN;
volatile int64_t t42 = 0LL;
volatile int8_t x189 = INT8_MAX;
volatile int64_t t43 = 10019859580281009LL;
int16_t x204 = INT16_MIN;
uint64_t t47 = 200846811218834LLU;
static int8_t x214 = -15;
static int32_t x218 = INT32_MAX;
uint8_t x220 = UINT8_MAX;
int8_t x221 = 0;
int16_t x228 = -1;
uint64_t x230 = 103155592831972LLU;
static uint64_t x231 = 43LLU;
static int32_t t54 = 25084862;
static volatile uint64_t t55 = 0LLU;
uint64_t x244 = 4LLU;
volatile int64_t t57 = -217213335499LL;
uint16_t x249 = 1U;
uint64_t t59 = 42556010LLU;
static volatile int32_t x257 = -1;
static int32_t x262 = -1;
volatile int16_t x270 = -1608;
int64_t x278 = 119LL;
int16_t x283 = -1;
volatile uint64_t t66 = 81399598788156LLU;
static int32_t x292 = 9731;
uint32_t x294 = 894621U;
int8_t x295 = INT8_MIN;
int64_t t69 = -114518728837494LL;
static int16_t x304 = INT16_MIN;
uint32_t x315 = 3074740U;
volatile int64_t t73 = -183373006LL;
int8_t x325 = INT8_MAX;
uint32_t x329 = 4787U;
uint16_t x334 = 1U;
int64_t x337 = -1LL;
static int64_t t78 = -1189831034LL;
uint16_t x342 = UINT16_MAX;
int16_t x343 = -1;
volatile uint16_t x351 = 4U;
static uint32_t x358 = 98U;
volatile uint8_t x360 = 3U;
int16_t x363 = INT16_MIN;
static volatile uint32_t t85 = 4U;
static uint16_t x371 = 547U;
static uint8_t x373 = UINT8_MAX;
int64_t x375 = INT64_MAX;
int32_t x379 = -1;
volatile uint8_t x380 = 0U;
static int8_t x382 = INT8_MAX;
volatile uint32_t t92 = 206894860U;
uint16_t x398 = 10U;
static volatile int64_t x410 = INT64_MAX;
int32_t x415 = INT32_MIN;
int64_t x417 = INT64_MIN;
uint64_t x420 = 79LLU;
uint64_t x422 = 17051370LLU;
int8_t x423 = INT8_MIN;
int16_t x424 = -1;


void f0(void) {
	int16_t x2 = INT16_MAX;
	volatile int64_t x3 = -75LL;
	uint64_t x4 = 34252898436LLU;
	volatile uint64_t t0 = 570799LLU;

	t0 = ((x1|(x2^x3))-x4);

	if (t0 != 18446744039456653179LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	int64_t t1 = 6LL;

	t1 = ((x5|(x6^x7))-x8);

	if (t1 != 4297339388LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int8_t x10 = 0;
	uint8_t x11 = UINT8_MAX;
	int32_t x12 = INT32_MIN;
	volatile uint32_t t2 = 0U;

	t2 = ((x9|(x10^x11))-x12);

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint16_t x14 = 4U;
	int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;

	t3 = ((x13|(x14^x15))-x16);

	if (t3 != 32644) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 2;
	uint32_t x18 = UINT32_MAX;
	static uint16_t x19 = 15872U;
	int16_t x20 = 690;
	volatile uint32_t t4 = 15201U;

	t4 = ((x17|(x18^x19))-x20);

	if (t4 != 4294950733U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x28 = UINT16_MAX;
	static int64_t t5 = -41505641951LL;

	t5 = ((x25|(x26^x27))-x28);

	if (t5 != -84227LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -21698277;
	static volatile int16_t x31 = INT16_MAX;
	int16_t x32 = 7;
	int32_t t6 = -3;

	t6 = ((x29|(x30^x31))-x32);

	if (t6 != -744) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 6120U;
	int32_t x34 = -1;
	int64_t x36 = -1LL;
	volatile int64_t t7 = -7556479319845LL;

	t7 = ((x33|(x34^x35))-x36);

	if (t7 != 6144LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 9U;
	uint64_t x39 = UINT64_MAX;
	static volatile uint64_t t8 = 1LLU;

	t8 = ((x37|(x38^x39))-x40);

	if (t8 != 18446744071562100745LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MAX;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t9 = 418239;

	t9 = ((x41|(x42^x43))-x44);

	if (t9 != -65663) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	uint16_t x46 = 1U;
	uint32_t x47 = 23117U;
	volatile int8_t x48 = -1;
	static volatile int64_t t10 = 327LL;

	t10 = ((x45|(x46^x47))-x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	volatile uint32_t x50 = 114U;
	volatile uint64_t x52 = 24538LLU;
	static uint64_t t11 = 7327876831779056LLU;

	t11 = ((x49|(x50^x51))-x52);

	if (t11 != 18446744073709527077LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x62 = -1;
	volatile int8_t x63 = INT8_MIN;
	static int16_t x64 = -1;
	volatile int32_t t12 = -22;

	t12 = ((x61|(x62^x63))-x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = UINT16_MAX;
	uint16_t x66 = UINT16_MAX;
	volatile int64_t x67 = -1LL;
	int8_t x68 = -7;
	static int64_t t13 = -45854355964116LL;

	t13 = ((x65|(x66^x67))-x68);

	if (t13 != 6LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = 235206;
	uint64_t x71 = 2455616472413927LLU;
	int8_t x72 = 2;
	volatile uint64_t t14 = 88LLU;

	t14 = ((x69|(x70^x71))-x72);

	if (t14 != 2455616472481501LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x73 = 12U;
	int64_t x74 = INT64_MIN;
	volatile int64_t x75 = INT64_MIN;

	t15 = ((x73|(x74^x75))-x76);

	if (t15 != 140LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x78 = INT8_MIN;
	volatile int64_t x79 = INT64_MIN;
	int64_t t16 = 8305867777279LL;

	t16 = ((x77|(x78^x79))-x80);

	if (t16 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	static int16_t x82 = 482;
	static int8_t x83 = -1;
	static int8_t x84 = INT8_MIN;

	t17 = ((x81|(x82^x83))-x84);

	if (t17 != 127LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MIN;
	uint32_t t18 = 9300302U;

	t18 = ((x85|(x86^x87))-x88);

	if (t18 != 4294931454U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -15;
	volatile int16_t x90 = INT16_MAX;
	static volatile uint16_t x91 = 28U;
	uint8_t x92 = 99U;
	volatile int32_t t19 = 182;

	t19 = ((x89|(x90^x91))-x92);

	if (t19 != -112) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -5264623;
	volatile uint32_t x94 = 848593213U;
	static volatile int64_t x95 = -1LL;
	static volatile int16_t x96 = -5602;
	static int64_t t20 = 435894671220LL;

	t20 = ((x93|(x94^x95))-x96);

	if (t20 != -1043019LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = 811327981034941229LL;
	int16_t x98 = 178;
	int8_t x99 = -4;
	int64_t x100 = -201919LL;
	volatile int64_t t21 = 2LL;

	t21 = ((x97|(x98^x99))-x100);

	if (t21 != 201774LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -6246555;
	uint64_t x103 = 834950659645083668LLU;
	volatile int8_t x104 = 10;

	t22 = ((x101|(x102^x103))-x104);

	if (t22 != 18446744073707515875LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x106 = UINT8_MAX;
	static uint32_t x107 = 148793U;
	int16_t x108 = -1;
	volatile uint32_t t23 = 15U;

	t23 = ((x105|(x106^x107))-x108);

	if (t23 != 4294967239U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = INT32_MIN;
	static uint8_t x110 = UINT8_MAX;
	uint8_t x111 = UINT8_MAX;
	int32_t t24 = -31;

	t24 = ((x109|(x110^x111))-x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x116 = 1;
	uint64_t t25 = 8777676259487060848LLU;

	t25 = ((x113|(x114^x115))-x116);

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = 890;
	int32_t x118 = -1;
	static int16_t x120 = -1;
	static volatile int32_t t26 = 44873;

	t26 = ((x117|(x118^x119))-x120);

	if (t26 != -31877) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x121 = 32U;
	int8_t x122 = -1;
	uint32_t x123 = 342245001U;
	uint32_t t27 = 15U;

	t27 = ((x121|(x122^x123))-x124);

	if (t27 != 1805238646U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -24;
	volatile int16_t x126 = -37;
	volatile int64_t x127 = INT64_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t28 = 7743LL;

	t28 = ((x125|(x126^x127))-x128);

	if (t28 != -4294967300LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -8551LL;
	uint16_t x130 = UINT16_MAX;
	int32_t x132 = 2505285;
	volatile int64_t t29 = 36165LL;

	t29 = ((x129|(x130^x131))-x132);

	if (t29 != -2513580LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 34322635039847158LLU;
	volatile uint8_t x134 = 0U;
	volatile int16_t x135 = INT16_MIN;
	static uint8_t x136 = 7U;
	volatile uint64_t t30 = 5813495LLU;

	t30 = ((x133|(x134^x135))-x136);

	if (t30 != 18446744073709531887LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	volatile int32_t x138 = INT32_MIN;
	volatile uint64_t x139 = 85075623575567LLU;
	volatile uint64_t t31 = 11LLU;

	t31 = ((x137|(x138^x139))-x140);

	if (t31 != 18418449552525661240LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x142 = 209332586U;
	int64_t t32 = 2695363342320155901LL;

	t32 = ((x141|(x142^x143))-x144);

	if (t32 != -9223372034498526632LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MAX;
	uint16_t x146 = 0U;
	volatile int16_t x147 = INT16_MIN;
	volatile int64_t x148 = -1LL;
	volatile int64_t t33 = -61261144761222674LL;

	t33 = ((x145|(x146^x147))-x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x149 = INT64_MIN;
	int32_t x150 = -20218;
	int8_t x152 = -1;
	static int64_t t34 = 263732897LL;

	t34 = ((x149|(x150^x151))-x152);

	if (t34 != -9223372036854755590LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 1U;
	uint16_t x158 = 3U;
	int32_t x159 = -1;
	int8_t x160 = 1;
	int32_t t35 = 581;

	t35 = ((x157|(x158^x159))-x160);

	if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 512869U;
	uint32_t t36 = 3U;

	t36 = ((x161|(x162^x163))-x164);

	if (t36 != 2147996518U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x165 = 717646143426LL;
	volatile int64_t x166 = INT64_MIN;
	int8_t x167 = INT8_MAX;
	int64_t t37 = 1097205LL;

	t37 = ((x165|(x166^x167))-x168);

	if (t37 != -9223371317061148673LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x169 = UINT8_MAX;
	static int8_t x170 = -1;
	uint64_t x172 = 945LLU;
	static volatile uint64_t t38 = 477205920147923081LLU;

	t38 = ((x169|(x170^x171))-x172);

	if (t38 != 18446744071562067278LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x174 = 100874732241922LLU;
	volatile int8_t x175 = -1;
	int8_t x176 = INT8_MIN;
	volatile uint64_t t39 = 105LLU;

	t39 = ((x173|(x174^x175))-x176);

	if (t39 != 18446744073709550717LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = -1788;
	int64_t x178 = 2002501975502515LL;
	volatile int16_t x179 = 189;
	static volatile uint8_t x180 = 8U;
	int64_t t40 = 28198535LL;

	t40 = ((x177|(x178^x179))-x180);

	if (t40 != -250LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	int64_t t41 = 392675LL;

	t41 = ((x181|(x182^x183))-x184);

	if (t41 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int64_t x186 = 320033188765182527LL;
	static int8_t x187 = -1;
	int8_t x188 = INT8_MIN;

	t42 = ((x185|(x186^x187))-x188);

	if (t42 != -320033187344416641LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = 3916U;
	int16_t x191 = -1;
	volatile int64_t x192 = 3461424LL;

	t43 = ((x189|(x190^x191))-x192);

	if (t43 != 4291502031LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -1;
	int8_t x194 = -1;
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t44 = 15;

	t44 = ((x193|(x194^x195))-x196);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MIN;
	static int8_t x198 = 7;
	volatile uint16_t x199 = 465U;
	uint64_t x200 = 1040647256LLU;
	static uint64_t t45 = 145748LLU;

	t45 = ((x197|(x198^x199))-x200);

	if (t45 != 9223372035814129022LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x201 = 267358380U;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	uint64_t t46 = 2909024LLU;

	t46 = ((x201|(x202^x203))-x204);

	if (t46 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x205 = INT32_MIN;
	static uint64_t x206 = 189674409LLU;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = 1213U;

	t47 = ((x205|(x206^x207))-x208);

	if (t47 != 18446744071751741081LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = INT64_MIN;
	static int64_t x210 = -1LL;
	volatile uint64_t x211 = UINT64_MAX;
	int16_t x212 = 3425;
	volatile uint64_t t48 = 95680143496LLU;

	t48 = ((x209|(x210^x211))-x212);

	if (t48 != 9223372036854772383LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	int16_t x215 = -464;
	int32_t x216 = INT32_MIN;
	int32_t t49 = 6;

	t49 = ((x213|(x214^x215))-x216);

	if (t49 != 2147451329) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x217 = 11809U;
	uint8_t x219 = 82U;
	uint32_t t50 = 126987251U;

	t50 = ((x217|(x218^x219))-x220);

	if (t50 != 2147483310U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x222 = 22556U;
	int32_t x223 = -467342;
	int16_t x224 = INT16_MIN;
	int32_t t51 = 202077;

	t51 = ((x221|(x222^x223))-x224);

	if (t51 != -457106) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = 0U;
	uint8_t x227 = 13U;
	uint32_t t52 = 437U;

	t52 = ((x225|(x226^x227))-x228);

	if (t52 != 2147483662U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x229 = 7U;
	int64_t x232 = INT64_MIN;
	uint64_t t53 = 371061699388685LLU;

	t53 = ((x229|(x230^x231))-x232);

	if (t53 != 9223475192447607759LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = -1;
	volatile uint16_t x234 = 229U;
	static int32_t x235 = INT32_MAX;
	int8_t x236 = INT8_MIN;

	t54 = ((x233|(x234^x235))-x236);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -1;
	uint64_t x238 = 502784629290053LLU;
	int64_t x239 = INT64_MAX;
	int64_t x240 = -13LL;

	t55 = ((x237|(x238^x239))-x240);

	if (t55 != 12LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x241 = INT16_MAX;
	uint64_t x242 = UINT64_MAX;
	static int16_t x243 = -1;
	volatile uint64_t t56 = 2301678237176155777LLU;

	t56 = ((x241|(x242^x243))-x244);

	if (t56 != 32763LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x245 = INT64_MIN;
	volatile int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MAX;
	static int32_t x248 = INT32_MIN;

	t57 = ((x245|(x246^x247))-x248);

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = -1;
	static int64_t x252 = -1LL;
	static volatile int64_t t58 = -2220705LL;

	t58 = ((x249|(x250^x251))-x252);

	if (t58 != -2147483646LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MIN;
	static int32_t x254 = INT32_MIN;
	uint8_t x255 = 0U;
	uint64_t x256 = 17105LLU;

	t59 = ((x253|(x254^x255))-x256);

	if (t59 != 18446744073709501743LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x258 = INT16_MAX;
	static uint64_t x259 = 3954769130245311318LLU;
	uint64_t x260 = 14659636LLU;
	static volatile uint64_t t60 = 11LLU;

	t60 = ((x257|(x258^x259))-x260);

	if (t60 != 18446744073694891979LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -1;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MAX;
	static int64_t t61 = INT64_MIN;

	t61 = ((x261|(x262^x263))-x264);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x265 = INT32_MAX;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = -1;
	static int16_t x268 = -1;
	static uint32_t t62 = 916978297U;

	t62 = ((x265|(x266^x267))-x268);

	if (t62 != 2147483648U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x269 = UINT16_MAX;
	volatile int32_t x271 = INT32_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t63 = -300;

	t63 = ((x269|(x270^x271))-x272);

	if (t63 != -2147385345) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t64 = -60857654;

	t64 = ((x273|(x274^x275))-x276);

	if (t64 != 32640) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -1086995793628799127LL;
	uint16_t x279 = 652U;
	int8_t x280 = INT8_MIN;
	volatile int64_t t65 = -24298LL;

	t65 = ((x277|(x278^x279))-x280);

	if (t65 != -1086995793628798853LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x281 = 14U;
	int64_t x282 = -1LL;
	uint64_t x284 = 90203761LLU;

	t66 = ((x281|(x282^x283))-x284);

	if (t66 != 18446744073619347869LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x289 = INT8_MIN;
	volatile uint64_t x290 = UINT64_MAX;
	static uint32_t x291 = 351967829U;
	uint64_t t67 = 8LLU;

	t67 = ((x289|(x290^x291))-x292);

	if (t67 != 18446744073709541799LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x293 = 47U;
	uint16_t x296 = 10396U;
	volatile uint32_t t68 = 5U;

	t68 = ((x293|(x294^x295))-x296);

	if (t68 != 4294062243U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int64_t x298 = INT64_MIN;
	int64_t x299 = 1605647184081061LL;
	int64_t x300 = -297LL;

	t69 = ((x297|(x298^x299))-x300);

	if (t69 != -9221766389670674136LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = 18405;
	int16_t x302 = 2223;
	int8_t x303 = INT8_MAX;
	volatile int32_t t70 = 60974142;

	t70 = ((x301|(x302^x303))-x304);

	if (t70 != 53237) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MAX;
	uint64_t x306 = 7575388LLU;
	uint32_t x307 = UINT32_MAX;
	uint32_t x308 = UINT32_MAX;
	static uint64_t t71 = 115378753LLU;

	t71 = ((x305|(x306^x307))-x308);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = 0;
	uint64_t x310 = 2736171055LLU;
	uint8_t x311 = 10U;
	int16_t x312 = -1;
	volatile uint64_t t72 = 24936931419611607LLU;

	t72 = ((x309|(x310^x311))-x312);

	if (t72 != 2736171046LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x313 = -1LL;
	int8_t x314 = -3;
	int32_t x316 = INT32_MIN;

	t73 = ((x313|(x314^x315))-x316);

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = -926;
	int64_t x323 = -9LL;
	static volatile uint8_t x324 = 10U;
	int64_t t74 = 55LL;

	t74 = ((x321|(x322^x323))-x324);

	if (t74 != -2147482741LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x326 = 1U;
	int64_t x327 = -1LL;
	uint64_t x328 = UINT64_MAX;
	uint64_t t75 = 244188LLU;

	t75 = ((x325|(x326^x327))-x328);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x330 = -6548173LL;
	volatile uint64_t x331 = UINT64_MAX;
	static uint16_t x332 = UINT16_MAX;
	uint64_t t76 = 2053260135585055LLU;

	t76 = ((x329|(x330^x331))-x332);

	if (t76 != 6486784LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = INT16_MAX;
	int64_t x335 = -1LL;
	static int64_t x336 = INT64_MIN;
	volatile int64_t t77 = INT64_MAX;

	t77 = ((x333|(x334^x335))-x336);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x338 = INT64_MAX;
	static int16_t x339 = INT16_MAX;
	static volatile int16_t x340 = INT16_MIN;

	t78 = ((x337|(x338^x339))-x340);

	if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = INT16_MAX;
	volatile int16_t x344 = -1;
	int32_t t79 = 8389;

	t79 = ((x341|(x342^x343))-x344);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MAX;
	uint32_t x347 = UINT32_MAX;
	static int64_t x348 = -1LL;
	int64_t t80 = 2302092710903077LL;

	t80 = ((x345|(x346^x347))-x348);

	if (t80 != 4294967296LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x349 = 2U;
	int16_t x350 = 0;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t81 = -15400;

	t81 = ((x349|(x350^x351))-x352);

	if (t81 != -2147483641) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 350U;
	int16_t x354 = -9469;
	volatile uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	volatile uint32_t t82 = 14682161U;

	t82 = ((x353|(x354^x355))-x356);

	if (t82 != 42494U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x357 = 93318151574LLU;
	int32_t x359 = -1;
	uint64_t t83 = 197243269LLU;

	t83 = ((x357|(x358^x359))-x360);

	if (t83 != 94489280412LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MAX;
	int8_t x364 = INT8_MAX;
	volatile int32_t t84 = -994923216;

	t84 = ((x361|(x362^x363))-x364);

	if (t84 != -2147451008) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = INT32_MIN;
	volatile int32_t x366 = INT32_MIN;
	static volatile uint32_t x367 = 1132632U;
	static int32_t x368 = -914975;

	t85 = ((x365|(x366^x367))-x368);

	if (t85 != 2149531255U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = 6223U;
	int32_t x370 = -6;
	int64_t x372 = -42LL;
	volatile int64_t t86 = -1LL;

	t86 = ((x369|(x370^x371))-x372);

	if (t86 != 4294966793LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x374 = -1;
	int8_t x376 = 50;
	volatile int64_t t87 = -10LL;

	t87 = ((x373|(x374^x375))-x376);

	if (t87 != -9223372036854775603LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = 1;
	static int16_t x378 = INT16_MIN;
	int32_t t88 = 855650;

	t88 = ((x377|(x378^x379))-x380);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x381 = 2023241704048907LLU;
	int16_t x383 = INT16_MIN;
	static int32_t x384 = 249477168;
	volatile uint64_t t89 = 714835368704540091LLU;

	t89 = ((x381|(x382^x383))-x384);

	if (t89 != 18446744073460044111LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = -1;
	volatile uint16_t x386 = 216U;
	int8_t x387 = -1;
	static int32_t x388 = -99146790;
	int32_t t90 = -16;

	t90 = ((x385|(x386^x387))-x388);

	if (t90 != 99146789) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x389 = 2337U;
	uint32_t x390 = UINT32_MAX;
	uint64_t x391 = UINT64_MAX;
	static int8_t x392 = 0;
	uint64_t t91 = 54966119412117LLU;

	t91 = ((x389|(x390^x391))-x392);

	if (t91 != 18446744069414586657LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = -1;
	static volatile uint32_t x394 = 9U;
	uint16_t x395 = UINT16_MAX;
	volatile uint32_t x396 = 109U;

	t92 = ((x393|(x394^x395))-x396);

	if (t92 != 4294967186U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x399 = 7U;
	uint8_t x400 = 3U;
	volatile int32_t t93 = -19761823;

	t93 = ((x397|(x398^x399))-x400);

	if (t93 != -2147483638) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = 590667172;
	static volatile int64_t x402 = 92840LL;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = -1;
	int64_t t94 = 356721LL;

	t94 = ((x401|(x402^x403))-x404);

	if (t94 != 590732792LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x409 = 788U;
	int8_t x411 = -1;
	static uint32_t x412 = 2U;
	static int64_t t95 = -24939524783LL;

	t95 = ((x409|(x410^x411))-x412);

	if (t95 != -9223372036854775022LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = -3;
	volatile int32_t x414 = INT32_MIN;
	uint32_t x416 = 461248277U;
	volatile uint32_t t96 = 248722U;

	t96 = ((x413|(x414^x415))-x416);

	if (t96 != 3833719016U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x418 = 2764U;
	uint16_t x419 = 7U;
	static uint64_t t97 = 9726653116236399LLU;

	t97 = ((x417|(x418^x419))-x420);

	if (t97 != 9223372036854778492LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MIN;
	volatile uint64_t t98 = 69187210612LLU;

	t98 = ((x421|(x422^x423))-x424);

	if (t98 != 18446744073709539691LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MIN;
	static volatile int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MAX;
	static volatile int64_t t99 = 2LL;

	t99 = ((x425|(x426^x427))-x428);

	if (t99 != -2147483775LL) { NG(); } else { ; }
	
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

