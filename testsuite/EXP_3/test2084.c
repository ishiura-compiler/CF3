#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = 0;
int16_t x8 = -3379;
volatile int16_t x16 = -1;
int16_t x21 = -414;
int8_t x23 = -7;
int8_t x31 = INT8_MIN;
static volatile int32_t x34 = -27274;
volatile int64_t t9 = -123LL;
int16_t x47 = -1;
static int16_t x53 = INT16_MIN;
uint8_t x54 = 115U;
uint32_t t12 = 379560U;
uint16_t x61 = 3544U;
int16_t x67 = 4;
int8_t x69 = INT8_MIN;
int64_t x73 = 1LL;
int16_t x81 = INT16_MIN;
int8_t x84 = -1;
volatile int32_t x93 = INT32_MIN;
uint16_t x99 = 1U;
uint16_t x101 = 3312U;
int16_t x110 = INT16_MAX;
uint8_t x113 = UINT8_MAX;
int8_t x114 = 3;
uint8_t x115 = 27U;
uint16_t x117 = UINT16_MAX;
uint8_t x119 = 22U;
volatile int16_t x120 = INT16_MIN;
static volatile int32_t t28 = -52319513;
static uint32_t x122 = 2U;
uint8_t x123 = 28U;
int32_t x129 = -1;
int32_t x132 = INT32_MAX;
static int16_t x138 = INT16_MIN;
int8_t x140 = INT8_MAX;
volatile uint32_t t34 = 135708126U;
uint64_t t35 = 2516337LLU;
static int8_t x149 = INT8_MAX;
volatile int32_t x150 = 6614;
int16_t x167 = INT16_MIN;
static uint32_t x170 = 931965619U;
int64_t x171 = -1LL;
int64_t x172 = -957427834442LL;
uint64_t x174 = 90562893097967LLU;
static volatile uint64_t t42 = 334457016956955244LLU;
volatile int32_t x183 = INT32_MIN;
static volatile int64_t x186 = 308141925LL;
static uint16_t x196 = UINT16_MAX;
uint64_t t47 = 138077924880212LLU;
uint64_t x208 = 1598738323LLU;
static int32_t t50 = -204655;
uint32_t x213 = 23U;
int16_t x215 = -1136;
int16_t x220 = INT16_MAX;
int32_t t53 = -36;
int16_t x225 = INT16_MIN;
int32_t t54 = -2;
uint32_t x232 = UINT32_MAX;
static volatile uint32_t t55 = 2047826713U;
volatile int64_t x236 = -15464461081560376LL;
uint16_t x240 = UINT16_MAX;
static volatile uint32_t t57 = 720526U;
uint16_t x243 = UINT16_MAX;
static uint64_t x245 = UINT64_MAX;
uint64_t x247 = UINT64_MAX;
int8_t x251 = -10;
int64_t t61 = -69359172LL;
uint16_t x257 = 55U;
int16_t x258 = INT16_MIN;
int32_t t62 = -57390;
int8_t x273 = INT8_MAX;
volatile uint32_t t66 = 3744U;
int8_t x282 = -1;
static int64_t x283 = -1LL;
static int8_t x297 = -1;
volatile uint64_t t69 = 1848668871497133LLU;
int16_t x301 = INT16_MIN;
int16_t x306 = INT16_MAX;
uint8_t x320 = UINT8_MAX;
volatile int32_t t73 = 85018;
uint8_t x330 = UINT8_MAX;
uint32_t x334 = 141711473U;
static uint32_t t77 = 17U;
uint32_t x342 = 98472530U;
int64_t x356 = INT64_MIN;
int64_t t81 = 13085LL;
static volatile int32_t x365 = -1;
static int32_t x372 = -1;
uint32_t x380 = UINT32_MAX;
int64_t x387 = INT64_MIN;
uint64_t x389 = UINT64_MAX;
int16_t x390 = INT16_MIN;
uint8_t x401 = 0U;
int32_t t94 = -123;
uint16_t x414 = 1U;
static uint64_t x420 = UINT64_MAX;
volatile uint8_t x421 = 0U;
static int32_t x428 = INT32_MIN;


