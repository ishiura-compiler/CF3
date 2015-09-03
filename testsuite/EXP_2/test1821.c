#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = INT64_MIN;
int64_t x11 = -1LL;
uint16_t x15 = 2U;
int32_t x19 = -1;
volatile int32_t t4 = 0;
uint32_t x23 = 45341U;
uint32_t x28 = UINT32_MAX;
int64_t x41 = -203207LL;
static int64_t x43 = 29001382185390046LL;
int32_t x52 = 3607980;
uint32_t t12 = 117116183U;
volatile uint64_t x57 = 15478830995115LLU;
int64_t x58 = INT64_MIN;
uint64_t t13 = 107LLU;
int8_t x62 = INT8_MAX;
static int32_t x63 = -16374;
volatile int32_t t14 = -381;
uint64_t t15 = 128168095LLU;
volatile int32_t x70 = -245;
volatile int16_t x85 = INT16_MAX;
uint8_t x86 = 78U;
uint32_t x92 = UINT32_MAX;
volatile uint32_t t21 = UINT32_MAX;
uint16_t x94 = UINT16_MAX;
int16_t x96 = -1;
int32_t t24 = -7499859;
static volatile int64_t t26 = 241202LL;
static int16_t x117 = -1;
static volatile int64_t x121 = INT64_MAX;
uint16_t x122 = 0U;
static int64_t x124 = -24LL;
uint8_t x129 = 20U;
int16_t x130 = -11;
uint64_t x137 = UINT64_MAX;
int16_t x138 = -560;
static int64_t x143 = INT64_MAX;
static int8_t x149 = -2;
volatile int16_t x153 = INT16_MAX;
static int16_t x157 = -1;
volatile uint8_t x158 = 17U;
int8_t x172 = INT8_MIN;
volatile uint64_t t42 = 3249474817LLU;
int16_t x186 = -8256;
int64_t x188 = -1LL;
volatile int32_t t48 = 207645912;
volatile int16_t x207 = -1;
uint8_t x220 = 1U;
int32_t t53 = -1369;
static volatile int8_t x222 = INT8_MIN;
int64_t x223 = INT64_MIN;
int64_t t54 = 2115163641822287LL;
static uint8_t x228 = 12U;
int8_t x232 = -1;
uint8_t x245 = 25U;
uint32_t x246 = UINT32_MAX;
int8_t x253 = INT8_MAX;
int32_t t62 = 3302725;
volatile int8_t x257 = -1;
uint8_t x268 = 30U;
uint8_t x273 = 16U;
static int64_t x276 = INT64_MIN;
volatile int64_t t67 = INT64_MIN;
int16_t x283 = -1;
uint32_t x297 = 435U;
static int16_t x298 = INT16_MIN;
volatile uint8_t x300 = 4U;
uint32_t t72 = 10548240U;
int8_t x302 = -1;
int8_t x313 = -1;
uint64_t t75 = 287596512593247859LLU;
int64_t x319 = -1LL;
static volatile int64_t t76 = 322678422566LL;
uint64_t x333 = 5895849679059419LLU;
int64_t x336 = INT64_MAX;
uint64_t t80 = 415LLU;
int8_t x342 = INT8_MIN;
int16_t x351 = INT16_MIN;
volatile int64_t x363 = -1659065LL;
static uint8_t x364 = UINT8_MAX;
volatile int64_t t86 = -1313267339LL;
int32_t t88 = -78;
uint64_t x376 = 1031LLU;
int16_t x380 = INT16_MIN;
uint32_t x383 = UINT32_MAX;
int64_t t92 = 32256508904LL;
int32_t x393 = -180;
volatile uint8_t x407 = UINT8_MAX;
uint32_t x408 = 3229U;
int64_t x413 = -3315357LL;


