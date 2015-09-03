#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
static volatile uint64_t x5 = 2672330783400967LLU;
volatile int8_t x9 = -2;
int8_t x15 = INT8_MIN;
static int32_t x17 = INT32_MIN;
int64_t t4 = 9LL;
int16_t x23 = INT16_MIN;
int64_t t5 = 10LL;
int16_t x27 = INT16_MAX;
volatile int64_t t6 = 107685621327759LL;
volatile int8_t x34 = INT8_MIN;
static int16_t x48 = INT16_MIN;
volatile int64_t t11 = -311LL;
int8_t x52 = 32;
uint32_t x55 = UINT32_MAX;
volatile int16_t x64 = -1;
int64_t t15 = -17852229LL;
int8_t x69 = INT8_MAX;
int16_t x72 = -140;
int16_t x82 = -1;
volatile int64_t t20 = -55102LL;
static int64_t t21 = 1321823LL;
int64_t x91 = INT64_MIN;
uint32_t t23 = UINT32_MAX;
int8_t x97 = -1;
int64_t x100 = INT64_MIN;
int64_t x108 = 359087LL;
int16_t x110 = INT16_MIN;
int8_t x111 = INT8_MAX;
volatile int32_t t27 = -3559;
int32_t t28 = -894710809;
volatile int32_t x119 = INT32_MIN;
int8_t x123 = INT8_MIN;
int32_t t31 = -101134;
int32_t t33 = -114864;
static volatile int8_t x148 = INT8_MAX;
volatile uint32_t x150 = 549U;
int64_t x152 = INT64_MAX;
volatile uint64_t t37 = 25436794LLU;
static volatile int8_t x155 = INT8_MIN;
int16_t x158 = -1;
volatile uint32_t t39 = UINT32_MAX;
int8_t x163 = INT8_MIN;
static int32_t t40 = -247;
static int32_t x165 = INT32_MAX;
uint16_t x171 = 5776U;
int16_t x176 = INT16_MIN;
volatile int16_t x180 = INT16_MIN;
static int64_t x181 = -14440716041561004LL;
int8_t x182 = -1;
static int16_t x183 = INT16_MAX;
volatile int64_t t46 = -135LL;
volatile int8_t x192 = -15;
int64_t x195 = INT64_MIN;
uint16_t x196 = UINT16_MAX;
static uint64_t x197 = 448LLU;
int8_t x203 = -24;
volatile uint8_t x214 = UINT8_MAX;
uint64_t x218 = 6877916LLU;
int16_t x221 = 3765;
int64_t x233 = INT64_MAX;
static volatile int32_t t60 = 37528;
volatile int16_t x245 = INT16_MIN;
static int64_t x257 = 65008122203487015LL;
uint32_t x259 = UINT32_MAX;
uint64_t t66 = 0LLU;
volatile uint16_t x284 = 131U;
static uint32_t x292 = 5U;
static volatile uint64_t x293 = UINT64_MAX;
int32_t x295 = INT32_MIN;
static uint32_t x298 = UINT32_MAX;
static int32_t x304 = -3958840;
volatile int32_t t76 = 251;
int64_t x309 = INT64_MIN;
volatile uint64_t t77 = UINT64_MAX;
static int8_t x316 = 7;
int8_t x317 = 0;
uint32_t x318 = 18U;
uint64_t x330 = 1927284070375LLU;
volatile int8_t x334 = INT8_MAX;
volatile uint16_t x336 = UINT16_MAX;
int16_t x337 = INT16_MAX;
static uint16_t x338 = 8U;
int32_t t84 = 6318414;
static uint32_t x344 = 67279U;
static int32_t x352 = INT32_MIN;
static int8_t x362 = -1;
int16_t x365 = 1998;
int8_t x387 = 23;
int32_t x393 = INT32_MAX;
int64_t x394 = INT64_MIN;
int16_t x395 = -1;
int32_t x396 = 9839;


