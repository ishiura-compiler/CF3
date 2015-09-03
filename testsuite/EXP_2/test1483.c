#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
uint64_t x2 = 645647LLU;
static int64_t t1 = 1993LL;
int16_t x9 = INT16_MIN;
volatile int8_t x12 = 1;
int8_t x26 = -1;
static int64_t x27 = INT64_MIN;
int32_t x28 = INT32_MAX;
uint16_t x36 = 1U;
int64_t x40 = -1LL;
int8_t x43 = -1;
static int32_t x53 = -1;
volatile int64_t x54 = INT64_MIN;
volatile int64_t t13 = 9894819565688002LL;
int64_t x62 = -527840187899941LL;
int16_t x66 = INT16_MIN;
int16_t x74 = -1;
volatile int16_t x78 = -1;
int8_t x81 = 0;
static int64_t x88 = INT64_MIN;
volatile uint64_t t21 = 109268809LLU;
int8_t x90 = INT8_MIN;
uint64_t x91 = 12171525186LLU;
int32_t t22 = INT32_MIN;
static volatile int16_t x96 = INT16_MIN;
volatile int64_t t23 = 7333402492253LL;
volatile uint32_t x97 = UINT32_MAX;
static volatile int16_t x100 = -2;
volatile uint8_t x102 = 6U;
static int32_t t25 = -178452;
volatile int64_t x108 = INT64_MAX;
static volatile uint32_t t27 = 4U;
int64_t x127 = INT64_MIN;
volatile int32_t t31 = INT32_MAX;
static int8_t x129 = -1;
uint16_t x133 = 46U;
volatile int32_t t33 = -7148158;
uint64_t x147 = UINT64_MAX;
static int32_t x151 = INT32_MIN;
int16_t x154 = 5751;
int8_t x156 = 32;
volatile int64_t t38 = -9480622939LL;
volatile int64_t t40 = 466886897557LL;
volatile int64_t t42 = 98429009154185658LL;
int32_t x182 = INT32_MAX;
volatile int64_t t45 = INT64_MIN;
int16_t x190 = INT16_MIN;
static uint16_t x193 = 5U;
static int8_t x200 = INT8_MIN;
volatile int32_t x201 = -1;
int16_t x202 = -1;
static int32_t t51 = -221095938;
int16_t x211 = -1;
volatile int32_t x212 = -2988116;
volatile int32_t t52 = 14704;
uint16_t x213 = UINT16_MAX;
int32_t x217 = INT32_MAX;
uint64_t x220 = 7645LLU;
static volatile uint64_t t54 = 69223413108345879LLU;
volatile int8_t x223 = INT8_MIN;
uint8_t x226 = UINT8_MAX;
volatile int64_t x233 = INT64_MAX;
uint64_t t58 = 50292673LLU;
uint64_t x245 = 436338LLU;
volatile int16_t x247 = INT16_MIN;
uint32_t x249 = 94898095U;
int32_t x255 = 26;
static uint8_t x256 = UINT8_MAX;
volatile int32_t t63 = -800;
volatile int32_t x258 = INT32_MAX;
volatile uint64_t x259 = 25153LLU;
uint16_t x262 = 11920U;
uint8_t x264 = 24U;
uint64_t x265 = 1LLU;
static volatile int32_t x272 = INT32_MAX;
int32_t x285 = -139251128;
static int16_t x289 = INT16_MAX;
static int64_t x291 = -1LL;
volatile uint16_t x293 = 1899U;
static int64_t x296 = INT64_MIN;
static int64_t t73 = INT64_MIN;
int64_t x298 = -658327606343LL;
uint16_t x299 = UINT16_MAX;
int8_t x303 = INT8_MAX;
uint64_t t75 = 21986577720291598LLU;
uint8_t x310 = 91U;
int8_t x311 = -1;
volatile int16_t x320 = INT16_MIN;
uint64_t t79 = 362718LLU;
int64_t x325 = 2433635250955938210LL;
uint32_t x326 = 26736452U;
int64_t x333 = -8027454709LL;
int64_t x335 = 28182147027964LL;
int64_t x336 = -13769574LL;
uint32_t x342 = 4U;
static int32_t x371 = -1;
volatile uint32_t x375 = UINT32_MAX;
uint8_t x378 = 1U;


