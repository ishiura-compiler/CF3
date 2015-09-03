#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
uint32_t x8 = 130395U;
int64_t t5 = -15LL;
int16_t x55 = INT16_MIN;
volatile int16_t x58 = INT16_MIN;
int32_t t12 = 17543598;
volatile uint16_t x61 = UINT16_MAX;
int8_t x63 = 12;
volatile int64_t t14 = -14561007909479LL;
static int64_t x70 = 221563944360025612LL;
static int16_t x72 = 6;
uint64_t t16 = 382711LLU;
volatile int8_t x87 = -1;
volatile uint32_t x94 = 108265U;
int64_t x106 = INT64_MAX;
int16_t x107 = INT16_MIN;
uint16_t x111 = 24U;
volatile int8_t x116 = INT8_MIN;
int32_t t25 = -543998646;
uint8_t x122 = 103U;
volatile int32_t x125 = 0;
volatile uint16_t x128 = 15186U;
uint32_t x130 = 49906U;
int64_t x136 = INT64_MIN;
int32_t x145 = -277;
static volatile uint64_t x151 = UINT64_MAX;
int16_t x152 = INT16_MIN;
int64_t t34 = -174394765LL;
int32_t t35 = 125051;
int64_t x166 = 1044756523451085LL;
volatile int64_t t37 = -1688124383LL;
volatile int16_t x185 = INT16_MAX;
int64_t x190 = -4LL;
int32_t x193 = INT32_MAX;
uint16_t x194 = 31U;
volatile uint16_t x202 = 24U;
int64_t x205 = INT64_MIN;
volatile uint64_t x210 = 84473970LLU;
int8_t x214 = INT8_MIN;
int64_t x215 = 5579330LL;
static int16_t x225 = INT16_MAX;
static uint32_t x230 = UINT32_MAX;
uint64_t x233 = 977771572136321LLU;
int64_t x234 = -58427105158LL;
static volatile int32_t t56 = -479000035;
uint8_t x245 = 56U;
int64_t x250 = -1LL;
int64_t t58 = -28LL;
int64_t x255 = -1LL;
int16_t x262 = -1;
uint8_t x264 = 1U;
int64_t x265 = INT64_MIN;
int16_t x276 = INT16_MIN;
static volatile uint32_t t64 = UINT32_MAX;
uint16_t x277 = 15U;
int8_t x279 = INT8_MAX;
int16_t x284 = INT16_MAX;
uint16_t x285 = 780U;
volatile int32_t t68 = 5375;
volatile int32_t x295 = INT32_MIN;
volatile int64_t t69 = 88085842278820664LL;
int32_t x299 = 244313;
int64_t x304 = -1LL;
volatile int32_t t71 = 49565277;
static volatile int32_t x307 = 2;
int32_t t72 = 250390513;
int8_t x316 = -9;
int32_t x323 = INT32_MIN;
static int8_t x328 = INT8_MIN;
volatile int16_t x333 = INT16_MAX;
volatile int64_t t79 = -394537357527692LL;
static int8_t x340 = INT8_MAX;
static volatile uint32_t t80 = 13251U;
int32_t x346 = INT32_MAX;
volatile int8_t x351 = 0;
static volatile int64_t x352 = INT64_MIN;
volatile int64_t t83 = 4648682LL;
static int32_t x353 = INT32_MIN;
volatile int16_t x356 = INT16_MIN;
static int8_t x361 = INT8_MAX;
static volatile int16_t x363 = INT16_MIN;
int16_t x364 = INT16_MIN;
volatile int32_t t86 = -3633211;
int32_t x366 = 18816;
int32_t x370 = 115;
volatile int64_t x371 = INT64_MAX;
static int32_t x373 = INT32_MIN;
volatile uint32_t x374 = 6646U;
static uint8_t x382 = UINT8_MAX;
int64_t x384 = -33610LL;
int16_t x394 = -24;
volatile int16_t x397 = 3;
int32_t x409 = INT32_MIN;
static uint32_t t99 = 394279774U;


