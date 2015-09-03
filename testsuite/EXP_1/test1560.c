#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = 95U;
uint8_t x15 = UINT8_MAX;
int64_t x17 = INT64_MIN;
uint16_t x18 = 3U;
int32_t x22 = -1;
int32_t x26 = -1;
int8_t x27 = INT8_MAX;
int64_t t6 = 34LL;
int32_t t7 = 1;
static uint64_t t8 = 124678131362316612LLU;
uint64_t x38 = 2669LLU;
int16_t x39 = INT16_MAX;
static volatile int64_t t10 = -2376LL;
int8_t x48 = INT8_MIN;
static int32_t t11 = -155415;
volatile int32_t t12 = 57;
volatile int8_t x53 = INT8_MAX;
int32_t x54 = -1;
static volatile uint64_t x60 = 1156188991449544360LLU;
uint64_t t14 = 5959492LLU;
volatile int32_t t17 = 0;
int8_t x77 = 1;
int64_t x88 = 2767549LL;
int16_t x90 = -1;
int64_t x92 = INT64_MIN;
uint8_t x99 = 41U;
uint8_t x100 = UINT8_MAX;
int8_t x101 = INT8_MIN;
volatile int64_t x105 = -33337LL;
int32_t x115 = 8181;
static uint64_t t30 = 7401814907865308LLU;
int64_t t31 = INT64_MAX;
int32_t x132 = INT32_MAX;
int32_t t34 = -46;
int16_t x142 = INT16_MIN;
uint8_t x147 = 1U;
uint16_t x151 = 1U;
int16_t x154 = INT16_MIN;
static int32_t t38 = -677;
int8_t x159 = INT8_MIN;
static volatile int8_t x170 = INT8_MIN;
int32_t x173 = INT32_MIN;
int64_t x176 = INT64_MIN;
int8_t x181 = -1;
int32_t x183 = -14442972;
static uint64_t x186 = UINT64_MAX;
int64_t x194 = INT64_MAX;
int32_t x203 = -3392380;
uint8_t x208 = 26U;
int64_t x211 = INT64_MIN;
static volatile int8_t x214 = INT8_MAX;
static volatile int64_t t53 = INT64_MIN;
static uint8_t x224 = UINT8_MAX;
static int64_t x229 = -1LL;
static int8_t x231 = -1;
uint32_t x232 = 1086071651U;
volatile int16_t x256 = INT16_MIN;
int64_t t63 = 18948277LL;
static int16_t x272 = INT16_MIN;
uint32_t x276 = UINT32_MAX;
volatile uint32_t t68 = 30U;
uint32_t x278 = UINT32_MAX;
int32_t x284 = INT32_MIN;
uint64_t t71 = 76171LLU;
int16_t x297 = INT16_MAX;
uint16_t x299 = 343U;
static uint64_t x306 = UINT64_MAX;
volatile int32_t t76 = -898025480;
volatile int64_t x309 = -1LL;
int16_t x315 = 78;
volatile int32_t x318 = -1;
static int64_t t79 = INT64_MIN;
int16_t x325 = 0;
int8_t x337 = INT8_MIN;
volatile int8_t x338 = INT8_MIN;
volatile int64_t t85 = INT64_MAX;
volatile int64_t x356 = INT64_MIN;
int32_t t89 = 449207;
int16_t x361 = -1;
int16_t x368 = -1;
static int32_t x369 = INT32_MAX;
uint16_t x370 = 6U;
int64_t x376 = -34369097776275LL;
static volatile uint64_t t94 = 7177LLU;
int64_t x383 = INT64_MAX;
uint64_t x395 = UINT64_MAX;
uint64_t x396 = 6193292623179088LLU;
static int32_t x399 = INT32_MAX;


