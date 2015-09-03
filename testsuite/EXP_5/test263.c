#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = UINT64_MAX;
static uint8_t x2 = 0U;
int16_t x4 = -1;
uint64_t t2 = 66711970074LLU;
int8_t x18 = INT8_MAX;
volatile uint64_t x20 = 64956218871LLU;
volatile uint32_t x38 = 1346U;
int8_t x42 = INT8_MIN;
volatile int8_t x43 = INT8_MIN;
volatile uint64_t t7 = 508914473163LLU;
int64_t x46 = -1LL;
uint64_t x61 = 0LLU;
uint64_t t10 = 251733534587616LLU;
static volatile uint8_t x66 = 0U;
int64_t x68 = INT64_MIN;
int16_t x71 = INT16_MIN;
int64_t x74 = INT64_MIN;
int8_t x77 = INT8_MIN;
static int8_t x79 = INT8_MIN;
int32_t x89 = 1;
uint16_t x91 = 442U;
static volatile uint8_t x94 = 59U;
uint32_t x101 = 14714U;
uint16_t x110 = UINT16_MAX;
int16_t x116 = INT16_MAX;
int64_t x117 = 1516984996LL;
static int64_t x118 = 556LL;
int64_t t23 = -268513834LL;
static volatile int32_t t24 = -1;
volatile int32_t x132 = INT32_MIN;
int32_t t26 = -1;
static int16_t x138 = INT16_MIN;
static volatile int32_t t29 = 119884;
int8_t x147 = INT8_MIN;
volatile int64_t t30 = 48470444081480LL;
static uint64_t x150 = UINT64_MAX;
volatile int8_t x159 = INT8_MIN;
int8_t x161 = INT8_MAX;
volatile int16_t x164 = INT16_MIN;
int32_t x168 = -3918;
uint8_t x181 = 54U;
volatile uint8_t x196 = 5U;
int64_t x206 = -20006963250402188LL;
volatile int8_t x212 = INT8_MIN;
volatile uint64_t t44 = 129637948426LLU;
volatile int64_t x218 = INT64_MIN;
static int8_t x225 = -1;
static volatile int32_t t47 = -20231605;
volatile int32_t t48 = -156;
static volatile int8_t x235 = INT8_MIN;
int8_t x236 = -1;
uint8_t x238 = UINT8_MAX;
uint32_t x240 = 443997U;
volatile int32_t t50 = -398139;
int16_t x270 = 12059;
int64_t x279 = INT64_MIN;
static volatile int64_t x286 = 786030608390LL;
static uint32_t x293 = 8180556U;
uint32_t x300 = UINT32_MAX;
volatile int32_t x305 = 49;
volatile int8_t x306 = -6;
uint16_t x344 = UINT16_MAX;
uint64_t x346 = UINT64_MAX;
uint16_t x348 = UINT16_MAX;
static uint8_t x349 = UINT8_MAX;
int64_t x359 = 0LL;
int32_t x361 = -1;
static int32_t x368 = INT32_MAX;
int8_t x372 = -1;
uint8_t x377 = 21U;
int16_t x380 = INT16_MIN;
static int32_t t86 = 7169;
static uint16_t x399 = 672U;
int32_t t87 = -121217;
volatile int32_t t88 = -676449;
static int32_t x406 = INT32_MIN;
int32_t x417 = 832378867;
static int16_t x420 = 1299;
volatile int64_t x421 = INT64_MAX;
int64_t x427 = -1LL;
int16_t x436 = 2922;
int8_t x437 = -1;
int8_t x438 = 55;
static uint32_t x443 = UINT32_MAX;


