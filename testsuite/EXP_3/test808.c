#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
uint16_t x4 = UINT16_MAX;
volatile int32_t t1 = 53;
static uint64_t x11 = 9497478115650LLU;
volatile uint64_t t2 = 33703111819LLU;
volatile uint8_t x18 = 20U;
int64_t x31 = INT64_MIN;
uint32_t x38 = 3U;
int8_t x53 = 1;
uint8_t x55 = 17U;
int64_t x58 = 1444031286353426853LL;
volatile uint16_t x59 = UINT16_MAX;
int8_t x63 = INT8_MAX;
volatile uint64_t t15 = 259785979103LLU;
static int32_t x67 = INT32_MIN;
int64_t x81 = INT64_MAX;
static int64_t x83 = INT64_MIN;
volatile int64_t t20 = 3201310715LL;
static int32_t x85 = -188894;
volatile int16_t x87 = INT16_MIN;
static int16_t x90 = INT16_MIN;
uint16_t x98 = 11319U;
int8_t x102 = INT8_MIN;
uint16_t x110 = 0U;
int64_t t25 = -74203514174444LL;
uint64_t x119 = 2532447859915405266LLU;
static uint8_t x120 = UINT8_MAX;
int16_t x121 = INT16_MIN;
int64_t x122 = -1LL;
int32_t x124 = INT32_MIN;
volatile int32_t x133 = INT32_MAX;
uint16_t x134 = 1U;
static int32_t x137 = INT32_MAX;
static int64_t x150 = -1LL;
int16_t x152 = INT16_MIN;
uint32_t x158 = 101U;
static volatile int32_t t39 = 69;
uint64_t x174 = UINT64_MAX;
static volatile uint64_t t41 = 165869622LLU;
uint64_t t42 = 4128LLU;
static int64_t x184 = 1595099950LL;
int16_t x190 = INT16_MIN;
int64_t x191 = INT64_MIN;
volatile uint32_t x194 = 1682U;
volatile uint64_t t46 = 9LLU;
volatile uint64_t x206 = UINT64_MAX;
int8_t x207 = INT8_MAX;
int64_t x208 = INT64_MIN;
volatile uint64_t t48 = 2891811LLU;
int16_t x210 = 3;
int16_t x212 = INT16_MIN;
int16_t x213 = -43;
volatile int16_t x220 = INT16_MIN;
static uint64_t x221 = UINT64_MAX;
volatile uint64_t t52 = 29437LLU;
volatile int8_t x228 = INT8_MIN;
int8_t x229 = INT8_MIN;
uint64_t x230 = 204220367030740LLU;
int16_t x237 = INT16_MAX;
uint32_t x242 = UINT32_MAX;
int16_t x247 = INT16_MIN;
volatile uint16_t x257 = 46U;
int64_t t60 = 10LL;
uint64_t t61 = 737493591829453LLU;
volatile int32_t x267 = INT32_MIN;
static int16_t x269 = INT16_MAX;
volatile int16_t x273 = 6138;
int64_t x280 = INT64_MAX;
static volatile int64_t t65 = -1LL;
volatile int8_t x288 = -3;
volatile int8_t x295 = INT8_MAX;
uint64_t x296 = 2115006428219351804LLU;
volatile uint64_t t69 = 1825657006LLU;
static int16_t x299 = -2410;
uint64_t x300 = UINT64_MAX;
uint64_t t70 = 23851364474LLU;
uint32_t x305 = 205320U;
static int32_t t73 = 34347179;
static uint8_t x318 = UINT8_MAX;
int64_t x324 = INT64_MAX;
int8_t x326 = INT8_MIN;
uint32_t x341 = 620389U;
int64_t x342 = INT64_MIN;
int16_t x343 = INT16_MAX;
static int64_t x344 = INT64_MAX;
int8_t x354 = -1;
volatile int16_t x355 = 1809;
static volatile uint8_t x357 = 0U;
uint64_t x366 = 302403LLU;
int64_t t87 = 370898451082LL;
int16_t x373 = -1;
int32_t x394 = 64506080;
static uint16_t x397 = 4U;
static int8_t x398 = INT8_MIN;
volatile int32_t t93 = 23304;
int8_t x401 = 35;
static volatile int32_t t94 = 245;
static volatile int64_t x405 = INT64_MIN;
int64_t x410 = INT64_MIN;
int32_t x413 = -454;
int16_t x416 = 3244;
volatile int32_t x420 = INT32_MAX;


