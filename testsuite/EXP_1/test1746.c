#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -30;
int32_t x8 = -4509;
uint8_t x10 = UINT8_MAX;
uint16_t x11 = UINT16_MAX;
volatile int64_t t3 = -10641934LL;
static uint32_t x17 = 185U;
volatile int8_t x19 = 1;
static uint32_t t4 = 55938908U;
static int64_t x34 = INT64_MIN;
int32_t x38 = INT32_MAX;
volatile int32_t x40 = INT32_MAX;
uint64_t x43 = UINT64_MAX;
uint64_t t10 = 11617204LLU;
volatile int32_t x45 = -1;
static int32_t x48 = INT32_MIN;
int32_t t11 = -3612;
volatile int32_t t12 = -1;
static uint64_t x57 = 215412250LLU;
static int64_t x59 = INT64_MIN;
static uint64_t x60 = 2004339386LLU;
static int16_t x64 = INT16_MIN;
static volatile uint64_t t16 = 5235184238632339788LLU;
int64_t x75 = -18258440447773LL;
int64_t t18 = 2061575250LL;
int64_t x84 = 293432LL;
static int32_t t21 = 0;
volatile int64_t x93 = 67580530811LL;
int8_t x96 = INT8_MIN;
volatile int64_t t23 = -3837495104063LL;
uint16_t x100 = 28U;
static uint64_t x105 = UINT64_MAX;
uint64_t x110 = 25534LLU;
int16_t x111 = -1528;
volatile int64_t x114 = INT64_MAX;
static uint32_t x117 = UINT32_MAX;
int32_t x118 = INT32_MIN;
static uint32_t x119 = UINT32_MAX;
uint8_t x127 = 59U;
int64_t x128 = INT64_MIN;
volatile int32_t t33 = 669;
int32_t x150 = INT32_MIN;
int8_t x152 = INT8_MIN;
int64_t x160 = INT64_MIN;
int64_t x163 = INT64_MIN;
int32_t x164 = 1;
int8_t x167 = -1;
volatile int64_t t43 = -30275LL;
int8_t x181 = INT8_MAX;
static int64_t x182 = 12LL;
uint32_t x186 = UINT32_MAX;
volatile int32_t x191 = INT32_MIN;
int64_t x192 = -569093751011LL;
int64_t t47 = 951759963406LL;
volatile int16_t x193 = INT16_MIN;
int16_t x198 = -196;
uint32_t t49 = 1507457U;
int64_t x201 = INT64_MIN;
static int64_t x213 = INT64_MIN;
int8_t x214 = INT8_MAX;
uint32_t x216 = UINT32_MAX;
int64_t x217 = -2139504063709716LL;
volatile int16_t x220 = INT16_MIN;
volatile int8_t x223 = INT8_MAX;
static int8_t x226 = -33;
static int8_t x230 = INT8_MIN;
uint8_t x231 = 1U;
int32_t t57 = 23195;
static int32_t x243 = INT32_MIN;
int8_t x246 = INT8_MAX;
int64_t t61 = 11LL;
int32_t x255 = -93;
uint16_t x264 = 341U;
volatile uint64_t t64 = 0LLU;
int32_t x279 = INT32_MIN;
volatile int16_t x282 = INT16_MAX;
static uint16_t x283 = 83U;
int16_t x285 = INT16_MAX;
int16_t x287 = 116;
int64_t x290 = INT64_MAX;
static int32_t x300 = INT32_MAX;
static uint16_t x313 = 2092U;
uint32_t t76 = 36589U;
volatile uint32_t x333 = 16922U;
uint64_t t81 = 244815646147LLU;
static int16_t x337 = -545;
uint16_t x339 = 13U;
int64_t x342 = INT64_MAX;
uint16_t x343 = UINT16_MAX;
static int32_t x348 = -13342044;
volatile int32_t t84 = 1;
int8_t x352 = -1;
int16_t x363 = -1;
volatile uint64_t t89 = 3LLU;
static int16_t x371 = INT16_MAX;
int32_t x372 = 1028869741;
int32_t x374 = -63093829;
volatile uint64_t x375 = 219671916987033705LLU;
int64_t x379 = -72801376503755LL;
int32_t x390 = 912;
int16_t x391 = INT16_MIN;
uint8_t x394 = 1U;
volatile uint8_t x400 = UINT8_MAX;
int64_t x408 = 90LL;
int64_t x409 = 53429LL;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x2 = -261756044306LL;
	int16_t x3 = INT16_MIN;
	volatile int64_t t0 = 12LL;

	t0 = (((x1&x2)%x3)/x4);

	if (t0 != -7LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x6 = 48U;
	uint16_t x7 = 20972U;
	int32_t t1 = 48;

	t1 = (((x5&x6)%x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -1405;

	t2 = (((x9&x10)%x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	volatile int8_t x14 = -1;
	uint16_t x15 = 1U;
	int8_t x16 = INT8_MAX;

	t3 = (((x13&x14)%x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = UINT32_MAX;
	uint8_t x20 = 14U;

	t4 = (((x17&x18)%x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int64_t x22 = -1LL;
	static int32_t x23 = 1064019879;
	uint32_t x24 = UINT32_MAX;
	static int64_t t5 = 15792LL;

	t5 = (((x21&x22)%x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 27U;
	static uint32_t x26 = 90434311U;
	uint8_t x27 = 57U;
	uint32_t x28 = 94U;
	volatile uint32_t t6 = 73631U;

	t6 = (((x25&x26)%x27)/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 0U;
	static volatile int8_t x30 = -1;
	volatile uint8_t x31 = 4U;
	static uint32_t x32 = UINT32_MAX;
	static volatile uint32_t t7 = 4U;

	t7 = (((x29&x30)%x31)/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = 129897542U;
	volatile uint64_t t8 = 1027239926LLU;

	t8 = (((x33&x34)%x35)/x36);

	if (t8 != 71004977421LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 34775892558977041LLU;
	volatile int16_t x39 = INT16_MIN;
	volatile uint64_t t9 = 963LLU;

	t9 = (((x37&x38)%x39)/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 333U;
	static int64_t x42 = -1LL;
	int64_t x44 = 93988973812602LL;

	t10 = (((x41&x42)%x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -596727;
	int16_t x47 = INT16_MIN;

	t11 = (((x45&x46)%x47)/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -8;
	int16_t x50 = -550;
	int32_t x51 = -1;
	int8_t x52 = INT8_MAX;

	t12 = (((x49&x50)%x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	static int16_t x54 = -1;
	static volatile int64_t x55 = -1LL;
	volatile int8_t x56 = -10;
	int64_t t13 = 7318LL;

	t13 = (((x53&x54)%x55)/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x58 = INT8_MIN;
	volatile uint64_t t14 = 126LLU;

	t14 = (((x57&x58)%x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -78883049LL;
	uint64_t x62 = 67211901347699447LLU;
	uint64_t x63 = 12543LLU;
	volatile uint64_t t15 = 2036764668440234LLU;

	t15 = (((x61&x62)%x63)/x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	volatile uint64_t x66 = 172882233935LLU;
	volatile uint8_t x67 = 59U;
	int64_t x68 = INT64_MIN;

	t16 = (((x65&x66)%x67)/x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 7768955913579186LLU;
	int32_t x70 = -1;
	volatile int64_t x71 = INT64_MAX;
	int16_t x72 = -37;
	volatile uint64_t t17 = 348408492LLU;

	t17 = (((x69&x70)%x71)/x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1151U;
	int64_t x74 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;

	t18 = (((x73&x74)%x75)/x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 105LLU;
	int32_t x78 = INT32_MAX;
	uint32_t x79 = 4021683U;
	uint16_t x80 = 29968U;
	uint64_t t19 = 1259935LLU;

	t19 = (((x77&x78)%x79)/x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -202;
	volatile uint8_t x82 = UINT8_MAX;
	volatile int16_t x83 = -1;
	volatile int64_t t20 = 427289LL;

	t20 = (((x81&x82)%x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 229;
	static int32_t x86 = 7;
	volatile uint16_t x87 = 873U;
	volatile uint8_t x88 = 120U;

	t21 = (((x85&x86)%x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	static int8_t x90 = INT8_MIN;
	int64_t x91 = -22177820808974LL;
	static uint8_t x92 = UINT8_MAX;
	int64_t t22 = -65991058011093521LL;

	t22 = (((x89&x90)%x91)/x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = UINT16_MAX;
	volatile int8_t x95 = INT8_MAX;

	t23 = (((x93&x94)%x95)/x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile int32_t x98 = INT32_MIN;
	static volatile uint32_t x99 = 5816U;
	static uint32_t t24 = 71U;

	t24 = (((x97&x98)%x99)/x100);

	if (t24 != 44U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -8;
	int64_t x102 = INT64_MIN;
	int8_t x103 = 1;
	int8_t x104 = INT8_MIN;
	int64_t t25 = 1LL;

	t25 = (((x101&x102)%x103)/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x106 = UINT64_MAX;
	int32_t x107 = -542891401;
	uint32_t x108 = 1U;
	uint64_t t26 = 42856590340437224LLU;

	t26 = (((x105&x106)%x107)/x108);

	if (t26 != 542891400LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 1;
	int32_t x112 = INT32_MAX;
	volatile uint64_t t27 = 1205946176LLU;

	t27 = (((x109&x110)%x111)/x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = 182334055LLU;
	uint64_t t28 = 51LLU;

	t28 = (((x113&x114)%x115)/x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x120 = -48;
	volatile uint32_t t29 = 178753U;

	t29 = (((x117&x118)%x119)/x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 785209U;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = INT32_MIN;
	int32_t x124 = -10721;
	uint32_t t30 = 185U;

	t30 = (((x121&x122)%x123)/x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	uint64_t x126 = 385638094LLU;
	volatile uint64_t t31 = 3LLU;

	t31 = (((x125&x126)%x127)/x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MAX;
	static volatile uint16_t x132 = UINT16_MAX;
	volatile int64_t t32 = 109516250690193LL;

	t32 = (((x129&x130)%x131)/x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 13U;
	volatile int32_t x134 = INT32_MIN;
	volatile int32_t x135 = INT32_MAX;
	static uint8_t x136 = 63U;

	t33 = (((x133&x134)%x135)/x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -1LL;
	uint32_t x138 = 1U;
	static uint64_t x139 = 212LLU;
	volatile uint8_t x140 = 1U;
	static uint64_t t34 = 1LLU;

	t34 = (((x137&x138)%x139)/x140);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MAX;
	int16_t x143 = INT16_MIN;
	volatile int64_t x144 = 11859405LL;
	volatile int64_t t35 = 1299LL;

	t35 = (((x141&x142)%x143)/x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -1LL;
	int64_t x146 = INT64_MIN;
	int64_t x147 = -1LL;
	int16_t x148 = -1;
	int64_t t36 = 28445534489321842LL;

	t36 = (((x145&x146)%x147)/x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 427826387U;
	uint32_t x151 = 62240U;
	volatile uint32_t t37 = 13U;

	t37 = (((x149&x150)%x151)/x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	volatile int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = 14794807895057LL;

	t38 = (((x153&x154)%x155)/x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	uint8_t x158 = 65U;
	uint32_t x159 = 244U;
	static volatile int64_t t39 = -3LL;

	t39 = (((x157&x158)%x159)/x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x161 = INT16_MIN;
	int32_t x162 = -1;
	volatile int64_t t40 = -996900LL;

	t40 = (((x161&x162)%x163)/x164);

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static int16_t x166 = 664;
	int64_t x168 = INT64_MIN;
	int64_t t41 = 29704113117878955LL;

	t41 = (((x165&x166)%x167)/x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = INT64_MAX;
	int8_t x170 = INT8_MAX;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = UINT64_MAX;
	uint64_t t42 = 163645127444840836LLU;

	t42 = (((x169&x170)%x171)/x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = -1;
	int64_t x174 = INT64_MAX;
	static uint8_t x175 = 16U;
	int8_t x176 = -1;

	t43 = (((x173&x174)%x175)/x176);

	if (t43 != -15LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	static int8_t x178 = -45;
	int8_t x179 = -1;
	static uint32_t x180 = 37055055U;
	uint64_t t44 = 8801115LLU;

	t44 = (((x177&x178)%x179)/x180);

	if (t44 != 497819908072LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t45 = -1329LL;

	t45 = (((x181&x182)%x183)/x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;
	uint32_t t46 = 1852U;

	t46 = (((x185&x186)%x187)/x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;

	t47 = (((x189&x190)%x191)/x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = 0U;
	int64_t x195 = INT64_MAX;
	static int16_t x196 = 38;
	static volatile int64_t t48 = 40286LL;

	t48 = (((x193&x194)%x195)/x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -12018;
	int32_t x199 = INT32_MIN;
	uint32_t x200 = 15910282U;

	t49 = (((x197&x198)%x199)/x200);

	if (t49 != 269U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MIN;
	static int8_t x204 = -6;
	int64_t t50 = 11LL;

	t50 = (((x201&x202)%x203)/x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MIN;
	int64_t x206 = -93050663416LL;
	static uint8_t x207 = 1U;
	static int8_t x208 = INT8_MIN;
	volatile int64_t t51 = 87425514LL;

	t51 = (((x205&x206)%x207)/x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int64_t x210 = -1LL;
	uint64_t x211 = 401966991872LLU;
	int64_t x212 = -1LL;
	uint64_t t52 = 315638863LLU;

	t52 = (((x209&x210)%x211)/x212);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x215 = INT8_MAX;
	int64_t t53 = 779LL;

	t53 = (((x213&x214)%x215)/x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MAX;
	uint32_t x219 = 66575U;
	volatile int64_t t54 = 38403438366827355LL;

	t54 = (((x217&x218)%x219)/x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MAX;
	uint16_t x222 = 581U;
	int32_t x224 = INT32_MAX;
	int32_t t55 = 1;

	t55 = (((x221&x222)%x223)/x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x225 = 1234U;
	int64_t x227 = INT64_MAX;
	int16_t x228 = INT16_MAX;
	static int64_t t56 = -1483299994620LL;

	t56 = (((x225&x226)%x227)/x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int8_t x232 = 14;

	t57 = (((x229&x230)%x231)/x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	volatile int64_t x234 = 872436719634849520LL;
	int32_t x235 = -1;
	int64_t x236 = INT64_MAX;
	int64_t t58 = -118036950534LL;

	t58 = (((x233&x234)%x235)/x236);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x237 = 0;
	static int16_t x238 = INT16_MAX;
	volatile int16_t x239 = -3;
	int8_t x240 = INT8_MAX;
	int32_t t59 = 210;

	t59 = (((x237&x238)%x239)/x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -1;
	static int8_t x242 = -1;
	volatile int64_t x244 = -1LL;
	int64_t t60 = -2126510444993881LL;

	t60 = (((x241&x242)%x243)/x244);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	volatile uint32_t x248 = 9064U;

	t61 = (((x245&x246)%x247)/x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x253 = 1563248918LLU;
	int8_t x254 = INT8_MIN;
	static int8_t x256 = 27;
	volatile uint64_t t62 = 8LLU;

	t62 = (((x253&x254)%x255)/x256);

	if (t62 != 57898107LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x257 = INT64_MAX;
	static uint32_t x258 = 407U;
	uint64_t x259 = 7513254010833453176LLU;
	int64_t x260 = INT64_MIN;
	uint64_t t63 = 297416LLU;

	t63 = (((x257&x258)%x259)/x260);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 87U;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;

	t64 = (((x261&x262)%x263)/x264);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 684U;
	volatile int8_t x266 = 0;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t65 = -61LL;

	t65 = (((x265&x266)%x267)/x268);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x273 = INT32_MIN;
	static int64_t x274 = -1LL;
	int64_t x275 = INT64_MAX;
	int16_t x276 = -3423;
	volatile int64_t t66 = -974LL;

	t66 = (((x273&x274)%x275)/x276);

	if (t66 != 627368LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -1;
	int32_t x278 = INT32_MIN;
	static int64_t x280 = 1317960LL;
	int64_t t67 = -944746568733063824LL;

	t67 = (((x277&x278)%x279)/x280);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x281 = INT8_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t68 = 569;

	t68 = (((x281&x282)%x283)/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x286 = 51U;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t69 = 1608;

	t69 = (((x285&x286)%x287)/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = -1;
	uint64_t x291 = 413040749652551828LLU;
	int16_t x292 = INT16_MIN;
	uint64_t t70 = 16124LLU;

	t70 = (((x289&x290)%x291)/x292);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x293 = 496488071U;
	uint8_t x294 = 11U;
	static int16_t x295 = 1;
	int16_t x296 = INT16_MIN;
	uint32_t t71 = 6U;

	t71 = (((x293&x294)%x295)/x296);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MAX;
	volatile int64_t t72 = 114910150552714LL;

	t72 = (((x297&x298)%x299)/x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x301 = 59U;
	int8_t x302 = INT8_MIN;
	static uint8_t x303 = UINT8_MAX;
	uint64_t x304 = 865LLU;
	volatile uint64_t t73 = 3678618LLU;

	t73 = (((x301&x302)%x303)/x304);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	uint16_t x307 = UINT16_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile int64_t t74 = -878599728426557850LL;

	t74 = (((x305&x306)%x307)/x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x309 = 316U;
	uint8_t x310 = 1U;
	int64_t x311 = INT64_MIN;
	int32_t x312 = -1;
	volatile int64_t t75 = -17437289103153950LL;

	t75 = (((x309&x310)%x311)/x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x314 = INT32_MAX;
	uint32_t x315 = 10229904U;
	int8_t x316 = INT8_MIN;

	t76 = (((x313&x314)%x315)/x316);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = 458;
	static volatile int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MIN;
	volatile int8_t x320 = -1;
	static volatile int64_t t77 = -5LL;

	t77 = (((x317&x318)%x319)/x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = 158405U;
	static volatile int64_t x322 = -407152178960LL;
	int8_t x323 = -1;
	static volatile uint8_t x324 = UINT8_MAX;
	int64_t t78 = -14198201676LL;

	t78 = (((x321&x322)%x323)/x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	int8_t x327 = 1;
	uint16_t x328 = 6025U;
	int32_t t79 = 10;

	t79 = (((x325&x326)%x327)/x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MAX;
	volatile uint64_t x330 = 5271801LLU;
	static int16_t x331 = -1;
	static volatile int16_t x332 = INT16_MAX;
	static volatile uint64_t t80 = 3966771805LLU;

	t80 = (((x329&x330)%x331)/x332);

	if (t80 != 160LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x334 = INT8_MAX;
	uint64_t x335 = 2797117941559330651LLU;
	uint16_t x336 = 279U;

	t81 = (((x333&x334)%x335)/x336);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x338 = -1;
	static int64_t x340 = 508308437102465LL;
	int64_t t82 = -205645605389819LL;

	t82 = (((x337&x338)%x339)/x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = -51;
	uint8_t x344 = 5U;
	int64_t t83 = 5763369924668LL;

	t83 = (((x341&x342)%x343)/x344);

	if (t83 != 6543LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MAX;
	volatile int32_t x346 = -1;
	volatile int16_t x347 = INT16_MIN;

	t84 = (((x345&x346)%x347)/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = UINT8_MAX;
	volatile int16_t x350 = INT16_MIN;
	uint8_t x351 = UINT8_MAX;
	int32_t t85 = -588;

	t85 = (((x349&x350)%x351)/x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = 12;
	int8_t x354 = -1;
	int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int32_t t86 = 3;

	t86 = (((x353&x354)%x355)/x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 1U;
	int8_t x358 = INT8_MAX;
	uint16_t x359 = 30U;
	static int64_t x360 = -433252737050000LL;
	static int64_t t87 = 129LL;

	t87 = (((x357&x358)%x359)/x360);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 959LLU;
	volatile uint32_t x362 = 184U;
	volatile int16_t x364 = INT16_MIN;
	uint64_t t88 = 8LLU;

	t88 = (((x361&x362)%x363)/x364);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = UINT64_MAX;
	uint32_t x366 = 27640U;
	int32_t x367 = INT32_MIN;
	volatile int8_t x368 = 17;

	t89 = (((x365&x366)%x367)/x368);

	if (t89 != 1625LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MAX;
	static int8_t x370 = -1;
	volatile int32_t t90 = -10942269;

	t90 = (((x369&x370)%x371)/x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	static uint64_t x376 = 1170254315675323LLU;
	volatile uint64_t t91 = 255854LLU;

	t91 = (((x373&x374)%x375)/x376);

	if (t91 != 182LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x377 = INT8_MAX;
	int16_t x378 = -1;
	uint16_t x380 = 27535U;
	volatile int64_t t92 = 3510576159LL;

	t92 = (((x377&x378)%x379)/x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x385 = INT32_MIN;
	int8_t x386 = -1;
	int8_t x387 = INT8_MAX;
	int8_t x388 = 25;
	volatile int32_t t93 = -114275;

	t93 = (((x385&x386)%x387)/x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x389 = 3U;
	static int16_t x392 = INT16_MIN;
	static int32_t t94 = 287;

	t94 = (((x389&x390)%x391)/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x393 = INT64_MIN;
	int32_t x395 = 955968;
	volatile int16_t x396 = 19;
	int64_t t95 = 79493208793LL;

	t95 = (((x393&x394)%x395)/x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = -1;
	int64_t x399 = INT64_MIN;
	static volatile int64_t t96 = 1212029288841LL;

	t96 = (((x397&x398)%x399)/x400);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = 21;
	int8_t x402 = INT8_MIN;
	volatile int8_t x403 = -6;
	static uint8_t x404 = 1U;
	volatile int32_t t97 = 14329065;

	t97 = (((x401&x402)%x403)/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 3U;
	int64_t x406 = INT64_MIN;
	int64_t x407 = 48506723211517LL;
	volatile int64_t t98 = 4LL;

	t98 = (((x405&x406)%x407)/x408);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x410 = 42;
	static int8_t x411 = INT8_MAX;
	volatile int32_t x412 = INT32_MAX;
	volatile int64_t t99 = 73600509334LL;

	t99 = (((x409&x410)%x411)/x412);

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