void f0(void) {
	int64_t x1 = 0LL;
	int64_t x2 = 56073LL;
	int8_t x3 = INT8_MIN;
	volatile int64_t t0 = -14876502620458566LL;

	t0 = ((x1|x2)+(x3<=x4));

	if (t0 != 56073LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 61U;
	uint32_t x6 = 15739654U;
	uint64_t x7 = 23013LLU;
	uint32_t t1 = 31413687U;

	t1 = ((x5|x6)+(x7<=x8));

	if (t1 != 15739712U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 2129874260U;
	static int8_t x10 = INT8_MIN;
	int8_t x11 = -1;
	uint32_t x12 = 42U;
	uint32_t t2 = 56915U;

	t2 = ((x9|x10)+(x11<=x12));

	if (t2 != 4294967252U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = -1;
	int64_t x15 = -1LL;
	volatile uint32_t x16 = 1994990U;
	static int64_t t3 = -543640LL;

	t3 = ((x13|x14)+(x15<=x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	static volatile int64_t x22 = -1LL;
	int16_t x23 = -1;
	int64_t x24 = 630798625363901305LL;
	volatile int64_t t4 = 3397553LL;

	t4 = ((x21|x22)+(x23<=x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MIN;
	int32_t x26 = -3123;
	uint16_t x27 = 0U;
	uint8_t x28 = 1U;

	t5 = ((x25|x26)+(x27<=x28));

	if (t5 != -3122LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = -3993;
	volatile uint64_t x30 = 209717LLU;
	int32_t x31 = -3975458;
	int64_t x32 = -17364546LL;
	uint64_t t6 = 601106727801LLU;

	t6 = ((x29|x30)+(x31<=x32));

	if (t6 != 18446744073709548407LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 1016;
	int8_t x34 = INT8_MAX;
	int16_t x35 = -175;
	int8_t x36 = -1;
	int32_t t7 = 0;

	t7 = ((x33|x34)+(x35<=x36));

	if (t7 != 1024) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	volatile uint64_t x42 = UINT64_MAX;
	static volatile uint16_t x43 = 7U;
	int8_t x44 = -1;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x41|x42)+(x43<=x44));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x45 = INT64_MIN;
	uint16_t x46 = UINT16_MAX;
	static uint32_t x47 = 690911U;
	static int8_t x48 = 1;
	int64_t t9 = 54178978364935LL;

	t9 = ((x45|x46)+(x47<=x48));

	if (t9 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = -2485;
	int32_t x50 = -1;
	int8_t x51 = INT8_MIN;
	volatile int32_t x52 = INT32_MIN;
	static int32_t t10 = 218;

	t10 = ((x49|x50)+(x51<=x52));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x53 = UINT16_MAX;
	static volatile int8_t x54 = INT8_MIN;
	int64_t x56 = -3830LL;
	int32_t t11 = 5216;

	t11 = ((x53|x54)+(x55<=x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x57 = INT32_MAX;
	volatile int32_t x59 = INT32_MAX;
	volatile int8_t x60 = INT8_MIN;

	t12 = ((x57|x58)+(x59<=x60));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x62 = 0U;
	static int64_t x64 = -66689898277645LL;
	volatile int32_t t13 = 913;

	t13 = ((x61|x62)+(x63<=x64));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 11828676941LL;
	int8_t x66 = INT8_MIN;
	static int32_t x67 = -1;
	int16_t x68 = 2;

	t14 = ((x65|x66)+(x67<=x68));

	if (t14 != -50LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int8_t x71 = -1;
	static int64_t t15 = -491790LL;

	t15 = ((x69|x70)+(x71<=x72));

	if (t15 != -9001808092494750195LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 1U;
	static uint64_t x74 = 131LLU;
	int16_t x75 = -1;
	volatile int32_t x76 = INT32_MIN;

	t16 = ((x73|x74)+(x75<=x76));

	if (t16 != 131LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	static int8_t x78 = 6;
	volatile int32_t x79 = -1;
	uint8_t x80 = 54U;
	volatile int32_t t17 = 14;

	t17 = ((x77|x78)+(x79<=x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = -1;
	int32_t x82 = INT32_MAX;
	static int8_t x83 = -1;
	int32_t x84 = INT32_MIN;
	volatile int32_t t18 = -110512;

	t18 = ((x81|x82)+(x83<=x84));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x85 = 1321650559906172965LLU;
	volatile int8_t x86 = -25;
	int64_t x88 = -850287LL;
	static volatile uint64_t t19 = 69705LLU;

	t19 = ((x85|x86)+(x87<=x88));

	if (t19 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x89 = INT32_MAX;
	static volatile int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MIN;
	static int32_t t20 = 215652;

	t20 = ((x89|x90)+(x91<=x92));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int8_t x95 = 0;
	uint64_t x96 = 72500862659LLU;
	uint32_t t21 = 739U;

	t21 = ((x93|x94)+(x95<=x96));

	if (t21 != 2147591914U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -7;
	static int8_t x108 = INT8_MIN;
	volatile int64_t t22 = 31LL;

	t22 = ((x105|x106)+(x107<=x108));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = 9U;
	static volatile uint32_t x110 = 222U;
	volatile int32_t x112 = INT32_MIN;
	static uint32_t t23 = 1U;

	t23 = ((x109|x110)+(x111<=x112));

	if (t23 != 223U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 2830333912LLU;
	uint32_t x114 = UINT32_MAX;
	static int16_t x115 = 157;
	volatile uint64_t t24 = 610449650LLU;

	t24 = ((x113|x114)+(x115<=x116));

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = INT16_MIN;
	uint16_t x118 = 16277U;
	static int32_t x119 = -1;
	int16_t x120 = -1117;

	t25 = ((x117|x118)+(x119<=x120));

	if (t25 != -16491) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x121 = UINT64_MAX;
	int32_t x123 = -19819;
	uint16_t x124 = UINT16_MAX;
	static uint64_t t26 = 27255544996193543LLU;

	t26 = ((x121|x122)+(x123<=x124));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = -296980577;
	static volatile uint32_t x127 = UINT32_MAX;
	int32_t t27 = -991160995;

	t27 = ((x125|x126)+(x127<=x128));

	if (t27 != -296980577) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = -1LL;
	static int32_t x131 = -6497;
	volatile int64_t x132 = INT64_MIN;
	static volatile int64_t t28 = -5397090LL;

	t28 = ((x129|x130)+(x131<=x132));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = 142U;
	int16_t x134 = 1179;
	int8_t x135 = -1;
	int32_t t29 = -230992;

	t29 = ((x133|x134)+(x135<=x136));

	if (t29 != 1183) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	static uint64_t t30 = UINT64_MAX;

	t30 = ((x137|x138)+(x139<=x140));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x141 = -15;
	static uint32_t x142 = 241U;
	uint64_t x143 = 126LLU;
	volatile uint16_t x144 = 2808U;
	uint32_t t31 = 34935U;

	t31 = ((x141|x142)+(x143<=x144));

	if (t31 != 4294967282U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x146 = 70607864U;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	uint32_t t32 = 49U;

	t32 = ((x145|x146)+(x147<=x148));

	if (t32 != 4294967291U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 183726U;
	uint8_t x150 = 11U;
	uint32_t t33 = 1854U;

	t33 = ((x149|x150)+(x151<=x152));

	if (t33 != 183727U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MAX;
	uint8_t x155 = 62U;
	int8_t x156 = INT8_MAX;

	t34 = ((x153|x154)+(x155<=x156));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x157 = -1;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 23U;
	int8_t x160 = INT8_MIN;

	t35 = ((x157|x158)+(x159<=x160));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = INT64_MAX;
	static int32_t x162 = 104928;
	static volatile int8_t x163 = 24;
	volatile uint8_t x164 = 20U;
	volatile int64_t t36 = INT64_MAX;

	t36 = ((x161|x162)+(x163<=x164));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x165 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = 7;

	t37 = ((x165|x166)+(x167<=x168));

	if (t37 != -713751859LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = 1;
	int8_t x170 = 3;
	int32_t x171 = INT32_MIN;
	int8_t x172 = -1;
	int32_t t38 = 861984;

	t38 = ((x169|x170)+(x171<=x172));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	int64_t x175 = -1LL;
	int32_t x176 = INT32_MAX;
	volatile int32_t t39 = 0;

	t39 = ((x173|x174)+(x175<=x176));

	if (t39 != -2147450880) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x177 = INT32_MIN;
	volatile int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MIN;
	volatile int64_t x180 = 53LL;
	int32_t t40 = -11;

	t40 = ((x177|x178)+(x179<=x180));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = 4;
	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	int64_t t41 = -1272954838LL;

	t41 = ((x181|x182)+(x183<=x184));

	if (t41 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	int64_t x188 = -1LL;
	volatile int32_t t42 = 3596;

	t42 = ((x185|x186)+(x187<=x188));

	if (t42 != -2147450880) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = 1U;
	volatile uint16_t x191 = 28U;
	static uint64_t x192 = UINT64_MAX;
	static int64_t t43 = 125LL;

	t43 = ((x189|x190)+(x191<=x192));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x195 = UINT16_MAX;
	volatile uint16_t x196 = 3U;
	volatile int32_t t44 = INT32_MAX;

	t44 = ((x193|x194)+(x195<=x196));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 49U;
	static uint64_t x198 = 224993192052LLU;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile uint64_t t45 = 27217942141909LLU;

	t45 = ((x197|x198)+(x199<=x200));

	if (t45 != 224993192054LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = -6;
	volatile uint8_t x203 = 62U;
	uint16_t x204 = UINT16_MAX;
	int32_t t46 = 7586;

	t46 = ((x201|x202)+(x203<=x204));

	if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x206 = INT16_MAX;
	static int16_t x207 = 1;
	uint32_t x208 = UINT32_MAX;
	volatile int64_t t47 = -1756654LL;

	t47 = ((x205|x206)+(x207<=x208));

	if (t47 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x209 = INT64_MIN;
	int32_t x211 = -62668122;
	static int32_t x212 = -6;
	static volatile uint64_t t48 = 802348098955787LLU;

	t48 = ((x209|x210)+(x211<=x212));

	if (t48 != 9223372036939249779LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x216 = 3236LL;
	static uint32_t t49 = UINT32_MAX;

	t49 = ((x213|x214)+(x215<=x216));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -2;
	static uint8_t x218 = 124U;
	int16_t x219 = INT16_MIN;
	static uint32_t x220 = UINT32_MAX;
	static int32_t t50 = 9246979;

	t50 = ((x217|x218)+(x219<=x220));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x221 = INT8_MIN;
	int8_t x222 = -14;
	static int32_t x223 = 1694;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t51 = 117251;

	t51 = ((x221|x222)+(x223<=x224));

	if (t51 != -14) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x226 = INT8_MAX;
	uint16_t x227 = 117U;
	static uint64_t x228 = 123533769LLU;
	volatile int32_t t52 = -17846600;

	t52 = ((x225|x226)+(x227<=x228));

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MAX;
	static uint8_t x231 = 3U;
	int64_t x232 = INT64_MIN;
	static uint32_t t53 = UINT32_MAX;

	t53 = ((x229|x230)+(x231<=x232));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x235 = 132212931;
	int16_t x236 = 1;
	uint64_t t54 = 747622537286LLU;

	t54 = ((x233|x234)+(x235<=x236));

	if (t54 != 18446744036925221371LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -1LL;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int64_t t55 = 90819191923LL;

	t55 = ((x237|x238)+(x239<=x240));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x241 = UINT8_MAX;
	volatile uint16_t x242 = 6910U;
	int32_t x243 = -1;
	volatile uint8_t x244 = UINT8_MAX;

	t56 = ((x241|x242)+(x243<=x244));

	if (t56 != 6912) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x246 = -917645922569329LL;
	int8_t x247 = INT8_MIN;
	int64_t x248 = -2489626108887024LL;
	static int64_t t57 = -17610807LL;

	t57 = ((x245|x246)+(x247<=x248));

	if (t57 != -917645922569281LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	uint64_t x251 = 2337336124889575930LLU;
	int8_t x252 = INT8_MIN;

	t58 = ((x249|x250)+(x251<=x252));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = 317LLU;
	static int16_t x254 = INT16_MIN;
	int8_t x256 = -12;
	volatile uint64_t t59 = 93740LLU;

	t59 = ((x253|x254)+(x255<=x256));

	if (t59 != 18446744073709519165LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MIN;
	uint8_t x258 = 6U;
	volatile int64_t x259 = INT64_MIN;
	int16_t x260 = 26;
	static volatile int64_t t60 = 78148547019664LL;

	t60 = ((x257|x258)+(x259<=x260));

	if (t60 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int8_t x263 = INT8_MAX;
	uint32_t t61 = UINT32_MAX;

	t61 = ((x261|x262)+(x263<=x264));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x266 = 3U;
	volatile int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	int64_t t62 = -28071LL;

	t62 = ((x265|x266)+(x267<=x268));

	if (t62 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -1314LL;
	volatile int64_t x270 = INT64_MIN;
	static int64_t x271 = 558168470LL;
	int16_t x272 = -1;
	int64_t t63 = 1626LL;

	t63 = ((x269|x270)+(x271<=x272));

	if (t63 != -1314LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = UINT32_MAX;
	static int32_t x274 = -1;
	int64_t x275 = INT64_MAX;

	t64 = ((x273|x274)+(x275<=x276));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x278 = INT8_MIN;
	int8_t x280 = -1;
	volatile int32_t t65 = 1;

	t65 = ((x277|x278)+(x279<=x280));

	if (t65 != -113) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MAX;
	uint32_t x283 = UINT32_MAX;
	int32_t t66 = INT32_MAX;

	t66 = ((x281|x282)+(x283<=x284));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x286 = INT64_MAX;
	int64_t x287 = INT64_MAX;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t67 = INT64_MAX;

	t67 = ((x285|x286)+(x287<=x288));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = -9753;
	int8_t x291 = -3;
	static volatile int64_t x292 = INT64_MIN;

	t68 = ((x289|x290)+(x291<=x292));

	if (t68 != -9753) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MIN;
	int8_t x296 = -1;

	t69 = ((x293|x294)+(x295<=x296));

	if (t69 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 11536U;
	static uint8_t x298 = UINT8_MAX;
	static volatile int8_t x300 = 2;
	static volatile int32_t t70 = -22;

	t70 = ((x297|x298)+(x299<=x300));

	if (t70 != 11775) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	volatile uint8_t x303 = 3U;

	t71 = ((x301|x302)+(x303<=x304));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x305 = 25U;
	volatile uint8_t x306 = UINT8_MAX;
	static uint32_t x308 = 15U;

	t72 = ((x305|x306)+(x307<=x308));

	if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x309 = INT32_MIN;
	uint64_t x310 = 193196429654653LLU;
	volatile int32_t x311 = INT32_MIN;
	static uint32_t x312 = UINT32_MAX;
	uint64_t t73 = 8316143LLU;

	t73 = ((x309|x310)+(x311<=x312));

	if (t73 != 18446744071772813950LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -12;
	uint16_t x314 = 3002U;
	volatile uint32_t x315 = UINT32_MAX;
	volatile int32_t t74 = -42;

	t74 = ((x313|x314)+(x315<=x316));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = 81U;
	int64_t x320 = INT64_MIN;
	static int32_t t75 = -69457;

	t75 = ((x317|x318)+(x319<=x320));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -2379725;
	volatile int64_t x322 = INT64_MIN;
	volatile int8_t x324 = INT8_MIN;
	volatile int64_t t76 = -531494706091567LL;

	t76 = ((x321|x322)+(x323<=x324));

	if (t76 != -2379724LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x325 = 103;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MIN;
	static int64_t t77 = 12LL;

	t77 = ((x325|x326)+(x327<=x328));

	if (t77 != -9223372036854775704LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x329 = 0U;
	volatile int16_t x330 = INT16_MAX;
	int16_t x331 = INT16_MIN;
	uint32_t x332 = UINT32_MAX;
	int32_t t78 = -47095187;

	t78 = ((x329|x330)+(x331<=x332));

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x334 = INT64_MIN;
	int8_t x335 = 52;
	uint64_t x336 = 7LLU;

	t79 = ((x333|x334)+(x335<=x336));

	if (t79 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 484U;
	volatile uint16_t x338 = 8U;
	uint8_t x339 = 95U;

	t80 = ((x337|x338)+(x339<=x340));

	if (t80 != 493U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x341 = 20U;
	volatile int32_t x342 = INT32_MIN;
	uint8_t x343 = 1U;
	volatile uint64_t x344 = 275411766887LLU;
	int32_t t81 = 10;

	t81 = ((x341|x342)+(x343<=x344));

	if (t81 != -2147483627) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x345 = UINT64_MAX;
	int32_t x347 = -5696482;
	int64_t x348 = -104168LL;
	volatile uint64_t t82 = 3LLU;

	t82 = ((x345|x346)+(x347<=x348));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MIN;

	t83 = ((x349|x350)+(x351<=x352));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x354 = -1;
	static volatile uint64_t x355 = 8851891332LLU;
	static volatile int32_t t84 = 30;

	t84 = ((x353|x354)+(x355<=x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x357 = 82127881;
	int16_t x358 = -1;
	int32_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	static volatile int32_t t85 = -1;

	t85 = ((x357|x358)+(x359<=x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = -3381;

	t86 = ((x361|x362)+(x363<=x364));

	if (t86 != -3328) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = -1;
	uint8_t x367 = UINT8_MAX;
	static uint32_t x368 = 2U;
	volatile int32_t t87 = -318;

	t87 = ((x365|x366)+(x367<=x368));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x369 = 1290763528U;
	static volatile int64_t x372 = INT64_MIN;
	volatile uint32_t t88 = 1664769U;

	t88 = ((x369|x370)+(x371<=x372));

	if (t88 != 1290763643U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x375 = 7;
	static volatile int32_t x376 = -1;
	uint32_t t89 = 155U;

	t89 = ((x373|x374)+(x375<=x376));

	if (t89 != 2147490294U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = 0;
	static uint32_t x378 = UINT32_MAX;
	volatile uint8_t x379 = 49U;
	volatile uint8_t x380 = 2U;
	uint32_t t90 = UINT32_MAX;

	t90 = ((x377|x378)+(x379<=x380));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t x383 = -1;
	volatile int32_t t91 = 231809333;

	t91 = ((x381|x382)+(x383<=x384));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = -1;
	volatile uint64_t x386 = 808847LLU;
	int32_t x387 = -7;
	int16_t x388 = -1;
	volatile uint64_t t92 = 7908492099476LLU;

	t92 = ((x385|x386)+(x387<=x388));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 17U;
	uint8_t x390 = UINT8_MAX;
	volatile int32_t x391 = INT32_MAX;
	static volatile int32_t x392 = INT32_MIN;
	int32_t t93 = -247788523;

	t93 = ((x389|x390)+(x391<=x392));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x393 = 23;
	static volatile int8_t x395 = INT8_MIN;
	uint8_t x396 = 82U;
	int32_t t94 = 10017205;

	t94 = ((x393|x394)+(x395<=x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x398 = 27;
	uint32_t x399 = 24423708U;
	int64_t x400 = 63629355686659699LL;
	static volatile int32_t t95 = 19968751;

	t95 = ((x397|x398)+(x399<=x400));

	if (t95 != 28) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MAX;
	uint8_t x402 = 1U;
	static uint64_t x403 = 21239490051824836LLU;
	uint64_t x404 = 1LLU;
	static volatile int64_t t96 = INT64_MAX;

	t96 = ((x401|x402)+(x403<=x404));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = UINT16_MAX;
	int8_t x406 = INT8_MAX;
	volatile int64_t x407 = INT64_MIN;
	volatile int64_t x408 = 1000777764776LL;
	int32_t t97 = -676;

	t97 = ((x405|x406)+(x407<=x408));

	if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x410 = UINT16_MAX;
	static int64_t x411 = -1LL;
	int64_t x412 = INT64_MIN;
	volatile int32_t t98 = 44;

	t98 = ((x409|x410)+(x411<=x412));

	if (t98 != -2147418113) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 58065226U;
	int16_t x414 = INT16_MAX;
	int64_t x415 = 1LL;
	int32_t x416 = INT32_MIN;

	t99 = ((x413|x414)+(x415<=x416));

	if (t99 != 58097663U) { NG(); } else { ; }
	
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

