#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
static int8_t x6 = INT8_MIN;
int8_t x7 = INT8_MIN;
static int32_t x8 = INT32_MIN;
int32_t t1 = 39005;
uint64_t t2 = 324302268880436LLU;
int16_t x20 = INT16_MIN;
uint8_t x26 = 36U;
uint32_t x41 = UINT32_MAX;
volatile int16_t x43 = INT16_MAX;
uint16_t x45 = 430U;
int64_t x46 = INT64_MIN;
static volatile uint32_t x47 = UINT32_MAX;
int16_t x49 = -1;
uint32_t x51 = 0U;
volatile int16_t x52 = -1;
uint16_t x53 = 27463U;
uint64_t t13 = 658660977087LLU;
static int64_t x61 = INT64_MAX;
int16_t x62 = INT16_MIN;
volatile int8_t x67 = 27;
volatile int16_t x69 = -1;
int8_t x71 = INT8_MIN;
int32_t t18 = -37;
uint64_t x79 = UINT64_MAX;
volatile uint64_t t21 = 863772508291946LLU;
int32_t t22 = -37508;
uint8_t x93 = 7U;
uint8_t x94 = UINT8_MAX;
int8_t x96 = INT8_MIN;
int32_t x98 = INT32_MIN;
int32_t x99 = -9312794;
uint32_t x100 = 31302U;
uint32_t x102 = UINT32_MAX;
int8_t x109 = -1;
volatile uint64_t t28 = 123426LLU;
int8_t x117 = 0;
static int16_t x131 = INT16_MAX;
uint32_t x132 = 1U;
uint64_t x137 = UINT64_MAX;
volatile int64_t x139 = INT64_MIN;
uint8_t x140 = UINT8_MAX;
static int8_t x146 = -37;
int16_t x152 = INT16_MAX;
static volatile int32_t t36 = 148074686;
static int8_t x158 = INT8_MIN;
uint32_t t37 = 250198U;
int32_t x161 = INT32_MAX;
volatile uint32_t x162 = 13194U;
static volatile uint32_t t38 = 160498091U;
uint8_t x167 = 0U;
uint32_t x177 = 3024U;
int16_t x180 = INT16_MAX;
volatile uint32_t t41 = 1U;
int8_t x182 = -5;
uint16_t x183 = 8U;
volatile int16_t x185 = -1;
volatile uint64_t x188 = 25456LLU;
int16_t x195 = INT16_MIN;
volatile int32_t t45 = -1;
uint16_t x204 = UINT16_MAX;
uint8_t x209 = 16U;
static int8_t x213 = INT8_MAX;
int16_t x222 = INT16_MIN;
static volatile int16_t x223 = 7;
uint8_t x227 = 3U;
volatile int32_t t53 = -766664;
int8_t x235 = -1;
volatile int64_t t55 = -308294724LL;
uint16_t x244 = 1U;
int32_t x247 = -1;
static int64_t x259 = INT64_MAX;
volatile uint32_t x260 = 1U;
int16_t x261 = INT16_MIN;
int8_t x262 = -1;
static int32_t t61 = 1790;
int8_t x265 = -35;
uint32_t x273 = 6946422U;
int64_t x279 = -11655054465LL;
int64_t x280 = -7LL;
static int16_t x282 = INT16_MIN;
int16_t x286 = INT16_MAX;
volatile int8_t x288 = INT8_MAX;
int32_t t67 = -693;
static volatile int64_t t68 = -11097788681412359LL;
int64_t x296 = INT64_MIN;
int16_t x301 = INT16_MIN;
int16_t x303 = 4;
int64_t x306 = 2815489964264LL;
int8_t x307 = 6;
volatile int64_t t71 = 1504LL;
uint32_t t74 = 551U;
volatile uint32_t x348 = 62360800U;
static uint64_t x360 = 7506979804099LLU;
static uint64_t t81 = 15LLU;
int8_t x361 = 0;
uint8_t x362 = 1U;
static volatile int32_t t82 = 1;
uint8_t x365 = 86U;
uint64_t x366 = 1071866803697827LLU;
volatile int64_t x368 = 454856915040LL;
static volatile int32_t t84 = 75849;
static int16_t x374 = -1;
volatile int64_t t85 = -1854291690733433LL;
volatile int16_t x377 = INT16_MIN;
static int8_t x380 = INT8_MIN;
int32_t t86 = -3774;
int32_t x393 = INT32_MIN;
int64_t x395 = INT64_MAX;
uint32_t x396 = UINT32_MAX;
volatile int8_t x399 = -1;
static int32_t t90 = -1;
static volatile int16_t x402 = INT16_MAX;
int64_t t91 = 128725LL;
int16_t x414 = INT16_MIN;
static uint8_t x416 = 2U;
int32_t t96 = -769731772;
static volatile int32_t t97 = 175;
int8_t x443 = -1;
static int64_t x444 = INT64_MIN;


