#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = 71363624LLU;
int8_t x8 = INT8_MAX;
int16_t x9 = -1;
volatile uint32_t t2 = 27431140U;
int32_t x14 = -1;
volatile int32_t t3 = INT32_MIN;
uint16_t x18 = 5469U;
uint64_t t4 = 7045LLU;
uint32_t x23 = UINT32_MAX;
int32_t x24 = 571;
uint16_t x26 = 505U;
volatile uint8_t x30 = 3U;
static volatile uint32_t x31 = 48071089U;
int32_t x32 = -1;
int8_t x37 = INT8_MIN;
static int64_t x43 = -1LL;
int16_t x50 = 4;
int32_t t12 = 200095300;
volatile int64_t t16 = 7445LL;
int64_t t17 = 567329642171267881LL;
int8_t x74 = INT8_MIN;
static volatile int32_t t18 = 5;
int32_t x83 = INT32_MAX;
int32_t t20 = 5856849;
static int8_t x90 = -1;
uint16_t x92 = UINT16_MAX;
static volatile uint16_t x94 = 14712U;
int32_t x95 = INT32_MIN;
uint8_t x107 = 4U;
uint64_t x109 = 19198505942262027LLU;
int8_t x111 = 1;
volatile int16_t x113 = -1;
uint16_t x116 = UINT16_MAX;
static int64_t x117 = INT64_MIN;
uint8_t x122 = 3U;
volatile uint64_t t30 = 160243LLU;
static uint16_t x131 = 13528U;
int64_t x134 = 308058LL;
int32_t x139 = INT32_MIN;
int16_t x141 = INT16_MAX;
uint64_t x144 = 5652611803215253397LLU;
uint64_t t37 = 10427358092580864LLU;
int32_t x153 = INT32_MAX;
uint16_t x164 = 6U;
uint64_t x173 = 2382008829475379686LLU;
uint64_t t43 = 2LLU;
static volatile int32_t t44 = -910;
int8_t x181 = INT8_MIN;
volatile int16_t x184 = INT16_MIN;
int64_t x185 = 75263619LL;
volatile int8_t x192 = -1;
uint32_t x194 = 116U;
uint8_t x195 = 6U;
uint32_t x200 = 0U;
uint32_t t49 = 13807U;
static int8_t x204 = -1;
static int32_t t50 = 32;
int64_t t52 = 143552771LL;
int64_t x213 = -1LL;
static int16_t x215 = INT16_MIN;
int64_t x216 = INT64_MIN;
volatile int64_t x221 = INT64_MIN;
int8_t x222 = 0;
uint64_t x225 = 11611020441139LLU;
int8_t x227 = INT8_MIN;
uint8_t x228 = 2U;
uint64_t x232 = 8327144LLU;
volatile int64_t t59 = 1840640080362834753LL;
uint64_t x247 = 22434LLU;
static int32_t t67 = 3747;
int16_t x283 = INT16_MAX;
uint32_t x284 = 6U;
int64_t x290 = INT64_MAX;
int8_t x292 = 1;
uint32_t x300 = UINT32_MAX;
uint16_t x304 = 1527U;
volatile uint8_t x308 = 4U;
volatile int16_t x331 = INT16_MIN;
volatile uint32_t t82 = 9675U;
int16_t x334 = -1;
static uint32_t t83 = 0U;
int16_t x341 = INT16_MIN;
int8_t x345 = -1;
static int64_t x356 = -1LL;
int8_t x363 = INT8_MAX;
int64_t x370 = INT64_MIN;
uint64_t t92 = 1473LLU;
int32_t x374 = -1;
volatile int32_t t95 = -143;
volatile int64_t x391 = -1LL;
uint64_t x392 = UINT64_MAX;
volatile uint64_t t97 = 43504787706667233LLU;
int64_t x393 = INT64_MAX;
static int32_t x399 = INT32_MAX;
static volatile int32_t t99 = 846;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int8_t x2 = INT8_MAX;
	volatile int16_t x3 = -1;
	static uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 66443818U;

	t0 = ((x1&(x2==x3))*x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	static volatile uint32_t t1 = 38U;

	t1 = ((x5&(x6==x7))*x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = -1;
	int64_t x11 = INT64_MIN;
	uint32_t x12 = 1987745U;

	t2 = ((x9&(x10==x11))*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint64_t x15 = UINT64_MAX;
	int32_t x16 = INT32_MIN;

	t3 = ((x13&(x14==x15))*x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 55898388947LLU;
	volatile int64_t x19 = 100403701823LL;
	int32_t x20 = INT32_MIN;

	t4 = ((x17&(x18==x19))*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 0U;
	int32_t x22 = -127691;
	int32_t t5 = 0;

	t5 = ((x21&(x22==x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	uint8_t x27 = 6U;
	uint32_t x28 = 529U;
	volatile uint32_t t6 = 2241285U;

	t6 = ((x25&(x26==x27))*x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MIN;
	volatile int32_t t7 = -27980912;

	t7 = ((x29&(x30==x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 15781U;
	int32_t x34 = INT32_MAX;
	int32_t x35 = -1;
	volatile uint16_t x36 = UINT16_MAX;
	int32_t t8 = 287;

	t8 = ((x33&(x34==x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = INT64_MAX;
	uint32_t x39 = 182U;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 0;

	t9 = ((x37&(x38==x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = 3;
	uint8_t x44 = UINT8_MAX;
	static int32_t t10 = -13371909;

	t10 = ((x41&(x42==x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 71706288LL;
	uint16_t x46 = UINT16_MAX;
	static uint32_t x47 = 46243132U;
	uint16_t x48 = 3U;
	volatile int64_t t11 = -6403663329587LL;

	t11 = ((x45&(x46==x47))*x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 16;
	static uint32_t x51 = 7U;
	volatile int8_t x52 = -1;

	t12 = ((x49&(x50==x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	volatile uint16_t x54 = 991U;
	int8_t x55 = 1;
	uint64_t x56 = UINT64_MAX;
	static volatile uint64_t t13 = 14992717296977LLU;

	t13 = ((x53&(x54==x55))*x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	int16_t x58 = -3;
	uint32_t x59 = 25U;
	int8_t x60 = INT8_MAX;
	static int64_t t14 = -1LL;

	t14 = ((x57&(x58==x59))*x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = 18493696;
	uint64_t x62 = 1955337621175302845LLU;
	int64_t x63 = -63LL;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -39;

	t15 = ((x61&(x62==x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 424U;
	int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MIN;

	t16 = ((x65&(x66==x67))*x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	volatile uint8_t x70 = 0U;
	static int16_t x71 = INT16_MIN;
	static int8_t x72 = INT8_MIN;

	t17 = ((x69&(x70==x71))*x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -2278;
	volatile int32_t x75 = -1;
	int16_t x76 = INT16_MIN;

	t18 = ((x73&(x74==x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	int16_t x80 = -382;
	static volatile uint32_t t19 = 880911423U;

	t19 = ((x77&(x78==x79))*x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 2U;
	int8_t x82 = -63;
	uint16_t x84 = UINT16_MAX;

	t20 = ((x81&(x82==x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int32_t x86 = 388883;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	uint64_t t21 = 580463420LLU;

	t21 = ((x85&(x86==x87))*x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int32_t x91 = 1871;
	static volatile int32_t t22 = 245679;

	t22 = ((x89&(x90==x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 2U;
	int64_t x96 = -1LL;
	int64_t t23 = 4700659079LL;

	t23 = ((x93&(x94==x95))*x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint32_t x98 = 1309U;
	int32_t x99 = INT32_MAX;
	static int16_t x100 = 1;
	int32_t t24 = 1;

	t24 = ((x97&(x98==x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MAX;
	int16_t x103 = INT16_MIN;
	volatile uint32_t x104 = 118498U;
	int64_t t25 = 10462LL;

	t25 = ((x101&(x102==x103))*x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 206547320946624057LLU;
	static int8_t x106 = 13;
	uint32_t x108 = UINT32_MAX;
	uint64_t t26 = 51953793583775LLU;

	t26 = ((x105&(x106==x107))*x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x110 = -1;
	volatile uint8_t x112 = 2U;
	volatile uint64_t t27 = 270908276959787LLU;

	t27 = ((x109&(x110==x111))*x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	uint16_t x115 = 24U;
	static int32_t t28 = -1559473;

	t28 = ((x113&(x114==x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MIN;
	static int64_t x119 = -1LL;
	int8_t x120 = INT8_MIN;
	static volatile int64_t t29 = 14761688430LL;

	t29 = ((x117&(x118==x119))*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = UINT64_MAX;
	int16_t x123 = -1;
	int8_t x124 = INT8_MIN;

	t30 = ((x121&(x122==x123))*x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -332;
	uint8_t x126 = 45U;
	volatile int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	volatile int64_t t31 = 29163627299LL;

	t31 = ((x125&(x126==x127))*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 0;
	int64_t x130 = INT64_MIN;
	uint64_t x132 = 7LLU;
	uint64_t t32 = 17697683324LLU;

	t32 = ((x129&(x130==x131))*x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 0;
	uint64_t x135 = 1795LLU;
	int64_t x136 = INT64_MAX;
	volatile int64_t t33 = -29210LL;

	t33 = ((x133&(x134==x135))*x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	static int64_t x138 = -1LL;
	static int16_t x140 = INT16_MAX;
	volatile int32_t t34 = -7128;

	t34 = ((x137&(x138==x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = 529090052030442953LLU;
	static uint64_t x143 = 13744LLU;
	volatile uint64_t t35 = 432965LLU;

	t35 = ((x141&(x142==x143))*x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 6533837901588LLU;
	static int32_t x146 = INT32_MIN;
	static int8_t x147 = INT8_MIN;
	uint32_t x148 = UINT32_MAX;
	uint64_t t36 = 2253016LLU;

	t36 = ((x145&(x146==x147))*x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 2;
	int32_t x150 = -1;
	int16_t x151 = -423;
	static uint64_t x152 = 82504LLU;

	t37 = ((x149&(x150==x151))*x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x154 = UINT32_MAX;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = 6LLU;
	volatile uint64_t t38 = 61386304263192LLU;

	t38 = ((x153&(x154==x155))*x156);

	if (t38 != 6LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 2288U;
	int32_t x158 = -581853;
	int16_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t39 = 283502LLU;

	t39 = ((x157&(x158==x159))*x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	static uint16_t x162 = 505U;
	static int32_t x163 = INT32_MIN;
	volatile int32_t t40 = -602535;

	t40 = ((x161&(x162==x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 10U;
	uint16_t x166 = 7U;
	uint16_t x167 = 5U;
	int32_t x168 = INT32_MAX;
	static volatile int32_t t41 = -616;

	t41 = ((x165&(x166==x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -9343;
	volatile uint16_t x170 = UINT16_MAX;
	int32_t x171 = -1;
	uint64_t x172 = 895926377272038374LLU;
	volatile uint64_t t42 = 70550086172575682LLU;

	t42 = ((x169&(x170==x171))*x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x174 = UINT64_MAX;
	volatile uint8_t x175 = 95U;
	volatile uint8_t x176 = 25U;

	t43 = ((x173&(x174==x175))*x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 13U;
	uint32_t x178 = 240437U;
	volatile int32_t x179 = -117;
	volatile int8_t x180 = INT8_MAX;

	t44 = ((x177&(x178==x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = -18;
	volatile int64_t x183 = -1LL;
	static int32_t t45 = 36018;

	t45 = ((x181&(x182==x183))*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = 1185481552346815972LL;
	volatile int32_t x187 = INT32_MIN;
	uint64_t x188 = 1770566356129102176LLU;
	static volatile uint64_t t46 = 1284LLU;

	t46 = ((x185&(x186==x187))*x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = 1;
	int16_t x191 = -1;
	volatile int64_t t47 = 3235273LL;

	t47 = ((x189&(x190==x191))*x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x193 = -1;
	int32_t x196 = INT32_MIN;
	int32_t t48 = 38274;

	t48 = ((x193&(x194==x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	volatile uint64_t x198 = 3538LLU;
	static uint16_t x199 = 2U;

	t49 = ((x197&(x198==x199))*x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MAX;
	static int8_t x202 = -22;
	uint16_t x203 = 158U;

	t50 = ((x201&(x202==x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 215U;
	volatile uint8_t x206 = 24U;
	static uint64_t x207 = UINT64_MAX;
	static int8_t x208 = -1;
	uint32_t t51 = 2061665589U;

	t51 = ((x205&(x206==x207))*x208);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 13;
	int32_t x210 = -1;
	static volatile int16_t x211 = INT16_MIN;
	int64_t x212 = -1LL;

	t52 = ((x209&(x210==x211))*x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x214 = 48270655;
	static int64_t t53 = 7LL;

	t53 = ((x213&(x214==x215))*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 42U;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MAX;
	int64_t x220 = INT64_MIN;
	static int64_t t54 = 2343362LL;

	t54 = ((x217&(x218==x219))*x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t55 = -8991853LL;

	t55 = ((x221&(x222==x223))*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	volatile uint64_t t56 = 32LLU;

	t56 = ((x225&(x226==x227))*x228);

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	static uint8_t x231 = UINT8_MAX;
	volatile uint64_t t57 = 8533LLU;

	t57 = ((x229&(x230==x231))*x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	uint64_t x234 = UINT64_MAX;
	volatile uint8_t x235 = UINT8_MAX;
	volatile int16_t x236 = -1;
	static volatile int32_t t58 = 5767677;

	t58 = ((x233&(x234==x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = 3507884433LL;
	volatile uint8_t x238 = 8U;
	volatile int16_t x239 = 107;
	int8_t x240 = -4;

	t59 = ((x237&(x238==x239))*x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 34U;
	static volatile int32_t x242 = INT32_MAX;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -1LL;
	volatile int64_t t60 = -2903715888LL;

	t60 = ((x241&(x242==x243))*x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MAX;
	int8_t x246 = -2;
	uint64_t x248 = 895316646805LLU;
	static uint64_t t61 = 48LLU;

	t61 = ((x245&(x246==x247))*x248);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 3612U;
	static int16_t x251 = -4;
	uint32_t x252 = 28413146U;
	uint32_t t62 = 16U;

	t62 = ((x249&(x250==x251))*x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 107784;
	int16_t x254 = INT16_MIN;
	static uint8_t x255 = 0U;
	int32_t x256 = 1;
	volatile int32_t t63 = 29163565;

	t63 = ((x253&(x254==x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MAX;
	uint8_t x258 = UINT8_MAX;
	int32_t x259 = 146295437;
	volatile uint8_t x260 = 3U;
	volatile int32_t t64 = -25;

	t64 = ((x257&(x258==x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	volatile int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MAX;
	int8_t x264 = -1;
	int32_t t65 = 1;

	t65 = ((x261&(x262==x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 6U;
	uint32_t x266 = UINT32_MAX;
	int8_t x267 = -7;
	int64_t x268 = -1LL;
	int64_t t66 = -14098660379480LL;

	t66 = ((x265&(x266==x267))*x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -37991793;
	uint32_t x270 = 160302372U;
	static uint32_t x271 = 109318U;
	int8_t x272 = -1;

	t67 = ((x269&(x270==x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MAX;
	static uint64_t x275 = 2184LLU;
	volatile int32_t x276 = INT32_MIN;
	static volatile int32_t t68 = 240;

	t68 = ((x273&(x274==x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 889U;
	int64_t x278 = INT64_MIN;
	static int8_t x279 = 1;
	static int32_t x280 = INT32_MIN;
	static int32_t t69 = -28386;

	t69 = ((x277&(x278==x279))*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MAX;
	volatile int64_t t70 = 403LL;

	t70 = ((x281&(x282==x283))*x284);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -6;
	volatile int64_t x286 = INT64_MIN;
	volatile uint16_t x287 = 1126U;
	uint16_t x288 = 250U;
	volatile int32_t t71 = 202;

	t71 = ((x285&(x286==x287))*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MAX;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t72 = 1659894;

	t72 = ((x289&(x290==x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 3055;
	int64_t x294 = 24557LL;
	volatile uint32_t x295 = 32413981U;
	int8_t x296 = -1;
	static volatile int32_t t73 = -13;

	t73 = ((x293&(x294==x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 3U;
	uint32_t x298 = 285285806U;
	int64_t x299 = -1679608525097LL;
	volatile uint32_t t74 = 56U;

	t74 = ((x297&(x298==x299))*x300);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -803;
	uint8_t x302 = 0U;
	uint64_t x303 = 1192793778714674LLU;
	int32_t t75 = -120060140;

	t75 = ((x301&(x302==x303))*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = 124304;
	static volatile int16_t x307 = INT16_MIN;
	int32_t t76 = 0;

	t76 = ((x305&(x306==x307))*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = -1;
	int64_t x311 = INT64_MAX;
	static int16_t x312 = 4284;
	volatile int32_t t77 = 119;

	t77 = ((x309&(x310==x311))*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -31080;
	uint32_t x314 = UINT32_MAX;
	static int8_t x315 = INT8_MAX;
	static int8_t x316 = INT8_MIN;
	int32_t t78 = -2056;

	t78 = ((x313&(x314==x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	uint8_t x318 = 0U;
	int64_t x319 = INT64_MIN;
	int16_t x320 = 116;
	static volatile int32_t t79 = -537099;

	t79 = ((x317&(x318==x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = 4073U;
	int64_t x322 = INT64_MIN;
	uint8_t x323 = UINT8_MAX;
	uint64_t x324 = 10889735786655LLU;
	volatile uint64_t t80 = 68378763828335788LLU;

	t80 = ((x321&(x322==x323))*x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = -476731443134LL;
	int32_t x327 = -1;
	int8_t x328 = INT8_MIN;
	int32_t t81 = -2907;

	t81 = ((x325&(x326==x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MAX;
	uint32_t x332 = 2950U;

	t82 = ((x329&(x330==x331))*x332);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 586;
	volatile int64_t x335 = -1LL;
	static uint32_t x336 = 20330U;

	t83 = ((x333&(x334==x335))*x336);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = 10U;
	int8_t x338 = INT8_MIN;
	volatile int32_t x339 = -148767;
	uint8_t x340 = 8U;
	int32_t t84 = 953;

	t84 = ((x337&(x338==x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = 448U;
	volatile int8_t x343 = INT8_MIN;
	volatile uint8_t x344 = 7U;
	int32_t t85 = 575566040;

	t85 = ((x341&(x342==x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = 2872U;
	int64_t x347 = INT64_MAX;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = 247905021;

	t86 = ((x345&(x346==x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 0U;
	static int16_t x350 = INT16_MIN;
	int32_t x351 = -89103;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 1;

	t87 = ((x349&(x350==x351))*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 194786495U;
	static volatile int16_t x354 = 6;
	int8_t x355 = -1;
	int64_t t88 = 0LL;

	t88 = ((x353&(x354==x355))*x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = -1;
	static int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -61952;

	t89 = ((x357&(x358==x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 12U;
	uint32_t x362 = 25U;
	int64_t x364 = INT64_MIN;
	int64_t t90 = -433748383545LL;

	t90 = ((x361&(x362==x363))*x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -10114;
	static int32_t x366 = INT32_MIN;
	int16_t x367 = -1;
	uint16_t x368 = UINT16_MAX;
	static int32_t t91 = 54;

	t91 = ((x365&(x366==x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -1;
	volatile int64_t x371 = -1LL;
	static uint64_t x372 = UINT64_MAX;

	t92 = ((x369&(x370==x371))*x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	static uint32_t x375 = UINT32_MAX;
	int32_t x376 = -1;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x373&(x374==x375))*x376);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static volatile uint8_t x378 = 8U;
	int8_t x379 = -1;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -65050895;

	t94 = ((x377&(x378==x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	volatile int8_t x382 = INT8_MIN;
	uint64_t x383 = 993254LLU;
	int16_t x384 = INT16_MIN;

	t95 = ((x381&(x382==x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MAX;
	uint64_t x388 = 548394461962863LLU;
	uint64_t t96 = 5006624747714421691LLU;

	t96 = ((x385&(x386==x387))*x388);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 7U;
	volatile uint16_t x390 = 3206U;

	t97 = ((x389&(x390==x391))*x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	volatile uint64_t x395 = 527829389632059LLU;
	int16_t x396 = -1;
	int64_t t98 = -9711231847LL;

	t98 = ((x393&(x394==x395))*x396);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = 7U;
	volatile int32_t x398 = 59;
	int32_t x400 = INT32_MIN;

	t99 = ((x397&(x398==x399))*x400);

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

