#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
volatile int32_t t0 = 1648;
volatile uint32_t x10 = 393134U;
int32_t t2 = -3;
volatile uint32_t t4 = 28651U;
volatile uint8_t x22 = 6U;
static volatile int32_t t6 = 2022836;
volatile uint32_t t8 = 9U;
volatile int8_t x40 = INT8_MIN;
volatile int64_t x42 = 15289049LL;
static uint16_t x47 = UINT16_MAX;
volatile uint64_t t12 = 964765093LLU;
static int64_t x54 = INT64_MIN;
int8_t x61 = INT8_MIN;
int32_t x62 = -1;
int16_t x66 = -1;
volatile uint16_t x67 = 307U;
static int32_t x68 = INT32_MAX;
int32_t x69 = INT32_MAX;
uint16_t x71 = UINT16_MAX;
int16_t x82 = INT16_MIN;
volatile uint16_t x84 = 269U;
volatile int32_t t20 = 1235487;
int16_t x88 = INT16_MAX;
static volatile int32_t x90 = -1;
static volatile int32_t t24 = -11063;
static uint16_t x103 = 590U;
volatile int32_t t26 = -20;
int32_t x114 = INT32_MIN;
int16_t x120 = -3126;
uint16_t x123 = 38U;
int8_t x125 = -7;
uint64_t x127 = 73596767651LLU;
static uint64_t x131 = 1LLU;
static uint64_t t32 = 542019835815LLU;
int8_t x136 = 49;
static uint16_t x137 = UINT16_MAX;
static uint32_t x138 = UINT32_MAX;
int16_t x140 = -1;
volatile int8_t x141 = INT8_MIN;
uint8_t x148 = 6U;
int32_t x152 = 1;
volatile int32_t x161 = -69144109;
int64_t x165 = INT64_MIN;
static int16_t x166 = 6;
int64_t x168 = INT64_MIN;
int64_t x171 = 4731LL;
static int8_t x182 = -1;
int32_t x184 = INT32_MAX;
volatile int32_t t45 = -65160318;
int8_t x188 = -3;
volatile int8_t x190 = -1;
static volatile int32_t x192 = INT32_MIN;
uint8_t x193 = 45U;
int64_t x196 = 1LL;
int32_t x201 = -921;
int64_t t50 = -54726725LL;
volatile uint16_t x205 = UINT16_MAX;
static int64_t x206 = 19655LL;
int32_t x208 = INT32_MIN;
static uint32_t x209 = UINT32_MAX;
int8_t x217 = INT8_MAX;
static volatile int32_t t55 = -9;
volatile int64_t t57 = 542465208287LL;
int16_t x233 = -22;
uint32_t x235 = UINT32_MAX;
int32_t x239 = -152088;
int8_t x242 = INT8_MIN;
volatile int32_t t61 = 1310336;
uint32_t x251 = 35654U;
static uint16_t x255 = 3U;
uint16_t x260 = 4U;
int64_t x269 = INT64_MAX;
int16_t x271 = -1;
int32_t t67 = -1015;
volatile int32_t t68 = -1589;
volatile int32_t x277 = INT32_MIN;
int16_t x279 = INT16_MIN;
volatile uint64_t t71 = 336880342274877064LLU;
uint64_t t72 = 2LLU;
int16_t x297 = -241;
int32_t x298 = -321576538;
int8_t x302 = -6;
volatile int32_t t75 = 636;
uint8_t x305 = 4U;
static uint64_t t77 = 147LLU;
volatile int16_t x313 = -36;
int16_t x314 = INT16_MAX;
uint64_t x316 = UINT64_MAX;
volatile uint64_t t79 = 0LLU;
int32_t x325 = INT32_MIN;
int64_t x331 = INT64_MAX;
volatile int32_t t84 = -1901309;
int16_t x349 = INT16_MIN;
uint64_t x351 = 9790576LLU;
int32_t x352 = -1;
uint32_t x353 = UINT32_MAX;
int32_t x356 = -1;
static uint16_t x366 = UINT16_MAX;
uint64_t x370 = UINT64_MAX;
static int16_t x373 = INT16_MIN;
int64_t x377 = INT64_MIN;
volatile uint64_t x380 = UINT64_MAX;
int64_t x388 = INT64_MIN;
uint16_t x391 = UINT16_MAX;
static uint16_t x393 = 1317U;
static int64_t x403 = -1174093895541LL;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = -1LL;
	uint8_t x3 = UINT8_MAX;

	t0 = ((x1<=x2)/(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 22472U;
	uint8_t x6 = 103U;
	volatile uint16_t x7 = UINT16_MAX;
	uint8_t x8 = 6U;
	volatile int32_t t1 = -180292677;

	t1 = ((x5<=x6)/(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static uint8_t x11 = UINT8_MAX;
	static int32_t x12 = 1;

	t2 = ((x9<=x10)/(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile int16_t x14 = 2943;
	int32_t x15 = INT32_MAX;
	int16_t x16 = -22;
	volatile int32_t t3 = 5758891;

	t3 = ((x13<=x14)/(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -816597LL;
	uint8_t x18 = 7U;
	int32_t x19 = -572276;
	uint32_t x20 = 4382796U;

	t4 = ((x17<=x18)/(x19^x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	volatile int16_t x23 = -1;
	static int8_t x24 = 2;
	volatile int32_t t5 = 436342430;

	t5 = ((x21<=x22)/(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x26 = INT64_MIN;
	uint16_t x27 = 8U;
	uint16_t x28 = UINT16_MAX;

	t6 = ((x25<=x26)/(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	uint16_t x30 = UINT16_MAX;
	uint64_t x31 = 401333063463692LLU;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 4249578893077210558LLU;

	t7 = ((x29<=x30)/(x31^x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = INT8_MIN;
	uint32_t x34 = 2125539U;
	uint32_t x35 = UINT32_MAX;
	volatile uint16_t x36 = UINT16_MAX;

	t8 = ((x33<=x34)/(x35^x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int8_t x38 = 15;
	static uint32_t x39 = 6670U;
	uint32_t t9 = 46U;

	t9 = ((x37<=x38)/(x39^x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 963U;
	uint64_t x43 = 164250500352497LLU;
	volatile uint64_t x44 = 96146287LLU;
	volatile uint64_t t10 = 51937LLU;

	t10 = ((x41<=x42)/(x43^x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint16_t x46 = 8U;
	uint64_t x48 = 393013229816940640LLU;
	static volatile uint64_t t11 = 95348404691LLU;

	t11 = ((x45<=x46)/(x47^x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -4;
	uint16_t x50 = 192U;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = 3394429LLU;

	t12 = ((x49<=x50)/(x51^x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 6U;
	int32_t x55 = 5693;
	int8_t x56 = -5;
	volatile int32_t t13 = -1847;

	t13 = ((x53<=x54)/(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 660800587LLU;
	int32_t x58 = INT32_MAX;
	uint64_t x59 = UINT64_MAX;
	static volatile uint64_t x60 = 447720361239797LLU;
	uint64_t t14 = 32401295LLU;

	t14 = ((x57<=x58)/(x59^x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x63 = UINT32_MAX;
	static int64_t x64 = -34891046874LL;
	static volatile int64_t t15 = 2752LL;

	t15 = ((x61<=x62)/(x63^x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	volatile int32_t t16 = 0;

	t16 = ((x65<=x66)/(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 1800U;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -1603;

	t17 = ((x69<=x70)/(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 655U;
	int32_t x74 = 1662279;
	volatile int8_t x75 = 15;
	static int32_t x76 = INT32_MIN;
	static volatile int32_t t18 = 5;

	t18 = ((x73<=x74)/(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 310002225978219154LLU;
	int32_t x78 = INT32_MIN;
	volatile uint8_t x79 = 19U;
	int32_t x80 = -1;
	volatile int32_t t19 = 9;

	t19 = ((x77<=x78)/(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int32_t x83 = -1;

	t20 = ((x81<=x82)/(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	uint32_t x86 = 1U;
	uint32_t x87 = 1734138171U;
	volatile uint32_t t21 = 1928926058U;

	t21 = ((x85<=x86)/(x87^x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MIN;
	int16_t x91 = 23;
	uint64_t x92 = 3793374217LLU;
	uint64_t t22 = 41751372938579277LLU;

	t22 = ((x89<=x90)/(x91^x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 0;
	int64_t x94 = INT64_MIN;
	int8_t x95 = -17;
	static uint8_t x96 = UINT8_MAX;
	int32_t t23 = 97;

	t23 = ((x93<=x94)/(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 1;
	int16_t x98 = -1;
	int16_t x99 = INT16_MAX;
	int16_t x100 = -1;

	t24 = ((x97<=x98)/(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	volatile int32_t x102 = INT32_MIN;
	uint16_t x104 = 897U;
	int32_t t25 = -95110;

	t25 = ((x101<=x102)/(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = -1LL;
	int16_t x107 = -70;
	int16_t x108 = INT16_MIN;

	t26 = ((x105<=x106)/(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MIN;
	int32_t x112 = -1;
	int32_t t27 = -3204932;

	t27 = ((x109<=x110)/(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	int8_t x115 = 8;
	static volatile uint16_t x116 = 0U;
	volatile int32_t t28 = 3;

	t28 = ((x113<=x114)/(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 18397538;
	static uint8_t x118 = 82U;
	int32_t x119 = -1;
	volatile int32_t t29 = 463;

	t29 = ((x117<=x118)/(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	uint64_t x122 = 13679LLU;
	static volatile int8_t x124 = 1;
	int32_t t30 = 777037;

	t30 = ((x121<=x122)/(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = 0;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t31 = 997527106LLU;

	t31 = ((x125<=x126)/(x127^x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	uint8_t x132 = UINT8_MAX;

	t32 = ((x129<=x130)/(x131^x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	static volatile uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MAX;
	volatile int32_t t33 = 26351;

	t33 = ((x133<=x134)/(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x139 = 19454437231888LLU;
	volatile uint64_t t34 = 94131LLU;

	t34 = ((x137<=x138)/(x139^x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MAX;
	int16_t x144 = -1;
	int32_t t35 = -14;

	t35 = ((x141<=x142)/(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	static int8_t x147 = -40;
	int32_t t36 = 466915;

	t36 = ((x145<=x146)/(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 2U;
	int8_t x150 = INT8_MIN;
	int64_t x151 = -1LL;
	volatile int64_t t37 = 64831584505809640LL;

	t37 = ((x149<=x150)/(x151^x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	static int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t38 = -8220LL;

	t38 = ((x153<=x154)/(x155^x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	uint32_t x158 = 223377U;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MAX;
	uint32_t t39 = 32708U;

	t39 = ((x157<=x158)/(x159^x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x162 = -1;
	volatile int16_t x163 = INT16_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t40 = 128665362U;

	t40 = ((x161<=x162)/(x163^x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x167 = 4841657LL;
	int64_t t41 = 499419192LL;

	t41 = ((x165<=x166)/(x167^x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	uint32_t x170 = 47576U;
	volatile int16_t x172 = -1;
	volatile int64_t t42 = 4118986322331805510LL;

	t42 = ((x169<=x170)/(x171^x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 21U;
	int16_t x174 = INT16_MIN;
	static int64_t x175 = INT64_MIN;
	int8_t x176 = -2;
	int64_t t43 = -3085942583445507LL;

	t43 = ((x173<=x174)/(x175^x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = 3741094LL;
	int32_t x178 = -27863;
	uint16_t x179 = 0U;
	int16_t x180 = INT16_MAX;
	int32_t t44 = 3192;

	t44 = ((x177<=x178)/(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 120156234676LL;
	int16_t x183 = INT16_MIN;

	t45 = ((x181<=x182)/(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint8_t x186 = 3U;
	int32_t x187 = INT32_MIN;
	static int32_t t46 = 36;

	t46 = ((x185<=x186)/(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 15560895LL;
	uint8_t x191 = 14U;
	int32_t t47 = 2769749;

	t47 = ((x189<=x190)/(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = 250540951242667LL;
	volatile int8_t x195 = -12;
	volatile int64_t t48 = 33LL;

	t48 = ((x193<=x194)/(x195^x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile int64_t x198 = -1LL;
	uint64_t x199 = 26600873LLU;
	uint64_t x200 = 1869LLU;
	volatile uint64_t t49 = 17LLU;

	t49 = ((x197<=x198)/(x199^x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	int64_t x203 = INT64_MAX;
	volatile int16_t x204 = INT16_MIN;

	t50 = ((x201<=x202)/(x203^x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = -1;
	volatile int32_t t51 = -2064380;

	t51 = ((x205<=x206)/(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x210 = 3505U;
	uint64_t x211 = 1208896512LLU;
	int8_t x212 = INT8_MIN;
	uint64_t t52 = 4090940534LLU;

	t52 = ((x209<=x210)/(x211^x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int16_t x214 = -1;
	int8_t x215 = 26;
	int16_t x216 = -1;
	static volatile int32_t t53 = -589714;

	t53 = ((x213<=x214)/(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	volatile int8_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -382012;

	t54 = ((x217<=x218)/(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = 974663LL;
	int32_t x222 = -1;
	int16_t x223 = 3;
	uint8_t x224 = 4U;

	t55 = ((x221<=x222)/(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 0U;
	int64_t x226 = -8LL;
	int16_t x227 = INT16_MIN;
	volatile int16_t x228 = -5217;
	static volatile int32_t t56 = 95;

	t56 = ((x225<=x226)/(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 0U;
	uint32_t x230 = UINT32_MAX;
	static volatile uint32_t x231 = 699152U;
	int64_t x232 = INT64_MAX;

	t57 = ((x229<=x230)/(x231^x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x234 = -1LL;
	int16_t x236 = INT16_MIN;
	uint32_t t58 = 7988501U;

	t58 = ((x233<=x234)/(x235^x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	int64_t x238 = -4LL;
	static int8_t x240 = INT8_MIN;
	static volatile int32_t t59 = 1;

	t59 = ((x237<=x238)/(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 104LL;
	int32_t x243 = -1768;
	volatile int64_t x244 = INT64_MIN;
	int64_t t60 = -39782957040730084LL;

	t60 = ((x241<=x242)/(x243^x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 2295509379LL;
	uint8_t x246 = UINT8_MAX;
	int16_t x247 = -188;
	uint16_t x248 = 436U;

	t61 = ((x245<=x246)/(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 20;
	int32_t x250 = INT32_MIN;
	volatile uint8_t x252 = 6U;
	uint32_t t62 = 63U;

	t62 = ((x249<=x250)/(x251^x252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 11024036LLU;
	static int8_t x254 = -11;
	uint64_t x256 = UINT64_MAX;
	uint64_t t63 = 443753LLU;

	t63 = ((x253<=x254)/(x255^x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 17745539178467LLU;
	uint16_t x258 = UINT16_MAX;
	volatile uint16_t x259 = UINT16_MAX;
	volatile int32_t t64 = 7958;

	t64 = ((x257<=x258)/(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 509;
	volatile uint32_t x262 = UINT32_MAX;
	volatile int8_t x263 = INT8_MIN;
	int32_t x264 = -780343435;
	volatile int32_t t65 = 2;

	t65 = ((x261<=x262)/(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x265 = 598713LLU;
	uint16_t x266 = 63U;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = 6771855747068825LLU;
	uint64_t t66 = 215730651LLU;

	t66 = ((x265<=x266)/(x267^x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MAX;
	int8_t x272 = INT8_MAX;

	t67 = ((x269<=x270)/(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	uint64_t x274 = 207370336327LLU;
	static uint8_t x275 = 5U;
	volatile int8_t x276 = 13;

	t68 = ((x273<=x274)/(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x278 = -1;
	int16_t x280 = 1;
	static int32_t t69 = -118403;

	t69 = ((x277<=x278)/(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	volatile uint64_t x282 = 94977372588117LLU;
	int16_t x283 = INT16_MIN;
	volatile uint8_t x284 = 21U;
	volatile int32_t t70 = -293;

	t70 = ((x281<=x282)/(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MIN;
	volatile int64_t x286 = -1972144557LL;
	uint64_t x287 = 142007537310378LLU;
	uint32_t x288 = 1266U;

	t71 = ((x285<=x286)/(x287^x288));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -1LL;
	int8_t x290 = -1;
	uint64_t x291 = 1742857LLU;
	int32_t x292 = INT32_MIN;

	t72 = ((x289<=x290)/(x291^x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 9143263048LL;
	volatile uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 1123U;
	int8_t x296 = -1;
	volatile int32_t t73 = -7157028;

	t73 = ((x293<=x294)/(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x299 = 22272U;
	volatile int16_t x300 = INT16_MAX;
	int32_t t74 = 3351;

	t74 = ((x297<=x298)/(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 0;
	int32_t x303 = -419;
	static volatile int8_t x304 = INT8_MIN;

	t75 = ((x301<=x302)/(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	int32_t x307 = INT32_MAX;
	volatile uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = 874;

	t76 = ((x305<=x306)/(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 1641U;
	static int32_t x310 = 77899655;
	static volatile uint16_t x311 = 1U;
	uint64_t x312 = 433LLU;

	t77 = ((x309<=x310)/(x311^x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x315 = 961LL;
	volatile uint64_t t78 = 2LLU;

	t78 = ((x313<=x314)/(x315^x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	static uint8_t x318 = 1U;
	uint64_t x319 = 869935716153162LLU;
	volatile uint32_t x320 = UINT32_MAX;

	t79 = ((x317<=x318)/(x319^x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	static volatile uint32_t x322 = 37756445U;
	static uint16_t x323 = UINT16_MAX;
	uint8_t x324 = 0U;
	int32_t t80 = -4;

	t80 = ((x321<=x322)/(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = 26787173U;
	uint32_t x327 = 865197933U;
	volatile int64_t x328 = -1LL;
	int64_t t81 = -15LL;

	t81 = ((x325<=x326)/(x327^x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 6281U;
	static int64_t x330 = -42560344366841LL;
	static uint64_t x332 = 42300068821680LLU;
	volatile uint64_t t82 = 128443436830689LLU;

	t82 = ((x329<=x330)/(x331^x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = 0U;
	volatile int8_t x334 = -1;
	volatile int16_t x335 = -1;
	static int8_t x336 = INT8_MAX;
	int32_t t83 = 57617;

	t83 = ((x333<=x334)/(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = 248;
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MAX;

	t84 = ((x337<=x338)/(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	volatile int64_t x342 = -402095807529570719LL;
	int64_t x343 = INT64_MAX;
	uint64_t x344 = UINT64_MAX;
	uint64_t t85 = 1LLU;

	t85 = ((x341<=x342)/(x343^x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 161329;
	int16_t x346 = INT16_MIN;
	int32_t x347 = 59;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 126063609;

	t86 = ((x345<=x346)/(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = UINT8_MAX;
	volatile uint64_t t87 = 50268LLU;

	t87 = ((x349<=x350)/(x351^x352));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = UINT8_MAX;
	static volatile int32_t x355 = INT32_MIN;
	static volatile int32_t t88 = -12107;

	t88 = ((x353<=x354)/(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -32547;
	volatile uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MAX;
	int8_t x360 = -1;
	volatile int32_t t89 = -2000554;

	t89 = ((x357<=x358)/(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 2U;
	volatile int32_t x362 = INT32_MAX;
	int8_t x363 = INT8_MAX;
	static volatile uint8_t x364 = 3U;
	volatile int32_t t90 = -24888672;

	t90 = ((x361<=x362)/(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	uint32_t x367 = 601620088U;
	static volatile int8_t x368 = INT8_MAX;
	volatile uint32_t t91 = 13U;

	t91 = ((x365<=x366)/(x367^x368));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int16_t x371 = INT16_MAX;
	int64_t x372 = INT64_MAX;
	volatile int64_t t92 = -432737653031746LL;

	t92 = ((x369<=x370)/(x371^x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MAX;
	int64_t x375 = 107816705LL;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int64_t t93 = -1052644524988LL;

	t93 = ((x373<=x374)/(x375^x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 98U;
	static uint8_t x379 = UINT8_MAX;
	volatile uint64_t t94 = 65LLU;

	t94 = ((x377<=x378)/(x379^x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 35325630911LLU;
	int32_t x382 = 311;
	int8_t x383 = -1;
	uint64_t x384 = 83456127LLU;
	volatile uint64_t t95 = 499173LLU;

	t95 = ((x381<=x382)/(x383^x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = UINT64_MAX;
	static int64_t x386 = 3582726LL;
	int32_t x387 = -1;
	int64_t t96 = 260725372376LL;

	t96 = ((x385<=x386)/(x387^x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	static int16_t x390 = -1;
	uint64_t x392 = 1089LLU;
	volatile uint64_t t97 = 34676035128LLU;

	t97 = ((x389<=x390)/(x391^x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = -1LL;
	int8_t x395 = -1;
	uint32_t x396 = 6U;
	uint32_t t98 = 12U;

	t98 = ((x393<=x394)/(x395^x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = 2487LL;
	uint16_t x402 = 9155U;
	int8_t x404 = INT8_MAX;
	int64_t t99 = -1649554160998LL;

	t99 = ((x401<=x402)/(x403^x404));

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

