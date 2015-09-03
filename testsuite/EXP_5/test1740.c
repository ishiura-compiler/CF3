#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int64_t x9 = -14414LL;
int8_t x14 = INT8_MIN;
volatile uint64_t t4 = 106LLU;
uint32_t x26 = 66492981U;
volatile int64_t t9 = 122620631LL;
static int16_t x44 = INT16_MIN;
int64_t t11 = -2101108916LL;
uint32_t x52 = UINT32_MAX;
volatile int32_t x54 = 1;
uint8_t x57 = UINT8_MAX;
static uint8_t x58 = 85U;
volatile int64_t x59 = INT64_MIN;
int8_t x63 = INT8_MIN;
int16_t x65 = INT16_MIN;
volatile int16_t x66 = 821;
static volatile int8_t x84 = INT8_MAX;
static int32_t t20 = -32982102;
int16_t x87 = -1;
volatile uint32_t t23 = 13U;
volatile int32_t x98 = 46865;
int64_t t25 = -1LL;
int8_t x109 = INT8_MAX;
volatile uint64_t x113 = 2514746976487334LLU;
volatile uint64_t t28 = 227LLU;
int8_t x118 = INT8_MIN;
int64_t t32 = -335219LL;
volatile uint32_t x141 = UINT32_MAX;
static volatile int8_t x149 = -1;
int8_t x152 = -1;
volatile int32_t t37 = 55128939;
int32_t x154 = -1;
volatile int64_t x157 = INT64_MIN;
int64_t x161 = INT64_MAX;
uint16_t x166 = 1U;
int32_t x167 = INT32_MIN;
uint8_t x168 = 1U;
int16_t x169 = -1;
volatile int64_t t44 = 1862313203815LL;
int64_t t45 = 6430439739418LL;
static int8_t x186 = 21;
uint16_t x188 = 13286U;
uint32_t x189 = 2919156U;
uint64_t x205 = 11149399993020LLU;
uint16_t x206 = UINT16_MAX;
volatile int64_t x208 = 19357576LL;
static int8_t x215 = INT8_MAX;
static int64_t t57 = -11511320LL;
int8_t x237 = INT8_MAX;
volatile int64_t t59 = -1489428451918268553LL;
int64_t x246 = INT64_MIN;
volatile int64_t t61 = 6163412154LL;
int32_t x250 = 3559;
int32_t t62 = -63745;
int16_t x253 = -1;
uint8_t x255 = 1U;
int8_t x270 = -14;
uint32_t x272 = 4632U;
uint8_t x277 = 24U;
volatile int64_t x283 = 60967029LL;
uint8_t x302 = 1U;
int8_t x307 = INT8_MAX;
int32_t x308 = INT32_MIN;
int64_t x312 = INT64_MIN;
volatile uint8_t x314 = 1U;
static int16_t x315 = INT16_MIN;
static int8_t x321 = INT8_MIN;
uint16_t x335 = UINT16_MAX;
uint64_t x339 = 103116LLU;
volatile uint64_t t83 = 1742364107167124LLU;
volatile int64_t x342 = 3LL;
int8_t x343 = INT8_MIN;
int16_t x347 = INT16_MIN;
uint32_t x355 = UINT32_MAX;
uint64_t t91 = 165LLU;
int32_t x374 = INT32_MIN;
volatile uint64_t t92 = 832LLU;
uint32_t x388 = 61U;
int32_t x389 = -63650;
static int32_t x390 = -5;
static int16_t x393 = -22;
int32_t x396 = INT32_MIN;
static int16_t x398 = -1;
uint32_t x400 = 36216269U;


