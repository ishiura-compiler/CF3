#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = 1097U;
int64_t x16 = INT64_MIN;
static uint32_t t3 = 20109U;
volatile int16_t x22 = INT16_MIN;
uint64_t t4 = 1077466095870LLU;
int64_t x33 = -1LL;
volatile uint64_t x38 = 4225641985649636112LLU;
uint16_t x41 = 332U;
int32_t t9 = 44;
uint64_t x48 = 822204035653230LLU;
volatile int32_t t13 = 0;
volatile int64_t x63 = INT64_MIN;
int64_t x66 = 871448957719390LL;
int16_t x83 = 2;
volatile int32_t t19 = 0;
static int16_t x92 = INT16_MAX;
volatile int32_t x93 = -1;
static volatile uint64_t t23 = 827739762LLU;
static int16_t x105 = -1;
static int8_t x114 = 1;
volatile uint8_t x127 = UINT8_MAX;
volatile int16_t x130 = 10;
int8_t x133 = INT8_MIN;
int16_t x135 = -1;
volatile int32_t t32 = -186307;
int64_t x140 = INT64_MIN;
int32_t x141 = -35;
int64_t x143 = -13LL;
volatile int32_t x144 = -14608477;
int64_t t35 = -107496LL;
int8_t x153 = 0;
volatile int32_t x161 = INT32_MIN;
int8_t x163 = -36;
int64_t x173 = 775232488616760577LL;
int64_t x176 = -393LL;
volatile int32_t t42 = -19570503;
uint32_t x186 = UINT32_MAX;
uint16_t x187 = 9U;
int32_t t44 = -43;
int8_t x193 = -1;
static uint32_t x195 = 1489U;
volatile int32_t t48 = -54;
int32_t t50 = 1760;
static int64_t x217 = INT64_MIN;
static uint64_t x219 = UINT64_MAX;
static int32_t x224 = 209;
int8_t x244 = INT8_MIN;
int32_t x246 = 0;
static int64_t x251 = -1LL;
int32_t x253 = INT32_MIN;
int32_t x258 = INT32_MIN;
int8_t x262 = -1;
uint32_t x264 = UINT32_MAX;
int16_t x269 = INT16_MIN;
static uint16_t x272 = UINT16_MAX;
uint16_t x273 = 213U;
int32_t t66 = 27202800;
uint32_t x277 = 925280606U;
int64_t x278 = -1LL;
static int64_t x280 = 412168029873LL;
int32_t x281 = -15707;
uint16_t x282 = 4317U;
int32_t t70 = 117;
int64_t x294 = 240498417306LL;
int8_t x299 = 2;
volatile int32_t t72 = 0;
volatile int64_t x301 = 414556835491LL;
static uint16_t x304 = 1532U;
int32_t x306 = -1;
volatile uint8_t x307 = 31U;
uint32_t x308 = 47519676U;
static uint8_t x310 = 2U;
int64_t x312 = INT64_MIN;
volatile int32_t t75 = 1;
static uint64_t x321 = 2129198268881707LLU;
volatile int8_t x322 = INT8_MIN;
uint64_t t77 = 5857522166873437470LLU;
int32_t x325 = 3491;
uint16_t x328 = 56U;
volatile int32_t t78 = -584909767;
int64_t x331 = INT64_MAX;
volatile int32_t x337 = -1;
int64_t x349 = -1LL;
int64_t x356 = INT64_MIN;
uint32_t x358 = 813U;
volatile int16_t x359 = -1;
int32_t t88 = 68;
volatile uint32_t x374 = 23423799U;
int8_t x375 = INT8_MIN;
uint64_t x389 = UINT64_MAX;
volatile int16_t x391 = 3613;
static int8_t x397 = INT8_MAX;
static volatile uint16_t x399 = 1U;
volatile uint8_t x402 = UINT8_MAX;
volatile uint32_t t96 = 108U;
int32_t x412 = -1;
volatile int32_t t99 = -63187;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = -126;
	uint8_t x3 = 17U;
	uint16_t x4 = 1U;
	static volatile int32_t t0 = 319;

	t0 = (x1*((x2/x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -161880035346830LL;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 10LLU;
	volatile uint32_t x8 = 6288U;
	int64_t t1 = -1220737509321LL;

	t1 = (x5*((x6/x7)==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	volatile int32_t x10 = INT32_MAX;
	static uint64_t x11 = 15654703656689846LLU;
	uint16_t x12 = 7854U;
	int32_t t2 = -58613707;

	t2 = (x9*((x10/x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = 2859327918303348LLU;
	uint16_t x15 = UINT16_MAX;

	t3 = (x13*((x14/x15)==x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	uint32_t x23 = UINT32_MAX;
	uint8_t x24 = UINT8_MAX;

	t4 = (x21*((x22/x23)==x24));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x25 = 276190408385LLU;
	volatile uint64_t x26 = UINT64_MAX;
	uint64_t x27 = 482802223992917LLU;
	int8_t x28 = 10;
	uint64_t t5 = 150843690LLU;

	t5 = (x25*((x26/x27)==x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = -704;
	uint32_t x30 = 3570287U;
	uint16_t x31 = 31U;
	uint8_t x32 = 20U;
	int32_t t6 = 56535363;

	t6 = (x29*((x30/x31)==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = -122;
	volatile int8_t x35 = INT8_MIN;
	uint32_t x36 = 1227U;
	static int64_t t7 = 24067LL;

	t7 = (x33*((x34/x35)==x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	uint16_t x39 = 23U;
	static uint8_t x40 = 5U;
	volatile int32_t t8 = -13746;

	t8 = (x37*((x38/x39)==x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x42 = 6831;
	volatile int64_t x43 = INT64_MIN;
	uint32_t x44 = 1146439253U;

	t9 = (x41*((x42/x43)==x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 7;
	int16_t x46 = -1;
	static volatile uint64_t x47 = UINT64_MAX;
	volatile int32_t t10 = 4206;

	t10 = (x45*((x46/x47)==x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = INT64_MIN;
	uint16_t x50 = 2U;
	volatile uint64_t x51 = 3LLU;
	volatile uint16_t x52 = UINT16_MAX;
	volatile int64_t t11 = -3749196735008153394LL;

	t11 = (x49*((x50/x51)==x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = INT8_MIN;
	static uint64_t x54 = 1006719170355LLU;
	static int16_t x55 = INT16_MIN;
	static int32_t x56 = 27922;
	int32_t t12 = 207;

	t12 = (x53*((x54/x55)==x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	uint16_t x58 = 11U;
	int32_t x59 = -15159;
	static int8_t x60 = INT8_MIN;

	t13 = (x57*((x58/x59)==x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static uint64_t x62 = 1871LLU;
	int8_t x64 = -1;
	static int32_t t14 = -3;

	t14 = (x61*((x62/x63)==x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x65 = 1U;
	static uint64_t x67 = UINT64_MAX;
	int64_t x68 = INT64_MIN;
	volatile uint32_t t15 = 177574333U;

	t15 = (x65*((x66/x67)==x68));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 173U;
	static uint16_t x70 = 2027U;
	volatile uint32_t x71 = 71124U;
	int32_t x72 = INT32_MIN;
	int32_t t16 = -655920;

	t16 = (x69*((x70/x71)==x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	int64_t x74 = -373LL;
	int16_t x75 = 2992;
	uint64_t x76 = 309290268LLU;
	static uint32_t t17 = 50574U;

	t17 = (x73*((x74/x75)==x76));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -420374799372LL;
	static int16_t x78 = 43;
	int64_t x79 = -1LL;
	volatile uint8_t x80 = 4U;
	static volatile int64_t t18 = -2700LL;

	t18 = (x77*((x78/x79)==x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	volatile int32_t x82 = -1;
	int64_t x84 = INT64_MIN;

	t19 = (x81*((x82/x83)==x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 13461;
	static volatile int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t20 = 30311;

	t20 = (x85*((x86/x87)==x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1787;
	uint16_t x90 = 60U;
	int32_t x91 = INT32_MIN;
	volatile int32_t t21 = -32737184;

	t21 = (x89*((x90/x91)==x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x94 = UINT8_MAX;
	volatile uint8_t x95 = 66U;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t22 = -684187403;

	t22 = (x93*((x94/x95)==x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = -1LL;
	int16_t x100 = -7913;

	t23 = (x97*((x98/x99)==x100));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MIN;
	int64_t x103 = 13LL;
	volatile int16_t x104 = INT16_MAX;
	int32_t t24 = 3491;

	t24 = (x101*((x102/x103)==x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x106 = INT8_MIN;
	static int64_t x107 = -11909708LL;
	static int8_t x108 = 0;
	int32_t t25 = 2;

	t25 = (x105*((x106/x107)==x108));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 11U;
	uint64_t x110 = 337460059341586479LLU;
	uint16_t x111 = UINT16_MAX;
	uint64_t x112 = 37LLU;
	int32_t t26 = -1790;

	t26 = (x109*((x110/x111)==x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 1957728LLU;
	int64_t x115 = INT64_MIN;
	static int32_t x116 = INT32_MIN;
	volatile uint64_t t27 = 15310272049300829LLU;

	t27 = (x113*((x114/x115)==x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -1;
	uint32_t x118 = 245706765U;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = 45LLU;
	int32_t t28 = -25;

	t28 = (x117*((x118/x119)==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MAX;
	int8_t x122 = -1;
	uint64_t x123 = 64429097735LLU;
	int64_t x124 = INT64_MIN;
	int32_t t29 = -312228491;

	t29 = (x121*((x122/x123)==x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile uint64_t t30 = 7281728096434LLU;

	t30 = (x125*((x126/x127)==x128));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	int8_t x131 = INT8_MAX;
	static uint64_t x132 = UINT64_MAX;
	volatile int32_t t31 = 24487;

	t31 = (x129*((x130/x131)==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = 1;
	uint16_t x136 = 3U;

	t32 = (x133*((x134/x135)==x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = UINT64_MAX;
	volatile uint8_t x138 = 35U;
	uint8_t x139 = 8U;
	uint64_t t33 = 86239989751LLU;

	t33 = (x137*((x138/x139)==x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x142 = 4U;
	int32_t t34 = -6922;

	t34 = (x141*((x142/x143)==x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	uint16_t x146 = 29962U;
	volatile int8_t x147 = INT8_MIN;
	uint8_t x148 = 1U;

	t35 = (x145*((x146/x147)==x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	volatile int8_t x150 = INT8_MAX;
	static int32_t x151 = INT32_MAX;
	static uint64_t x152 = 37748772945220906LLU;
	int64_t t36 = -1023469382986157426LL;

	t36 = (x149*((x150/x151)==x152));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x154 = 497283U;
	int64_t x155 = INT64_MIN;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t37 = 6;

	t37 = (x153*((x154/x155)==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = 15914LLU;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t38 = -56468;

	t38 = (x161*((x162/x163)==x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	static uint8_t x166 = 2U;
	int16_t x167 = 1;
	volatile int16_t x168 = -45;
	int32_t t39 = -1436;

	t39 = (x165*((x166/x167)==x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t40 = -332;

	t40 = (x169*((x170/x171)==x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x174 = -12805;
	int32_t x175 = INT32_MIN;
	volatile int64_t t41 = -885027LL;

	t41 = (x173*((x174/x175)==x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = 46089796;
	static uint16_t x178 = UINT16_MAX;
	static volatile int16_t x179 = INT16_MIN;
	volatile int32_t x180 = INT32_MAX;

	t42 = (x177*((x178/x179)==x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = 15585;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t43 = 83479091;

	t43 = (x181*((x182/x183)==x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x185 = INT32_MAX;
	static int8_t x188 = INT8_MAX;

	t44 = (x185*((x186/x187)==x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 1123218792748644686LL;
	int32_t x190 = -1740;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MAX;
	int64_t t45 = 75304168353797LL;

	t45 = (x189*((x190/x191)==x192));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x194 = 6398U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t46 = -257;

	t46 = (x193*((x194/x195)==x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x197 = UINT32_MAX;
	volatile uint64_t x198 = 16082131851366444LLU;
	int8_t x199 = -1;
	int16_t x200 = 371;
	static volatile uint32_t t47 = 0U;

	t47 = (x197*((x198/x199)==x200));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x202 = INT16_MIN;
	volatile int16_t x203 = 57;
	volatile int64_t x204 = INT64_MIN;

	t48 = (x201*((x202/x203)==x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = UINT32_MAX;
	int16_t x206 = -1;
	int8_t x207 = -1;
	int64_t x208 = -1LL;
	volatile uint32_t t49 = 824507U;

	t49 = (x205*((x206/x207)==x208));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1;
	int16_t x210 = 1050;
	volatile uint8_t x211 = UINT8_MAX;
	int64_t x212 = INT64_MIN;

	t50 = (x209*((x210/x211)==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 14534476173LLU;
	volatile int8_t x214 = INT8_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int64_t x216 = -1LL;
	uint64_t t51 = 2722979907931041LLU;

	t51 = (x213*((x214/x215)==x216));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = INT16_MAX;
	uint16_t x220 = 3833U;
	int64_t t52 = 67714556075602715LL;

	t52 = (x217*((x218/x219)==x220));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = 2525097355LLU;
	int32_t t53 = 656;

	t53 = (x221*((x222/x223)==x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = 1;
	uint16_t x226 = 431U;
	uint16_t x227 = UINT16_MAX;
	volatile int8_t x228 = INT8_MIN;
	int32_t t54 = -252261567;

	t54 = (x225*((x226/x227)==x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x229 = 180U;
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = -35098738782633855LL;
	uint32_t x232 = 493690U;
	volatile int32_t t55 = 25969;

	t55 = (x229*((x230/x231)==x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 30U;
	volatile uint32_t x234 = UINT32_MAX;
	static uint64_t x235 = UINT64_MAX;
	static volatile int32_t x236 = INT32_MIN;
	static int32_t t56 = -962;

	t56 = (x233*((x234/x235)==x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 551U;
	volatile uint16_t x238 = 16226U;
	int8_t x239 = INT8_MIN;
	int64_t x240 = 33591347620LL;
	volatile int32_t t57 = 204343;

	t57 = (x237*((x238/x239)==x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 889343313LLU;
	uint8_t x242 = 6U;
	uint8_t x243 = 3U;
	volatile uint64_t t58 = 191LLU;

	t58 = (x241*((x242/x243)==x244));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x245 = UINT8_MAX;
	volatile int8_t x247 = -1;
	uint32_t x248 = 52582862U;
	int32_t t59 = -242;

	t59 = (x245*((x246/x247)==x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -15;
	int8_t x250 = 31;
	int64_t x252 = 19198631338470110LL;
	volatile int32_t t60 = 416;

	t60 = (x249*((x250/x251)==x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MAX;
	int32_t x255 = INT32_MIN;
	int8_t x256 = -1;
	volatile int32_t t61 = 125709298;

	t61 = (x253*((x254/x255)==x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MAX;
	uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 387985970056LLU;
	static volatile int64_t t62 = -12789184122107LL;

	t62 = (x257*((x258/x259)==x260));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = 1;
	int16_t x263 = 4;
	volatile int32_t t63 = 290326;

	t63 = (x261*((x262/x263)==x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 27753237786LLU;
	volatile uint64_t x266 = UINT64_MAX;
	uint8_t x267 = 1U;
	int8_t x268 = -1;
	static uint64_t t64 = 30027627855LLU;

	t64 = (x265*((x266/x267)==x268));

	if (t64 != 27753237786LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = 2;
	uint32_t x271 = 3186983U;
	volatile int32_t t65 = 21;

	t65 = (x269*((x270/x271)==x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x274 = 303996LLU;
	int8_t x275 = INT8_MAX;
	static int64_t x276 = INT64_MIN;

	t66 = (x273*((x274/x275)==x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x279 = -1;
	static uint32_t t67 = 25065970U;

	t67 = (x277*((x278/x279)==x280));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x283 = -1;
	uint8_t x284 = 54U;
	volatile int32_t t68 = 11;

	t68 = (x281*((x282/x283)==x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 15734U;
	volatile int32_t x286 = -1;
	uint32_t x287 = 21813076U;
	int8_t x288 = INT8_MIN;
	int32_t t69 = -3;

	t69 = (x285*((x286/x287)==x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 1;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = UINT64_MAX;

	t70 = (x289*((x290/x291)==x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 76U;
	int32_t x295 = -1;
	uint32_t x296 = 57352U;
	volatile int32_t t71 = -6522;

	t71 = (x293*((x294/x295)==x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x297 = INT8_MIN;
	static volatile uint8_t x298 = 12U;
	uint64_t x300 = UINT64_MAX;

	t72 = (x297*((x298/x299)==x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x302 = 46U;
	uint8_t x303 = 8U;
	volatile int64_t t73 = -169196380LL;

	t73 = (x301*((x302/x303)==x304));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = UINT8_MAX;
	volatile int32_t t74 = -1013629650;

	t74 = (x305*((x306/x307)==x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x309 = -1;
	static uint8_t x311 = UINT8_MAX;

	t75 = (x309*((x310/x311)==x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = 3;
	int64_t x318 = -1LL;
	int32_t x319 = INT32_MAX;
	static volatile uint16_t x320 = 0U;
	static int32_t t76 = 128945409;

	t76 = (x317*((x318/x319)==x320));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x323 = INT32_MIN;
	static int16_t x324 = -1;

	t77 = (x321*((x322/x323)==x324));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x326 = 5492578U;
	int64_t x327 = INT64_MIN;

	t78 = (x325*((x326/x327)==x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = 39950;
	uint64_t x330 = 56763LLU;
	static uint32_t x332 = 58U;
	volatile int32_t t79 = -3808;

	t79 = (x329*((x330/x331)==x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x333 = INT64_MIN;
	static int8_t x334 = 4;
	volatile int64_t x335 = 227908486307398LL;
	uint64_t x336 = 5618347995183385535LLU;
	volatile int64_t t80 = 44434490339305LL;

	t80 = (x333*((x334/x335)==x336));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = -1;
	volatile uint16_t x340 = 1298U;
	static volatile int32_t t81 = -137898;

	t81 = (x337*((x338/x339)==x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MIN;
	uint16_t x342 = 1643U;
	volatile int8_t x343 = 19;
	int64_t x344 = INT64_MIN;
	int32_t t82 = 39262;

	t82 = (x341*((x342/x343)==x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = UINT16_MAX;
	volatile int8_t x346 = 44;
	int32_t x347 = 20550;
	int32_t x348 = INT32_MIN;
	int32_t t83 = 736546063;

	t83 = (x345*((x346/x347)==x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = INT16_MIN;
	int32_t x351 = -1;
	static uint8_t x352 = 6U;
	int64_t t84 = 1236390LL;

	t84 = (x349*((x350/x351)==x352));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = 9;
	static uint8_t x354 = 119U;
	uint64_t x355 = 87068833895037952LLU;
	int32_t t85 = 506819;

	t85 = (x353*((x354/x355)==x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x357 = INT8_MAX;
	uint32_t x360 = 0U;
	volatile int32_t t86 = 744327;

	t86 = (x357*((x358/x359)==x360));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	uint8_t x366 = 30U;
	uint8_t x367 = 110U;
	int16_t x368 = -934;
	int32_t t87 = 91707442;

	t87 = (x365*((x366/x367)==x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = 20069U;
	volatile int8_t x370 = INT8_MAX;
	static volatile int64_t x371 = -1LL;
	int32_t x372 = INT32_MIN;

	t88 = (x369*((x370/x371)==x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x373 = 1211061U;
	int8_t x376 = -1;
	volatile uint32_t t89 = 3972U;

	t89 = (x373*((x374/x375)==x376));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = -701LL;
	uint64_t x378 = 26LLU;
	uint32_t x379 = 332513U;
	int64_t x380 = -1LL;
	volatile int64_t t90 = -533460359LL;

	t90 = (x377*((x378/x379)==x380));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = -5;
	static uint8_t x383 = 1U;
	int16_t x384 = INT16_MIN;
	uint32_t t91 = 497U;

	t91 = (x381*((x382/x383)==x384));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 13727739584053295LLU;
	int64_t x386 = INT64_MIN;
	static int16_t x387 = INT16_MIN;
	int32_t x388 = -8668;
	volatile uint64_t t92 = 16929LLU;

	t92 = (x385*((x386/x387)==x388));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x390 = -4;
	uint32_t x392 = 240613U;
	static volatile uint64_t t93 = 524877LLU;

	t93 = (x389*((x390/x391)==x392));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MAX;
	uint64_t x395 = 5839887038685224521LLU;
	int16_t x396 = -16;
	static int32_t t94 = 7;

	t94 = (x393*((x394/x395)==x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x398 = INT16_MAX;
	uint8_t x400 = 3U;
	int32_t t95 = 1;

	t95 = (x397*((x398/x399)==x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = UINT32_MAX;
	uint16_t x403 = 2U;
	uint16_t x404 = UINT16_MAX;

	t96 = (x401*((x402/x403)==x404));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x405 = 4750970263386023727LLU;
	static uint64_t x406 = 26286815102718858LLU;
	int32_t x407 = INT32_MIN;
	int8_t x408 = -1;
	uint64_t t97 = 1LLU;

	t97 = (x405*((x406/x407)==x408));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x409 = INT32_MAX;
	volatile uint64_t x410 = 33074581538187LLU;
	int32_t x411 = INT32_MAX;
	volatile int32_t t98 = -971;

	t98 = (x409*((x410/x411)==x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x413 = -36011269;
	int16_t x414 = INT16_MIN;
	uint32_t x415 = 1U;
	static uint64_t x416 = 99053356752356100LLU;

	t99 = (x413*((x414/x415)==x416));

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

