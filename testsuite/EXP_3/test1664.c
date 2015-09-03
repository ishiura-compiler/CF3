#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int64_t x2 = INT64_MAX;
static volatile int64_t t0 = 162338211962987LL;
volatile int64_t x7 = -1199889491LL;
volatile int16_t x17 = INT16_MAX;
int16_t x21 = -1447;
static int64_t x23 = INT64_MIN;
volatile uint32_t x27 = UINT32_MAX;
int16_t x31 = 1;
int32_t x34 = INT32_MAX;
int16_t x37 = INT16_MAX;
uint32_t x41 = 22788U;
static uint32_t t10 = 41718257U;
static int32_t t11 = 25683782;
uint32_t x51 = 139U;
int8_t x57 = INT8_MIN;
int64_t x67 = INT64_MIN;
uint8_t x68 = UINT8_MAX;
int32_t t16 = -1173714;
int16_t x72 = -1;
volatile int16_t x77 = INT16_MIN;
volatile int32_t x95 = -1;
volatile int32_t t23 = 3;
uint16_t x99 = UINT16_MAX;
uint32_t x105 = 5610U;
int16_t x110 = -125;
int8_t x114 = INT8_MAX;
int64_t x115 = -139791060699LL;
volatile uint16_t x122 = 1634U;
uint32_t x124 = 923708436U;
static volatile int64_t x134 = INT64_MIN;
int32_t x136 = 528697865;
int64_t t34 = 517036230030990941LL;
uint64_t t35 = 26721890147536570LLU;
volatile int64_t x145 = -8456976645915LL;
int32_t t39 = 5498;
uint64_t x163 = 26794791LLU;
static uint32_t x173 = 26920126U;
volatile int64_t x184 = -1LL;
static volatile int8_t x191 = 1;
uint32_t x195 = 75935149U;
static int32_t x199 = INT32_MIN;
int16_t x201 = INT16_MIN;
volatile int32_t t50 = 373378320;
uint8_t x206 = UINT8_MAX;
int32_t x212 = 6;
uint64_t t54 = 28372488LLU;
volatile int64_t x229 = -157715059945912573LL;
int64_t x233 = -1LL;
uint8_t x235 = UINT8_MAX;
uint8_t x236 = UINT8_MAX;
int64_t t58 = 643769393LL;
int32_t x241 = 11;
volatile uint64_t x250 = 553913972715LLU;
int16_t x253 = 27;
int32_t t65 = 1;
volatile int8_t x265 = INT8_MIN;
int64_t x283 = -1LL;
int32_t x289 = INT32_MAX;
static int64_t x291 = -1LL;
static int64_t t74 = -6459LL;
uint8_t x301 = 1U;
static int64_t x302 = INT64_MIN;
int8_t x306 = -45;
volatile int32_t t76 = -15;
volatile int32_t x311 = -13889486;
int8_t x315 = -21;
static volatile int64_t x327 = INT64_MIN;
static volatile int64_t t81 = -2LL;
uint8_t x329 = 2U;
static uint16_t x334 = 13843U;
int32_t t83 = -96545499;
static uint8_t x340 = 28U;
volatile int32_t x345 = -1;
uint16_t x353 = 397U;
int64_t x359 = -1LL;
static uint64_t x363 = 670LLU;
volatile uint8_t x366 = 61U;
static volatile int64_t x370 = 15663531613LL;
uint16_t x371 = 1U;
static int16_t x372 = INT16_MIN;
int32_t x375 = -1;
static uint8_t x377 = 1U;
int8_t x378 = 63;
uint16_t x388 = UINT16_MAX;
static int64_t t97 = -2351218781365722LL;
int16_t x399 = -42;