void f0(void) {
	volatile int16_t x1 = 2102;
	volatile uint8_t x2 = 1U;
	uint64_t x3 = 3790469655LLU;
	int16_t x4 = 222;
	uint64_t t0 = 8941418596236087629LLU;

	t0 = ((x1%x2)/(x3^x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x6 = UINT8_MAX;
	static int8_t x7 = -27;
	int32_t t1 = -34620712;

	t1 = ((x5%x6)/(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 43U;
	int32_t x10 = INT32_MAX;
	volatile int8_t x11 = INT8_MIN;
	static uint16_t x12 = 519U;
	volatile int32_t t2 = 14873;

	t2 = ((x9%x10)/(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = -149;
	int64_t x15 = 122025202223LL;
	static volatile int64_t t3 = 1072893LL;

	t3 = ((x13%x14)/(x15^x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -3;
	static volatile uint32_t x18 = 1336U;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -1722123665650555LL;

	t4 = ((x17%x18)/(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	int8_t x24 = -1;
	volatile int32_t t5 = 73329;

	t5 = ((x21%x22)/(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 5900251LLU;
	static volatile uint16_t x26 = 3U;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = 17U;
	uint64_t t6 = 23434LLU;

	t6 = ((x25%x26)/(x27^x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 30U;
	static uint32_t x30 = 74730575U;
	uint16_t x32 = UINT16_MAX;
	uint32_t t7 = 894U;

	t7 = ((x29%x30)/(x31^x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile uint64_t x35 = 53115LLU;
	int32_t x36 = 2004;
	uint64_t t8 = 11574814LLU;

	t8 = ((x33%x34)/(x35^x36));

	if (t8 != 359060711897022LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	int8_t x42 = -1;
	int64_t x43 = INT64_MIN;
	uint32_t x44 = 2391U;

	t9 = ((x41%x42)/(x43^x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MAX;
	uint64_t x48 = 396791LLU;
	volatile uint64_t t10 = 3076887842589627LLU;

	t10 = ((x45%x46)/(x47^x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	volatile int8_t x50 = -1;
	int8_t x51 = -1;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 497;

	t11 = ((x49%x50)/(x51^x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x55 = 24832U;
	int32_t x56 = INT32_MAX;

	t12 = ((x53%x54)/(x55^x56));

	if (t12 != 2U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 428167944U;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = 1;
	int64_t x60 = -1LL;
	int64_t t13 = 528681677LL;

	t13 = ((x57%x58)/(x59^x60));

	if (t13 != -13894LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x62 = -4;
	int8_t x63 = -1;
	uint8_t x64 = 0U;
	int32_t t14 = 13588856;

	t14 = ((x61%x62)/(x63^x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = INT32_MIN;
	static uint32_t x66 = 229U;
	uint8_t x68 = UINT8_MAX;
	volatile uint32_t t15 = 328U;

	t15 = ((x65%x66)/(x67^x68));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x70 = 48U;
	uint64_t x71 = 1339122LLU;
	uint32_t x72 = 649133440U;
	uint64_t t16 = 16530845297062200LLU;

	t16 = ((x69%x70)/(x71^x72));

	if (t16 != 28453152939LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x74 = -1;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = 15U;
	volatile int64_t t17 = 19080863746751LL;

	t17 = ((x73%x74)/(x75^x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	volatile uint8_t x78 = 4U;
	volatile int64_t x79 = -2483355114LL;
	uint8_t x80 = 13U;
	int64_t t18 = -284086890LL;

	t18 = ((x77%x78)/(x79^x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	int32_t t19 = -249012;

	t19 = ((x81%x82)/(x83^x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int64_t x86 = INT64_MAX;
	int32_t x87 = -78058642;
	uint64_t x88 = 3853755857409LLU;
	volatile uint64_t t20 = 325LLU;

	t20 = ((x85%x86)/(x87^x88));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = -1;
	static int8_t x90 = INT8_MAX;
	int32_t x91 = INT32_MAX;
	volatile int64_t x92 = INT64_MAX;
	int64_t t21 = 1LL;

	t21 = ((x89%x90)/(x91^x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x94 = 2;
	volatile int64_t x95 = -103873270087789262LL;
	static int8_t x96 = 50;
	int64_t t22 = -59032911438LL;

	t22 = ((x93%x94)/(x95^x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 0U;
	static int32_t x98 = INT32_MAX;
	volatile int16_t x100 = 7190;
	static int32_t t23 = -1644684;

	t23 = ((x97%x98)/(x99^x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x102 = INT64_MAX;
	uint8_t x103 = 3U;
	uint16_t x104 = 8U;
	int64_t t24 = 645550284276902LL;

	t24 = ((x101%x102)/(x103^x104));

	if (t24 != 301LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MAX;
	uint16_t x106 = 16U;
	static uint64_t x107 = 31235008LLU;
	uint64_t x108 = UINT64_MAX;
	volatile uint64_t t25 = 9089948750484LLU;

	t25 = ((x105%x106)/(x107^x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = -1;
	int64_t x111 = -1LL;
	static volatile int8_t x112 = INT8_MIN;
	volatile int64_t t26 = 0LL;

	t26 = ((x109%x110)/(x111^x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x116 = INT64_MIN;
	int64_t t27 = -2102505895LL;

	t27 = ((x113%x114)/(x115^x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = INT16_MIN;

	t28 = ((x117%x118)/(x119^x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = -1;
	int64_t x124 = INT64_MIN;
	volatile int64_t t29 = 97LL;

	t29 = ((x121%x122)/(x123^x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x125 = UINT8_MAX;
	int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	int32_t x128 = -6201172;
	int64_t t30 = 22050LL;

	t30 = ((x125%x126)/(x127^x128));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = INT32_MIN;
	int8_t x131 = -1;
	int32_t t31 = -400878;

	t31 = ((x129%x130)/(x131^x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x133 = 6U;
	int64_t x134 = -1LL;
	uint64_t x135 = 336LLU;
	int8_t x136 = -1;
	static volatile uint64_t t32 = 62469349930LLU;

	t32 = ((x133%x134)/(x135^x136));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	int64_t x139 = INT64_MAX;
	volatile int64_t t33 = -41440331584463LL;

	t33 = ((x137%x138)/(x139^x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x141 = UINT8_MAX;
	volatile uint32_t x142 = 1U;
	volatile uint16_t x143 = 3419U;
	static int16_t x144 = -432;

	t34 = ((x141%x142)/(x143^x144));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = 360;
	uint32_t x146 = 1531752U;
	volatile int8_t x147 = 0;
	static uint64_t x148 = 6425673174656519791LLU;

	t35 = ((x145%x146)/(x147^x148));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x151 = INT64_MIN;
	static volatile int32_t x152 = -1;
	int64_t t36 = 33876484420LL;

	t36 = ((x149%x150)/(x151^x152));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x153 = INT8_MIN;
	uint16_t x154 = UINT16_MAX;
	uint16_t x155 = 477U;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t37 = -56731;

	t37 = ((x153%x154)/(x155^x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -468;
	uint64_t x158 = 17504583521185508LLU;
	int8_t x159 = INT8_MIN;
	static int16_t x160 = -1;
	static uint64_t t38 = 0LLU;

	t38 = ((x157%x158)/(x159^x160));

	if (t38 != 113524613395363LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = -1652;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t39 = 200;

	t39 = ((x161%x162)/(x163^x164));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = -1968;
	volatile uint16_t x166 = 1U;
	static int8_t x168 = 1;
	static int32_t t40 = -4341164;

	t40 = ((x165%x166)/(x167^x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x169 = 51U;
	static volatile int64_t t41 = -7811073105892LL;

	t41 = ((x169%x170)/(x171^x172));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -274974951;
	volatile int16_t x175 = INT16_MIN;
	uint64_t x176 = 1LLU;

	t42 = ((x173%x174)/(x175^x176));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x181 = UINT16_MAX;
	volatile int64_t x182 = INT64_MIN;
	uint64_t x184 = 15673LLU;
	volatile uint64_t t43 = 313678282029LLU;

	t43 = ((x181%x182)/(x183^x184));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	volatile int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MAX;
	volatile int64_t t44 = 289048289610884439LL;

	t44 = ((x185%x186)/(x187^x188));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	static volatile int16_t x192 = -901;
	volatile int64_t t45 = -63326336LL;

	t45 = ((x189%x190)/(x191^x192));

	if (t45 != 2386092LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = UINT16_MAX;
	volatile int32_t x194 = 893;
	int8_t x195 = -4;
	int32_t t46 = 118;

	t46 = ((x193%x194)/(x195^x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	volatile uint64_t x198 = 1LLU;
	static int8_t x199 = INT8_MAX;
	int16_t x200 = INT16_MIN;

	t47 = ((x197%x198)/(x199^x200));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x201 = -1;
	int16_t x202 = -1;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MAX;
	volatile int64_t t48 = 138361LL;

	t48 = ((x201%x202)/(x203^x204));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = -445;
	int8_t x206 = INT8_MAX;
	int64_t x207 = -1LL;
	uint64_t t49 = 3952586190921735LLU;

	t49 = ((x205%x206)/(x207^x208));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = 199744;
	static int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MIN;

	t50 = ((x209%x210)/(x211^x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x214 = 401LLU;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t51 = 22000285851472503LLU;

	t51 = ((x213%x214)/(x215^x216));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	uint16_t x218 = 6U;
	int64_t x219 = INT64_MAX;
	static int64_t t52 = -6328465346465LL;

	t52 = ((x217%x218)/(x219^x220));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 0U;
	volatile uint8_t x222 = 14U;
	uint16_t x223 = 1775U;
	static int32_t x224 = INT32_MAX;

	t53 = ((x221%x222)/(x223^x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x226 = INT8_MAX;
	uint16_t x227 = 1U;
	int8_t x228 = INT8_MIN;

	t54 = ((x225%x226)/(x227^x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int8_t x230 = -2;
	int16_t x231 = -731;

	t55 = ((x229%x230)/(x231^x232));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = INT64_MIN;
	uint16_t x234 = 3U;
	int64_t x235 = -2681181997896381918LL;
	volatile int64_t t56 = 167LL;

	t56 = ((x233%x234)/(x235^x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = 0U;
	uint32_t x238 = UINT32_MAX;
	int8_t x239 = 0;

	t57 = ((x237%x238)/(x239^x240));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x241 = -1LL;
	volatile int8_t x242 = INT8_MIN;
	int64_t x244 = INT64_MAX;
	int64_t t58 = -252764378908578LL;

	t58 = ((x241%x242)/(x243^x244));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = INT64_MIN;
	static uint16_t x248 = 15931U;
	static volatile uint64_t t59 = 6065479466710705140LLU;

	t59 = ((x245%x246)/(x247^x248));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 126U;
	int64_t x250 = -1LL;
	int32_t x252 = INT32_MAX;
	int64_t t60 = 805640925683LL;

	t60 = ((x249%x250)/(x251^x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = 7790;
	int32_t x254 = 3658;
	int64_t x255 = INT64_MIN;
	static int16_t x256 = 13569;

	t61 = ((x253%x254)/(x255^x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x259 = INT32_MAX;
	int8_t x260 = INT8_MIN;

	t62 = ((x257%x258)/(x259^x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MIN;
	uint64_t x263 = 8200092655177LLU;
	static int8_t x264 = INT8_MIN;
	uint64_t t63 = 3070574LLU;

	t63 = ((x261%x262)/(x263^x264));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x269 = 149U;
	volatile int64_t x270 = -1LL;
	int64_t x271 = INT64_MIN;
	static uint16_t x272 = 27889U;
	volatile int64_t t64 = -512082039151LL;

	t64 = ((x269%x270)/(x271^x272));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x274 = 164577U;
	volatile uint8_t x275 = 1U;
	static int16_t x276 = INT16_MIN;
	static volatile uint32_t t65 = 15U;

	t65 = ((x273%x274)/(x275^x276));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 1U;
	static int16_t x278 = -5;
	volatile uint16_t x279 = 19974U;
	int8_t x280 = INT8_MIN;

	t66 = ((x277%x278)/(x279^x280));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MIN;
	static volatile uint32_t x284 = UINT32_MAX;
	int64_t t67 = 18075452LL;

	t67 = ((x281%x282)/(x283^x284));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = -45342744;
	uint64_t x291 = 2LLU;
	uint64_t x292 = 929180716422LLU;
	uint64_t t68 = 70197LLU;

	t68 = ((x289%x290)/(x291^x292));

	if (t68 != 19852697LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = -197515342;
	volatile uint8_t x299 = 1U;
	uint64_t x300 = UINT64_MAX;

	t69 = ((x297%x298)/(x299^x300));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x302 = INT8_MIN;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = 1LL;
	int64_t t70 = 16339734102485LL;

	t70 = ((x301%x302)/(x303^x304));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -1;
	volatile uint16_t x307 = 817U;
	int16_t x308 = INT16_MIN;
	volatile int32_t t71 = -803592706;

	t71 = ((x305%x306)/(x307^x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x309 = 4U;
	uint64_t x310 = UINT64_MAX;
	uint32_t x311 = 50157U;
	int8_t x312 = INT8_MIN;
	static uint64_t t72 = 1263LLU;

	t72 = ((x309%x310)/(x311^x312));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = 2474;
	uint16_t x318 = 6668U;
	static int16_t x319 = INT16_MIN;

	t73 = ((x317%x318)/(x319^x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = 48377;
	volatile int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = -1;
	int32_t t74 = 90050;

	t74 = ((x321%x322)/(x323^x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x325 = INT16_MIN;
	static int64_t x326 = -791749444776LL;
	int8_t x327 = -1;
	int32_t x328 = INT32_MIN;
	int64_t t75 = -10580LL;

	t75 = ((x325%x326)/(x327^x328));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x329 = INT16_MIN;
	volatile int16_t x331 = -9;
	int32_t x332 = INT32_MIN;
	volatile int32_t t76 = 1;

	t76 = ((x329%x330)/(x331^x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = 3774;
	uint16_t x335 = 632U;
	int32_t x336 = INT32_MAX;

	t77 = ((x333%x334)/(x335^x336));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = UINT16_MAX;
	static int32_t x338 = INT32_MIN;
	int64_t x339 = -1LL;
	int8_t x340 = -38;
	static volatile int64_t t78 = -3313247358LL;

	t78 = ((x337%x338)/(x339^x340));

	if (t78 != 1771LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 55119U;
	uint16_t x343 = 779U;
	uint8_t x344 = 14U;
	static volatile uint32_t t79 = 15552263U;

	t79 = ((x341%x342)/(x343^x344));

	if (t79 != 71U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MAX;
	int16_t x350 = 1;
	uint32_t x351 = 1680077U;
	static uint8_t x352 = UINT8_MAX;
	static int64_t t80 = -74433154229LL;

	t80 = ((x349%x350)/(x351^x352));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = INT64_MAX;
	int64_t x355 = 186437549LL;

	t81 = ((x353%x354)/(x355^x356));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = 0LL;
	uint32_t x358 = 1077654770U;
	static volatile int16_t x359 = -1850;
	volatile int64_t x360 = -619389270809LL;
	static int64_t t82 = -294508LL;

	t82 = ((x357%x358)/(x359^x360));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = 1848221LL;
	int16_t x362 = -6520;
	uint32_t x363 = 9U;
	static uint8_t x364 = 72U;
	volatile int64_t t83 = -4165586950361041010LL;

	t83 = ((x361%x362)/(x363^x364));

	if (t83 != 47LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x366 = INT8_MIN;
	int16_t x367 = 9;
	static int16_t x368 = -236;
	static volatile int32_t t84 = -1730;

	t84 = ((x365%x366)/(x367^x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x369 = 2U;
	uint8_t x370 = UINT8_MAX;
	static int8_t x371 = -8;
	int32_t t85 = 1;

	t85 = ((x369%x370)/(x371^x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x373 = INT16_MIN;
	int32_t x374 = -1;
	int32_t x375 = INT32_MIN;
	volatile uint8_t x376 = 0U;
	volatile int32_t t86 = -2061162;

	t86 = ((x373%x374)/(x375^x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = -12853;
	static volatile uint32_t x378 = 839896815U;
	int64_t x379 = INT64_MAX;
	static volatile int64_t t87 = 67899127LL;

	t87 = ((x377%x378)/(x379^x380));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x381 = UINT16_MAX;
	volatile uint64_t x382 = 965LLU;
	int16_t x383 = 3108;
	uint16_t x384 = 346U;
	static uint64_t t88 = 11359370LLU;

	t88 = ((x381%x382)/(x383^x384));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x385 = 1U;
	uint64_t x386 = UINT64_MAX;
	int16_t x388 = INT16_MIN;
	static volatile uint64_t t89 = 6715524013LLU;

	t89 = ((x385%x386)/(x387^x388));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x391 = 124U;
	uint16_t x392 = 6U;
	volatile uint64_t t90 = 1402LLU;

	t90 = ((x389%x390)/(x391^x392));

	if (t90 != 268LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = 88253697LLU;
	int64_t x394 = 3120453LL;
	static uint64_t x395 = 3638LLU;
	static int64_t x396 = -911LL;
	static uint64_t t91 = 755383690LLU;

	t91 = ((x393%x394)/(x395^x396));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x402 = INT64_MAX;
	volatile uint64_t x403 = 5513099376329355LLU;
	uint32_t x404 = 63187650U;
	static volatile uint64_t t92 = 208249LLU;

	t92 = ((x401%x402)/(x403^x404));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = 16U;
	int16_t x406 = -1;
	uint32_t x407 = 2520U;
	static uint64_t x408 = 19LLU;
	volatile uint64_t t93 = 1050836822647240LLU;

	t93 = ((x405%x406)/(x407^x408));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = -25;
	int16_t x410 = -93;
	int8_t x411 = 37;
	static int16_t x412 = INT16_MAX;

	t94 = ((x409%x410)/(x411^x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x413 = 84943274791LLU;
	static uint8_t x415 = UINT8_MAX;
	volatile int16_t x416 = 39;
	volatile uint64_t t95 = 13903877LLU;

	t95 = ((x413%x414)/(x415^x416));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MIN;
	uint16_t x419 = 30336U;
	uint64_t t96 = 1086201664188LLU;

	t96 = ((x417%x418)/(x419^x420));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x422 = INT64_MIN;
	volatile int8_t x423 = 0;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t97 = 116LLU;

	t97 = ((x421%x422)/(x423^x424));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MIN;
	uint64_t x427 = 1047540132LLU;
	static volatile uint64_t t98 = 890719458LLU;

	t98 = ((x425%x426)/(x427^x428));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = 18U;
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MAX;
	uint64_t x432 = 36LLU;
	uint64_t t99 = 263214773LLU;

	t99 = ((x429%x430)/(x431^x432));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