void f0(void) {
	int8_t x2 = -3;
	volatile int8_t x3 = INT8_MIN;
	static int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 383016;

	t0 = ((x1|x2)-(x3==x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = 730983444U;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	uint64_t t1 = 539288822480210LLU;

	t1 = ((x5|x6)-(x7==x8));

	if (t1 != 2672330791840791LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MIN;
	int16_t x11 = 0;
	volatile uint32_t x12 = UINT32_MAX;
	int64_t t2 = -222264190LL;

	t2 = ((x9|x10)-(x11==x12));

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static uint64_t x14 = 2612361833312LLU;
	int32_t x16 = 2823;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13|x14)-(x15==x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 1250349834717LL;
	uint64_t x19 = 52LLU;
	int64_t x20 = -675809LL;

	t4 = ((x17|x18)-(x19==x20));

	if (t4 != -1633132067LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 3663LL;
	int16_t x22 = INT16_MAX;
	static volatile int64_t x24 = INT64_MIN;

	t5 = ((x21|x22)-(x23==x24));

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -77LL;
	static int64_t x26 = 4192101835LL;
	volatile int64_t x28 = INT64_MAX;

	t6 = ((x25|x26)-(x27==x28));

	if (t6 != -5LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	int64_t x32 = INT64_MAX;
	int32_t t7 = 4746487;

	t7 = ((x29|x30)-(x31==x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int32_t x35 = -1403;
	int32_t x36 = -1;
	static volatile int64_t t8 = -3978LL;

	t8 = ((x33|x34)-(x35==x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -400482249651887691LL;
	uint32_t x38 = 278181U;
	static int8_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	int64_t t9 = 245154LL;

	t9 = ((x37|x38)-(x39==x40));

	if (t9 != -400482249651880011LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int32_t x43 = 259509917;
	int8_t x44 = INT8_MIN;
	static int32_t t10 = 28495;

	t10 = ((x41|x42)-(x43==x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	static int64_t x46 = INT64_MIN;
	int16_t x47 = -1;

	t11 = ((x45|x46)-(x47==x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int32_t x50 = INT32_MIN;
	volatile uint8_t x51 = 5U;
	volatile int64_t t12 = 1091919885499568LL;

	t12 = ((x49|x50)-(x51==x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -14;
	uint64_t x54 = UINT64_MAX;
	int64_t x56 = -1LL;
	volatile uint64_t t13 = UINT64_MAX;

	t13 = ((x53|x54)-(x55==x56));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 38124461U;
	volatile int8_t x58 = INT8_MIN;
	int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	volatile uint32_t t14 = 22U;

	t14 = ((x57|x58)-(x59==x60));

	if (t14 != 4294967213U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	int32_t x62 = INT32_MIN;
	int64_t x63 = 93516720650697LL;

	t15 = ((x61|x62)-(x63==x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -2129153;
	int64_t x66 = -1LL;
	int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MAX;
	static int64_t t16 = 9336LL;

	t16 = ((x65|x66)-(x67==x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MAX;
	uint64_t x71 = 79727086567LLU;
	int32_t t17 = -175;

	t17 = ((x69|x70)-(x71==x72));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	int8_t x74 = -43;
	int64_t x75 = INT64_MIN;
	volatile int8_t x76 = 0;
	volatile int32_t t18 = -1808800;

	t18 = ((x73|x74)-(x75==x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	volatile uint8_t x78 = 0U;
	int16_t x79 = INT16_MAX;
	uint64_t x80 = 2736221561672873LLU;
	volatile int32_t t19 = -35;

	t19 = ((x77|x78)-(x79==x80));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint32_t x83 = UINT32_MAX;
	volatile int32_t x84 = -1;

	t20 = ((x81|x82)-(x83==x84));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	static uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MIN;
	static int16_t x88 = INT16_MIN;

	t21 = ((x85|x86)-(x87==x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int16_t x90 = -1;
	int32_t x92 = -54595396;
	volatile int32_t t22 = 1037049948;

	t22 = ((x89|x90)-(x91==x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	int32_t x94 = INT32_MAX;
	int64_t x95 = -1LL;
	volatile int16_t x96 = -62;

	t23 = ((x93|x94)-(x95==x96));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = -20940;
	int8_t x99 = -1;
	volatile int32_t t24 = 28036;

	t24 = ((x97|x98)-(x99==x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 1U;
	uint16_t x102 = UINT16_MAX;
	static uint64_t x103 = 26LLU;
	int16_t x104 = -1;
	static uint32_t t25 = 3U;

	t25 = ((x101|x102)-(x103==x104));

	if (t25 != 65535U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int32_t x106 = INT32_MIN;
	uint8_t x107 = 109U;
	static int32_t t26 = -2605;

	t26 = ((x105|x106)-(x107==x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	volatile int32_t x112 = 409590;

	t27 = ((x109|x110)-(x111==x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static int32_t x114 = INT32_MAX;
	uint64_t x115 = UINT64_MAX;
	volatile int8_t x116 = -1;

	t28 = ((x113|x114)-(x115==x116));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	uint64_t x118 = 253174809LLU;
	int8_t x120 = 28;
	volatile uint64_t t29 = 435470534356892LLU;

	t29 = ((x117|x118)-(x119==x120));

	if (t29 != 253198335LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 118U;
	int8_t x122 = 0;
	static uint64_t x124 = UINT64_MAX;
	int32_t t30 = -4;

	t30 = ((x121|x122)-(x123==x124));

	if (t30 != 118) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 2U;
	static uint8_t x126 = 0U;
	int8_t x127 = INT8_MIN;
	volatile uint8_t x128 = 106U;

	t31 = ((x125|x126)-(x127==x128));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 62;
	int16_t x130 = 168;
	int16_t x131 = 6;
	int8_t x132 = INT8_MAX;
	static volatile int32_t t32 = 1;

	t32 = ((x129|x130)-(x131==x132));

	if (t32 != 190) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = -1;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = INT16_MAX;

	t33 = ((x133|x134)-(x135==x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x137 = UINT32_MAX;
	uint64_t x138 = UINT64_MAX;
	static uint8_t x139 = UINT8_MAX;
	int16_t x140 = -1;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = ((x137|x138)-(x139==x140));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x141 = INT8_MAX;
	uint64_t x142 = 7055LLU;
	uint64_t x143 = 94LLU;
	int8_t x144 = 2;
	static volatile uint64_t t35 = 22420061639LLU;

	t35 = ((x141|x142)-(x143==x144));

	if (t35 != 7167LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -104;
	volatile uint64_t x146 = 167LLU;
	static int16_t x147 = INT16_MIN;
	uint64_t t36 = 29700231492LLU;

	t36 = ((x145|x146)-(x147==x148));

	if (t36 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 261880790877313LLU;
	int8_t x151 = 2;

	t37 = ((x149|x150)-(x151==x152));

	if (t37 != 261880790877861LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	volatile uint16_t x154 = UINT16_MAX;
	volatile int8_t x156 = 1;
	int32_t t38 = -1230399;

	t38 = ((x153|x154)-(x155==x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	volatile int16_t x159 = -1;
	int64_t x160 = INT64_MAX;

	t39 = ((x157|x158)-(x159==x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	static volatile int32_t x162 = -1;
	int32_t x164 = -1;

	t40 = ((x161|x162)-(x163==x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x166 = 2U;
	int16_t x167 = INT16_MAX;
	uint32_t x168 = 938U;
	volatile int32_t t41 = INT32_MAX;

	t41 = ((x165|x166)-(x167==x168));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	volatile uint8_t x172 = UINT8_MAX;
	int32_t t42 = 1;

	t42 = ((x169|x170)-(x171==x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x173 = 61U;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MAX;
	static volatile uint32_t t43 = 1867716U;

	t43 = ((x173|x174)-(x175==x176));

	if (t43 != 4294934589U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	volatile uint32_t x178 = 375998092U;
	uint32_t x179 = 195812U;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x177|x178)-(x179==x180));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x184 = 40U;
	static volatile int64_t t45 = 874956597658806LL;

	t45 = ((x181|x182)-(x183==x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = -60702210404556LL;
	static int16_t x187 = INT16_MAX;
	int64_t x188 = INT64_MIN;

	t46 = ((x185|x186)-(x187==x188));

	if (t46 != -1437610188LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	uint16_t x191 = UINT16_MAX;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x189|x190)-(x191==x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 123389210;
	volatile int64_t x194 = 6696397899706LL;
	static volatile int64_t t48 = 496397486013838555LL;

	t48 = ((x193|x194)-(x195==x196));

	if (t48 != 6696516437946LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -1LL;
	static int8_t x199 = 52;
	volatile int16_t x200 = -1;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x197|x198)-(x199==x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 2960490464LLU;
	uint32_t x202 = 984268U;
	static int16_t x204 = 0;
	volatile uint64_t t50 = 1064254621LLU;

	t50 = ((x201|x202)-(x203==x204));

	if (t50 != 2961145836LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x205 = 44439U;
	volatile uint32_t x206 = 19692663U;
	uint16_t x207 = 850U;
	int64_t x208 = INT64_MIN;
	uint32_t t51 = 948062U;

	t51 = ((x205|x206)-(x207==x208));

	if (t51 != 19725815U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 0;
	uint16_t x210 = 479U;
	int64_t x211 = 184544647607914029LL;
	int32_t x212 = INT32_MIN;
	int32_t t52 = 540;

	t52 = ((x209|x210)-(x211==x212));

	if (t52 != 479) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	uint32_t x216 = UINT32_MAX;
	int32_t t53 = 18;

	t53 = ((x213|x214)-(x215==x216));

	if (t53 != -32513) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 3814987317613575LLU;
	volatile int32_t x219 = INT32_MAX;
	static volatile int16_t x220 = INT16_MAX;
	static volatile uint64_t t54 = 116824LLU;

	t54 = ((x217|x218)-(x219==x220));

	if (t54 != 3814987318163167LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MIN;
	int32_t x223 = 11556904;
	volatile int32_t x224 = 4;
	volatile int32_t t55 = 26;

	t55 = ((x221|x222)-(x223==x224));

	if (t55 != -2147479883) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = -187;
	uint32_t x227 = 6390407U;
	int8_t x228 = 1;
	int32_t t56 = -3099;

	t56 = ((x225|x226)-(x227==x228));

	if (t56 != -59) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = 8080U;
	static int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 1;
	int32_t t57 = -3;

	t57 = ((x229|x230)-(x231==x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = INT8_MIN;
	volatile int8_t x235 = INT8_MIN;
	static int32_t x236 = 6497;
	volatile int64_t t58 = 11807699282921LL;

	t58 = ((x233|x234)-(x235==x236));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int8_t x238 = INT8_MAX;
	int8_t x239 = INT8_MAX;
	static int16_t x240 = 0;
	int32_t t59 = 15044956;

	t59 = ((x237|x238)-(x239==x240));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 90U;
	uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 34U;
	int8_t x244 = INT8_MAX;

	t60 = ((x241|x242)-(x243==x244));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x246 = -1;
	int8_t x247 = -9;
	int64_t x248 = 1719507559803LL;
	int32_t t61 = 68379;

	t61 = ((x245|x246)-(x247==x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x249 = 1U;
	int8_t x250 = -1;
	int64_t x251 = -401LL;
	static int8_t x252 = INT8_MIN;
	int32_t t62 = 2;

	t62 = ((x249|x250)-(x251==x252));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = 7228017U;
	volatile int32_t x255 = -28466096;
	int64_t x256 = 203LL;
	static volatile uint32_t t63 = 119137652U;

	t63 = ((x253|x254)-(x255==x256));

	if (t63 != 4294967281U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x258 = -1;
	int64_t x260 = -1LL;
	volatile int64_t t64 = -1117129505114LL;

	t64 = ((x257|x258)-(x259==x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 0U;
	static int32_t x262 = 17055497;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = INT8_MAX;
	volatile int32_t t65 = 157101;

	t65 = ((x261|x262)-(x263==x264));

	if (t65 != 17055497) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 14;
	uint64_t x266 = 45835033623111LLU;
	static int32_t x267 = INT32_MAX;
	uint16_t x268 = UINT16_MAX;

	t66 = ((x265|x266)-(x267==x268));

	if (t66 != 45835033623119LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MAX;
	volatile uint32_t x271 = 103749U;
	uint8_t x272 = 4U;
	volatile int64_t t67 = 42815699304LL;

	t67 = ((x269|x270)-(x271==x272));

	if (t67 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	static uint64_t x274 = 389339921574LLU;
	int64_t x275 = INT64_MAX;
	int8_t x276 = INT8_MIN;
	static volatile uint64_t t68 = 101922LLU;

	t68 = ((x273|x274)-(x275==x276));

	if (t68 != 18446744073709551526LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MIN;
	int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MIN;
	uint16_t x280 = UINT16_MAX;
	int32_t t69 = -87137899;

	t69 = ((x277|x278)-(x279==x280));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -64;
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = 420413LLU;
	volatile int32_t t70 = 10317;

	t70 = ((x281|x282)-(x283==x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x286 = 6LLU;
	static int64_t x287 = INT64_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	uint64_t t71 = 50945LLU;

	t71 = ((x285|x286)-(x287==x288));

	if (t71 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int32_t x290 = INT32_MIN;
	int8_t x291 = 16;
	int32_t t72 = 904430231;

	t72 = ((x289|x290)-(x291==x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x294 = INT8_MIN;
	int16_t x296 = 2;
	uint64_t t73 = UINT64_MAX;

	t73 = ((x293|x294)-(x295==x296));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -3561921LL;
	static uint64_t x299 = UINT64_MAX;
	uint64_t x300 = 517964602805144LLU;
	static int64_t t74 = 72862839812812471LL;

	t74 = ((x297|x298)-(x299==x300));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int16_t x302 = 5528;
	int8_t x303 = 0;
	uint64_t t75 = UINT64_MAX;

	t75 = ((x301|x302)-(x303==x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int16_t x306 = 32;
	static int8_t x307 = 3;
	int16_t x308 = -1;

	t76 = ((x305|x306)-(x307==x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	static uint32_t x311 = 217U;
	static int8_t x312 = -1;

	t77 = ((x309|x310)-(x311==x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = -1;
	int16_t x315 = INT16_MAX;
	int32_t t78 = -231530333;

	t78 = ((x313|x314)-(x315==x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x319 = INT8_MIN;
	int8_t x320 = 11;
	volatile uint32_t t79 = 123180U;

	t79 = ((x317|x318)-(x319==x320));

	if (t79 != 18U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	uint8_t x322 = UINT8_MAX;
	int64_t x323 = INT64_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = ((x321|x322)-(x323==x324));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	volatile int8_t x326 = -38;
	int32_t x327 = -1;
	static volatile int8_t x328 = 6;
	volatile int32_t t81 = 0;

	t81 = ((x325|x326)-(x327==x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int64_t x331 = INT64_MIN;
	int32_t x332 = -573;
	uint64_t t82 = 16LLU;

	t82 = ((x329|x330)-(x331==x332));

	if (t82 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	volatile uint32_t x335 = 55771593U;
	volatile int32_t t83 = 367193;

	t83 = ((x333|x334)-(x335==x336));

	if (t83 != -2147483521) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = 8269U;

	t84 = ((x337|x338)-(x339==x340));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	static int32_t x342 = 9652354;
	int8_t x343 = -3;
	static int32_t t85 = -546677;

	t85 = ((x341|x342)-(x343==x344));

	if (t85 != 9666559) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	static volatile int16_t x346 = 81;
	uint8_t x347 = UINT8_MAX;
	static volatile uint32_t x348 = 60784U;
	int64_t t86 = INT64_MAX;

	t86 = ((x345|x346)-(x347==x348));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = 129175832633842LL;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x349|x350)-(x351==x352));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	static int16_t x354 = 1;
	int32_t x355 = -453045;
	int8_t x356 = -1;
	int32_t t88 = -199;

	t88 = ((x353|x354)-(x355==x356));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	uint8_t x358 = 13U;
	volatile int16_t x359 = INT16_MAX;
	static uint64_t x360 = UINT64_MAX;
	int32_t t89 = 19981495;

	t89 = ((x357|x358)-(x359==x360));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	static uint8_t x363 = 11U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t90 = 5730071739341LL;

	t90 = ((x361|x362)-(x363==x364));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	int32_t x368 = 7939;
	volatile int32_t t91 = 226;

	t91 = ((x365|x366)-(x367==x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 4562280U;
	int8_t x370 = INT8_MIN;
	int32_t x371 = -1;
	int64_t x372 = 76478988169150LL;
	uint32_t t92 = 223987407U;

	t92 = ((x369|x370)-(x371==x372));

	if (t92 != 4294967272U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = -420;
	int64_t x374 = -159397307LL;
	int64_t x375 = -8106479270727LL;
	int64_t x376 = -1LL;
	volatile int64_t t93 = -275724692089681677LL;

	t93 = ((x373|x374)-(x375==x376));

	if (t93 != -419LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MAX;
	uint16_t x378 = UINT16_MAX;
	static int16_t x379 = 5034;
	int32_t x380 = 164;
	int32_t t94 = 357858;

	t94 = ((x377|x378)-(x379==x380));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	int64_t x382 = -12380139353145LL;
	volatile uint16_t x383 = 5U;
	int16_t x384 = -1396;
	volatile int64_t t95 = -493LL;

	t95 = ((x381|x382)-(x383==x384));

	if (t95 != -12380139323393LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 39U;
	uint8_t x386 = 25U;
	uint16_t x388 = 431U;
	volatile int32_t t96 = 447894;

	t96 = ((x385|x386)-(x387==x388));

	if (t96 != 63) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 0U;
	int32_t x390 = INT32_MIN;
	static volatile int64_t x391 = INT64_MIN;
	volatile uint8_t x392 = 2U;
	volatile int32_t t97 = INT32_MIN;

	t97 = ((x389|x390)-(x391==x392));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t t98 = -1803710LL;

	t98 = ((x393|x394)-(x395==x396));

	if (t98 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MAX;
	int32_t x398 = 15;
	uint16_t x399 = UINT16_MAX;
	static uint64_t x400 = 136323371664LLU;
	volatile int32_t t99 = INT32_MAX;

	t99 = ((x397|x398)-(x399==x400));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