void f0(void) {
	uint8_t x2 = UINT8_MAX;
	volatile int8_t x3 = -14;
	uint8_t x4 = 53U;
	volatile int32_t t0 = 14898243;

	t0 = ((x1+x2)*(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -52;

	t1 = ((x5+x6)*(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static volatile uint64_t x10 = UINT64_MAX;
	int8_t x11 = -17;
	int16_t x12 = INT16_MAX;

	t2 = ((x9+x10)*(x11==x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -220315LL;
	static int16_t x14 = INT16_MAX;
	static volatile uint32_t x15 = 1744U;
	uint32_t x16 = 4503U;
	volatile int64_t t3 = -1LL;

	t3 = ((x13+x14)*(x15==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 756273U;
	volatile int32_t t4 = -8821307;

	t4 = ((x17+x18)*(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int64_t x22 = 0LL;
	int32_t x23 = -1;
	int8_t x24 = -1;
	volatile int64_t t5 = 179581554324LL;

	t5 = ((x21+x22)*(x23==x24));

	if (t5 != 65535LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x27 = 2U;
	uint16_t x28 = UINT16_MAX;
	static volatile int32_t t6 = 0;

	t6 = ((x25+x26)*(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int8_t x30 = -1;
	static uint64_t x31 = UINT64_MAX;
	volatile uint64_t x32 = 393210LLU;
	volatile int32_t t7 = 2849;

	t7 = ((x29+x30)*(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int64_t x34 = -1LL;
	volatile uint16_t x35 = 8997U;
	uint16_t x36 = 1U;
	volatile int64_t t8 = -3000211891711LL;

	t8 = ((x33+x34)*(x35==x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 5592LLU;
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = -1LL;
	static int32_t x40 = -1;
	uint64_t t9 = 4073704467364638LLU;

	t9 = ((x37+x38)*(x39==x40));

	if (t9 != 5591LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 3U;
	volatile int8_t x44 = INT8_MIN;
	volatile uint32_t t10 = 1117U;

	t10 = ((x41+x42)*(x43==x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x48 = INT32_MIN;
	volatile int64_t t11 = -21496544LL;

	t11 = ((x45+x46)*(x47==x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = -706;
	int32_t t12 = -3;

	t12 = ((x49+x50)*(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 385666LLU;
	int64_t x55 = -1LL;
	static uint8_t x56 = 12U;

	t13 = ((x53+x54)*(x55==x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int16_t x58 = -34;
	int32_t x59 = INT32_MAX;
	int32_t x60 = INT32_MIN;
	static int32_t t14 = 28353;

	t14 = ((x57+x58)*(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = -1LL;
	uint8_t x64 = UINT8_MAX;
	volatile int64_t t15 = -7531571921245347LL;

	t15 = ((x61+x62)*(x63==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x65 = 39238832374200LLU;
	int16_t x66 = -37;
	int32_t x68 = -1;
	uint64_t t16 = 1831LLU;

	t16 = ((x65+x66)*(x67==x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 48U;
	static volatile int64_t x72 = 4204050802LL;
	volatile int32_t t17 = 1769581;

	t17 = ((x69+x70)*(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	static uint8_t x74 = 0U;
	uint64_t x75 = 363071717LLU;
	int32_t x76 = -1;

	t18 = ((x73+x74)*(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -42;
	volatile uint64_t x78 = 16240694081366LLU;
	int16_t x80 = -1;
	static volatile uint64_t t19 = 77105198LLU;

	t19 = ((x77+x78)*(x79==x80));

	if (t19 != 16240694081324LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int8_t x82 = -1;
	int32_t x83 = INT32_MAX;
	uint64_t x84 = 14599107692LLU;
	static int32_t t20 = 13308309;

	t20 = ((x81+x82)*(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -1;
	static volatile uint64_t x86 = 576532LLU;
	int32_t x87 = -1;
	static int64_t x88 = INT64_MIN;

	t21 = ((x85+x86)*(x87==x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 5;
	int8_t x90 = 1;
	int64_t x91 = 157LL;
	uint32_t x92 = UINT32_MAX;

	t22 = ((x89+x90)*(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x95 = 6U;
	volatile int32_t t23 = 76241813;

	t23 = ((x93+x94)*(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 14U;
	volatile int32_t t24 = 0;

	t24 = ((x97+x98)*(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 0U;
	static volatile uint64_t x103 = UINT64_MAX;
	volatile uint16_t x104 = 3U;
	static uint32_t t25 = 123174288U;

	t25 = ((x101+x102)*(x103==x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	static int8_t x106 = INT8_MAX;
	static volatile uint16_t x107 = UINT16_MAX;
	volatile int16_t x108 = 15;
	volatile int32_t t26 = -15;

	t26 = ((x105+x106)*(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 1;
	int64_t x111 = INT64_MIN;
	uint16_t x112 = 12U;
	static int32_t t27 = -715;

	t27 = ((x109+x110)*(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int16_t x114 = INT16_MAX;
	uint8_t x115 = 13U;
	uint16_t x116 = 1040U;

	t28 = ((x113+x114)*(x115==x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x118 = INT64_MIN;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = -112;
	int64_t t29 = 250423101321238569LL;

	t29 = ((x117+x118)*(x119==x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -263353499LL;
	static uint8_t x122 = UINT8_MAX;
	uint32_t x123 = UINT32_MAX;
	static int32_t x124 = 5197249;
	int64_t t30 = 3879LL;

	t30 = ((x121+x122)*(x123==x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t t31 = 6962613;

	t31 = ((x129+x130)*(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = 0LL;
	volatile int16_t x134 = INT16_MIN;
	volatile uint64_t x135 = 4293LLU;
	int64_t x136 = INT64_MIN;
	volatile int64_t t32 = 3LL;

	t32 = ((x133+x134)*(x135==x136));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x138 = UINT8_MAX;
	uint64_t t33 = 333226895191506583LLU;

	t33 = ((x137+x138)*(x139==x140));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = -100;
	int8_t x147 = INT8_MIN;
	static uint64_t x148 = 7728621178LLU;
	int32_t t34 = -11;

	t34 = ((x145+x146)*(x147==x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = UINT8_MAX;
	volatile int32_t t35 = 8719;

	t35 = ((x149+x150)*(x151==x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	int64_t x155 = INT64_MIN;
	volatile int8_t x156 = 2;

	t36 = ((x153+x154)*(x155==x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x159 = 38161;
	int16_t x160 = INT16_MIN;

	t37 = ((x157+x158)*(x159==x160));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x163 = INT64_MAX;
	uint16_t x164 = 1599U;

	t38 = ((x161+x162)*(x163==x164));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = INT8_MAX;
	int64_t x166 = -28309122314411759LL;
	volatile uint32_t x168 = 288843515U;
	volatile int64_t t39 = 25195586917493225LL;

	t39 = ((x165+x166)*(x167==x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MIN;
	static int64_t x174 = 126LL;
	int32_t x175 = INT32_MAX;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t40 = 12785745026LL;

	t40 = ((x173+x174)*(x175==x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x178 = 61508129U;
	int64_t x179 = INT64_MIN;

	t41 = ((x177+x178)*(x179==x180));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = UINT32_MAX;
	static int16_t x184 = -1;
	uint32_t t42 = 34481508U;

	t42 = ((x181+x182)*(x183==x184));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x186 = 31584U;
	static uint16_t x187 = UINT16_MAX;
	int32_t t43 = 481552;

	t43 = ((x185+x186)*(x187==x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x189 = INT16_MAX;
	static int8_t x190 = 6;
	uint64_t x191 = UINT64_MAX;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t44 = -3;

	t44 = ((x189+x190)*(x191==x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x193 = UINT16_MAX;
	int32_t x194 = 98;
	int16_t x196 = INT16_MAX;

	t45 = ((x193+x194)*(x195==x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = 13400968617LLU;
	int8_t x199 = 41;
	int16_t x200 = INT16_MAX;
	static volatile uint64_t t46 = 2607LLU;

	t46 = ((x197+x198)*(x199==x200));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x201 = -1;
	volatile uint32_t x202 = 466779789U;
	int32_t x203 = INT32_MAX;
	uint32_t t47 = 127U;

	t47 = ((x201+x202)*(x203==x204));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x205 = 25U;
	int8_t x206 = 0;
	uint16_t x207 = 153U;
	int64_t x208 = INT64_MIN;
	int32_t t48 = -2337161;

	t48 = ((x205+x206)*(x207==x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x210 = -1;
	uint16_t x211 = 213U;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t49 = -6;

	t49 = ((x209+x210)*(x211==x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x214 = -1;
	int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MAX;
	static volatile int32_t t50 = -591784;

	t50 = ((x213+x214)*(x215==x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = -4912675LL;
	int16_t x218 = -14198;
	int64_t x219 = -1LL;
	volatile int8_t x220 = INT8_MAX;
	static volatile int64_t t51 = -191376LL;

	t51 = ((x217+x218)*(x219==x220));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	static int32_t x224 = INT32_MIN;
	uint64_t t52 = 66707163559996LLU;

	t52 = ((x221+x222)*(x223==x224));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	uint16_t x226 = UINT16_MAX;
	uint16_t x228 = 30U;

	t53 = ((x225+x226)*(x227==x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -5385;
	volatile int64_t x230 = INT64_MAX;
	int32_t x231 = INT32_MIN;
	volatile uint16_t x232 = 101U;
	int64_t t54 = 793672141136767LL;

	t54 = ((x229+x230)*(x231==x232));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = UINT8_MAX;
	int64_t x234 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;

	t55 = ((x233+x234)*(x235==x236));

	if (t55 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x241 = -1;
	static uint8_t x242 = 34U;
	static volatile int64_t x243 = -31072791543054LL;
	int32_t t56 = 17991;

	t56 = ((x241+x242)*(x243==x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -1;
	uint64_t x246 = 566099745369363287LLU;
	volatile int16_t x248 = INT16_MAX;
	uint64_t t57 = 517639940665LLU;

	t57 = ((x245+x246)*(x247==x248));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x249 = 1487685U;
	static int8_t x250 = 0;
	int8_t x251 = INT8_MAX;
	uint32_t x252 = 8389U;
	volatile uint32_t t58 = 2U;

	t58 = ((x249+x250)*(x251==x252));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x253 = INT32_MAX;
	int32_t x254 = -66482;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = UINT64_MAX;
	int32_t t59 = -18892;

	t59 = ((x253+x254)*(x255==x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MIN;
	uint16_t x258 = 13U;
	static volatile int64_t t60 = -746664554245LL;

	t60 = ((x257+x258)*(x259==x260));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x263 = UINT64_MAX;
	int32_t x264 = INT32_MAX;

	t61 = ((x261+x262)*(x263==x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x266 = 225744;
	uint64_t x267 = 409304LLU;
	uint16_t x268 = 0U;
	int32_t t62 = -13;

	t62 = ((x265+x266)*(x267==x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x269 = -6482LL;
	uint8_t x270 = 1U;
	uint64_t x271 = 139LLU;
	int8_t x272 = 1;
	volatile int64_t t63 = -68412103815LL;

	t63 = ((x269+x270)*(x271==x272));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x274 = INT64_MIN;
	static uint16_t x275 = 274U;
	uint64_t x276 = 6925315269935545LLU;
	int64_t t64 = -2LL;

	t64 = ((x273+x274)*(x275==x276));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MAX;
	volatile int32_t x278 = INT32_MIN;
	int32_t t65 = 136;

	t65 = ((x277+x278)*(x279==x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MAX;
	int32_t x283 = 466;
	int64_t x284 = -3098477160LL;
	static volatile int64_t t66 = -517848507186764163LL;

	t66 = ((x281+x282)*(x283==x284));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -1;
	uint32_t x287 = 17U;

	t67 = ((x285+x286)*(x287==x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MAX;
	int64_t x290 = INT64_MIN;
	static int64_t x291 = -456063564603587LL;
	int64_t x292 = 29LL;

	t68 = ((x289+x290)*(x291==x292));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	static int32_t x295 = INT32_MAX;
	static int32_t t69 = -7626578;

	t69 = ((x293+x294)*(x295==x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x302 = UINT64_MAX;
	int64_t x304 = -1LL;
	uint64_t t70 = 32129963486LLU;

	t70 = ((x301+x302)*(x303==x304));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x305 = 1U;
	static int8_t x308 = -1;

	t71 = ((x305+x306)*(x307==x308));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MAX;
	int64_t x314 = -1LL;
	volatile int8_t x315 = INT8_MAX;
	int64_t x316 = 17090LL;
	volatile int64_t t72 = 2592LL;

	t72 = ((x313+x314)*(x315==x316));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = 4811;
	static int32_t x318 = 190786023;
	int16_t x319 = INT16_MIN;
	volatile int32_t x320 = -1;
	volatile int32_t t73 = 49414;

	t73 = ((x317+x318)*(x319==x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x321 = 32213425U;
	volatile int16_t x322 = -1;
	static uint64_t x323 = 1440687257277053930LLU;
	static int32_t x324 = INT32_MIN;

	t74 = ((x321+x322)*(x323==x324));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = -1;
	volatile uint16_t x331 = 15U;
	uint64_t x332 = 2257LLU;
	volatile int32_t t75 = -147;

	t75 = ((x329+x330)*(x331==x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int64_t x335 = -1LL;
	static uint64_t x336 = UINT64_MAX;
	int32_t t76 = 24891436;

	t76 = ((x333+x334)*(x335==x336));

	if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = UINT32_MAX;
	uint32_t x338 = 2U;
	volatile uint32_t x339 = 224129153U;
	static int64_t x340 = INT64_MAX;
	static uint32_t t77 = 84671U;

	t77 = ((x337+x338)*(x339==x340));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 12U;
	int64_t x346 = INT64_MIN;
	int32_t x347 = -3480;
	int64_t t78 = 3LL;

	t78 = ((x345+x346)*(x347==x348));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = -4;
	int16_t x351 = INT16_MAX;
	int16_t x352 = 17;
	volatile uint32_t t79 = 85468U;

	t79 = ((x349+x350)*(x351==x352));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -1;
	uint16_t x354 = 19U;
	static uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MIN;
	static int32_t t80 = 17;

	t80 = ((x353+x354)*(x355==x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x357 = 1666795LLU;
	int32_t x358 = 397978;
	int16_t x359 = -4;

	t81 = ((x357+x358)*(x359==x360));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x363 = 3782U;
	int64_t x364 = INT64_MIN;

	t82 = ((x361+x362)*(x363==x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x367 = INT16_MIN;
	volatile uint64_t t83 = 19910LLU;

	t83 = ((x365+x366)*(x367==x368));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x369 = INT16_MIN;
	static int16_t x370 = 19;
	uint8_t x371 = 33U;
	int64_t x372 = INT64_MIN;

	t84 = ((x369+x370)*(x371==x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = 688059605LL;
	static int16_t x375 = -1434;
	volatile int64_t x376 = -1LL;

	t85 = ((x373+x374)*(x375==x376));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x378 = 1029U;
	int32_t x379 = INT32_MIN;

	t86 = ((x377+x378)*(x379==x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = INT32_MAX;
	static int32_t x386 = -1;
	volatile int64_t x387 = INT64_MAX;
	int8_t x388 = 7;
	static volatile int32_t t87 = 1031419404;

	t87 = ((x385+x386)*(x387==x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	int32_t x391 = -166;
	volatile int16_t x392 = 93;
	volatile int32_t t88 = -6;

	t88 = ((x389+x390)*(x391==x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x394 = 1U;
	volatile int32_t t89 = -14;

	t89 = ((x393+x394)*(x395==x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x397 = INT8_MIN;
	static int8_t x398 = INT8_MAX;
	static int16_t x400 = INT16_MIN;

	t90 = ((x397+x398)*(x399==x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	int16_t x403 = 4007;
	uint32_t x404 = 0U;

	t91 = ((x401+x402)*(x403==x404));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = INT32_MIN;
	int32_t x406 = 22;
	int16_t x407 = INT16_MAX;
	volatile int64_t x408 = -1359989670791LL;
	int32_t t92 = -13069;

	t92 = ((x405+x406)*(x407==x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = INT16_MIN;
	volatile int64_t x415 = INT64_MIN;
	int32_t t93 = -868832;

	t93 = ((x413+x414)*(x415==x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x417 = INT8_MAX;
	static int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	static uint8_t x420 = 33U;
	volatile int32_t t94 = -44;

	t94 = ((x417+x418)*(x419==x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x421 = 44929350444760LL;
	int32_t x422 = 125314;
	volatile int32_t x423 = -1;
	int16_t x424 = INT16_MAX;
	static volatile int64_t t95 = 19078116579353LL;

	t95 = ((x421+x422)*(x423==x424));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x425 = 3;
	int16_t x426 = INT16_MAX;
	static volatile int16_t x427 = -4331;
	int8_t x428 = INT8_MAX;

	t96 = ((x425+x426)*(x427==x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x429 = -1;
	int16_t x430 = INT16_MIN;
	static int8_t x431 = INT8_MIN;
	int8_t x432 = 0;

	t97 = ((x429+x430)*(x431==x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x437 = -1;
	static int8_t x438 = INT8_MIN;
	int8_t x439 = INT8_MIN;
	int32_t x440 = -184392105;
	static volatile int32_t t98 = -801722553;

	t98 = ((x437+x438)*(x439==x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x441 = -10LL;
	int64_t x442 = INT64_MAX;
	volatile int64_t t99 = -12453253LL;

	t99 = ((x441+x442)*(x443==x444));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

