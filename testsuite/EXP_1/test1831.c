#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 0;
int32_t x11 = INT32_MAX;
int64_t t2 = 7LL;
int8_t x19 = INT8_MIN;
uint64_t t4 = 31665499380247512LLU;
volatile int8_t x23 = -1;
int64_t x26 = INT64_MIN;
volatile int32_t t7 = 562479;
int32_t x36 = INT32_MIN;
volatile int32_t x40 = -1;
int32_t t10 = 2254;
static int16_t x47 = -2;
uint32_t x49 = UINT32_MAX;
uint64_t x53 = 4381407310298679LLU;
uint16_t x55 = UINT16_MAX;
volatile uint16_t x58 = UINT16_MAX;
int8_t x65 = INT8_MAX;
uint32_t t16 = 2883U;
uint16_t x73 = UINT16_MAX;
uint16_t x74 = 1851U;
static uint64_t x76 = UINT64_MAX;
volatile uint16_t x77 = 2U;
int32_t x85 = 64367;
int8_t x86 = INT8_MAX;
int64_t x91 = INT64_MAX;
volatile uint32_t x100 = UINT32_MAX;
uint32_t t24 = 466267884U;
static uint64_t x101 = 12505435663810LLU;
uint32_t x103 = UINT32_MAX;
int64_t x104 = -11LL;
int32_t x107 = INT32_MIN;
uint32_t x109 = UINT32_MAX;
int16_t x111 = -1;
int8_t x114 = INT8_MAX;
volatile int64_t t28 = 2289189650819464268LL;
uint64_t t29 = 2233529280046954699LLU;
int32_t x126 = -1;
static uint16_t x128 = UINT16_MAX;
volatile int64_t t31 = -299845829052LL;
volatile int64_t t33 = -27650344348316623LL;
volatile int16_t x140 = -1;
uint64_t x145 = UINT64_MAX;
volatile int16_t x146 = -1;
volatile uint64_t t37 = 35LLU;
int32_t x160 = INT32_MAX;
int32_t x165 = INT32_MIN;
int64_t x166 = INT64_MAX;
volatile int64_t t41 = 37946922481283LL;
int8_t x173 = INT8_MIN;
uint64_t x182 = UINT64_MAX;
int16_t x183 = -16200;
int32_t x187 = INT32_MIN;
static uint64_t x189 = UINT64_MAX;
volatile int32_t x193 = -16172310;
uint8_t x195 = 2U;
uint16_t x196 = 1500U;
uint64_t x197 = 1LLU;
uint32_t x204 = UINT32_MAX;
uint8_t x209 = 0U;
volatile int64_t t52 = 1786711734218785LL;
volatile int32_t x216 = -1;
uint64_t x217 = UINT64_MAX;
uint32_t x224 = UINT32_MAX;
volatile int32_t x228 = INT32_MIN;
static int8_t x235 = 0;
int64_t x238 = -1LL;
volatile int64_t t59 = 285913597457543513LL;
int64_t x243 = INT64_MAX;
int64_t x244 = -1LL;
int8_t x261 = INT8_MIN;
int16_t x264 = -31;
uint8_t x268 = 2U;
static uint8_t x270 = 4U;
int64_t x274 = 437LL;
volatile uint64_t t68 = 3337051088LLU;
uint8_t x282 = 0U;
volatile int32_t t70 = 5;
static int64_t x289 = -2125246130LL;
int32_t x292 = INT32_MAX;
volatile uint8_t x293 = 1U;
uint16_t x296 = UINT16_MAX;
uint32_t x297 = UINT32_MAX;
int32_t x298 = INT32_MAX;
int32_t x301 = INT32_MAX;
volatile int16_t x305 = INT16_MAX;
volatile uint8_t x309 = 11U;
volatile int32_t t79 = INT32_MAX;
uint32_t x324 = UINT32_MAX;
volatile uint64_t t80 = 282098910LLU;
uint64_t x328 = 213035693889LLU;
static volatile uint64_t t81 = 500200163896763766LLU;
int64_t x330 = 1408374127891035LL;
int8_t x332 = INT8_MIN;
int64_t x336 = INT64_MIN;
static uint32_t x339 = 1U;
static int64_t t84 = 1LL;
uint64_t x341 = 20606537190848320LLU;
static int64_t x349 = -242238486812188LL;
volatile int64_t t87 = -28651446LL;
int16_t x364 = INT16_MIN;
int64_t x366 = INT64_MAX;
int32_t x367 = INT32_MIN;
volatile int64_t x375 = -1LL;
static int16_t x376 = INT16_MAX;
volatile uint64_t x380 = 126833231505252LLU;
int16_t x381 = INT16_MIN;
uint32_t x383 = UINT32_MAX;
volatile int8_t x387 = 0;
volatile int8_t x392 = INT8_MIN;
uint8_t x395 = 10U;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static int64_t x2 = INT64_MIN;
	static uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 226708294112608LLU;

	t0 = (((x1&x2)&x3)&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 2U;
	static uint8_t x6 = UINT8_MAX;
	int8_t x7 = -9;
	uint8_t x8 = 111U;
	volatile int32_t t1 = 1263;

	t1 = (((x5&x6)&x7)&x8);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	uint16_t x10 = 878U;
	static volatile int64_t x12 = 109165047LL;

	t2 = (((x9&x10)&x11)&x12);

	if (t2 != 358LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int32_t x14 = INT32_MAX;
	int32_t x15 = INT32_MIN;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 324232LLU;

	t3 = (((x13&x14)&x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 2U;
	uint64_t x18 = UINT64_MAX;
	volatile uint16_t x20 = 1U;

	t4 = (((x17&x18)&x19)&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	uint16_t x22 = UINT16_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -1984;

	t5 = (((x21&x22)&x23)&x24);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	volatile uint64_t x27 = UINT64_MAX;
	volatile int16_t x28 = INT16_MAX;
	uint64_t t6 = 4505252685083080790LLU;

	t6 = (((x25&x26)&x27)&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	int32_t x30 = INT32_MAX;
	int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;

	t7 = (((x29&x30)&x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = UINT32_MAX;
	int64_t t8 = -864587084092470LL;

	t8 = (((x33&x34)&x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int32_t x38 = -1;
	static int32_t x39 = -9;
	volatile int32_t t9 = -4;

	t9 = (((x37&x38)&x39)&x40);

	if (t9 != 2147483639) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	static int8_t x42 = -1;
	int32_t x43 = 5713543;
	int16_t x44 = INT16_MIN;

	t10 = (((x41&x42)&x43)&x44);

	if (t10 != 5701632) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = 1;
	int32_t x48 = 44605;
	int32_t t11 = 9;

	t11 = (((x45&x46)&x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 2026483;
	uint64_t x51 = 14875372LLU;
	static int8_t x52 = -2;
	volatile uint64_t t12 = 13925567188LLU;

	t12 = (((x49&x50)&x51)&x52);

	if (t12 != 191200LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x54 = 3301285795LLU;
	int16_t x56 = 3718;
	uint64_t t13 = 9616LLU;

	t13 = (((x53&x54)&x55)&x56);

	if (t13 != 3586LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 15;
	volatile int16_t x59 = -6601;
	static int8_t x60 = INT8_MIN;
	static int32_t t14 = 438131196;

	t14 = (((x57&x58)&x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = -1LL;
	int32_t x62 = -1;
	int32_t x63 = -1;
	static uint8_t x64 = 6U;
	int64_t t15 = -2622LL;

	t15 = (((x61&x62)&x63)&x64);

	if (t15 != 6LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x66 = 24838U;
	int8_t x67 = INT8_MIN;
	static int32_t x68 = -1;

	t16 = (((x65&x66)&x67)&x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 188889496294LLU;
	static int32_t x70 = INT32_MIN;
	uint8_t x71 = 79U;
	volatile uint32_t x72 = 651006454U;
	static volatile uint64_t t17 = 1314015702180011283LLU;

	t17 = (((x69&x70)&x71)&x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x75 = INT8_MIN;
	volatile uint64_t t18 = 1602428289LLU;

	t18 = (((x73&x74)&x75)&x76);

	if (t18 != 1792LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MAX;
	uint64_t x79 = UINT64_MAX;
	static int32_t x80 = -87921375;
	volatile uint64_t t19 = 605810LLU;

	t19 = (((x77&x78)&x79)&x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -1LL;
	static uint64_t x82 = 25138660LLU;
	uint64_t x83 = 28666LLU;
	volatile int64_t x84 = 1070347983601586050LL;
	volatile uint64_t t20 = 21289LLU;

	t20 = (((x81&x82)&x83)&x84);

	if (t20 != 1408LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x87 = UINT8_MAX;
	static int32_t x88 = -1;
	static volatile int32_t t21 = -7056;

	t21 = (((x85&x86)&x87)&x88);

	if (t21 != 111) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = 248926;
	int16_t x90 = INT16_MIN;
	static int64_t x92 = INT64_MIN;
	int64_t t22 = 10485217LL;

	t22 = (((x89&x90)&x91)&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	uint16_t x94 = 0U;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = 79423598;
	volatile uint64_t t23 = 456818413LLU;

	t23 = (((x93&x94)&x95)&x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 2;
	int32_t x98 = INT32_MIN;
	int32_t x99 = 6904751;

	t24 = (((x97&x98)&x99)&x100);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -1;
	volatile uint64_t t25 = 4852241453608290LLU;

	t25 = (((x101&x102)&x103)&x104);

	if (t25 != 2785865152LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 1U;
	volatile uint32_t x106 = 29148U;
	static int8_t x108 = -1;
	volatile uint32_t t26 = 905520U;

	t26 = (((x105&x106)&x107)&x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 3164549;
	static int64_t x112 = 481194423208390484LL;
	volatile int64_t t27 = -1018LL;

	t27 = (((x109&x110)&x111)&x112);

	if (t27 != 3148036LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t x115 = 1085297;
	volatile int64_t x116 = 166196404LL;

	t28 = (((x113&x114)&x115)&x116);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = UINT64_MAX;
	int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 7U;

	t29 = (((x117&x118)&x119)&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 1577U;
	int32_t x122 = INT32_MAX;
	int8_t x123 = INT8_MAX;
	uint32_t x124 = UINT32_MAX;
	uint32_t t30 = 1385259470U;

	t30 = (((x121&x122)&x123)&x124);

	if (t30 != 41U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 85382587;
	volatile int64_t x127 = -1LL;

	t31 = (((x125&x126)&x127)&x128);

	if (t31 != 54715LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	int64_t x130 = -3444996LL;
	volatile uint32_t x131 = UINT32_MAX;
	volatile int32_t x132 = INT32_MAX;
	volatile int64_t t32 = 41510458138978LL;

	t32 = (((x129&x130)&x131)&x132);

	if (t32 != 2144038652LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 493885669269776227LL;
	int8_t x134 = INT8_MAX;
	static int8_t x135 = INT8_MIN;
	volatile int32_t x136 = 1;

	t33 = (((x133&x134)&x135)&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	int32_t x138 = INT32_MAX;
	static int32_t x139 = INT32_MIN;
	static int32_t t34 = -498017;

	t34 = (((x137&x138)&x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -9;
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = 0;
	uint32_t t35 = 28U;

	t35 = (((x141&x142)&x143)&x144);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x147 = 37;
	int32_t x148 = INT32_MIN;
	static volatile uint64_t t36 = 96241418LLU;

	t36 = (((x145&x146)&x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint64_t x150 = 15251209485LLU;
	volatile int64_t x151 = -1LL;
	uint32_t x152 = 67080490U;

	t37 = (((x149&x150)&x151)&x152);

	if (t37 != 17469704LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MIN;
	int64_t x155 = -226882966310540132LL;
	int32_t x156 = INT32_MIN;
	static volatile int64_t t38 = INT64_MIN;

	t38 = (((x153&x154)&x155)&x156);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 2U;
	static uint8_t x158 = 17U;
	volatile int16_t x159 = INT16_MIN;
	uint32_t t39 = 8456U;

	t39 = (((x157&x158)&x159)&x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x161 = -1;
	static volatile int32_t x162 = INT32_MIN;
	static int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MAX;
	volatile int32_t t40 = 27;

	t40 = (((x161&x162)&x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x167 = INT16_MIN;
	int16_t x168 = -1;

	t41 = (((x165&x166)&x167)&x168);

	if (t41 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	uint64_t x170 = 69828502783419LLU;
	static int32_t x171 = INT32_MIN;
	uint8_t x172 = 61U;
	volatile uint64_t t42 = 6954272159LLU;

	t42 = (((x169&x170)&x171)&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -1;
	int8_t x175 = -11;
	static int8_t x176 = INT8_MIN;
	int32_t t43 = 657;

	t43 = (((x173&x174)&x175)&x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	uint32_t x178 = 1599227U;
	volatile uint32_t x179 = 57659791U;
	int16_t x180 = INT16_MIN;
	static uint32_t t44 = 10911U;

	t44 = (((x177&x178)&x179)&x180);

	if (t44 != 524288U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x181 = INT32_MAX;
	uint64_t x184 = 7259LLU;
	uint64_t t45 = 12613208182259LLU;

	t45 = (((x181&x182)&x183)&x184);

	if (t45 != 24LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -2730;
	static uint8_t x186 = 53U;
	static volatile int64_t x188 = INT64_MIN;
	static volatile int64_t t46 = 2016081080699089LL;

	t46 = (((x185&x186)&x187)&x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MIN;
	static volatile int32_t x191 = INT32_MAX;
	static int32_t x192 = -19766;
	volatile uint64_t t47 = 2314LLU;

	t47 = (((x189&x190)&x191)&x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x194 = 113U;
	static volatile int32_t t48 = -8828;

	t48 = (((x193&x194)&x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = -3LL;
	int32_t x199 = 9;
	int16_t x200 = 245;
	static uint64_t t49 = 192212038464LLU;

	t49 = (((x197&x198)&x199)&x200);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -2;
	int32_t x202 = 11225;
	static int8_t x203 = INT8_MIN;
	volatile uint32_t t50 = 0U;

	t50 = (((x201&x202)&x203)&x204);

	if (t50 != 11136U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	volatile int32_t x206 = INT32_MIN;
	int64_t x207 = 111046439896904LL;
	int64_t x208 = INT64_MIN;
	int64_t t51 = -2LL;

	t51 = (((x205&x206)&x207)&x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	int16_t x212 = INT16_MIN;

	t52 = (((x209&x210)&x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 1223023626LLU;
	uint64_t x214 = UINT64_MAX;
	static uint8_t x215 = 102U;
	static volatile uint64_t t53 = 18224518871249372LLU;

	t53 = (((x213&x214)&x215)&x216);

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MIN;
	volatile int8_t x220 = -1;
	static volatile uint64_t t54 = 69064884580776030LLU;

	t54 = (((x217&x218)&x219)&x220);

	if (t54 != 2147450880LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	volatile int32_t x222 = -35563;
	int16_t x223 = INT16_MAX;
	volatile uint32_t t55 = 32602U;

	t55 = (((x221&x222)&x223)&x224);

	if (t55 != 29973U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = 59277574;
	uint16_t x226 = 6U;
	uint64_t x227 = UINT64_MAX;
	volatile uint64_t t56 = 63023425781040236LLU;

	t56 = (((x225&x226)&x227)&x228);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 3010;
	static uint16_t x230 = 7U;
	uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t57 = -337685;

	t57 = (((x229&x230)&x231)&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -450313LL;
	volatile uint32_t x234 = 863852U;
	uint16_t x236 = UINT16_MAX;
	int64_t t58 = 13LL;

	t58 = (((x233&x234)&x235)&x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	volatile int16_t x239 = -3;
	volatile int64_t x240 = 45840116LL;

	t59 = (((x237&x238)&x239)&x240);

	if (t59 != 30452LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	int64_t t60 = -34162LL;

	t60 = (((x241&x242)&x243)&x244);

	if (t60 != 4294934528LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MAX;
	static int32_t x246 = 2396676;
	int16_t x247 = -262;
	static int16_t x248 = INT16_MAX;
	int64_t t61 = 10630236LL;

	t61 = (((x245&x246)&x247)&x248);

	if (t61 != 4608LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = -10LL;
	int64_t x250 = 19756433LL;
	uint32_t x251 = 13546U;
	volatile int16_t x252 = INT16_MIN;
	int64_t t62 = 2781491222284LL;

	t62 = (((x249&x250)&x251)&x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	static uint32_t x254 = 43U;
	uint8_t x255 = UINT8_MAX;
	uint8_t x256 = 0U;
	uint32_t t63 = 228966U;

	t63 = (((x253&x254)&x255)&x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	static uint16_t x260 = 8962U;
	volatile int32_t t64 = -18039603;

	t64 = (((x257&x258)&x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x262 = 1251153758504LLU;
	int64_t x263 = INT64_MIN;
	volatile uint64_t t65 = 1097300159020410519LLU;

	t65 = (((x261&x262)&x263)&x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = -6;
	int32_t x266 = INT32_MAX;
	static volatile uint32_t x267 = 1930242U;
	volatile uint32_t t66 = 2062121337U;

	t66 = (((x265&x266)&x267)&x268);

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 125512U;
	int32_t x271 = -26430;
	int16_t x272 = INT16_MIN;
	uint32_t t67 = 22809U;

	t67 = (((x269&x270)&x271)&x272);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = 1;
	uint64_t x275 = 32391818626483758LLU;
	int32_t x276 = INT32_MIN;

	t68 = (((x273&x274)&x275)&x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 2;
	int8_t x278 = INT8_MAX;
	static volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = 18U;
	volatile int64_t t69 = -5154163096602LL;

	t69 = (((x277&x278)&x279)&x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 0U;
	static int8_t x283 = -1;
	int16_t x284 = INT16_MIN;

	t70 = (((x281&x282)&x283)&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	static volatile int32_t t71 = -52;

	t71 = (((x285&x286)&x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x290 = -1LL;
	uint64_t x291 = 8490LLU;
	static uint64_t t72 = 321045510836838LLU;

	t72 = (((x289&x290)&x291)&x292);

	if (t72 != 266LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x294 = 25U;
	uint16_t x295 = UINT16_MAX;
	volatile int32_t t73 = -100005836;

	t73 = (((x293&x294)&x295)&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x299 = -2946920;
	static volatile int16_t x300 = INT16_MIN;
	volatile uint32_t t74 = 194399786U;

	t74 = (((x297&x298)&x299)&x300);

	if (t74 != 2144534528U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x302 = 6LLU;
	int64_t x303 = -1LL;
	uint64_t x304 = 51879344LLU;
	static volatile uint64_t t75 = 57742457261LLU;

	t75 = (((x301&x302)&x303)&x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = 13;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = 1034;

	t76 = (((x305&x306)&x307)&x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x310 = INT8_MAX;
	static int64_t x311 = 6688LL;
	static int64_t x312 = INT64_MAX;
	volatile int64_t t77 = 9022054485367LL;

	t77 = (((x309&x310)&x311)&x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint16_t x314 = 1116U;
	int8_t x315 = -11;
	int64_t x316 = INT64_MIN;
	int64_t t78 = 15607981637LL;

	t78 = (((x313&x314)&x315)&x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -1;
	static int32_t x318 = -1;
	int8_t x319 = -1;
	static int32_t x320 = INT32_MAX;

	t79 = (((x317&x318)&x319)&x320);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 110U;
	static uint64_t x322 = 3462924657819012LLU;
	static int32_t x323 = -1;

	t80 = (((x321&x322)&x323)&x324);

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x325 = 18420U;
	int8_t x326 = 43;
	int16_t x327 = INT16_MIN;

	t81 = (((x325&x326)&x327)&x328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	static uint8_t x331 = 2U;
	static int64_t t82 = 34831427143107074LL;

	t82 = (((x329&x330)&x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = 1;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = -589034LL;
	static volatile int64_t t83 = -83475926652343389LL;

	t83 = (((x333&x334)&x335)&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 0;
	int64_t x338 = -1935326LL;
	uint32_t x340 = 1U;

	t84 = (((x337&x338)&x339)&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x342 = -73;
	static int8_t x343 = INT8_MAX;
	static volatile int8_t x344 = INT8_MIN;
	uint64_t t85 = 2651439001995957297LLU;

	t85 = (((x341&x342)&x343)&x344);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MAX;
	int64_t t86 = -675605678LL;

	t86 = (((x345&x346)&x347)&x348);

	if (t86 != 4294934528LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MAX;
	static uint16_t x351 = UINT16_MAX;
	static uint32_t x352 = 51710U;

	t87 = (((x349&x350)&x351)&x352);

	if (t87 != 100LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	int64_t x354 = -494410581LL;
	uint32_t x355 = UINT32_MAX;
	volatile int16_t x356 = 136;
	int64_t t88 = 1LL;

	t88 = (((x353&x354)&x355)&x356);

	if (t88 != 136LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint32_t x358 = UINT32_MAX;
	uint8_t x359 = 1U;
	int8_t x360 = -51;
	int64_t t89 = -56077LL;

	t89 = (((x357&x358)&x359)&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = UINT32_MAX;
	static uint32_t x362 = 1456U;
	volatile int64_t x363 = 152LL;
	static int64_t t90 = -1LL;

	t90 = (((x361&x362)&x363)&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MIN;
	uint8_t x368 = 15U;
	volatile int64_t t91 = -15282LL;

	t91 = (((x365&x366)&x367)&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	static uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MAX;
	static volatile int8_t x372 = 4;
	static volatile int64_t t92 = 86545602LL;

	t92 = (((x369&x370)&x371)&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -1;
	int8_t x374 = 61;
	int64_t t93 = -4216502934028321626LL;

	t93 = (((x373&x374)&x375)&x376);

	if (t93 != 61LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int16_t x378 = INT16_MIN;
	static uint16_t x379 = 15U;
	static volatile uint64_t t94 = 1926760251LLU;

	t94 = (((x377&x378)&x379)&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MAX;
	volatile int8_t x384 = INT8_MIN;
	static volatile uint32_t t95 = 16987139U;

	t95 = (((x381&x382)&x383)&x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -3;
	int32_t x386 = INT32_MIN;
	int16_t x388 = 991;
	int32_t t96 = 25;

	t96 = (((x385&x386)&x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MIN;
	static int32_t x391 = -417913497;
	volatile int64_t t97 = INT64_MIN;

	t97 = (((x389&x390)&x391)&x392);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	static uint16_t x396 = 236U;
	int64_t t98 = 67849836910938855LL;

	t98 = (((x393&x394)&x395)&x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = -1;
	int16_t x398 = 1;
	int32_t x399 = INT32_MIN;
	static volatile uint8_t x400 = 3U;
	int32_t t99 = 1;

	t99 = (((x397&x398)&x399)&x400);

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

