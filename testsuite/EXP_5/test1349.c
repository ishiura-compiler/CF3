#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = INT64_MAX;
int64_t x15 = 1471248456652015LL;
volatile int8_t x20 = INT8_MIN;
uint64_t x25 = 2395167LLU;
uint16_t x26 = 4U;
uint32_t x28 = UINT32_MAX;
static int64_t x40 = INT64_MIN;
volatile int32_t t9 = 180250;
uint16_t x43 = 85U;
uint16_t x45 = 8964U;
volatile uint16_t x54 = 2499U;
int32_t t14 = 1197323;
static int16_t x68 = INT16_MAX;
int32_t t17 = 68;
volatile uint32_t x74 = 7161275U;
int32_t t18 = 1;
static int32_t x78 = INT32_MAX;
volatile int32_t t19 = 8412;
static uint64_t x85 = UINT64_MAX;
int8_t x87 = INT8_MAX;
uint32_t x91 = UINT32_MAX;
static volatile int16_t x100 = INT16_MIN;
uint8_t x103 = 16U;
int8_t x110 = INT8_MAX;
static int32_t t28 = -7221;
volatile int64_t x119 = -4452367363686LL;
int32_t t29 = -88469;
static volatile uint8_t x131 = UINT8_MAX;
int32_t t32 = -176496;
int32_t t33 = 29367503;
volatile int32_t t34 = -2333308;
int32_t t36 = 1;
volatile int32_t t37 = 15285;
int8_t x153 = 1;
static uint8_t x164 = 0U;
uint16_t x165 = 875U;
int8_t x169 = INT8_MAX;
uint32_t x173 = 7451U;
int32_t t45 = 130733;
volatile int32_t t47 = -1372;
uint32_t x194 = 126160523U;
int32_t x197 = 7212806;
uint8_t x203 = UINT8_MAX;
int32_t t50 = 52474004;
uint8_t x212 = UINT8_MAX;
uint64_t x213 = UINT64_MAX;
volatile int8_t x217 = INT8_MAX;
int64_t x223 = INT64_MIN;
int64_t x224 = 29139931145LL;
int32_t x228 = -1;
volatile int32_t t56 = 226;
volatile int32_t t57 = -119;
volatile int32_t x235 = -1;
int8_t x239 = INT8_MIN;
int32_t x240 = 776087;
int16_t x241 = INT16_MIN;
volatile int32_t t60 = 73373139;
static int32_t x246 = INT32_MIN;
int32_t x249 = INT32_MIN;
volatile int32_t t63 = 415209;
uint8_t x262 = 122U;
int8_t x265 = INT8_MIN;
uint64_t x270 = UINT64_MAX;
int32_t t68 = 114255802;
static int64_t x277 = 755350439LL;
int64_t x285 = 1308612839LL;
uint16_t x287 = 43U;
int16_t x294 = INT16_MIN;
int16_t x303 = -1;
static uint8_t x316 = UINT8_MAX;
volatile int32_t t78 = -1927;
int32_t x323 = -1;
volatile int8_t x324 = INT8_MIN;
static int16_t x340 = INT16_MAX;
int32_t t84 = 62443;
int8_t x347 = -53;
uint64_t x350 = 62246LLU;
static int8_t x359 = INT8_MAX;
static uint32_t x361 = UINT32_MAX;
int16_t x363 = 1;
int16_t x364 = -1;
int16_t x368 = INT16_MAX;
int32_t t91 = 6740108;
int16_t x371 = 1800;
int64_t x372 = -1LL;
volatile int32_t x375 = -7499462;
uint8_t x378 = 31U;
int64_t x382 = INT64_MIN;
static int8_t x383 = 4;
int8_t x386 = INT8_MAX;
static int64_t x388 = INT64_MIN;
int16_t x396 = -1;
volatile int32_t t98 = 33461;
volatile int64_t x398 = INT64_MIN;