void f0(void) {
	uint8_t x1 = 115U;
	uint16_t x2 = 3177U;
	static uint32_t x3 = 741U;
	static volatile int32_t x4 = 395;
	volatile uint32_t t0 = 4329449U;

	t0 = ((x1&(x2&x3))+x4);

	if (t0 != 492U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 425U;
	static uint64_t x7 = 121989607623LLU;
	int64_t x8 = INT64_MIN;
	uint64_t t1 = 58224LLU;

	t1 = ((x5&(x6&x7))+x8);

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	uint16_t x10 = 1U;
	static volatile uint16_t x12 = 7U;
	volatile int64_t t2 = -321LL;

	t2 = ((x9&(x10&x11))+x12);

	if (t2 != 7LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = -92;
	uint64_t x14 = 111LLU;
	volatile int8_t x16 = INT8_MIN;
	uint64_t t3 = 1009995811377208LLU;

	t3 = ((x13&(x14&x15))+x16);

	if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint16_t x18 = UINT16_MAX;
	volatile int32_t x20 = INT32_MIN;

	t4 = ((x17&(x18&x19))+x20);

	if (t4 != -2147418240) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -101;
	int32_t x22 = -1;
	int16_t x24 = 1601;
	volatile uint32_t t5 = 1610205U;

	t5 = ((x21&(x22&x23))+x24);

	if (t5 != 46938U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 451735U;
	uint64_t x26 = 57281748757805LLU;
	uint8_t x27 = 84U;
	volatile uint64_t t6 = 2185892964238LLU;

	t6 = ((x25&(x26&x27))+x28);

	if (t6 != 4294967299LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x30 = 79U;
	volatile int32_t x31 = -1;
	volatile int8_t x32 = INT8_MAX;
	volatile int64_t t7 = 349178458648280LL;

	t7 = ((x29&(x30&x31))+x32);

	if (t7 != 206LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = 3;
	int8_t x39 = 6;
	volatile int32_t x40 = INT32_MIN;
	volatile int32_t t8 = INT32_MIN;

	t8 = ((x37&(x38&x39))+x40);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = INT8_MAX;
	uint64_t x44 = 5291335612LLU;
	volatile uint64_t t9 = 1343927810806198908LLU;

	t9 = ((x41&(x42&x43))+x44);

	if (t9 != 5291335636LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 12U;
	uint8_t x46 = UINT8_MAX;
	volatile int16_t x47 = 362;
	static volatile uint32_t x48 = 1U;
	static uint32_t t10 = 267935395U;

	t10 = ((x45&(x46&x47))+x48);

	if (t10 != 9U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = UINT8_MAX;
	static volatile uint8_t x51 = UINT8_MAX;
	static int32_t t11 = -509885;

	t11 = ((x49&(x50&x51))+x52);

	if (t11 != 3608235) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 6U;
	int32_t x54 = -82;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = UINT8_MAX;

	t12 = ((x53&(x54&x55))+x56);

	if (t12 != 261U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x59 = -122;
	volatile int64_t x60 = INT64_MAX;

	t13 = ((x57&(x58&x59))+x60);

	if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 1;
	int8_t x64 = -1;

	t14 = ((x61&(x62&x63))+x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x65 = INT8_MIN;
	static uint64_t x66 = 5LLU;
	static int8_t x67 = -2;
	volatile int64_t x68 = -642601923225LL;

	t15 = ((x65&(x66&x67))+x68);

	if (t15 != 18446743431107628391LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	static uint32_t x71 = 11673067U;
	static int8_t x72 = INT8_MIN;
	volatile uint32_t t16 = 11U;

	t16 = ((x69&(x70&x71))+x72);

	if (t16 != 11672715U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MIN;
	volatile int32_t x75 = INT32_MIN;
	int8_t x76 = 1;
	volatile int32_t t17 = -48977;

	t17 = ((x73&(x74&x75))+x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MIN;
	int64_t x78 = -1LL;
	static uint32_t x79 = 98289110U;
	int8_t x80 = INT8_MAX;
	int64_t t18 = -535316666685041LL;

	t18 = ((x77&(x78&x79))+x80);

	if (t18 != 98289151LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MIN;
	int64_t x83 = -2752856LL;
	uint64_t x84 = 4LLU;
	volatile uint64_t t19 = 53639LLU;

	t19 = ((x81&(x82&x83))+x84);

	if (t19 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x87 = INT32_MAX;
	int16_t x88 = -27;
	volatile int32_t t20 = 24156256;

	t20 = ((x85&(x86&x87))+x88);

	if (t20 != 51) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = -6051008;
	static uint32_t x90 = 0U;
	int32_t x91 = INT32_MIN;

	t21 = ((x89&(x90&x91))+x92);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MAX;
	static int8_t x95 = INT8_MIN;
	static volatile int32_t t22 = -8;

	t22 = ((x93&(x94&x95))+x96);

	if (t22 != 32639) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 6105U;
	volatile int16_t x98 = INT16_MIN;
	static volatile int16_t x99 = INT16_MIN;
	uint8_t x100 = 26U;
	volatile int32_t t23 = 64361792;

	t23 = ((x97&(x98&x99))+x100);

	if (t23 != 26) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	int16_t x102 = -1;
	int16_t x103 = INT16_MAX;
	static volatile uint16_t x104 = UINT16_MAX;

	t24 = ((x101&(x102&x103))+x104);

	if (t24 != 98302) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = 1;
	static uint16_t x107 = 6U;
	int8_t x108 = -1;
	volatile int64_t t25 = 1LL;

	t25 = ((x105&(x106&x107))+x108);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = -79;
	static int8_t x110 = -27;
	uint32_t x111 = UINT32_MAX;
	int64_t x112 = INT64_MIN;

	t26 = ((x109&(x110&x111))+x112);

	if (t26 != -9223372032559808607LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 123U;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = INT64_MAX;
	int8_t x116 = INT8_MIN;
	int64_t t27 = -4094368LL;

	t27 = ((x113&(x114&x115))+x116);

	if (t27 != -5LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x118 = 18552217254593LLU;
	static int8_t x119 = 52;
	int32_t x120 = -6788;
	volatile uint64_t t28 = 852LLU;

	t28 = ((x117&(x118&x119))+x120);

	if (t28 != 18446744073709544828LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x123 = UINT64_MAX;
	uint64_t t29 = 264403576214329LLU;

	t29 = ((x121&(x122&x123))+x124);

	if (t29 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = -1;
	int16_t x126 = -1;
	int64_t x127 = 301524496LL;
	uint32_t x128 = 1007896U;
	int64_t t30 = -260460LL;

	t30 = ((x125&(x126&x127))+x128);

	if (t30 != 302532392LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x131 = 5702476U;
	volatile int8_t x132 = INT8_MIN;
	uint32_t t31 = 157595140U;

	t31 = ((x129&(x130&x131))+x132);

	if (t31 != 4294967172U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int32_t x134 = -1;
	int16_t x135 = -1;
	volatile int16_t x136 = INT16_MIN;
	int64_t t32 = -42691031307004574LL;

	t32 = ((x133&(x134&x135))+x136);

	if (t32 != -32769LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	uint64_t t33 = 7039936606891073LLU;

	t33 = ((x137&(x138&x139))+x140);

	if (t33 != 18446744073709550928LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	static uint32_t x142 = 20447U;
	int16_t x144 = INT16_MIN;
	int64_t t34 = -1LL;

	t34 = ((x141&(x142&x143))+x144);

	if (t34 != -12321LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = UINT8_MAX;
	static int16_t x146 = INT16_MIN;
	volatile uint8_t x147 = 0U;
	int64_t x148 = INT64_MIN;
	static int64_t t35 = INT64_MIN;

	t35 = ((x145&(x146&x147))+x148);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x150 = 335U;
	int32_t x151 = 25227;
	int16_t x152 = INT16_MIN;
	int32_t t36 = 26;

	t36 = ((x149&(x150&x151))+x152);

	if (t36 != -32758) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x154 = 660;
	static int64_t x155 = -1LL;
	int16_t x156 = INT16_MIN;
	static volatile int64_t t37 = -7258LL;

	t37 = ((x153&(x154&x155))+x156);

	if (t37 != -32108LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x159 = 22;
	int64_t x160 = 0LL;
	int64_t t38 = 80757LL;

	t38 = ((x157&(x158&x159))+x160);

	if (t38 != 16LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MAX;
	volatile int16_t x162 = -18;
	uint8_t x163 = 5U;
	static int16_t x164 = INT16_MAX;
	static volatile int32_t t39 = 1600896;

	t39 = ((x161&(x162&x163))+x164);

	if (t39 != 32771) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = -1052LL;
	volatile int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MAX;
	int64_t x168 = 382LL;
	int64_t t40 = 2243915385744580854LL;

	t40 = ((x165&(x166&x167))+x168);

	if (t40 != 32098LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -13219;
	int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MAX;
	static int64_t t41 = -936LL;

	t41 = ((x169&(x170&x171))+x172);

	if (t41 != 2147470301LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MIN;
	static int8_t x174 = -1;
	uint32_t x175 = 83492U;
	uint64_t x176 = 166866308738363561LLU;

	t42 = ((x173&(x174&x175))+x176);

	if (t42 != 166866308738363561LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 10253U;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -88;
	int32_t x180 = INT32_MAX;
	int32_t t43 = INT32_MAX;

	t43 = ((x177&(x178&x179))+x180);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = 323776971LLU;
	int16_t x182 = 881;
	int32_t x183 = -207302;
	int32_t x184 = INT32_MIN;
	static volatile uint64_t t44 = 1926LLU;

	t44 = ((x181&(x182&x183))+x184);

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x185 = -1;
	volatile int8_t x187 = INT8_MIN;
	int64_t t45 = -27895848178LL;

	t45 = ((x185&(x186&x187))+x188);

	if (t45 != -8321LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 3785;
	volatile int8_t x190 = -1;
	int64_t x191 = -5170692718364LL;
	uint64_t x192 = 4001122651481535307LLU;
	static volatile uint64_t t46 = 1560635LLU;

	t46 = ((x189&(x190&x191))+x192);

	if (t46 != 4001122651481535499LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 1U;
	static int32_t x194 = INT32_MIN;
	uint16_t x195 = 218U;
	volatile int32_t x196 = INT32_MIN;
	int32_t t47 = INT32_MIN;

	t47 = ((x193&(x194&x195))+x196);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = -1;
	int8_t x199 = INT8_MIN;
	int16_t x200 = -1;

	t48 = ((x197&(x198&x199))+x200);

	if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -5;
	uint8_t x202 = 5U;
	uint64_t x203 = 507955275408032754LLU;
	int32_t x204 = INT32_MIN;
	volatile uint64_t t49 = 130388531457LLU;

	t49 = ((x201&(x202&x203))+x204);

	if (t49 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = 19;
	static int16_t x206 = -1;
	uint8_t x208 = UINT8_MAX;
	int32_t t50 = -5;

	t50 = ((x205&(x206&x207))+x208);

	if (t50 != 274) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = -1LL;
	uint32_t x211 = 73669037U;
	int64_t x212 = 1158682274222878LL;
	volatile int64_t t51 = -156568750851810LL;

	t51 = ((x209&(x210&x211))+x212);

	if (t51 != 1158682347891870LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = INT32_MIN;
	static int16_t x214 = 0;
	int64_t x215 = -1LL;
	volatile uint16_t x216 = 2541U;
	volatile int64_t t52 = -1520747437721LL;

	t52 = ((x213&(x214&x215))+x216);

	if (t52 != 2541LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x217 = 2U;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 29U;

	t53 = ((x217&(x218&x219))+x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 23U;
	volatile int32_t x224 = INT32_MIN;

	t54 = ((x221&(x222&x223))+x224);

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	volatile int16_t x226 = INT16_MIN;
	uint64_t x227 = 1118730115873315942LLU;
	static uint64_t t55 = 485447156LLU;

	t55 = ((x225&(x226&x227))+x228);

	if (t55 != 1118730113924464652LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	uint64_t x230 = 1224736888889572LLU;
	volatile int32_t x231 = INT32_MIN;
	static volatile uint64_t t56 = UINT64_MAX;

	t56 = ((x229&(x230&x231))+x232);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MAX;
	uint32_t x235 = UINT32_MAX;
	int64_t x236 = -53LL;
	volatile int64_t t57 = -19822372592399LL;

	t57 = ((x233&(x234&x235))+x236);

	if (t57 != -53LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x237 = 32U;
	uint64_t x238 = 805949858765853LLU;
	uint32_t x239 = UINT32_MAX;
	uint64_t x240 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x237&(x238&x239))+x240);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 12666079639LLU;
	volatile int64_t x242 = INT64_MIN;
	uint8_t x243 = UINT8_MAX;
	int64_t x244 = INT64_MIN;
	uint64_t t59 = 95180344603158942LLU;

	t59 = ((x241&(x242&x243))+x244);

	if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x247 = 2U;
	int16_t x248 = INT16_MAX;
	static volatile uint32_t t60 = 586619U;

	t60 = ((x245&(x246&x247))+x248);

	if (t60 != 32767U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MAX;
	uint16_t x250 = 1U;
	volatile int64_t x251 = INT64_MIN;
	int32_t x252 = -8028822;
	volatile int64_t t61 = -124309195311746LL;

	t61 = ((x249&(x250&x251))+x252);

	if (t61 != -8028822LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x254 = -1;
	static uint16_t x255 = 1928U;
	static int16_t x256 = -1;

	t62 = ((x253&(x254&x255))+x256);

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = UINT32_MAX;
	int64_t t63 = -342LL;

	t63 = ((x257&(x258&x259))+x260);

	if (t63 != 4294967295LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	int8_t x262 = -1;
	int64_t x263 = 3LL;
	static uint64_t x264 = 7LLU;
	volatile uint64_t t64 = 3787210403LLU;

	t64 = ((x261&(x262&x263))+x264);

	if (t64 != 7LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 21559U;
	static int8_t x266 = -1;
	volatile int16_t x267 = -1;
	uint32_t t65 = 15U;

	t65 = ((x265&(x266&x267))+x268);

	if (t65 != 21589U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x269 = 13U;
	uint64_t x270 = 1819357107803227804LLU;
	volatile int64_t x271 = INT64_MIN;
	volatile uint8_t x272 = 7U;
	volatile uint64_t t66 = 251906480607099LLU;

	t66 = ((x269&(x270&x271))+x272);

	if (t66 != 7LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x274 = INT64_MIN;
	int8_t x275 = -1;

	t67 = ((x273&(x274&x275))+x276);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = 38;
	uint64_t x284 = 522286694983071739LLU;
	static volatile uint64_t t68 = 0LLU;

	t68 = ((x281&(x282&x283))+x284);

	if (t68 != 522286694983071739LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -6;
	int16_t x286 = -5;
	int64_t x287 = INT64_MIN;
	uint32_t x288 = 1931530701U;
	static int64_t t69 = 530315LL;

	t69 = ((x285&(x286&x287))+x288);

	if (t69 != -9223372034923245107LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 11719U;
	static int64_t x290 = INT64_MIN;
	int64_t x291 = INT64_MAX;
	volatile uint64_t x292 = UINT64_MAX;
	uint64_t t70 = UINT64_MAX;

	t70 = ((x289&(x290&x291))+x292);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = 635;
	uint16_t x295 = 22U;
	uint16_t x296 = UINT16_MAX;
	int32_t t71 = 128669;

	t71 = ((x293&(x294&x295))+x296);

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x299 = 1;

	t72 = ((x297&(x298&x299))+x300);

	if (t72 != 4U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = UINT64_MAX;
	static int32_t x303 = INT32_MAX;
	uint16_t x304 = 1U;
	static uint64_t t73 = 397720LLU;

	t73 = ((x301&(x302&x303))+x304);

	if (t73 != 2147483648LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x305 = INT64_MIN;
	int32_t x306 = -627754;
	int32_t x307 = INT32_MAX;
	int32_t x308 = -1;
	static int64_t t74 = 74652591LL;

	t74 = ((x305&(x306&x307))+x308);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x314 = UINT64_MAX;
	volatile int8_t x315 = 0;
	int16_t x316 = INT16_MAX;

	t75 = ((x313&(x314&x315))+x316);

	if (t75 != 32767LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -1LL;
	static int64_t x318 = -1LL;
	int8_t x320 = INT8_MIN;

	t76 = ((x317&(x318&x319))+x320);

	if (t76 != -129LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = 1097423915337LLU;
	static int16_t x322 = INT16_MIN;
	volatile int8_t x323 = INT8_MIN;
	int16_t x324 = -6;
	volatile uint64_t t77 = 281235271160886155LLU;

	t77 = ((x321&(x322&x323))+x324);

	if (t77 != 1097423912954LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = INT64_MIN;
	uint8_t x327 = UINT8_MAX;
	int8_t x328 = 1;
	int64_t t78 = 12791464487264259LL;

	t78 = ((x325&(x326&x327))+x328);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x329 = INT16_MIN;
	int16_t x330 = -15;
	uint8_t x331 = UINT8_MAX;
	static uint16_t x332 = UINT16_MAX;
	volatile int32_t t79 = 388;

	t79 = ((x329&(x330&x331))+x332);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x334 = 1U;
	uint8_t x335 = 0U;

	t80 = ((x333&(x334&x335))+x336);

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x337 = -45;
	int16_t x338 = INT16_MIN;
	int16_t x339 = INT16_MAX;
	int16_t x340 = 7;
	volatile int32_t t81 = -3;

	t81 = ((x337&(x338&x339))+x340);

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = 2712U;
	int32_t x343 = -89389;
	static uint16_t x344 = UINT16_MAX;
	uint32_t t82 = 1U;

	t82 = ((x341&(x342&x343))+x344);

	if (t82 != 66175U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = 1;
	int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 467LLU;
	static volatile uint64_t t83 = 87LLU;

	t83 = ((x345&(x346&x347))+x348);

	if (t83 != 467LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = 3;
	static int32_t x350 = -122;
	int8_t x352 = INT8_MIN;
	int32_t t84 = -53042;

	t84 = ((x349&(x350&x351))+x352);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = -902;
	int16_t x358 = -1;
	int8_t x359 = -1;
	volatile int64_t x360 = INT64_MAX;
	volatile int64_t t85 = 2992576633LL;

	t85 = ((x357&(x358&x359))+x360);

	if (t85 != 9223372036854774905LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x361 = 480906;
	int8_t x362 = -1;

	t86 = ((x361&(x362&x363))+x364);

	if (t86 != 395009LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x365 = -1;
	int16_t x366 = -1;
	uint32_t x367 = 383593U;
	static int16_t x368 = -1;
	uint32_t t87 = 743996558U;

	t87 = ((x365&(x366&x367))+x368);

	if (t87 != 383592U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = 3;
	volatile uint16_t x371 = 30U;
	int32_t x372 = INT32_MIN;

	t88 = ((x369&(x370&x371))+x372);

	if (t88 != -2147483646) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = INT32_MIN;
	uint8_t x374 = 1U;
	int32_t x375 = -47625;
	uint64_t t89 = 937651LLU;

	t89 = ((x373&(x374&x375))+x376);

	if (t89 != 1031LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MAX;
	static int32_t x378 = INT32_MAX;
	static int8_t x379 = 0;
	volatile int64_t t90 = 1082857754496562549LL;

	t90 = ((x377&(x378&x379))+x380);

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x381 = -3241150234LL;
	volatile uint64_t x382 = UINT64_MAX;
	static int8_t x384 = 4;
	uint64_t t91 = 48657901007614082LLU;

	t91 = ((x381&(x382&x383))+x384);

	if (t91 != 1053817066LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = -1;
	int8_t x386 = INT8_MAX;
	static int64_t x387 = -32386LL;
	int64_t x388 = INT64_MIN;

	t92 = ((x385&(x386&x387))+x388);

	if (t92 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 825U;
	int64_t x390 = INT64_MIN;
	static int32_t x391 = INT32_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = ((x389&(x390&x391))+x392);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x394 = INT32_MIN;
	uint32_t x395 = 61712U;
	int16_t x396 = INT16_MAX;
	uint32_t t94 = 0U;

	t94 = ((x393&(x394&x395))+x396);

	if (t94 != 32767U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	static int32_t x398 = INT32_MIN;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	static int64_t t95 = INT64_MIN;

	t95 = ((x397&(x398&x399))+x400);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	volatile int32_t x403 = -1;
	int64_t x404 = -1LL;
	static volatile int64_t t96 = -4044LL;

	t96 = ((x401&(x402&x403))+x404);

	if (t96 != 4294934527LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = 15489U;
	int8_t x406 = 1;
	uint32_t t97 = 3U;

	t97 = ((x405&(x406&x407))+x408);

	if (t97 != 3230U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x409 = INT64_MAX;
	int32_t x410 = INT32_MAX;
	int8_t x411 = INT8_MAX;
	static int64_t x412 = -102LL;
	int64_t t98 = 8553LL;

	t98 = ((x409&(x410&x411))+x412);

	if (t98 != 25LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x414 = 2860358LLU;
	uint64_t x415 = UINT64_MAX;
	int64_t x416 = INT64_MAX;
	static volatile uint64_t t99 = 24373327382LLU;

	t99 = ((x413&(x414&x415))+x416);

	if (t99 != 9223372036855374145LLU) { NG(); } else { ; }
	
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

