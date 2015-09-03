#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x12 = 2080506LLU;
int64_t t5 = 652686092LL;
int64_t x26 = INT64_MIN;
volatile int32_t t7 = 944302185;
uint8_t x34 = 26U;
int64_t x39 = -1LL;
volatile int32_t t9 = 27;
static uint8_t x41 = 2U;
int64_t x42 = INT64_MAX;
volatile int8_t x52 = INT8_MIN;
static volatile uint8_t x53 = 6U;
volatile int64_t x55 = INT64_MIN;
int32_t x75 = INT32_MAX;
volatile uint8_t x92 = 0U;
static volatile int32_t x99 = 5034;
int64_t x101 = INT64_MIN;
static volatile int64_t t25 = -43LL;
uint32_t x106 = 37U;
static volatile uint16_t x109 = UINT16_MAX;
uint64_t x110 = UINT64_MAX;
volatile int32_t t28 = -1;
int64_t x117 = 232796344567LL;
volatile uint32_t x118 = 11539520U;
int8_t x121 = 11;
int32_t x123 = INT32_MAX;
static uint32_t x124 = UINT32_MAX;
static uint16_t x128 = UINT16_MAX;
int16_t x131 = INT16_MIN;
int32_t x135 = INT32_MAX;
int64_t x137 = INT64_MAX;
volatile int64_t t34 = -35634LL;
static int8_t x144 = 55;
volatile int64_t x146 = -1LL;
static int64_t x148 = INT64_MIN;
volatile uint64_t x166 = 61761649220LLU;
static int64_t x170 = INT64_MIN;
static int32_t x171 = -21;
int16_t x176 = INT16_MIN;
int8_t x183 = INT8_MIN;
static volatile int32_t t45 = 1;
int32_t x186 = 22786090;
volatile int64_t x189 = INT64_MAX;
uint16_t x191 = 3895U;
int64_t x192 = -1LL;
volatile int64_t x199 = INT64_MIN;
uint32_t x203 = 6401U;
int32_t x207 = INT32_MAX;
volatile int32_t t51 = -181253;
volatile int32_t x215 = INT32_MIN;
int64_t x216 = -1LL;
uint8_t x217 = 69U;
int32_t x220 = 210;
static int32_t x221 = -1;
int32_t x223 = INT32_MAX;
int8_t x232 = 59;
volatile int32_t t57 = -5657;
int64_t x244 = 2547LL;
int64_t t60 = 399300824LL;
int64_t x246 = INT64_MIN;
volatile int32_t t61 = -16665888;
volatile int16_t x251 = INT16_MIN;
static uint16_t x256 = 646U;
int8_t x259 = -1;
static volatile uint64_t x264 = 1131291607757397LLU;
static int32_t x275 = INT32_MIN;
static volatile uint8_t x292 = UINT8_MAX;
int64_t t72 = -18657LL;
int64_t x296 = -77938011623080LL;
uint64_t x300 = UINT64_MAX;
int16_t x306 = -14155;
uint8_t x307 = UINT8_MAX;
static int64_t x310 = INT64_MIN;
static uint16_t x313 = 13210U;
static int8_t x319 = 1;
int16_t x323 = -14939;
uint32_t x329 = UINT32_MAX;
static volatile int8_t x334 = -1;
int16_t x337 = INT16_MIN;
volatile int16_t x339 = -5;
uint64_t x340 = 74450740LLU;
uint8_t x344 = 1U;
uint64_t x346 = 113LLU;
uint8_t x350 = 0U;
volatile int32_t t87 = 40593;
static volatile int64_t x354 = -1LL;
int32_t t88 = 54;
int8_t x357 = -3;
uint64_t x365 = UINT64_MAX;
uint8_t x368 = 1U;
volatile uint64_t t91 = 15LLU;
static int64_t x371 = -892339740628LL;
uint64_t x372 = 316469831353LLU;
int64_t t92 = 877540452464544808LL;
int16_t x373 = INT16_MIN;
static int32_t t93 = -715991;
int32_t x378 = 27326393;
int64_t x380 = INT64_MIN;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int8_t x2 = -1;
	int16_t x3 = INT16_MAX;
	static int16_t x4 = 5;
	int32_t t0 = -6;

	t0 = (x1*((x2==x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 31155432U;
	volatile int16_t x6 = -53;
	int16_t x7 = -730;
	int8_t x8 = -1;
	static volatile uint32_t t1 = 151U;

	t1 = (x5*((x6==x7)==x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	static uint32_t x10 = UINT32_MAX;
	static volatile int64_t x11 = INT64_MIN;
	volatile int32_t t2 = 1;

	t2 = (x9*((x10==x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	uint16_t x14 = 7U;
	uint16_t x15 = UINT16_MAX;
	static uint8_t x16 = UINT8_MAX;
	volatile int64_t t3 = 23526736292986951LL;

	t3 = (x13*((x14==x15)==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint32_t x18 = 16U;
	int8_t x19 = -1;
	int32_t x20 = -1;
	int32_t t4 = 0;

	t4 = (x17*((x18==x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -351511558LL;
	static uint8_t x22 = 24U;
	volatile int16_t x23 = -1;
	static int32_t x24 = -4808;

	t5 = (x21*((x22==x23)==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -28054417;

	t6 = (x25*((x26==x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = -1;
	volatile int16_t x31 = 1;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29*((x30==x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 431248164633281LLU;
	volatile int32_t x35 = INT32_MAX;
	int32_t x36 = -1;
	volatile uint64_t t8 = 2473111LLU;

	t8 = (x33*((x34==x35)==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 11U;
	volatile int32_t x38 = -1;
	int8_t x40 = INT8_MIN;

	t9 = (x37*((x38==x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = 0;

	t10 = (x41*((x42==x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	int32_t x46 = 237820813;
	int16_t x47 = -1;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -241917855;

	t11 = (x45*((x46==x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	static int32_t x50 = -199;
	static volatile uint32_t x51 = UINT32_MAX;
	volatile int32_t t12 = 246536;

	t12 = (x49*((x50==x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -313613891052853994LL;
	volatile uint64_t x56 = 51LLU;
	static int32_t t13 = -67;

	t13 = (x53*((x54==x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = -13;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = -1;
	volatile uint64_t t14 = 495LLU;

	t14 = (x57*((x58==x59)==x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 220;
	int32_t x62 = 207;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = -25760;
	volatile int32_t t15 = 77209375;

	t15 = (x61*((x62==x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 0;
	uint8_t x66 = 6U;
	int32_t x67 = 894511;
	int64_t x68 = -30359LL;
	static int32_t t16 = 6880066;

	t16 = (x65*((x66==x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	int32_t x70 = -148089;
	int32_t x71 = 90547;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 2663;

	t17 = (x69*((x70==x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int32_t x74 = INT32_MIN;
	uint16_t x76 = 2U;
	volatile int32_t t18 = 941810;

	t18 = (x73*((x74==x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 2852U;
	int64_t x78 = INT64_MIN;
	volatile int64_t x79 = -2046LL;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 994528;

	t19 = (x77*((x78==x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int64_t x82 = -1LL;
	static int64_t x83 = INT64_MAX;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -477147;

	t20 = (x81*((x82==x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int32_t x86 = -1;
	int64_t x87 = -235389689763883LL;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = 0;

	t21 = (x85*((x86==x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = 21701027LL;
	int64_t x91 = INT64_MAX;
	volatile int32_t t22 = INT32_MIN;

	t22 = (x89*((x90==x91)==x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 514137225LLU;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -1;
	int32_t x96 = INT32_MIN;
	uint64_t t23 = 117243028739LLU;

	t23 = (x93*((x94==x95)==x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	uint32_t x100 = UINT32_MAX;
	static int64_t t24 = -14315181LL;

	t24 = (x97*((x98==x99)==x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 0;
	volatile int16_t x103 = 1631;
	int8_t x104 = INT8_MAX;

	t25 = (x101*((x102==x103)==x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x105 = -4092801671630736658LL;
	uint16_t x107 = 359U;
	int32_t x108 = -1;
	int64_t t26 = -2374242319798LL;

	t26 = (x105*((x106==x107)==x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x111 = INT32_MIN;
	static int64_t x112 = INT64_MAX;
	int32_t t27 = -368800715;

	t27 = (x109*((x110==x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 17U;
	volatile int64_t x114 = INT64_MIN;
	uint64_t x115 = UINT64_MAX;
	static int64_t x116 = -1LL;

	t28 = (x113*((x114==x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x119 = -562954LL;
	uint8_t x120 = 11U;
	int64_t t29 = 1057912958238249LL;

	t29 = (x117*((x118==x119)==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	volatile int32_t t30 = 180;

	t30 = (x121*((x122==x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -1;
	volatile uint32_t x126 = 2724910U;
	volatile int8_t x127 = INT8_MAX;
	static volatile int32_t t31 = 1326;

	t31 = (x125*((x126==x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = UINT16_MAX;
	int16_t x130 = -1;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = -912;

	t32 = (x129*((x130==x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = -1;
	int8_t x136 = INT8_MIN;
	int32_t t33 = -6064;

	t33 = (x133*((x134==x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = 1163U;
	int16_t x139 = 1;
	static uint8_t x140 = UINT8_MAX;

	t34 = (x137*((x138==x139)==x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int8_t x142 = -1;
	int32_t x143 = -1;
	volatile uint64_t t35 = 6LLU;

	t35 = (x141*((x142==x143)==x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint32_t x147 = UINT32_MAX;
	volatile int32_t t36 = -107;

	t36 = (x145*((x146==x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = 0;
	uint64_t x150 = 225887518LLU;
	int64_t x151 = 16760946152LL;
	volatile int32_t x152 = INT32_MAX;
	volatile int32_t t37 = 258132;

	t37 = (x149*((x150==x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	volatile int8_t x154 = INT8_MAX;
	int32_t x155 = INT32_MAX;
	int8_t x156 = -1;
	int64_t t38 = 51155979099191LL;

	t38 = (x153*((x154==x155)==x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	static uint64_t x158 = 0LLU;
	static int16_t x159 = -3;
	int32_t x160 = 2;
	uint32_t t39 = 7173U;

	t39 = (x157*((x158==x159)==x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -9185;
	int32_t x162 = INT32_MAX;
	int32_t x163 = INT32_MAX;
	volatile int16_t x164 = -91;
	int32_t t40 = 31379;

	t40 = (x161*((x162==x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -20LL;
	int32_t x167 = INT32_MAX;
	uint16_t x168 = 5979U;
	int64_t t41 = -519LL;

	t41 = (x165*((x166==x167)==x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile uint32_t x172 = 358970U;
	volatile int64_t t42 = -560762337323658635LL;

	t42 = (x169*((x170==x171)==x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 80U;
	int32_t x174 = -1;
	uint32_t x175 = 493U;
	int32_t t43 = 2;

	t43 = (x173*((x174==x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = 5;
	int16_t x179 = -9598;
	uint32_t x180 = 1275196257U;
	volatile int32_t t44 = 6;

	t44 = (x177*((x178==x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 8;
	static int32_t x182 = -1;
	int32_t x184 = 30;

	t45 = (x181*((x182==x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	volatile int64_t x187 = INT64_MIN;
	static uint16_t x188 = 213U;
	volatile int32_t t46 = -791;

	t46 = (x185*((x186==x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x190 = 2374526LLU;
	int64_t t47 = 20178189914LL;

	t47 = (x189*((x190==x191)==x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = -1LL;
	int32_t x194 = -1;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = INT16_MIN;
	int64_t t48 = 138LL;

	t48 = (x193*((x194==x195)==x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 1U;
	int16_t x198 = INT16_MIN;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 34;

	t49 = (x197*((x198==x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static volatile int16_t x202 = INT16_MIN;
	volatile uint8_t x204 = UINT8_MAX;
	static uint32_t t50 = 15450631U;

	t50 = (x201*((x202==x203)==x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 3U;
	int64_t x206 = INT64_MAX;
	uint32_t x208 = 1790689U;

	t51 = (x205*((x206==x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	int64_t x210 = -1LL;
	volatile uint64_t x211 = 1338900601501830950LLU;
	int32_t x212 = -1044961181;
	volatile int32_t t52 = -79313;

	t52 = (x209*((x210==x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 2U;
	volatile int16_t x214 = -1;
	int32_t t53 = -2;

	t53 = (x213*((x214==x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -1;
	int32_t x219 = 2052405;
	volatile int32_t t54 = -574;

	t54 = (x217*((x218==x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = -1;
	uint64_t x224 = 3651785235275396LLU;
	int32_t t55 = -5;

	t55 = (x221*((x222==x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	volatile int32_t x226 = -1;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	int32_t t56 = 14;

	t56 = (x225*((x226==x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = -307;
	uint8_t x231 = 1U;

	t57 = (x229*((x230==x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 245268023647945196LL;
	int32_t x234 = INT32_MIN;
	static int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	int64_t t58 = 3011LL;

	t58 = (x233*((x234==x235)==x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 609594612617371917LL;
	volatile uint64_t x238 = 3261479491170454LLU;
	uint64_t x239 = UINT64_MAX;
	uint32_t x240 = UINT32_MAX;
	int64_t t59 = -1566901591813LL;

	t59 = (x237*((x238==x239)==x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	static uint8_t x242 = UINT8_MAX;
	static int32_t x243 = -1;

	t60 = (x241*((x242==x243)==x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	static uint8_t x247 = UINT8_MAX;
	int8_t x248 = INT8_MIN;

	t61 = (x245*((x246==x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	volatile int16_t x250 = INT16_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t62 = -199;

	t62 = (x249*((x250==x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	int16_t x254 = -1;
	static int32_t x255 = 13274;
	volatile int32_t t63 = -50363;

	t63 = (x253*((x254==x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	static volatile uint8_t x260 = 10U;
	volatile int32_t t64 = -21;

	t64 = (x257*((x258==x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x261 = UINT64_MAX;
	volatile int64_t x262 = -1688299556576938150LL;
	int32_t x263 = INT32_MAX;
	uint64_t t65 = 97813542762890LLU;

	t65 = (x261*((x262==x263)==x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = 226U;
	uint16_t x266 = 63U;
	uint64_t x267 = 3677909700251637LLU;
	int32_t x268 = -374;
	volatile int32_t t66 = 373226;

	t66 = (x265*((x266==x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	static int64_t x270 = INT64_MIN;
	int16_t x271 = -24;
	int8_t x272 = 31;
	volatile int32_t t67 = 3456052;

	t67 = (x269*((x270==x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x276 = -1014;
	int32_t t68 = -36;

	t68 = (x273*((x274==x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	uint32_t x278 = 2022851790U;
	int32_t x279 = INT32_MAX;
	static volatile int16_t x280 = INT16_MIN;
	uint64_t t69 = 29LLU;

	t69 = (x277*((x278==x279)==x280));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 6994U;
	static uint8_t x282 = 25U;
	uint16_t x283 = UINT16_MAX;
	uint8_t x284 = 10U;
	int32_t t70 = 1095343;

	t70 = (x281*((x282==x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile uint8_t x286 = UINT8_MAX;
	int8_t x287 = INT8_MIN;
	int16_t x288 = 22;
	int32_t t71 = -77013634;

	t71 = (x285*((x286==x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -16444605106334335LL;
	static volatile int8_t x290 = -1;
	volatile uint16_t x291 = 15513U;

	t72 = (x289*((x290==x291)==x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = -42451;
	static int32_t x295 = 380;
	volatile uint32_t t73 = 1073276450U;

	t73 = (x293*((x294==x295)==x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 1U;
	static int16_t x298 = -142;
	int8_t x299 = INT8_MAX;
	int32_t t74 = 127758503;

	t74 = (x297*((x298==x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static uint64_t x302 = 6970359LLU;
	volatile int32_t x303 = INT32_MIN;
	int8_t x304 = -33;
	static volatile int32_t t75 = -904;

	t75 = (x301*((x302==x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static uint8_t x308 = 0U;
	volatile int32_t t76 = INT32_MIN;

	t76 = (x305*((x306==x307)==x308));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 9;
	int64_t x311 = 236619298982LL;
	int16_t x312 = -1;
	static volatile int32_t t77 = -1453;

	t77 = (x309*((x310==x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	int64_t x315 = -175878058462LL;
	volatile int64_t x316 = -1LL;
	int32_t t78 = -3612;

	t78 = (x313*((x314==x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	static int32_t x320 = INT32_MIN;
	int32_t t79 = 6;

	t79 = (x317*((x318==x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 20239394LLU;
	int16_t x322 = -1;
	static volatile uint64_t x324 = UINT64_MAX;
	volatile uint64_t t80 = 3839186LLU;

	t80 = (x321*((x322==x323)==x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 839LLU;
	static int16_t x326 = INT16_MIN;
	static uint8_t x327 = 4U;
	int64_t x328 = INT64_MIN;
	volatile uint64_t t81 = 8933407366857LLU;

	t81 = (x325*((x326==x327)==x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x330 = INT8_MIN;
	uint16_t x331 = 7U;
	int64_t x332 = -3505102970120LL;
	volatile uint32_t t82 = 0U;

	t82 = (x329*((x330==x331)==x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	volatile int32_t x335 = INT32_MAX;
	static int64_t x336 = -211310633LL;
	volatile int32_t t83 = -4037995;

	t83 = (x333*((x334==x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x338 = -1LL;
	volatile int32_t t84 = -24018;

	t84 = (x337*((x338==x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 22273U;
	int16_t x342 = -1;
	volatile int16_t x343 = INT16_MIN;
	int32_t t85 = 226;

	t85 = (x341*((x342==x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 186955LL;
	int8_t x347 = 0;
	static volatile uint16_t x348 = 18U;
	int64_t t86 = -30638025055878LL;

	t86 = (x345*((x346==x347)==x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -1;
	int16_t x351 = -1;
	volatile int32_t x352 = INT32_MIN;

	t87 = (x349*((x350==x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 1U;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = 23U;

	t88 = (x353*((x354==x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x358 = 0;
	static volatile int32_t x359 = -1;
	int8_t x360 = INT8_MAX;
	int32_t t89 = -5131078;

	t89 = (x357*((x358==x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 26813U;
	volatile int16_t x362 = 11;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	volatile uint32_t t90 = 44778449U;

	t90 = (x361*((x362==x363)==x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x366 = 8U;
	int16_t x367 = -1;

	t91 = (x365*((x366==x367)==x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -306207879385LL;
	static int8_t x370 = INT8_MIN;

	t92 = (x369*((x370==x371)==x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = 1658825584LLU;
	int32_t x375 = -1;
	int8_t x376 = -1;

	t93 = (x373*((x374==x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 0U;
	uint32_t x379 = 466U;
	int32_t t94 = 0;

	t94 = (x377*((x378==x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 103;
	int8_t x382 = INT8_MIN;
	static int64_t x383 = -1LL;
	int64_t x384 = 430013LL;
	volatile int32_t t95 = 19;

	t95 = (x381*((x382==x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	volatile uint16_t x386 = 15U;
	volatile int8_t x387 = -1;
	uint64_t x388 = 1168130741049LLU;
	static volatile int32_t t96 = -2;

	t96 = (x385*((x386==x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int64_t x390 = INT64_MIN;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = 48U;
	volatile int64_t t97 = 49340LL;

	t97 = (x389*((x390==x391)==x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	int32_t x394 = -7;
	static uint8_t x395 = 9U;
	static int64_t x396 = -1LL;
	int64_t t98 = -1803112429817840LL;

	t98 = (x393*((x394==x395)==x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 0U;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	volatile uint32_t t99 = 544429899U;

	t99 = (x397*((x398==x399)==x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