void f0(void) {
	int16_t x2 = 1146;
	uint16_t x3 = 86U;
	volatile uint32_t t0 = 67110948U;

	t0 = ((x1&x2)-(x3%x4));

	if (t0 != 1060U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 87U;
	static int32_t x6 = -12645864;
	uint8_t x7 = 16U;
	volatile int16_t x8 = INT16_MIN;

	t1 = ((x5&x6)-(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile uint8_t x10 = 18U;
	int32_t x12 = -1;

	t2 = ((x9&x10)-(x11%x12));

	if (t2 != 18446734576231435984LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -6;
	int64_t x14 = INT64_MAX;
	static volatile int64_t x15 = 3398376LL;
	int64_t x16 = -1139429463067734694LL;
	volatile int64_t t3 = -11964915570653007LL;

	t3 = ((x13&x14)-(x15%x16));

	if (t3 != 9223372036851377426LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 169395618U;
	int8_t x19 = 3;
	int16_t x20 = INT16_MIN;
	volatile uint32_t t4 = 8U;

	t4 = ((x17&x18)-(x19%x20));

	if (t4 != 4294967293U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -25540LL;
	uint64_t x22 = 299403212LLU;
	volatile int8_t x23 = INT8_MIN;
	static volatile int16_t x24 = -1;
	volatile uint64_t t5 = 2529839LLU;

	t5 = ((x21&x22)-(x23%x24));

	if (t5 != 299402252LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	int8_t x27 = -62;
	static uint64_t x28 = 12089699LLU;
	static volatile uint64_t t6 = 3008101LLU;

	t6 = ((x25&x26)-(x27%x28));

	if (t6 != 18446744071558842404LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	volatile uint8_t x30 = 0U;
	static volatile int16_t x32 = INT16_MIN;
	volatile int64_t t7 = -60472897054LL;

	t7 = ((x29&x30)-(x31%x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 3408U;
	static uint32_t x34 = 2U;
	int16_t x35 = INT16_MAX;
	static int16_t x36 = INT16_MIN;
	volatile uint32_t t8 = 1U;

	t8 = ((x33&x34)-(x35%x36));

	if (t8 != 4294934529U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 22684867U;
	static uint16_t x39 = 2372U;
	volatile uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 717U;

	t9 = ((x37&x38)-(x39%x40));

	if (t9 != 4294964927U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	int64_t x42 = -1LL;
	int64_t x43 = 20LL;
	static volatile uint64_t x44 = 470036LLU;
	volatile uint64_t t10 = 4003400749162LLU;

	t10 = ((x41&x42)-(x43%x44));

	if (t10 != 32747LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 25;
	uint16_t x46 = 3530U;
	volatile int64_t x47 = INT64_MAX;
	int64_t x48 = 132LL;
	int64_t t11 = -4LL;

	t11 = ((x45&x46)-(x47%x48));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 17887634U;
	int64_t x50 = -1LL;
	static int32_t x51 = INT32_MAX;
	static volatile uint8_t x52 = UINT8_MAX;
	int64_t t12 = -37LL;

	t12 = ((x49&x50)-(x51%x52));

	if (t12 != 17887507LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x54 = -1483417676LL;
	static volatile int32_t x56 = -107137017;
	static volatile int64_t t13 = 4431331135661059090LL;

	t13 = ((x53&x54)-(x55%x56));

	if (t13 != -17LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = INT16_MIN;
	int32_t x60 = -521;
	volatile int64_t t14 = -22848376012988LL;

	t14 = ((x57&x58)-(x59%x60));

	if (t14 != 1444031286353395302LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 832708113327381LLU;
	static volatile uint32_t x62 = UINT32_MAX;
	volatile int8_t x64 = INT8_MIN;

	t15 = ((x61&x62)-(x63%x64));

	if (t15 != 4148946070LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = 29408;
	int8_t x68 = -2;
	static volatile int32_t t16 = 47;

	t16 = ((x65&x66)-(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MAX;
	uint8_t x70 = UINT8_MAX;
	static uint32_t x71 = UINT32_MAX;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = 171968LL;

	t17 = ((x69&x70)-(x71%x72));

	if (t17 != -4294967040LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	int64_t x74 = 171LL;
	int8_t x75 = -7;
	volatile int32_t x76 = 3;
	static volatile int64_t t18 = 286713664764LL;

	t18 = ((x73&x74)-(x75%x76));

	if (t18 != 172LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 16U;
	volatile int64_t x78 = -114774442979582LL;
	volatile uint8_t x79 = UINT8_MAX;
	volatile uint8_t x80 = 4U;
	volatile int64_t t19 = 4617LL;

	t19 = ((x77&x78)-(x79%x80));

	if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	static int16_t x84 = -1;

	t20 = ((x81&x82)-(x83%x84));

	if (t20 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = 0U;
	int8_t x88 = -1;
	int32_t t21 = -3195529;

	t21 = ((x85&x86)-(x87%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -1;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -187;

	t22 = ((x89&x90)-(x91%x92));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x97 = 322534281U;
	int64_t x99 = INT64_MIN;
	static volatile int16_t x100 = -7;
	int64_t t23 = -4441547832526498622LL;

	t23 = ((x97&x98)-(x99%x100));

	if (t23 != 10242LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	volatile uint8_t x103 = 1U;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t24 = 18LL;

	t24 = ((x101&x102)-(x103%x104));

	if (t24 != 127LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = 31886531871LL;
	int8_t x111 = INT8_MIN;
	int8_t x112 = -53;

	t25 = ((x109&x110)-(x111%x112));

	if (t25 != 22LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 22526741666LLU;
	static uint8_t x114 = 6U;
	uint16_t x115 = 27U;
	uint16_t x116 = 45U;
	static uint64_t t26 = 57788LLU;

	t26 = ((x113&x114)-(x115%x116));

	if (t26 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 15U;
	int16_t x118 = 0;
	volatile uint64_t t27 = 79743761618LLU;

	t27 = ((x117&x118)-(x119%x120));

	if (t27 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x123 = INT16_MIN;
	static volatile int64_t t28 = -2330417225766227LL;

	t28 = ((x121&x122)-(x123%x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	volatile int8_t x126 = -1;
	static uint64_t x127 = 6193331501LLU;
	volatile uint16_t x128 = 1680U;
	static uint64_t t29 = 1LLU;

	t29 = ((x125&x126)-(x127%x128));

	if (t29 != 18446744073709550194LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	static int64_t x130 = INT64_MIN;
	int16_t x131 = 0;
	int8_t x132 = -14;
	volatile int64_t t30 = -285584061433397448LL;

	t30 = ((x129&x130)-(x131%x132));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x135 = -146;
	int64_t x136 = -120065042413805LL;
	volatile int64_t t31 = 1LL;

	t31 = ((x133&x134)-(x135%x136));

	if (t31 != 147LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x138 = -1;
	uint8_t x139 = 1U;
	int16_t x140 = INT16_MAX;
	int32_t t32 = 507740306;

	t32 = ((x137&x138)-(x139%x140));

	if (t32 != 2147483646) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	int32_t x143 = 1162;
	int64_t x144 = -1LL;
	int64_t t33 = 115077033LL;

	t33 = ((x141&x142)-(x143%x144));

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = 843589;
	int16_t x146 = INT16_MIN;
	int16_t x147 = 1;
	volatile int16_t x148 = INT16_MIN;
	int32_t t34 = 289718;

	t34 = ((x145&x146)-(x147%x148));

	if (t34 != 819199) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x151 = INT64_MIN;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x149&x150)-(x151%x152));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	int64_t x154 = INT64_MAX;
	int32_t x155 = -1;
	uint32_t x156 = UINT32_MAX;
	int64_t t36 = INT64_MAX;

	t36 = ((x153&x154)-(x155%x156));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = -1;
	int64_t x159 = INT64_MAX;
	int32_t x160 = INT32_MAX;
	int64_t t37 = -24731277LL;

	t37 = ((x157&x158)-(x159%x160));

	if (t37 != 100LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MIN;
	int8_t x162 = -14;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	volatile int64_t t38 = 0LL;

	t38 = ((x161&x162)-(x163%x164));

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	int8_t x166 = INT8_MAX;
	volatile int8_t x167 = INT8_MIN;
	uint8_t x168 = 5U;

	t39 = ((x165&x166)-(x167%x168));

	if (t39 != 130) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x169 = 3169U;
	uint32_t x170 = UINT32_MAX;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = INT16_MIN;
	static uint32_t t40 = 51U;

	t40 = ((x169&x170)-(x171%x172));

	if (t40 != 4294937698U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 241U;
	static uint32_t x175 = UINT32_MAX;
	int8_t x176 = -1;

	t41 = ((x173&x174)-(x175%x176));

	if (t41 != 241LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = -1291;
	uint64_t x179 = 24LLU;
	int64_t x180 = 6995233006605790LL;

	t42 = ((x177&x178)-(x179%x180));

	if (t42 != 18446744073709550184LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	static volatile int64_t x182 = 310553257549877LL;
	int32_t x183 = INT32_MAX;
	volatile int64_t t43 = -488407LL;

	t43 = ((x181&x182)-(x183%x184));

	if (t43 != -552375452LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = -7;
	int16_t x187 = -1;
	volatile int16_t x188 = INT16_MAX;
	int32_t t44 = -285080601;

	t44 = ((x185&x186)-(x187%x188));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	int32_t x192 = -1;
	int64_t t45 = -25985633254132968LL;

	t45 = ((x189&x190)-(x191%x192));

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = 0;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 6580LLU;

	t46 = ((x193&x194)-(x195%x196));

	if (t46 != 18446744073709546148LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = -1;
	int16_t x202 = INT16_MIN;
	int32_t x203 = INT32_MIN;
	volatile int64_t x204 = -1LL;
	volatile int64_t t47 = -450LL;

	t47 = ((x201&x202)-(x203%x204));

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x205 = 73U;

	t48 = ((x205&x206)-(x207%x208));

	if (t48 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = 7749938LL;
	volatile int8_t x211 = INT8_MAX;
	volatile int64_t t49 = 52071LL;

	t49 = ((x209&x210)-(x211%x212));

	if (t49 != -125LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t50 = 52170;

	t50 = ((x213&x214)-(x215%x216));

	if (t50 != -32895) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = -2088;
	int32_t t51 = 5075;

	t51 = ((x217&x218)-(x219%x220));

	if (t51 != 67496) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x222 = UINT16_MAX;
	int8_t x223 = -1;
	int32_t x224 = -1;

	t52 = ((x221&x222)-(x223%x224));

	if (t52 != 65535LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -20424162358004LL;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	static int64_t t53 = 13736945045501824LL;

	t53 = ((x225&x226)-(x227%x228));

	if (t53 != -20424162358015LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MIN;
	uint64_t t54 = 5854684527275006LLU;

	t54 = ((x229&x230)-(x231%x232));

	if (t54 != 204220367030529LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = INT64_MAX;
	static uint16_t x239 = 10350U;
	int8_t x240 = INT8_MIN;
	volatile int64_t t55 = 286LL;

	t55 = ((x237&x238)-(x239%x240));

	if (t55 != 32657LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -1;
	volatile int16_t x243 = 11274;
	int16_t x244 = 7;
	volatile uint32_t t56 = 16662266U;

	t56 = ((x241&x242)-(x243%x244));

	if (t56 != 4294967291U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = -1LL;
	uint32_t x246 = 15278533U;
	uint8_t x248 = 2U;
	int64_t t57 = 19128LL;

	t57 = ((x245&x246)-(x247%x248));

	if (t57 != 15278533LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x249 = 5;
	static uint32_t x250 = UINT32_MAX;
	static uint8_t x251 = 10U;
	static int16_t x252 = -6735;
	volatile uint32_t t58 = 5697197U;

	t58 = ((x249&x250)-(x251%x252));

	if (t58 != 4294967291U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x253 = INT64_MAX;
	static volatile int16_t x254 = -1;
	uint64_t x255 = 214821241LLU;
	uint32_t x256 = 1985452U;
	volatile uint64_t t59 = 641LLU;

	t59 = ((x253&x254)-(x255%x256));

	if (t59 != 9223372036854383382LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = -793345678LL;
	uint8_t x260 = 61U;

	t60 = ((x257&x258)-(x259%x260));

	if (t60 != 98LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x261 = INT8_MIN;
	uint64_t x262 = UINT64_MAX;
	uint16_t x263 = 794U;
	uint32_t x264 = 24013694U;

	t61 = ((x261&x262)-(x263%x264));

	if (t61 != 18446744073709550694LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1LL;
	volatile uint32_t x266 = UINT32_MAX;
	uint64_t x268 = 12LLU;
	static uint64_t t62 = 1392LLU;

	t62 = ((x265&x266)-(x267%x268));

	if (t62 != 4294967287LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x270 = INT64_MAX;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = -1LL;
	volatile int64_t t63 = -108985894439LL;

	t63 = ((x269&x270)-(x271%x272));

	if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x274 = -1;
	volatile uint64_t x275 = 250LLU;
	uint32_t x276 = 487U;
	volatile uint64_t t64 = 25303LLU;

	t64 = ((x273&x274)-(x275%x276));

	if (t64 != 5888LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;

	t65 = ((x277&x278)-(x279%x280));

	if (t65 != 65536LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x281 = -1;
	int8_t x282 = -2;
	int16_t x283 = -258;
	static int32_t x284 = -29;
	int32_t t66 = 17441;

	t66 = ((x281&x282)-(x283%x284));

	if (t66 != 24) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = INT64_MAX;
	uint8_t x287 = 1U;
	volatile int64_t t67 = -11LL;

	t67 = ((x285&x286)-(x287%x288));

	if (t67 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = -361;
	int64_t x290 = INT64_MIN;
	volatile uint64_t x291 = 106LLU;
	int64_t x292 = INT64_MIN;
	static uint64_t t68 = 120657LLU;

	t68 = ((x289&x290)-(x291%x292));

	if (t68 != 9223372036854775702LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -6;
	volatile int16_t x294 = 648;

	t69 = ((x293&x294)-(x295%x296));

	if (t69 != 521LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = 690U;
	volatile int64_t x298 = -8253242250729LL;

	t70 = ((x297&x298)-(x299%x300));

	if (t70 != 2940LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = 43;
	uint32_t x302 = UINT32_MAX;
	uint8_t x303 = 8U;
	int16_t x304 = INT16_MIN;
	volatile uint32_t t71 = 34U;

	t71 = ((x301&x302)-(x303%x304));

	if (t71 != 35U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MAX;
	int32_t x308 = -4940524;
	volatile uint32_t t72 = 3196U;

	t72 = ((x305&x306)-(x307%x308));

	if (t72 != 4291671065U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	uint8_t x312 = 14U;

	t73 = ((x309&x310)-(x311%x312));

	if (t73 != 32633) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = 15708;
	volatile uint16_t x314 = UINT16_MAX;
	static uint8_t x315 = UINT8_MAX;
	static int16_t x316 = INT16_MIN;
	int32_t t74 = -128018;

	t74 = ((x313&x314)-(x315%x316));

	if (t74 != 15453) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x317 = UINT32_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	static uint16_t x320 = 16U;
	volatile uint64_t t75 = 89843552261LLU;

	t75 = ((x317&x318)-(x319%x320));

	if (t75 != 240LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = 6172;
	int8_t x322 = INT8_MAX;
	int32_t x323 = INT32_MAX;
	static volatile int64_t t76 = 16063LL;

	t76 = ((x321&x322)-(x323%x324));

	if (t76 != -2147483619LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = 0;
	uint8_t x327 = 0U;
	int8_t x328 = INT8_MIN;
	static int32_t t77 = -2377;

	t77 = ((x325&x326)-(x327%x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MIN;
	int8_t x335 = 0;
	int32_t x336 = INT32_MAX;
	volatile int64_t t78 = 4000659877972LL;

	t78 = ((x333&x334)-(x335%x336));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x337 = -1LL;
	volatile int32_t x338 = INT32_MAX;
	volatile int32_t x339 = INT32_MAX;
	static int16_t x340 = INT16_MAX;
	int64_t t79 = 4903LL;

	t79 = ((x337&x338)-(x339%x340));

	if (t79 != 2147483646LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t t80 = -1200291891439997170LL;

	t80 = ((x341&x342)-(x343%x344));

	if (t80 != -32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x345 = 2629U;
	uint16_t x346 = 65U;
	static volatile uint32_t x347 = 1554682762U;
	uint32_t x348 = 2289U;
	uint32_t t81 = 47U;

	t81 = ((x345&x346)-(x347%x348));

	if (t81 != 4294966532U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = 57436717LLU;
	uint64_t x350 = 668007756LLU;
	int32_t x351 = -1;
	static uint8_t x352 = 56U;
	volatile uint64_t t82 = 293329630LLU;

	t82 = ((x349&x350)-(x351%x352));

	if (t82 != 54552589LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x353 = 821188352164LLU;
	volatile int32_t x356 = 88012;
	uint64_t t83 = 29905799810155117LLU;

	t83 = ((x353&x354)-(x355%x356));

	if (t83 != 821188350355LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x358 = INT32_MIN;
	static int32_t x359 = 4890;
	static uint16_t x360 = 11U;
	static volatile int32_t t84 = -3;

	t84 = ((x357&x358)-(x359%x360));

	if (t84 != -6) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x361 = 30683U;
	int16_t x362 = -269;
	int32_t x363 = INT32_MIN;
	static uint16_t x364 = UINT16_MAX;
	static int32_t t85 = -71854738;

	t85 = ((x361&x362)-(x363%x364));

	if (t85 != 63187) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x365 = 1053319471U;
	int16_t x367 = 13768;
	volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t86 = 14555193673LLU;

	t86 = ((x365&x366)-(x367%x368));

	if (t86 != 187LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	volatile int64_t x371 = INT64_MIN;
	volatile int64_t x372 = -1LL;

	t87 = ((x369&x370)-(x371%x372));

	if (t87 != 4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x374 = 17U;
	uint8_t x375 = 28U;
	int8_t x376 = 7;
	volatile int32_t t88 = 5802309;

	t88 = ((x373&x374)-(x375%x376));

	if (t88 != 17) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x377 = 8;
	static uint32_t x378 = 165617785U;
	uint16_t x379 = 1U;
	static volatile int16_t x380 = INT16_MIN;
	volatile uint32_t t89 = 0U;

	t89 = ((x377&x378)-(x379%x380));

	if (t89 != 7U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x385 = UINT16_MAX;
	uint16_t x386 = UINT16_MAX;
	static uint8_t x387 = UINT8_MAX;
	static volatile uint16_t x388 = 207U;
	volatile int32_t t90 = 219728681;

	t90 = ((x385&x386)-(x387%x388));

	if (t90 != 65487) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x389 = INT64_MAX;
	static uint16_t x390 = UINT16_MAX;
	volatile int8_t x391 = INT8_MIN;
	uint16_t x392 = 69U;
	volatile int64_t t91 = -45LL;

	t91 = ((x389&x390)-(x391%x392));

	if (t91 != 65594LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MIN;
	volatile int64_t x395 = 2537017LL;
	volatile int64_t x396 = INT64_MIN;
	int64_t t92 = -114175LL;

	t92 = ((x393&x394)-(x395%x396));

	if (t92 != 61950407LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x399 = UINT8_MAX;
	static int8_t x400 = INT8_MIN;

	t93 = ((x397&x398)-(x399%x400));

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x402 = -1;
	uint16_t x403 = 3U;
	uint16_t x404 = 981U;

	t94 = ((x401&x402)-(x403%x404));

	if (t94 != 32) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x406 = 10;
	uint32_t x407 = UINT32_MAX;
	static int32_t x408 = -106625800;
	volatile int64_t t95 = -25756338040LL;

	t95 = ((x405&x406)-(x407%x408));

	if (t95 != -106625799LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = INT32_MAX;
	volatile uint8_t x411 = UINT8_MAX;
	volatile int64_t x412 = -32703357957637LL;
	int64_t t96 = -3279358192LL;

	t96 = ((x409&x410)-(x411%x412));

	if (t96 != -255LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x414 = UINT32_MAX;
	uint16_t x415 = 264U;
	volatile uint32_t t97 = 95792276U;

	t97 = ((x413&x414)-(x415%x416));

	if (t97 != 4294966578U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	int16_t x419 = -17;
	volatile int32_t t98 = -11;

	t98 = ((x417&x418)-(x419%x420));

	if (t98 != -2147483631) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = UINT32_MAX;
	static uint16_t x422 = 157U;
	uint8_t x423 = UINT8_MAX;
	static int8_t x424 = INT8_MIN;
	volatile uint32_t t99 = 3819839U;

	t99 = ((x421&x422)-(x423%x424));

	if (t99 != 30U) { NG(); } else { ; }
	
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

