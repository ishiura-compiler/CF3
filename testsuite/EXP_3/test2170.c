#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 15666369;
int64_t x8 = INT64_MAX;
int16_t x11 = INT16_MIN;
static int64_t t2 = 965063113658349LL;
int16_t x15 = -1;
uint64_t x19 = UINT64_MAX;
uint64_t t4 = UINT64_MAX;
volatile int64_t x26 = -1LL;
volatile int32_t x28 = -10592231;
uint64_t t6 = 5799102548LLU;
int8_t x31 = INT8_MAX;
int8_t x35 = -15;
volatile int8_t x44 = INT8_MAX;
int64_t t10 = INT64_MAX;
int64_t t11 = 81LL;
volatile uint32_t x49 = UINT32_MAX;
int8_t x53 = -1;
volatile int8_t x58 = -48;
int32_t x62 = 5;
volatile uint32_t t15 = 11253166U;
uint64_t x65 = 4431428969183752265LLU;
int64_t x66 = INT64_MIN;
int16_t x68 = INT16_MIN;
int16_t x81 = INT16_MIN;
int16_t x94 = 1;
int16_t x95 = 26;
static int16_t x100 = -18;
static int8_t x102 = INT8_MAX;
volatile int16_t x104 = INT16_MAX;
int64_t x108 = INT64_MAX;
int64_t t28 = -14683324LL;
volatile int16_t x117 = -677;
int64_t x120 = INT64_MIN;
static int64_t x128 = -1152610LL;
int32_t x129 = INT32_MAX;
volatile uint32_t x132 = UINT32_MAX;
int64_t x133 = 8628LL;
static int64_t t34 = -7309543176LL;
uint64_t x144 = 28LLU;
static uint8_t x149 = 57U;
int64_t x150 = -1LL;
int64_t t37 = -29LL;
static volatile uint64_t x154 = 48901796872LLU;
uint8_t x157 = 57U;
int8_t x163 = INT8_MAX;
static uint64_t x171 = 26LLU;
uint64_t x177 = 25167593998LLU;
int32_t x184 = -150198395;
static volatile uint64_t t45 = 123637199065138LLU;
int8_t x185 = 63;
int16_t x190 = INT16_MIN;
int8_t x195 = -1;
int32_t x196 = INT32_MIN;
uint32_t x201 = 44U;
int16_t x211 = INT16_MIN;
static int64_t t52 = 31527918870908023LL;
int64_t x215 = -15765593LL;
int64_t x222 = 259075390LL;
static int64_t x231 = INT64_MAX;
volatile uint32_t x238 = 17185550U;
int64_t x240 = -1LL;
int32_t t60 = -215810;
uint64_t x247 = 3275327LLU;
volatile uint32_t x249 = 855U;
static int64_t t62 = 0LL;
static int64_t t63 = -1898303333924LL;
volatile uint32_t x260 = 0U;
uint64_t t64 = 453923484798776960LLU;
volatile uint64_t t66 = UINT64_MAX;
uint32_t x269 = 571U;
uint8_t x271 = 5U;
int32_t x272 = -18;
int8_t x273 = 1;
static int8_t x278 = -1;
int8_t x280 = -1;
volatile uint32_t t69 = 21193U;
int8_t x282 = 0;
int8_t x288 = 38;
uint16_t x289 = 9U;
int16_t x293 = -1;
uint16_t x294 = 26335U;
uint64_t t76 = 1328819995318770263LLU;
uint64_t x310 = UINT64_MAX;
volatile int64_t x313 = INT64_MIN;
uint8_t x319 = UINT8_MAX;
uint32_t x320 = 26U;
int8_t x323 = -1;
uint32_t t81 = 658U;
static volatile int64_t x347 = INT64_MAX;
volatile int64_t t86 = -13277355LL;
int16_t x349 = INT16_MAX;
static int8_t x353 = INT8_MIN;
int32_t x359 = 3387439;
int32_t x362 = 48;
volatile int8_t x363 = INT8_MIN;
uint64_t x368 = 5411LLU;
int32_t x369 = INT32_MIN;
uint16_t x371 = UINT16_MAX;
int16_t x372 = INT16_MAX;
static uint8_t x379 = 60U;
int16_t x387 = INT16_MIN;
static uint32_t x399 = 1791400004U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint32_t x3 = 233799U;
	uint16_t x4 = 178U;
	volatile int64_t t0 = -143LL;

	t0 = ((x1&x2)|(x3^x4));

	if (t0 != 233973LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 7;
	int16_t x6 = INT16_MAX;
	int64_t x7 = -263861939617LL;
	volatile int64_t t1 = 124217480576242LL;

	t1 = ((x5&x6)|(x7^x8));

	if (t1 != -9223371772992836185LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint8_t x10 = UINT8_MAX;
	static int16_t x12 = INT16_MAX;

	t2 = ((x9&x10)|(x11^x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -4;
	int16_t x14 = INT16_MIN;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 2355;

	t3 = ((x13&x14)|(x15^x16));

	if (t3 != -256) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int64_t x18 = -1LL;
	static int8_t x20 = 0;

	t4 = ((x17&x18)|(x19^x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	int64_t x22 = -389991293498LL;
	uint32_t x23 = UINT32_MAX;
	static int8_t x24 = INT8_MIN;
	volatile int64_t t5 = 3389692839929754LL;

	t5 = ((x21&x22)|(x23^x24));

	if (t5 != -389991293441LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 1165U;
	uint64_t x27 = 2520521126097476073LLU;

	t6 = ((x25&x26)|(x27^x28));

	if (t6 != 15926222947622469117LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 180LLU;
	uint64_t x30 = 13917LLU;
	static uint8_t x32 = UINT8_MAX;
	uint64_t t7 = 17740571223905LLU;

	t7 = ((x29&x30)|(x31^x32));

	if (t7 != 148LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int16_t x34 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 163;

	t8 = ((x33&x34)|(x35^x36));

	if (t8 != -15) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	static int16_t x38 = 5;
	uint64_t x39 = 13945991615920305LLU;
	volatile int8_t x40 = INT8_MIN;
	uint64_t t9 = 83177817903801208LLU;

	t9 = ((x37&x38)|(x39^x40));

	if (t9 != 18432798082093631285LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	volatile int8_t x42 = INT8_MAX;
	volatile int64_t x43 = INT64_MAX;

	t10 = ((x41&x42)|(x43^x44));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	uint8_t x46 = 3U;
	int64_t x47 = 84649897432333936LL;
	int16_t x48 = INT16_MIN;

	t11 = ((x45&x46)|(x47^x48));

	if (t11 != -84649897432334736LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x50 = 13226U;
	static int32_t x51 = -698644598;
	int64_t x52 = INT64_MAX;
	int64_t t12 = 2963961433946559422LL;

	t12 = ((x49&x50)|(x51^x52));

	if (t12 != -9223372036156130305LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x54 = 206;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = -1LL;
	static int64_t t13 = 257468440562LL;

	t13 = ((x53&x54)|(x55^x56));

	if (t13 != -65330LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = 438LL;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	static int64_t t14 = -240856108444LL;

	t14 = ((x57&x58)|(x59^x60));

	if (t14 != 2147483536LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 2883U;
	static int16_t x63 = INT16_MAX;
	static uint32_t x64 = 33U;

	t15 = ((x61&x62)|(x63^x64));

	if (t15 != 32735U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = 3;
	volatile uint64_t t16 = 78006LLU;

	t16 = ((x65&x66)|(x67^x68));

	if (t16 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	int32_t x70 = INT32_MIN;
	volatile uint32_t x71 = 1409974U;
	int64_t x72 = INT64_MAX;
	static int64_t t17 = 3987946330627570447LL;

	t17 = ((x69&x70)|(x71^x72));

	if (t17 != -1409975LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 27;
	int32_t x74 = -1;
	int16_t x75 = INT16_MIN;
	static uint16_t x76 = 7U;
	static int32_t t18 = -6859;

	t18 = ((x73&x74)|(x75^x76));

	if (t18 != -32737) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MAX;
	uint8_t x80 = 1U;
	volatile int64_t t19 = -251440253782LL;

	t19 = ((x77&x78)|(x79^x80));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = 90;
	int32_t x83 = 99;
	int8_t x84 = -1;
	volatile int32_t t20 = -11868;

	t20 = ((x81&x82)|(x83^x84));

	if (t20 != -100) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1405;
	uint32_t x86 = 5995U;
	int64_t x87 = 3046853777LL;
	int8_t x88 = INT8_MIN;
	volatile int64_t t21 = -2203509756551525480LL;

	t21 = ((x85&x86)|(x87^x88));

	if (t21 != -3046852743LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int16_t x90 = INT16_MIN;
	static int16_t x91 = -1;
	volatile int8_t x92 = 3;
	volatile int32_t t22 = 35121;

	t22 = ((x89&x90)|(x91^x92));

	if (t22 != -4) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1967827U;
	static int32_t x96 = INT32_MAX;
	volatile uint32_t t23 = 44642614U;

	t23 = ((x93&x94)|(x95^x96));

	if (t23 != 2147483621U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	static int32_t t24 = -12;

	t24 = ((x97&x98)|(x99^x100));

	if (t24 != 32750) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -3;
	volatile int8_t x103 = INT8_MAX;
	volatile int32_t t25 = 5;

	t25 = ((x101&x102)|(x103^x104));

	if (t25 != 32765) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int64_t x106 = INT64_MIN;
	volatile int32_t x107 = INT32_MIN;
	volatile int64_t t26 = -24923772813058672LL;

	t26 = ((x105&x106)|(x107^x108));

	if (t26 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 1087495131LLU;
	int64_t x110 = 22556445038676056LL;
	int16_t x111 = INT16_MAX;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t27 = 10089334LLU;

	t27 = ((x109&x110)|(x111^x112));

	if (t27 != 18446744073709521023LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 6U;
	static int32_t x114 = INT32_MIN;
	uint8_t x115 = UINT8_MAX;
	int64_t x116 = -1LL;

	t28 = ((x113&x114)|(x115^x116));

	if (t28 != -256LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MIN;
	int8_t x119 = INT8_MAX;
	volatile int64_t t29 = -509716381LL;

	t29 = ((x117&x118)|(x119^x120));

	if (t29 != -2147483521LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	static int16_t x123 = 1;
	int16_t x124 = -1;
	static volatile int64_t t30 = -3887335584674338LL;

	t30 = ((x121&x122)|(x123^x124));

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	static int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	int64_t t31 = 67178801739343942LL;

	t31 = ((x125&x126)|(x127^x128));

	if (t31 != 1152609LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x130 = INT64_MIN;
	static uint8_t x131 = 7U;
	static int64_t t32 = 24368LL;

	t32 = ((x129&x130)|(x131^x132));

	if (t32 != 4294967288LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MAX;
	static int64_t t33 = 165088281948857278LL;

	t33 = ((x133&x134)|(x135^x136));

	if (t33 != -32641LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 157U;
	int64_t x138 = -2613994613116180LL;
	static int16_t x139 = INT16_MAX;
	int32_t x140 = INT32_MIN;

	t34 = ((x137&x138)|(x139^x140));

	if (t34 != -2147450881LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -3643207990762573428LL;
	int32_t x142 = INT32_MAX;
	int32_t x143 = 0;
	volatile uint64_t t35 = 23458LLU;

	t35 = ((x141&x142)|(x143^x144));

	if (t35 != 196833692LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = 0U;
	static volatile int32_t x147 = INT32_MAX;
	uint64_t x148 = UINT64_MAX;
	uint64_t t36 = 22051800LLU;

	t36 = ((x145&x146)|(x147^x148));

	if (t36 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x151 = INT32_MAX;
	int8_t x152 = -1;

	t37 = ((x149&x150)|(x151^x152));

	if (t37 != -2147483591LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	uint32_t x155 = 4U;
	static int8_t x156 = 31;
	volatile uint64_t t38 = 634749805LLU;

	t38 = ((x153&x154)|(x155^x156));

	if (t38 != 1657156635LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = 27897U;
	uint8_t x159 = 13U;
	int16_t x160 = -1;
	int32_t t39 = -2287;

	t39 = ((x157&x158)|(x159^x160));

	if (t39 != -5) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 262U;
	volatile uint32_t x162 = UINT32_MAX;
	static uint64_t x164 = 2783591476234293LLU;
	static volatile uint64_t t40 = 213567963301LLU;

	t40 = ((x161&x162)|(x163^x164));

	if (t40 != 2783591476234574LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -1;
	int16_t x166 = -1;
	static volatile uint16_t x167 = UINT16_MAX;
	static int32_t x168 = INT32_MIN;
	int32_t t41 = -11;

	t41 = ((x165&x166)|(x167^x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1472793;
	int32_t x170 = -1;
	static int8_t x172 = -1;
	volatile uint64_t t42 = 115136233467129LLU;

	t42 = ((x169&x170)|(x171^x172));

	if (t42 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 17U;
	uint32_t x174 = 1058978U;
	volatile uint16_t x175 = 18222U;
	static uint8_t x176 = 5U;
	static volatile uint32_t t43 = 144U;

	t43 = ((x173&x174)|(x175^x176));

	if (t43 != 18219U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = 3;
	int64_t x179 = 2217961561833LL;
	static uint64_t x180 = 7459935124419995065LLU;
	volatile uint64_t t44 = 17197338282456820LLU;

	t44 = ((x177&x178)|(x179^x180));

	if (t44 != 7459932943244131154LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 2819446623641106308LLU;
	static int64_t x182 = INT64_MIN;
	static int8_t x183 = 0;

	t45 = ((x181&x182)|(x183^x184));

	if (t45 != 18446744073559353221LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -24428376697LL;
	uint32_t x187 = UINT32_MAX;
	uint16_t x188 = UINT16_MAX;
	int64_t t46 = 11262LL;

	t46 = ((x185&x186)|(x187^x188));

	if (t46 != 4294901767LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int64_t x191 = 2284038113437LL;
	int32_t x192 = -1;
	int64_t t47 = 22061938698326LL;

	t47 = ((x189&x190)|(x191^x192));

	if (t47 != -18590LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	int8_t x194 = 3;
	static int32_t t48 = INT32_MAX;

	t48 = ((x193&x194)|(x195^x196));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -155LL;
	uint16_t x198 = 15U;
	static uint8_t x199 = 50U;
	uint8_t x200 = 23U;
	int64_t t49 = -54391001LL;

	t49 = ((x197&x198)|(x199^x200));

	if (t49 != 37LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x202 = -1;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -3;
	uint32_t t50 = 0U;

	t50 = ((x201&x202)|(x203^x204));

	if (t50 != 4294967214U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 3062753526184939LLU;
	static int32_t x206 = -471;
	int32_t x207 = -1;
	static uint32_t x208 = UINT32_MAX;
	uint64_t t51 = 77499612LLU;

	t51 = ((x205&x206)|(x207^x208));

	if (t51 != 3062753526184489LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MAX;
	volatile uint8_t x210 = 96U;
	int64_t x212 = INT64_MIN;

	t52 = ((x209&x210)|(x211^x212));

	if (t52 != 9223372036854743136LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = 324970;
	int32_t x214 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	int64_t t53 = -9489518514147LL;

	t53 = ((x213&x214)|(x215^x216));

	if (t53 != 2131754991LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = -1;
	int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 97155026734LLU;
	static volatile uint16_t x220 = 1890U;
	uint64_t t54 = 5309LLU;

	t54 = ((x217&x218)|(x219^x220));

	if (t54 != 18446744072080328780LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	int16_t x223 = -4849;
	static uint64_t x224 = 8220LLU;
	uint64_t t55 = 16606868470LLU;

	t55 = ((x221&x222)|(x223^x224));

	if (t55 != 18446744073709538579LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MIN;
	volatile int64_t x226 = -61284LL;
	volatile int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	static volatile int64_t t56 = 271295698774LL;

	t56 = ((x225&x226)|(x227^x228));

	if (t56 != -2147450881LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int8_t x230 = INT8_MIN;
	int64_t x232 = INT64_MIN;
	int64_t t57 = -2423LL;

	t57 = ((x229&x230)|(x231^x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 9;
	int64_t x234 = -1LL;
	int32_t x235 = 4152025;
	volatile uint8_t x236 = 102U;
	volatile int64_t t58 = -34873331368796505LL;

	t58 = ((x233&x234)|(x235^x236));

	if (t58 != 4151999LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = UINT16_MAX;
	int64_t x239 = 5571557400674673LL;
	volatile int64_t t59 = 12372LL;

	t59 = ((x237&x238)|(x239^x240));

	if (t59 != -5571557400674418LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -42;
	int32_t x242 = INT32_MAX;
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MAX;

	t60 = ((x241&x242)|(x243^x244));

	if (t60 != 2147483606) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -2;
	uint16_t x248 = 238U;
	volatile uint64_t t61 = 710636484093057LLU;

	t61 = ((x245&x246)|(x247^x248));

	if (t61 != 4294967295LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 73U;
	int64_t x251 = -1LL;
	int16_t x252 = INT16_MIN;

	t62 = ((x249&x250)|(x251^x252));

	if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x254 = INT32_MIN;
	uint32_t x255 = UINT32_MAX;
	static int64_t x256 = 21301258809LL;

	t63 = ((x253&x254)|(x255^x256));

	if (t63 != 17353446854LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MIN;
	volatile uint64_t x259 = 1432870863189295485LLU;

	t64 = ((x257&x258)|(x259^x260));

	if (t64 != 18446744073062039933LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 16U;
	volatile int32_t x262 = -9066790;
	int64_t x263 = INT64_MAX;
	static int32_t x264 = INT32_MIN;
	volatile int64_t t65 = 0LL;

	t65 = ((x261&x262)|(x263^x264));

	if (t65 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	static uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MAX;
	int32_t x268 = 2;

	t66 = ((x265&x266)|(x267^x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x270 = 1179U;
	uint32_t t67 = 136131711U;

	t67 = ((x269&x270)|(x271^x272));

	if (t67 != 4294967291U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	static int64_t x276 = -227834614LL;
	int64_t t68 = -943939LL;

	t68 = ((x273&x274)|(x275^x276));

	if (t68 != 9223372036626941194LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x277 = 94U;
	uint32_t x279 = UINT32_MAX;

	t69 = ((x277&x278)|(x279^x280));

	if (t69 != 94U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = 560U;
	int64_t x283 = -1659249LL;
	uint16_t x284 = 4U;
	static int64_t t70 = 70408LL;

	t70 = ((x281&x282)|(x283^x284));

	if (t70 != -1659253LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = 54;
	static volatile int32_t x287 = 1;
	volatile int32_t t71 = -15;

	t71 = ((x285&x286)|(x287^x288));

	if (t71 != 39) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 15149U;
	volatile int8_t x292 = INT8_MIN;
	static volatile int32_t t72 = 71099767;

	t72 = ((x289&x290)|(x291^x292));

	if (t72 != -15187) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x295 = 28177;
	static int32_t x296 = INT32_MIN;
	int32_t t73 = -20722;

	t73 = ((x293&x294)|(x295^x296));

	if (t73 != -2147455265) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x297 = INT16_MAX;
	int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MAX;
	uint64_t x300 = 469060317289LLU;
	uint64_t t74 = 26196115289LLU;

	t74 = ((x297&x298)|(x299^x300));

	if (t74 != 469060317206LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	static int32_t x302 = INT32_MIN;
	uint8_t x303 = 107U;
	uint32_t x304 = 50974U;
	uint32_t t75 = 1311466194U;

	t75 = ((x301&x302)|(x303^x304));

	if (t75 != 2147534709U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = UINT64_MAX;
	static int32_t x306 = INT32_MIN;
	volatile uint32_t x307 = 2009292133U;
	int8_t x308 = -1;

	t76 = ((x305&x306)|(x307^x308));

	if (t76 != 18446744071700259482LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	uint8_t x311 = UINT8_MAX;
	int64_t x312 = INT64_MAX;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x309&x310)|(x311^x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x314 = UINT32_MAX;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = -2;
	volatile int64_t t78 = 156065812354LL;

	t78 = ((x313&x314)|(x315^x316));

	if (t78 != 32766LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -7;
	volatile int32_t x318 = -149;
	static volatile uint32_t t79 = 2739378U;

	t79 = ((x317&x318)|(x319^x320));

	if (t79 != 4294967277U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	static uint16_t x322 = 2296U;
	int8_t x324 = -1;
	int32_t t80 = -3756;

	t80 = ((x321&x322)|(x323^x324));

	if (t80 != 2296) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 340;
	uint16_t x326 = 8U;
	volatile uint32_t x327 = 11746935U;
	int16_t x328 = -1;

	t81 = ((x325&x326)|(x327^x328));

	if (t81 != 4283220360U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 224506035603776LLU;
	int32_t x330 = 207;
	static uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	static uint64_t t82 = 561911350597168660LLU;

	t82 = ((x329&x330)|(x331^x332));

	if (t82 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -494LL;
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 8U;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t83 = 3811201845491243LLU;

	t83 = ((x333&x334)|(x335^x336));

	if (t83 != 18446744073709551130LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	uint32_t x338 = 3116U;
	int32_t x339 = -888;
	int16_t x340 = INT16_MIN;
	volatile uint32_t t84 = 178446U;

	t84 = ((x337&x338)|(x339^x340));

	if (t84 != 31916U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 12249686U;
	static int8_t x342 = INT8_MIN;
	static uint16_t x343 = 482U;
	int16_t x344 = INT16_MAX;
	volatile uint32_t t85 = 222837U;

	t85 = ((x341&x342)|(x343^x344));

	if (t85 != 12254749U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = 2;
	static uint32_t x346 = UINT32_MAX;
	volatile int8_t x348 = INT8_MIN;

	t86 = ((x345&x346)|(x347^x348));

	if (t86 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	volatile uint32_t x351 = 387631738U;
	volatile int16_t x352 = 1377;
	uint32_t t87 = 10898024U;

	t87 = ((x349&x350)|(x351^x352));

	if (t87 != 387645439U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -41614;
	int64_t x355 = -1102667051473039131LL;
	static int64_t x356 = INT64_MIN;
	int64_t t88 = -539894878602786947LL;

	t88 = ((x353&x354)|(x355^x356));

	if (t88 != -41499LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 9;
	volatile int64_t x358 = 234615LL;
	static volatile int8_t x360 = -1;
	int64_t t89 = -1620186952157LL;

	t89 = ((x357&x358)|(x359^x360));

	if (t89 != -3387439LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	static int64_t x364 = INT64_MIN;
	volatile int64_t t90 = -29358681LL;

	t90 = ((x361&x362)|(x363^x364));

	if (t90 != 9223372036854775728LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	volatile int8_t x366 = 2;
	uint64_t x367 = 28840811498419LLU;
	volatile uint64_t t91 = 42LLU;

	t91 = ((x365&x366)|(x367^x368));

	if (t91 != 28840811503250LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = -1046071875;
	static int32_t t92 = -3323330;

	t92 = ((x369&x370)|(x371^x372));

	if (t92 != -2147450880) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MIN;
	static volatile int8_t x374 = INT8_MAX;
	volatile int16_t x375 = -29;
	int32_t x376 = INT32_MAX;
	volatile int32_t t93 = -1;

	t93 = ((x373&x374)|(x375^x376));

	if (t93 != -2147483620) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	uint32_t x378 = UINT32_MAX;
	int64_t x380 = INT64_MAX;
	int64_t t94 = -102009149737357LL;

	t94 = ((x377&x378)|(x379^x380));

	if (t94 != 9223372036854775747LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 259975317;
	static int16_t x382 = 5816;
	uint64_t x383 = UINT64_MAX;
	uint64_t x384 = 106629583LLU;
	uint64_t t95 = 10777557225LLU;

	t95 = ((x381&x382)|(x383^x384));

	if (t95 != 18446744073602922160LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	volatile uint64_t x386 = UINT64_MAX;
	uint64_t x388 = 58448284LLU;
	uint64_t t96 = 3371192814382LLU;

	t96 = ((x385&x386)|(x387^x388));

	if (t96 != 18446744073651116444LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	volatile int32_t x390 = INT32_MAX;
	int8_t x391 = 0;
	uint16_t x392 = 1576U;
	int64_t t97 = -39LL;

	t97 = ((x389&x390)|(x391^x392));

	if (t97 != 1576LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 2929U;
	int64_t x394 = 26831809LL;
	static int64_t x395 = -1LL;
	int64_t x396 = -3893841LL;
	int64_t t98 = 126814LL;

	t98 = ((x393&x394)|(x395^x396));

	if (t98 != 3894097LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -445677464LL;
	uint16_t x398 = 19U;
	volatile uint16_t x400 = 19049U;
	int64_t t99 = 34026739332LL;

	t99 = ((x397&x398)|(x399^x400));

	if (t99 != 1791414829LL) { NG(); } else { ; }
	
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

