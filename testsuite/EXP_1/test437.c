#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -25;
volatile int32_t t5 = -16666290;
volatile int32_t t6 = 0;
static uint8_t x37 = 38U;
volatile uint8_t x40 = 0U;
volatile int32_t t7 = 1889353;
int32_t x61 = 2150;
volatile int32_t t14 = -62049;
int32_t x72 = INT32_MIN;
int64_t x86 = -11286002580882LL;
int64_t x89 = -131618578395801LL;
volatile int16_t x90 = INT16_MIN;
int64_t x95 = INT64_MAX;
int32_t t20 = 1464761;
int8_t x102 = -5;
volatile uint64_t x103 = 2928LLU;
int64_t x107 = 380LL;
int32_t x108 = 0;
int32_t x113 = INT32_MAX;
volatile int32_t t25 = -100234;
int32_t x128 = 165159;
static volatile int32_t t27 = 29486;
int16_t x132 = INT16_MAX;
static int32_t t28 = 3647;
int32_t x133 = -1;
int64_t x143 = INT64_MAX;
static uint16_t x149 = 674U;
int8_t x159 = INT8_MIN;
int64_t x180 = 219761376LL;
int8_t x189 = 4;
static int16_t x201 = INT16_MIN;
static uint16_t x204 = 1U;
int8_t x206 = INT8_MAX;
int8_t x209 = -1;
int16_t x211 = INT16_MIN;
volatile int32_t t45 = -27852;
volatile int32_t t46 = -1;
int16_t x219 = 206;
static uint64_t x240 = UINT64_MAX;
uint64_t x248 = 6485019LLU;
int64_t x249 = 590LL;
uint16_t x260 = 0U;
volatile int8_t x261 = -28;
int32_t t56 = 90144;
volatile int16_t x290 = -3158;
uint64_t x291 = 8LLU;
volatile int32_t x296 = -1;
static volatile int32_t t60 = -73254360;
int64_t x308 = INT64_MAX;
uint16_t x312 = 0U;
int32_t t64 = -2056;
static uint64_t x326 = UINT64_MAX;
int32_t x327 = INT32_MIN;
static volatile int8_t x328 = 13;
static int16_t x331 = -7505;
volatile int8_t x341 = INT8_MAX;
volatile int8_t x343 = -10;
int32_t x345 = INT32_MAX;
volatile int32_t t72 = 9381;
uint32_t x369 = 504U;
int64_t x372 = -13506179893835180LL;
volatile int32_t x379 = -158332;
volatile int32_t x383 = -1;
volatile int32_t t78 = -16966;
int32_t t79 = 1;
volatile uint8_t x398 = 1U;
volatile int64_t x403 = -55712410LL;
volatile uint8_t x404 = 4U;
static int64_t x436 = -1LL;
int8_t x439 = 32;
static int16_t x443 = INT16_MAX;
int16_t x447 = INT16_MIN;
int32_t x451 = 370448271;
volatile int32_t t87 = -467559;
int8_t x457 = -39;
uint32_t x458 = UINT32_MAX;
int32_t x476 = INT32_MIN;
int32_t x496 = INT32_MAX;
volatile int32_t t94 = 0;
int32_t t95 = -20767;
volatile int8_t x512 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 13U;
	static int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = 16;

	t0 = (((x1*x2)==x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 1859074939631002332LLU;
	int8_t x7 = -1;
	volatile uint16_t x8 = 61U;
	static int32_t t1 = -2;

	t1 = (((x5*x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = 1U;
	int16_t x11 = -3;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -2318036;

	t2 = (((x9*x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static uint8_t x14 = 3U;
	int64_t x15 = INT64_MIN;
	int16_t x16 = -1;
	static volatile int32_t t3 = -43;

	t3 = (((x13*x14)==x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = -28;
	uint16_t x23 = UINT16_MAX;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = 1;

	t4 = (((x21*x22)==x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint64_t x26 = 106141LLU;
	volatile int8_t x27 = 0;
	uint16_t x28 = 132U;

	t5 = (((x25*x26)==x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	static volatile int16_t x34 = 0;
	int8_t x35 = 19;
	int16_t x36 = -1;

	t6 = (((x33*x34)==x35)==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MAX;

	t7 = (((x37*x38)==x39)==x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 97111443765LLU;
	int8_t x42 = INT8_MIN;
	static int8_t x43 = -1;
	int16_t x44 = -1;
	static volatile int32_t t8 = 1;

	t8 = (((x41*x42)==x43)==x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x45 = UINT32_MAX;
	static int32_t x46 = INT32_MIN;
	int16_t x47 = 3;
	volatile int32_t x48 = INT32_MIN;
	static volatile int32_t t9 = -809166038;

	t9 = (((x45*x46)==x47)==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x50 = 118U;
	static uint8_t x51 = UINT8_MAX;
	int16_t x52 = INT16_MIN;
	static int32_t t10 = -95400828;

	t10 = (((x49*x50)==x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 45311LLU;
	int16_t x54 = -1;
	static int16_t x55 = INT16_MIN;
	volatile uint8_t x56 = 0U;
	volatile int32_t t11 = 2072792;

	t11 = (((x53*x54)==x55)==x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 428;
	static int16_t x58 = -208;
	volatile uint16_t x59 = 23U;
	uint16_t x60 = 88U;
	volatile int32_t t12 = -1;

	t12 = (((x57*x58)==x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = -1;
	uint16_t x63 = 27U;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int32_t t13 = 27;

	t13 = (((x61*x62)==x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	static int8_t x66 = INT8_MIN;
	static uint32_t x67 = 96U;
	int8_t x68 = INT8_MIN;

	t14 = (((x65*x66)==x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = INT8_MIN;
	volatile int32_t t15 = -42445042;

	t15 = (((x69*x70)==x71)==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	volatile int32_t x79 = -7;
	uint8_t x80 = 111U;
	int32_t t16 = -696680;

	t16 = (((x77*x78)==x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 2132139788275LLU;
	int64_t x83 = INT64_MIN;
	int16_t x84 = -4856;
	int32_t t17 = -45257067;

	t17 = (((x81*x82)==x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	static uint64_t x87 = 1LLU;
	int8_t x88 = INT8_MIN;
	volatile int32_t t18 = 61;

	t18 = (((x85*x86)==x87)==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x91 = UINT32_MAX;
	static volatile int8_t x92 = INT8_MAX;
	static volatile int32_t t19 = 11;

	t19 = (((x89*x90)==x91)==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x93 = UINT64_MAX;
	volatile uint64_t x94 = 281313274271009401LLU;
	static volatile int32_t x96 = -169;

	t20 = (((x93*x94)==x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 15;
	int16_t x98 = 14;
	uint16_t x99 = UINT16_MAX;
	int64_t x100 = INT64_MAX;
	int32_t t21 = -3;

	t21 = (((x97*x98)==x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	uint64_t x104 = UINT64_MAX;
	int32_t t22 = 27935232;

	t22 = (((x101*x102)==x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = -1LL;
	int32_t x106 = -1;
	static int32_t t23 = 1737283;

	t23 = (((x105*x106)==x107)==x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -87;
	uint8_t x110 = 1U;
	static uint64_t x111 = UINT64_MAX;
	int64_t x112 = 9904LL;
	int32_t t24 = -26701;

	t24 = (((x109*x110)==x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x114 = -1;
	int64_t x115 = INT64_MAX;
	int32_t x116 = 416;

	t25 = (((x113*x114)==x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 27U;
	int32_t x118 = -1;
	static volatile int32_t x119 = INT32_MAX;
	static int64_t x120 = 51963904478LL;
	volatile int32_t t26 = 1;

	t26 = (((x117*x118)==x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 400637335652LLU;
	volatile int32_t x126 = INT32_MIN;
	uint64_t x127 = UINT64_MAX;

	t27 = (((x125*x126)==x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	volatile int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MAX;

	t28 = (((x129*x130)==x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x134 = -1;
	int8_t x135 = -1;
	static uint16_t x136 = 877U;
	int32_t t29 = -2;

	t29 = (((x133*x134)==x135)==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -3LL;
	static int16_t x142 = -47;
	int16_t x144 = -409;
	static volatile int32_t t30 = -256;

	t30 = (((x141*x142)==x143)==x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MAX;
	static int16_t x146 = INT16_MIN;
	static volatile uint64_t x147 = 633LLU;
	int64_t x148 = -1LL;
	static int32_t t31 = -6;

	t31 = (((x145*x146)==x147)==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x150 = -12;
	int32_t x151 = INT32_MAX;
	int32_t x152 = -17;
	volatile int32_t t32 = -4747904;

	t32 = (((x149*x150)==x151)==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = UINT8_MAX;
	int64_t x154 = -1LL;
	int32_t x155 = INT32_MAX;
	static volatile int16_t x156 = -1;
	int32_t t33 = 593;

	t33 = (((x153*x154)==x155)==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x158 = INT32_MIN;
	volatile uint32_t x160 = 753977256U;
	volatile int32_t t34 = 11248535;

	t34 = (((x157*x158)==x159)==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -56380141LL;
	static int8_t x162 = -1;
	int32_t x163 = -1;
	int8_t x164 = INT8_MIN;
	volatile int32_t t35 = -5;

	t35 = (((x161*x162)==x163)==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = 56;
	int8_t x166 = -1;
	int8_t x167 = INT8_MAX;
	uint64_t x168 = UINT64_MAX;
	static int32_t t36 = -483033960;

	t36 = (((x165*x166)==x167)==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MIN;
	int32_t x171 = 3643;
	static uint64_t x172 = 11LLU;
	static volatile int32_t t37 = 6;

	t37 = (((x169*x170)==x171)==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = INT8_MAX;
	static volatile uint8_t x178 = 15U;
	uint8_t x179 = 4U;
	static int32_t t38 = -2;

	t38 = (((x177*x178)==x179)==x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int16_t x182 = -1;
	int64_t x183 = -1LL;
	int64_t x184 = INT64_MAX;
	int32_t t39 = -30128095;

	t39 = (((x181*x182)==x183)==x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 3U;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = 19206U;
	int32_t x188 = INT32_MAX;
	volatile int32_t t40 = 66285322;

	t40 = (((x185*x186)==x187)==x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 2U;
	int32_t t41 = -1763;

	t41 = (((x189*x190)==x191)==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x197 = 5U;
	static uint64_t x198 = 20489875099733235LLU;
	uint8_t x199 = 6U;
	int32_t x200 = INT32_MIN;
	int32_t t42 = -2176;

	t42 = (((x197*x198)==x199)==x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x202 = UINT64_MAX;
	static int64_t x203 = INT64_MIN;
	int32_t t43 = -5605;

	t43 = (((x201*x202)==x203)==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -510;
	static int32_t x207 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	static int32_t t44 = 915884441;

	t44 = (((x205*x206)==x207)==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x210 = 3;
	int16_t x212 = INT16_MIN;

	t45 = (((x209*x210)==x211)==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = INT16_MAX;
	uint64_t x214 = 9151309108LLU;
	int32_t x215 = -1;
	int64_t x216 = -511318564584563392LL;

	t46 = (((x213*x214)==x215)==x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x217 = 246253227LLU;
	int8_t x218 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t47 = 1059694235;

	t47 = (((x217*x218)==x219)==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = -1;
	int16_t x222 = 793;
	int64_t x223 = INT64_MAX;
	uint64_t x224 = UINT64_MAX;
	static int32_t t48 = -7257016;

	t48 = (((x221*x222)==x223)==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x225 = 6U;
	uint8_t x226 = 6U;
	int16_t x227 = -1;
	static int16_t x228 = -438;
	volatile int32_t t49 = -137863996;

	t49 = (((x225*x226)==x227)==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = -1;
	volatile uint64_t x230 = 0LLU;
	uint8_t x231 = 3U;
	static int16_t x232 = -1;
	int32_t t50 = -3821839;

	t50 = (((x229*x230)==x231)==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	int32_t t51 = -25664909;

	t51 = (((x237*x238)==x239)==x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x245 = 0LL;
	volatile uint32_t x246 = 164118U;
	volatile int16_t x247 = INT16_MAX;
	volatile int32_t t52 = 55;

	t52 = (((x245*x246)==x247)==x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x250 = UINT16_MAX;
	static uint16_t x251 = 14U;
	uint64_t x252 = 2550388486418755455LLU;
	static volatile int32_t t53 = 1;

	t53 = (((x249*x250)==x251)==x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = 3;
	int8_t x254 = INT8_MIN;
	uint16_t x255 = UINT16_MAX;
	int8_t x256 = INT8_MIN;
	volatile int32_t t54 = -52832;

	t54 = (((x253*x254)==x255)==x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = -1LL;
	int32_t x258 = INT32_MIN;
	static uint32_t x259 = UINT32_MAX;
	int32_t t55 = 81;

	t55 = (((x257*x258)==x259)==x260);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x262 = -32;
	uint8_t x263 = 101U;
	volatile uint16_t x264 = 1U;

	t56 = (((x261*x262)==x263)==x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = UINT8_MAX;
	uint8_t x266 = 114U;
	int64_t x267 = INT64_MIN;
	int8_t x268 = 29;
	int32_t t57 = -105689;

	t57 = (((x265*x266)==x267)==x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = -5657;
	volatile uint64_t x274 = UINT64_MAX;
	int8_t x275 = INT8_MIN;
	static uint64_t x276 = UINT64_MAX;
	int32_t t58 = -3823;

	t58 = (((x273*x274)==x275)==x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x289 = 795U;
	static uint8_t x292 = 5U;
	int32_t t59 = 73163;

	t59 = (((x289*x290)==x291)==x292);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x293 = UINT8_MAX;
	volatile uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MAX;

	t60 = (((x293*x294)==x295)==x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x298 = -3020923606598LL;
	int8_t x299 = 1;
	int32_t x300 = INT32_MAX;
	volatile int32_t t61 = -41;

	t61 = (((x297*x298)==x299)==x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = 1993;
	static volatile uint32_t x306 = 60U;
	int16_t x307 = INT16_MAX;
	int32_t t62 = -33871;

	t62 = (((x305*x306)==x307)==x308);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x309 = INT32_MAX;
	static int64_t x310 = -1LL;
	volatile uint64_t x311 = UINT64_MAX;
	volatile int32_t t63 = 1705479;

	t63 = (((x309*x310)==x311)==x312);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -473488452875413LL;
	uint64_t x316 = 837698541353737LLU;

	t64 = (((x313*x314)==x315)==x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x317 = -1;
	static volatile int8_t x318 = 1;
	int16_t x319 = 6756;
	int8_t x320 = -8;
	static int32_t t65 = -471;

	t65 = (((x317*x318)==x319)==x320);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x325 = 502U;
	int32_t t66 = -593173;

	t66 = (((x325*x326)==x327)==x328);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x329 = -1;
	int8_t x330 = -2;
	uint8_t x332 = 21U;
	static volatile int32_t t67 = 401;

	t67 = (((x329*x330)==x331)==x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x337 = -1LL;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t68 = 59509357;

	t68 = (((x337*x338)==x339)==x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x342 = INT8_MIN;
	uint32_t x344 = 893494U;
	int32_t t69 = -41288;

	t69 = (((x341*x342)==x343)==x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x346 = -1;
	volatile int64_t x347 = 2287719188659933722LL;
	volatile uint32_t x348 = 236U;
	int32_t t70 = -13611;

	t70 = (((x345*x346)==x347)==x348);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x349 = -12818;
	uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = -1;
	volatile int32_t t71 = -498797461;

	t71 = (((x349*x350)==x351)==x352);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x357 = 3U;
	volatile int32_t x358 = -2556;
	uint32_t x359 = 401012U;
	volatile uint32_t x360 = 1395U;

	t72 = (((x357*x358)==x359)==x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x365 = INT64_MAX;
	uint64_t x366 = UINT64_MAX;
	volatile uint64_t x367 = UINT64_MAX;
	int32_t x368 = 3697535;
	int32_t t73 = 3;

	t73 = (((x365*x366)==x367)==x368);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x370 = 28;
	int16_t x371 = -1;
	volatile int32_t t74 = 132159;

	t74 = (((x369*x370)==x371)==x372);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x373 = -1;
	static volatile uint16_t x374 = 1779U;
	static int16_t x375 = INT16_MAX;
	int16_t x376 = -1;
	static int32_t t75 = 2004;

	t75 = (((x373*x374)==x375)==x376);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	static volatile int64_t x378 = -1LL;
	volatile int32_t x380 = INT32_MAX;
	static volatile int32_t t76 = -11976221;

	t76 = (((x377*x378)==x379)==x380);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x381 = 15LL;
	volatile int16_t x382 = -1;
	volatile uint64_t x384 = 327968689331040303LLU;
	int32_t t77 = 10999;

	t77 = (((x381*x382)==x383)==x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x389 = -1LL;
	volatile int64_t x390 = INT64_MAX;
	static int64_t x391 = INT64_MAX;
	int16_t x392 = INT16_MAX;

	t78 = (((x389*x390)==x391)==x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x393 = UINT32_MAX;
	uint8_t x394 = 0U;
	volatile int8_t x395 = INT8_MAX;
	static int8_t x396 = INT8_MAX;

	t79 = (((x393*x394)==x395)==x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x397 = INT16_MIN;
	int8_t x399 = -1;
	int64_t x400 = -515208030LL;
	volatile int32_t t80 = 228777;

	t80 = (((x397*x398)==x399)==x400);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x401 = -1;
	int16_t x402 = INT16_MAX;
	int32_t t81 = -154034;

	t81 = (((x401*x402)==x403)==x404);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x413 = INT32_MIN;
	volatile int64_t x414 = -1LL;
	uint64_t x415 = 30LLU;
	int64_t x416 = 45648LL;
	volatile int32_t t82 = 34551;

	t82 = (((x413*x414)==x415)==x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x433 = 3U;
	int64_t x434 = -288LL;
	uint32_t x435 = UINT32_MAX;
	static volatile int32_t t83 = -2;

	t83 = (((x433*x434)==x435)==x436);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x437 = 0U;
	static uint32_t x438 = 890037142U;
	static volatile int8_t x440 = INT8_MAX;
	static int32_t t84 = 102816;

	t84 = (((x437*x438)==x439)==x440);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x441 = -1;
	uint64_t x442 = 543978LLU;
	int16_t x444 = INT16_MAX;
	int32_t t85 = -6;

	t85 = (((x441*x442)==x443)==x444);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x445 = -1;
	int8_t x446 = -1;
	volatile int16_t x448 = -1;
	static volatile int32_t t86 = 6703;

	t86 = (((x445*x446)==x447)==x448);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x449 = INT32_MIN;
	static uint32_t x450 = UINT32_MAX;
	volatile int32_t x452 = 0;

	t87 = (((x449*x450)==x451)==x452);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x459 = UINT64_MAX;
	int64_t x460 = INT64_MAX;
	volatile int32_t t88 = 569681;

	t88 = (((x457*x458)==x459)==x460);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x461 = -1;
	int8_t x462 = 6;
	uint32_t x463 = 1958928148U;
	int32_t x464 = 1;
	volatile int32_t t89 = 53370704;

	t89 = (((x461*x462)==x463)==x464);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x469 = 0;
	volatile uint64_t x470 = 227575825LLU;
	int16_t x471 = 4;
	volatile uint16_t x472 = UINT16_MAX;
	volatile int32_t t90 = 155376;

	t90 = (((x469*x470)==x471)==x472);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x473 = 233;
	static int32_t x474 = 30825;
	int16_t x475 = INT16_MIN;
	int32_t t91 = 0;

	t91 = (((x473*x474)==x475)==x476);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x481 = INT32_MIN;
	volatile uint64_t x482 = UINT64_MAX;
	volatile int8_t x483 = -26;
	int32_t x484 = 1507;
	volatile int32_t t92 = -6;

	t92 = (((x481*x482)==x483)==x484);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x485 = 226410LL;
	static int64_t x486 = -53825919489LL;
	volatile int64_t x487 = INT64_MIN;
	uint8_t x488 = 55U;
	volatile int32_t t93 = 0;

	t93 = (((x485*x486)==x487)==x488);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x493 = 3;
	uint8_t x494 = 0U;
	volatile int16_t x495 = -5;

	t94 = (((x493*x494)==x495)==x496);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x497 = -1;
	static int16_t x498 = INT16_MAX;
	volatile int8_t x499 = INT8_MAX;
	int16_t x500 = INT16_MIN;

	t95 = (((x497*x498)==x499)==x500);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x505 = 53U;
	int8_t x506 = 2;
	uint32_t x507 = UINT32_MAX;
	volatile int64_t x508 = 2LL;
	static int32_t t96 = -20672317;

	t96 = (((x505*x506)==x507)==x508);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x509 = -1;
	int16_t x510 = -1;
	static volatile int16_t x511 = INT16_MIN;
	int32_t t97 = -477277;

	t97 = (((x509*x510)==x511)==x512);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x513 = 1U;
	int64_t x514 = -5723LL;
	int64_t x515 = -64691307386LL;
	static volatile int64_t x516 = -97055507LL;
	int32_t t98 = 225338;

	t98 = (((x513*x514)==x515)==x516);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x517 = UINT16_MAX;
	uint8_t x518 = 25U;
	static int32_t x519 = INT32_MAX;
	volatile int16_t x520 = INT16_MIN;
	volatile int32_t t99 = -7;

	t99 = (((x517*x518)==x519)==x520);

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

