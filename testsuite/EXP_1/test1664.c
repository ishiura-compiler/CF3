#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -7;
int32_t x17 = INT32_MAX;
uint32_t x21 = 32509718U;
uint16_t x22 = 5U;
int16_t x25 = INT16_MIN;
volatile uint32_t x32 = UINT32_MAX;
volatile uint32_t t7 = 772928U;
int16_t x42 = 31;
uint32_t x54 = UINT32_MAX;
int16_t x58 = INT16_MAX;
volatile uint32_t t14 = 429484U;
volatile int64_t x67 = 37142488LL;
static int64_t x68 = INT64_MIN;
volatile int16_t x69 = INT16_MIN;
int8_t x72 = INT8_MIN;
static volatile int16_t x80 = -1;
static int8_t x81 = -1;
int16_t x85 = INT16_MIN;
int32_t x86 = -333512;
volatile int32_t t21 = 29;
static int64_t x101 = -1LL;
static volatile int32_t t25 = -7762;
static int16_t x106 = -1;
int32_t x108 = INT32_MIN;
int32_t x112 = INT32_MAX;
static int32_t t27 = INT32_MAX;
static uint8_t x115 = 3U;
int16_t x116 = 98;
int8_t x126 = INT8_MIN;
volatile int64_t x127 = -84024022160LL;
int16_t x128 = INT16_MIN;
uint64_t x131 = 6842563LLU;
static uint64_t t32 = 16634008LLU;
uint64_t x137 = 10LLU;
uint32_t x139 = UINT32_MAX;
uint64_t x143 = 29244594700996LLU;
static volatile int16_t x148 = 305;
uint64_t x161 = 22818LLU;
static volatile int32_t t43 = -7013037;
int8_t x178 = INT8_MIN;
static uint8_t x184 = 7U;
static int64_t x195 = 28770146406903LL;
uint16_t x196 = UINT16_MAX;
volatile int64_t t48 = 298034LL;
volatile uint8_t x200 = 3U;
int32_t t50 = -209836;
static int16_t x206 = INT16_MIN;
uint8_t x210 = 10U;
uint32_t x214 = UINT32_MAX;
int32_t t53 = -1084;
volatile int16_t x218 = 0;
uint16_t x223 = 962U;
int8_t x237 = -47;
int32_t x239 = -21922;
static uint8_t x245 = UINT8_MAX;
int64_t x246 = -14803173665315595LL;
volatile uint32_t x247 = 9U;
int16_t x255 = INT16_MAX;
static uint32_t x259 = 113753U;
int8_t x264 = -1;
int32_t x266 = -1;
uint16_t x268 = 183U;
volatile int16_t x269 = INT16_MAX;
volatile int32_t t67 = 50;
uint8_t x276 = UINT8_MAX;
static int8_t x279 = 2;
static int8_t x283 = INT8_MAX;
volatile int32_t t70 = -1;
int32_t t71 = -2663;
volatile int64_t x289 = INT64_MIN;
static volatile uint32_t x298 = UINT32_MAX;
static volatile int32_t x313 = -1;
volatile uint16_t x314 = UINT16_MAX;
int8_t x318 = INT8_MIN;
volatile int8_t x330 = INT8_MAX;
static volatile int64_t t83 = -140305104760370707LL;
static int16_t x341 = INT16_MAX;
int64_t t85 = -37444LL;
int32_t x349 = -29186;
int16_t x350 = -1;
volatile int32_t t91 = -4;
int8_t x372 = 22;
volatile int64_t t92 = 1LL;
volatile int64_t x381 = INT64_MIN;
int16_t x382 = -1;
static volatile int8_t x383 = INT8_MIN;
int64_t x385 = INT64_MAX;
int32_t t96 = -510;
uint8_t x391 = UINT8_MAX;
static uint64_t t98 = 1012726497LLU;
volatile uint64_t x397 = 246821003545LLU;
static uint32_t x398 = 51673U;
int32_t x399 = INT32_MIN;
int64_t x400 = 33441453LL;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	static uint32_t x2 = 0U;
	int64_t x3 = INT64_MIN;
	uint8_t x4 = 0U;
	static volatile int64_t t0 = -35293691LL;

	t0 = (((x1<=x2)&x3)^x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1535;
	static int16_t x6 = INT16_MAX;
	int8_t x7 = -1;
	volatile int32_t x8 = INT32_MIN;
	static int32_t t1 = 4;

	t1 = (((x5<=x6)&x7)^x8);

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -64785552;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = INT32_MAX;
	volatile uint64_t t2 = 531985498LLU;

	t2 = (((x9<=x10)&x11)^x12);

	if (t2 != 2147483646LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -431093400737702LL;
	int64_t x14 = INT64_MIN;
	int64_t x15 = 2411629LL;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = (((x13<=x14)&x15)^x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = 3621775992552LL;
	int64_t x19 = -1LL;
	uint64_t x20 = 7836457206766563599LLU;
	uint64_t t4 = 93774484923LLU;

	t4 = (((x17<=x18)&x19)^x20);

	if (t4 != 7836457206766563598LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MIN;
	volatile int32_t x24 = 30934074;
	volatile int32_t t5 = 10;

	t5 = (((x21<=x22)&x23)^x24);

	if (t5 != 30934074) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 1284581U;
	int8_t x27 = -30;
	uint8_t x28 = 13U;
	volatile int32_t t6 = 5055997;

	t6 = (((x25<=x26)&x27)^x28);

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	uint16_t x30 = 7U;
	static uint32_t x31 = UINT32_MAX;

	t7 = (((x29<=x30)&x31)^x32);

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 722185U;
	uint32_t x34 = UINT32_MAX;
	uint32_t x35 = 1U;
	volatile int16_t x36 = -1;
	volatile uint32_t t8 = 367017U;

	t8 = (((x33<=x34)&x35)^x36);

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 2;
	static volatile int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -138599;

	t9 = (((x37<=x38)&x39)^x40);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	static int8_t x43 = -1;
	uint64_t x44 = 29LLU;
	volatile uint64_t t10 = 2412360049189LLU;

	t10 = (((x41<=x42)&x43)^x44);

	if (t10 != 28LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -5538869394359LL;
	uint32_t x46 = 781U;
	static uint32_t x47 = UINT32_MAX;
	uint32_t x48 = UINT32_MAX;
	uint32_t t11 = 4U;

	t11 = (((x45<=x46)&x47)^x48);

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -6;
	volatile int32_t x50 = -873388;
	volatile uint8_t x51 = 30U;
	static volatile int16_t x52 = -1;
	volatile int32_t t12 = -122286;

	t12 = (((x49<=x50)&x51)^x52);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	int64_t x55 = INT64_MAX;
	uint32_t x56 = 806U;
	volatile int64_t t13 = -1951LL;

	t13 = (((x53<=x54)&x55)^x56);

	if (t13 != 807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -58;
	static volatile uint32_t x59 = 716996555U;
	int8_t x60 = INT8_MAX;

	t14 = (((x57<=x58)&x59)^x60);

	if (t14 != 126U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 567796U;
	uint64_t x62 = 981889LLU;
	uint16_t x63 = 11162U;
	volatile int16_t x64 = INT16_MAX;
	volatile int32_t t15 = -336;

	t15 = (((x61<=x62)&x63)^x64);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile uint8_t x66 = 36U;
	volatile int64_t t16 = INT64_MIN;

	t16 = (((x65<=x66)&x67)^x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x70 = 28U;
	int64_t x71 = INT64_MIN;
	volatile int64_t t17 = -85LL;

	t17 = (((x69<=x70)&x71)^x72);

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 9;
	uint64_t x74 = UINT64_MAX;
	static uint32_t x75 = UINT32_MAX;
	volatile uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 1458836259U;

	t18 = (((x73<=x74)&x75)^x76);

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 239715870616LLU;
	int16_t x78 = 44;
	volatile uint32_t x79 = 7917306U;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (((x77<=x78)&x79)^x80);

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = 0;
	volatile int8_t x83 = INT8_MIN;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (((x81<=x82)&x83)^x84);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = 30039174;
	int16_t x88 = -8737;

	t21 = (((x85<=x86)&x87)^x88);

	if (t21 != -8737) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	static uint32_t x90 = UINT32_MAX;
	volatile int8_t x91 = 0;
	static int16_t x92 = INT16_MAX;
	int32_t t22 = -26227578;

	t22 = (((x89<=x90)&x91)^x92);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int64_t x94 = INT64_MIN;
	static uint64_t x95 = UINT64_MAX;
	int64_t x96 = -421942539LL;
	uint64_t t23 = 756279113055432100LLU;

	t23 = (((x93<=x94)&x95)^x96);

	if (t23 != 18446744073287609077LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	int64_t x98 = 1121140LL;
	uint8_t x99 = UINT8_MAX;
	static uint64_t x100 = 58747LLU;
	volatile uint64_t t24 = 1806071861392748216LLU;

	t24 = (((x97<=x98)&x99)^x100);

	if (t24 != 58746LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = -1LL;
	int16_t x103 = INT16_MAX;
	int32_t x104 = -3;

	t25 = (((x101<=x102)&x103)^x104);

	if (t25 != -4) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 0U;
	static uint32_t x107 = UINT32_MAX;
	uint32_t t26 = 34209U;

	t26 = (((x105<=x106)&x107)^x108);

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 29U;
	int16_t x110 = INT16_MIN;
	int16_t x111 = 0;

	t27 = (((x109<=x110)&x111)^x112);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = -2072452;
	int32_t t28 = -239;

	t28 = (((x113<=x114)&x115)^x116);

	if (t28 != 98) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -3;
	static int16_t x118 = INT16_MIN;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t x120 = 65151;
	volatile uint64_t t29 = 0LLU;

	t29 = (((x117<=x118)&x119)^x120);

	if (t29 != 65151LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	volatile int64_t x123 = INT64_MIN;
	static int32_t x124 = INT32_MIN;
	int64_t t30 = 5251114028059450LL;

	t30 = (((x121<=x122)&x123)^x124);

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 22051369U;
	int64_t t31 = 2690LL;

	t31 = (((x125<=x126)&x127)^x128);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	int8_t x132 = INT8_MAX;

	t32 = (((x129<=x130)&x131)^x132);

	if (t32 != 127LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 6;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t33 = -6839;

	t33 = (((x133<=x134)&x135)^x136);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = UINT8_MAX;
	volatile uint32_t x140 = 1934U;
	uint32_t t34 = 87623U;

	t34 = (((x137<=x138)&x139)^x140);

	if (t34 != 1935U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 27;
	static int32_t x142 = INT32_MIN;
	uint32_t x144 = 26561788U;
	uint64_t t35 = 3412303469LLU;

	t35 = (((x141<=x142)&x143)^x144);

	if (t35 != 26561788LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 1;
	int32_t x146 = -7253;
	static int8_t x147 = INT8_MIN;
	int32_t t36 = 81737;

	t36 = (((x145<=x146)&x147)^x148);

	if (t36 != 305) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	int64_t x150 = 9LL;
	int64_t x151 = INT64_MIN;
	static int16_t x152 = -1;
	static int64_t t37 = -16501140783LL;

	t37 = (((x149<=x150)&x151)^x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 3423U;
	uint32_t x154 = UINT32_MAX;
	int32_t x155 = -1;
	int16_t x156 = -3840;
	volatile int32_t t38 = 51858024;

	t38 = (((x153<=x154)&x155)^x156);

	if (t38 != -3839) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = 197724U;
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 208U;
	volatile int32_t t39 = 4;

	t39 = (((x157<=x158)&x159)^x160);

	if (t39 != 208) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x162 = -915;
	uint64_t x163 = 7965820009LLU;
	int8_t x164 = 63;
	uint64_t t40 = 88181759LLU;

	t40 = (((x161<=x162)&x163)^x164);

	if (t40 != 62LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	static uint16_t x166 = 1U;
	uint8_t x167 = 1U;
	volatile uint64_t x168 = 1738154134LLU;
	uint64_t t41 = 2626579052973LLU;

	t41 = (((x165<=x166)&x167)^x168);

	if (t41 != 1738154135LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 64U;
	uint16_t x170 = 1201U;
	int8_t x171 = INT8_MIN;
	static uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = (((x169<=x170)&x171)^x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = -58474;
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	int32_t x176 = INT32_MIN;

	t43 = (((x173<=x174)&x175)^x176);

	if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -373;
	volatile int64_t x179 = -2LL;
	volatile int32_t x180 = -1;
	volatile int64_t t44 = -1175140985510255LL;

	t44 = (((x177<=x178)&x179)^x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -7;
	uint8_t x182 = 26U;
	uint32_t x183 = 351788U;
	volatile uint32_t t45 = 13389702U;

	t45 = (((x181<=x182)&x183)^x184);

	if (t45 != 7U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = -5846686LL;
	uint16_t x187 = 17849U;
	volatile int32_t x188 = 159;
	int32_t t46 = -4871787;

	t46 = (((x185<=x186)&x187)^x188);

	if (t46 != 158) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 67548380732664LLU;
	uint16_t x190 = UINT16_MAX;
	uint64_t x191 = UINT64_MAX;
	uint64_t x192 = 377523593014875240LLU;
	uint64_t t47 = 113685LLU;

	t47 = (((x189<=x190)&x191)^x192);

	if (t47 != 377523593014875240LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = INT64_MIN;

	t48 = (((x193<=x194)&x195)^x196);

	if (t48 != 65534LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	volatile int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MAX;
	volatile int32_t t49 = 3;

	t49 = (((x197<=x198)&x199)^x200);

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = -1;
	static int64_t x202 = INT64_MAX;
	static int8_t x203 = -1;
	int8_t x204 = 0;

	t50 = (((x201<=x202)&x203)^x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = UINT64_MAX;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -127694;

	t51 = (((x205<=x206)&x207)^x208);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = 2772U;
	int16_t x211 = -8;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 64699;

	t52 = (((x209<=x210)&x211)^x212);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 362026776994940LLU;
	int32_t x215 = INT32_MIN;
	static volatile int32_t x216 = 318;

	t53 = (((x213<=x214)&x215)^x216);

	if (t53 != 318) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	int8_t x219 = 1;
	uint32_t x220 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

	t54 = (((x217<=x218)&x219)^x220);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	volatile int32_t x222 = INT32_MAX;
	int8_t x224 = INT8_MAX;
	int32_t t55 = -690223;

	t55 = (((x221<=x222)&x223)^x224);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 73U;
	int16_t x226 = INT16_MIN;
	static int32_t x227 = -508947;
	int32_t x228 = -46;
	static volatile int32_t t56 = -13260;

	t56 = (((x225<=x226)&x227)^x228);

	if (t56 != -46) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MAX;
	static int8_t x231 = -1;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 48637;

	t57 = (((x229<=x230)&x231)^x232);

	if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 11403U;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x233<=x234)&x235)^x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = -1;
	int8_t x240 = -17;
	int32_t t59 = -1;

	t59 = (((x237<=x238)&x239)^x240);

	if (t59 != -17) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = 7375707U;
	int32_t x243 = 221431814;
	volatile uint32_t x244 = 59U;
	static volatile uint32_t t60 = 6181U;

	t60 = (((x241<=x242)&x243)^x244);

	if (t60 != 59U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x248 = 90U;
	volatile uint32_t t61 = 0U;

	t61 = (((x245<=x246)&x247)^x248);

	if (t61 != 90U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -22;
	volatile int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int64_t t62 = -3423996903206LL;

	t62 = (((x249<=x250)&x251)^x252);

	if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1551830976LL;
	int32_t x254 = INT32_MAX;
	uint32_t x256 = UINT32_MAX;
	static volatile uint32_t t63 = 7910U;

	t63 = (((x253<=x254)&x255)^x256);

	if (t63 != 4294967294U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = -6552;
	int32_t x258 = -186;
	int32_t x260 = 163632093;
	volatile uint32_t t64 = 100595U;

	t64 = (((x257<=x258)&x259)^x260);

	if (t64 != 163632092U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 94;
	int16_t x262 = INT16_MIN;
	uint16_t x263 = 30U;
	int32_t t65 = -8125480;

	t65 = (((x261<=x262)&x263)^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = 213U;
	int64_t x267 = 199481134554192870LL;
	int64_t t66 = -2391090323LL;

	t66 = (((x265<=x266)&x267)^x268);

	if (t66 != 183LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -145;
	volatile int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MAX;

	t67 = (((x269<=x270)&x271)^x272);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 9900511060577LL;
	uint32_t x274 = 4451U;
	int16_t x275 = INT16_MIN;
	static volatile int32_t t68 = -41892;

	t68 = (((x273<=x274)&x275)^x276);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MIN;
	static uint32_t x280 = 247669452U;
	volatile uint32_t t69 = 718229U;

	t69 = (((x277<=x278)&x279)^x280);

	if (t69 != 247669452U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static int8_t x282 = INT8_MIN;
	uint16_t x284 = 43U;

	t70 = (((x281<=x282)&x283)^x284);

	if (t70 != 42) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MIN;
	static uint64_t x286 = UINT64_MAX;
	int16_t x287 = -1;
	int16_t x288 = 397;

	t71 = (((x285<=x286)&x287)^x288);

	if (t71 != 396) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = 164;
	int32_t x291 = 1;
	uint8_t x292 = UINT8_MAX;
	static volatile int32_t t72 = -5098085;

	t72 = (((x289<=x290)&x291)^x292);

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -3683362LL;
	int64_t x294 = 115328818LL;
	volatile int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 82390;

	t73 = (((x293<=x294)&x295)^x296);

	if (t73 != -2147483647) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int64_t x299 = 101512754527LL;
	int64_t x300 = -150120627304LL;
	volatile int64_t t74 = 29125730776807LL;

	t74 = (((x297<=x298)&x299)^x300);

	if (t74 != -150120627303LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = (((x301<=x302)&x303)^x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 9;
	int8_t x306 = -1;
	int64_t x307 = 20313648945577LL;
	uint16_t x308 = 31U;
	volatile int64_t t76 = 19LL;

	t76 = (((x305<=x306)&x307)^x308);

	if (t76 != 31LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = -1;
	int32_t x310 = 23;
	volatile int16_t x311 = -1;
	uint16_t x312 = 37U;
	static volatile int32_t t77 = -10;

	t77 = (((x309<=x310)&x311)^x312);

	if (t77 != 36) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x315 = 1U;
	int8_t x316 = INT8_MIN;
	static int32_t t78 = -6450;

	t78 = (((x313<=x314)&x315)^x316);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 67;
	int8_t x319 = -1;
	int64_t x320 = INT64_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = (((x317<=x318)&x319)^x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = 92826U;
	int16_t x323 = INT16_MIN;
	volatile int8_t x324 = -6;
	int32_t t80 = -668544929;

	t80 = (((x321<=x322)&x323)^x324);

	if (t80 != -6) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 1U;
	static int64_t x327 = -185106180115122LL;
	volatile int8_t x328 = INT8_MAX;
	int64_t t81 = 1653140972973348672LL;

	t81 = (((x325<=x326)&x327)^x328);

	if (t81 != 127LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	static int8_t x331 = -1;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t82 = 1468871;

	t82 = (((x329<=x330)&x331)^x332);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	volatile int8_t x334 = INT8_MIN;
	volatile uint32_t x335 = 95U;
	static int64_t x336 = INT64_MIN;

	t83 = (((x333<=x334)&x335)^x336);

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	volatile uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MAX;
	int16_t x340 = 13593;
	int32_t t84 = 516005;

	t84 = (((x337<=x338)&x339)^x340);

	if (t84 != 13592) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 47U;
	volatile int64_t x343 = INT64_MAX;
	static int64_t x344 = -1LL;

	t85 = (((x341<=x342)&x343)^x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -35;
	volatile int8_t x346 = INT8_MAX;
	int8_t x347 = -29;
	int64_t x348 = -946850500LL;
	volatile int64_t t86 = -55138994LL;

	t86 = (((x345<=x346)&x347)^x348);

	if (t86 != -946850499LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x351 = 31212506654950812LLU;
	int8_t x352 = -1;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = (((x349<=x350)&x351)^x352);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = -1LL;
	static uint64_t x355 = 1271283685LLU;
	volatile int32_t x356 = INT32_MAX;
	volatile uint64_t t88 = 4553LLU;

	t88 = (((x353<=x354)&x355)^x356);

	if (t88 != 2147483647LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MAX;
	int16_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x357<=x358)&x359)^x360);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint64_t x362 = 9789035682407LLU;
	int8_t x363 = -54;
	int32_t x364 = INT32_MIN;
	int32_t t90 = INT32_MIN;

	t90 = (((x361<=x362)&x363)^x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = UINT64_MAX;
	volatile int32_t x366 = INT32_MIN;
	int16_t x367 = -1;
	volatile uint16_t x368 = UINT16_MAX;

	t91 = (((x365<=x366)&x367)^x368);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 393166205807987870LLU;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = 20791541LL;

	t92 = (((x369<=x370)&x371)^x372);

	if (t92 != 22LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	static int32_t x374 = 60627719;
	uint64_t x375 = 8139519345900515048LLU;
	volatile int32_t x376 = 0;
	uint64_t t93 = 11035LLU;

	t93 = (((x373<=x374)&x375)^x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = 0;
	volatile int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MAX;
	int32_t t94 = 15784;

	t94 = (((x377<=x378)&x379)^x380);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x384 = INT8_MAX;
	volatile int32_t t95 = -4861;

	t95 = (((x381<=x382)&x383)^x384);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	int8_t x387 = -12;
	static uint16_t x388 = 0U;

	t96 = (((x385<=x386)&x387)^x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x389 = 0LL;
	uint16_t x390 = 2U;
	volatile int16_t x392 = INT16_MAX;
	int32_t t97 = -13592744;

	t97 = (((x389<=x390)&x391)^x392);

	if (t97 != 32766) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = 6U;
	int16_t x394 = 2129;
	volatile int8_t x395 = INT8_MAX;
	static uint64_t x396 = 444177693436076292LLU;

	t98 = (((x393<=x394)&x395)^x396);

	if (t98 != 444177693436076293LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t t99 = -326608532LL;

	t99 = (((x397<=x398)&x399)^x400);

	if (t99 != 33441453LL) { NG(); } else { ; }
	
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