void f0(void) {
	int16_t x1 = -1;
	volatile int8_t x2 = -7;
	volatile int8_t x3 = INT8_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = 5;

	t0 = (x1<=((x2==x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint32_t x6 = UINT32_MAX;
	uint16_t x7 = UINT16_MAX;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -381029578;

	t1 = (x5<=((x6==x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint16_t x11 = 12244U;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 2;

	t2 = (x9<=((x10==x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	int32_t x14 = -1748;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 0;

	t3 = (x13<=((x14==x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x18 = 0;
	int64_t x19 = -1LL;
	volatile int32_t t4 = -1;

	t4 = (x17<=((x18==x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MAX;
	volatile int8_t x22 = INT8_MIN;
	int8_t x23 = -1;
	int32_t x24 = 0;
	int32_t t5 = 121206;

	t5 = (x21<=((x22==x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = -5;
	volatile int32_t t6 = 6841617;

	t6 = (x25<=((x26==x27)^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MIN;
	uint32_t x31 = UINT32_MAX;
	int64_t x32 = -1LL;
	int32_t t7 = -74763;

	t7 = (x29<=((x30==x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 10U;
	uint64_t x34 = 0LLU;
	volatile uint8_t x35 = 22U;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 10547125;

	t8 = (x33<=((x34==x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint16_t x38 = 137U;
	uint8_t x39 = 38U;

	t9 = (x37<=((x38==x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	volatile uint32_t x42 = 9U;
	int32_t x44 = -1;
	int32_t t10 = 12;

	t10 = (x41<=((x42==x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x46 = UINT32_MAX;
	static int32_t x47 = -941486;
	static int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 2;

	t11 = (x45<=((x46==x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = 433;
	static uint32_t x51 = 8944704U;
	uint8_t x52 = 1U;
	volatile int32_t t12 = -1;

	t12 = (x49<=((x50==x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 0;
	uint64_t x55 = 61408133987LLU;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 12768;

	t13 = (x53<=((x54==x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2789375705LLU;
	uint64_t x58 = UINT64_MAX;
	uint32_t x59 = 97032773U;
	static int32_t x60 = INT32_MIN;

	t14 = (x57<=((x58==x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	int64_t x62 = -1LL;
	static int16_t x63 = -1;
	int32_t x64 = -1;
	volatile int32_t t15 = 349677;

	t15 = (x61<=((x62==x63)^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint16_t x66 = 3U;
	static int8_t x67 = -1;
	volatile int32_t t16 = -198423164;

	t16 = (x65<=((x66==x67)^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -438;
	int8_t x70 = INT8_MAX;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -1LL;

	t17 = (x69<=((x70==x71)^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 3833011U;
	static int32_t x75 = INT32_MIN;
	int64_t x76 = -1LL;

	t18 = (x73<=((x74==x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = 100U;
	static volatile uint64_t x79 = UINT64_MAX;
	int8_t x80 = INT8_MIN;

	t19 = (x77<=((x78==x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MAX;
	int64_t x82 = -1782LL;
	uint32_t x83 = 50872U;
	uint8_t x84 = UINT8_MAX;
	static volatile int32_t t20 = 102015230;

	t20 = (x81<=((x82==x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = INT64_MIN;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 3;

	t21 = (x85<=((x86==x87)^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	uint32_t x90 = UINT32_MAX;
	int16_t x92 = -1;
	volatile int32_t t22 = -22;

	t22 = (x89<=((x90==x91)^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -7535505398298145LL;
	static uint8_t x94 = 1U;
	volatile int16_t x95 = -12;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 2807;

	t23 = (x93<=((x94==x95)^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 12;
	int16_t x98 = INT16_MIN;
	int16_t x99 = 15;
	volatile int32_t t24 = -1;

	t24 = (x97<=((x98==x99)^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	static uint16_t x102 = UINT16_MAX;
	static int16_t x104 = -1;
	static volatile int32_t t25 = -118957;

	t25 = (x101<=((x102==x103)^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 38750322092LLU;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -15181491;
	volatile int32_t t26 = 104500391;

	t26 = (x105<=((x106==x107)^x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x111 = INT32_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t27 = 1982;

	t27 = (x109<=((x110==x111)^x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 328LL;
	volatile uint8_t x114 = 114U;
	volatile uint32_t x115 = UINT32_MAX;
	uint8_t x116 = 1U;

	t28 = (x113<=((x114==x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	uint32_t x118 = 7U;
	uint32_t x120 = UINT32_MAX;

	t29 = (x117<=((x118==x119)^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	static int64_t x122 = 208710274708LL;
	uint32_t x123 = 2U;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 0;

	t30 = (x121<=((x122==x123)^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	volatile int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MAX;
	int8_t x128 = -16;
	static volatile int32_t t31 = -462;

	t31 = (x125<=((x126==x127)^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = -126;
	static volatile uint32_t x130 = UINT32_MAX;
	uint64_t x132 = 1LLU;

	t32 = (x129<=((x130==x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 0U;
	int8_t x134 = INT8_MIN;
	volatile uint16_t x135 = UINT16_MAX;
	volatile int32_t x136 = 19333;

	t33 = (x133<=((x134==x135)^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	uint16_t x138 = UINT16_MAX;
	volatile uint64_t x139 = 2691329868LLU;
	int64_t x140 = -1858110439368LL;

	t34 = (x137<=((x138==x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int8_t x142 = -15;
	uint64_t x143 = 12497192631LLU;
	uint8_t x144 = 0U;
	static int32_t t35 = 737909;

	t35 = (x141<=((x142==x143)^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint64_t x146 = 93LLU;
	uint16_t x147 = UINT16_MAX;
	volatile int16_t x148 = INT16_MAX;

	t36 = (x145<=((x146==x147)^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 30U;
	static uint32_t x150 = 10U;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = -1;

	t37 = (x149<=((x150==x151)^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x154 = 3U;
	uint16_t x155 = 9396U;
	volatile uint64_t x156 = UINT64_MAX;
	int32_t t38 = 519;

	t38 = (x153<=((x154==x155)^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = 5U;
	int64_t x158 = INT64_MIN;
	static int8_t x159 = 17;
	volatile int64_t x160 = INT64_MAX;
	volatile int32_t t39 = -1;

	t39 = (x157<=((x158==x159)^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	uint16_t x162 = 32700U;
	static int8_t x163 = -1;
	int32_t t40 = 239040;

	t40 = (x161<=((x162==x163)^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 433813U;
	int64_t x167 = INT64_MAX;
	int16_t x168 = 27;
	volatile int32_t t41 = 45;

	t41 = (x165<=((x166==x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = 1305;
	volatile int8_t x171 = -1;
	int8_t x172 = -1;
	int32_t t42 = 67;

	t42 = (x169<=((x170==x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MAX;
	int64_t x175 = INT64_MAX;
	static uint32_t x176 = 1705034209U;
	int32_t t43 = -14;

	t43 = (x173<=((x174==x175)^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x177 = INT8_MIN;
	static int64_t x178 = 481996633492254184LL;
	volatile uint8_t x179 = 13U;
	static volatile int16_t x180 = -1;
	int32_t t44 = -10;

	t44 = (x177<=((x178==x179)^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 2785051U;
	int64_t x182 = INT64_MIN;
	uint8_t x183 = 0U;
	int8_t x184 = 58;

	t45 = (x181<=((x182==x183)^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MAX;
	uint16_t x187 = 408U;
	uint16_t x188 = 3118U;
	static volatile int32_t t46 = -7;

	t46 = (x185<=((x186==x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	uint32_t x190 = 1U;
	int64_t x191 = -1132511LL;
	int16_t x192 = INT16_MIN;

	t47 = (x189<=((x190==x191)^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -13482602;
	int16_t x195 = INT16_MAX;
	volatile int32_t x196 = -1;
	volatile int32_t t48 = -676783602;

	t48 = (x193<=((x194==x195)^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x198 = INT16_MAX;
	int32_t x199 = -1;
	static int8_t x200 = 0;
	volatile int32_t t49 = 121511291;

	t49 = (x197<=((x198==x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 5212LL;
	int8_t x202 = INT8_MAX;
	static int8_t x204 = -12;

	t50 = (x201<=((x202==x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int64_t x206 = INT64_MIN;
	static volatile int8_t x207 = INT8_MIN;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = 12882404;

	t51 = (x205<=((x206==x207)^x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = 6U;
	volatile int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	int32_t t52 = -11575;

	t52 = (x209<=((x210==x211)^x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = 350U;
	int32_t x215 = 164787;
	uint64_t x216 = 412212666784345LLU;
	int32_t t53 = -227903;

	t53 = (x213<=((x214==x215)^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x218 = INT8_MIN;
	volatile int8_t x219 = -1;
	int32_t x220 = INT32_MAX;
	int32_t t54 = 5825;

	t54 = (x217<=((x218==x219)^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 7U;
	int8_t x222 = INT8_MAX;
	volatile int32_t t55 = -1813677;

	t55 = (x221<=((x222==x223)^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x225 = 59U;
	int8_t x226 = INT8_MAX;
	int16_t x227 = 0;

	t56 = (x225<=((x226==x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 2;
	uint8_t x230 = 2U;
	static uint32_t x231 = 0U;
	int32_t x232 = -18617;

	t57 = (x229<=((x230==x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	int8_t x234 = INT8_MIN;
	uint32_t x236 = 3U;
	volatile int32_t t58 = 14;

	t58 = (x233<=((x234==x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 51LLU;
	int32_t x238 = -1;
	volatile int32_t t59 = -3963;

	t59 = (x237<=((x238==x239)^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = -1136644;
	int32_t x243 = 106;
	volatile int16_t x244 = 900;

	t60 = (x241<=((x242==x243)^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	uint64_t x247 = 6LLU;
	int32_t x248 = INT32_MIN;
	static int32_t t61 = -6934;

	t61 = (x245<=((x246==x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x250 = UINT64_MAX;
	int32_t x251 = INT32_MAX;
	uint64_t x252 = 814820076799625LLU;
	volatile int32_t t62 = 388806014;

	t62 = (x249<=((x250==x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = 162872217997202LLU;
	int16_t x255 = 1;
	int8_t x256 = INT8_MIN;

	t63 = (x253<=((x254==x255)^x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 21;
	static volatile int16_t x258 = INT16_MIN;
	static volatile int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	static int32_t t64 = 64861;

	t64 = (x257<=((x258==x259)^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint16_t x263 = 27U;
	int8_t x264 = -1;
	int32_t t65 = -403688157;

	t65 = (x261<=((x262==x263)^x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x266 = -5131;
	uint16_t x267 = 50U;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -228159192;

	t66 = (x265<=((x266==x267)^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -1;
	volatile uint64_t x271 = 2695015670861005773LLU;
	uint8_t x272 = 1U;
	volatile int32_t t67 = 10815;

	t67 = (x269<=((x270==x271)^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 4U;
	uint16_t x274 = UINT16_MAX;
	volatile uint64_t x275 = 1690148445023220LLU;
	uint8_t x276 = UINT8_MAX;

	t68 = (x273<=((x274==x275)^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x278 = -3318610798036688782LL;
	static int8_t x279 = -1;
	uint8_t x280 = 7U;
	static int32_t t69 = 1;

	t69 = (x277<=((x278==x279)^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -964285771332531470LL;
	int32_t x282 = -1;
	int16_t x283 = -1;
	volatile uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = 0;

	t70 = (x281<=((x282==x283)^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = 239447430967322LL;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -34088528;

	t71 = (x285<=((x286==x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 38;
	volatile int32_t x290 = INT32_MIN;
	volatile uint64_t x291 = 7611474LLU;
	static int64_t x292 = 7889LL;
	int32_t t72 = 0;

	t72 = (x289<=((x290==x291)^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int8_t x296 = 0;
	int32_t t73 = -182281;

	t73 = (x293<=((x294==x295)^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MAX;
	static int64_t x298 = -1LL;
	int16_t x299 = INT16_MIN;
	int32_t x300 = 1968623;
	static volatile int32_t t74 = 14;

	t74 = (x297<=((x298==x299)^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 699U;
	int16_t x302 = -64;
	int32_t x304 = 128115318;
	static int32_t t75 = 2004466;

	t75 = (x301<=((x302==x303)^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MIN;
	static uint64_t x306 = UINT64_MAX;
	volatile int16_t x307 = 1;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -255812;

	t76 = (x305<=((x306==x307)^x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	volatile uint64_t x310 = UINT64_MAX;
	int16_t x311 = INT16_MIN;
	uint32_t x312 = 1130U;
	static int32_t t77 = 798843;

	t77 = (x309<=((x310==x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 383962;
	volatile uint32_t x314 = 43558U;
	uint16_t x315 = 5U;

	t78 = (x313<=((x314==x315)^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 193400736472LLU;
	int32_t x318 = INT32_MIN;
	int64_t x319 = 7444LL;
	int16_t x320 = INT16_MAX;
	int32_t t79 = 43235802;

	t79 = (x317<=((x318==x319)^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	uint64_t x322 = 675LLU;
	int32_t t80 = -1484;

	t80 = (x321<=((x322==x323)^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int32_t x326 = -1;
	volatile int16_t x327 = 15;
	static int8_t x328 = -1;
	static volatile int32_t t81 = 19077;

	t81 = (x325<=((x326==x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 1LLU;
	int8_t x330 = -1;
	int64_t x331 = INT64_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -1235711;

	t82 = (x329<=((x330==x331)^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -14132617;
	uint8_t x334 = 56U;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t83 = -707;

	t83 = (x333<=((x334==x335)^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	static uint64_t x338 = UINT64_MAX;
	static int16_t x339 = INT16_MAX;

	t84 = (x337<=((x338==x339)^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = UINT32_MAX;
	int32_t t85 = -66384467;

	t85 = (x341<=((x342==x343)^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	uint16_t x346 = UINT16_MAX;
	volatile uint64_t x348 = 16609162054LLU;
	int32_t t86 = -4816;

	t86 = (x345<=((x346==x347)^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -98;
	int16_t x351 = INT16_MAX;
	volatile uint16_t x352 = 4U;
	static volatile int32_t t87 = -29304115;

	t87 = (x349<=((x350==x351)^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = 2875;
	int8_t x354 = INT8_MIN;
	static int8_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 21;

	t88 = (x353<=((x354==x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x358 = -12230;
	static uint64_t x360 = UINT64_MAX;
	int32_t t89 = -19159;

	t89 = (x357<=((x358==x359)^x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = 94115;
	static int32_t t90 = 1192;

	t90 = (x361<=((x362==x363)^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	uint32_t x366 = 24U;
	int32_t x367 = INT32_MAX;

	t91 = (x365<=((x366==x367)^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static int8_t x370 = INT8_MAX;
	volatile int32_t t92 = -444640;

	t92 = (x369<=((x370==x371)^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x373 = UINT64_MAX;
	int64_t x374 = 0LL;
	volatile uint64_t x376 = 65008987LLU;
	static int32_t t93 = 5420378;

	t93 = (x373<=((x374==x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	static volatile uint16_t x379 = UINT16_MAX;
	volatile uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = 117746152;

	t94 = (x377<=((x378==x379)^x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -939327829655LL;
	uint32_t x384 = UINT32_MAX;
	int32_t t95 = 245;

	t95 = (x381<=((x382==x383)^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	int64_t x387 = -1LL;
	int32_t t96 = 3;

	t96 = (x385<=((x386==x387)^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = UINT8_MAX;
	int8_t x390 = 4;
	int32_t x391 = -1;
	int32_t x392 = 245;
	static volatile int32_t t97 = -717819;

	t97 = (x389<=((x390==x391)^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	static int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;

	t98 = (x393<=((x394==x395)^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	uint64_t x399 = UINT64_MAX;
	static uint64_t x400 = UINT64_MAX;
	int32_t t99 = 189;

	t99 = (x397<=((x398==x399)^x400));

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

