#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
uint8_t x10 = 17U;
volatile int64_t t3 = 25234LL;
int16_t x20 = -1;
uint64_t x25 = UINT64_MAX;
uint32_t x28 = 184643U;
static volatile uint16_t x30 = UINT16_MAX;
uint16_t x33 = UINT16_MAX;
volatile int32_t t8 = -168180767;
uint16_t x46 = 2269U;
int16_t x54 = INT16_MAX;
int8_t x57 = -47;
int64_t x62 = 502253002608LL;
uint8_t x64 = 0U;
static int64_t t15 = 15239742LL;
uint32_t x71 = UINT32_MAX;
int32_t x73 = 223488739;
uint64_t x74 = 1542384LLU;
static volatile int64_t t19 = 35384277594154LL;
static int32_t x89 = 212994;
volatile int16_t x91 = INT16_MIN;
volatile int16_t x98 = -89;
int8_t x99 = 0;
volatile int32_t t24 = -408;
uint16_t x101 = UINT16_MAX;
int32_t x104 = 12;
static uint32_t t26 = 15U;
int8_t x111 = INT8_MAX;
int32_t x114 = INT32_MAX;
static int8_t x115 = INT8_MIN;
volatile int8_t x118 = INT8_MIN;
uint16_t x121 = 1U;
volatile uint8_t x122 = UINT8_MAX;
int8_t x124 = INT8_MIN;
int32_t x141 = -223;
volatile int32_t x142 = -1;
static uint32_t t35 = 1816054758U;
uint64_t t37 = 37538LLU;
volatile uint8_t x155 = UINT8_MAX;
uint64_t x157 = 5223378827625LLU;
static uint64_t t39 = 95017651LLU;
uint32_t x163 = UINT32_MAX;
int32_t x166 = -1;
static int8_t x170 = -1;
volatile uint64_t t42 = 1017065LLU;
int32_t x173 = 290260;
volatile int8_t x180 = INT8_MIN;
int16_t x191 = -1;
int8_t x195 = INT8_MIN;
static int32_t x203 = 868608456;
int8_t x206 = -10;
int32_t x207 = -1;
static volatile int16_t x219 = 59;
volatile uint8_t x221 = 0U;
volatile uint8_t x225 = UINT8_MAX;
static int16_t x226 = -1;
int8_t x228 = 1;
volatile int32_t t56 = 71;
static int8_t x229 = 0;
int64_t x233 = INT64_MIN;
int64_t x252 = -43952986590LL;
uint8_t x255 = 1U;
uint16_t x256 = 0U;
volatile int32_t x258 = 2;
int64_t t64 = -6602751LL;
int32_t x264 = -10;
static int8_t x266 = INT8_MAX;
static int16_t x267 = INT16_MIN;
volatile int16_t x271 = -1;
int8_t x274 = -26;
uint32_t x278 = 2856U;
uint8_t x284 = 1U;
volatile uint64_t x289 = UINT64_MAX;
volatile uint32_t x296 = UINT32_MAX;
uint32_t x304 = UINT32_MAX;
int64_t x310 = 1762255136LL;
volatile int16_t x318 = INT16_MAX;
static volatile int64_t x320 = INT64_MIN;
volatile int64_t t79 = -4405609960013307636LL;
static uint32_t t80 = 29523053U;
uint16_t x325 = 1866U;
int32_t x328 = INT32_MIN;
uint64_t x335 = 13679LLU;
static int64_t x336 = -1LL;
volatile uint64_t t83 = 8210861095248LLU;
volatile int32_t x337 = -1;
uint8_t x339 = UINT8_MAX;
static int16_t x342 = 8234;
int64_t x351 = 684859148938932495LL;
int8_t x353 = -1;
static int32_t x357 = -1;
int64_t x359 = INT64_MAX;
uint32_t x360 = 2028193U;
uint64_t x363 = 4414053064887432951LLU;
uint64_t t90 = 4261178910771354LLU;
int16_t x373 = INT16_MIN;
int16_t x382 = -8;
static int32_t x383 = -1;
int32_t x391 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint32_t x2 = 56U;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 5751693U;

	t0 = (x1&(x2&(x3^x4)));

	if (t0 != 56U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	int64_t x6 = -54546380855896940LL;
	static int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MAX;
	int64_t t1 = -48107555LL;

	t1 = (x5&(x6&(x7^x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 117988LLU;
	int64_t x11 = -1LL;
	static int32_t x12 = -323569;
	volatile uint64_t t2 = 544532197394883735LLU;

	t2 = (x9&(x10&(x11^x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 8U;
	int64_t x14 = INT64_MIN;
	uint32_t x15 = 7909U;
	uint16_t x16 = 1U;

	t3 = (x13&(x14&(x15^x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -29451517;
	int16_t x18 = INT16_MAX;
	uint32_t x19 = UINT32_MAX;
	volatile uint32_t t4 = 4695648U;

	t4 = (x17&(x18&(x19^x20)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 431303512LLU;
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MIN;
	uint64_t t5 = 5024704541645924LLU;

	t5 = (x21&(x22&(x23^x24)));

	if (t5 != 88LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MAX;
	uint64_t t6 = 208914115723LLU;

	t6 = (x25&(x26&(x27^x28)));

	if (t6 != 9223372036854579200LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -28690;
	int32_t x31 = INT32_MIN;
	volatile int8_t x32 = -1;
	int32_t t7 = -2;

	t7 = (x29&(x30&(x31^x32)));

	if (t7 != 36846) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MIN;
	static volatile int16_t x35 = 152;
	int8_t x36 = INT8_MIN;

	t8 = (x33&(x34&(x35^x36)));

	if (t8 != 65280) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 252526224736LLU;
	volatile int8_t x38 = -1;
	static int8_t x39 = -4;
	int16_t x40 = -1;
	uint64_t t9 = 1105LLU;

	t9 = (x37&(x38&(x39^x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 27070067485607LLU;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MAX;
	uint64_t t10 = 81469946774900139LLU;

	t10 = (x41&(x42&(x43^x44)));

	if (t10 != 11175LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 127520;
	uint8_t x47 = 7U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 14944;

	t11 = (x45&(x46&(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 23U;
	int8_t x50 = -1;
	int16_t x51 = -1;
	static int64_t x52 = 15083131LL;
	int64_t t12 = -8063LL;

	t12 = (x49&(x50&(x51^x52)));

	if (t12 != 4LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	static volatile int8_t x55 = 0;
	uint32_t x56 = UINT32_MAX;
	static volatile uint32_t t13 = 9439U;

	t13 = (x53&(x54&(x55^x56)));

	if (t13 != 32767U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x58 = -1LL;
	static int8_t x59 = INT8_MAX;
	uint8_t x60 = 5U;
	volatile int64_t t14 = -12LL;

	t14 = (x57&(x58&(x59^x60)));

	if (t14 != 80LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	uint16_t x63 = 3446U;

	t15 = (x61&(x62&(x63^x64)));

	if (t15 != 3328LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static uint16_t x66 = 57U;
	uint32_t x67 = 82U;
	int32_t x68 = INT32_MAX;
	uint32_t t16 = 4806258U;

	t16 = (x65&(x66&(x67^x68)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MIN;
	static uint32_t x72 = UINT32_MAX;
	uint32_t t17 = 11140491U;

	t17 = (x69&(x70&(x71^x72)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x75 = -2;
	volatile int16_t x76 = INT16_MAX;
	volatile uint64_t t18 = 3143372611467384LLU;

	t18 = (x73&(x74&(x75^x76)));

	if (t18 != 1179648LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -94481863LL;
	uint8_t x78 = UINT8_MAX;
	static uint8_t x79 = 13U;
	volatile int64_t x80 = -1LL;

	t19 = (x77&(x78&(x79^x80)));

	if (t19 != 48LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 83270;
	static int32_t x82 = INT32_MAX;
	uint8_t x83 = 25U;
	static int64_t x84 = INT64_MAX;
	int64_t t20 = -8771LL;

	t20 = (x81&(x82&(x83^x84)));

	if (t20 != 83270LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 81;
	int64_t x86 = INT64_MIN;
	volatile uint64_t x87 = 44180486440348791LLU;
	int8_t x88 = 2;
	volatile uint64_t t21 = 1748997375716398LLU;

	t21 = (x85&(x86&(x87^x88)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 8U;
	static int32_t x92 = -1;
	int32_t t22 = -1;

	t22 = (x89&(x90&(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -3;
	int32_t x94 = INT32_MIN;
	static volatile uint8_t x95 = UINT8_MAX;
	int16_t x96 = -1;
	int32_t t23 = INT32_MIN;

	t23 = (x93&(x94&(x95^x96)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	volatile int8_t x100 = -1;

	t24 = (x97&(x98&(x99^x100)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x102 = 602971U;
	static int8_t x103 = INT8_MIN;
	static volatile uint32_t t25 = 4073U;

	t25 = (x101&(x102&(x103^x104)));

	if (t25 != 13064U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1U;
	static int32_t x106 = -1;
	int32_t x107 = 123726;
	int32_t x108 = INT32_MAX;

	t26 = (x105&(x106&(x107^x108)));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = -1LL;
	int32_t x110 = INT32_MAX;
	static volatile uint8_t x112 = 0U;
	static volatile int64_t t27 = -1LL;

	t27 = (x109&(x110&(x111^x112)));

	if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 570LLU;
	uint16_t x116 = 91U;
	uint64_t t28 = 315884689820209267LLU;

	t28 = (x113&(x114&(x115^x116)));

	if (t28 != 538LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x119 = 65U;
	int64_t x120 = INT64_MIN;
	static volatile int64_t t29 = INT64_MIN;

	t29 = (x117&(x118&(x119^x120)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = INT32_MAX;
	volatile int32_t t30 = 287349522;

	t30 = (x121&(x122&(x123^x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 0U;
	int64_t x126 = INT64_MIN;
	volatile int64_t x127 = INT64_MIN;
	int32_t x128 = -239733;
	static volatile int64_t t31 = -402249011445569LL;

	t31 = (x125&(x126&(x127^x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	static uint16_t x130 = UINT16_MAX;
	static int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = 4287858921959LLU;
	uint64_t t32 = 9971634LLU;

	t32 = (x129&(x130&(x131^x132)));

	if (t32 != 53632LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 1U;
	int64_t x134 = -158444615685LL;
	int16_t x135 = INT16_MAX;
	int64_t x136 = INT64_MIN;
	static volatile int64_t t33 = 12LL;

	t33 = (x133&(x134&(x135^x136)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 4U;
	int8_t x138 = -1;
	int64_t x139 = 29251041701LL;
	int64_t x140 = -1LL;
	int64_t t34 = 0LL;

	t34 = (x137&(x138&(x139^x140)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x143 = 28U;
	uint32_t x144 = UINT32_MAX;

	t35 = (x141&(x142&(x143^x144)));

	if (t35 != 4294967073U) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	uint16_t x146 = 158U;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = UINT64_MAX;
	uint64_t t36 = 28LLU;

	t36 = (x145&(x146&(x147^x148)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = 2699;
	int64_t x150 = INT64_MIN;
	static int32_t x151 = INT32_MIN;
	uint64_t x152 = 786LLU;

	t37 = (x149&(x150&(x151^x152)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 0;
	int64_t x154 = INT64_MAX;
	int8_t x156 = -1;
	int64_t t38 = -211LL;

	t38 = (x153&(x154&(x155^x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = 1724402079LL;
	int16_t x160 = 6;

	t39 = (x157&(x158&(x159^x160)));

	if (t39 != 9LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	static int16_t x162 = -108;
	static volatile uint16_t x164 = UINT16_MAX;
	volatile uint32_t t40 = 0U;

	t40 = (x161&(x162&(x163^x164)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static int16_t x167 = -45;
	uint32_t x168 = UINT32_MAX;
	static volatile uint32_t t41 = 1772U;

	t41 = (x165&(x166&(x167^x168)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1069157;
	volatile uint64_t x171 = UINT64_MAX;
	int16_t x172 = 116;

	t42 = (x169&(x170&(x171^x172)));

	if (t42 != 18446744073708482443LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 43404417U;
	volatile int32_t x175 = INT32_MAX;
	int8_t x176 = -1;
	volatile uint32_t t43 = 318257U;

	t43 = (x173&(x174&(x175^x176)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 6U;
	int64_t x178 = INT64_MIN;
	volatile uint16_t x179 = 2U;
	volatile int64_t t44 = -12279LL;

	t44 = (x177&(x178&(x179^x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	uint16_t x182 = 58U;
	int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = -791456300;

	t45 = (x181&(x182&(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MAX;
	uint8_t x186 = UINT8_MAX;
	static int8_t x187 = -1;
	static uint8_t x188 = UINT8_MAX;
	volatile int64_t t46 = -36880715209404961LL;

	t46 = (x185&(x186&(x187^x188)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 0U;
	uint8_t x190 = 41U;
	static int16_t x192 = -38;
	int32_t t47 = 136766;

	t47 = (x189&(x190&(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MIN;
	static int16_t x196 = INT16_MAX;
	volatile int32_t t48 = -5805;

	t48 = (x193&(x194&(x195^x196)));

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 60U;
	volatile uint16_t x198 = 6U;
	static int32_t x199 = -1;
	int8_t x200 = 20;
	uint32_t t49 = 2079U;

	t49 = (x197&(x198&(x199^x200)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = INT8_MIN;
	volatile int8_t x202 = 0;
	int8_t x204 = 11;
	volatile int32_t t50 = -3790770;

	t50 = (x201&(x202&(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x205 = INT64_MAX;
	int16_t x208 = -2;
	int64_t t51 = 23721127322LL;

	t51 = (x205&(x206&(x207^x208)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -412578670875083667LL;
	int64_t x210 = 57977059922587LL;
	volatile uint8_t x211 = 13U;
	int16_t x212 = -1;
	volatile int64_t t52 = -95288311LL;

	t52 = (x209&(x210&(x211^x212)));

	if (t52 != 53474490732544LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int64_t x214 = INT64_MIN;
	volatile uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x213&(x214&(x215^x216)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int32_t x218 = INT32_MAX;
	volatile int32_t x220 = -1;
	int64_t t54 = -9798289580707LL;

	t54 = (x217&(x218&(x219^x220)));

	if (t54 != 2147483588LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = INT64_MAX;
	uint8_t x223 = UINT8_MAX;
	static uint16_t x224 = UINT16_MAX;
	static volatile int64_t t55 = -1888792256174LL;

	t55 = (x221&(x222&(x223^x224)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x227 = INT32_MIN;

	t56 = (x225&(x226&(x227^x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = -3;
	static uint8_t x231 = 29U;
	int16_t x232 = -191;
	volatile int32_t t57 = 421;

	t57 = (x229&(x230&(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = 53U;
	static volatile uint16_t x235 = 418U;
	uint32_t x236 = UINT32_MAX;
	int64_t t58 = -1LL;

	t58 = (x233&(x234&(x235^x236)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = UINT32_MAX;
	uint64_t x238 = 1689619216729199LLU;
	uint16_t x239 = 4043U;
	int32_t x240 = INT32_MAX;
	uint64_t t59 = 16813096663LLU;

	t59 = (x237&(x238&(x239^x240)));

	if (t59 != 557318180LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = UINT8_MAX;
	int64_t x242 = -1LL;
	int32_t x243 = 3;
	uint64_t x244 = 620LLU;
	uint64_t t60 = 43523040879493LLU;

	t60 = (x241&(x242&(x243^x244)));

	if (t60 != 111LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	volatile int16_t x246 = INT16_MAX;
	static int64_t x247 = -105379219LL;
	static uint64_t x248 = 1550809976083952967LLU;
	uint64_t t61 = 1029798446796LLU;

	t61 = (x245&(x246&(x247^x248)));

	if (t61 != 16128LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 2;
	static volatile uint8_t x250 = UINT8_MAX;
	volatile int64_t x251 = INT64_MAX;
	volatile int64_t t62 = -1878LL;

	t62 = (x249&(x250&(x251^x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	volatile int8_t x254 = 26;
	static volatile int64_t t63 = -10963899601LL;

	t63 = (x253&(x254&(x255^x256)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 1;
	int64_t x259 = INT64_MIN;
	int32_t x260 = -1;

	t64 = (x257&(x258&(x259^x260)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int8_t x262 = -1;
	int64_t x263 = -1LL;
	static volatile int64_t t65 = 485LL;

	t65 = (x261&(x262&(x263^x264)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	uint64_t x268 = 507522044LLU;
	static volatile uint64_t t66 = 1282453LLU;

	t66 = (x265&(x266&(x267^x268)));

	if (t66 != 124LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = -1;
	int32_t x272 = -1;
	volatile uint64_t t67 = 22188675LLU;

	t67 = (x269&(x270&(x271^x272)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	static volatile int32_t x275 = INT32_MAX;
	int64_t x276 = 1670LL;
	int64_t t68 = -928LL;

	t68 = (x273&(x274&(x275^x276)));

	if (t68 != 2147481856LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int8_t x279 = -1;
	uint8_t x280 = 6U;
	static volatile uint32_t t69 = 63639U;

	t69 = (x277&(x278&(x279^x280)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MAX;
	volatile int32_t x282 = -16;
	uint16_t x283 = UINT16_MAX;
	int32_t t70 = 7;

	t70 = (x281&(x282&(x283^x284)));

	if (t70 != 32752) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 1;
	static int64_t x286 = -11320184584215LL;
	uint64_t x287 = 17485025LLU;
	int32_t x288 = INT32_MIN;
	uint64_t t71 = 1677257703980098LLU;

	t71 = (x285&(x286&(x287^x288)));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = 0U;
	volatile uint64_t x291 = 1173337071067320320LLU;
	static int32_t x292 = INT32_MIN;
	static volatile uint64_t t72 = 558705036746250621LLU;

	t72 = (x289&(x290&(x291^x292)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	static uint8_t x295 = 14U;
	volatile uint32_t t73 = 60140149U;

	t73 = (x293&(x294&(x295^x296)));

	if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = 474;
	int16_t x298 = 61;
	uint16_t x299 = 24609U;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 64;

	t74 = (x297&(x298&(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	volatile int8_t x302 = 6;
	static volatile uint64_t x303 = UINT64_MAX;
	static volatile uint64_t t75 = 423800921LLU;

	t75 = (x301&(x302&(x303^x304)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	volatile int16_t x306 = -836;
	int8_t x307 = -1;
	static uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = 126772021;

	t76 = (x305&(x306&(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 3868038744212929LL;
	int64_t x311 = INT64_MAX;
	static int64_t x312 = INT64_MAX;
	volatile int64_t t77 = -54751846253LL;

	t77 = (x309&(x310&(x311^x312)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = 1U;
	uint32_t x314 = 991698094U;
	int32_t x315 = 782887237;
	int16_t x316 = INT16_MAX;
	uint32_t t78 = 919U;

	t78 = (x313&(x314&(x315^x316)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 17U;
	volatile uint16_t x319 = UINT16_MAX;

	t79 = (x317&(x318&(x319^x320)));

	if (t79 != 17LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 5U;
	int32_t x322 = -1;
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 116280U;

	t80 = (x321&(x322&(x323^x324)));

	if (t80 != 5U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = INT32_MIN;
	volatile int64_t x327 = INT64_MAX;
	volatile int64_t t81 = -70346255776865LL;

	t81 = (x325&(x326&(x327^x328)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 1U;
	int8_t x330 = -1;
	volatile int16_t x331 = -1;
	volatile uint64_t x332 = 5826317LLU;
	volatile uint64_t t82 = 31LLU;

	t82 = (x329&(x330&(x331^x332)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 859890LL;
	int16_t x334 = -11;

	t83 = (x333&(x334&(x335^x336)));

	if (t83 != 854672LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MAX;
	int32_t x340 = INT32_MIN;
	int64_t t84 = 8LL;

	t84 = (x337&(x338&(x339^x340)));

	if (t84 != 9223372034707292415LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int64_t x343 = -1LL;
	static int32_t x344 = -233;
	int64_t t85 = -1LL;

	t85 = (x341&(x342&(x343^x344)));

	if (t85 != 40LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -6;

	t86 = (x345&(x346&(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int16_t x350 = INT16_MIN;
	volatile int8_t x352 = -7;
	volatile int64_t t87 = 206116039087LL;

	t87 = (x349&(x350&(x351^x352)));

	if (t87 != 8538512887915839488LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	volatile int16_t x355 = INT16_MIN;
	int32_t x356 = -1;
	volatile int32_t t88 = 1616;

	t88 = (x353&(x354&(x355^x356)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x358 = -1;
	static volatile int64_t t89 = -2LL;

	t89 = (x357&(x358&(x359^x360)));

	if (t89 != 9223372036852747614LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	static uint8_t x362 = UINT8_MAX;
	int16_t x364 = INT16_MAX;

	t90 = (x361&(x362&(x363^x364)));

	if (t90 != 8LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MAX;
	volatile int64_t t91 = -7LL;

	t91 = (x365&(x366&(x367^x368)));

	if (t91 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = 10;
	uint8_t x371 = UINT8_MAX;
	volatile int32_t x372 = -15193870;
	uint64_t t92 = 128719934759885LLU;

	t92 = (x369&(x370&(x371^x372)));

	if (t92 != 8LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = 1417760507LL;
	static int16_t x376 = 1;
	uint64_t t93 = 6898LLU;

	t93 = (x373&(x374&(x375^x376)));

	if (t93 != 1417740288LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 64U;
	int8_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -1;
	uint32_t t94 = 480886738U;

	t94 = (x377&(x378&(x379^x380)));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 338078027LL;
	uint8_t x384 = 5U;
	volatile int64_t t95 = -4557023531892960296LL;

	t95 = (x381&(x382&(x383^x384)));

	if (t95 != 338078024LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 2;
	volatile int32_t x386 = INT32_MIN;
	volatile uint8_t x387 = UINT8_MAX;
	static int8_t x388 = -22;
	volatile int32_t t96 = -443874664;

	t96 = (x385&(x386&(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = -1;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 14;

	t97 = (x389&(x390&(x391^x392)));

	if (t97 != 2147483520) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	uint8_t x394 = 2U;
	uint8_t x395 = 18U;
	int64_t x396 = -116962119LL;
	volatile int64_t t98 = -308LL;

	t98 = (x393&(x394&(x395^x396)));

	if (t98 != 2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	volatile int32_t x398 = -1;
	volatile int8_t x399 = -1;
	int64_t x400 = INT64_MAX;
	int64_t t99 = 506055604LL;

	t99 = (x397&(x398&(x399^x400)));

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

