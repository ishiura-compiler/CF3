#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = -1LL;
uint32_t x14 = UINT32_MAX;
volatile int16_t x16 = -1754;
volatile uint64_t t3 = 473660702LLU;
int8_t x18 = INT8_MIN;
volatile int32_t t4 = 262355158;
volatile uint8_t x21 = 4U;
int64_t x24 = -1LL;
static int32_t x30 = -1;
int32_t x38 = -1093959;
uint16_t x51 = 837U;
static uint64_t x53 = 587558LLU;
static volatile uint16_t x55 = 14872U;
static int16_t x59 = -2773;
uint8_t x60 = 1U;
int16_t x67 = INT16_MIN;
static int16_t x75 = -1;
uint32_t x76 = UINT32_MAX;
int32_t x88 = INT32_MAX;
int16_t x92 = INT16_MAX;
volatile int64_t x99 = -5120153LL;
int16_t x100 = INT16_MIN;
int8_t x106 = -6;
int16_t x108 = -1772;
volatile int32_t t26 = -80;
int16_t x113 = -1;
int32_t x119 = INT32_MIN;
int32_t t29 = 10;
uint16_t x127 = 1U;
uint16_t x136 = 862U;
static volatile uint32_t x138 = 570U;
uint64_t x141 = UINT64_MAX;
int16_t x142 = 4;
volatile uint64_t t35 = UINT64_MAX;
int64_t x152 = -1LL;
int32_t t37 = -9370;
static volatile int64_t t38 = -87633235LL;
uint8_t x162 = 58U;
static uint8_t x169 = 4U;
int8_t x171 = -3;
uint8_t x172 = UINT8_MAX;
volatile uint64_t x173 = 13673898LLU;
volatile int32_t t46 = 445515678;
static int32_t t47 = -100048;
uint16_t x194 = 6U;
int64_t x197 = INT64_MAX;
int32_t t50 = -4170014;
static int16_t x205 = 3468;
volatile uint8_t x208 = 49U;
int32_t x211 = -1;
uint16_t x218 = 67U;
static int64_t x219 = INT64_MIN;
uint8_t x222 = UINT8_MAX;
int8_t x223 = INT8_MIN;
int64_t x225 = -2397342636416492522LL;
int16_t x232 = INT16_MAX;
int32_t t58 = 56;
volatile int8_t x241 = INT8_MIN;
uint8_t x251 = UINT8_MAX;
volatile uint32_t x262 = 115U;
int8_t x269 = INT8_MIN;
volatile int32_t t67 = -33163;
uint32_t x276 = 2353194U;
static int16_t x278 = INT16_MIN;
static volatile int32_t t69 = 1356;
int64_t x283 = -2LL;
volatile uint64_t x284 = 2110113031435LLU;
int64_t x291 = INT64_MIN;
int32_t t72 = -64;
uint16_t x298 = 5U;
uint8_t x300 = 25U;
int8_t x304 = INT8_MIN;
volatile int16_t x312 = -25;
int64_t t77 = INT64_MIN;
uint64_t x319 = UINT64_MAX;
int16_t x320 = INT16_MIN;
static int16_t x325 = INT16_MIN;
uint32_t x326 = UINT32_MAX;
static int64_t x328 = INT64_MAX;
int32_t x333 = INT32_MIN;
int8_t x340 = INT8_MAX;
volatile int64_t x341 = -1LL;
uint16_t x349 = 1907U;
uint32_t x353 = 229694119U;
static volatile uint32_t x363 = 1253248499U;
int32_t x366 = 443779549;
volatile uint64_t x367 = 46LLU;
static int64_t t91 = 114796716LL;
int64_t x369 = 13938LL;
volatile int8_t x371 = 6;
volatile int32_t x374 = INT32_MIN;
volatile int32_t t93 = -1068265745;
int32_t x377 = -1;
int16_t x388 = -1;
static int32_t x396 = -232575868;


