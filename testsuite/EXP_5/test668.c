#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MAX;
int32_t x24 = 6987746;
uint32_t x25 = 6U;
uint16_t x29 = UINT16_MAX;
volatile uint64_t x30 = 261213739972LLU;
static int64_t x37 = INT64_MIN;
static uint64_t x57 = 1400686864040LLU;
volatile uint64_t t14 = 145407988LLU;
uint32_t x73 = 0U;
int8_t x75 = -7;
uint32_t x94 = 374U;
int8_t x103 = 4;
int16_t x105 = INT16_MAX;
uint16_t x112 = UINT16_MAX;
int64_t x121 = INT64_MIN;
volatile uint64_t t28 = 3738LLU;
int64_t x125 = -1LL;
uint16_t x126 = UINT16_MAX;
static int64_t t29 = 709695344508LL;
uint8_t x141 = 2U;
static volatile int64_t x147 = 186921420147113154LL;
int64_t x149 = -1LL;
int8_t x161 = -1;
int32_t x162 = INT32_MIN;
int32_t x164 = INT32_MIN;
int32_t t38 = -59875356;
int64_t x184 = 0LL;
volatile int64_t t42 = 3LL;
static int16_t x187 = INT16_MIN;
uint64_t x191 = 507991LLU;
uint16_t x196 = UINT16_MAX;
static volatile int32_t x199 = INT32_MIN;
int32_t x201 = 214533;
int16_t x202 = -497;
volatile uint32_t x215 = UINT32_MAX;
static volatile int64_t t50 = -9836LL;
volatile uint16_t x221 = 0U;
int64_t x227 = INT64_MIN;
int64_t t53 = -1293LL;
uint32_t x230 = 2U;
volatile uint32_t x240 = 16184415U;
int8_t x241 = INT8_MIN;
static int16_t x243 = INT16_MIN;
static int8_t x253 = -49;
int16_t x258 = -13566;
volatile int32_t x264 = -1;
int8_t x265 = INT8_MIN;
int16_t x268 = INT16_MAX;
uint8_t x269 = UINT8_MAX;
volatile int16_t x270 = 361;
uint8_t x274 = 0U;
volatile uint8_t x280 = 57U;
static volatile int64_t t65 = 3802074633733LL;
int16_t x290 = INT16_MIN;
uint64_t t68 = 838LLU;
static int64_t x293 = -400489736470LL;
volatile int32_t x294 = INT32_MAX;
volatile int64_t x304 = INT64_MIN;
int8_t x305 = -1;
int64_t x314 = -1LL;
volatile int64_t t74 = 84LL;
int8_t x319 = INT8_MIN;
uint8_t x323 = 83U;
volatile int64_t x327 = -712057397886LL;
volatile uint64_t x328 = UINT64_MAX;
static int32_t x330 = INT32_MIN;
volatile int32_t x332 = 48004892;
int32_t x333 = INT32_MIN;
static int32_t x336 = INT32_MIN;
int32_t t79 = 1456;
volatile int64_t x341 = 4029LL;
uint64_t x342 = 2557010LLU;
int32_t x346 = -7054;
uint16_t x352 = 28370U;
int64_t x360 = INT64_MIN;
volatile int64_t t83 = 17452473629929LL;
int8_t x363 = INT8_MIN;
static int64_t t84 = -5367325104LL;
int64_t x369 = 3700084968808LL;
static int64_t x371 = -1LL;
volatile uint32_t x375 = 45443571U;
int64_t t87 = 521244159215LL;
static int8_t x379 = INT8_MIN;
uint16_t x380 = UINT16_MAX;
int32_t t88 = 47;
int32_t x381 = INT32_MIN;
volatile uint64_t t89 = 51LLU;
int8_t x397 = INT8_MAX;
int64_t t92 = 21791182942700LL;
int16_t x410 = -44;
int64_t x423 = INT64_MIN;
int64_t t98 = -1002253279391LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MAX;
	int8_t x3 = 30;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -453407003;

	t0 = (x1%((x2/x3)^x4));

	if (t0 != -9228) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	static volatile int64_t x7 = -64LL;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = 235027072297104560LL;

	t1 = (x5%((x6/x7)^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	int16_t x10 = -1;
	int64_t x11 = -2367610594259105LL;
	static volatile int64_t x12 = -1364LL;
	volatile int64_t t2 = -130145937985698475LL;

	t2 = (x9%((x10/x11)^x12));

	if (t2 != 683LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = -1032116419390LL;
	uint32_t x14 = 1594018U;
	uint32_t x15 = 78U;
	static volatile int8_t x16 = INT8_MAX;
	int64_t t3 = 67857459LL;

	t3 = (x13%((x14/x15)^x16));

	if (t3 != -13115LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 62648080LL;
	volatile int64_t x18 = 3232359936476705LL;
	int32_t x19 = -7310;
	int32_t x20 = -1;
	int64_t t4 = -17538726788148385LL;

	t4 = (x17%((x18/x19)^x20));

	if (t4 != 62648080LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = -952730;
	int64_t x23 = INT64_MAX;
	static volatile int64_t t5 = 9335440612LL;

	t5 = (x21%((x22/x23)^x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	volatile uint16_t x27 = 401U;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 5601020LL;

	t6 = (x25%((x26/x27)^x28));

	if (t6 != 6LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = 7695;
	uint32_t x32 = UINT32_MAX;
	static uint64_t t7 = 59914055363LLU;

	t7 = (x29%((x30/x31)^x32));

	if (t7 != 65535LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int8_t x34 = 1;
	int64_t x35 = 26005224145798LL;
	volatile int32_t x36 = INT32_MAX;
	volatile int64_t t8 = 317LL;

	t8 = (x33%((x34/x35)^x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -1;
	int16_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;
	volatile int64_t t9 = 302365078572559LL;

	t9 = (x37%((x38/x39)^x40));

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MIN;
	static int16_t x43 = -60;
	volatile int16_t x44 = -1;
	int64_t t10 = -1341182620216880LL;

	t10 = (x41%((x42/x43)^x44));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 6259U;
	int64_t x47 = INT64_MAX;
	int32_t x48 = 431551;
	int64_t t11 = 8262633LL;

	t11 = (x45%((x46/x47)^x48));

	if (t11 != 65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 2U;
	int16_t x50 = -1;
	uint64_t x51 = 109088LLU;
	int32_t x52 = -1;
	uint64_t t12 = 3173890LLU;

	t12 = (x49%((x50/x51)^x52));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 433531U;
	int32_t x54 = -1;
	int32_t x55 = -1316567;
	int64_t x56 = -1LL;
	static volatile int64_t t13 = 5882210LL;

	t13 = (x53%((x54/x55)^x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MAX;
	uint32_t x59 = 3310U;
	int64_t x60 = INT64_MIN;

	t14 = (x57%((x58/x59)^x60));

	if (t14 != 1400686864040LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	uint32_t x62 = UINT32_MAX;
	static int32_t x63 = -4065355;
	volatile uint8_t x64 = 54U;
	volatile uint32_t t15 = 5358731U;

	t15 = (x61%((x62/x63)^x64));

	if (t15 != 38U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int64_t x66 = INT64_MIN;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = 845;
	static int64_t t16 = 21939277715355878LL;

	t16 = (x65%((x66/x67)^x68));

	if (t16 != -2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = INT16_MAX;
	static int64_t x76 = INT64_MAX;
	int64_t t17 = 29025786185156225LL;

	t17 = (x73%((x74/x75)^x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 1U;
	volatile uint32_t x82 = UINT32_MAX;
	volatile int16_t x83 = INT16_MIN;
	uint8_t x84 = 102U;
	volatile uint32_t t18 = 302U;

	t18 = (x81%((x82/x83)^x84));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 0U;
	int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = 8U;
	volatile int64_t t19 = 78985679148279706LL;

	t19 = (x85%((x86/x87)^x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	int8_t x90 = 7;
	volatile uint16_t x91 = 2U;
	int16_t x92 = 23;
	int32_t t20 = -4883;

	t20 = (x89%((x90/x91)^x92));

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = 7LLU;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = INT32_MIN;
	static uint64_t t21 = 921214541LLU;

	t21 = (x93%((x94/x95)^x96));

	if (t21 != 7LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	static uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MAX;
	int32_t x100 = 252;
	static volatile int64_t t22 = 408966050099759598LL;

	t22 = (x97%((x98/x99)^x100));

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = 14411799U;
	int32_t x102 = INT32_MAX;
	int64_t x104 = 187784821545549411LL;
	static int64_t t23 = 12708LL;

	t23 = (x101%((x102/x103)^x104));

	if (t23 != 14411799LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = 472278617;
	int16_t x108 = -458;
	uint32_t t24 = 15375U;

	t24 = (x105%((x106/x107)^x108));

	if (t24 != 32767U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	int32_t x110 = -58955;
	uint8_t x111 = UINT8_MAX;
	int32_t t25 = -1627;

	t25 = (x109%((x110/x111)^x112));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = 1393574830529386LLU;
	static int8_t x116 = INT8_MIN;
	volatile uint64_t t26 = 122892LLU;

	t26 = (x113%((x114/x115)^x116));

	if (t26 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	static uint32_t x118 = 13412U;
	static uint32_t x119 = UINT32_MAX;
	int16_t x120 = 14145;
	volatile int64_t t27 = -2693740LL;

	t27 = (x117%((x118/x119)^x120));

	if (t27 != -12308LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x122 = 18U;
	volatile int32_t x123 = -1;
	uint64_t x124 = 83723568LLU;

	t28 = (x121%((x122/x123)^x124));

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x127 = UINT16_MAX;
	int32_t x128 = INT32_MIN;

	t29 = (x125%((x126/x127)^x128));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 29561085U;
	uint64_t x130 = UINT64_MAX;
	volatile int8_t x131 = -8;
	int64_t x132 = -1LL;
	volatile uint64_t t30 = 528950908557285LLU;

	t30 = (x129%((x130/x131)^x132));

	if (t30 != 29561085LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = UINT32_MAX;
	volatile int32_t x135 = INT32_MIN;
	uint16_t x136 = 8U;
	int64_t t31 = -206074601015LL;

	t31 = (x133%((x134/x135)^x136));

	if (t31 != -8LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x137 = 57U;
	int64_t x138 = -421087LL;
	uint64_t x139 = 19LLU;
	int16_t x140 = -1;
	volatile uint64_t t32 = 4086616892LLU;

	t32 = (x137%((x138/x139)^x140));

	if (t32 != 57LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t33 = 55;

	t33 = (x141%((x142/x143)^x144));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = -1;
	int8_t x146 = 13;
	static int16_t x148 = INT16_MIN;
	int64_t t34 = 293198928937242LL;

	t34 = (x145%((x146/x147)^x148));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = 0;
	int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MAX;
	int64_t t35 = -3610628772LL;

	t35 = (x149%((x150/x151)^x152));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -958;
	int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;
	int32_t t36 = -5247194;

	t36 = (x153%((x154/x155)^x156));

	if (t36 != -958) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = -1;
	uint32_t x158 = 2132870333U;
	volatile int16_t x159 = INT16_MAX;
	static int64_t x160 = -13LL;
	static volatile int64_t t37 = 2952LL;

	t37 = (x157%((x158/x159)^x160));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x163 = 10755U;

	t38 = (x161%((x162/x163)^x164));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	static volatile int16_t x166 = INT16_MIN;
	uint8_t x167 = UINT8_MAX;
	static int8_t x168 = INT8_MAX;
	int32_t t39 = 1;

	t39 = (x165%((x166/x167)^x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	static int32_t x170 = 2213302;
	static int16_t x171 = -1308;
	uint8_t x172 = 3U;
	volatile int64_t t40 = 338598LL;

	t40 = (x169%((x170/x171)^x172));

	if (t40 != -782LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 51LLU;
	static int8_t x178 = INT8_MIN;
	int64_t x179 = -1LL;
	int16_t x180 = -1;
	static uint64_t t41 = 69042448LLU;

	t41 = (x177%((x178/x179)^x180));

	if (t41 != 51LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 55U;
	int32_t x182 = -166619067;
	int8_t x183 = -1;

	t42 = (x181%((x182/x183)^x184));

	if (t42 != 55LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x185 = INT16_MIN;
	int8_t x186 = 31;
	uint64_t x188 = 3676LLU;
	uint64_t t43 = 42LLU;

	t43 = (x185%((x186/x187)^x188));

	if (t43 != 3560LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 33U;
	int8_t x190 = INT8_MIN;
	int32_t x192 = INT32_MAX;
	uint64_t t44 = 1240227693917632477LLU;

	t44 = (x189%((x190/x191)^x192));

	if (t44 != 33LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -59;
	int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;
	int64_t t45 = -387820135655LL;

	t45 = (x193%((x194/x195)^x196));

	if (t45 != -59LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = UINT16_MAX;
	int16_t x198 = INT16_MAX;
	int32_t x200 = -1;
	static int32_t t46 = -891;

	t46 = (x197%((x198/x199)^x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x203 = UINT64_MAX;
	uint64_t x204 = 697671213290222LLU;
	uint64_t t47 = 1308521796LLU;

	t47 = (x201%((x202/x203)^x204));

	if (t47 != 214533LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = INT16_MIN;
	uint64_t x206 = 194LLU;
	int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;
	static uint64_t t48 = 29284132960111LLU;

	t48 = (x205%((x206/x207)^x208));

	if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MIN;
	volatile int64_t x210 = INT64_MIN;
	int32_t x211 = 5028429;
	int32_t x212 = -1;
	volatile int64_t t49 = -15315490LL;

	t49 = (x209%((x210/x211)^x212));

	if (t49 != -2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = -12LL;
	static int32_t x216 = INT32_MIN;

	t50 = (x213%((x214/x215)^x216));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x217 = 1399LLU;
	int16_t x218 = -4735;
	static uint32_t x219 = UINT32_MAX;
	uint16_t x220 = 81U;
	volatile uint64_t t51 = 131809447263769878LLU;

	t51 = (x217%((x218/x219)^x220));

	if (t51 != 22LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x222 = INT16_MIN;
	uint64_t x223 = UINT64_MAX;
	volatile int16_t x224 = -1;
	static uint64_t t52 = 64949446LLU;

	t52 = (x221%((x222/x223)^x224));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x225 = 314607204;
	int64_t x226 = INT64_MAX;
	int8_t x228 = 5;

	t53 = (x225%((x226/x227)^x228));

	if (t53 != 4LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = 158847042566480313LLU;
	static int8_t x231 = -1;
	int16_t x232 = -396;
	static uint64_t t54 = 44927960LLU;

	t54 = (x229%((x230/x231)^x232));

	if (t54 != 2462172513LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x233 = -7;
	int64_t x234 = 537200046567LL;
	volatile uint64_t x235 = 222LLU;
	uint64_t x236 = 11618589392185141LLU;
	volatile uint64_t t55 = 58502853016LLU;

	t55 = (x233%((x234/x235)^x236));

	if (t55 != 8045684798710305LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x237 = UINT16_MAX;
	static int32_t x238 = INT32_MIN;
	static int8_t x239 = INT8_MAX;
	uint32_t t56 = 3922U;

	t56 = (x237%((x238/x239)^x240));

	if (t56 != 65535U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x242 = -36;
	int32_t x244 = -1;
	static int32_t t57 = 8045;

	t57 = (x241%((x242/x243)^x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x249 = 1;
	int16_t x250 = INT16_MIN;
	static int16_t x251 = -1;
	volatile int8_t x252 = -1;
	volatile int32_t t58 = -98;

	t58 = (x249%((x250/x251)^x252));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MAX;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t59 = -460167378;

	t59 = (x253%((x254/x255)^x256));

	if (t59 != -49) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = -1;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t60 = 106590098;

	t60 = (x257%((x258/x259)^x260));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x261 = 993700401679582210LLU;
	uint32_t x262 = UINT32_MAX;
	int8_t x263 = -7;
	volatile uint64_t t61 = 16646LLU;

	t61 = (x261%((x262/x263)^x264));

	if (t61 != 987426434LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x266 = 1;
	static uint8_t x267 = 40U;
	volatile int32_t t62 = -2;

	t62 = (x265%((x266/x267)^x268));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MIN;
	int32_t t63 = 326658;

	t63 = (x269%((x270/x271)^x272));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = -2080029;
	volatile uint64_t x275 = 28LLU;
	volatile uint32_t x276 = 2088U;
	static volatile uint64_t t64 = 11LLU;

	t64 = (x273%((x274/x275)^x276));

	if (t64 != 571LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MIN;
	static int64_t x278 = INT64_MIN;
	int64_t x279 = -113799281026LL;

	t65 = (x277%((x278/x279)^x280));

	if (t65 != -25277648LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = 1LL;
	volatile int16_t x282 = INT16_MIN;
	int32_t x283 = -3;
	uint32_t x284 = 46U;
	volatile int64_t t66 = -1LL;

	t66 = (x281%((x282/x283)^x284));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x285 = INT64_MAX;
	int64_t x286 = INT64_MIN;
	uint32_t x287 = 48137173U;
	static volatile uint16_t x288 = UINT16_MAX;
	volatile int64_t t67 = -940293561994234LL;

	t67 = (x285%((x286/x287)^x288));

	if (t67 != 52046699749LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = 52643113U;
	volatile int8_t x291 = -1;
	static uint64_t x292 = 1064592149531474LLU;

	t68 = (x289%((x290/x291)^x292));

	if (t68 != 52643113LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x295 = 1969382LLU;
	int16_t x296 = INT16_MAX;
	static volatile uint64_t t69 = 61LLU;

	t69 = (x293%((x294/x295)^x296));

	if (t69 != 28608LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 6032372536173453LLU;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = 4685973LLU;
	int8_t x300 = 2;
	uint64_t t70 = 3122356145956714179LLU;

	t70 = (x297%((x298/x299)^x300));

	if (t70 != 1520049908877LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MAX;
	static uint32_t x302 = UINT32_MAX;
	int32_t x303 = -1;
	int64_t t71 = -3356465762LL;

	t71 = (x301%((x302/x303)^x304));

	if (t71 != 127LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x306 = INT64_MAX;
	int64_t x307 = 27432LL;
	static volatile int16_t x308 = -36;
	volatile int64_t t72 = 11741150822203390LL;

	t72 = (x305%((x306/x307)^x308));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x309 = 6512LL;
	uint64_t x310 = 174841397352LLU;
	int32_t x311 = 21;
	static int16_t x312 = -11;
	volatile uint64_t t73 = 12277201620LLU;

	t73 = (x309%((x310/x311)^x312));

	if (t73 != 6512LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x313 = INT32_MIN;
	volatile int16_t x315 = 1;
	volatile uint32_t x316 = 209962U;

	t74 = (x313%((x314/x315)^x316));

	if (t74 != -192047LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 25U;
	static uint16_t x318 = UINT16_MAX;
	volatile int64_t x320 = -79296249LL;
	int64_t t75 = -3087222LL;

	t75 = (x317%((x318/x319)^x320));

	if (t75 != 25LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = -6;
	uint16_t x322 = UINT16_MAX;
	volatile int8_t x324 = 25;
	int32_t t76 = -4904010;

	t76 = (x321%((x322/x323)^x324));

	if (t76 != -6) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MAX;
	uint64_t t77 = 375506344LLU;

	t77 = (x325%((x326/x327)^x328));

	if (t77 != 11208760LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x329 = INT16_MIN;
	uint8_t x331 = UINT8_MAX;
	int32_t t78 = 4495;

	t78 = (x329%((x330/x331)^x332));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x334 = INT8_MAX;
	uint8_t x335 = 31U;

	t79 = (x333%((x334/x335)^x336));

	if (t79 != -4) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x343 = -1;
	static int64_t x344 = INT64_MAX;
	uint64_t t80 = 14000053346665603LLU;

	t80 = (x341%((x342/x343)^x344));

	if (t80 != 4029LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 591U;
	static uint32_t x347 = 128871141U;
	int64_t x348 = -1086982557893LL;
	int64_t t81 = 441499878842781853LL;

	t81 = (x345%((x346/x347)^x348));

	if (t81 != 591LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = 29;
	uint8_t x350 = 0U;
	int8_t x351 = INT8_MIN;
	int32_t t82 = 64;

	t82 = (x349%((x350/x351)^x352));

	if (t82 != 29) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x357 = -1;
	int8_t x358 = 1;
	uint16_t x359 = 3881U;

	t83 = (x357%((x358/x359)^x360));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = 75565879711529LL;
	uint16_t x364 = 3U;

	t84 = (x361%((x362/x363)^x364));

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = -13;
	static int64_t x366 = INT64_MIN;
	uint64_t x367 = 10721274LLU;
	int32_t x368 = -1;
	uint64_t t85 = 54141318LLU;

	t85 = (x365%((x366/x367)^x368));

	if (t85 != 860286943205LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x370 = 5854251513217699LLU;
	uint32_t x372 = UINT32_MAX;
	uint64_t t86 = 61924LLU;

	t86 = (x369%((x370/x371)^x372));

	if (t86 != 2118127813LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 357393U;
	int64_t x374 = 1407626486105048216LL;
	int64_t x376 = INT64_MAX;

	t87 = (x373%((x374/x375)^x376));

	if (t87 != 357393LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x377 = UINT16_MAX;
	volatile int16_t x378 = -718;

	t88 = (x377%((x378/x379)^x380));

	if (t88 != 5) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x382 = UINT32_MAX;
	static uint64_t x383 = UINT64_MAX;
	int64_t x384 = 617456LL;

	t89 = (x381%((x382/x383)^x384));

	if (t89 != 434000LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = UINT64_MAX;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = -1;
	static volatile uint8_t x388 = 55U;
	volatile uint64_t t90 = 7180378LLU;

	t90 = (x385%((x386/x387)^x388));

	if (t90 != 201LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int16_t x394 = INT16_MAX;
	int64_t x395 = 3LL;
	uint8_t x396 = 34U;
	int64_t t91 = -4181752687005159LL;

	t91 = (x393%((x394/x395)^x396));

	if (t91 != 207LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x398 = 9;
	volatile int64_t x399 = INT64_MIN;
	static int16_t x400 = -40;

	t92 = (x397%((x398/x399)^x400));

	if (t92 != 7LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = 14U;
	static int32_t x402 = INT32_MAX;
	uint32_t x403 = 1394116U;
	static uint8_t x404 = UINT8_MAX;
	volatile uint32_t t93 = 275423156U;

	t93 = (x401%((x402/x403)^x404));

	if (t93 != 14U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x405 = UINT8_MAX;
	int32_t x406 = 25849192;
	volatile int8_t x407 = 1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t94 = -3;

	t94 = (x405%((x406/x407)^x408));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = INT8_MIN;
	static int8_t x411 = INT8_MIN;
	int64_t x412 = -1LL;
	volatile int64_t t95 = -53142LL;

	t95 = (x409%((x410/x411)^x412));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x413 = INT16_MAX;
	static uint16_t x414 = 509U;
	int16_t x415 = -10;
	uint8_t x416 = UINT8_MAX;
	int32_t t96 = -1;

	t96 = (x413%((x414/x415)^x416));

	if (t96 != 61) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x417 = -1LL;
	static volatile uint32_t x418 = 5U;
	int32_t x419 = 492018;
	int32_t x420 = INT32_MIN;
	int64_t t97 = 139LL;

	t97 = (x417%((x418/x419)^x420));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x421 = INT32_MIN;
	volatile int64_t x422 = INT64_MIN;
	int16_t x424 = -409;

	t98 = (x421%((x422/x423)^x424));

	if (t98 != -408LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = 7119799504403LL;
	int16_t x426 = -1;
	int64_t x427 = INT64_MAX;
	static int8_t x428 = INT8_MIN;
	volatile int64_t t99 = -63685760LL;

	t99 = (x425%((x426/x427)^x428));

	if (t99 != 19LL) { NG(); } else { ; }
	
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

