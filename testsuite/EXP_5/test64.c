#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
uint64_t x12 = UINT64_MAX;
uint64_t x20 = 21916LLU;
int16_t x22 = -1;
volatile int16_t x23 = 3362;
static uint32_t x44 = 1450514498U;
static uint64_t t9 = 699396968997LLU;
static uint32_t x55 = UINT32_MAX;
volatile uint64_t t14 = 2LLU;
int64_t x67 = INT64_MIN;
int16_t x69 = INT16_MIN;
int16_t x70 = INT16_MAX;
static int32_t t16 = 836;
int32_t x77 = 0;
static int16_t x78 = -1;
uint64_t x82 = UINT64_MAX;
uint64_t x84 = UINT64_MAX;
static int8_t x88 = INT8_MIN;
volatile uint64_t t22 = 2413857743202532434LLU;
int32_t x102 = -1305418;
volatile int64_t x110 = -1LL;
int32_t x113 = INT32_MAX;
volatile int32_t x118 = 1067551858;
volatile int8_t x119 = -1;
int64_t t27 = 1326LL;
int32_t x121 = INT32_MIN;
int16_t x126 = 367;
int8_t x134 = -1;
static int64_t x149 = -1LL;
static uint64_t x151 = 8LLU;
static uint16_t x152 = 17U;
uint64_t t32 = UINT64_MAX;
volatile int64_t x153 = -1LL;
static volatile int8_t x155 = INT8_MIN;
uint8_t x156 = UINT8_MAX;
static int16_t x166 = INT16_MIN;
int64_t x167 = -194274825828709489LL;
uint16_t x169 = UINT16_MAX;
int16_t x177 = -57;
uint64_t x181 = UINT64_MAX;
static int32_t x183 = INT32_MAX;
static uint8_t x184 = 4U;
volatile uint64_t t40 = UINT64_MAX;
static int32_t x189 = -1;
volatile uint64_t x202 = UINT64_MAX;
volatile int16_t x212 = INT16_MIN;
volatile uint64_t t45 = 12561960786099614LLU;
volatile int8_t x227 = -1;
uint32_t x238 = UINT32_MAX;
volatile uint64_t t48 = 146793859869LLU;
int64_t t49 = 918LL;
volatile uint16_t x253 = 0U;
volatile uint64_t t52 = 9329934972LLU;
int64_t x269 = 115610219023222239LL;
static volatile int64_t t53 = 2LL;
int16_t x276 = 1173;
uint64_t t54 = 155277009593118830LLU;
uint16_t x277 = UINT16_MAX;
uint64_t x280 = UINT64_MAX;
volatile uint64_t t55 = 963258006LLU;
int64_t x288 = -1LL;
volatile uint32_t t58 = 11196U;
uint8_t x303 = UINT8_MAX;
static int64_t x307 = -3152676538827102918LL;
volatile int32_t x311 = 73438;
static int16_t x318 = -2239;
volatile int64_t x319 = -1LL;
volatile int8_t x332 = -1;
volatile int64_t t66 = INT64_MIN;
int64_t x335 = INT64_MIN;
static int8_t x339 = -34;
int32_t x340 = -1;
int16_t x349 = INT16_MAX;
volatile uint16_t x350 = 25U;
uint16_t x352 = 740U;
uint64_t x357 = UINT64_MAX;
volatile uint64_t t74 = 446532647029LLU;
static int64_t x372 = -1LL;
static uint8_t x376 = 9U;
static volatile int32_t t78 = INT32_MIN;
int32_t x385 = -1;
int16_t x413 = INT16_MIN;
int8_t x418 = 28;
volatile int8_t x422 = INT8_MAX;
int64_t x427 = INT64_MAX;
static int8_t x432 = 7;
uint32_t t88 = UINT32_MAX;
int32_t x442 = -1;
uint32_t x443 = 1457755566U;
volatile int16_t x450 = 933;
uint32_t x453 = UINT32_MAX;
uint16_t x463 = 79U;
static uint8_t x466 = UINT8_MAX;
volatile int64_t x467 = -204833717971LL;
volatile int64_t t95 = 4544LL;
uint16_t x481 = 43U;
static int8_t x482 = INT8_MIN;
uint32_t x488 = 22U;
volatile int64_t x492 = INT64_MIN;
volatile int64_t t98 = 66LL;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	volatile int64_t x2 = 478016LL;
	int16_t x3 = -300;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 813199LL;

	t0 = (x1|((x2+x3)%x4));

	if (t0 != 524287LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	int32_t x7 = INT32_MAX;
	static int16_t x8 = INT16_MAX;
	volatile uint32_t t1 = 4U;

	t1 = (x5|((x6+x7)%x8));

	if (t1 != 127U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	static uint16_t x10 = UINT16_MAX;
	static uint64_t x11 = 1872LLU;
	static uint64_t t2 = UINT64_MAX;

	t2 = (x9|((x10+x11)%x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	uint64_t x18 = 26LLU;
	int8_t x19 = INT8_MIN;
	volatile uint64_t t3 = 480LLU;

	t3 = (x17|((x18+x19)%x20));

	if (t3 != 18446744073709527994LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -93;
	uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 352115599095LLU;

	t4 = (x21|((x22+x23)%x24));

	if (t4 != 18446744073709551523LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = -126437829;
	int64_t x26 = 1LL;
	int16_t x27 = -1;
	uint32_t x28 = 207029779U;
	volatile int64_t t5 = 12931659769658LL;

	t5 = (x25|((x26+x27)%x28));

	if (t5 != -126437829LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = 36U;
	volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = -1;
	volatile int32_t t6 = 14037;

	t6 = (x29|((x30+x31)%x32));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = -121643256547LL;
	static int32_t x36 = INT32_MAX;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x33|((x34+x35)%x36));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MIN;
	volatile uint8_t x40 = UINT8_MAX;
	int32_t t8 = -26375995;

	t8 = (x37|((x38+x39)%x40));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 97510363154LLU;
	int16_t x43 = -1;

	t9 = (x41|((x42+x43)%x44));

	if (t9 != 325910527LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = INT32_MIN;
	int16_t x46 = -12925;
	uint8_t x47 = 6U;
	static volatile int8_t x48 = INT8_MIN;
	int32_t t10 = -97;

	t10 = (x45|((x46+x47)%x48));

	if (t10 != -119) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 0LL;
	uint32_t x50 = 540549U;
	uint32_t x51 = 10U;
	uint16_t x52 = 13U;
	int64_t t11 = -8875161931167647LL;

	t11 = (x49|((x50+x51)%x52));

	if (t11 != 6LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 900U;
	volatile int8_t x54 = -1;
	static int8_t x56 = -61;
	static uint32_t t12 = 5U;

	t12 = (x53|((x54+x55)%x56));

	if (t12 != 959U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 2204865775451093463LL;
	volatile int32_t x58 = INT32_MIN;
	int16_t x59 = 68;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int64_t t13 = -2513LL;

	t13 = (x57|((x58+x59)%x60));

	if (t13 != -41LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -2;
	int64_t x62 = -3284291331LL;
	static uint64_t x63 = 7206858005301639LLU;
	volatile uint64_t x64 = 643497LLU;

	t14 = (x61|((x62+x63)%x64));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	uint64_t x66 = UINT64_MAX;
	uint64_t x68 = UINT64_MAX;
	uint64_t t15 = 1582268228LLU;

	t15 = (x65|((x66+x67)%x68));

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x71 = UINT8_MAX;
	static uint8_t x72 = 118U;

	t16 = (x69|((x70+x71)%x72));

	if (t16 != -32668) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int32_t x74 = -1;
	int32_t x75 = 1;
	int16_t x76 = 3290;
	uint32_t t17 = UINT32_MAX;

	t17 = (x73|((x74+x75)%x76));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x79 = 175U;
	static uint8_t x80 = 2U;
	uint32_t t18 = 139063U;

	t18 = (x77|((x78+x79)%x80));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	int32_t x83 = -1;
	volatile uint64_t t19 = 211298240LLU;

	t19 = (x81|((x82+x83)%x84));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	static int8_t x87 = INT8_MIN;
	int32_t t20 = -913238;

	t20 = (x85|((x86+x87)%x88));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = -47538LL;
	int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MAX;
	int16_t x92 = -1;
	int64_t t21 = 10LL;

	t21 = (x89|((x90+x91)%x92));

	if (t21 != -47538LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x93 = 447LLU;
	int64_t x94 = -1LL;
	int64_t x95 = INT64_MAX;
	int32_t x96 = -1;

	t22 = (x93|((x94+x95)%x96));

	if (t22 != 447LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 90U;
	volatile int8_t x98 = INT8_MAX;
	uint16_t x99 = 797U;
	static volatile uint64_t x100 = 44145486771LLU;
	uint64_t t23 = 249LLU;

	t23 = (x97|((x98+x99)%x100));

	if (t23 != 990LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	volatile int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t24 = -9;

	t24 = (x101|((x102+x103)%x104));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = 63;
	uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 534334LLU;
	static uint64_t t25 = 3775480847010808LLU;

	t25 = (x109|((x110+x111)%x112));

	if (t25 != 255LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x114 = 22U;
	static int64_t x115 = INT64_MIN;
	uint64_t x116 = 655856451996LLU;
	volatile uint64_t t26 = 279LLU;

	t26 = (x113|((x114+x115)%x116));

	if (t26 != 446676598783LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	static int64_t x120 = -7100LL;

	t27 = (x117|((x118+x119)%x120));

	if (t27 != -115LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = INT16_MIN;
	volatile int64_t x123 = -1LL;
	volatile int8_t x124 = INT8_MIN;
	static int64_t t28 = -65637LL;

	t28 = (x121|((x122+x123)%x124));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	static uint8_t x127 = 69U;
	int16_t x128 = INT16_MIN;
	int32_t t29 = -6906124;

	t29 = (x125|((x126+x127)%x128));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = INT32_MIN;
	static int64_t x130 = 1290159253632LL;
	static int64_t x131 = -70847336636LL;
	int16_t x132 = INT16_MIN;
	static int64_t t30 = 10623701LL;

	t30 = (x129|((x130+x131)%x132));

	if (t30 != -2147461180LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = INT64_MIN;
	uint8_t x135 = 46U;
	uint64_t x136 = 388232876403LLU;
	volatile uint64_t t31 = 561LLU;

	t31 = (x133|((x134+x135)%x136));

	if (t31 != 9223372036854775853LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x150 = INT16_MIN;

	t32 = (x149|((x150+x151)%x152));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x154 = INT8_MIN;
	static volatile int64_t t33 = 667985853LL;

	t33 = (x153|((x154+x155)%x156));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = 14;
	uint16_t x158 = 390U;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MIN;
	uint32_t t34 = 175U;

	t34 = (x157|((x158+x159)%x160));

	if (t34 != 399U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x161 = -56809730564667153LL;
	uint32_t x162 = 18455098U;
	uint8_t x163 = 9U;
	static volatile uint64_t x164 = 1025565LLU;
	uint64_t t35 = 786557LLU;

	t35 = (x161|((x162+x163)%x164));

	if (t35 != 18389934343145380607LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x165 = UINT32_MAX;
	static int16_t x168 = 4328;
	int64_t t36 = 1584911137LL;

	t36 = (x165|((x166+x167)%x168));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x170 = 498;
	int64_t x171 = -31086411204LL;
	int16_t x172 = INT16_MIN;
	volatile int64_t t37 = -985191328376817LL;

	t37 = (x169|((x170+x171)%x172));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 81U;
	volatile int8_t x174 = -1;
	int8_t x175 = INT8_MIN;
	volatile int32_t x176 = -265718862;
	static volatile int32_t t38 = -13;

	t38 = (x173|((x174+x175)%x176));

	if (t38 != -129) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x178 = 0U;
	int8_t x179 = -55;
	static int64_t x180 = INT64_MIN;
	int64_t t39 = -932LL;

	t39 = (x177|((x178+x179)%x180));

	if (t39 != -49LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x182 = INT64_MIN;

	t40 = (x181|((x182+x183)%x184));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x190 = INT64_MIN;
	static int32_t x191 = INT32_MAX;
	uint64_t x192 = 2543861950LLU;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = (x189|((x190+x191)%x192));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = 2070;
	volatile int64_t x194 = -1LL;
	uint16_t x195 = 0U;
	int32_t x196 = INT32_MIN;
	volatile int64_t t42 = -4619923149LL;

	t42 = (x193|((x194+x195)%x196));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MIN;
	uint64_t t43 = UINT64_MAX;

	t43 = (x197|((x198+x199)%x200));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MIN;
	int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MIN;
	uint64_t t44 = 14809275077358880LLU;

	t44 = (x201|((x202+x203)%x204));

	if (t44 != 18446744071562100734LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x209 = INT64_MIN;
	static uint64_t x210 = 70794809450995764LLU;
	int32_t x211 = -3;

	t45 = (x209|((x210+x211)%x212));

	if (t45 != 9294166846305771569LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x225 = -1647LL;
	uint8_t x226 = UINT8_MAX;
	volatile int8_t x228 = INT8_MIN;
	int64_t t46 = -3480513LL;

	t46 = (x225|((x226+x227)%x228));

	if (t46 != -1537LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = -1LL;
	int8_t x231 = INT8_MAX;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t47 = 15687648247222908LLU;

	t47 = (x229|((x230+x231)%x232));

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x237 = 14999389LLU;
	static volatile uint8_t x239 = UINT8_MAX;
	int32_t x240 = -1;

	t48 = (x237|((x238+x239)%x240));

	if (t48 != 14999551LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	int64_t x243 = 239962999592126929LL;
	int64_t x244 = INT64_MIN;

	t49 = (x241|((x242+x243)%x244));

	if (t49 != -8983409037262648879LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x254 = 47LLU;
	int32_t x255 = INT32_MIN;
	uint8_t x256 = 11U;
	uint64_t t50 = 68LLU;

	t50 = (x253|((x254+x255)%x256));

	if (t50 != 6LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = 69931340;
	int32_t x262 = -1;
	int16_t x263 = INT16_MAX;
	uint16_t x264 = 1020U;
	volatile int32_t t51 = 2906;

	t51 = (x261|((x262+x263)%x264));

	if (t51 != 69931390) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = 5060601840589LLU;
	static uint64_t x267 = UINT64_MAX;
	volatile int8_t x268 = -7;

	t52 = (x265|((x266+x267)%x268));

	if (t52 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x270 = INT64_MAX;
	int16_t x271 = -1;
	uint8_t x272 = UINT8_MAX;

	t53 = (x269|((x270+x271)%x272));

	if (t53 != 115610219023222271LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MAX;
	uint64_t x275 = 368703101844833055LLU;

	t54 = (x273|((x274+x275)%x276));

	if (t54 != 9223372036854776700LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x278 = -149LL;
	int32_t x279 = INT32_MAX;

	t55 = (x277|((x278+x279)%x280));

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x281 = INT64_MIN;
	volatile int32_t x282 = -1;
	int8_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	static volatile uint64_t t56 = 4LLU;

	t56 = (x281|((x282+x283)%x284));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x285 = INT8_MAX;
	uint16_t x286 = 3U;
	uint8_t x287 = 3U;
	static int64_t t57 = -48LL;

	t57 = (x285|((x286+x287)%x288));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x289 = 4056U;
	uint32_t x290 = UINT32_MAX;
	int8_t x291 = 3;
	static int16_t x292 = -1;

	t58 = (x289|((x290+x291)%x292));

	if (t58 != 4058U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x293 = 39;
	volatile uint16_t x294 = 49U;
	uint16_t x295 = 10409U;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t59 = -4041760;

	t59 = (x293|((x294+x295)%x296));

	if (t59 != 10495) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x301 = 18669U;
	uint16_t x302 = 237U;
	static int16_t x304 = INT16_MIN;
	int32_t t60 = -263771;

	t60 = (x301|((x302+x303)%x304));

	if (t60 != 18925) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x305 = 8LLU;
	uint64_t x306 = 1121456789658382LLU;
	int8_t x308 = 1;
	uint64_t t61 = 8LLU;

	t61 = (x305|((x306+x307)%x308));

	if (t61 != 8LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x309 = INT16_MAX;
	uint16_t x310 = 22206U;
	uint32_t x312 = 25212073U;
	uint32_t t62 = 539U;

	t62 = (x309|((x310+x311)%x312));

	if (t62 != 98303U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x313 = 1643573360235011LLU;
	volatile uint8_t x314 = 28U;
	uint64_t x315 = 1396867LLU;
	static int8_t x316 = INT8_MIN;
	uint64_t t63 = 240244148LLU;

	t63 = (x313|((x314+x315)%x316));

	if (t63 != 1643573361365663LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = -1LL;
	int16_t x320 = 3514;
	static volatile int64_t t64 = -158847034982LL;

	t64 = (x317|((x318+x319)%x320));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = 1;
	uint64_t x326 = UINT64_MAX;
	volatile int16_t x327 = -7;
	uint8_t x328 = UINT8_MAX;
	uint64_t t65 = 7956033929LLU;

	t65 = (x325|((x326+x327)%x328));

	if (t65 != 249LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = -1LL;
	static int8_t x331 = INT8_MIN;

	t66 = (x329|((x330+x331)%x332));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x333 = UINT32_MAX;
	uint32_t x334 = UINT32_MAX;
	volatile uint16_t x336 = 3U;
	int64_t t67 = 3531411786LL;

	t67 = (x333|((x334+x335)%x336));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x337 = 737915086511803LLU;
	static volatile uint8_t x338 = 5U;
	static volatile uint64_t t68 = 592853409601046848LLU;

	t68 = (x337|((x338+x339)%x340));

	if (t68 != 737915086511803LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x341 = -1LL;
	int16_t x342 = INT16_MIN;
	volatile uint16_t x343 = UINT16_MAX;
	volatile uint16_t x344 = 514U;
	volatile int64_t t69 = 14538186380931LL;

	t69 = (x341|((x342+x343)%x344));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x345 = -1;
	int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	volatile int16_t x348 = INT16_MAX;
	static volatile int64_t t70 = 7777LL;

	t70 = (x345|((x346+x347)%x348));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x351 = -2;
	volatile int32_t t71 = 54457786;

	t71 = (x349|((x350+x351)%x352));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = -4;
	uint64_t x354 = 1458580771518LLU;
	static int32_t x355 = -1;
	static int32_t x356 = -1555412;
	uint64_t t72 = 333252788LLU;

	t72 = (x353|((x354+x355)%x356));

	if (t72 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x358 = INT8_MIN;
	static uint8_t x359 = UINT8_MAX;
	uint8_t x360 = 40U;
	uint64_t t73 = UINT64_MAX;

	t73 = (x357|((x358+x359)%x360));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x365 = 932059526843991383LL;
	static uint8_t x366 = 62U;
	uint64_t x367 = 4467053261874056LLU;
	int8_t x368 = INT8_MAX;

	t74 = (x365|((x366+x367)%x368));

	if (t74 != 932059526843991415LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = -1;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 23U;
	volatile int64_t t75 = -30548523661009146LL;

	t75 = (x369|((x370+x371)%x372));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x373 = 4;
	int16_t x374 = -54;
	static int16_t x375 = INT16_MIN;
	int32_t t76 = 27384875;

	t76 = (x373|((x374+x375)%x376));

	if (t76 != -4) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x377 = -96;
	volatile uint16_t x378 = UINT16_MAX;
	int64_t x379 = INT64_MIN;
	static int32_t x380 = INT32_MIN;
	volatile int64_t t77 = -50417780440LL;

	t77 = (x377|((x378+x379)%x380));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x381 = INT32_MIN;
	static uint16_t x382 = 30416U;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -1;

	t78 = (x381|((x382+x383)%x384));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x386 = -1;
	uint64_t x387 = 2992014495164810LLU;
	int32_t x388 = INT32_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (x385|((x386+x387)%x388));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x397 = 366187971697900425LLU;
	static int32_t x398 = -3547764;
	int8_t x399 = INT8_MIN;
	static uint32_t x400 = 958U;
	uint64_t t80 = 146LLU;

	t80 = (x397|((x398+x399)%x400));

	if (t80 != 366187971697900445LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = INT32_MAX;
	static volatile uint16_t x406 = UINT16_MAX;
	static uint64_t x407 = UINT64_MAX;
	uint16_t x408 = 200U;
	volatile uint64_t t81 = 5354895LLU;

	t81 = (x405|((x406+x407)%x408));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x409 = INT16_MIN;
	static int8_t x410 = INT8_MAX;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	volatile uint32_t t82 = 53929670U;

	t82 = (x409|((x410+x411)%x412));

	if (t82 != 4294934654U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x414 = -134159044;
	uint16_t x415 = 5493U;
	int64_t x416 = INT64_MAX;
	int64_t t83 = -55744159160209450LL;

	t83 = (x413|((x414+x415)%x416));

	if (t83 != -1359LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = INT32_MIN;
	static int16_t x419 = -482;
	static uint16_t x420 = UINT16_MAX;
	int32_t t84 = -2965305;

	t84 = (x417|((x418+x419)%x420));

	if (t84 != -454) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x421 = INT8_MIN;
	static uint64_t x423 = 1750771683847LLU;
	int64_t x424 = INT64_MIN;
	uint64_t t85 = 137LLU;

	t85 = (x421|((x422+x423)%x424));

	if (t85 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x425 = INT32_MIN;
	static int16_t x426 = INT16_MIN;
	static int64_t x428 = -1LL;
	volatile int64_t t86 = 155272553LL;

	t86 = (x425|((x426+x427)%x428));

	if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x429 = -68;
	static int32_t x430 = -1;
	static int32_t x431 = 1;
	int32_t t87 = 1;

	t87 = (x429|((x430+x431)%x432));

	if (t87 != -68) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x433 = -1;
	static int8_t x434 = INT8_MAX;
	volatile uint32_t x435 = UINT32_MAX;
	uint16_t x436 = 31U;

	t88 = (x433|((x434+x435)%x436));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x441 = INT16_MAX;
	int64_t x444 = INT64_MIN;
	int64_t t89 = -121180LL;

	t89 = (x441|((x442+x443)%x444));

	if (t89 != 1457782783LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x449 = -1LL;
	int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	volatile int64_t t90 = 1809046438826282LL;

	t90 = (x449|((x450+x451)%x452));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x454 = 116165U;
	int16_t x455 = -505;
	int16_t x456 = -4961;
	uint32_t t91 = UINT32_MAX;

	t91 = (x453|((x454+x455)%x456));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x461 = 16;
	int64_t x462 = INT64_MIN;
	int8_t x464 = -12;
	int64_t t92 = -460152LL;

	t92 = (x461|((x462+x463)%x464));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x465 = 10U;
	volatile uint64_t x468 = 145LLU;
	volatile uint64_t t93 = 248095379LLU;

	t93 = (x465|((x466+x467)%x468));

	if (t93 != 110LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x469 = INT16_MIN;
	static uint64_t x470 = UINT64_MAX;
	int32_t x471 = -1;
	int32_t x472 = 113186535;
	volatile uint64_t t94 = 146329LLU;

	t94 = (x469|((x470+x471)%x472));

	if (t94 != 18446744073709535118LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x477 = -32479661970516LL;
	volatile int16_t x478 = -1;
	int8_t x479 = -1;
	volatile int32_t x480 = -1;

	t95 = (x477|((x478+x479)%x480));

	if (t95 != -32479661970516LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x483 = -1;
	int8_t x484 = INT8_MIN;
	int32_t t96 = 0;

	t96 = (x481|((x482+x483)%x484));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x485 = -6473624;
	static int32_t x486 = -12;
	volatile int64_t x487 = 23295173010LL;
	int64_t t97 = -17146094859276518LL;

	t97 = (x485|((x486+x487)%x488));

	if (t97 != -6473604LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x489 = INT8_MAX;
	int16_t x490 = INT16_MIN;
	static int32_t x491 = 97167;

	t98 = (x489|((x490+x491)%x492));

	if (t98 != 64511LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x493 = UINT16_MAX;
	static uint32_t x494 = 1U;
	int16_t x495 = 5;
	int16_t x496 = INT16_MIN;
	uint32_t t99 = 631622U;

	t99 = (x493|((x494+x495)%x496));

	if (t99 != 65535U) { NG(); } else { ; }
	
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

