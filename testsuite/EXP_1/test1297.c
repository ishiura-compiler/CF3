#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
volatile int32_t t1 = -6;
int16_t x9 = 0;
volatile int32_t t2 = 235;
volatile int32_t t3 = -23789124;
int8_t x22 = INT8_MAX;
volatile int64_t x26 = INT64_MIN;
uint64_t x29 = 86LLU;
int16_t x34 = 1;
static int32_t x35 = -1;
volatile int32_t t8 = -1299;
int32_t x43 = INT32_MIN;
int32_t t12 = -1;
static int32_t t14 = -1904784;
volatile uint8_t x63 = 4U;
int16_t x76 = INT16_MIN;
int64_t x80 = -1LL;
uint64_t x90 = UINT64_MAX;
static int8_t x95 = INT8_MAX;
uint32_t x99 = 1513362670U;
static int32_t t24 = -5375555;
uint8_t x109 = 46U;
static int32_t x110 = INT32_MIN;
int64_t x116 = -12467085398808694LL;
int32_t t30 = -7010;
volatile int8_t x126 = 3;
volatile int64_t x127 = INT64_MIN;
static volatile int32_t t32 = 357;
int32_t t33 = -152;
static int16_t x139 = -1;
uint64_t x144 = UINT64_MAX;
volatile int32_t t37 = 3793040;
static uint64_t x158 = 239436026866664LLU;
int64_t x163 = -1LL;
int64_t x166 = INT64_MAX;
int32_t t41 = 111;
uint32_t x170 = 14525U;
static int16_t x174 = 1;
int8_t x180 = 10;
int8_t x182 = -1;
volatile int32_t t45 = 9825;
static int64_t x185 = INT64_MIN;
int8_t x192 = -2;
static int32_t t48 = -1633;
static volatile uint32_t x201 = 5105128U;
int64_t x205 = 6LL;
uint64_t x208 = 26375641LLU;
int32_t t51 = -937514;
int16_t x223 = -3;
int32_t x226 = INT32_MIN;
int64_t x227 = INT64_MIN;
uint16_t x228 = UINT16_MAX;
int32_t t57 = 15;
static volatile int32_t t59 = -776;
int64_t x241 = INT64_MAX;
int64_t x242 = -1LL;
int32_t t62 = -9;
volatile int32_t x258 = INT32_MAX;
volatile int32_t t64 = -1379475;
uint64_t x264 = UINT64_MAX;
static uint64_t x266 = 6299343LLU;
volatile int32_t t68 = -1;
int32_t x283 = -1;
int32_t t70 = 0;
int32_t x292 = INT32_MIN;
uint64_t x304 = 643336308LLU;
int32_t t75 = 13549;
static int32_t x307 = INT32_MAX;
int64_t x318 = -42680327672226374LL;
volatile int8_t x322 = INT8_MAX;
volatile int32_t t81 = 3346;
static volatile int32_t t82 = 35371;
int32_t x334 = INT32_MIN;
int8_t x335 = 0;
volatile int16_t x338 = INT16_MIN;
static int32_t t84 = -17545245;
int8_t x345 = -1;
int8_t x360 = -1;
uint16_t x365 = 6U;
int64_t x367 = 287771621402300130LL;
int8_t x368 = -3;
static volatile int32_t t92 = -136;
volatile int16_t x373 = INT16_MAX;
int16_t x375 = -1;
static uint16_t x379 = 7360U;
int32_t t94 = -1;
uint8_t x381 = UINT8_MAX;
uint64_t x382 = UINT64_MAX;
int32_t x385 = INT32_MIN;
uint64_t x386 = 25399LLU;
int8_t x388 = INT8_MAX;
volatile int64_t x389 = -3972927772984660240LL;
int64_t x391 = INT64_MIN;
volatile int32_t t98 = 100247059;
int16_t x398 = INT16_MAX;


