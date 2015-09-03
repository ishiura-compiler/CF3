#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 84025LLU;
volatile uint64_t x6 = UINT64_MAX;
int32_t x12 = INT32_MAX;
volatile uint64_t t2 = 289803618663466694LLU;
volatile int16_t x15 = INT16_MIN;
int32_t x19 = INT32_MIN;
volatile int64_t t4 = -14LL;
uint32_t x34 = UINT32_MAX;
static int8_t x37 = 15;
int64_t x38 = -134LL;
volatile uint64_t t9 = 580012184LLU;
volatile uint8_t x41 = 1U;
static int8_t x42 = -1;
int32_t x43 = -2;
uint8_t x47 = UINT8_MAX;
int16_t x50 = INT16_MAX;
int8_t x55 = INT8_MIN;
int32_t x56 = 342;
uint32_t x60 = 90853072U;
int16_t x61 = 18;
volatile int64_t t15 = 1202836787LL;
uint8_t x67 = 16U;
uint8_t x78 = 94U;
static volatile int32_t x79 = -1;
volatile uint8_t x80 = 2U;
int32_t t20 = -20;
uint64_t x86 = 266813LLU;
int8_t x91 = -1;
int64_t t23 = 42LL;
uint64_t x100 = 7286098LLU;
static int32_t x103 = -11846;
static volatile int32_t t25 = 984;
uint64_t x108 = 117LLU;
int16_t x116 = INT16_MIN;
int64_t x120 = -1LL;
int64_t x125 = -1LL;
int64_t x132 = -811830811015043LL;
volatile int32_t x137 = INT32_MIN;
volatile int32_t t34 = 12086953;
uint8_t x143 = 111U;
int8_t x147 = 1;
static volatile uint8_t x153 = 0U;
static volatile int32_t x155 = -1;
volatile uint64_t t40 = 53168LLU;
int32_t x165 = -1;
volatile int32_t x169 = -1;
int8_t x182 = -1;
volatile uint64_t t45 = 1100929756205LLU;
static int64_t x186 = INT64_MIN;
static uint64_t t47 = 2095703866LLU;
uint64_t t49 = 572904286LLU;
int64_t x202 = INT64_MIN;
volatile uint32_t x208 = UINT32_MAX;
uint64_t x213 = 4139535373658462LLU;
uint8_t x214 = 2U;
volatile int64_t x215 = 30LL;
static int8_t x229 = -1;
int64_t x232 = -1LL;
int32_t x239 = INT32_MAX;
int64_t x245 = INT64_MIN;
volatile uint32_t x248 = UINT32_MAX;
int8_t x249 = INT8_MIN;
uint64_t t62 = 3195836557LLU;
int16_t x255 = INT16_MIN;
int32_t x258 = -1;
int32_t x259 = INT32_MAX;
static int8_t x264 = 1;
volatile int32_t t65 = 79276;
uint32_t x266 = 14623U;
static int8_t x267 = -55;
volatile int32_t x277 = INT32_MIN;
static volatile int64_t x280 = -1LL;
volatile int64_t t69 = 4525739314831528235LL;
uint8_t x284 = 3U;
uint32_t x288 = 31U;
static uint64_t x292 = 1LLU;
uint16_t x294 = UINT16_MAX;
int32_t x295 = INT32_MAX;
volatile int8_t x298 = 4;
int8_t x304 = -1;
int64_t t76 = -129409895409LL;
volatile int64_t x311 = INT64_MIN;
int64_t x313 = -5283LL;
volatile uint64_t x314 = UINT64_MAX;
int16_t x317 = -1;
volatile int32_t x319 = INT32_MIN;
uint32_t x325 = 3U;
static volatile int8_t x334 = INT8_MIN;
static volatile uint64_t x346 = UINT64_MAX;
int64_t x349 = INT64_MIN;
volatile int16_t x365 = -8;
int32_t x368 = -445;
int16_t x369 = 0;
int64_t x370 = INT64_MIN;
volatile int16_t x377 = -214;
volatile int8_t x378 = -5;
static volatile uint32_t x379 = 3876505U;
uint16_t x384 = UINT16_MAX;
volatile int8_t x392 = INT8_MIN;
int64_t x396 = INT64_MIN;
int64_t x397 = 16026LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int64_t x3 = -1LL;
	int32_t x4 = -1;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1|((x2/x3)^x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 0U;
	int32_t x7 = INT32_MAX;
	int64_t x8 = -5506074013948LL;
	uint64_t t1 = 14933716997273LLU;

	t1 = (x5|((x6/x7)^x8));

	if (t1 != 18446738559045603072LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 756LLU;
	static volatile int32_t x10 = INT32_MAX;
	static int16_t x11 = -4455;

	t2 = (x9|((x10/x11)^x12));

	if (t2 != 18446744071562550005LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int8_t x14 = -1;
	volatile int8_t x16 = -1;
	int64_t t3 = -2295LL;

	t3 = (x13|((x14/x15)^x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = -4333448833027LL;
	uint8_t x20 = 7U;

	t4 = (x17|((x18/x19)^x20));

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -196;
	uint64_t x22 = 9786160751LLU;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MIN;
	static uint64_t t5 = 1956458283384908LLU;

	t5 = (x21|((x22/x23)^x24));

	if (t5 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MIN;
	volatile int64_t x27 = 2155557477161LL;
	uint16_t x28 = 4U;
	int64_t t6 = 3177713866257059LL;

	t6 = (x25|((x26/x27)^x28));

	if (t6 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 117U;
	uint64_t x30 = 23575453123LLU;
	int8_t x31 = INT8_MAX;
	uint64_t x32 = 145016326LLU;
	static volatile uint64_t t7 = 161472LLU;

	t7 = (x29|((x30/x31)^x32));

	if (t7 != 62147831LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;
	int64_t t8 = -28568647733580006LL;

	t8 = (x33|((x34/x35)^x36));

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x39 = INT16_MIN;
	static uint64_t x40 = 843517340176980LLU;

	t9 = (x37|((x38/x39)^x40));

	if (t9 != 843517340176991LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x44 = -1LL;
	int64_t t10 = 0LL;

	t10 = (x41|((x42/x43)^x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	int64_t x46 = 4938708948LL;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = 29159LL;

	t11 = (x45|((x46/x47)^x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int16_t x51 = INT16_MIN;
	int64_t x52 = -17422616LL;
	volatile int64_t t12 = 4204452861LL;

	t12 = (x49|((x50/x51)^x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -3;
	int64_t x54 = -1LL;
	int64_t t13 = -111527LL;

	t13 = (x53|((x54/x55)^x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	uint32_t t14 = UINT32_MAX;

	t14 = (x57|((x58/x59)^x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = 1U;
	int8_t x63 = INT8_MIN;
	int64_t x64 = -1LL;

	t15 = (x61|((x62/x63)^x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 76U;
	volatile int8_t x66 = -18;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 102;

	t16 = (x65|((x66/x67)^x68));

	if (t16 != -180) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 225933187793LLU;
	int64_t x70 = -1LL;
	static int32_t x71 = INT32_MIN;
	uint16_t x72 = 1U;
	volatile uint64_t t17 = 32995606764863LLU;

	t17 = (x69|((x70/x71)^x72));

	if (t17 != 225933187793LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	int32_t x74 = 0;
	static int32_t x75 = 163533385;
	static uint8_t x76 = UINT8_MAX;
	volatile int64_t t18 = -201LL;

	t18 = (x73|((x74/x75)^x76));

	if (t18 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int32_t t19 = 330;

	t19 = (x77|((x78/x79)^x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = 1;
	volatile int16_t x83 = 928;
	int8_t x84 = 15;

	t20 = (x81|((x82/x83)^x84));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	int32_t x87 = 50878461;
	static uint32_t x88 = UINT32_MAX;
	uint64_t t21 = UINT64_MAX;

	t21 = (x85|((x86/x87)^x88));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int32_t x90 = -1;
	int8_t x92 = -27;
	int32_t t22 = 0;

	t22 = (x89|((x90/x91)^x92));

	if (t22 != -28) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = 20;
	uint8_t x95 = UINT8_MAX;
	uint8_t x96 = 9U;

	t23 = (x93|((x94/x95)^x96));

	if (t23 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	static volatile int16_t x98 = INT16_MIN;
	volatile int32_t x99 = -14651;
	static uint64_t t24 = UINT64_MAX;

	t24 = (x97|((x98/x99)^x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 1;
	volatile int16_t x102 = INT16_MIN;
	volatile int8_t x104 = INT8_MIN;

	t25 = (x101|((x102/x103)^x104));

	if (t25 != -125) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = 1LLU;
	int8_t x107 = INT8_MAX;
	uint64_t t26 = 34678999773182LLU;

	t26 = (x105|((x106/x107)^x108));

	if (t26 != 18446744073709518965LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	uint16_t x110 = 79U;
	int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	int64_t t27 = -304263640593696LL;

	t27 = (x109|((x110/x111)^x112));

	if (t27 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	int64_t x114 = 739745624367280507LL;
	static int8_t x115 = INT8_MIN;
	int64_t t28 = -249286LL;

	t28 = (x113|((x114/x115)^x116));

	if (t28 != 5779262690386175LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 17U;
	uint64_t x118 = 6396LLU;
	int64_t x119 = INT64_MIN;
	static volatile uint64_t t29 = UINT64_MAX;

	t29 = (x117|((x118/x119)^x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	static int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	static int8_t x124 = -1;
	int64_t t30 = 1488300390LL;

	t30 = (x121|((x122/x123)^x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x126 = 13491LL;
	int8_t x127 = -1;
	static int64_t x128 = INT64_MIN;
	static int64_t t31 = -1LL;

	t31 = (x125|((x126/x127)^x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	int64_t x130 = -7575LL;
	volatile uint16_t x131 = 472U;
	volatile int64_t t32 = -25345928186649LL;

	t32 = (x129|((x130/x131)^x132));

	if (t32 != -1759791219LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 16248LLU;
	int8_t x134 = 5;
	static int32_t x135 = INT32_MIN;
	static volatile int64_t x136 = INT64_MIN;
	volatile uint64_t t33 = 31986250588LLU;

	t33 = (x133|((x134/x135)^x136));

	if (t33 != 9223372036854792056LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x138 = -20;
	volatile int16_t x139 = 4169;
	uint8_t x140 = 3U;

	t34 = (x137|((x138/x139)^x140));

	if (t34 != -2147483645) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x142 = 9452U;
	uint8_t x144 = 90U;
	volatile int32_t t35 = -1752;

	t35 = (x141|((x142/x143)^x144));

	if (t35 != -2147483633) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -132412942846LL;
	int32_t x146 = 2;
	int8_t x148 = -1;
	static volatile int64_t t36 = 865807200405449LL;

	t36 = (x145|((x146/x147)^x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	volatile int8_t x151 = INT8_MAX;
	static int32_t x152 = INT32_MIN;
	volatile int64_t t37 = -12275389342LL;

	t37 = (x149|((x150/x151)^x152));

	if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 36185U;
	volatile int16_t x156 = -1;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = (x153|((x154/x155)^x156));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile uint8_t x158 = 0U;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = 47U;
	volatile int64_t t39 = -10978198363LL;

	t39 = (x157|((x158/x159)^x160));

	if (t39 != -81LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 30544U;
	volatile uint64_t x162 = 6655954264000229881LLU;
	int8_t x163 = INT8_MAX;
	int16_t x164 = INT16_MIN;

	t40 = (x161|((x162/x163)^x164));

	if (t40 != 18394334985016639483LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x166 = UINT16_MAX;
	uint64_t x167 = UINT64_MAX;
	static int8_t x168 = INT8_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = (x165|((x166/x167)^x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MAX;
	int8_t x171 = -28;
	volatile int16_t x172 = INT16_MIN;
	int64_t t42 = -360633LL;

	t42 = (x169|((x170/x171)^x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = UINT64_MAX;
	static uint32_t x174 = 168116U;
	int16_t x175 = INT16_MAX;
	int8_t x176 = INT8_MIN;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x173|((x174/x175)^x176));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static int16_t x178 = -1;
	volatile int64_t x179 = INT64_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int64_t t44 = 561811779476870LL;

	t44 = (x177|((x178/x179)^x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 20277859U;
	volatile uint64_t x183 = 169282535703926LLU;
	static uint16_t x184 = 3U;

	t45 = (x181|((x182/x183)^x184));

	if (t45 != 20311019LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MIN;
	int16_t x187 = 1205;
	volatile int16_t x188 = -1;
	int64_t t46 = 95195LL;

	t46 = (x185|((x186/x187)^x188));

	if (t46 != -102LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 0;
	uint64_t x190 = UINT64_MAX;
	static uint32_t x191 = UINT32_MAX;
	static volatile int64_t x192 = -1LL;

	t47 = (x189|((x190/x191)^x192));

	if (t47 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	static uint16_t x194 = 3U;
	int8_t x195 = -1;
	int8_t x196 = -1;
	volatile int64_t t48 = -33360659LL;

	t48 = (x193|((x194/x195)^x196));

	if (t48 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 7956285549LLU;
	uint16_t x198 = UINT16_MAX;
	volatile uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 1LLU;

	t49 = (x197|((x198/x199)^x200));

	if (t49 != 7956285805LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	int16_t x203 = 29;
	static uint8_t x204 = 1U;
	int64_t t50 = -21739205497040LL;

	t50 = (x201|((x202/x203)^x204));

	if (t50 != -25987LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	int16_t x206 = -1;
	uint8_t x207 = 26U;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x205|((x206/x207)^x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -15;
	static uint32_t x210 = 780062U;
	int16_t x211 = -1;
	uint32_t x212 = 17287461U;
	volatile uint32_t t52 = 1U;

	t52 = (x209|((x210/x211)^x212));

	if (t52 != 4294967285U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x216 = -1;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x213|((x214/x215)^x216));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = -4970737333462LL;
	uint16_t x218 = UINT16_MAX;
	static int16_t x219 = -1;
	int8_t x220 = -1;
	volatile int64_t t54 = -1309313853716406LL;

	t54 = (x217|((x218/x219)^x220));

	if (t54 != -4970737303554LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 0;
	int64_t x222 = 153591723086LL;
	volatile uint16_t x223 = UINT16_MAX;
	volatile uint16_t x224 = 1U;
	volatile int64_t t55 = 31LL;

	t55 = (x221|((x222/x223)^x224));

	if (t55 != 2343658LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 9U;
	uint16_t x227 = 3U;
	uint16_t x228 = 119U;
	volatile int32_t t56 = 23539;

	t56 = (x225|((x226/x227)^x228));

	if (t56 != -12) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 1U;
	volatile uint64_t x231 = 60407820851394870LLU;
	static uint64_t t57 = UINT64_MAX;

	t57 = (x229|((x230/x231)^x232));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = -1LL;
	static int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x233|((x234/x235)^x236));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	volatile int8_t x238 = INT8_MIN;
	volatile int32_t x240 = INT32_MAX;
	volatile int32_t t59 = -42813;

	t59 = (x237|((x238/x239)^x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -1;
	static int8_t x242 = INT8_MAX;
	static uint16_t x243 = UINT16_MAX;
	int64_t x244 = 109LL;
	int64_t t60 = 7601587LL;

	t60 = (x241|((x242/x243)^x244));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = 7347801798LLU;
	uint64_t x247 = 229LLU;
	volatile uint64_t t61 = 42076309666757181LLU;

	t61 = (x245|((x246/x247)^x248));

	if (t61 != 9223372041117656633LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x250 = UINT64_MAX;
	volatile uint16_t x251 = 408U;
	int8_t x252 = INT8_MIN;

	t62 = (x249|((x250/x251)^x252));

	if (t62 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	uint32_t x254 = 47U;
	volatile int64_t x256 = INT64_MAX;
	int64_t t63 = 0LL;

	t63 = (x253|((x254/x255)^x256));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	int64_t x260 = 465287186LL;
	static int64_t t64 = 890158345900074084LL;

	t64 = (x257|((x258/x259)^x260));

	if (t64 != -1682196462LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -942;
	static uint16_t x262 = UINT16_MAX;
	static volatile int16_t x263 = INT16_MIN;

	t65 = (x261|((x262/x263)^x264));

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 6;
	static int64_t x268 = -819060778317LL;
	int64_t t66 = 1027514279LL;

	t66 = (x265|((x266/x267)^x268));

	if (t66 != -819060778313LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = UINT16_MAX;
	static int64_t x270 = -4343045387510573189LL;
	int64_t x271 = INT64_MIN;
	int16_t x272 = 1;
	int64_t t67 = -462LL;

	t67 = (x269|((x270/x271)^x272));

	if (t67 != 65535LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 9LLU;
	uint8_t x274 = 40U;
	int16_t x275 = INT16_MAX;
	volatile int32_t x276 = INT32_MIN;
	uint64_t t68 = 403646727130926LLU;

	t68 = (x273|((x274/x275)^x276));

	if (t68 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = 3;
	int16_t x279 = INT16_MAX;

	t69 = (x277|((x278/x279)^x280));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	int64_t x282 = INT64_MIN;
	uint64_t x283 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x281|((x282/x283)^x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	uint8_t x286 = 32U;
	static uint32_t x287 = 54U;
	volatile uint32_t t71 = 18U;

	t71 = (x285|((x286/x287)^x288));

	if (t71 != 65535U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 11U;
	int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	volatile uint64_t t72 = 210458331493LLU;

	t72 = (x289|((x290/x291)^x292));

	if (t72 != 11LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x296 = -1;
	int32_t t73 = 104055;

	t73 = (x293|((x294/x295)^x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 1359U;
	int16_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t74 = 920U;

	t74 = (x297|((x298/x299)^x300));

	if (t74 != 1359U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 3394459U;
	uint64_t x302 = 31358177649485836LLU;
	int16_t x303 = -1;
	uint64_t t75 = UINT64_MAX;

	t75 = (x301|((x302/x303)^x304));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	volatile uint16_t x306 = 7513U;
	int64_t x307 = -1LL;
	volatile int64_t x308 = INT64_MIN;

	t76 = (x305|((x306/x307)^x308));

	if (t76 != -89LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = INT64_MIN;
	static int64_t x312 = INT64_MIN;
	static volatile int64_t t77 = 1805678468349LL;

	t77 = (x309|((x310/x311)^x312));

	if (t77 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 0U;
	volatile uint64_t t78 = 7496LLU;

	t78 = (x313|((x314/x315)^x316));

	if (t78 != 18446744073709546333LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x318 = INT8_MAX;
	int8_t x320 = -1;
	int32_t t79 = 806092;

	t79 = (x317|((x318/x319)^x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	uint32_t x322 = 2131484492U;
	uint8_t x323 = 16U;
	int8_t x324 = -1;
	static int64_t t80 = INT64_MAX;

	t80 = (x321|((x322/x323)^x324));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MAX;
	int16_t x327 = 28;
	uint64_t x328 = 4440459631834941134LLU;
	uint64_t t81 = 42632LLU;

	t81 = (x325|((x326/x327)^x328));

	if (t81 != 4440459631892467691LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint16_t x330 = 0U;
	volatile int32_t x331 = -1;
	uint32_t x332 = 70652396U;
	volatile uint32_t t82 = 296869174U;

	t82 = (x329|((x330/x331)^x332));

	if (t82 != 2218136044U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x335 = 234297U;
	static uint64_t x336 = UINT64_MAX;
	uint64_t t83 = 61670LLU;

	t83 = (x333|((x334/x335)^x336));

	if (t83 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MAX;
	int8_t x339 = 1;
	int16_t x340 = -26;
	volatile int32_t t84 = 124283;

	t84 = (x337|((x338/x339)^x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -3;
	int16_t x342 = 59;
	static int8_t x343 = 56;
	int64_t x344 = INT64_MIN;
	volatile int64_t t85 = -101413112324754609LL;

	t85 = (x341|((x342/x343)^x344));

	if (t85 != -3LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = 37U;
	static uint8_t x347 = 10U;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t86 = 515391LLU;

	t86 = (x345|((x346/x347)^x348));

	if (t86 != 16602069666338596455LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x350 = INT16_MAX;
	volatile int64_t x351 = INT64_MAX;
	int16_t x352 = -2;
	static int64_t t87 = 1270184LL;

	t87 = (x349|((x350/x351)^x352));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -2;
	uint16_t x354 = UINT16_MAX;
	int16_t x355 = -1;
	volatile int8_t x356 = -12;
	int32_t t88 = -3222290;

	t88 = (x353|((x354/x355)^x356));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile int8_t x358 = INT8_MIN;
	static volatile int16_t x359 = INT16_MAX;
	static volatile int32_t x360 = INT32_MAX;
	int64_t t89 = -1525LL;

	t89 = (x357|((x358/x359)^x360));

	if (t89 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	volatile int32_t x362 = -130;
	static uint64_t x363 = 851056472LLU;
	int64_t x364 = INT64_MIN;
	uint64_t t90 = 7130304LLU;

	t90 = (x361|((x362/x363)^x364));

	if (t90 != 9223372058529890303LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x366 = -1LL;
	int64_t x367 = -1LL;
	int64_t t91 = -100999739011LL;

	t91 = (x365|((x366/x367)^x368));

	if (t91 != -6LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x371 = 374897LLU;
	uint16_t x372 = 125U;
	uint64_t t92 = 7992178651491604LLU;

	t92 = (x369|((x370/x371)^x372));

	if (t92 != 24602416228486LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	static volatile int16_t x374 = INT16_MIN;
	static int64_t x375 = -1LL;
	int8_t x376 = -1;
	uint64_t t93 = UINT64_MAX;

	t93 = (x373|((x374/x375)^x376));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x380 = 143631081755480557LLU;
	uint64_t t94 = 51622602456LLU;

	t94 = (x377|((x378/x379)^x380));

	if (t94 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = -922905814;
	static int8_t x383 = INT8_MAX;
	static volatile int32_t t95 = -28477;

	t95 = (x381|((x382/x383)^x384));

	if (t95 != -7523) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -1;
	uint32_t x386 = 208761241U;
	int16_t x387 = 112;
	int16_t x388 = INT16_MIN;
	uint32_t t96 = UINT32_MAX;

	t96 = (x385|((x386/x387)^x388));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 8U;
	uint8_t x390 = 1U;
	int8_t x391 = 1;
	static int32_t t97 = -9545;

	t97 = (x389|((x390/x391)^x392));

	if (t97 != -119) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	static volatile int32_t x395 = -1313100;
	volatile int64_t t98 = 1930LL;

	t98 = (x393|((x394/x395)^x396));

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MAX;
	uint32_t x399 = 343497U;
	volatile int32_t x400 = -1;
	volatile int64_t t99 = 103965LL;

	t99 = (x397|((x398/x399)^x400));

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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