void f0(void) {
	volatile uint8_t x3 = 21U;
	int16_t x4 = -9215;

	t0 = ((x1&x2)^(x3<=x4));

	if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	int64_t x6 = INT64_MIN;
	uint32_t x8 = 201252385U;
	int64_t t1 = 36307923LL;

	t1 = ((x5&x6)^(x7<=x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int64_t x10 = INT64_MIN;
	volatile int16_t x11 = 202;
	static uint16_t x12 = 7U;
	static volatile int64_t t2 = INT64_MIN;

	t2 = ((x9&x10)^(x11<=x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x14 = UINT16_MAX;
	static int64_t x15 = INT64_MIN;
	uint32_t x16 = 310851U;
	int64_t t3 = 7LL;

	t3 = ((x13&x14)^(x15<=x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int16_t x19 = 123;
	static int32_t x20 = -920;
	volatile int32_t t4 = 3;

	t4 = ((x17&x18)^(x19<=x20));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 915162527;

	t5 = ((x21&x22)^(x23<=x24));

	if (t5 != 88) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	int16_t x26 = -1;
	int16_t x28 = -1722;
	int64_t t6 = INT64_MIN;

	t6 = ((x25&x26)^(x27<=x28));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 13325;
	static volatile int8_t x30 = INT8_MIN;
	static uint64_t x32 = 513403069694867LLU;
	volatile int32_t t7 = 6823;

	t7 = ((x29&x30)^(x31<=x32));

	if (t7 != 13313) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 46;
	static volatile int8_t x35 = INT8_MAX;
	int16_t x36 = -20;
	static int32_t t8 = -3088442;

	t8 = ((x33&x34)^(x35<=x36));

	if (t8 != 46) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = 1;
	int32_t x39 = INT32_MIN;
	static uint64_t x40 = 762855LLU;
	volatile int32_t t9 = 51958786;

	t9 = ((x37&x38)^(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MAX;
	static int64_t x44 = INT64_MIN;

	t10 = ((x41&x42)^(x43<=x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	static int16_t x46 = 15045;
	int64_t x47 = -1LL;
	int8_t x48 = 32;

	t11 = ((x45&x46)^(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	uint32_t x50 = 9U;
	int64_t x52 = 17556LL;
	volatile uint32_t t12 = 207679U;

	t12 = ((x49&x50)^(x51<=x52));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	static int64_t x54 = INT64_MAX;
	static uint64_t x55 = 1489098728165378046LLU;
	volatile uint16_t x56 = UINT16_MAX;
	int64_t t13 = 13293LL;

	t13 = ((x53&x54)^(x55<=x56));

	if (t13 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	int8_t x59 = 30;
	uint64_t x60 = 15636118583088188LLU;
	volatile int32_t t14 = 859823;

	t14 = ((x57&x58)^(x59<=x60));

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = -42;
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 20;

	t15 = ((x61&x62)^(x63<=x64));

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 297;
	volatile int16_t x66 = -1;

	t16 = ((x65&x66)^(x67<=x68));

	if (t16 != 296) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MAX;
	int32_t x70 = INT32_MIN;
	volatile uint8_t x71 = 0U;
	static int32_t t17 = 765457823;

	t17 = ((x69&x70)^(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 1U;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = -1724;
	volatile uint16_t x76 = 15104U;
	uint32_t t18 = 54U;

	t18 = ((x73&x74)^(x75<=x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MIN;
	int32_t x79 = 52176269;
	static volatile uint64_t x80 = 290130027735LLU;
	int32_t t19 = 8889041;

	t19 = ((x77&x78)^(x79<=x80));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 704U;
	uint32_t x82 = 16U;
	volatile uint16_t x83 = UINT16_MAX;
	volatile uint32_t x84 = UINT32_MAX;
	static uint32_t t20 = 8U;

	t20 = ((x81&x82)^(x83<=x84));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 9LL;
	int32_t x86 = INT32_MAX;
	static uint16_t x87 = 399U;
	int8_t x88 = 48;
	volatile int64_t t21 = 11414602611LL;

	t21 = ((x85&x86)^(x87<=x88));

	if (t21 != 9LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = UINT8_MAX;
	uint64_t x90 = UINT64_MAX;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 3964LLU;
	volatile uint64_t t22 = 38696LLU;

	t22 = ((x89&x90)^(x91<=x92));

	if (t22 != 255LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MIN;
	static int32_t x96 = INT32_MIN;

	t23 = ((x93&x94)^(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 1521U;
	static int64_t x98 = -1LL;
	int64_t x100 = INT64_MAX;
	static volatile int64_t t24 = 4LL;

	t24 = ((x97&x98)^(x99<=x100));

	if (t24 != 1520LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x101 = 94032U;
	int16_t x102 = INT16_MIN;
	int32_t x103 = 71;
	int32_t x104 = INT32_MIN;
	uint32_t t25 = 3U;

	t25 = ((x101&x102)^(x103<=x104));

	if (t25 != 65536U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 254818475U;
	int64_t x107 = -2144468932LL;
	int32_t x108 = -1;
	uint32_t t26 = 2U;

	t26 = ((x105&x106)^(x107<=x108));

	if (t26 != 4267U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = 1;
	static uint16_t x111 = UINT16_MAX;
	volatile int32_t x112 = 250;
	static int32_t t27 = 81761192;

	t27 = ((x109&x110)^(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	static int64_t x116 = -1LL;
	int32_t t28 = -307940936;

	t28 = ((x113&x114)^(x115<=x116));

	if (t28 != 126) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -687;
	int8_t x120 = -1;
	static int32_t t29 = -3;

	t29 = ((x117&x118)^(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 1U;
	int16_t x123 = -1;
	volatile int32_t t30 = 405570;

	t30 = ((x121&x122)^(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -31;
	static int32_t x126 = INT32_MIN;
	static int32_t x127 = -832175;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t31 = INT32_MIN;

	t31 = ((x125&x126)^(x127<=x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 932268U;
	static int16_t x131 = INT16_MIN;
	static int16_t x132 = INT16_MIN;
	volatile uint32_t t32 = 1539879U;

	t32 = ((x129&x130)^(x131<=x132));

	if (t32 != 932269U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -16;
	volatile int64_t x135 = -1LL;
	int64_t t33 = 42LL;

	t33 = ((x133&x134)^(x135<=x136));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile int8_t x138 = INT8_MIN;
	uint32_t x139 = 0U;
	static int32_t x140 = INT32_MAX;

	t34 = ((x137&x138)^(x139<=x140));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 0;
	uint64_t x142 = 3LLU;
	int64_t x143 = 779633704329LL;
	int64_t x144 = INT64_MIN;

	t35 = ((x141&x142)^(x143<=x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MAX;
	static int16_t x147 = 7;
	int8_t x148 = 5;
	volatile int64_t t36 = -1566655LL;

	t36 = ((x145&x146)^(x147<=x148));

	if (t36 != 1961443557LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 42U;
	uint8_t x150 = 1U;
	int8_t x151 = -11;
	int16_t x152 = -1;
	volatile uint32_t t37 = 276410U;

	t37 = ((x149&x150)^(x151<=x152));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 2859;
	int16_t x154 = INT16_MIN;
	static uint64_t x155 = 357242087885313LLU;
	volatile int64_t x156 = INT64_MAX;
	volatile int32_t t38 = 678357;

	t38 = ((x153&x154)^(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MIN;
	int8_t x158 = -1;
	static volatile int32_t x159 = -1;
	int32_t x160 = INT32_MAX;

	t39 = ((x157&x158)^(x159<=x160));

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint16_t x162 = 0U;
	int16_t x164 = INT16_MAX;
	int32_t t40 = -143371;

	t40 = ((x161&x162)^(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	volatile int32_t x166 = INT32_MIN;
	int8_t x167 = -1;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t41 = -7603LL;

	t41 = ((x165&x166)^(x167<=x168));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	volatile int64_t x170 = -1LL;
	static volatile int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	int64_t t42 = 16286276017LL;

	t42 = ((x169&x170)^(x171<=x172));

	if (t42 != 32766LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x174 = -1;
	int64_t x175 = INT64_MAX;
	uint64_t x176 = UINT64_MAX;
	uint32_t t43 = 14752U;

	t43 = ((x173&x174)^(x175<=x176));

	if (t43 != 26920127U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 166U;
	static int8_t x178 = INT8_MIN;
	static int64_t x179 = 42140428157LL;
	int16_t x180 = -663;
	static volatile int32_t t44 = -5147;

	t44 = ((x177&x178)^(x179<=x180));

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = 13550379198586989LLU;
	int64_t x182 = INT64_MIN;
	int16_t x183 = -319;
	volatile uint64_t t45 = 431349646758197123LLU;

	t45 = ((x181&x182)^(x183<=x184));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x186 = 1457U;
	int16_t x187 = INT16_MIN;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 219868;

	t46 = ((x185&x186)^(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	static int16_t x190 = -5499;
	int16_t x192 = 3;
	int64_t t47 = 629LL;

	t47 = ((x189&x190)^(x191<=x192));

	if (t47 != 9223372036854770308LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint64_t x194 = 67264185668LLU;
	volatile int32_t x196 = -1;
	static volatile uint64_t t48 = 1055674822008LLU;

	t48 = ((x193&x194)^(x195<=x196));

	if (t48 != 67264184321LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	int64_t x198 = INT64_MAX;
	uint16_t x200 = 1U;
	volatile int64_t t49 = 105482659308LL;

	t49 = ((x197&x198)^(x199<=x200));

	if (t49 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MIN;
	volatile uint16_t x203 = 2327U;
	int32_t x204 = 289975;

	t50 = ((x201&x202)^(x203<=x204));

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 0U;
	uint32_t x207 = UINT32_MAX;
	static uint64_t x208 = 7368154361988538654LLU;
	uint32_t t51 = 31U;

	t51 = ((x205&x206)^(x207<=x208));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static uint8_t x210 = 3U;
	uint32_t x211 = UINT32_MAX;
	volatile uint64_t t52 = 144398768983218616LLU;

	t52 = ((x209&x210)^(x211<=x212));

	if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = 319LLU;
	static uint32_t x216 = UINT32_MAX;
	int64_t t53 = 4465672504LL;

	t53 = ((x213&x214)^(x215<=x216));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint64_t x218 = 44690720138LLU;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = 14083436882431LLU;

	t54 = ((x217&x218)^(x219<=x220));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	static uint8_t x222 = UINT8_MAX;
	volatile uint32_t x223 = 89069U;
	int32_t x224 = -1;
	volatile int32_t t55 = 1;

	t55 = ((x221&x222)^(x223<=x224));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	int64_t x226 = INT64_MIN;
	static int32_t x227 = 1;
	volatile uint8_t x228 = UINT8_MAX;
	static volatile int64_t t56 = 7846LL;

	t56 = ((x225&x226)^(x227<=x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 4569U;
	static uint32_t x231 = 37489911U;
	volatile int8_t x232 = INT8_MAX;
	int64_t t57 = -1LL;

	t57 = ((x229&x230)^(x231<=x232));

	if (t57 != 257LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = 11;

	t58 = ((x233&x234)^(x235<=x236));

	if (t58 != 10LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint16_t x238 = 2932U;
	volatile uint32_t x239 = UINT32_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 4533535;

	t59 = ((x237&x238)^(x239<=x240));

	if (t59 != 2932) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = -1LL;
	static volatile uint16_t x243 = 31U;
	int64_t x244 = INT64_MAX;
	static volatile int64_t t60 = 3191703191849683LL;

	t60 = ((x241&x242)^(x243<=x244));

	if (t60 != 10LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	int16_t x246 = -2095;
	int32_t x247 = INT32_MIN;
	volatile int16_t x248 = INT16_MIN;
	int64_t t61 = 1147174756801186263LL;

	t61 = ((x245&x246)^(x247<=x248));

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	volatile int32_t x252 = INT32_MIN;
	uint64_t t62 = 7006LLU;

	t62 = ((x249&x250)^(x251<=x252));

	if (t62 != 553913942017LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x254 = UINT8_MAX;
	static uint64_t x255 = UINT64_MAX;
	volatile int64_t x256 = -860255LL;
	static int32_t t63 = 23915151;

	t63 = ((x253&x254)^(x255<=x256));

	if (t63 != 27) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 297464931386854363LLU;
	int16_t x258 = -1;
	int64_t x259 = 87487LL;
	uint8_t x260 = 18U;
	uint64_t t64 = 164LLU;

	t64 = ((x257&x258)^(x259<=x260));

	if (t64 != 297464931386854363LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -46;
	uint8_t x262 = 85U;
	int32_t x263 = INT32_MIN;
	static int32_t x264 = -1;

	t65 = ((x261&x262)^(x263<=x264));

	if (t65 != 81) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x266 = 46542241735799048LLU;
	static int64_t x267 = -1LL;
	volatile int8_t x268 = -11;
	volatile uint64_t t66 = 2877948054981727LLU;

	t66 = ((x265&x266)^(x267<=x268));

	if (t66 != 46542241735799040LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -1LL;
	int8_t x270 = -40;
	volatile int32_t x271 = INT32_MAX;
	int64_t x272 = 3025308889785515684LL;
	volatile int64_t t67 = -218LL;

	t67 = ((x269&x270)^(x271<=x272));

	if (t67 != -39LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 22U;
	uint32_t x274 = UINT32_MAX;
	static int16_t x275 = -549;
	static uint16_t x276 = UINT16_MAX;
	static volatile uint32_t t68 = 2221U;

	t68 = ((x273&x274)^(x275<=x276));

	if (t68 != 23U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int8_t x278 = INT8_MIN;
	volatile uint8_t x279 = 3U;
	int16_t x280 = 1;
	int32_t t69 = 0;

	t69 = ((x277&x278)^(x279<=x280));

	if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	static int16_t x282 = 3;
	uint16_t x284 = 69U;
	volatile uint64_t t70 = 237641270LLU;

	t70 = ((x281&x282)^(x283<=x284));

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 47340;
	static uint16_t x286 = 252U;
	int64_t x287 = -1LL;
	uint8_t x288 = 15U;
	int32_t t71 = -59057;

	t71 = ((x285&x286)^(x287<=x288));

	if (t71 != 237) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = UINT64_MAX;
	int16_t x292 = INT16_MIN;
	uint64_t t72 = 2366256LLU;

	t72 = ((x289&x290)^(x291<=x292));

	if (t72 != 2147483647LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int32_t x294 = INT32_MAX;
	int16_t x295 = -2499;
	static int64_t x296 = INT64_MAX;
	volatile int32_t t73 = 105197;

	t73 = ((x293&x294)^(x295<=x296));

	if (t73 != 2147483646) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MAX;
	static int8_t x298 = 15;
	int8_t x299 = 0;
	int16_t x300 = INT16_MAX;

	t74 = ((x297&x298)^(x299<=x300));

	if (t74 != 14LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x303 = -1;
	int16_t x304 = 4;
	int64_t t75 = -8656400740110065LL;

	t75 = ((x301&x302)^(x303<=x304));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 25;
	static int16_t x307 = INT16_MAX;
	volatile uint64_t x308 = 10689102253038LLU;

	t76 = ((x305&x306)^(x307<=x308));

	if (t76 != 16) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 88598725U;
	int32_t x310 = INT32_MIN;
	static int64_t x312 = -1LL;
	static uint32_t t77 = 43U;

	t77 = ((x309&x310)^(x311<=x312));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 39028463LLU;
	static int32_t x314 = 4340335;
	volatile uint16_t x316 = 77U;
	volatile uint64_t t78 = 444319LLU;

	t78 = ((x313&x314)^(x315<=x316));

	if (t78 != 4325998LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 19;
	uint16_t x318 = 18U;
	uint64_t x319 = 69031324910261753LLU;
	int64_t x320 = INT64_MIN;
	int32_t t79 = 11;

	t79 = ((x317&x318)^(x319<=x320));

	if (t79 != 19) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	int8_t x322 = 12;
	uint16_t x323 = 798U;
	int8_t x324 = -7;
	volatile int32_t t80 = -2739;

	t80 = ((x321&x322)^(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 9730513722LL;
	int16_t x326 = -1;
	int32_t x328 = INT32_MAX;

	t81 = ((x325&x326)^(x327<=x328));

	if (t81 != 9730513723LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = INT32_MIN;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = -1;
	static volatile int32_t t82 = -251460;

	t82 = ((x329&x330)^(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 5U;
	int32_t x335 = INT32_MIN;
	int32_t x336 = 695001481;

	t83 = ((x333&x334)^(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	volatile int32_t x338 = -3960;
	volatile int16_t x339 = INT16_MIN;
	volatile int32_t t84 = 75;

	t84 = ((x337&x338)^(x339<=x340));

	if (t84 != 137) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 13551031LLU;
	volatile int16_t x342 = 1940;
	uint64_t x343 = 8935239865LLU;
	int8_t x344 = -11;
	uint64_t t85 = 120LLU;

	t85 = ((x341&x342)^(x343<=x344));

	if (t85 != 1429LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = 3U;
	volatile uint8_t x347 = UINT8_MAX;
	int64_t x348 = -95915492LL;
	volatile int32_t t86 = -27442794;

	t86 = ((x345&x346)^(x347<=x348));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x349 = 1U;
	uint16_t x350 = 1297U;
	volatile int16_t x351 = -1;
	volatile int8_t x352 = INT8_MAX;
	int32_t t87 = -2255;

	t87 = ((x349&x350)^(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	int32_t x355 = -1;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -317160;

	t88 = ((x353&x354)^(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 1822;
	uint16_t x358 = 1U;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = 15765152;

	t89 = ((x357&x358)^(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 115286240U;
	int64_t x362 = INT64_MAX;
	static int64_t x364 = INT64_MIN;
	static int64_t t90 = 7996751443227LL;

	t90 = ((x361&x362)^(x363<=x364));

	if (t90 != 115286241LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x365 = 2032U;
	static volatile int16_t x367 = -1;
	int8_t x368 = -40;
	uint32_t t91 = 2U;

	t91 = ((x365&x366)^(x367<=x368));

	if (t91 != 48U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	int64_t t92 = -2039061180LL;

	t92 = ((x369&x370)^(x371<=x372));

	if (t92 != 15663531520LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	int16_t x374 = INT16_MAX;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -2105983;

	t93 = ((x373&x374)^(x375<=x376));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x379 = INT8_MAX;
	static int32_t x380 = INT32_MIN;
	int32_t t94 = 4;

	t94 = ((x377&x378)^(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 5217390;
	int32_t x382 = 4819;
	int8_t x383 = INT8_MIN;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = -311686718;

	t95 = ((x381&x382)^(x383<=x384));

	if (t95 != 4163) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = 8U;
	uint16_t x386 = 1383U;
	volatile int8_t x387 = -7;
	int32_t t96 = 2651209;

	t96 = ((x385&x386)^(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MAX;
	uint8_t x391 = 15U;
	int8_t x392 = INT8_MIN;

	t97 = ((x389&x390)^(x391<=x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = 1338U;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = 8U;
	volatile int64_t t98 = -374621053LL;

	t98 = ((x393&x394)^(x395<=x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MIN;
	static volatile int32_t x400 = INT32_MAX;
	volatile int32_t t99 = -6;

	t99 = ((x397&x398)^(x399<=x400));

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