void f0(void) {
	int8_t x1 = 1;
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = UINT16_MAX;
	uint8_t x4 = 2U;
	volatile int32_t t0 = -40711;

	t0 = (x1|((x2/x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MIN;
	int32_t x6 = -1;
	uint64_t x7 = 21843631157LLU;
	volatile int32_t t1 = -19;

	t1 = (x5|((x6/x7)<=x8));

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 3U;
	volatile uint32_t x10 = 2U;
	int8_t x11 = -2;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = 42;

	t2 = (x9|((x10/x11)<=x12));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 10796260412104LLU;
	volatile int8_t x15 = INT8_MIN;

	t3 = (x13|((x14/x15)<=x16));

	if (t3 != 10796260412105LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 0U;
	int16_t x19 = 36;
	static int32_t x20 = INT32_MAX;

	t4 = (x17|((x18/x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = INT64_MIN;
	uint8_t x23 = 2U;
	int32_t t5 = 498431847;

	t5 = (x21|((x22/x23)<=x24));

	if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int32_t x26 = -242945555;
	volatile int8_t x27 = INT8_MAX;
	uint64_t x28 = 1916LLU;
	int32_t t6 = INT32_MIN;

	t6 = (x25|((x26/x27)<=x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint64_t x31 = 101475LLU;
	int32_t x32 = -4;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x29|((x30/x31)<=x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -1;
	uint32_t x34 = 8U;
	int16_t x35 = 6437;
	int8_t x36 = 0;
	volatile int32_t t8 = 4899433;

	t8 = (x33|((x34/x35)<=x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x39 = INT8_MIN;
	int16_t x40 = -1;
	static volatile int64_t t9 = INT64_MIN;

	t9 = (x37|((x38/x39)<=x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static int32_t x42 = INT32_MIN;
	volatile int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;
	int64_t t10 = INT64_MIN;

	t10 = (x41|((x42/x43)<=x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile int32_t x46 = -1;
	volatile int8_t x47 = -42;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -6805552;

	t11 = (x45|((x46/x47)<=x48));

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	uint8_t x50 = UINT8_MAX;
	static volatile int16_t x52 = INT16_MIN;
	static volatile int64_t t12 = INT64_MAX;

	t12 = (x49|((x50/x51)<=x52));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x54 = INT32_MIN;
	int32_t x56 = 13;
	static uint64_t t13 = 4226467978LLU;

	t13 = (x53|((x54/x55)<=x56));

	if (t13 != 587559LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint8_t x58 = 1U;
	int32_t t14 = 353;

	t14 = (x57|((x58/x59)<=x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = UINT64_MAX;
	static uint64_t x62 = UINT64_MAX;
	static uint16_t x63 = UINT16_MAX;
	int16_t x64 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x61|((x62/x63)<=x64));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	uint32_t x66 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	uint64_t t16 = UINT64_MAX;

	t16 = (x65|((x66/x67)<=x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 1U;
	int32_t x70 = INT32_MIN;
	int32_t x71 = -955;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = -3734048;

	t17 = (x69|((x70/x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 1;
	static int16_t x74 = INT16_MAX;
	static volatile int32_t t18 = 3000740;

	t18 = (x73|((x74/x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int64_t x78 = 44227LL;
	static int64_t x79 = -2199954170734070115LL;
	uint64_t x80 = 6283229861LLU;
	volatile int32_t t19 = 0;

	t19 = (x77|((x78/x79)<=x80));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -5LL;
	static int8_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	static uint32_t x84 = 194617U;
	volatile int64_t t20 = 30LL;

	t20 = (x81|((x82/x83)<=x84));

	if (t20 != -5LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	static int8_t x86 = -2;
	uint8_t x87 = UINT8_MAX;
	int64_t t21 = -15789304123LL;

	t21 = (x85|((x86/x87)<=x88));

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 1292LLU;
	int16_t x90 = 1;
	int64_t x91 = -1LL;
	uint64_t t22 = 868464191116LLU;

	t22 = (x89|((x90/x91)<=x92));

	if (t22 != 1293LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = UINT16_MAX;
	int64_t x94 = 332LL;
	static int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 54229;

	t23 = (x93|((x94/x95)<=x96));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint64_t x98 = 2865000583753648LLU;
	volatile int32_t t24 = 0;

	t24 = (x97|((x98/x99)<=x100));

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	int16_t x102 = 17;
	int32_t x103 = -1;
	static int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = 25;

	t25 = (x101|((x102/x103)<=x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = 95;
	int64_t x107 = 8274258680745615LL;

	t26 = (x105|((x106/x107)<=x108));

	if (t26 != 95) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = UINT8_MAX;
	static int16_t x110 = INT16_MAX;
	int64_t x111 = 185186860717LL;
	int64_t x112 = -1LL;
	volatile int32_t t27 = 127797500;

	t27 = (x109|((x110/x111)<=x112));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x114 = INT16_MIN;
	static volatile int8_t x115 = -1;
	volatile uint16_t x116 = 41U;
	int32_t t28 = 70179574;

	t28 = (x113|((x114/x115)<=x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 7U;
	volatile uint64_t x118 = 847501227218139689LLU;
	int8_t x120 = -3;

	t29 = (x117|((x118/x119)<=x120));

	if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint64_t x122 = UINT64_MAX;
	static volatile uint32_t x123 = 14478814U;
	int16_t x124 = INT16_MIN;
	static int64_t t30 = INT64_MAX;

	t30 = (x121|((x122/x123)<=x124));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MIN;
	static int16_t x128 = 0;
	int32_t t31 = -122638220;

	t31 = (x125|((x126/x127)<=x128));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -120544957;
	int64_t x130 = -29489278LL;
	int32_t x131 = -1;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 433052782;

	t32 = (x129|((x130/x131)<=x132));

	if (t32 != -120544957) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x133 = 1565828183806309LLU;
	int64_t x134 = 102176717LL;
	volatile int32_t x135 = INT32_MIN;
	uint64_t t33 = 0LLU;

	t33 = (x133|((x134/x135)<=x136));

	if (t33 != 1565828183806309LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 89U;
	volatile uint64_t x139 = 63985828190534LLU;
	static uint64_t x140 = 1341155850198LLU;
	int32_t t34 = -410170538;

	t34 = (x137|((x138/x139)<=x140));

	if (t34 != 89) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x143 = INT8_MIN;
	int8_t x144 = -1;

	t35 = (x141|((x142/x143)<=x144));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = UINT16_MAX;
	volatile int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = 128608438;

	t36 = (x145|((x146/x147)<=x148));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int32_t x150 = -1;
	static uint8_t x151 = UINT8_MAX;

	t37 = (x149|((x150/x151)<=x152));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -382889323172400490LL;
	static int16_t x154 = INT16_MIN;
	int64_t x155 = -1LL;
	static int64_t x156 = INT64_MIN;

	t38 = (x153|((x154/x155)<=x156));

	if (t38 != -382889323172400490LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	static volatile uint16_t x159 = UINT16_MAX;
	uint64_t x160 = UINT64_MAX;
	int64_t t39 = 902LL;

	t39 = (x157|((x158/x159)<=x160));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x163 = 5LLU;
	static int32_t x164 = -1;
	volatile int32_t t40 = -31034;

	t40 = (x161|((x162/x163)<=x164));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	static uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 709205166U;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = 13;

	t41 = (x165|((x166/x167)<=x168));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = UINT64_MAX;
	volatile int32_t t42 = 13019335;

	t42 = (x169|((x170/x171)<=x172));

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = -1LL;
	static uint32_t x175 = 19U;
	int32_t x176 = -1;
	volatile uint64_t t43 = 269079LLU;

	t43 = (x173|((x174/x175)<=x176));

	if (t43 != 13673898LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	volatile int64_t x178 = -11924706387LL;
	int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MIN;
	uint32_t t44 = UINT32_MAX;

	t44 = (x177|((x178/x179)<=x180));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	static volatile int16_t x182 = -1;
	uint16_t x183 = 44U;
	int8_t x184 = INT8_MAX;
	static int64_t t45 = 27515022316098066LL;

	t45 = (x181|((x182/x183)<=x184));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -234;
	int16_t x186 = -1;
	int64_t x187 = -1LL;
	int64_t x188 = 7363769439LL;

	t46 = (x185|((x186/x187)<=x188));

	if (t46 != -233) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	static int8_t x190 = INT8_MAX;
	volatile uint64_t x191 = 668864346440197LLU;
	static int16_t x192 = 130;

	t47 = (x189|((x190/x191)<=x192));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	volatile uint32_t x195 = 16200792U;
	uint16_t x196 = 1520U;
	int32_t t48 = -7082;

	t48 = (x193|((x194/x195)<=x196));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	int64_t x200 = -70530374837LL;
	static volatile int64_t t49 = INT64_MAX;

	t49 = (x197|((x198/x199)<=x200));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 125395;
	int16_t x202 = INT16_MIN;
	volatile int32_t x203 = INT32_MAX;
	int32_t x204 = -30;

	t50 = (x201|((x202/x203)<=x204));

	if (t50 != 125395) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = 1LL;
	static uint8_t x207 = UINT8_MAX;
	volatile int32_t t51 = 28522822;

	t51 = (x205|((x206/x207)<=x208));

	if (t51 != 3469) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	static int8_t x210 = -1;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = 1080355;

	t52 = (x209|((x210/x211)<=x212));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 8940156261460895LLU;
	int64_t x214 = INT64_MAX;
	volatile int32_t x215 = 7231361;
	int64_t x216 = -1LL;
	uint64_t t53 = 84322LLU;

	t53 = (x213|((x214/x215)<=x216));

	if (t53 != 8940156261460895LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = 54;
	uint32_t x220 = UINT32_MAX;
	int32_t t54 = -8849977;

	t54 = (x217|((x218/x219)<=x220));

	if (t54 != 55) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -29;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t55 = -49609465;

	t55 = (x221|((x222/x223)<=x224));

	if (t55 != -29) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MAX;
	volatile uint64_t x227 = 15LLU;
	int8_t x228 = INT8_MIN;
	volatile int64_t t56 = 81904105930LL;

	t56 = (x225|((x226/x227)<=x228));

	if (t56 != -2397342636416492521LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = INT16_MAX;
	int32_t t57 = 41717573;

	t57 = (x229|((x230/x231)<=x232));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = 31;
	int16_t x234 = 12664;
	int32_t x235 = 3912;
	int32_t x236 = INT32_MAX;

	t58 = (x233|((x234/x235)<=x236));

	if (t58 != 31) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -2;
	static int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	int32_t x240 = -8152332;
	static int32_t t59 = -9626;

	t59 = (x237|((x238/x239)<=x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x242 = INT16_MIN;
	static int8_t x243 = 2;
	uint64_t x244 = UINT64_MAX;
	int32_t t60 = -815;

	t60 = (x241|((x242/x243)<=x244));

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x245 = 0U;
	static volatile uint32_t x246 = UINT32_MAX;
	uint64_t x247 = 485299LLU;
	uint32_t x248 = 1030859U;
	volatile int32_t t61 = 11715765;

	t61 = (x245|((x246/x247)<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 6U;
	int16_t x250 = -415;
	int8_t x252 = 15;
	volatile int32_t t62 = 66465691;

	t62 = (x249|((x250/x251)<=x252));

	if (t62 != 7) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	int8_t x254 = -1;
	volatile int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	static int32_t t63 = 87125;

	t63 = (x253|((x254/x255)<=x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	int8_t x258 = -1;
	int16_t x259 = -1;
	static uint8_t x260 = 0U;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (x257|((x258/x259)<=x260));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -4;
	int32_t x263 = INT32_MIN;
	volatile int16_t x264 = INT16_MIN;
	int32_t t65 = 1018544;

	t65 = (x261|((x262/x263)<=x264));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = INT64_MAX;
	static int8_t x267 = 30;
	int32_t x268 = INT32_MAX;
	int32_t t66 = INT32_MIN;

	t66 = (x265|((x266/x267)<=x268));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x270 = -1;
	static volatile int32_t x271 = -1;
	int32_t x272 = INT32_MIN;

	t67 = (x269|((x270/x271)<=x272));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MAX;
	uint8_t x275 = UINT8_MAX;
	volatile int32_t t68 = -3477;

	t68 = (x273|((x274/x275)<=x276));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MAX;

	t69 = (x277|((x278/x279)<=x280));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 372U;
	int32_t x282 = INT32_MIN;
	int32_t t70 = 3207;

	t70 = (x281|((x282/x283)<=x284));

	if (t70 != 373) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MAX;
	volatile uint32_t x286 = 6065U;
	int32_t x287 = INT32_MIN;
	int64_t x288 = -1LL;
	volatile int64_t t71 = INT64_MAX;

	t71 = (x285|((x286/x287)<=x288));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x290 = UINT8_MAX;
	int8_t x292 = INT8_MAX;

	t72 = (x289|((x290/x291)<=x292));

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	static int64_t x294 = INT64_MAX;
	uint8_t x295 = 3U;
	static int64_t x296 = INT64_MAX;
	static volatile int64_t t73 = 12971606351LL;

	t73 = (x293|((x294/x295)<=x296));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x299 = 9U;
	volatile int32_t t74 = -65;

	t74 = (x297|((x298/x299)<=x300));

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x301 = 4452941718081714087LLU;
	uint32_t x302 = 180474U;
	static int16_t x303 = -1;
	uint64_t t75 = 183LLU;

	t75 = (x301|((x302/x303)<=x304));

	if (t75 != 4452941718081714087LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint32_t x306 = 105803034U;
	int32_t x307 = INT32_MAX;
	uint32_t x308 = 610655U;
	volatile int32_t t76 = 688490;

	t76 = (x305|((x306/x307)<=x308));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint8_t x310 = 6U;
	uint16_t x311 = UINT16_MAX;

	t77 = (x309|((x310/x311)<=x312));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MAX;
	volatile uint8_t x314 = UINT8_MAX;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 632825789U;
	static volatile int32_t t78 = -430477;

	t78 = (x313|((x314/x315)<=x316));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	volatile int8_t x318 = -4;
	volatile int32_t t79 = 49;

	t79 = (x317|((x318/x319)<=x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = -26;
	uint32_t x323 = 858306U;
	static int16_t x324 = INT16_MAX;
	int32_t t80 = -274021761;

	t80 = (x321|((x322/x323)<=x324));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x327 = 573765U;
	int32_t t81 = -37;

	t81 = (x325|((x326/x327)<=x328));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 46U;
	uint32_t x330 = 66755023U;
	uint8_t x331 = 93U;
	volatile int16_t x332 = INT16_MIN;
	int32_t t82 = -701;

	t82 = (x329|((x330/x331)<=x332));

	if (t82 != 47) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x334 = INT8_MIN;
	uint8_t x335 = 74U;
	uint16_t x336 = 1U;
	volatile int32_t t83 = 61708;

	t83 = (x333|((x334/x335)<=x336));

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	uint64_t x338 = UINT64_MAX;
	uint32_t x339 = UINT32_MAX;
	static volatile int32_t t84 = -3937551;

	t84 = (x337|((x338/x339)<=x340));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = -1;
	uint64_t x343 = 453978850847131LLU;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t85 = -142458473045966222LL;

	t85 = (x341|((x342/x343)<=x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = INT32_MIN;
	uint64_t x346 = 16792734439938838LLU;
	int8_t x347 = 1;
	uint32_t x348 = 376U;
	static volatile int32_t t86 = INT32_MIN;

	t86 = (x345|((x346/x347)<=x348));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	static uint16_t x351 = UINT16_MAX;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = 48451950;

	t87 = (x349|((x350/x351)<=x352));

	if (t87 != 1907) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x354 = UINT16_MAX;
	int32_t x355 = -708378;
	volatile uint16_t x356 = 6U;
	uint32_t t88 = 10346994U;

	t88 = (x353|((x354/x355)<=x356));

	if (t88 != 229694119U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 0U;
	int8_t x358 = 1;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -123392;

	t89 = (x357|((x358/x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	volatile int64_t x362 = -66729955260LL;
	volatile int8_t x364 = INT8_MAX;
	static int32_t t90 = 3819;

	t90 = (x361|((x362/x363)<=x364));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	int16_t x368 = INT16_MAX;

	t91 = (x365|((x366/x367)<=x368));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MAX;
	static int64_t x372 = -1LL;
	int64_t t92 = 1241LL;

	t92 = (x369|((x370/x371)<=x372));

	if (t92 != 13938LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MAX;

	t93 = (x373|((x374/x375)<=x376));

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x378 = 1678080325168713843LL;
	static int64_t x379 = INT64_MAX;
	uint64_t x380 = UINT64_MAX;
	static int32_t t94 = 1;

	t94 = (x377|((x378/x379)<=x380));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = 99079LL;
	static volatile uint32_t x383 = 201U;
	int32_t x384 = 32620980;
	int32_t t95 = -21650;

	t95 = (x381|((x382/x383)<=x384));

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = -869744651LL;
	uint32_t x387 = 1165131397U;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x385|((x386/x387)<=x388));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = -117589;
	uint32_t x390 = 4U;
	static volatile int64_t x391 = INT64_MIN;
	static int32_t x392 = -1;
	volatile int32_t t97 = 55;

	t97 = (x389|((x390/x391)<=x392));

	if (t97 != -117589) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = UINT8_MAX;
	static uint32_t x394 = 3U;
	volatile int32_t x395 = 2059195;
	volatile int32_t t98 = 292;

	t98 = (x393|((x394/x395)<=x396));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = UINT64_MAX;
	uint16_t x399 = UINT16_MAX;
	static uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = INT32_MIN;

	t99 = (x397|((x398/x399)<=x400));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

