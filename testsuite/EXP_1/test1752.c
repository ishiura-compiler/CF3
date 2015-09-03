#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int32_t x3 = INT32_MIN;
int32_t t3 = 181;
uint64_t x25 = UINT64_MAX;
int64_t x27 = -8216934692844LL;
volatile int64_t x30 = INT64_MAX;
uint32_t x32 = 2366060U;
static int8_t x35 = -1;
uint8_t x36 = 0U;
uint64_t x37 = UINT64_MAX;
uint32_t x38 = UINT32_MAX;
volatile int32_t x43 = INT32_MIN;
uint32_t x48 = 52965830U;
uint8_t x50 = 2U;
volatile uint16_t x52 = 3139U;
uint8_t x53 = 0U;
uint32_t x55 = 5924U;
volatile int16_t x58 = -1;
static int16_t x62 = INT16_MIN;
uint8_t x71 = UINT8_MAX;
int32_t t17 = 9841;
static int32_t x76 = INT32_MIN;
int32_t x83 = INT32_MAX;
static int64_t x84 = -1LL;
int32_t t20 = 6;
int8_t x87 = INT8_MIN;
uint16_t x90 = UINT16_MAX;
uint8_t x94 = 0U;
int16_t x96 = -1;
uint16_t x106 = UINT16_MAX;
int32_t x110 = -14;
int64_t x111 = -1LL;
int32_t t27 = 3;
int16_t x114 = -5;
static volatile int8_t x115 = INT8_MAX;
int16_t x116 = INT16_MIN;
int16_t x119 = 14;
int32_t x125 = INT32_MIN;
uint32_t x127 = 927U;
int32_t x128 = INT32_MIN;
volatile int16_t x133 = -1;
static volatile int32_t t33 = 396;
int16_t x141 = -2;
volatile uint64_t x149 = UINT64_MAX;
uint64_t x157 = 9LLU;
int8_t x158 = -12;
int64_t x160 = -4489245543741183LL;
volatile int32_t t38 = 233;
uint8_t x164 = 25U;
int64_t x167 = INT64_MAX;
int64_t x169 = -1LL;
static uint16_t x172 = 7404U;
static int8_t x174 = -23;
static int64_t x175 = -275774123LL;
volatile int32_t t42 = 755;
static volatile int8_t x180 = INT8_MIN;
int32_t t45 = -518000147;
volatile int8_t x191 = INT8_MAX;
volatile int32_t t46 = -98993877;
static int32_t t47 = 191454444;
int64_t x198 = 5017LL;
int32_t x199 = INT32_MIN;
int64_t x202 = -3629693815118280LL;
static uint8_t x212 = UINT8_MAX;
int8_t x214 = 5;
int32_t x216 = INT32_MIN;
volatile int32_t t52 = 177;
volatile int32_t x217 = INT32_MIN;
int32_t t53 = -11;
int32_t x221 = INT32_MIN;
int16_t x223 = -1;
uint16_t x231 = 3455U;
int32_t t56 = 2695;
int8_t x233 = INT8_MIN;
volatile int32_t t57 = 8;
volatile uint64_t x246 = 95LLU;
uint64_t x247 = UINT64_MAX;
uint32_t x248 = UINT32_MAX;
int32_t t60 = 179;
static volatile int8_t x250 = -1;
volatile int32_t t62 = 124999;
int64_t x257 = -1LL;
int8_t x258 = INT8_MIN;
int64_t x259 = INT64_MIN;
int32_t x262 = INT32_MIN;
volatile int32_t t65 = 0;
uint8_t x272 = 116U;
uint32_t x273 = UINT32_MAX;
static volatile int16_t x279 = INT16_MAX;
uint64_t x281 = 1LLU;
uint16_t x285 = 61U;
int64_t x293 = INT64_MIN;
uint32_t x296 = 2067U;
volatile int32_t t72 = 258;
int16_t x298 = INT16_MAX;
static volatile int32_t x299 = INT32_MIN;
volatile int64_t x301 = INT64_MAX;
volatile int8_t x302 = -1;
uint16_t x304 = UINT16_MAX;
static int8_t x307 = INT8_MIN;
static int32_t x309 = INT32_MIN;
uint32_t x314 = 27443U;
static uint64_t x315 = UINT64_MAX;
volatile int32_t t79 = -1770608;
uint32_t x326 = 56921U;
int64_t x328 = INT64_MIN;
static uint8_t x330 = 2U;
int64_t x332 = 22203634LL;
volatile int32_t t81 = 2;
volatile uint8_t x333 = 1U;
static int16_t x337 = INT16_MIN;
uint32_t x338 = 257102659U;
volatile int32_t x339 = -8165;
uint8_t x355 = 1U;
volatile int64_t x371 = 289230411663LL;
static uint32_t x372 = UINT32_MAX;
static int32_t t90 = 50810;
uint8_t x373 = 3U;
int32_t t91 = 83874;
int8_t x379 = INT8_MAX;
static int32_t t92 = 540202846;
int8_t x382 = -1;
static volatile int32_t t96 = 2403;
uint64_t x405 = 98687839LLU;
int16_t x406 = -2138;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint8_t x4 = 8U;
	volatile int32_t t0 = 696337;

	t0 = (((x1&x2)%x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 33019202LLU;
	static int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 17279715;

	t1 = (((x5&x6)%x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	volatile uint32_t x12 = 219654378U;
	volatile int32_t t2 = -47882975;

	t2 = (((x9&x10)%x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = 8U;
	int64_t x15 = -2134138733676LL;
	static int8_t x16 = INT8_MAX;

	t3 = (((x13&x14)%x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 3545932846327227LLU;
	static int16_t x18 = -209;
	int8_t x19 = -1;
	static uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = -34;

	t4 = (((x17&x18)%x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = INT16_MIN;
	volatile uint16_t x23 = 4021U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -12895893;

	t5 = (((x21&x22)%x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	uint32_t x28 = 96104U;
	static volatile int32_t t6 = -1496;

	t6 = (((x25&x26)%x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	int64_t x31 = INT64_MAX;
	int32_t t7 = 989;

	t7 = (((x29&x30)%x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 3585035;
	int16_t x34 = -121;
	int32_t t8 = -7941;

	t8 = (((x33&x34)%x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = -3;
	int64_t x40 = -69356LL;
	volatile int32_t t9 = -7;

	t9 = (((x37&x38)%x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MAX;
	uint64_t x42 = UINT64_MAX;
	int8_t x44 = 7;
	int32_t t10 = -1235732;

	t10 = (((x41&x42)%x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	int64_t x46 = 28LL;
	int8_t x47 = -1;
	volatile int32_t t11 = -59;

	t11 = (((x45&x46)%x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static uint16_t x51 = 752U;
	volatile int32_t t12 = 23;

	t12 = (((x49&x50)%x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -31;
	int64_t x56 = INT64_MIN;
	int32_t t13 = -2026;

	t13 = (((x53&x54)%x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x57 = 1U;
	uint8_t x59 = 19U;
	volatile int16_t x60 = INT16_MIN;
	int32_t t14 = 53;

	t14 = (((x57&x58)%x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -13173;

	t15 = (((x61&x62)%x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 1U;
	static int32_t t16 = -4085279;

	t16 = (((x65&x66)%x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int64_t x70 = 1104LL;
	int32_t x72 = INT32_MIN;

	t17 = (((x69&x70)%x71)<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -19;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 183U;
	int32_t t18 = -1;

	t18 = (((x73&x74)%x75)<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 13U;
	volatile int8_t x78 = -5;
	volatile int32_t x79 = INT32_MIN;
	uint16_t x80 = 1U;
	volatile int32_t t19 = 0;

	t19 = (((x77&x78)%x79)<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 1U;
	uint64_t x82 = 32728LLU;

	t20 = (((x81&x82)%x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 10U;
	uint16_t x88 = 1U;
	static int32_t t21 = 3511234;

	t21 = (((x85&x86)%x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	volatile uint16_t x91 = 4599U;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = -190520;

	t22 = (((x89&x90)%x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 3U;
	static int8_t x95 = INT8_MIN;
	int32_t t23 = -21432;

	t23 = (((x93&x94)%x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	volatile uint64_t x98 = 680915131456948LLU;
	int16_t x99 = -63;
	int8_t x100 = -1;
	static int32_t t24 = -10972;

	t24 = (((x97&x98)%x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = 6242;
	static int32_t t25 = 53444958;

	t25 = (((x101&x102)%x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int32_t x107 = 71979485;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 999;

	t26 = (((x105&x106)%x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 24311450472LLU;
	int8_t x112 = 0;

	t27 = (((x109&x110)%x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	int32_t t28 = -51437012;

	t28 = (((x113&x114)%x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x117 = UINT16_MAX;
	uint32_t x118 = 137358436U;
	static int64_t x120 = INT64_MIN;
	int32_t t29 = -2313891;

	t29 = (((x117&x118)%x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 924045LLU;
	static int16_t x122 = -1;
	volatile uint16_t x123 = UINT16_MAX;
	static int32_t x124 = INT32_MIN;
	int32_t t30 = -3082436;

	t30 = (((x121&x122)%x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x126 = 49;
	int32_t t31 = 2;

	t31 = (((x125&x126)%x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	volatile uint32_t x130 = 17516U;
	uint16_t x131 = 1717U;
	static uint32_t x132 = 124U;
	int32_t t32 = -311661606;

	t32 = (((x129&x130)%x131)<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MIN;
	static int32_t x136 = INT32_MAX;

	t33 = (((x133&x134)%x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x142 = INT64_MIN;
	uint32_t x143 = 2145011651U;
	int64_t x144 = INT64_MIN;
	volatile int32_t t34 = 762;

	t34 = (((x141&x142)%x143)<=x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -15345;
	volatile int64_t x146 = 9852LL;
	uint32_t x147 = 10U;
	volatile int8_t x148 = 1;
	int32_t t35 = 139200494;

	t35 = (((x145&x146)%x147)<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MAX;
	static volatile int8_t x152 = -35;
	static volatile int32_t t36 = -11040440;

	t36 = (((x149&x150)%x151)<=x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 26429U;
	uint32_t x154 = 505359U;
	int64_t x155 = -1LL;
	int16_t x156 = INT16_MAX;
	int32_t t37 = 378;

	t37 = (((x153&x154)%x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x159 = UINT64_MAX;

	t38 = (((x157&x158)%x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = -1LL;
	static uint8_t x162 = 41U;
	uint32_t x163 = 308U;
	int32_t t39 = -218834448;

	t39 = (((x161&x162)%x163)<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	static int32_t x166 = -1;
	volatile int8_t x168 = -1;
	int32_t t40 = -1966729;

	t40 = (((x165&x166)%x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x170 = 41;
	int32_t x171 = -1;
	int32_t t41 = -141692;

	t41 = (((x169&x170)%x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;

	t42 = (((x173&x174)%x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x177 = 813859041888LLU;
	static int16_t x178 = -14;
	volatile uint16_t x179 = 2786U;
	int32_t t43 = 97;

	t43 = (((x177&x178)%x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 1;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = 107481867080755702LL;
	int16_t x184 = 6;
	int32_t t44 = -487306;

	t44 = (((x181&x182)%x183)<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	static volatile int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	int8_t x188 = INT8_MIN;

	t45 = (((x185&x186)%x187)<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = -1;
	volatile int32_t x190 = INT32_MIN;
	int16_t x192 = -1;

	t46 = (((x189&x190)%x191)<=x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -1LL;
	uint16_t x194 = 6U;
	volatile int64_t x195 = -1LL;
	volatile int8_t x196 = INT8_MIN;

	t47 = (((x193&x194)%x195)<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x197 = 11093554320LL;
	int8_t x200 = -4;
	volatile int32_t t48 = 10668;

	t48 = (((x197&x198)%x199)<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -2;
	int64_t x203 = -1LL;
	int32_t x204 = INT32_MIN;
	int32_t t49 = 72201;

	t49 = (((x201&x202)%x203)<=x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 8;
	static int8_t x206 = INT8_MAX;
	int32_t x207 = 732390313;
	static int32_t x208 = INT32_MAX;
	static volatile int32_t t50 = 22;

	t50 = (((x205&x206)%x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = -1;
	volatile int32_t x210 = 3;
	int64_t x211 = INT64_MIN;
	int32_t t51 = -12787;

	t51 = (((x209&x210)%x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	int8_t x215 = -1;

	t52 = (((x213&x214)%x215)<=x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x218 = 2U;
	uint32_t x219 = 79038U;
	static uint8_t x220 = UINT8_MAX;

	t53 = (((x217&x218)%x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x222 = -1LL;
	uint16_t x224 = 28104U;
	volatile int32_t t54 = 3130675;

	t54 = (((x221&x222)%x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = -1;
	int32_t x226 = INT32_MAX;
	static int32_t x227 = -4401554;
	int16_t x228 = -7;
	static volatile int32_t t55 = -64784;

	t55 = (((x225&x226)%x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	uint16_t x230 = UINT16_MAX;
	uint16_t x232 = UINT16_MAX;

	t56 = (((x229&x230)%x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x234 = 0U;
	volatile uint16_t x235 = UINT16_MAX;
	uint16_t x236 = 40U;

	t57 = (((x233&x234)%x235)<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MAX;
	int8_t x238 = 1;
	static volatile uint32_t x239 = 119U;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t58 = 122467243;

	t58 = (((x237&x238)%x239)<=x240);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x241 = UINT8_MAX;
	static uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MIN;
	volatile uint8_t x244 = 13U;
	int32_t t59 = -175;

	t59 = (((x241&x242)%x243)<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x245 = -3;

	t60 = (((x245&x246)%x247)<=x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x249 = 13109609;
	int8_t x251 = INT8_MAX;
	int16_t x252 = INT16_MAX;
	volatile int32_t t61 = 30685725;

	t61 = (((x249&x250)%x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = UINT8_MAX;
	volatile int8_t x254 = -2;
	int64_t x255 = INT64_MIN;
	static uint32_t x256 = 1356926131U;

	t62 = (((x253&x254)%x255)<=x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x260 = 308378U;
	volatile int32_t t63 = -6032525;

	t63 = (((x257&x258)%x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = UINT8_MAX;
	volatile int16_t x263 = -1;
	static uint16_t x264 = 6U;
	volatile int32_t t64 = 2;

	t64 = (((x261&x262)%x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = 4;
	int64_t x267 = INT64_MIN;
	volatile uint8_t x268 = UINT8_MAX;

	t65 = (((x265&x266)%x267)<=x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MAX;
	int8_t x271 = INT8_MIN;
	volatile int32_t t66 = 1;

	t66 = (((x269&x270)%x271)<=x272);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x274 = INT8_MAX;
	volatile int8_t x275 = -1;
	uint16_t x276 = 14U;
	volatile int32_t t67 = -25182;

	t67 = (((x273&x274)%x275)<=x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = INT64_MAX;
	int64_t x278 = 570LL;
	uint64_t x280 = 124976873939678LLU;
	int32_t t68 = 2;

	t68 = (((x277&x278)%x279)<=x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x282 = UINT16_MAX;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = 1961768467LLU;
	static int32_t t69 = -108087;

	t69 = (((x281&x282)%x283)<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x286 = -1;
	uint16_t x287 = 7113U;
	int64_t x288 = 55049388291LL;
	int32_t t70 = -547005839;

	t70 = (((x285&x286)%x287)<=x288);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = -138239;
	int16_t x290 = INT16_MIN;
	int32_t x291 = 235350;
	volatile uint32_t x292 = 4076533U;
	int32_t t71 = -81;

	t71 = (((x289&x290)%x291)<=x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x294 = INT64_MAX;
	int8_t x295 = INT8_MIN;

	t72 = (((x293&x294)%x295)<=x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 8221U;
	uint64_t x300 = 8LLU;
	int32_t t73 = -865122;

	t73 = (((x297&x298)%x299)<=x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x303 = 8;
	volatile int32_t t74 = 72;

	t74 = (((x301&x302)%x303)<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -57;
	volatile int8_t x306 = -1;
	volatile uint64_t x308 = UINT64_MAX;
	static int32_t t75 = 0;

	t75 = (((x305&x306)%x307)<=x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x310 = 1013U;
	int64_t x311 = -1LL;
	int8_t x312 = -1;
	int32_t t76 = 180351981;

	t76 = (((x309&x310)%x311)<=x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x313 = -1;
	int32_t x316 = INT32_MIN;
	static int32_t t77 = -1180749;

	t77 = (((x313&x314)%x315)<=x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 33U;
	int32_t t78 = -4;

	t78 = (((x317&x318)%x319)<=x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	uint64_t x323 = 221177389279176LLU;
	int8_t x324 = INT8_MAX;

	t79 = (((x321&x322)%x323)<=x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 8U;
	static volatile int16_t x327 = -1;
	int32_t t80 = 4541;

	t80 = (((x325&x326)%x327)<=x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = UINT32_MAX;
	static int64_t x331 = INT64_MIN;

	t81 = (((x329&x330)%x331)<=x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x334 = -1;
	uint64_t x335 = 7382LLU;
	int32_t x336 = INT32_MIN;
	volatile int32_t t82 = -494392;

	t82 = (((x333&x334)%x335)<=x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x340 = 7856U;
	static int32_t t83 = 22501;

	t83 = (((x337&x338)%x339)<=x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	static volatile uint16_t x346 = 2277U;
	int32_t x347 = -28;
	int64_t x348 = INT64_MIN;
	volatile int32_t t84 = 0;

	t84 = (((x345&x346)%x347)<=x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 1122965223U;
	int8_t x350 = -5;
	int16_t x351 = -1;
	int32_t x352 = INT32_MAX;
	int32_t t85 = 463564;

	t85 = (((x349&x350)%x351)<=x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x353 = INT64_MIN;
	uint32_t x354 = 748U;
	static uint64_t x356 = 14842LLU;
	volatile int32_t t86 = -162187;

	t86 = (((x353&x354)%x355)<=x356);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x357 = 1U;
	static int8_t x358 = INT8_MAX;
	volatile int64_t x359 = -1LL;
	int32_t x360 = -5;
	volatile int32_t t87 = -16;

	t87 = (((x357&x358)%x359)<=x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = INT64_MAX;
	uint16_t x362 = UINT16_MAX;
	volatile int64_t x363 = -10090LL;
	int64_t x364 = -1LL;
	int32_t t88 = -4817304;

	t88 = (((x361&x362)%x363)<=x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 2U;
	volatile int8_t x367 = INT8_MIN;
	int16_t x368 = -1;
	volatile int32_t t89 = 89;

	t89 = (((x365&x366)%x367)<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = UINT32_MAX;

	t90 = (((x369&x370)%x371)<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x374 = 16812U;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MIN;

	t91 = (((x373&x374)%x375)<=x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	static int8_t x378 = INT8_MIN;
	volatile uint32_t x380 = 52504U;

	t92 = (((x377&x378)%x379)<=x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = 5311;
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = INT8_MAX;
	volatile int32_t t93 = 326552;

	t93 = (((x381&x382)%x383)<=x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MAX;
	int64_t x386 = INT64_MAX;
	volatile uint64_t x387 = 82008958015090248LLU;
	volatile int32_t x388 = INT32_MIN;
	static int32_t t94 = -117907;

	t94 = (((x385&x386)%x387)<=x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x389 = 7872U;
	int64_t x390 = INT64_MIN;
	int8_t x391 = 2;
	static int64_t x392 = INT64_MIN;
	int32_t t95 = 63;

	t95 = (((x389&x390)%x391)<=x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = 0;
	int8_t x394 = 44;
	volatile int32_t x395 = 871;
	uint32_t x396 = 24U;

	t96 = (((x393&x394)%x395)<=x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x397 = -1LL;
	static uint16_t x398 = UINT16_MAX;
	int64_t x399 = INT64_MIN;
	int32_t x400 = -1;
	volatile int32_t t97 = 219951346;

	t97 = (((x397&x398)%x399)<=x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x401 = 790U;
	uint64_t x402 = UINT64_MAX;
	uint16_t x403 = 1150U;
	volatile uint8_t x404 = 16U;
	int32_t t98 = 0;

	t98 = (((x401&x402)%x403)<=x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x407 = INT16_MIN;
	static int64_t x408 = 3361593102300LL;
	static volatile int32_t t99 = 2446271;

	t99 = (((x405&x406)%x407)<=x408);

	if (t99 != 1) { NG(); } else { ; }
	
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

