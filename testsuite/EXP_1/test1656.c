#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = 377U;
int32_t x10 = 22;
static volatile uint32_t x12 = 469U;
uint16_t x14 = 0U;
int32_t t3 = -1263;
int32_t t4 = 113436237;
static uint16_t x29 = UINT16_MAX;
int16_t x34 = INT16_MIN;
uint64_t x36 = 344430813778996533LLU;
volatile uint64_t t8 = 192786787810572146LLU;
volatile int64_t x40 = -1LL;
int64_t t9 = -62872560926098542LL;
int64_t x43 = INT64_MIN;
static uint64_t x47 = UINT64_MAX;
volatile int64_t x50 = INT64_MIN;
int32_t t15 = -1;
uint8_t x65 = UINT8_MAX;
uint8_t x67 = 105U;
uint64_t t16 = 6302LLU;
volatile int16_t x70 = INT16_MIN;
int16_t x78 = INT16_MIN;
uint64_t x79 = 1632385170LLU;
uint32_t x82 = 1556545U;
static int32_t x86 = INT32_MIN;
static int32_t t21 = 2;
int32_t x92 = -6617188;
static uint64_t x96 = 7988515258641284LLU;
uint64_t x100 = UINT64_MAX;
volatile int8_t x101 = INT8_MIN;
int64_t x102 = -3LL;
static int16_t x107 = INT16_MIN;
int8_t x115 = INT8_MAX;
int8_t x117 = -37;
volatile uint8_t x125 = 20U;
int32_t x126 = -1;
static int64_t x127 = -1LL;
static volatile int64_t t31 = 824484460625506911LL;
int64_t t32 = 3891646387LL;
int32_t x135 = INT32_MIN;
int16_t x136 = -1;
int32_t t33 = 1;
uint32_t x151 = 1910636357U;
int64_t x155 = INT64_MIN;
static int32_t x159 = -1;
int32_t t40 = 6;
int64_t x166 = INT64_MAX;
int32_t x173 = -391047;
uint16_t x179 = 2584U;
volatile int32_t t44 = 41910;
volatile int64_t x183 = 1043252LL;
uint64_t x188 = UINT64_MAX;
uint16_t x193 = 2496U;
static int64_t x194 = INT64_MIN;
int32_t x200 = -1;
volatile int32_t t49 = -7339;
uint32_t x203 = 33181U;
int32_t t52 = -793;
uint32_t t53 = 58676231U;
int64_t x224 = -1LL;
volatile int32_t x227 = INT32_MAX;
uint8_t x228 = 1U;
volatile int64_t x233 = INT64_MIN;
int8_t x234 = 1;
volatile int64_t x242 = -1LL;
uint64_t t59 = 1765589412LLU;
uint32_t x245 = 1445U;
static volatile int32_t x247 = -1;
int16_t x249 = INT16_MAX;
uint16_t x250 = 876U;
volatile uint8_t x255 = 1U;
int64_t x259 = INT64_MAX;
int8_t x272 = INT8_MIN;
volatile uint32_t t66 = 294816085U;
int8_t x274 = -1;
int32_t x280 = -1;
static int8_t x284 = INT8_MIN;
static int32_t t70 = 77501007;
uint16_t x290 = 12304U;
int8_t x299 = 2;
int64_t x301 = INT64_MAX;
int64_t t74 = 1732943497839829357LL;
int32_t x308 = INT32_MIN;
uint64_t t77 = 3LLU;
uint32_t x328 = 154639853U;
uint32_t t79 = 16060U;
static volatile uint64_t t80 = 58687LLU;
int64_t x334 = -668LL;
int32_t t81 = 28364;
int64_t x337 = 1185177302783234LL;
int8_t x342 = 8;
uint8_t x351 = UINT8_MAX;
int8_t x364 = 19;
uint64_t x366 = 617974379260LLU;
uint16_t x377 = 989U;
int32_t t91 = -1;
int64_t x381 = INT64_MAX;
uint32_t x382 = 3373596U;
uint32_t x385 = UINT32_MAX;
volatile uint32_t x388 = 1U;
static int64_t x389 = -1LL;
uint16_t x390 = UINT16_MAX;
static uint64_t x395 = 8270731950583444850LLU;
int16_t x399 = -1;
int64_t t97 = -59666LL;
volatile int8_t x409 = -37;
uint8_t x410 = UINT8_MAX;
int32_t x412 = INT32_MIN;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	volatile int16_t x2 = INT16_MIN;
	static int8_t x3 = INT8_MIN;
	uint64_t x4 = UINT64_MAX;
	static volatile uint64_t t0 = 45452LLU;

	t0 = (((x1<=x2)&x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = -11890;
	volatile int32_t x7 = -1086842;
	int32_t t1 = 9389;

	t1 = (((x5<=x6)&x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x11 = -1;
	static uint32_t t2 = 349148552U;

	t2 = (((x9<=x10)&x11)%x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint16_t x15 = 133U;
	static int16_t x16 = 43;

	t3 = (((x13<=x14)&x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = UINT8_MAX;
	uint64_t x18 = UINT64_MAX;
	int16_t x19 = 5;
	uint8_t x20 = 1U;

	t4 = (((x17<=x18)&x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1040U;
	int64_t x22 = -44976LL;
	int8_t x23 = INT8_MIN;
	volatile uint16_t x24 = 62U;
	volatile int32_t t5 = 481293;

	t5 = (((x21<=x22)&x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	static int32_t x26 = -6;
	volatile uint64_t x27 = UINT64_MAX;
	static int64_t x28 = 62312541806394207LL;
	volatile uint64_t t6 = 32844340586369266LLU;

	t6 = (((x25<=x26)&x27)%x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 1;
	uint16_t x31 = 8944U;
	uint8_t x32 = UINT8_MAX;
	static int32_t t7 = -2;

	t7 = (((x29<=x30)&x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static int64_t x35 = INT64_MIN;

	t8 = (((x33<=x34)&x35)%x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -5979LL;
	uint8_t x38 = UINT8_MAX;
	static int8_t x39 = INT8_MIN;

	t9 = (((x37<=x38)&x39)%x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int16_t x42 = INT16_MAX;
	int64_t x44 = 11353579LL;
	volatile int64_t t10 = 232455868155130LL;

	t10 = (((x41<=x42)&x43)%x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	static int8_t x48 = INT8_MAX;
	uint64_t t11 = 11160303136284160LLU;

	t11 = (((x45<=x46)&x47)%x48);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 2298623LL;
	int8_t x51 = INT8_MIN;
	static int8_t x52 = 46;
	volatile int32_t t12 = 2971;

	t12 = (((x49<=x50)&x51)%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile int16_t x54 = INT16_MAX;
	int64_t x55 = -1LL;
	int8_t x56 = INT8_MIN;
	int64_t t13 = -863LL;

	t13 = (((x53<=x54)&x55)%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	static int8_t x58 = INT8_MIN;
	static int32_t x59 = INT32_MIN;
	int16_t x60 = INT16_MAX;
	int32_t t14 = 405632;

	t14 = (((x57<=x58)&x59)%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -1LL;
	volatile uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -1;

	t15 = (((x61<=x62)&x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -1723;
	volatile uint64_t x68 = 197LLU;

	t16 = (((x65<=x66)&x67)%x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -42;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MAX;
	int32_t t17 = 3;

	t17 = (((x69<=x70)&x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = -1;
	static int8_t x74 = INT8_MAX;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 1014025254000425LLU;

	t18 = (((x73<=x74)&x75)%x76);

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 31;
	volatile int64_t x80 = -433169960666LL;
	volatile uint64_t t19 = 51107LLU;

	t19 = (((x77<=x78)&x79)%x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 1;
	int32_t x83 = INT32_MIN;
	int32_t x84 = 180029;
	static int32_t t20 = -5634307;

	t20 = (((x81<=x82)&x83)%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 125U;
	static volatile int8_t x87 = 40;
	int8_t x88 = -1;

	t21 = (((x85<=x86)&x87)%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 1;
	int32_t x90 = -1;
	static int32_t x91 = -25588603;
	int32_t t22 = 498;

	t22 = (((x89<=x90)&x91)%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MAX;
	int32_t x94 = -1;
	int32_t x95 = INT32_MIN;
	volatile uint64_t t23 = 242905476LLU;

	t23 = (((x93<=x94)&x95)%x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -187711263;
	volatile uint16_t x98 = 2U;
	int64_t x99 = INT64_MAX;
	uint64_t t24 = 108550782LLU;

	t24 = (((x97<=x98)&x99)%x100);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x103 = 31U;
	int64_t x104 = INT64_MIN;
	int64_t t25 = -2510LL;

	t25 = (((x101<=x102)&x103)%x104);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = 1412LLU;
	uint8_t x106 = 14U;
	static int64_t x108 = 17943028728472539LL;
	int64_t t26 = -8908LL;

	t26 = (((x105<=x106)&x107)%x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	int8_t x110 = 0;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	volatile int32_t t27 = -348;

	t27 = (((x109<=x110)&x111)%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 1;
	uint64_t x114 = 100691901034472337LLU;
	static int64_t x116 = INT64_MAX;
	static int64_t t28 = 1063465358LL;

	t28 = (((x113<=x114)&x115)%x116);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	volatile int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 1017263346;

	t29 = (((x117<=x118)&x119)%x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MAX;
	static int32_t x122 = INT32_MAX;
	static int16_t x123 = INT16_MAX;
	uint16_t x124 = 669U;
	static volatile int32_t t30 = 57323;

	t30 = (((x121<=x122)&x123)%x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x128 = INT64_MIN;

	t31 = (((x125<=x126)&x127)%x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -247;
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = -1369014LL;

	t32 = (((x129<=x130)&x131)%x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	static int16_t x134 = INT16_MIN;

	t33 = (((x133<=x134)&x135)%x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MAX;
	uint64_t x138 = 360399646078342861LLU;
	static int64_t x139 = -1LL;
	int64_t x140 = -1LL;
	volatile int64_t t34 = -5627119LL;

	t34 = (((x137<=x138)&x139)%x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -1LL;
	static int32_t x142 = INT32_MIN;
	int8_t x143 = -1;
	int32_t x144 = 1250010;
	int32_t t35 = -616868;

	t35 = (((x141<=x142)&x143)%x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 6173648LLU;
	static volatile int8_t x146 = -1;
	volatile uint16_t x147 = 7677U;
	int16_t x148 = 473;
	volatile int32_t t36 = 254;

	t36 = (((x145<=x146)&x147)%x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = 0;
	volatile int8_t x152 = INT8_MIN;
	volatile uint32_t t37 = 514688U;

	t37 = (((x149<=x150)&x151)%x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = 417;
	int32_t x154 = INT32_MAX;
	uint16_t x156 = 7161U;
	volatile int64_t t38 = -1458576434LL;

	t38 = (((x153<=x154)&x155)%x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -11541613152LL;
	int16_t x158 = -1;
	uint64_t x160 = 582954060LLU;
	uint64_t t39 = 42529248155LLU;

	t39 = (((x157<=x158)&x159)%x160);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	static int8_t x162 = -27;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = -1;

	t40 = (((x161<=x162)&x163)%x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	int64_t x167 = -1LL;
	static int8_t x168 = INT8_MIN;
	volatile int64_t t41 = -9141LL;

	t41 = (((x165<=x166)&x167)%x168);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	int8_t x171 = -1;
	static int16_t x172 = INT16_MIN;
	int32_t t42 = 204;

	t42 = (((x169<=x170)&x171)%x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = 238;
	static uint32_t x175 = 6273136U;
	int16_t x176 = -9;
	volatile uint32_t t43 = 8557U;

	t43 = (((x173<=x174)&x175)%x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	volatile int64_t x178 = INT64_MIN;
	int8_t x180 = 27;

	t44 = (((x177<=x178)&x179)%x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	int8_t x184 = INT8_MIN;
	int64_t t45 = 81947LL;

	t45 = (((x181<=x182)&x183)%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MAX;
	volatile uint64_t t46 = 13142271142674LLU;

	t46 = (((x185<=x186)&x187)%x188);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 0;
	int32_t x190 = INT32_MIN;
	uint8_t x191 = 56U;
	int16_t x192 = 1;
	static volatile int32_t t47 = 3;

	t47 = (((x189<=x190)&x191)%x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x195 = INT64_MAX;
	uint8_t x196 = 2U;
	volatile int64_t t48 = 75844968215784516LL;

	t48 = (((x193<=x194)&x195)%x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 846065857U;
	volatile int32_t x198 = 0;
	int16_t x199 = -27;

	t49 = (((x197<=x198)&x199)%x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	int32_t x204 = -1;
	uint32_t t50 = 3473253U;

	t50 = (((x201<=x202)&x203)%x204);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 9697310952296LLU;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = UINT8_MAX;
	int64_t x208 = INT64_MIN;
	static int64_t t51 = 6405538639LL;

	t51 = (((x205<=x206)&x207)%x208);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = 2030348809995693LLU;
	static int16_t x214 = 3;
	uint16_t x215 = 20216U;
	volatile uint16_t x216 = 4U;

	t52 = (((x213<=x214)&x215)%x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = -1;
	uint32_t x220 = 5436U;

	t53 = (((x217<=x218)&x219)%x220);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -1;
	uint64_t x222 = 2214LLU;
	static volatile int64_t x223 = INT64_MIN;
	static int64_t t54 = -95LL;

	t54 = (((x221<=x222)&x223)%x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MAX;
	uint64_t x226 = 4741307720LLU;
	int32_t t55 = 966275739;

	t55 = (((x225<=x226)&x227)%x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = 29154414534621484LL;
	int32_t x230 = INT32_MAX;
	int8_t x231 = -1;
	int64_t x232 = -1LL;
	volatile int64_t t56 = -171239LL;

	t56 = (((x229<=x230)&x231)%x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x235 = UINT64_MAX;
	static int32_t x236 = -651;
	volatile uint64_t t57 = 516LLU;

	t57 = (((x233<=x234)&x235)%x236);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x237 = UINT8_MAX;
	static int32_t x238 = INT32_MIN;
	int16_t x239 = INT16_MIN;
	static volatile int16_t x240 = 8130;
	volatile int32_t t58 = -16331;

	t58 = (((x237<=x238)&x239)%x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = 3084LL;
	volatile uint32_t x243 = 1434812U;
	uint64_t x244 = 20546649362LLU;

	t59 = (((x241<=x242)&x243)%x244);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x246 = INT64_MIN;
	int32_t x248 = INT32_MAX;
	volatile int32_t t60 = -621;

	t60 = (((x245<=x246)&x247)%x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x251 = -4;
	volatile uint64_t x252 = UINT64_MAX;
	volatile uint64_t t61 = 1982703729356796LLU;

	t61 = (((x249<=x250)&x251)%x252);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -1;
	static int64_t x254 = -3602LL;
	int32_t x256 = INT32_MAX;
	int32_t t62 = -31860;

	t62 = (((x253<=x254)&x255)%x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	static int16_t x258 = -1;
	volatile int64_t x260 = INT64_MIN;
	volatile int64_t t63 = 2545LL;

	t63 = (((x257<=x258)&x259)%x260);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = 418U;
	volatile uint64_t x262 = 521625150406158LLU;
	static int32_t x263 = -130256;
	volatile int64_t x264 = INT64_MIN;
	static volatile int64_t t64 = 4LL;

	t64 = (((x261<=x262)&x263)%x264);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = -1;
	static uint8_t x266 = UINT8_MAX;
	int32_t x267 = 230396449;
	int32_t x268 = INT32_MIN;
	volatile int32_t t65 = -1;

	t65 = (((x265<=x266)&x267)%x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x269 = INT16_MIN;
	volatile int8_t x270 = -1;
	uint32_t x271 = 50631U;

	t66 = (((x269<=x270)&x271)%x272);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = 7U;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = 1016LLU;
	static uint64_t t67 = 177950166394LLU;

	t67 = (((x273<=x274)&x275)%x276);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x277 = UINT16_MAX;
	uint32_t x278 = UINT32_MAX;
	static int32_t x279 = INT32_MIN;
	static int32_t t68 = -3925809;

	t68 = (((x277<=x278)&x279)%x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = -23881138;
	uint32_t x282 = 1280545U;
	volatile int8_t x283 = INT8_MIN;
	static int32_t t69 = -237395564;

	t69 = (((x281<=x282)&x283)%x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = INT32_MIN;
	int32_t x287 = -1;
	int8_t x288 = INT8_MIN;

	t70 = (((x285<=x286)&x287)%x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = INT64_MIN;
	int64_t x291 = 191660758432738LL;
	int16_t x292 = INT16_MAX;
	static int64_t t71 = 240525943300904231LL;

	t71 = (((x289<=x290)&x291)%x292);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = INT32_MIN;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MAX;
	uint32_t x296 = 401879U;
	volatile uint32_t t72 = 15504U;

	t72 = (((x293<=x294)&x295)%x296);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = INT64_MIN;
	int64_t x298 = 38217460LL;
	int32_t x300 = INT32_MIN;
	volatile int32_t t73 = 1389316;

	t73 = (((x297<=x298)&x299)%x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x302 = -1;
	static int32_t x303 = INT32_MIN;
	volatile int64_t x304 = -6453342607859LL;

	t74 = (((x301<=x302)&x303)%x304);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = INT32_MIN;
	uint32_t x306 = 25U;
	int16_t x307 = INT16_MAX;
	int32_t t75 = 6;

	t75 = (((x305<=x306)&x307)%x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = 9696U;
	static volatile int8_t x310 = -1;
	volatile uint32_t x311 = 254U;
	int16_t x312 = -2;
	uint32_t t76 = 160U;

	t76 = (((x309<=x310)&x311)%x312);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x313 = 52U;
	uint32_t x314 = 154U;
	volatile int16_t x315 = INT16_MAX;
	uint64_t x316 = UINT64_MAX;

	t77 = (((x313<=x314)&x315)%x316);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = 3;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = -4;
	int8_t x320 = INT8_MIN;
	static int32_t t78 = -16761;

	t78 = (((x317<=x318)&x319)%x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = 100447;
	volatile uint32_t x326 = 308772U;
	volatile int32_t x327 = INT32_MIN;

	t79 = (((x325<=x326)&x327)%x328);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = UINT16_MAX;
	int8_t x330 = -1;
	int64_t x331 = -9467944LL;
	volatile uint64_t x332 = UINT64_MAX;

	t80 = (((x329<=x330)&x331)%x332);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = 1U;
	volatile uint8_t x335 = UINT8_MAX;
	int8_t x336 = INT8_MAX;

	t81 = (((x333<=x334)&x335)%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = -3016;
	int64_t x339 = INT64_MIN;
	int16_t x340 = 3;
	int64_t t82 = -239000800564993497LL;

	t82 = (((x337<=x338)&x339)%x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x341 = UINT64_MAX;
	uint64_t x343 = 970028LLU;
	int8_t x344 = 1;
	static volatile uint64_t t83 = 1LLU;

	t83 = (((x341<=x342)&x343)%x344);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MAX;
	static uint64_t x346 = 2813418966579436419LLU;
	static int16_t x347 = -5636;
	int32_t x348 = 2098879;
	static int32_t t84 = 340348381;

	t84 = (((x345<=x346)&x347)%x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MAX;
	uint32_t x352 = 929796098U;
	uint32_t t85 = 64011972U;

	t85 = (((x349<=x350)&x351)%x352);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	uint8_t x354 = 33U;
	int8_t x355 = INT8_MIN;
	volatile uint32_t x356 = 426U;
	uint32_t t86 = 1098521U;

	t86 = (((x353<=x354)&x355)%x356);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	static int16_t x362 = 6;
	uint64_t x363 = UINT64_MAX;
	volatile uint64_t t87 = 1186276LLU;

	t87 = (((x361<=x362)&x363)%x364);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x365 = -1LL;
	static int16_t x367 = -10;
	static uint32_t x368 = 299U;
	uint32_t t88 = 3443933U;

	t88 = (((x365<=x366)&x367)%x368);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = -1;
	uint64_t x370 = 4852594LLU;
	int32_t x371 = 254234210;
	uint16_t x372 = UINT16_MAX;
	static volatile int32_t t89 = 932698541;

	t89 = (((x369<=x370)&x371)%x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x373 = -1;
	int64_t x374 = -7LL;
	volatile int8_t x375 = 5;
	uint64_t x376 = UINT64_MAX;
	static volatile uint64_t t90 = 133449703LLU;

	t90 = (((x373<=x374)&x375)%x376);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x378 = INT64_MAX;
	static volatile int32_t x379 = 13;
	static volatile int32_t x380 = INT32_MAX;

	t91 = (((x377<=x378)&x379)%x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x383 = 251220U;
	uint8_t x384 = 5U;
	volatile uint32_t t92 = 17243028U;

	t92 = (((x381<=x382)&x383)%x384);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x386 = UINT8_MAX;
	int16_t x387 = INT16_MIN;
	volatile uint32_t t93 = 196839227U;

	t93 = (((x385<=x386)&x387)%x388);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 15942167LLU;
	volatile uint64_t t94 = 3049771471193526441LLU;

	t94 = (((x389<=x390)&x391)%x392);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = -1LL;
	uint8_t x394 = 6U;
	volatile int64_t x396 = INT64_MIN;
	uint64_t t95 = 71508524408397602LLU;

	t95 = (((x393<=x394)&x395)%x396);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MAX;
	uint32_t x398 = 114U;
	uint32_t x400 = 6871918U;
	static volatile uint32_t t96 = 2801U;

	t96 = (((x397<=x398)&x399)%x400);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MIN;
	volatile int8_t x402 = INT8_MIN;
	int32_t x403 = -1;
	volatile int64_t x404 = -4339923867001LL;

	t97 = (((x401<=x402)&x403)%x404);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = -1;
	static int32_t x406 = INT32_MAX;
	uint64_t x407 = 35543LLU;
	int64_t x408 = 1870LL;
	uint64_t t98 = 8275LLU;

	t98 = (((x405<=x406)&x407)%x408);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x411 = -1LL;
	int64_t t99 = 10LL;

	t99 = (((x409<=x410)&x411)%x412);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