void f0(void) {
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = 7843645530LL;
	volatile int64_t t0 = 15454913281LL;

	t0 = ((x1&(x2<x3))+x4);

	if (t0 != 7843645530LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 21868628084986360LL;
	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	volatile uint16_t x8 = UINT16_MAX;

	t1 = ((x5&(x6<x7))+x8);

	if (t1 != 65535LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MAX;
	int8_t x11 = -60;
	static volatile int32_t t2 = 390873;

	t2 = ((x9&(x10<x11))+x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -2LL;
	volatile uint8_t x14 = 47U;
	static int8_t x15 = INT8_MAX;
	volatile int8_t x16 = INT8_MIN;
	volatile int64_t t3 = 382325152LL;

	t3 = ((x13&(x14<x15))+x16);

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	int32_t x18 = -37569124;
	int32_t x19 = INT32_MIN;
	volatile uint16_t x20 = 0U;
	int32_t t4 = -26;

	t4 = ((x17&(x18<x19))+x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 56;
	int32_t x22 = INT32_MIN;
	uint64_t x23 = 343080951LLU;
	int16_t x24 = INT16_MIN;
	static int32_t t5 = 469;

	t5 = ((x21&(x22<x23))+x24);

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int32_t t6 = INT32_MAX;

	t6 = ((x25&(x26<x27))+x28);

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	int64_t x30 = -1LL;
	int8_t x31 = INT8_MAX;
	uint8_t x32 = 0U;
	volatile int32_t t7 = -33;

	t7 = ((x29&(x30<x31))+x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int32_t x34 = INT32_MAX;
	int8_t x35 = INT8_MIN;
	int32_t t8 = -18817786;

	t8 = ((x33&(x34<x35))+x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int16_t x38 = -1729;
	int16_t x39 = -1;
	static volatile int64_t t9 = -152LL;

	t9 = ((x37&(x38<x39))+x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	static uint16_t x44 = UINT16_MAX;
	int32_t t10 = -1;

	t10 = ((x41&(x42<x43))+x44);

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	int16_t x46 = -73;
	static int16_t x47 = INT16_MIN;
	uint64_t x48 = 1102007049466881LLU;
	volatile uint64_t t11 = 10034226402581LLU;

	t11 = ((x45&(x46<x47))+x48);

	if (t11 != 1102007049466881LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 12U;
	int8_t x50 = INT8_MAX;
	static int8_t x51 = -3;
	int32_t x52 = INT32_MIN;
	int32_t t12 = INT32_MIN;

	t12 = ((x49&(x50<x51))+x52);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = -1;
	int64_t x56 = INT64_MIN;

	t13 = ((x53&(x54<x55))+x56);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MAX;
	static int16_t x60 = -1;
	volatile int32_t t14 = -439;

	t14 = ((x57&(x58<x59))+x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	static int8_t x63 = -3;
	static int8_t x64 = 3;
	volatile int32_t t15 = 4147862;

	t15 = ((x61&(x62<x63))+x64);

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int16_t x67 = INT16_MIN;
	volatile uint8_t x68 = 61U;
	int64_t t16 = 25119LL;

	t16 = ((x65&(x66<x67))+x68);

	if (t16 != 61LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = INT32_MAX;
	int32_t x70 = INT32_MAX;
	int16_t x71 = -60;
	static int16_t x72 = INT16_MAX;
	static int32_t t17 = 912515;

	t17 = ((x69&(x70<x71))+x72);

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -1;

	t18 = ((x73&(x74<x75))+x76);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 5;
	static int64_t x79 = -1LL;
	uint32_t x80 = UINT32_MAX;
	uint32_t t19 = UINT32_MAX;

	t19 = ((x77&(x78<x79))+x80);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -1736;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = 26U;
	int32_t t20 = -56755;

	t20 = ((x81&(x82<x83))+x84);

	if (t20 != 26) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 546398085202068LLU;
	volatile int8_t x86 = -1;
	uint8_t x87 = UINT8_MAX;

	t21 = ((x85&(x86<x87))+x88);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -72629085;
	int32_t x92 = INT32_MIN;

	t22 = ((x89&(x90<x91))+x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	static uint16_t x94 = 578U;
	static uint64_t x95 = 46060004700301LLU;

	t23 = ((x93&(x94<x95))+x96);

	if (t23 != -32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x98 = 122U;
	uint16_t x99 = UINT16_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = ((x97&(x98<x99))+x100);

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -646072975;
	int64_t x103 = INT64_MIN;
	static uint16_t x104 = UINT16_MAX;

	t25 = ((x101&(x102<x103))+x104);

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 615LL;
	volatile int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	int64_t t26 = INT64_MAX;

	t26 = ((x105&(x106<x107))+x108);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 124583U;
	int64_t x110 = INT64_MIN;
	static int16_t x111 = INT16_MIN;
	int32_t x112 = -27593707;

	t27 = ((x109&(x110<x111))+x112);

	if (t27 != 4267373590U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 58U;
	static volatile int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -145783;

	t28 = ((x113&(x114<x115))+x116);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 3900U;
	static int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	int16_t x120 = -113;
	static int32_t t29 = -231141;

	t29 = ((x117&(x118<x119))+x120);

	if (t29 != -113) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile int8_t x122 = 0;
	int16_t x123 = INT16_MIN;
	int8_t x124 = 7;
	static volatile int32_t t30 = -741843436;

	t30 = ((x121&(x122<x123))+x124);

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 21U;
	volatile int8_t x126 = -9;
	int32_t x128 = INT32_MAX;

	t31 = ((x125&(x126<x127))+x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 59U;
	static int16_t x131 = INT16_MIN;
	int32_t x132 = -1;
	int32_t t32 = -27;

	t32 = ((x129&(x130<x131))+x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x134 = 1U;
	uint64_t x135 = 13405856440990326LLU;
	uint16_t x136 = UINT16_MAX;

	t33 = ((x133&(x134<x135))+x136);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = UINT32_MAX;
	volatile uint8_t x138 = UINT8_MAX;
	static int32_t x139 = 45485;
	int8_t x140 = -1;
	volatile uint32_t t34 = 47U;

	t34 = ((x137&(x138<x139))+x140);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x141 = INT8_MIN;
	static int8_t x142 = INT8_MAX;
	uint32_t x143 = 183355U;
	static uint8_t x144 = 0U;
	volatile int32_t t35 = 6115;

	t35 = ((x141&(x142<x143))+x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	volatile int8_t x146 = INT8_MIN;
	static volatile uint32_t x148 = 12512142U;
	uint32_t t36 = 935U;

	t36 = ((x145&(x146<x147))+x148);

	if (t36 != 12512143U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 57;
	int8_t x150 = INT8_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = -119;

	t37 = ((x149&(x150<x151))+x152);

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	static int64_t x155 = 1531156LL;

	t38 = ((x153&(x154<x155))+x156);

	if (t38 != 32LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int8_t x158 = INT8_MIN;
	volatile int32_t x159 = -1;
	static uint64_t x160 = UINT64_MAX;
	volatile uint64_t t39 = 323LLU;

	t39 = ((x157&(x158<x159))+x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	int16_t x162 = -57;
	int16_t x163 = INT16_MAX;
	int32_t x164 = -2219;

	t40 = ((x161&(x162<x163))+x164);

	if (t40 != -2218LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int32_t x166 = 57;
	static int32_t x167 = -1;
	int32_t x168 = -306920;
	volatile int32_t t41 = -210314;

	t41 = ((x165&(x166<x167))+x168);

	if (t41 != -306920) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = 138;
	int64_t x172 = -2LL;

	t42 = ((x169&(x170<x171))+x172);

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MIN;
	static uint64_t x175 = 53046362436677LLU;
	int16_t x176 = -37;
	volatile int32_t t43 = -112;

	t43 = ((x173&(x174<x175))+x176);

	if (t43 != -37) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 130U;
	static volatile int16_t x178 = -660;
	int16_t x179 = -2;
	int8_t x180 = 4;
	volatile int32_t t44 = -427142484;

	t44 = ((x177&(x178<x179))+x180);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -202002080;
	int32_t x183 = INT32_MIN;
	static int64_t x184 = INT64_MIN;

	t45 = ((x181&(x182<x183))+x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = -1;
	static int64_t x188 = 257721469305980876LL;
	int64_t t46 = 123364653255LL;

	t46 = ((x185&(x186<x187))+x188);

	if (t46 != 257721469305980876LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 3886;
	int64_t x191 = INT64_MAX;
	int32_t x192 = INT32_MIN;
	int32_t t47 = INT32_MIN;

	t47 = ((x189&(x190<x191))+x192);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 1671;
	volatile int8_t x195 = INT8_MAX;
	static int16_t x196 = -1;
	volatile int32_t t48 = 779;

	t48 = ((x193&(x194<x195))+x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 15;
	int32_t x198 = 726916998;
	uint32_t x199 = UINT32_MAX;
	volatile int32_t t49 = -15077273;

	t49 = ((x197&(x198<x199))+x200);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = 160908738835LL;
	static volatile int64_t t50 = -27769138LL;

	t50 = ((x201&(x202<x203))+x204);

	if (t50 != 160908738835LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	uint64_t x206 = 0LLU;
	int32_t x207 = INT32_MIN;
	int8_t x208 = 0;

	t51 = ((x205&(x206<x207))+x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 1U;
	volatile int64_t x210 = INT64_MAX;

	t52 = ((x209&(x210<x211))+x212);

	if (t52 != -2988116) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 1738LLU;
	static int16_t x216 = INT16_MIN;
	int32_t t53 = -43446019;

	t53 = ((x213&(x214<x215))+x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = 84341LL;
	int32_t x219 = INT32_MIN;

	t54 = ((x217&(x218<x219))+x220);

	if (t54 != 7645LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	static uint16_t x222 = 152U;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t55 = INT32_MIN;

	t55 = ((x221&(x222<x223))+x224);

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = 54U;
	int8_t x227 = INT8_MIN;
	static int64_t x228 = -94394105792371LL;
	int64_t t56 = -34378345LL;

	t56 = ((x225&(x226<x227))+x228);

	if (t56 != -94394105792371LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int8_t x230 = -1;
	uint8_t x231 = 0U;
	static int16_t x232 = INT16_MAX;
	int32_t t57 = -26336429;

	t57 = ((x229&(x230<x231))+x232);

	if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MIN;
	int64_t x235 = 76770LL;
	static uint64_t x236 = UINT64_MAX;

	t58 = ((x233&(x234<x235))+x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 3849442LLU;
	int8_t x238 = 3;
	volatile int16_t x239 = -1;
	int8_t x240 = INT8_MIN;
	volatile uint64_t t59 = 47344547LLU;

	t59 = ((x237&(x238<x239))+x240);

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	static int32_t x242 = INT32_MIN;
	uint64_t x243 = 6300829233822694LLU;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = -28055179;

	t60 = ((x241&(x242<x243))+x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 287U;
	volatile int32_t x248 = -8245;
	uint64_t t61 = 3311576967542715764LLU;

	t61 = ((x245&(x246<x247))+x248);

	if (t61 != 18446744073709543371LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x250 = -1;
	uint32_t x251 = 53U;
	uint16_t x252 = UINT16_MAX;
	volatile uint32_t t62 = 705U;

	t62 = ((x249&(x250<x251))+x252);

	if (t62 != 65535U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	uint8_t x254 = 63U;

	t63 = ((x253&(x254<x255))+x256);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 72LL;
	static uint64_t x260 = 1921472565LLU;
	volatile uint64_t t64 = 543886041330LLU;

	t64 = ((x257&(x258<x259))+x260);

	if (t64 != 1921472565LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 3950;
	static uint32_t x263 = UINT32_MAX;
	int32_t t65 = -188;

	t65 = ((x261&(x262<x263))+x264);

	if (t65 != 24) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x266 = 2U;
	static uint8_t x267 = 0U;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t66 = 83960750582LLU;

	t66 = ((x265&(x266<x267))+x268);

	if (t66 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 14521269212652524LLU;
	int16_t x270 = INT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	uint64_t t67 = 1639528845886043LLU;

	t67 = ((x269&(x270<x271))+x272);

	if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	static uint64_t x274 = UINT64_MAX;
	volatile uint64_t x275 = 2346588002404898LLU;
	int16_t x276 = 7;
	int64_t t68 = 28983LL;

	t68 = ((x273&(x274<x275))+x276);

	if (t68 != 7LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = -1;
	static volatile int32_t x278 = INT32_MIN;
	static int8_t x279 = INT8_MIN;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t69 = 926;

	t69 = ((x277&(x278<x279))+x280);

	if (t69 != 65536) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	volatile int64_t x282 = INT64_MIN;
	static int32_t x283 = INT32_MAX;
	static int8_t x284 = INT8_MIN;
	int32_t t70 = 78;

	t70 = ((x281&(x282<x283))+x284);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = 67581U;
	volatile int16_t x287 = -1;
	static volatile int32_t x288 = INT32_MIN;
	int32_t t71 = INT32_MIN;

	t71 = ((x285&(x286<x287))+x288);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x290 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	static int64_t t72 = 4LL;

	t72 = ((x289&(x290<x291))+x292);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x294 = 2;
	int16_t x295 = -1;

	t73 = ((x293&(x294<x295))+x296);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 233205LLU;
	int32_t x300 = INT32_MIN;
	uint64_t t74 = 11600476965866557LLU;

	t74 = ((x297&(x298<x299))+x300);

	if (t74 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 20664LLU;
	int32_t x302 = INT32_MAX;
	static volatile int8_t x304 = INT8_MAX;

	t75 = ((x301&(x302<x303))+x304);

	if (t75 != 127LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	uint8_t x306 = UINT8_MAX;
	static uint64_t x307 = 1011441708LLU;
	static int16_t x308 = INT16_MAX;
	uint32_t t76 = 30084599U;

	t76 = ((x305&(x306<x307))+x308);

	if (t76 != 32768U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = INT32_MIN;

	t77 = ((x309&(x310<x311))+x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	static int8_t x314 = -15;
	volatile int64_t x315 = 8101441020766LL;
	static int32_t x316 = -1;
	int32_t t78 = -329959;

	t78 = ((x313&(x314<x315))+x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = UINT64_MAX;
	int16_t x318 = INT16_MAX;
	int32_t x319 = INT32_MAX;

	t79 = ((x317&(x318<x319))+x320);

	if (t79 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = -1;
	static int32_t x322 = -1;
	static int64_t x323 = 703957962454LL;
	int16_t x324 = -1;
	volatile int32_t t80 = 0;

	t80 = ((x321&(x322<x323))+x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x327 = INT64_MAX;
	uint16_t x328 = 5U;
	volatile int64_t t81 = -113162564751066875LL;

	t81 = ((x325&(x326<x327))+x328);

	if (t81 != 5LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	static int32_t x330 = INT32_MIN;
	static uint32_t x331 = 891217031U;
	static volatile int64_t x332 = INT64_MAX;
	static volatile int64_t t82 = INT64_MAX;

	t82 = ((x329&(x330<x331))+x332);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = INT64_MIN;
	volatile int64_t t83 = -1015655068091822872LL;

	t83 = ((x333&(x334<x335))+x336);

	if (t83 != -13769573LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 5472U;
	volatile uint64_t x338 = 2107824255147LLU;
	uint64_t x339 = 1528252969456214711LLU;
	volatile uint16_t x340 = 1U;
	volatile int32_t t84 = -62;

	t84 = ((x337&(x338<x339))+x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int32_t x343 = -69842;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 768751097;

	t85 = ((x341&(x342<x343))+x344);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int32_t x346 = 79170;
	volatile int64_t x347 = INT64_MIN;
	static int16_t x348 = INT16_MAX;
	static volatile int32_t t86 = -591;

	t86 = ((x345&(x346<x347))+x348);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MAX;
	volatile uint32_t x351 = 23564037U;
	static uint64_t x352 = 151184796LLU;
	uint64_t t87 = 123657224254998570LLU;

	t87 = ((x349&(x350<x351))+x352);

	if (t87 != 151184796LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MAX;
	uint64_t x356 = 566681LLU;
	volatile uint64_t t88 = 66571730LLU;

	t88 = ((x353&(x354<x355))+x356);

	if (t88 != 566681LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -867LL;
	static int16_t x358 = -1;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int64_t t89 = -2950196266414626LL;

	t89 = ((x357&(x358<x359))+x360);

	if (t89 != 4294967295LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MAX;
	int32_t x364 = INT32_MAX;
	int32_t t90 = INT32_MAX;

	t90 = ((x361&(x362<x363))+x364);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	static int32_t x366 = INT32_MAX;
	int32_t x367 = INT32_MAX;
	static uint32_t x368 = 56U;
	volatile uint32_t t91 = 1951810U;

	t91 = ((x365&(x366<x367))+x368);

	if (t91 != 56U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 49U;
	static uint64_t x370 = 3564267LLU;
	volatile uint8_t x372 = 58U;
	int32_t t92 = 49286976;

	t92 = ((x369&(x370<x371))+x372);

	if (t92 != 59) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 12702073224094LL;
	uint64_t x374 = 2LLU;
	static uint16_t x376 = 13U;
	int64_t t93 = 16LL;

	t93 = ((x373&(x374<x375))+x376);

	if (t93 != 13LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x377 = 28U;
	int16_t x379 = 6;
	static volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = INT32_MIN;

	t94 = ((x377&(x378<x379))+x380);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -22833566;
	volatile uint64_t x382 = 110LLU;
	uint16_t x383 = 14U;
	static int16_t x384 = -1;
	volatile int32_t t95 = -853;

	t95 = ((x381&(x382<x383))+x384);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static volatile uint32_t x386 = 377868809U;
	static int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	int32_t t96 = -11;

	t96 = ((x385&(x386<x387))+x388);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	static int16_t x390 = INT16_MIN;
	int64_t x391 = -1476936LL;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -719;

	t97 = ((x389&(x390<x391))+x392);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 92U;
	int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;
	volatile int8_t x396 = 14;
	int32_t t98 = 4;

	t98 = ((x393&(x394<x395))+x396);

	if (t98 != 14) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	static volatile int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int64_t x400 = 28LL;
	int64_t t99 = 1LL;

	t99 = ((x397&(x398<x399))+x400);

	if (t99 != 28LL) { NG(); } else { ; }
	
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

