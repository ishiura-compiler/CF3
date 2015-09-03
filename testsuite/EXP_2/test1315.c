#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 837098U;
int64_t x9 = INT64_MIN;
int64_t t4 = -4367258530LL;
int32_t x25 = 1265;
int64_t t9 = 14639LL;
int16_t x45 = INT16_MIN;
int64_t t11 = -483709945121LL;
uint64_t x51 = UINT64_MAX;
volatile int32_t t12 = -873425;
uint16_t x55 = UINT16_MAX;
static int32_t x62 = 15275;
volatile uint16_t x82 = 8U;
volatile int64_t x93 = -199771LL;
uint8_t x100 = 54U;
uint64_t x108 = 7155LLU;
uint64_t t25 = 1LLU;
static volatile uint64_t x112 = 639285371447749LLU;
int8_t x116 = -1;
int16_t x120 = -311;
int32_t x130 = INT32_MAX;
uint16_t x135 = 244U;
volatile uint64_t t31 = 474205LLU;
uint64_t x141 = 12673929550354LLU;
uint64_t t33 = 741846643168LLU;
static volatile int32_t x151 = INT32_MIN;
uint16_t x152 = 14230U;
uint16_t x164 = 26519U;
int32_t x173 = INT32_MIN;
static int32_t x177 = INT32_MAX;
uint64_t x182 = UINT64_MAX;
int32_t x183 = -15627;
static int64_t t43 = 121LL;
int64_t x223 = INT64_MAX;
int16_t x225 = INT16_MIN;
int16_t x226 = 1;
int64_t x233 = 45668569784286LL;
uint32_t x235 = 15365458U;
static volatile int32_t t54 = -891;
int8_t x241 = -1;
volatile int64_t x253 = -1LL;
volatile int64_t t58 = 2346863465LL;
int64_t x259 = INT64_MAX;
static int32_t x260 = INT32_MIN;
static volatile uint64_t t60 = UINT64_MAX;
uint32_t x269 = 28366636U;
uint32_t x275 = 187835U;
int32_t x281 = 13;
int8_t x284 = -1;
int32_t x288 = INT32_MAX;
static int64_t x299 = 241369LL;
volatile int32_t x306 = 0;
int8_t x307 = INT8_MIN;
uint32_t x324 = 78818131U;
uint32_t x335 = 408U;
static volatile int16_t x336 = INT16_MIN;
static int64_t t76 = 1LL;
int16_t x344 = INT16_MIN;
int32_t t77 = 0;
int16_t x348 = 1;
int32_t t78 = 3;
static volatile int64_t x349 = INT64_MAX;
static int64_t x350 = -11LL;
volatile int32_t x354 = INT32_MIN;
int16_t x357 = INT16_MIN;
int32_t x367 = -1;
static uint32_t x368 = 22070U;
uint16_t x370 = 5616U;
static volatile int64_t x397 = INT64_MIN;
volatile int16_t x400 = -122;
int64_t x402 = -1LL;
static volatile int64_t x406 = INT64_MIN;
int8_t x411 = INT8_MIN;
int64_t t93 = 654178LL;
uint8_t x415 = UINT8_MAX;
int64_t t96 = -4651565203LL;
volatile int8_t x428 = INT8_MAX;
volatile int16_t x436 = -6;
static int32_t x437 = INT32_MIN;
static volatile int16_t x439 = 13;
int32_t t99 = 25650996;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	volatile uint64_t x2 = 338LLU;
	static int16_t x3 = -1;
	uint8_t x4 = 15U;

	t0 = ((x1&(x2==x3))-x4);

	if (t0 != 4294967281U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 98449011607LLU;
	uint32_t x8 = 776U;
	volatile uint32_t t1 = 44838497U;

	t1 = ((x5&(x6==x7))-x8);

	if (t1 != 4294966520U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x10 = 2905U;
	volatile int16_t x11 = 4534;
	int16_t x12 = INT16_MIN;
	int64_t t2 = -5568LL;

	t2 = ((x9&(x10==x11))-x12);

	if (t2 != 32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	static int8_t x14 = INT8_MIN;
	volatile uint16_t x15 = 285U;
	static int64_t x16 = 266669271108071LL;
	int64_t t3 = 130655049938134LL;

	t3 = ((x13&(x14==x15))-x16);

	if (t3 != -266669271108071LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int32_t x18 = -1;
	uint16_t x19 = 11846U;
	volatile int32_t x20 = INT32_MIN;

	t4 = ((x17&(x18==x19))-x20);

	if (t4 != 2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint16_t x22 = 262U;
	static volatile uint64_t x23 = UINT64_MAX;
	int64_t x24 = 32301LL;
	volatile int64_t t5 = 1036788017LL;

	t5 = ((x21&(x22==x23))-x24);

	if (t5 != -32301LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -38159LL;
	volatile uint64_t x27 = 443LLU;
	uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 13007901U;

	t6 = ((x25&(x26==x27))-x28);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 38794749U;
	static int8_t x30 = INT8_MIN;
	volatile int32_t x31 = INT32_MAX;
	int32_t x32 = 615036820;
	uint32_t t7 = 126U;

	t7 = ((x29&(x30==x31))-x32);

	if (t7 != 3679930476U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = -66660171841LL;
	uint8_t x35 = 9U;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = -180368445;

	t8 = ((x33&(x34==x35))-x36);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile int32_t x38 = -1;
	int16_t x39 = -4363;
	int8_t x40 = -1;

	t9 = ((x37&(x38==x39))-x40);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 0;
	int32_t x42 = INT32_MIN;
	uint64_t x43 = UINT64_MAX;
	static volatile uint32_t x44 = 1U;
	static uint32_t t10 = UINT32_MAX;

	t10 = ((x41&(x42==x43))-x44);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	int64_t x48 = -1058826LL;

	t11 = ((x45&(x46==x47))-x48);

	if (t11 != 1058826LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	static int8_t x50 = 8;
	uint8_t x52 = 0U;

	t12 = ((x49&(x50==x51))-x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 1748;
	uint8_t x54 = 1U;
	volatile uint8_t x56 = UINT8_MAX;
	int32_t t13 = 92;

	t13 = ((x53&(x54==x55))-x56);

	if (t13 != -255) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	static volatile int16_t x58 = 221;
	int16_t x59 = -1;
	uint16_t x60 = 0U;
	static int32_t t14 = 3818;

	t14 = ((x57&(x58==x59))-x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -65;

	t15 = ((x61&(x62==x63))-x64);

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -911386254315601LL;
	static uint32_t x66 = UINT32_MAX;
	int32_t x67 = 0;
	int16_t x68 = -205;
	volatile int64_t t16 = -921LL;

	t16 = ((x65&(x66==x67))-x68);

	if (t16 != 205LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 200524648LLU;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	static uint16_t x72 = 2U;
	uint64_t t17 = 20989052737887LLU;

	t17 = ((x69&(x70==x71))-x72);

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x73 = 427271U;
	volatile uint8_t x74 = 3U;
	int16_t x75 = -1;
	static volatile int16_t x76 = INT16_MIN;
	uint32_t t18 = 11U;

	t18 = ((x73&(x74==x75))-x76);

	if (t18 != 32768U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -477214737LL;
	int16_t x78 = 9;
	static uint8_t x79 = 30U;
	int8_t x80 = INT8_MAX;
	int64_t t19 = -76720LL;

	t19 = ((x77&(x78==x79))-x80);

	if (t19 != -127LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 211473LLU;
	int8_t x83 = 5;
	static int64_t x84 = -1LL;
	volatile uint64_t t20 = 333503591811122543LLU;

	t20 = ((x81&(x82==x83))-x84);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 13U;
	uint64_t x86 = 75784537981647LLU;
	static uint32_t x87 = 5991247U;
	int32_t x88 = -229;
	volatile int32_t t21 = -285;

	t21 = ((x85&(x86==x87))-x88);

	if (t21 != 229) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MAX;
	int64_t t22 = 170LL;

	t22 = ((x93&(x94==x95))-x96);

	if (t22 != -32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -2362648;
	static volatile uint8_t x98 = UINT8_MAX;
	uint8_t x99 = 64U;
	int32_t t23 = 7;

	t23 = ((x97&(x98==x99))-x100);

	if (t23 != -54) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = 9LL;
	uint64_t x102 = 56577521229LLU;
	uint16_t x103 = UINT16_MAX;
	uint16_t x104 = 4U;
	static volatile int64_t t24 = 67463301987LL;

	t24 = ((x101&(x102==x103))-x104);

	if (t24 != -4LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -2963858;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = 6;

	t25 = ((x105&(x106==x107))-x108);

	if (t25 != 18446744073709544461LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 1U;
	static int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;
	volatile uint64_t t26 = 1379LLU;

	t26 = ((x109&(x110==x111))-x112);

	if (t26 != 18446104788338103867LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = UINT64_MAX;
	static int32_t x115 = INT32_MIN;
	volatile int32_t t27 = -328;

	t27 = ((x113&(x114==x115))-x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -11;
	int64_t x118 = -854534571110480434LL;
	int64_t x119 = INT64_MIN;
	int32_t t28 = -32877862;

	t28 = ((x117&(x118==x119))-x120);

	if (t28 != 311) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	static volatile int16_t x128 = -8016;
	volatile int32_t t29 = -23713867;

	t29 = ((x125&(x126==x127))-x128);

	if (t29 != 8016) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	static int64_t x131 = INT64_MIN;
	static uint32_t x132 = 80U;
	uint32_t t30 = 1U;

	t30 = ((x129&(x130==x131))-x132);

	if (t30 != 4294967216U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	static uint8_t x134 = UINT8_MAX;
	static uint64_t x136 = UINT64_MAX;

	t31 = ((x133&(x134==x135))-x136);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = 5;
	uint8_t x138 = 1U;
	static uint64_t x139 = 1073943793197196902LLU;
	volatile uint16_t x140 = 72U;
	int32_t t32 = 53;

	t32 = ((x137&(x138==x139))-x140);

	if (t32 != -72) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x142 = 1635U;
	uint16_t x143 = 9443U;
	int64_t x144 = 928LL;

	t33 = ((x141&(x142==x143))-x144);

	if (t33 != 18446744073709550688LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1LL;
	int32_t x146 = -6;
	uint16_t x147 = UINT16_MAX;
	static int32_t x148 = -1;
	int64_t t34 = 2LL;

	t34 = ((x145&(x146==x147))-x148);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x149 = 962977424877758976LLU;
	int64_t x150 = INT64_MIN;
	uint64_t t35 = 5185061630637838917LLU;

	t35 = ((x149&(x150==x151))-x152);

	if (t35 != 18446744073709537386LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = INT64_MIN;
	uint8_t x154 = 57U;
	volatile int64_t x155 = -1LL;
	volatile int8_t x156 = INT8_MIN;
	int64_t t36 = -8585121284216826LL;

	t36 = ((x153&(x154==x155))-x156);

	if (t36 != 128LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = -1;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 3U;
	int8_t x160 = 35;
	static volatile int32_t t37 = -15;

	t37 = ((x157&(x158==x159))-x160);

	if (t37 != -35) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	volatile int32_t x162 = 3268;
	int32_t x163 = INT32_MAX;
	volatile int32_t t38 = -22467455;

	t38 = ((x161&(x162==x163))-x164);

	if (t38 != -26519) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 28U;
	uint16_t x166 = 4U;
	volatile int8_t x167 = 0;
	static int16_t x168 = -1;
	static uint32_t t39 = 5U;

	t39 = ((x165&(x166==x167))-x168);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MAX;
	uint16_t x170 = 4878U;
	uint64_t x171 = UINT64_MAX;
	static uint8_t x172 = 31U;
	volatile int64_t t40 = -1061516480908472LL;

	t40 = ((x169&(x170==x171))-x172);

	if (t40 != -31LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x174 = INT32_MAX;
	uint64_t x175 = 165665LLU;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t41 = 1605093;

	t41 = ((x173&(x174==x175))-x176);

	if (t41 != -255) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x178 = 239410819296LLU;
	static volatile uint64_t x179 = 25724489LLU;
	int16_t x180 = INT16_MAX;
	int32_t t42 = -393093;

	t42 = ((x177&(x178==x179))-x180);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = INT64_MIN;
	int32_t x184 = 408507;

	t43 = ((x181&(x182==x183))-x184);

	if (t43 != -408507LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MAX;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t44 = 284601312899029651LLU;

	t44 = ((x185&(x186==x187))-x188);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	volatile int8_t x190 = INT8_MIN;
	int32_t x191 = 26;
	uint16_t x192 = 505U;
	volatile int64_t t45 = 45LL;

	t45 = ((x189&(x190==x191))-x192);

	if (t45 != -505LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x193 = -1;
	uint16_t x194 = 0U;
	static int8_t x195 = INT8_MAX;
	int16_t x196 = -611;
	volatile int32_t t46 = -29264668;

	t46 = ((x193&(x194==x195))-x196);

	if (t46 != 611) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x201 = INT8_MIN;
	int64_t x202 = -1LL;
	static int64_t x203 = INT64_MIN;
	volatile uint32_t x204 = 11U;
	static volatile uint32_t t47 = 18U;

	t47 = ((x201&(x202==x203))-x204);

	if (t47 != 4294967285U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x209 = 44U;
	int16_t x210 = 218;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;
	uint32_t t48 = 208353469U;

	t48 = ((x209&(x210==x211))-x212);

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x217 = UINT32_MAX;
	uint8_t x218 = 31U;
	int16_t x219 = -9949;
	int16_t x220 = INT16_MAX;
	uint32_t t49 = 2U;

	t49 = ((x217&(x218==x219))-x220);

	if (t49 != 4294934529U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -1;
	static int8_t x222 = 1;
	int8_t x224 = INT8_MIN;
	volatile int32_t t50 = 1;

	t50 = ((x221&(x222==x223))-x224);

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x227 = -36;
	volatile int8_t x228 = -1;
	int32_t t51 = -52109;

	t51 = ((x225&(x226==x227))-x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = UINT8_MAX;
	uint32_t x230 = 4U;
	volatile uint16_t x231 = 8U;
	int32_t x232 = 2802;
	volatile int32_t t52 = 37045;

	t52 = ((x229&(x230==x231))-x232);

	if (t52 != -2802) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x234 = 7168195U;
	int16_t x236 = -1;
	static volatile int64_t t53 = -893922328LL;

	t53 = ((x233&(x234==x235))-x236);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	int8_t x239 = -4;
	int8_t x240 = -1;

	t54 = ((x237&(x238==x239))-x240);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x242 = 1;
	int64_t x243 = -1LL;
	static uint32_t x244 = 14U;
	static volatile uint32_t t55 = 1518U;

	t55 = ((x241&(x242==x243))-x244);

	if (t55 != 4294967282U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x245 = INT8_MIN;
	static int8_t x246 = 43;
	volatile int8_t x247 = 27;
	int64_t x248 = INT64_MAX;
	volatile int64_t t56 = -1663708214281940172LL;

	t56 = ((x245&(x246==x247))-x248);

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x249 = 51796231LLU;
	uint64_t x250 = 10LLU;
	int64_t x251 = 3701053750844316LL;
	static uint8_t x252 = UINT8_MAX;
	volatile uint64_t t57 = 316LLU;

	t57 = ((x249&(x250==x251))-x252);

	if (t57 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x254 = 44U;
	static uint32_t x255 = 487930U;
	int32_t x256 = -1;

	t58 = ((x253&(x254==x255))-x256);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = -1LL;
	volatile uint16_t x258 = 0U;
	int64_t t59 = 0LL;

	t59 = ((x257&(x258==x259))-x260);

	if (t59 != 2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MAX;
	uint64_t x268 = 1LLU;

	t60 = ((x265&(x266==x267))-x268);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x270 = 8U;
	static volatile int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t61 = 768U;

	t61 = ((x269&(x270==x271))-x272);

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = 61068U;
	uint32_t x274 = 563U;
	static volatile uint32_t x276 = 119749600U;
	uint32_t t62 = 92U;

	t62 = ((x273&(x274==x275))-x276);

	if (t62 != 4175217696U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = -1;
	volatile uint16_t x279 = 0U;
	volatile int16_t x280 = 28;
	int32_t t63 = 1;

	t63 = ((x277&(x278==x279))-x280);

	if (t63 != -28) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x282 = INT8_MAX;
	static volatile int32_t x283 = INT32_MIN;
	int32_t t64 = -1;

	t64 = ((x281&(x282==x283))-x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MIN;
	static int8_t x286 = 4;
	int16_t x287 = -1;
	int32_t t65 = -1149256;

	t65 = ((x285&(x286==x287))-x288);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = 39;
	uint16_t x290 = UINT16_MAX;
	volatile int8_t x291 = INT8_MIN;
	static volatile int8_t x292 = INT8_MIN;
	volatile int32_t t66 = 62893;

	t66 = ((x289&(x290==x291))-x292);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x293 = 3U;
	static int32_t x294 = 420268;
	int16_t x295 = INT16_MIN;
	volatile uint32_t x296 = 310U;
	uint32_t t67 = 7512U;

	t67 = ((x293&(x294==x295))-x296);

	if (t67 != 4294966986U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = UINT32_MAX;
	uint16_t x298 = UINT16_MAX;
	int8_t x300 = -1;
	volatile uint32_t t68 = 2U;

	t68 = ((x297&(x298==x299))-x300);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t69 = -102500340;

	t69 = ((x305&(x306==x307))-x308);

	if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x309 = INT16_MIN;
	uint8_t x310 = 2U;
	static volatile int32_t x311 = INT32_MIN;
	uint64_t x312 = 15798LLU;
	volatile uint64_t t70 = 1413696930123002LLU;

	t70 = ((x309&(x310==x311))-x312);

	if (t70 != 18446744073709535818LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x313 = -332;
	int64_t x314 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	volatile uint16_t x316 = 3U;
	volatile int32_t t71 = 130110;

	t71 = ((x313&(x314==x315))-x316);

	if (t71 != -3) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x317 = -567338579;
	int8_t x318 = -1;
	uint16_t x319 = 121U;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t72 = 60509284;

	t72 = ((x317&(x318==x319))-x320);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = INT8_MIN;
	volatile uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 3U;
	volatile uint32_t t73 = 1782997567U;

	t73 = ((x321&(x322==x323))-x324);

	if (t73 != 4216149165U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	volatile int16_t x332 = INT16_MIN;
	int32_t t74 = -30164419;

	t74 = ((x329&(x330==x331))-x332);

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x333 = INT8_MAX;
	uint64_t x334 = 48794764450LLU;
	int32_t t75 = 118;

	t75 = ((x333&(x334==x335))-x336);

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = 683U;
	int64_t x338 = -1LL;
	static int16_t x339 = -637;
	static int64_t x340 = INT64_MAX;

	t76 = ((x337&(x338==x339))-x340);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x341 = -1;
	static uint64_t x342 = 10685772604334LLU;
	static int64_t x343 = INT64_MIN;

	t77 = ((x341&(x342==x343))-x344);

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x345 = INT8_MIN;
	int16_t x346 = -1;
	int16_t x347 = INT16_MAX;

	t78 = ((x345&(x346==x347))-x348);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x351 = INT16_MIN;
	volatile int8_t x352 = -54;
	volatile int64_t t79 = 1812784979342LL;

	t79 = ((x349&(x350==x351))-x352);

	if (t79 != 54LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = UINT64_MAX;
	uint64_t x355 = 5252LLU;
	volatile int16_t x356 = INT16_MAX;
	static uint64_t t80 = 25LLU;

	t80 = ((x353&(x354==x355))-x356);

	if (t80 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x358 = -17804618LL;
	static uint8_t x359 = 14U;
	static int8_t x360 = -56;
	volatile int32_t t81 = 32;

	t81 = ((x357&(x358==x359))-x360);

	if (t81 != 56) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x361 = 0U;
	int8_t x362 = INT8_MAX;
	uint64_t x363 = 32015765237LLU;
	volatile int8_t x364 = -1;
	volatile int32_t t82 = 101967140;

	t82 = ((x361&(x362==x363))-x364);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 29968U;
	int64_t x366 = INT64_MIN;
	uint32_t t83 = 81778U;

	t83 = ((x365&(x366==x367))-x368);

	if (t83 != 4294945226U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x369 = INT32_MIN;
	int16_t x371 = -1;
	static volatile int16_t x372 = INT16_MIN;
	volatile int32_t t84 = -22297973;

	t84 = ((x369&(x370==x371))-x372);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = 5501U;
	volatile int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = 843441LLU;
	volatile uint64_t t85 = 13291198584447024LLU;

	t85 = ((x373&(x374==x375))-x376);

	if (t85 != 18446744073708708176LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MAX;
	int64_t x379 = -1LL;
	volatile int8_t x380 = INT8_MAX;
	static uint64_t t86 = 62086938595464LLU;

	t86 = ((x377&(x378==x379))-x380);

	if (t86 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x381 = 1830364U;
	int64_t x382 = INT64_MIN;
	uint32_t x383 = UINT32_MAX;
	uint64_t x384 = 2203706214693367180LLU;
	volatile uint64_t t87 = 40LLU;

	t87 = ((x381&(x382==x383))-x384);

	if (t87 != 16243037859016184436LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int16_t x387 = -1;
	uint8_t x388 = UINT8_MAX;
	int32_t t88 = 26405007;

	t88 = ((x385&(x386==x387))-x388);

	if (t88 != -255) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x393 = 36U;
	int64_t x394 = 23014LL;
	uint16_t x395 = 1433U;
	volatile uint16_t x396 = 9U;
	uint32_t t89 = 12183339U;

	t89 = ((x393&(x394==x395))-x396);

	if (t89 != 4294967287U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x398 = INT64_MIN;
	volatile int8_t x399 = 2;
	volatile int64_t t90 = -2216272884372485LL;

	t90 = ((x397&(x398==x399))-x400);

	if (t90 != 122LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x401 = -1;
	int16_t x403 = INT16_MAX;
	static int8_t x404 = -1;
	volatile int32_t t91 = 13057;

	t91 = ((x401&(x402==x403))-x404);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = 11U;
	static int64_t x407 = 201LL;
	uint16_t x408 = UINT16_MAX;
	uint32_t t92 = 492492545U;

	t92 = ((x405&(x406==x407))-x408);

	if (t92 != 4294901761U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x409 = INT16_MAX;
	uint16_t x410 = 7565U;
	int64_t x412 = -444007128729LL;

	t93 = ((x409&(x410==x411))-x412);

	if (t93 != 444007128729LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x413 = UINT64_MAX;
	int32_t x414 = 60;
	volatile int32_t x416 = INT32_MAX;
	uint64_t t94 = 322027987513LLU;

	t94 = ((x413&(x414==x415))-x416);

	if (t94 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x417 = UINT8_MAX;
	volatile uint8_t x418 = UINT8_MAX;
	static int8_t x419 = INT8_MAX;
	int32_t x420 = 5;
	int32_t t95 = 3187;

	t95 = ((x417&(x418==x419))-x420);

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = 11650150616923008LL;
	static int8_t x422 = INT8_MAX;
	int8_t x423 = INT8_MAX;
	static int64_t x424 = INT64_MAX;

	t96 = ((x421&(x422==x423))-x424);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x425 = -1LL;
	int16_t x426 = INT16_MIN;
	uint32_t x427 = UINT32_MAX;
	int64_t t97 = 224338967514869LL;

	t97 = ((x425&(x426==x427))-x428);

	if (t97 != -127LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x433 = -1LL;
	volatile uint32_t x434 = 68657890U;
	int64_t x435 = -1LL;
	volatile int64_t t98 = 13099582LL;

	t98 = ((x433&(x434==x435))-x436);

	if (t98 != 6LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x438 = INT16_MIN;
	uint8_t x440 = UINT8_MAX;

	t99 = ((x437&(x438==x439))-x440);

	if (t99 != -255) { NG(); } else { ; }
	
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