void f0(void) {
	volatile uint8_t x1 = 0U;
	uint64_t x2 = UINT64_MAX;
	static uint8_t x3 = 62U;
	static uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 3649;

	t0 = (((x1==x2)<x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;

	t1 = (((x5==x6)<x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	uint16_t x11 = 15U;
	uint64_t x12 = UINT64_MAX;

	t2 = (((x9==x10)<x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	uint32_t x14 = UINT32_MAX;
	uint32_t x15 = 24U;
	int64_t x16 = INT64_MIN;

	t3 = (((x13==x14)<x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1062;
	int8_t x18 = -1;
	int64_t x19 = -15925414163058379LL;
	uint32_t x20 = 1020566U;
	volatile int32_t t4 = -2520;

	t4 = (((x17==x18)<x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	static int64_t x23 = -21956510LL;
	int32_t x24 = 1;
	volatile int32_t t5 = -198582410;

	t5 = (((x21==x22)<x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static volatile uint16_t x27 = 3862U;
	uint8_t x28 = 69U;
	static volatile int32_t t6 = 29622;

	t6 = (((x25==x26)<x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x30 = INT16_MIN;
	static volatile int8_t x31 = -16;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 4212458;

	t7 = (((x29==x30)<x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 562766386U;
	uint16_t x36 = 56U;

	t8 = (((x33==x34)<x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 1U;
	volatile int32_t x38 = INT32_MAX;
	int32_t x39 = -1;
	uint64_t x40 = 29318306833072848LLU;
	int32_t t9 = -1;

	t9 = (((x37==x38)<x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int32_t x42 = INT32_MIN;
	int32_t x44 = -1;
	volatile int32_t t10 = 22;

	t10 = (((x41==x42)<x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int16_t x46 = -5351;
	int64_t x47 = INT64_MIN;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t11 = 120674;

	t11 = (((x45==x46)<x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	volatile int32_t x50 = -1;
	volatile uint16_t x51 = 5647U;
	int64_t x52 = INT64_MIN;

	t12 = (((x49==x50)<x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 1;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = UINT8_MAX;
	volatile int64_t x56 = 3000642831862553LL;
	int32_t t13 = -1850;

	t13 = (((x53==x54)<x55)<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MAX;
	int32_t x60 = 3368759;

	t14 = (((x57==x58)<x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 6U;
	int64_t x62 = INT64_MIN;
	int16_t x64 = INT16_MAX;
	int32_t t15 = -116;

	t15 = (((x61==x62)<x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -6526;
	volatile int8_t x66 = 0;
	int16_t x67 = 12154;
	static volatile int64_t x68 = 12784LL;
	volatile int32_t t16 = 32882;

	t16 = (((x65==x66)<x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	volatile uint32_t x70 = 57U;
	int32_t x71 = INT32_MIN;
	volatile uint8_t x72 = 11U;
	int32_t t17 = -500481377;

	t17 = (((x69==x70)<x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = INT16_MAX;
	int8_t x74 = INT8_MIN;
	volatile int64_t x75 = INT64_MIN;
	static int32_t t18 = -250892;

	t18 = (((x73==x74)<x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 18;
	uint64_t x78 = 678422254LLU;
	int64_t x79 = INT64_MIN;
	int32_t t19 = -3275458;

	t19 = (((x77==x78)<x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 197LLU;
	static int8_t x82 = -1;
	uint8_t x83 = 0U;
	static int64_t x84 = 43065LL;
	volatile int32_t t20 = -118;

	t20 = (((x81==x82)<x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	static int16_t x86 = -5;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = -1LL;
	volatile int32_t t21 = 0;

	t21 = (((x85==x86)<x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -4;
	static int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 2329;

	t22 = (((x89==x90)<x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -3;
	volatile uint64_t x94 = 5726116468LLU;
	int32_t x96 = INT32_MIN;
	int32_t t23 = -74399765;

	t23 = (((x93==x94)<x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = 466;
	int16_t x98 = INT16_MAX;
	int64_t x100 = -1LL;

	t24 = (((x97==x98)<x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -32264;
	int64_t x102 = -5573931997179301LL;
	volatile int16_t x103 = 4339;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -34710;

	t25 = (((x101==x102)<x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x105 = UINT64_MAX;
	int16_t x106 = INT16_MIN;
	volatile int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	volatile int32_t t26 = -101529372;

	t26 = (((x105==x106)<x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = -46;
	static volatile int32_t t27 = -2961;

	t27 = (((x109==x110)<x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	static uint8_t x114 = 57U;
	uint32_t x115 = 19701U;
	volatile int32_t t28 = 702699616;

	t28 = (((x113==x114)<x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MIN;
	int8_t x119 = -1;
	int16_t x120 = INT16_MAX;
	static volatile int32_t t29 = -875614;

	t29 = (((x117==x118)<x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 51460930501LLU;
	static uint16_t x122 = UINT16_MAX;
	volatile int8_t x123 = INT8_MAX;
	uint32_t x124 = 42357438U;

	t30 = (((x121==x122)<x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -3;
	uint32_t x128 = 257897U;
	int32_t t31 = 124007339;

	t31 = (((x125==x126)<x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 14U;
	uint32_t x130 = 21711009U;
	uint32_t x131 = UINT32_MAX;
	int64_t x132 = INT64_MAX;

	t32 = (((x129==x130)<x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MIN;
	uint8_t x134 = 0U;
	int64_t x135 = -40LL;
	int64_t x136 = -496764875LL;

	t33 = (((x133==x134)<x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	uint64_t x138 = 1031625LLU;
	uint16_t x140 = UINT16_MAX;
	int32_t t34 = -560361304;

	t34 = (((x137==x138)<x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	volatile int32_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	volatile int32_t t35 = 1640171;

	t35 = (((x141==x142)<x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = 24647570LLU;
	int32_t x146 = -26841;
	int32_t x147 = INT32_MIN;
	volatile int32_t x148 = INT32_MAX;
	int32_t t36 = -1149;

	t36 = (((x145==x146)<x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1659;
	static volatile int8_t x150 = -1;
	int8_t x151 = INT8_MIN;
	int8_t x152 = -2;

	t37 = (((x149==x150)<x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -16228851430867277LL;
	uint8_t x154 = UINT8_MAX;
	uint16_t x155 = UINT16_MAX;
	int8_t x156 = INT8_MAX;
	static int32_t t38 = -17129;

	t38 = (((x153==x154)<x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 162869LLU;
	int64_t x159 = INT64_MAX;
	uint64_t x160 = 850514878295660192LLU;
	static volatile int32_t t39 = 12;

	t39 = (((x157==x158)<x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	uint32_t x162 = 1U;
	static int64_t x164 = INT64_MAX;
	int32_t t40 = -23590;

	t40 = (((x161==x162)<x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 120340;
	int8_t x167 = -1;
	int64_t x168 = INT64_MIN;

	t41 = (((x165==x166)<x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	int16_t x171 = 13718;
	int16_t x172 = -1;
	volatile int32_t t42 = 338;

	t42 = (((x169==x170)<x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -45;
	volatile int8_t x175 = INT8_MIN;
	volatile uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = 21;

	t43 = (((x173==x174)<x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	static int64_t x178 = 1LL;
	int16_t x179 = -614;
	volatile int32_t t44 = -15;

	t44 = (((x177==x178)<x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	uint16_t x184 = UINT16_MAX;

	t45 = (((x181==x182)<x183)<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MAX;
	int32_t x187 = 4;
	int32_t x188 = -127044702;
	volatile int32_t t46 = -4439099;

	t46 = (((x185==x186)<x187)<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 5U;
	static int16_t x190 = 153;
	int8_t x191 = -1;
	volatile int32_t t47 = 2;

	t47 = (((x189==x190)<x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MAX;
	volatile uint32_t x196 = 12U;

	t48 = (((x193==x194)<x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 33068656;
	static int16_t x198 = -6247;
	int64_t x199 = -1LL;
	static uint32_t x200 = 1621U;
	volatile int32_t t49 = 2876259;

	t49 = (((x197==x198)<x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int32_t x204 = -656;
	int32_t t50 = -113424226;

	t50 = (((x201==x202)<x203)<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x206 = 57835760LLU;
	int16_t x207 = -5421;

	t51 = (((x205==x206)<x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	volatile int64_t x210 = 0LL;
	int64_t x211 = 51132LL;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 116;

	t52 = (((x209==x210)<x211)<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	volatile uint16_t x214 = UINT16_MAX;
	volatile int32_t x215 = -1;
	int64_t x216 = -1LL;
	static volatile int32_t t53 = 0;

	t53 = (((x213==x214)<x215)<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	uint32_t x218 = 535009428U;
	static int32_t x219 = 31080729;
	int8_t x220 = -1;
	static volatile int32_t t54 = -33235;

	t54 = (((x217==x218)<x219)<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 9339367LL;
	int8_t x222 = INT8_MAX;
	static int32_t x224 = INT32_MIN;
	int32_t t55 = -1932;

	t55 = (((x221==x222)<x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int32_t t56 = 1;

	t56 = (((x225==x226)<x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -2015;
	uint16_t x230 = UINT16_MAX;
	static int64_t x231 = INT64_MIN;
	int64_t x232 = -605765LL;

	t57 = (((x229==x230)<x231)<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -32;
	int64_t x234 = INT64_MAX;
	volatile uint32_t x235 = 8400315U;
	uint16_t x236 = 51U;
	int32_t t58 = 53095;

	t58 = (((x233==x234)<x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MAX;

	t59 = (((x237==x238)<x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x243 = 577U;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = 3;

	t60 = (((x241==x242)<x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int16_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	volatile int64_t x248 = INT64_MAX;
	int32_t t61 = 1457082;

	t61 = (((x245==x246)<x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 2U;
	volatile int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MAX;
	uint8_t x252 = UINT8_MAX;

	t62 = (((x249==x250)<x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 705996LLU;
	volatile uint16_t x254 = 3707U;
	int16_t x255 = INT16_MAX;
	static uint32_t x256 = 19U;
	static int32_t t63 = 129010218;

	t63 = (((x253==x254)<x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = 19;
	uint16_t x259 = 1156U;
	uint64_t x260 = 1120572LLU;

	t64 = (((x257==x258)<x259)<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = UINT16_MAX;
	int16_t x263 = INT16_MAX;
	static int32_t t65 = 1120899;

	t65 = (((x261==x262)<x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -94;
	uint64_t x267 = 1885596373341627169LLU;
	static int8_t x268 = -51;
	volatile int32_t t66 = 408516464;

	t66 = (((x265==x266)<x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 11;
	static int8_t x270 = INT8_MIN;
	int16_t x271 = -1;
	int64_t x272 = -1LL;
	volatile int32_t t67 = 13685;

	t67 = (((x269==x270)<x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	volatile int64_t x274 = INT64_MAX;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MIN;

	t68 = (((x273==x274)<x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = -849282141;
	volatile int8_t x278 = INT8_MIN;
	static volatile uint32_t x279 = UINT32_MAX;
	volatile int32_t x280 = -1;
	int32_t t69 = 48131702;

	t69 = (((x277==x278)<x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	static int32_t x282 = INT32_MIN;
	int8_t x284 = INT8_MIN;

	t70 = (((x281==x282)<x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 3468U;
	static volatile uint32_t x286 = 503U;
	int16_t x287 = INT16_MAX;
	uint8_t x288 = 85U;
	int32_t t71 = -5776;

	t71 = (((x285==x286)<x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int8_t x290 = -45;
	int16_t x291 = INT16_MAX;
	volatile int32_t t72 = 49244;

	t72 = (((x289==x290)<x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	int16_t x295 = -1;
	int8_t x296 = -1;
	volatile int32_t t73 = 96857;

	t73 = (((x293==x294)<x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MIN;
	int32_t x299 = -63;
	static volatile uint16_t x300 = 310U;
	volatile int32_t t74 = 1061392595;

	t74 = (((x297==x298)<x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 3U;
	uint64_t x302 = 22921028849098005LLU;
	int64_t x303 = -12608642139899LL;

	t75 = (((x301==x302)<x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 5U;
	uint32_t x306 = 28279752U;
	volatile int8_t x308 = -6;
	static volatile int32_t t76 = 10796;

	t76 = (((x305==x306)<x307)<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	uint64_t x310 = 103692758LLU;
	uint32_t x311 = 0U;
	volatile int64_t x312 = -395834LL;
	volatile int32_t t77 = 250626;

	t77 = (((x309==x310)<x311)<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 11U;
	static int16_t x314 = INT16_MAX;
	volatile uint32_t x315 = 74495U;
	static uint64_t x316 = 1520247LLU;
	volatile int32_t t78 = 3004;

	t78 = (((x313==x314)<x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	volatile uint32_t x319 = 31181590U;
	volatile uint16_t x320 = 10145U;
	int32_t t79 = -1;

	t79 = (((x317==x318)<x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	int16_t x323 = 1292;
	int16_t x324 = -1;
	int32_t t80 = -12;

	t80 = (((x321==x322)<x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 2329U;
	static uint64_t x326 = 42553494505LLU;
	int64_t x327 = INT64_MAX;
	int64_t x328 = INT64_MIN;

	t81 = (((x325==x326)<x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -114;
	volatile uint64_t x330 = 4005461LLU;
	int16_t x331 = INT16_MIN;
	volatile int8_t x332 = -8;

	t82 = (((x329==x330)<x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	uint32_t x336 = 1U;
	volatile int32_t t83 = 24722680;

	t83 = (((x333==x334)<x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 3U;
	int16_t x339 = 20;
	int16_t x340 = -1;

	t84 = (((x337==x338)<x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	static int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MIN;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 0;

	t85 = (((x341==x342)<x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MIN;
	static volatile int64_t x347 = INT64_MAX;
	uint32_t x348 = 6U;
	volatile int32_t t86 = -155037;

	t86 = (((x345==x346)<x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -1LL;
	int16_t x350 = 1786;
	volatile int16_t x351 = -1;
	int64_t x352 = INT64_MAX;
	static volatile int32_t t87 = 17054340;

	t87 = (((x349==x350)<x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	volatile uint64_t x354 = 1118413267LLU;
	int16_t x355 = 5661;
	int32_t x356 = -1;
	volatile int32_t t88 = 2526;

	t88 = (((x353==x354)<x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x357 = UINT16_MAX;
	static int32_t x358 = INT32_MAX;
	int16_t x359 = 577;
	int32_t t89 = -53064;

	t89 = (((x357==x358)<x359)<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MIN;
	static int32_t x363 = -1;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -371116957;

	t90 = (((x361==x362)<x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	static int32_t t91 = 953827721;

	t91 = (((x365==x366)<x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 2691U;
	static int64_t x370 = -683751444202877458LL;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MIN;

	t92 = (((x369==x370)<x371)<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x374 = 48569013U;
	int8_t x376 = -10;
	volatile int32_t t93 = 2;

	t93 = (((x373==x374)<x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	static uint16_t x378 = 14916U;
	uint64_t x380 = UINT64_MAX;

	t94 = (((x377==x378)<x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x383 = -1LL;
	uint16_t x384 = 197U;
	static volatile int32_t t95 = -20783;

	t95 = (((x381==x382)<x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x387 = INT16_MIN;
	int32_t t96 = 4;

	t96 = (((x385==x386)<x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x390 = -18;
	static int32_t x392 = -1;
	int32_t t97 = -1;

	t97 = (((x389==x390)<x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	uint64_t x394 = 2859LLU;
	static uint32_t x395 = 83077384U;
	volatile int32_t x396 = INT32_MAX;

	t98 = (((x393==x394)<x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	static uint64_t x399 = 103341735078LLU;
	int16_t x400 = -3;
	static volatile int32_t t99 = 325226395;

	t99 = (((x397==x398)<x399)<=x400);

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