void f0(void) {
	uint32_t x1 = 44U;
	int16_t x2 = -1;
	static uint64_t x3 = UINT64_MAX;
	static uint32_t x4 = UINT32_MAX;
	uint64_t t0 = 131LLU;

	t0 = (((x1<=x2)*x3)^x4);

	if (t0 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = INT8_MAX;
	uint64_t x7 = 18276406LLU;
	int8_t x8 = 7;
	uint64_t t1 = 185LLU;

	t1 = (((x5<=x6)*x7)^x8);

	if (t1 != 7LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int64_t x10 = -638LL;
	int32_t x11 = -121;
	int32_t t2 = 820086;

	t2 = (((x9<=x10)*x11)^x12);

	if (t2 != 95) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = -1;
	volatile uint16_t x16 = UINT16_MAX;
	int32_t t3 = 150886;

	t3 = (((x13<=x14)*x15)^x16);

	if (t3 != 65280) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x19 = -1;
	int16_t x20 = -1;
	volatile int32_t t4 = 485;

	t4 = (((x17<=x18)*x19)^x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x23 = -1LL;
	static int8_t x24 = INT8_MIN;
	volatile int64_t t5 = 0LL;

	t5 = (((x21<=x22)*x23)^x24);

	if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x28 = -43502187LL;

	t6 = (((x25<=x26)*x27)^x28);

	if (t6 != -43502102LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 103U;
	int8_t x30 = 1;
	static uint8_t x31 = 40U;
	int8_t x32 = INT8_MIN;

	t7 = (((x29<=x30)*x31)^x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 88U;
	uint8_t x34 = 22U;
	uint64_t x35 = UINT64_MAX;
	volatile uint8_t x36 = UINT8_MAX;

	t8 = (((x33<=x34)*x35)^x36);

	if (t8 != 255LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint64_t x40 = UINT64_MAX;
	static uint64_t t9 = UINT64_MAX;

	t9 = (((x37<=x38)*x39)^x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = INT16_MIN;
	static int64_t x42 = -81618773436330LL;
	volatile int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;

	t10 = (((x41<=x42)*x43)^x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile uint8_t x46 = 14U;
	int16_t x47 = 710;

	t11 = (((x45<=x46)*x47)^x48);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int32_t x50 = -1;
	int8_t x51 = INT8_MAX;
	int16_t x52 = INT16_MIN;

	t12 = (((x49<=x50)*x51)^x52);

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x55 = 1;
	uint64_t x56 = 814078414939LLU;
	static uint64_t t13 = 0LLU;

	t13 = (((x53<=x54)*x55)^x56);

	if (t13 != 814078414939LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 6163631278224250LL;
	int32_t x58 = -1;
	int16_t x59 = INT16_MIN;

	t14 = (((x57<=x58)*x59)^x60);

	if (t14 != 1156188991449544360LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 14U;
	int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = 1343U;
	uint64_t x64 = 28152041LLU;
	volatile uint64_t t15 = 284354LLU;

	t15 = (((x61<=x62)*x63)^x64);

	if (t15 != 28153302LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MAX;
	int32_t x67 = -1;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -3521909;

	t16 = (((x65<=x66)*x67)^x68);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;
	static int32_t x71 = -1215;
	int8_t x72 = 29;

	t17 = (((x69<=x70)*x71)^x72);

	if (t17 != -1188) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 6397U;
	uint16_t x74 = 3530U;
	volatile int32_t x75 = -1;
	volatile int32_t x76 = -1;
	volatile int32_t t18 = 1;

	t18 = (((x73<=x74)*x75)^x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = 0;
	int16_t x79 = 1;
	int8_t x80 = INT8_MIN;
	static int32_t t19 = -261383;

	t19 = (((x77<=x78)*x79)^x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -100;
	volatile int64_t x82 = -23615356690790LL;
	int16_t x83 = INT16_MIN;
	volatile int64_t x84 = INT64_MIN;
	static int64_t t20 = INT64_MIN;

	t20 = (((x81<=x82)*x83)^x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = -789658;
	int32_t x87 = -1;
	volatile int64_t t21 = 600987LL;

	t21 = (((x85<=x86)*x87)^x88);

	if (t21 != 2767549LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static uint8_t x91 = 18U;
	int64_t t22 = -4412850LL;

	t22 = (((x89<=x90)*x91)^x92);

	if (t22 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 23U;
	volatile uint16_t x94 = 87U;
	int8_t x95 = 14;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 0;

	t23 = (((x93<=x94)*x95)^x96);

	if (t23 != -32754) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	volatile uint32_t x98 = 153225183U;
	volatile int32_t t24 = 252151;

	t24 = (((x97<=x98)*x99)^x100);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x102 = 52;
	volatile int8_t x103 = 1;
	static volatile uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = -447471;

	t25 = (((x101<=x102)*x103)^x104);

	if (t25 != 254) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 0U;
	uint32_t x107 = 7U;
	int16_t x108 = INT16_MAX;
	volatile uint32_t t26 = 5893U;

	t26 = (((x105<=x106)*x107)^x108);

	if (t26 != 32760U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x109 = 25374U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	uint8_t x112 = 7U;
	int32_t t27 = -1;

	t27 = (((x109<=x110)*x111)^x112);

	if (t27 != -2147483641) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 2;
	static volatile int16_t x114 = INT16_MIN;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t28 = INT32_MAX;

	t28 = (((x113<=x114)*x115)^x116);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MAX;
	int8_t x118 = -1;
	volatile int8_t x119 = 1;
	volatile int32_t x120 = INT32_MAX;
	static volatile int32_t t29 = INT32_MAX;

	t29 = (((x117<=x118)*x119)^x120);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	uint64_t x122 = UINT64_MAX;
	uint64_t x123 = UINT64_MAX;
	static int8_t x124 = INT8_MIN;

	t30 = (((x121<=x122)*x123)^x124);

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	static int16_t x126 = -14;
	int64_t x127 = INT64_MIN;
	int64_t x128 = INT64_MAX;

	t31 = (((x125<=x126)*x127)^x128);

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	int8_t x130 = 63;
	volatile uint8_t x131 = 1U;
	volatile int32_t t32 = -2064945;

	t32 = (((x129<=x130)*x131)^x132);

	if (t32 != 2147483646) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -2020;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = 1U;
	uint16_t x136 = 0U;
	volatile int32_t t33 = -805841;

	t33 = (((x133<=x134)*x135)^x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 83U;
	static int8_t x138 = INT8_MAX;
	int16_t x139 = INT16_MAX;
	volatile int16_t x140 = -1;

	t34 = (((x137<=x138)*x139)^x140);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 1U;
	int64_t x143 = 95333808018281LL;
	static int64_t x144 = -6LL;
	int64_t t35 = 600471032893466105LL;

	t35 = (((x141<=x142)*x143)^x144);

	if (t35 != -6LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 533U;
	uint16_t x146 = 3U;
	uint32_t x148 = 1027334U;
	volatile uint32_t t36 = 2U;

	t36 = (((x145<=x146)*x147)^x148);

	if (t36 != 1027334U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = -390310LL;
	static int8_t x150 = -1;
	volatile int8_t x152 = INT8_MAX;
	int32_t t37 = -7188;

	t37 = (((x149<=x150)*x151)^x152);

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = 6U;
	int32_t x155 = INT32_MAX;
	int8_t x156 = -22;

	t38 = (((x153<=x154)*x155)^x156);

	if (t38 != -22) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MAX;
	static int8_t x158 = -18;
	int64_t x160 = 18658302LL;
	int64_t t39 = 86489037650484449LL;

	t39 = (((x157<=x158)*x159)^x160);

	if (t39 != 18658302LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	volatile uint64_t x163 = 121944LLU;
	static uint8_t x164 = UINT8_MAX;
	static volatile uint64_t t40 = 1146161710485LLU;

	t40 = (((x161<=x162)*x163)^x164);

	if (t40 != 255LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = 0LL;
	int64_t x167 = INT64_MAX;
	volatile int8_t x168 = INT8_MIN;
	volatile int64_t t41 = 192700145646952LL;

	t41 = (((x165<=x166)*x167)^x168);

	if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int8_t x171 = INT8_MAX;
	static int8_t x172 = -1;
	volatile int32_t t42 = 28;

	t42 = (((x169<=x170)*x171)^x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = UINT64_MAX;
	static volatile int16_t x175 = -196;
	volatile int64_t t43 = 113432158955305844LL;

	t43 = (((x173<=x174)*x175)^x176);

	if (t43 != 9223372036854775612LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 50981267LLU;
	int8_t x178 = INT8_MAX;
	static volatile int32_t x179 = -10542;
	static volatile int8_t x180 = -1;
	int32_t t44 = 44292;

	t44 = (((x177<=x178)*x179)^x180);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x182 = UINT16_MAX;
	static uint16_t x184 = 32U;
	volatile int32_t t45 = -13;

	t45 = (((x181<=x182)*x183)^x184);

	if (t45 != -14443004) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x185 = 37U;
	int64_t x187 = -1LL;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x185<=x186)*x187)^x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 556U;
	volatile uint16_t x190 = 37U;
	int16_t x191 = INT16_MAX;
	static int64_t x192 = -308798042LL;
	static volatile int64_t t47 = 0LL;

	t47 = (((x189<=x190)*x191)^x192);

	if (t47 != -308798042LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	uint32_t x195 = 344278U;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t48 = 178781LLU;

	t48 = (((x193<=x194)*x195)^x196);

	if (t48 != 18446744073709207337LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = 0;
	int32_t x198 = INT32_MIN;
	uint32_t x199 = 84774035U;
	static uint32_t x200 = 10U;
	uint32_t t49 = 7U;

	t49 = (((x197<=x198)*x199)^x200);

	if (t49 != 10U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	uint8_t x202 = UINT8_MAX;
	int16_t x204 = -1;
	static int32_t t50 = -210;

	t50 = (((x201<=x202)*x203)^x204);

	if (t50 != 3392379) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 432696U;
	int8_t x206 = INT8_MIN;
	static volatile uint32_t x207 = UINT32_MAX;
	volatile uint32_t t51 = 1733U;

	t51 = (((x205<=x206)*x207)^x208);

	if (t51 != 4294967269U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int8_t x210 = -1;
	int32_t x212 = INT32_MIN;
	int64_t t52 = -10566LL;

	t52 = (((x209<=x210)*x211)^x212);

	if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int64_t x215 = -1LL;
	int64_t x216 = INT64_MAX;

	t53 = (((x213<=x214)*x215)^x216);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	static int32_t x218 = 15525;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = 16U;
	volatile int64_t t54 = 67004LL;

	t54 = (((x217<=x218)*x219)^x220);

	if (t54 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = UINT64_MAX;
	volatile int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MAX;
	volatile int32_t t55 = -334699345;

	t55 = (((x221<=x222)*x223)^x224);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -1;
	uint64_t x226 = 377170863461399632LLU;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MAX;
	volatile int32_t t56 = -50737942;

	t56 = (((x225<=x226)*x227)^x228);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x230 = INT32_MIN;
	uint32_t t57 = 1U;

	t57 = (((x229<=x230)*x231)^x232);

	if (t57 != 1086071651U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 57542572;
	volatile uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MAX;
	uint8_t x236 = 62U;
	int32_t t58 = 2;

	t58 = (((x233<=x234)*x235)^x236);

	if (t58 != 65) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MIN;
	volatile uint32_t x239 = 36141704U;
	volatile int64_t x240 = -10135225LL;
	int64_t t59 = -2738362774LL;

	t59 = (((x237<=x238)*x239)^x240);

	if (t59 != -45997105LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	static uint32_t x242 = 31316U;
	uint64_t x243 = 138023501154023LLU;
	int16_t x244 = 60;
	volatile uint64_t t60 = 6548770292LLU;

	t60 = (((x241<=x242)*x243)^x244);

	if (t60 != 60LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int8_t x246 = INT8_MIN;
	static int16_t x247 = -16;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = 6329160;

	t61 = (((x245<=x246)*x247)^x248);

	if (t61 != -32753) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	volatile uint64_t x250 = 5LLU;
	volatile uint8_t x251 = 1U;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (((x249<=x250)*x251)^x252);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 760U;
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;

	t63 = (((x253<=x254)*x255)^x256);

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	int64_t x258 = -1LL;
	int64_t x259 = INT64_MAX;
	int64_t x260 = INT64_MIN;
	static int64_t t64 = INT64_MIN;

	t64 = (((x257<=x258)*x259)^x260);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	static uint8_t x263 = 59U;
	uint64_t x264 = 633593549942831460LLU;
	uint64_t t65 = 1106484226919235LLU;

	t65 = (((x261<=x262)*x263)^x264);

	if (t65 != 633593549942831460LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	int32_t x266 = INT32_MIN;
	uint64_t x267 = 3651323890629803LLU;
	volatile int8_t x268 = INT8_MAX;
	volatile uint64_t t66 = 8LLU;

	t66 = (((x265<=x266)*x267)^x268);

	if (t66 != 127LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static int64_t x270 = INT64_MAX;
	static int16_t x271 = 3362;
	volatile int32_t t67 = -6;

	t67 = (((x269<=x270)*x271)^x272);

	if (t67 != -29406) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 6897447959LLU;
	int64_t x274 = INT64_MIN;
	int8_t x275 = -1;

	t68 = (((x273<=x274)*x275)^x276);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int32_t x279 = INT32_MIN;
	int64_t x280 = -1LL;
	int64_t t69 = 15116LL;

	t69 = (((x277<=x278)*x279)^x280);

	if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	static int64_t x283 = INT64_MAX;
	int64_t t70 = 1937823426566817602LL;

	t70 = (((x281<=x282)*x283)^x284);

	if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = 32369LL;
	uint64_t x287 = 358776LLU;
	static uint16_t x288 = UINT16_MAX;

	t71 = (((x285<=x286)*x287)^x288);

	if (t71 != 362119LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 0U;
	uint16_t x290 = 21U;
	uint8_t x291 = 29U;
	int32_t x292 = 77;
	static int32_t t72 = -1461473;

	t72 = (((x289<=x290)*x291)^x292);

	if (t72 != 80) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MIN;
	volatile int32_t x294 = INT32_MIN;
	uint16_t x295 = UINT16_MAX;
	int64_t x296 = -1LL;
	int64_t t73 = 20197LL;

	t73 = (((x293<=x294)*x295)^x296);

	if (t73 != -65536LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x298 = UINT32_MAX;
	static volatile int8_t x300 = INT8_MIN;
	int32_t t74 = -123492;

	t74 = (((x297<=x298)*x299)^x300);

	if (t74 != -297) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	static int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 53681390;

	t75 = (((x301<=x302)*x303)^x304);

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x307 = -1;
	int32_t x308 = 428;

	t76 = (((x305<=x306)*x307)^x308);

	if (t76 != -429) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MAX;
	uint8_t x311 = UINT8_MAX;
	static int64_t x312 = -1LL;
	static volatile int64_t t77 = 308721LL;

	t77 = (((x309<=x310)*x311)^x312);

	if (t77 != -256LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = -1LL;
	volatile int16_t x314 = -7671;
	int64_t x316 = -126444254LL;
	int64_t t78 = -131800601LL;

	t78 = (((x313<=x314)*x315)^x316);

	if (t78 != -126444254LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	volatile int64_t x319 = INT64_MAX;
	int16_t x320 = -1;

	t79 = (((x317<=x318)*x319)^x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	volatile int32_t x322 = -4379829;
	static int8_t x323 = -1;
	static int8_t x324 = 0;
	int32_t t80 = 674;

	t80 = (((x321<=x322)*x323)^x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = -122;
	static volatile int16_t x327 = -48;
	int32_t x328 = INT32_MIN;
	static int32_t t81 = INT32_MIN;

	t81 = (((x325<=x326)*x327)^x328);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 2U;
	int8_t x330 = 6;
	int8_t x331 = -1;
	int8_t x332 = -13;
	int32_t t82 = -46052;

	t82 = (((x329<=x330)*x331)^x332);

	if (t82 != 12) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int8_t x334 = INT8_MIN;
	static int64_t x335 = INT64_MIN;
	static int64_t x336 = 296670322982789212LL;
	volatile int64_t t83 = 189LL;

	t83 = (((x333<=x334)*x335)^x336);

	if (t83 != 296670322982789212LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x339 = INT16_MIN;
	static int8_t x340 = -1;
	int32_t t84 = 266;

	t84 = (((x337<=x338)*x339)^x340);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 5U;
	uint8_t x342 = 90U;
	static volatile int64_t x343 = -1LL;
	int64_t x344 = INT64_MIN;

	t85 = (((x341<=x342)*x343)^x344);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 8327911784450857LLU;
	static int32_t x346 = INT32_MIN;
	int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = 103236636;

	t86 = (((x345<=x346)*x347)^x348);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static volatile int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MIN;
	static uint8_t x352 = UINT8_MAX;
	int32_t t87 = -439710;

	t87 = (((x349<=x350)*x351)^x352);

	if (t87 != -2147483393) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x354 = -1;
	volatile uint8_t x355 = 125U;
	int64_t t88 = -416752391407LL;

	t88 = (((x353<=x354)*x355)^x356);

	if (t88 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	int16_t x358 = 220;
	volatile int32_t x359 = -1;
	volatile int16_t x360 = INT16_MIN;

	t89 = (((x357<=x358)*x359)^x360);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x362 = 3349672028LLU;
	volatile int32_t x363 = 13366;
	static int64_t x364 = INT64_MAX;
	volatile int64_t t90 = INT64_MAX;

	t90 = (((x361<=x362)*x363)^x364);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MAX;
	int64_t x367 = INT64_MIN;
	int64_t t91 = -396LL;

	t91 = (((x365<=x366)*x367)^x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x371 = -1LL;
	static int8_t x372 = INT8_MAX;
	volatile int64_t t92 = 534937574981LL;

	t92 = (((x369<=x370)*x371)^x372);

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MAX;
	int64_t x375 = 108LL;
	volatile int64_t t93 = -651LL;

	t93 = (((x373<=x374)*x375)^x376);

	if (t93 != -34369097776383LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MAX;
	static int64_t x378 = 348027868LL;
	uint64_t x379 = 4908650472679704LLU;
	int8_t x380 = -1;

	t94 = (((x377<=x378)*x379)^x380);

	if (t94 != 18441835423236871911LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	uint32_t x382 = 71391U;
	int8_t x384 = 38;
	int64_t t95 = 125321LL;

	t95 = (((x381<=x382)*x383)^x384);

	if (t95 != 9223372036854775769LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 4734158677157627470LLU;
	uint32_t x386 = 3U;
	uint64_t x387 = 464569LLU;
	static int64_t x388 = INT64_MIN;
	static uint64_t t96 = 16811896LLU;

	t96 = (((x385<=x386)*x387)^x388);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -18;
	static volatile uint8_t x390 = 1U;
	static int64_t x391 = 90909119957289LL;
	uint16_t x392 = 104U;
	volatile int64_t t97 = -113761011LL;

	t97 = (((x389<=x390)*x391)^x392);

	if (t97 != 90909119957313LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x393 = INT32_MAX;
	int16_t x394 = -1;
	uint64_t t98 = 382LLU;

	t98 = (((x393<=x394)*x395)^x396);

	if (t98 != 6193292623179088LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	static volatile uint8_t x398 = UINT8_MAX;
	int16_t x400 = -1;
	int32_t t99 = -24654;

	t99 = (((x397<=x398)*x399)^x400);

	if (t99 != -1) { NG(); } else { ; }
	
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