void f0(void) {
	int8_t x1 = -1;
	uint64_t x3 = 0LLU;
	volatile int64_t x4 = -263548878000545938LL;
	static volatile uint64_t t0 = 1046173885388LLU;

	t0 = (x1&((x2&x3)/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MAX;
	uint8_t x7 = 6U;
	static int64_t x8 = -8041412665040LL;
	volatile int64_t t1 = -212850LL;

	t1 = (x5&((x6&x7)/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = 2;
	uint32_t x11 = 205260U;
	int16_t x12 = -77;
	int64_t t2 = 39506356295657450LL;

	t2 = (x9&((x10&x11)/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static uint32_t x15 = 23916U;
	uint16_t x16 = 4U;
	volatile uint32_t t3 = 14395U;

	t3 = (x13&((x14&x15)/x16));

	if (t3 != 5952U) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -4434868919911710LL;
	volatile uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = INT8_MAX;
	uint64_t x20 = 7LLU;

	t4 = (x17&((x18&x19)/x20));

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = 4434699LLU;
	int64_t x23 = -1LL;
	static int64_t x24 = -215039634141080635LL;
	static volatile uint64_t t5 = 4243067LLU;

	t5 = (x21&((x22&x23)/x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = INT32_MAX;
	int8_t x27 = -1;
	int8_t x28 = INT8_MIN;
	uint32_t t6 = 73356U;

	t6 = (x25&((x26&x27)/x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile int64_t x30 = INT64_MIN;
	volatile uint16_t x31 = UINT16_MAX;
	uint16_t x32 = UINT16_MAX;
	int64_t t7 = -51692LL;

	t7 = (x29&((x30&x31)/x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int32_t x34 = -11168914;
	int32_t x35 = -88594;
	volatile uint8_t x36 = UINT8_MAX;
	int32_t t8 = -147770;

	t8 = (x33&((x34&x35)/x36));

	if (t8 != -44074) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 213904102LL;
	int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MAX;
	static int64_t x40 = -1LL;

	t9 = (x37&((x38&x39)/x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -3455727559693LL;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	volatile int64_t t10 = -195311524234354944LL;

	t10 = (x41&((x42&x43)/x44));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	volatile int64_t x46 = INT64_MIN;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = -3645;

	t11 = (x45&((x46&x47)/x48));

	if (t11 != 2530417568410089LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 0;
	int8_t x50 = INT8_MIN;
	static volatile int64_t x51 = INT64_MIN;
	volatile int64_t t12 = -7642947206LL;

	t12 = (x49&((x50&x51)/x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	static volatile uint64_t x56 = 119033996648316390LLU;
	volatile uint64_t t13 = 153397268083211598LLU;

	t13 = (x53&((x54&x55)/x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x60 = 70715LLU;
	static volatile uint64_t t14 = 11288035341951196LLU;

	t14 = (x57&((x58&x59)/x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 232880LLU;
	uint64_t x62 = UINT64_MAX;
	int16_t x64 = INT16_MAX;
	uint64_t t15 = 57407LLU;

	t15 = (x61&((x62&x63)/x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x67 = 12U;
	uint16_t x68 = 21624U;
	static volatile int32_t t16 = 51164146;

	t16 = (x65&((x66&x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 5191U;
	int8_t x70 = 0;
	volatile int32_t x71 = INT32_MIN;
	uint32_t x72 = UINT32_MAX;
	static volatile uint32_t t17 = 135039U;

	t17 = (x69&((x70&x71)/x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -102;
	static volatile int8_t x74 = 3;
	uint16_t x75 = 348U;
	int64_t x76 = -10LL;
	int64_t t18 = -2199886871810584877LL;

	t18 = (x73&((x74&x75)/x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 147633015;
	int8_t x78 = INT8_MIN;
	int16_t x79 = 24;
	volatile int8_t x80 = INT8_MAX;
	int32_t t19 = 5;

	t19 = (x77&((x78&x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint8_t x82 = 1U;
	static int8_t x83 = INT8_MIN;

	t20 = (x81&((x82&x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = 0;

	t21 = (x85&((x86&x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	volatile int64_t x90 = INT64_MAX;
	uint16_t x91 = 1U;
	int32_t x92 = 29559;
	static volatile int64_t t22 = -37321154920187980LL;

	t22 = (x89&((x90&x91)/x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	static int32_t x94 = -1;
	static uint32_t x95 = 1394U;
	volatile int8_t x96 = INT8_MAX;

	t23 = (x93&((x94&x95)/x96));

	if (t23 != 10U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 15;
	static int64_t x99 = INT64_MIN;
	static uint16_t x100 = 3753U;
	int64_t t24 = 58824874771318LL;

	t24 = (x97&((x98&x99)/x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x102 = -1;
	static int64_t x103 = 89LL;
	volatile int32_t x104 = INT32_MAX;

	t25 = (x101&((x102&x103)/x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -1;
	volatile uint64_t x106 = 77147048887353732LLU;
	static volatile uint8_t x107 = 8U;
	int8_t x108 = INT8_MIN;
	uint64_t t26 = 7831978456LLU;

	t26 = (x105&((x106&x107)/x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	int64_t x112 = -206004LL;
	int64_t t27 = 22LL;

	t27 = (x109&((x110&x111)/x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = UINT8_MAX;
	static int16_t x115 = -1206;
	uint16_t x116 = 6097U;

	t28 = (x113&((x114&x115)/x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 1U;
	int32_t x119 = 2809681;
	volatile int16_t x120 = -34;
	static volatile int32_t t29 = 0;

	t29 = (x117&((x118&x119)/x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MAX;
	volatile int32_t x123 = -43;
	static uint16_t x124 = UINT16_MAX;
	int64_t t30 = 1538006773755LL;

	t30 = (x121&((x122&x123)/x124));

	if (t30 != 2147516416LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 32374U;
	int64_t x126 = 1568679LL;
	int16_t x127 = INT16_MIN;
	static int64_t x128 = -1LL;
	int64_t t31 = 3319556685LL;

	t31 = (x125&((x126&x127)/x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 0U;
	int8_t x130 = 1;
	volatile uint16_t x131 = 15358U;
	int64_t x132 = INT64_MAX;

	t32 = (x129&((x130&x131)/x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 928U;
	int32_t x134 = 154;
	volatile int16_t x135 = INT16_MIN;
	uint32_t x136 = UINT32_MAX;
	static volatile uint32_t t33 = 8U;

	t33 = (x133&((x134&x135)/x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = UINT16_MAX;
	volatile uint16_t x138 = 1U;
	int16_t x139 = -1;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t34 = 33U;

	t34 = (x137&((x138&x139)/x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x142 = -1;
	static uint8_t x143 = 1U;
	uint64_t x144 = 111328432267225919LLU;
	uint64_t t35 = 16531898671731960LLU;

	t35 = (x141&((x142&x143)/x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1502U;
	int8_t x146 = -1;
	static uint64_t x147 = UINT64_MAX;
	uint8_t x148 = 13U;
	volatile uint64_t t36 = 24LLU;

	t36 = (x145&((x146&x147)/x148));

	if (t36 != 400LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = 1;

	t37 = (x149&((x150&x151)/x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int32_t x155 = 13829;
	static int32_t x156 = -1;
	static volatile int32_t t38 = INT32_MIN;

	t38 = (x153&((x154&x155)/x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	static int32_t x159 = INT32_MIN;
	uint8_t x160 = 15U;
	int64_t t39 = 896534719250317065LL;

	t39 = (x157&((x158&x159)/x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = 0;
	static int16_t x163 = 341;
	int16_t x164 = INT16_MAX;
	int64_t t40 = 4545150448259359533LL;

	t40 = (x161&((x162&x163)/x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 5U;
	int32_t t41 = 7;

	t41 = (x165&((x166&x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = 1106;
	volatile int16_t x171 = -1;
	static int64_t x172 = INT64_MIN;
	static int64_t t42 = 124442106394462593LL;

	t42 = (x169&((x170&x171)/x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	int32_t x174 = -1;
	int16_t x175 = INT16_MIN;
	static volatile uint16_t x176 = 15394U;
	static int32_t t43 = 7588;

	t43 = (x173&((x174&x175)/x176));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	static int64_t x178 = INT64_MIN;
	static int32_t x179 = 65;
	volatile int32_t x180 = -1;

	t44 = (x177&((x178&x179)/x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = 79;
	uint32_t x183 = 957U;
	volatile int64_t x184 = INT64_MAX;

	t45 = (x181&((x182&x183)/x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int16_t x187 = INT16_MIN;
	volatile int32_t t46 = 45667396;

	t46 = (x185&((x186&x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x190 = -1;
	int32_t x191 = INT32_MIN;
	uint8_t x192 = 79U;
	volatile uint32_t t47 = 2658U;

	t47 = (x189&((x190&x191)/x192));

	if (t47 != 2097684U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x194 = 3206U;
	int64_t x195 = 3611808014072LL;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = 743LL;

	t48 = (x193&((x194&x195)/x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static uint8_t x198 = 11U;
	volatile int8_t x199 = INT8_MAX;
	static int8_t x200 = 39;
	volatile int32_t t49 = 7768150;

	t49 = (x197&((x198&x199)/x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	int32_t x202 = 57036972;
	volatile int8_t x203 = INT8_MIN;
	int16_t x204 = 280;
	volatile int32_t t50 = -139;

	t50 = (x201&((x202&x203)/x204));

	if (t50 != 203703) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x207 = 0;
	volatile uint64_t t51 = 316543038716LLU;

	t51 = (x205&((x206&x207)/x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x209 = UINT32_MAX;
	int64_t x210 = -21161LL;
	uint16_t x211 = 3U;
	uint32_t x212 = 28858U;
	int64_t t52 = 4470289LL;

	t52 = (x209&((x210&x211)/x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	static int32_t x214 = -33236395;
	int64_t x216 = INT64_MAX;
	int64_t t53 = 76530175LL;

	t53 = (x213&((x214&x215)/x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MAX;
	int8_t x218 = -1;
	int32_t x219 = 10592196;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 350564492;

	t54 = (x217&((x218&x219)/x220));

	if (t54 != 2147400897) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = -4581181569453392734LL;
	volatile int32_t x222 = INT32_MIN;
	static uint8_t x223 = 18U;
	static volatile int64_t x224 = INT64_MIN;
	int64_t t55 = 111413069772357LL;

	t55 = (x221&((x222&x223)/x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint8_t x226 = 5U;
	uint8_t x227 = 2U;
	volatile int16_t x228 = -1;
	static int64_t t56 = -396914LL;

	t56 = (x225&((x226&x227)/x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	static int32_t x230 = -1;
	int64_t x231 = INT64_MAX;
	static int32_t x232 = -222;

	t57 = (x229&((x230&x231)/x232));

	if (t57 != -41546720886733224LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 12902534687955LL;
	int16_t x234 = -1;
	int16_t x235 = -1;
	int8_t x236 = 3;
	volatile int64_t t58 = -4880458352333LL;

	t58 = (x233&((x234&x235)/x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x238 = INT64_MIN;
	uint32_t x239 = UINT32_MAX;
	uint16_t x240 = 26U;

	t59 = (x237&((x238&x239)/x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = 1192127;
	int8_t x243 = -1;
	static int64_t x244 = INT64_MIN;
	volatile int64_t t60 = 126791136LL;

	t60 = (x241&((x242&x243)/x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	volatile uint8_t x247 = UINT8_MAX;
	int32_t x248 = INT32_MAX;

	t61 = (x245&((x246&x247)/x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	uint16_t x251 = 775U;
	int16_t x252 = 1324;

	t62 = (x249&((x250&x251)/x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x254 = 1;
	uint16_t x256 = 39U;
	volatile int32_t t63 = -16240;

	t63 = (x253&((x254&x255)/x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = 0;
	volatile int32_t x264 = INT32_MAX;
	volatile int32_t t64 = 13964;

	t64 = (x261&((x262&x263)/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MIN;
	volatile uint8_t x266 = 1U;
	static int16_t x267 = INT16_MIN;
	int16_t x268 = -1;
	volatile int64_t t65 = -12LL;

	t65 = (x265&((x266&x267)/x268));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x269 = -1;
	uint32_t x271 = 586U;
	volatile uint32_t t66 = 2027306U;

	t66 = (x269&((x270&x271)/x272));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = -31;
	int32_t x274 = INT32_MAX;
	int8_t x275 = -1;
	int64_t x276 = 1LL;
	static int64_t t67 = -2405401768LL;

	t67 = (x273&((x274&x275)/x276));

	if (t67 != 2147483617LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x278 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	int64_t x280 = 3185616294116339404LL;
	volatile int64_t t68 = -29702001LL;

	t68 = (x277&((x278&x279)/x280));

	if (t68 != 24LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = 1LL;
	int16_t x282 = 1188;
	uint32_t x284 = 167461128U;
	volatile int64_t t69 = -1194LL;

	t69 = (x281&((x282&x283)/x284));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	static int64_t x286 = -1LL;
	volatile uint32_t x287 = 5U;
	int64_t x288 = 456451781556485LL;
	volatile int64_t t70 = 107043311533936LL;

	t70 = (x285&((x286&x287)/x288));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = -1;
	static int8_t x290 = -1;
	uint32_t x291 = UINT32_MAX;
	static int16_t x292 = 1093;
	uint32_t t71 = 0U;

	t71 = (x289&((x290&x291)/x292));

	if (t71 != 3929521U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = INT32_MAX;
	uint64_t x294 = 14953004395473LLU;
	volatile int64_t x295 = INT64_MIN;
	static volatile uint8_t x296 = 5U;
	uint64_t t72 = 1912006305453LLU;

	t72 = (x293&((x294&x295)/x296));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = UINT8_MAX;
	uint16_t x298 = 11U;
	uint64_t x299 = 1LLU;
	int16_t x300 = -1;
	uint64_t t73 = 30LLU;

	t73 = (x297&((x298&x299)/x300));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -1;
	int16_t x303 = -1;
	int8_t x304 = INT8_MIN;
	int32_t t74 = 574018;

	t74 = (x301&((x302&x303)/x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x305 = 388;
	uint16_t x306 = 70U;
	volatile int32_t t75 = 5;

	t75 = (x305&((x306&x307)/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x310 = INT32_MAX;
	uint16_t x311 = 0U;
	int64_t t76 = 7865LL;

	t76 = (x309&((x310&x311)/x312));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MAX;
	static volatile int32_t x316 = INT32_MIN;
	int64_t t77 = 7389727LL;

	t77 = (x313&((x314&x315)/x316));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = -25603552159974LL;
	uint64_t x318 = 796444463621LLU;
	int32_t x319 = 9526;
	int64_t x320 = INT64_MAX;
	uint64_t t78 = 887LLU;

	t78 = (x317&((x318&x319)/x320));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x322 = INT64_MAX;
	int16_t x323 = -1;
	int16_t x324 = INT16_MIN;
	static volatile int64_t t79 = 1747075769677LL;

	t79 = (x321&((x322&x323)/x324));

	if (t79 != -281474976710656LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 12803U;
	static int64_t x326 = -1817497456491349121LL;
	int8_t x327 = INT8_MAX;
	static volatile int64_t x328 = INT64_MIN;
	volatile int64_t t80 = 4259022574268293700LL;

	t80 = (x325&((x326&x327)/x328));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x329 = -1;
	static int8_t x330 = 1;
	int8_t x331 = -38;
	int16_t x332 = -15633;
	static int32_t t81 = 854294420;

	t81 = (x329&((x330&x331)/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MAX;
	static volatile int32_t x336 = INT32_MIN;
	static int32_t t82 = -10095;

	t82 = (x333&((x334&x335)/x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -1;
	int16_t x338 = INT16_MAX;
	static int64_t x340 = -163478LL;

	t83 = (x337&((x338&x339)/x340));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = INT16_MAX;
	int64_t x344 = 428726LL;
	int64_t t84 = 316LL;

	t84 = (x341&((x342&x343)/x344));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x345 = 39U;
	uint32_t x346 = 97700861U;
	volatile uint64_t x348 = UINT64_MAX;
	volatile uint64_t t85 = 71650009558118LLU;

	t85 = (x345&((x346&x347)/x348));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MAX;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = -1LL;
	static int64_t t86 = 422859951LL;

	t86 = (x349&((x350&x351)/x352));

	if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x353 = INT8_MAX;
	int8_t x354 = INT8_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	uint32_t t87 = 2316485U;

	t87 = (x353&((x354&x355)/x356));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MIN;
	volatile int64_t x358 = 6982LL;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	int64_t t88 = 91686125626LL;

	t88 = (x357&((x358&x359)/x360));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x361 = INT64_MIN;
	int64_t x362 = 6308069LL;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 8LLU;
	uint64_t t89 = 4960818605LLU;

	t89 = (x361&((x362&x363)/x364));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = 1910;
	uint32_t x366 = 76U;
	static uint8_t x367 = 1U;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t90 = 2922U;

	t90 = (x365&((x366&x367)/x368));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x369 = UINT64_MAX;
	static int8_t x370 = INT8_MAX;
	static volatile int8_t x371 = INT8_MIN;
	int8_t x372 = -3;

	t91 = (x369&((x370&x371)/x372));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -1;
	int64_t x375 = -7471LL;
	uint64_t x376 = 4034285LLU;

	t92 = (x373&((x374&x375)/x376));

	if (t92 != 4572494028449LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = 145226U;
	volatile uint32_t x378 = UINT32_MAX;
	volatile uint8_t x379 = 1U;
	int8_t x380 = INT8_MIN;
	uint32_t t93 = 64886569U;

	t93 = (x377&((x378&x379)/x380));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x381 = INT64_MAX;
	uint16_t x382 = 3398U;
	volatile int16_t x383 = -1;
	uint32_t x384 = 88246U;
	volatile int64_t t94 = -99923914966LL;

	t94 = (x381&((x382&x383)/x384));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = 125;
	static uint16_t x386 = 1U;
	uint32_t x387 = 1630380U;
	volatile uint32_t t95 = 17U;

	t95 = (x385&((x386&x387)/x388));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x391 = 998U;
	int32_t x392 = 7;
	volatile int32_t t96 = 71;

	t96 = (x389&((x390&x391)/x392));

	if (t96 != 14) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x394 = INT32_MIN;
	int32_t x395 = 1;
	volatile int32_t t97 = 100432;

	t97 = (x393&((x394&x395)/x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x397 = 1U;
	int64_t x399 = -1LL;
	int64_t t98 = 4622478310297046LL;

	t98 = (x397&((x398&x399)/x400));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = 122719056LL;
	int8_t x402 = -1;
	int16_t x403 = -539;
	uint32_t x404 = 27U;
	volatile int64_t t99 = -112370381202LL;

	t99 = (x401&((x402&x403)/x404));

	if (t99 != 22020672LL) { NG(); } else { ; }
	
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