void f0(void) {
	int8_t x3 = INT8_MIN;
	volatile uint64_t t0 = 59258LLU;

	t0 = (x1*((x2-x3)==x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 7U;
	uint64_t x11 = 0LLU;
	int16_t x12 = INT16_MAX;
	uint64_t t1 = 2808884368986338LLU;

	t1 = (x9*((x10-x11)==x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 7928777LLU;
	static int16_t x14 = INT16_MAX;
	uint64_t x15 = 6338959396770408LLU;
	int8_t x16 = -2;

	t2 = (x13*((x14-x15)==x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	int32_t x19 = INT32_MAX;
	int32_t t3 = -16045;

	t3 = (x17*((x18-x19)==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 1599025995496981130LL;
	int8_t x22 = -1;
	int32_t x23 = 10329760;
	int16_t x24 = INT16_MAX;
	volatile int64_t t4 = -5379837198409064LL;

	t4 = (x21*((x22-x23)==x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = 551;
	uint8_t x34 = 17U;
	volatile int8_t x35 = 6;
	int8_t x36 = 5;
	volatile int32_t t5 = -22;

	t5 = (x33*((x34-x35)==x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = INT32_MIN;
	int8_t x39 = -1;
	int8_t x40 = -1;
	volatile int32_t t6 = 6412;

	t6 = (x37*((x38-x39)==x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int8_t x44 = INT8_MAX;

	t7 = (x41*((x42-x43)==x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = -1;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = -1;
	volatile int32_t t8 = -238369;

	t8 = (x45*((x46-x47)==x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = 227888LL;
	volatile int64_t x58 = INT64_MIN;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = INT32_MIN;
	volatile int64_t t9 = -6606501LL;

	t9 = (x57*((x58-x59)==x60));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x62 = 134;
	int32_t x63 = INT32_MAX;
	static uint16_t x64 = UINT16_MAX;

	t10 = (x61*((x62-x63)==x64));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MAX;
	int64_t x67 = 508623LL;
	static volatile int32_t t11 = 3799433;

	t11 = (x65*((x66-x67)==x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MIN;
	uint16_t x72 = 19334U;
	volatile uint64_t t12 = 2809212116746258LLU;

	t12 = (x69*((x70-x71)==x72));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x73 = 14516LL;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -1;
	volatile int64_t t13 = 403LL;

	t13 = (x73*((x74-x75)==x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x78 = -100;
	uint8_t x80 = 0U;
	int32_t t14 = -19337172;

	t14 = (x77*((x78-x79)==x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	volatile uint16_t x83 = 17959U;
	int64_t x84 = INT64_MIN;
	static volatile int32_t t15 = 75679064;

	t15 = (x81*((x82-x83)==x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x90 = 5404U;
	int32_t x92 = INT32_MIN;
	volatile int32_t t16 = 0;

	t16 = (x89*((x90-x91)==x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -2143532041LL;
	int16_t x95 = INT16_MIN;
	static volatile int8_t x96 = INT8_MIN;
	volatile int64_t t17 = 57300302330751385LL;

	t17 = (x93*((x94-x95)==x96));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x97 = 209LL;
	uint32_t x98 = 0U;
	static volatile uint8_t x99 = UINT8_MAX;
	int32_t x100 = INT32_MAX;
	static volatile int64_t t18 = 96853LL;

	t18 = (x97*((x98-x99)==x100));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x102 = -1;
	uint64_t x103 = 45LLU;
	int16_t x104 = 1;
	uint32_t t19 = 8034U;

	t19 = (x101*((x102-x103)==x104));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x105 = 10U;
	int8_t x106 = 0;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MAX;
	int32_t t20 = 1;

	t20 = (x105*((x106-x107)==x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x109 = INT32_MAX;
	static volatile uint8_t x111 = 32U;
	uint64_t x112 = 46490395108008LLU;
	static int32_t t21 = 39;

	t21 = (x109*((x110-x111)==x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x113 = INT8_MIN;
	volatile uint8_t x114 = 0U;
	uint32_t x115 = 871916U;
	static int32_t t22 = 14;

	t22 = (x113*((x114-x115)==x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x119 = -23116;
	int32_t x120 = -1;

	t23 = (x117*((x118-x119)==x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -20433391;
	static int64_t x122 = INT64_MIN;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = 522;

	t24 = (x121*((x122-x123)==x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = 2676830;
	int16_t x126 = 2835;
	static int16_t x127 = -629;
	volatile uint64_t x128 = UINT64_MAX;
	int32_t t25 = 3039;

	t25 = (x125*((x126-x127)==x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x129 = INT8_MIN;
	int8_t x130 = -1;
	int16_t x131 = INT16_MIN;

	t26 = (x129*((x130-x131)==x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MIN;
	static uint8_t x134 = 54U;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = UINT8_MAX;
	int32_t t27 = 745714;

	t27 = (x133*((x134-x135)==x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = 3;
	static volatile uint32_t x139 = 480843381U;
	uint64_t x140 = 139LLU;
	volatile int32_t t28 = -7358;

	t28 = (x137*((x138-x139)==x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x141 = 82725;
	int8_t x142 = -1;
	static uint16_t x143 = UINT16_MAX;
	int32_t x144 = 6712316;

	t29 = (x141*((x142-x143)==x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MAX;
	static int16_t x146 = INT16_MIN;
	int16_t x148 = INT16_MAX;

	t30 = (x145*((x146-x147)==x148));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x149 = -1;
	static int8_t x151 = 30;
	int8_t x152 = INT8_MIN;
	volatile int32_t t31 = 189450143;

	t31 = (x149*((x150-x151)==x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = 30;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 0U;
	static volatile uint64_t x156 = 3302428664002514016LLU;
	int32_t t32 = 83;

	t32 = (x153*((x154-x155)==x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MAX;
	int32_t x158 = -1;
	int32_t x160 = 744;
	static volatile int32_t t33 = -7884782;

	t33 = (x157*((x158-x159)==x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x162 = -1LL;
	static int16_t x163 = -77;
	volatile int32_t t34 = 86425977;

	t34 = (x161*((x162-x163)==x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	int32_t t35 = 3402305;

	t35 = (x165*((x166-x167)==x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = 1U;
	uint64_t x178 = UINT64_MAX;
	static int16_t x179 = INT16_MAX;
	volatile int16_t x180 = INT16_MAX;
	int32_t t36 = -388899914;

	t36 = (x177*((x178-x179)==x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x182 = INT16_MAX;
	int32_t x183 = 1018057;
	int64_t x184 = INT64_MIN;
	int32_t t37 = 31484;

	t37 = (x181*((x182-x183)==x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = 2;
	volatile int64_t x186 = -870LL;
	int8_t x187 = 1;
	uint8_t x188 = 23U;
	int32_t t38 = -22;

	t38 = (x185*((x186-x187)==x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = 1;
	uint64_t x190 = 5LLU;
	uint64_t x191 = 71383LLU;
	static int32_t x192 = -1;
	volatile int32_t t39 = 3688;

	t39 = (x189*((x190-x191)==x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	volatile int32_t t40 = 26;

	t40 = (x193*((x194-x195)==x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 11LLU;
	static int8_t x198 = -1;
	static int16_t x199 = 25;
	int64_t x200 = -1LL;
	volatile uint64_t t41 = 207LLU;

	t41 = (x197*((x198-x199)==x200));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = 134918;
	volatile uint32_t x202 = 31752U;
	int16_t x203 = -1;
	static volatile uint8_t x204 = 1U;
	int32_t t42 = -1;

	t42 = (x201*((x202-x203)==x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = UINT16_MAX;
	static uint16_t x207 = 8021U;
	volatile int16_t x208 = 28;
	int32_t t43 = -125688;

	t43 = (x205*((x206-x207)==x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x209 = 3143485804950LLU;
	static int16_t x210 = -1;
	int64_t x211 = 418368446420LL;

	t44 = (x209*((x210-x211)==x212));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x213 = -1LL;
	uint64_t x214 = UINT64_MAX;
	volatile int16_t x215 = INT16_MIN;
	int16_t x216 = 8143;
	int64_t t45 = 33285911139965866LL;

	t45 = (x213*((x214-x215)==x216));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = INT64_MIN;
	int16_t x219 = -1;
	int8_t x220 = INT8_MIN;
	int64_t t46 = -51365906748LL;

	t46 = (x217*((x218-x219)==x220));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x226 = 14U;
	int16_t x227 = INT16_MIN;
	int64_t x228 = -1LL;

	t47 = (x225*((x226-x227)==x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = INT16_MIN;
	static volatile int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MAX;
	int64_t x232 = -1LL;

	t48 = (x229*((x230-x231)==x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x233 = 894793418081692412LLU;
	static uint32_t x234 = 1005202104U;
	uint64_t t49 = 278LLU;

	t49 = (x233*((x234-x235)==x236));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = INT16_MAX;
	static int64_t x239 = 57843643238LL;

	t50 = (x237*((x238-x239)==x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x245 = 11795U;
	static int8_t x246 = 0;
	int32_t x247 = -163;
	int64_t x248 = INT64_MIN;
	int32_t t51 = 12888767;

	t51 = (x245*((x246-x247)==x248));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = 14;
	volatile uint16_t x250 = UINT16_MAX;
	static volatile int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile int32_t t52 = -526045;

	t52 = (x249*((x250-x251)==x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = INT32_MIN;
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t53 = 10766641;

	t53 = (x253*((x254-x255)==x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = 154;
	volatile uint16_t x258 = 1U;
	static volatile uint16_t x259 = 2206U;
	uint32_t x260 = UINT32_MAX;
	static volatile int32_t t54 = 8061874;

	t54 = (x257*((x258-x259)==x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = UINT8_MAX;
	int64_t x263 = 815005966LL;
	int16_t x264 = -1;
	int64_t t55 = 17771725921665LL;

	t55 = (x261*((x262-x263)==x264));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x265 = 50913764U;
	int32_t x266 = -1;
	static int8_t x267 = -23;
	uint32_t x268 = 726U;
	volatile uint32_t t56 = 1U;

	t56 = (x265*((x266-x267)==x268));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 13U;
	volatile uint32_t x271 = UINT32_MAX;
	int64_t x272 = INT64_MIN;
	int32_t t57 = 781248254;

	t57 = (x269*((x270-x271)==x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MIN;
	int16_t x274 = -1;
	volatile uint8_t x275 = 1U;
	int64_t x276 = INT64_MIN;
	int32_t t58 = 2;

	t58 = (x273*((x274-x275)==x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x277 = 4098U;
	uint64_t x278 = 1945469989091233857LLU;
	int16_t x280 = -243;
	int32_t t59 = -859;

	t59 = (x277*((x278-x279)==x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = INT8_MAX;
	static int8_t x282 = INT8_MIN;
	int16_t x283 = -1;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t60 = 285513589;

	t60 = (x281*((x282-x283)==x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = 2LL;
	int32_t x287 = INT32_MAX;
	int64_t x288 = -1LL;
	int64_t t61 = -1638146LL;

	t61 = (x285*((x286-x287)==x288));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = INT32_MIN;
	int32_t x291 = -22164801;
	int8_t x292 = INT8_MIN;
	int32_t t62 = -2933;

	t62 = (x289*((x290-x291)==x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x294 = 4197751076196LLU;
	int8_t x295 = -4;
	volatile int8_t x296 = -1;
	static volatile uint32_t t63 = 1198013909U;

	t63 = (x293*((x294-x295)==x296));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = 534065004439681688LL;
	int16_t x298 = INT16_MIN;
	static uint16_t x299 = UINT16_MAX;
	volatile int64_t t64 = -34355LL;

	t64 = (x297*((x298-x299)==x300));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x307 = -1LL;
	volatile uint64_t x308 = UINT64_MAX;
	int32_t t65 = 1;

	t65 = (x305*((x306-x307)==x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x309 = 1;
	volatile int64_t x310 = 5168191938381284LL;
	int16_t x311 = INT16_MIN;
	static int64_t x312 = -36601625LL;
	volatile int32_t t66 = 1748;

	t66 = (x309*((x310-x311)==x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	static uint64_t x314 = 282360029LLU;
	volatile int64_t x315 = INT64_MAX;
	volatile int32_t x316 = INT32_MIN;
	int64_t t67 = 419633580083266739LL;

	t67 = (x313*((x314-x315)==x316));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = INT64_MAX;
	uint16_t x318 = UINT16_MAX;
	uint64_t x319 = 926LLU;
	static int8_t x320 = INT8_MIN;
	volatile int64_t t68 = 34522LL;

	t68 = (x317*((x318-x319)==x320));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = UINT8_MAX;
	static int16_t x322 = -1;
	uint8_t x323 = 43U;
	int64_t x324 = 50168LL;
	volatile int32_t t69 = -8;

	t69 = (x321*((x322-x323)==x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = -1;
	static int64_t x327 = INT64_MIN;
	volatile int32_t x328 = INT32_MIN;
	volatile int64_t t70 = -595035831LL;

	t70 = (x325*((x326-x327)==x328));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x329 = 7;
	volatile uint16_t x330 = 31343U;
	uint16_t x331 = 5628U;
	int32_t x332 = -3239;
	volatile int32_t t71 = 1;

	t71 = (x329*((x330-x331)==x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = -1;
	static volatile int8_t x334 = -2;
	static volatile uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t72 = -4616;

	t72 = (x333*((x334-x335)==x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x337 = -1LL;
	uint8_t x338 = 9U;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = UINT32_MAX;
	int64_t t73 = -4LL;

	t73 = (x337*((x338-x339)==x340));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = -1;
	uint8_t x342 = 1U;
	int32_t x343 = -1;
	int32_t t74 = -3103;

	t74 = (x341*((x342-x343)==x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = INT16_MAX;
	int64_t x347 = INT64_MAX;
	volatile int32_t t75 = -2;

	t75 = (x345*((x346-x347)==x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x350 = 3LLU;
	int32_t x351 = 27558964;
	int64_t x352 = 170LL;
	static volatile int32_t t76 = -444;

	t76 = (x349*((x350-x351)==x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x353 = INT64_MIN;
	int64_t x354 = 74599151LL;
	volatile int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	int64_t t77 = 3817431414585360LL;

	t77 = (x353*((x354-x355)==x356));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x357 = -58;
	static int32_t x358 = -303;
	int64_t x360 = INT64_MIN;
	volatile int32_t t78 = -259;

	t78 = (x357*((x358-x359)==x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x362 = UINT8_MAX;
	int64_t x363 = 364284818LL;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t79 = 5325711;

	t79 = (x361*((x362-x363)==x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = INT32_MIN;
	int8_t x366 = -7;
	int8_t x367 = -33;
	static volatile int32_t t80 = 0;

	t80 = (x365*((x366-x367)==x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x369 = UINT8_MAX;
	volatile int8_t x370 = INT8_MAX;
	int16_t x371 = -71;
	volatile int32_t t81 = -2341740;

	t81 = (x369*((x370-x371)==x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x378 = INT8_MAX;
	uint32_t x379 = 1691449195U;
	static int32_t t82 = 970;

	t82 = (x377*((x378-x379)==x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x381 = UINT64_MAX;
	static uint8_t x382 = 79U;
	int64_t x383 = -1LL;
	uint64_t x384 = UINT64_MAX;
	uint64_t t83 = 82193304076375LLU;

	t83 = (x381*((x382-x383)==x384));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x385 = UINT32_MAX;
	int32_t x386 = INT32_MAX;
	uint32_t x387 = 5096107U;
	int8_t x388 = -1;
	volatile uint32_t t84 = 59U;

	t84 = (x385*((x386-x387)==x388));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = INT8_MAX;
	int8_t x390 = INT8_MAX;
	volatile uint8_t x391 = 4U;
	static int8_t x392 = -1;
	volatile int32_t t85 = 1;

	t85 = (x389*((x390-x391)==x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = INT16_MAX;
	volatile int32_t x394 = INT32_MAX;
	int16_t x395 = 7;
	volatile uint8_t x396 = 76U;

	t86 = (x393*((x394-x395)==x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = -61;
	volatile int8_t x398 = INT8_MIN;
	uint64_t x400 = 165858678958LLU;

	t87 = (x397*((x398-x399)==x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = -1;
	uint64_t x402 = 419117864LLU;
	uint16_t x403 = 12U;
	volatile uint32_t x404 = UINT32_MAX;

	t88 = (x401*((x402-x403)==x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = -1;
	uint16_t x407 = 0U;
	int32_t x408 = INT32_MAX;
	int32_t t89 = -20;

	t89 = (x405*((x406-x407)==x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x409 = UINT8_MAX;
	uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MIN;
	int64_t x412 = -941272599LL;
	int32_t t90 = -89;

	t90 = (x409*((x410-x411)==x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x413 = 123780808LLU;
	uint64_t x414 = 9168388264348536171LLU;
	uint16_t x415 = UINT16_MAX;
	uint32_t x416 = 8392U;
	volatile uint64_t t91 = 258672574199LLU;

	t91 = (x413*((x414-x415)==x416));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x418 = UINT64_MAX;
	int64_t x419 = INT64_MIN;
	volatile int32_t t92 = -4;

	t92 = (x417*((x418-x419)==x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x422 = INT16_MAX;
	volatile uint16_t x423 = UINT16_MAX;
	volatile int16_t x424 = INT16_MAX;
	volatile int64_t t93 = 6466950LL;

	t93 = (x421*((x422-x423)==x424));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = INT16_MAX;
	static int32_t x426 = 514540228;
	uint32_t x428 = 183U;
	int32_t t94 = -353956090;

	t94 = (x425*((x426-x427)==x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MIN;
	static volatile int16_t x430 = -1;
	int16_t x431 = INT16_MIN;
	volatile int8_t x432 = INT8_MAX;
	static volatile int32_t t95 = 23172;

	t95 = (x429*((x430-x431)==x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x433 = INT16_MIN;
	int64_t x434 = 17538251762735700LL;
	static uint8_t x435 = UINT8_MAX;
	int32_t t96 = -33;

	t96 = (x433*((x434-x435)==x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x439 = 2U;
	uint16_t x440 = 316U;
	volatile int32_t t97 = -30;

	t97 = (x437*((x438-x439)==x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x441 = 1911564U;
	static uint16_t x442 = UINT16_MAX;
	volatile uint64_t x444 = 261607841131489LLU;
	uint32_t t98 = 4036U;

	t98 = (x441*((x442-x443)==x444));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = INT32_MAX;
	static int64_t x446 = -6390122436026643LL;
	int8_t x447 = INT8_MAX;
	uint32_t x448 = 60896065U;
	static volatile int32_t t99 = -7;

	t99 = (x445*((x446-x447)==x448));

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

