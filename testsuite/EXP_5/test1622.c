#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x1 = UINT16_MAX;
static volatile uint16_t x3 = 5177U;
uint16_t x6 = 21280U;
int32_t x7 = -1;
int64_t x14 = -27LL;
int32_t x37 = 31;
static int32_t x49 = -1;
static int64_t x55 = -1LL;
volatile int32_t t13 = 27727193;
int8_t x60 = INT8_MIN;
static volatile int32_t t14 = -2;
static int8_t x62 = -1;
int16_t x73 = 4;
int32_t t18 = 1;
volatile uint16_t x77 = 8178U;
int16_t x79 = -1;
volatile int32_t t19 = 1199759;
int8_t x82 = INT8_MAX;
int8_t x87 = INT8_MAX;
int16_t x88 = -1;
static uint64_t x91 = UINT64_MAX;
static int64_t x92 = INT64_MAX;
int32_t t24 = -1045116657;
int32_t x106 = 130;
static volatile int32_t t26 = 19862;
static int8_t x113 = -1;
volatile uint16_t x116 = 2972U;
volatile int32_t x117 = -181790244;
int16_t x125 = -1;
volatile int8_t x127 = 54;
uint32_t x133 = 66633U;
static int32_t x134 = 2602;
uint16_t x135 = 6U;
int32_t t33 = -1554749;
uint8_t x143 = 1U;
static volatile int32_t t36 = -1332;
int16_t x152 = -1;
uint16_t x155 = UINT16_MAX;
static int64_t x158 = -121LL;
int16_t x159 = -1;
int64_t x172 = -13575LL;
int16_t x173 = -1;
int32_t x177 = 908;
static int8_t x186 = 1;
int64_t x189 = 663LL;
static uint8_t x192 = 6U;
int32_t x197 = INT32_MAX;
volatile int32_t t49 = 150;
static int64_t x201 = INT64_MIN;
int64_t x216 = -1LL;
int32_t t54 = -250;
uint32_t x230 = 839U;
int8_t x231 = -1;
volatile int32_t t57 = -12;
volatile uint8_t x233 = 17U;
static int32_t t58 = -13;
uint32_t x237 = 67381U;
int32_t t61 = -33012978;
uint16_t x250 = UINT16_MAX;
static volatile int8_t x259 = 26;
uint32_t x261 = UINT32_MAX;
static volatile int32_t t65 = -6;
int16_t x270 = -1;
int32_t x272 = INT32_MIN;
int16_t x283 = INT16_MIN;
int64_t x285 = 8960705738LL;
int16_t x287 = INT16_MIN;
volatile int16_t x291 = 409;
int32_t t75 = 16;
volatile int32_t t77 = -5881;
volatile uint32_t x314 = UINT32_MAX;
int64_t x316 = 1137LL;
uint32_t x318 = 247953362U;
static int32_t x320 = INT32_MIN;
volatile int32_t t79 = -6;
int32_t t80 = -5926;
int16_t x325 = INT16_MIN;
int32_t t81 = -19;
uint64_t x332 = UINT64_MAX;
static uint16_t x338 = 184U;
volatile int32_t t84 = -13209253;
volatile int8_t x348 = 0;
volatile int32_t t87 = 116;
int16_t x358 = 58;
uint16_t x366 = 18094U;
static int32_t x367 = INT32_MIN;
uint8_t x378 = 1U;
uint8_t x379 = UINT8_MAX;
int64_t x385 = -1LL;
int32_t x387 = INT32_MIN;
volatile int32_t t96 = 106095;
int16_t x399 = INT16_MIN;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int8_t x4 = 40;
	static volatile int32_t t0 = 81548893;

	t0 = (x1<=((x2<=x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -8409;
	int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = 263381;

	t1 = (x5<=((x6<=x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -5;
	int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MAX;
	int32_t x12 = -1;
	static volatile int32_t t2 = -179824758;

	t2 = (x9<=((x10<=x11)==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int16_t x15 = -14467;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = 476054;

	t3 = (x13<=((x14<=x15)==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 6759344U;
	int64_t x18 = -39539305134484144LL;
	int16_t x19 = INT16_MIN;
	int8_t x20 = 8;
	static int32_t t4 = 56373;

	t4 = (x17<=((x18<=x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int32_t x22 = INT32_MAX;
	uint64_t x23 = 20059051294214LLU;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -2;

	t5 = (x21<=((x22<=x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MAX;
	uint8_t x27 = UINT8_MAX;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = 22032;

	t6 = (x25<=((x26<=x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = -1;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -57379622;

	t7 = (x29<=((x30<=x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -1;
	uint64_t x34 = 77938088891171068LLU;
	uint32_t x35 = 2337544U;
	int8_t x36 = -1;
	volatile int32_t t8 = 29221;

	t8 = (x33<=((x34<=x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = 91LL;
	int64_t x39 = -388LL;
	uint8_t x40 = 44U;
	int32_t t9 = 71620659;

	t9 = (x37<=((x38<=x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	int32_t x44 = -1;
	volatile int32_t t10 = -14842872;

	t10 = (x41<=((x42<=x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	uint8_t x46 = 5U;
	volatile int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = 7;

	t11 = (x45<=((x46<=x47)==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MAX;
	static uint8_t x51 = 6U;
	static volatile int8_t x52 = INT8_MIN;
	int32_t t12 = -339329153;

	t12 = (x49<=((x50<=x51)==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = 544U;
	static int8_t x56 = -1;

	t13 = (x53<=((x54<=x55)==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int32_t x58 = -1;
	static int32_t x59 = 29643;

	t14 = (x57<=((x58<=x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	static int64_t x64 = INT64_MAX;
	volatile int32_t t15 = 290802;

	t15 = (x61<=((x62<=x63)==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	int32_t x67 = -3772940;
	volatile uint8_t x68 = 54U;
	static int32_t t16 = -5;

	t16 = (x65<=((x66<=x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 3932738U;
	int64_t x70 = -1LL;
	int32_t x71 = -1;
	int64_t x72 = INT64_MAX;
	static int32_t t17 = -51;

	t17 = (x69<=((x70<=x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 1321U;
	uint8_t x75 = 34U;
	int8_t x76 = -58;

	t18 = (x73<=((x74<=x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	static int64_t x80 = INT64_MIN;

	t19 = (x77<=((x78<=x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x83 = 648443U;
	int16_t x84 = 11890;
	static volatile int32_t t20 = 10;

	t20 = (x81<=((x82<=x83)==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -109;
	uint8_t x86 = 8U;
	int32_t t21 = -1274;

	t21 = (x85<=((x86<=x87)==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 62;
	static int8_t x90 = INT8_MAX;
	int32_t t22 = -6767;

	t22 = (x89<=((x90<=x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 2787LLU;
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 1;

	t23 = (x93<=((x94<=x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static volatile int32_t x98 = -17466149;
	static uint16_t x99 = UINT16_MAX;
	int64_t x100 = INT64_MIN;

	t24 = (x97<=((x98<=x99)==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int32_t x102 = 354148;
	volatile int64_t x103 = INT64_MIN;
	static int16_t x104 = INT16_MIN;
	int32_t t25 = -6410834;

	t25 = (x101<=((x102<=x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	uint64_t x107 = 1865210140091613786LLU;
	volatile int64_t x108 = -130787782LL;

	t26 = (x105<=((x106<=x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	static int64_t x110 = INT64_MIN;
	int32_t x111 = 210;
	uint32_t x112 = 2017713U;
	volatile int32_t t27 = 1778;

	t27 = (x109<=((x110<=x111)==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x114 = UINT64_MAX;
	uint8_t x115 = 56U;
	static volatile int32_t t28 = 782880955;

	t28 = (x113<=((x114<=x115)==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 1;
	int8_t x119 = INT8_MIN;
	static uint16_t x120 = 2U;
	volatile int32_t t29 = -703387055;

	t29 = (x117<=((x118<=x119)==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1648218185LL;
	static int8_t x122 = INT8_MAX;
	uint32_t x123 = 30U;
	uint32_t x124 = 575U;
	int32_t t30 = -4;

	t30 = (x121<=((x122<=x123)==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = UINT64_MAX;
	volatile int16_t x128 = -37;
	static volatile int32_t t31 = 865152;

	t31 = (x125<=((x126<=x127)==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int32_t x130 = -5688;
	int16_t x131 = INT16_MIN;
	volatile uint64_t x132 = 727470345620405357LLU;
	volatile int32_t t32 = 177;

	t32 = (x129<=((x130<=x131)==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x136 = UINT32_MAX;

	t33 = (x133<=((x134<=x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int32_t x138 = -1;
	static int32_t x139 = -1;
	int16_t x140 = INT16_MAX;
	volatile int32_t t34 = 6218914;

	t34 = (x137<=((x138<=x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -1;
	uint16_t x142 = 0U;
	int16_t x144 = 2282;
	static int32_t t35 = -125;

	t35 = (x141<=((x142<=x143)==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1901;
	int32_t x146 = -141;
	uint64_t x147 = 7609394797LLU;
	uint64_t x148 = 0LLU;

	t36 = (x145<=((x146<=x147)==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	uint32_t x150 = UINT32_MAX;
	int32_t x151 = INT32_MIN;
	volatile int32_t t37 = -4054949;

	t37 = (x149<=((x150<=x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 381;
	int8_t x154 = INT8_MIN;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = 16423409;

	t38 = (x153<=((x154<=x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x160 = 15U;
	volatile int32_t t39 = 13;

	t39 = (x157<=((x158<=x159)==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	uint32_t x162 = 939U;
	volatile int16_t x163 = INT16_MAX;
	static int8_t x164 = 14;
	int32_t t40 = 5820060;

	t40 = (x161<=((x162<=x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MAX;
	int32_t x168 = -1;
	volatile int32_t t41 = -1010486672;

	t41 = (x165<=((x166<=x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = UINT64_MAX;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int32_t t42 = 17576;

	t42 = (x169<=((x170<=x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -23964LL;
	int16_t x175 = -438;
	int16_t x176 = -1;
	int32_t t43 = 24140;

	t43 = (x173<=((x174<=x175)==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = 3201LL;
	int8_t x179 = -13;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = -27702188;

	t44 = (x177<=((x178<=x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -1;
	volatile uint16_t x182 = 39U;
	static int8_t x183 = INT8_MAX;
	volatile int32_t x184 = INT32_MAX;
	int32_t t45 = -573988951;

	t45 = (x181<=((x182<=x183)==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	uint8_t x188 = 2U;
	static int32_t t46 = 1;

	t46 = (x185<=((x186<=x187)==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x190 = UINT8_MAX;
	uint32_t x191 = 0U;
	int32_t t47 = -1;

	t47 = (x189<=((x190<=x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	int64_t x194 = -1LL;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = -163365420;

	t48 = (x193<=((x194<=x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x198 = 9019U;
	uint16_t x199 = 21U;
	int32_t x200 = INT32_MIN;

	t49 = (x197<=((x198<=x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x202 = -1;
	static int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t50 = 286483;

	t50 = (x201<=((x202<=x203)==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x205 = INT16_MIN;
	volatile int64_t x206 = INT64_MIN;
	uint64_t x207 = 28067007717LLU;
	int8_t x208 = -1;
	int32_t t51 = -1153361;

	t51 = (x205<=((x206<=x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	int8_t x210 = -44;
	volatile int64_t x211 = 49555542LL;
	volatile int8_t x212 = -1;
	volatile int32_t t52 = -2300183;

	t52 = (x209<=((x210<=x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 28U;
	int64_t x214 = -1LL;
	static int8_t x215 = 19;
	static volatile int32_t t53 = 319523;

	t53 = (x213<=((x214<=x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -90453;
	uint64_t x218 = UINT64_MAX;
	int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;

	t54 = (x217<=((x218<=x219)==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 26181996;
	uint32_t x222 = 3878836U;
	int64_t x223 = INT64_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -1938536;

	t55 = (x221<=((x222<=x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	static int64_t x227 = INT64_MIN;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = 45346567;

	t56 = (x225<=((x226<=x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = 13LL;
	int64_t x232 = -783LL;

	t57 = (x229<=((x230<=x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = -1805LL;
	int16_t x236 = INT16_MIN;

	t58 = (x233<=((x234<=x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = INT64_MAX;
	static volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 406;

	t59 = (x237<=((x238<=x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MAX;
	volatile int64_t x242 = 1544LL;
	volatile uint64_t x243 = UINT64_MAX;
	int64_t x244 = 19594702556821951LL;
	volatile int32_t t60 = -19028;

	t60 = (x241<=((x242<=x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	static int64_t x246 = INT64_MAX;
	int16_t x247 = INT16_MAX;
	static int32_t x248 = INT32_MIN;

	t61 = (x245<=((x246<=x247)==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x249 = -5715554;
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t62 = -74;

	t62 = (x249<=((x250<=x251)==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = UINT32_MAX;
	int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MIN;
	uint16_t x256 = 1U;
	int32_t t63 = 15;

	t63 = (x253<=((x254<=x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 2U;
	uint8_t x258 = 1U;
	int32_t x260 = 804068;
	int32_t t64 = -139046;

	t64 = (x257<=((x258<=x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = 0;
	int32_t x263 = INT32_MAX;
	int64_t x264 = -97105LL;

	t65 = (x261<=((x262<=x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = 4429U;
	static uint32_t x266 = 86135U;
	uint64_t x267 = 990LLU;
	int8_t x268 = INT8_MIN;
	int32_t t66 = -2755;

	t66 = (x265<=((x266<=x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int64_t x271 = INT64_MIN;
	volatile int32_t t67 = -4;

	t67 = (x269<=((x270<=x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 6060911LLU;
	static int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MIN;
	static int32_t x276 = INT32_MAX;
	volatile int32_t t68 = 2;

	t68 = (x273<=((x274<=x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	uint32_t x278 = 221377U;
	int16_t x279 = 60;
	volatile int8_t x280 = INT8_MIN;
	static int32_t t69 = 342958;

	t69 = (x277<=((x278<=x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint32_t x282 = 327450563U;
	int16_t x284 = -1;
	volatile int32_t t70 = 261674090;

	t70 = (x281<=((x282<=x283)==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = -15;

	t71 = (x285<=((x286<=x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x289 = 33556196461LLU;
	int8_t x290 = INT8_MAX;
	static volatile int16_t x292 = INT16_MAX;
	static int32_t t72 = 40;

	t72 = (x289<=((x290<=x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = UINT64_MAX;
	uint32_t x294 = 5U;
	static int8_t x295 = -1;
	int32_t x296 = -276279;
	volatile int32_t t73 = -4;

	t73 = (x293<=((x294<=x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 17155LLU;
	int32_t x298 = INT32_MAX;
	volatile int16_t x299 = -36;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = 53;

	t74 = (x297<=((x298<=x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	int32_t x302 = INT32_MIN;
	int64_t x303 = -131199789LL;
	int8_t x304 = INT8_MAX;

	t75 = (x301<=((x302<=x303)==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	uint64_t x306 = UINT64_MAX;
	volatile uint64_t x307 = 49795128LLU;
	int64_t x308 = INT64_MAX;
	volatile int32_t t76 = -372538595;

	t76 = (x305<=((x306<=x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MIN;
	static int16_t x310 = INT16_MIN;
	uint8_t x311 = 27U;
	static volatile int64_t x312 = -4050875999LL;

	t77 = (x309<=((x310<=x311)==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 213U;
	static volatile uint64_t x315 = UINT64_MAX;
	static int32_t t78 = 523;

	t78 = (x313<=((x314<=x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	int64_t x319 = -25112LL;

	t79 = (x317<=((x318<=x319)==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MIN;
	uint64_t x322 = 23LLU;
	static int32_t x323 = INT32_MAX;
	int16_t x324 = -1;

	t80 = (x321<=((x322<=x323)==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;

	t81 = (x325<=((x326<=x327)==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 1613U;
	static int32_t x330 = INT32_MIN;
	static int64_t x331 = INT64_MIN;
	static volatile int32_t t82 = 218033;

	t82 = (x329<=((x330<=x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 903;
	int32_t x334 = -1;
	static int8_t x335 = INT8_MIN;
	static volatile uint16_t x336 = UINT16_MAX;
	volatile int32_t t83 = -445;

	t83 = (x333<=((x334<=x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	volatile int64_t x339 = -1LL;
	uint8_t x340 = 101U;

	t84 = (x337<=((x338<=x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 1;
	int16_t x342 = INT16_MAX;
	int8_t x343 = -1;
	int32_t x344 = INT32_MAX;
	int32_t t85 = 120;

	t85 = (x341<=((x342<=x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 52U;
	uint32_t x346 = 23U;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t t86 = 21;

	t86 = (x345<=((x346<=x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	uint64_t x350 = 988666945LLU;
	static int64_t x351 = -27705012LL;
	uint16_t x352 = 22859U;

	t87 = (x349<=((x350<=x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = 3660812LL;
	static int32_t x355 = INT32_MIN;
	int32_t x356 = -1;
	int32_t t88 = 209223;

	t88 = (x353<=((x354<=x355)==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 18502;
	volatile int8_t x359 = -1;
	uint32_t x360 = 57977U;
	int32_t t89 = -89831;

	t89 = (x357<=((x358<=x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	int8_t x362 = -3;
	int64_t x363 = INT64_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t90 = -15838;

	t90 = (x361<=((x362<=x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MAX;
	static volatile int32_t x368 = INT32_MIN;
	int32_t t91 = -149462;

	t91 = (x365<=((x366<=x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = UINT32_MAX;
	volatile uint32_t x370 = UINT32_MAX;
	int8_t x371 = INT8_MIN;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = -21434;

	t92 = (x369<=((x370<=x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 35608LLU;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = UINT16_MAX;
	static int8_t x376 = INT8_MIN;
	static volatile int32_t t93 = -126414212;

	t93 = (x373<=((x374<=x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = -2056;

	t94 = (x377<=((x378<=x379)==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MIN;
	int8_t x382 = -6;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = 3909;
	int32_t t95 = 17;

	t95 = (x381<=((x382<=x383)==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = INT32_MIN;
	uint8_t x388 = 82U;

	t96 = (x385<=((x386<=x387)==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MIN;
	int32_t x390 = INT32_MAX;
	uint16_t x391 = 735U;
	int16_t x392 = -604;
	volatile int32_t t97 = 614328;

	t97 = (x389<=((x390<=x391)==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 152175811LLU;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = UINT8_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = -2133690;

	t98 = (x393<=((x394<=x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	uint16_t x398 = 4196U;
	static int8_t x400 = 4;
	volatile int32_t t99 = 80954;

	t99 = (x397<=((x398<=x399)==x400));

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

