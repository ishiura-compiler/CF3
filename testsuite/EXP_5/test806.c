#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int16_t x16 = -1;
volatile int32_t t3 = -4265181;
int64_t x22 = INT64_MAX;
static uint8_t x23 = 33U;
uint32_t t4 = 775743487U;
uint16_t x29 = UINT16_MAX;
int64_t x31 = -370LL;
volatile int32_t t8 = 3221;
static volatile uint32_t x42 = UINT32_MAX;
uint8_t x43 = 1U;
uint32_t x46 = 211454485U;
int32_t t10 = -12;
uint32_t x55 = 98166733U;
int32_t x61 = INT32_MAX;
int32_t x63 = 1;
volatile int64_t x65 = INT64_MIN;
int64_t t15 = INT64_MIN;
volatile int64_t x79 = INT64_MIN;
int8_t x81 = -1;
volatile int32_t t21 = -1103;
static volatile uint64_t t22 = 1163509929LLU;
int64_t x103 = INT64_MAX;
static int32_t x116 = 0;
int8_t x120 = 0;
uint32_t x121 = UINT32_MAX;
static int8_t x122 = INT8_MAX;
uint64_t x129 = 24627817489901LLU;
uint16_t x133 = 24U;
int64_t x134 = INT64_MIN;
int32_t t32 = 103;
int64_t x139 = INT64_MIN;
volatile uint8_t x141 = 1U;
int8_t x144 = INT8_MAX;
int32_t x150 = INT32_MIN;
volatile int32_t x152 = INT32_MIN;
static volatile int32_t t37 = 0;
static int8_t x161 = -6;
int64_t x165 = INT64_MIN;
int64_t x166 = INT64_MAX;
static int64_t x168 = 6LL;
static uint16_t x173 = UINT16_MAX;
int64_t x176 = -513759692662LL;
int32_t t40 = -56;
volatile int64_t x179 = 4356798LL;
uint8_t x186 = 10U;
int8_t x192 = INT8_MIN;
uint8_t x193 = UINT8_MAX;
int8_t x197 = INT8_MAX;
static int32_t t46 = -234953;
int32_t x201 = 5;
volatile int64_t x204 = -1LL;
int64_t x208 = -7LL;
int32_t x209 = -1;
volatile int8_t x211 = INT8_MAX;
uint8_t x212 = UINT8_MAX;
int64_t x214 = 20995401LL;
static int32_t x215 = -1;
static int64_t x222 = INT64_MIN;
static volatile int64_t t52 = 12071878622551LL;
int32_t t53 = 17163;
int16_t x230 = 5761;
int64_t x235 = 8376LL;
volatile int32_t t57 = 327148325;
static int64_t x245 = INT64_MIN;
static volatile int32_t t60 = 1765;
uint32_t x257 = 4029U;
static int16_t x258 = INT16_MIN;
volatile int32_t t64 = -3958;
static int64_t x285 = -1LL;
int16_t x286 = -1;
volatile uint64_t x287 = 837LLU;
int32_t x292 = INT32_MIN;
int16_t x296 = INT16_MIN;
int8_t x305 = -1;
volatile int32_t t74 = -63275735;
int16_t x318 = INT16_MAX;
static int64_t x328 = INT64_MIN;
uint64_t x330 = UINT64_MAX;
static volatile int32_t t79 = 495;
int16_t x336 = -1;
static int64_t t81 = -4291771352146LL;
volatile int32_t x349 = -1;
uint16_t x356 = 4U;
static int8_t x361 = INT8_MIN;
static int16_t x362 = INT16_MIN;
volatile int64_t x379 = INT64_MAX;
uint32_t t90 = 776451406U;
volatile uint64_t x382 = 251LLU;
int32_t t92 = 83646941;
int8_t x389 = INT8_MIN;
static uint8_t x396 = UINT8_MAX;
int32_t t95 = -15;
int8_t x403 = INT8_MIN;
int8_t x406 = -1;
int64_t x412 = INT64_MAX;
int16_t x413 = -1;
volatile int32_t t99 = -5543613;


void f0(void) {
	int16_t x2 = -800;
	int32_t x3 = -16061562;
	int16_t x4 = -1;
	volatile int32_t t0 = -799653;

	t0 = (x1^((x2%x3)<=x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MAX;
	volatile int8_t x8 = -1;
	int32_t t1 = 353455;

	t1 = (x5^((x6%x7)<=x8));

	if (t1 != 32766) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	static int32_t t2 = -29;

	t2 = (x13^((x14%x15)<=x16));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MIN;
	uint64_t x18 = 101218450LLU;
	volatile int8_t x19 = INT8_MAX;
	static volatile int16_t x20 = INT16_MIN;

	t3 = (x17^((x18%x19)<=x20));

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = 26251411U;
	uint8_t x24 = 56U;

	t4 = (x21^((x22%x23)<=x24));

	if (t4 != 26251410U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static uint32_t x26 = 4421198U;
	int8_t x27 = 63;
	int64_t x28 = INT64_MIN;
	int64_t t5 = INT64_MIN;

	t5 = (x25^((x26%x27)<=x28));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x30 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -60752;

	t6 = (x29^((x30%x31)<=x32));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 52U;
	int64_t x34 = 1971252LL;
	static int32_t x35 = INT32_MIN;
	uint8_t x36 = 63U;
	static volatile uint32_t t7 = 669U;

	t7 = (x33^((x34%x35)<=x36));

	if (t7 != 52U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	static uint64_t x38 = 1600889937LLU;
	int64_t x39 = 244776LL;
	volatile int8_t x40 = INT8_MAX;

	t8 = (x37^((x38%x39)<=x40));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	int8_t x44 = -1;
	int64_t t9 = 5376LL;

	t9 = (x41^((x42%x43)<=x44));

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	static uint16_t x47 = 14674U;
	volatile uint32_t x48 = 6062U;

	t10 = (x45^((x46%x47)<=x48));

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = 47813990LLU;
	volatile uint32_t x50 = 1545U;
	uint8_t x51 = 73U;
	static uint64_t x52 = 89627761370LLU;
	uint64_t t11 = 18735831290LLU;

	t11 = (x49^((x50%x51)<=x52));

	if (t11 != 47813991LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -39LL;
	uint32_t x54 = 47U;
	int32_t x56 = INT32_MIN;
	int64_t t12 = 50718LL;

	t12 = (x53^((x54%x55)<=x56));

	if (t12 != -40LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int8_t x58 = INT8_MIN;
	int64_t x59 = 536840462LL;
	int32_t x60 = INT32_MIN;
	static uint64_t t13 = UINT64_MAX;

	t13 = (x57^((x58%x59)<=x60));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = 1837;
	int8_t x64 = -15;
	volatile int32_t t14 = INT32_MAX;

	t14 = (x61^((x62%x63)<=x64));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = 105;
	int64_t x67 = INT64_MIN;
	uint8_t x68 = 78U;

	t15 = (x65^((x66%x67)<=x68));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 19912LLU;
	int64_t x70 = INT64_MAX;
	static int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MIN;
	uint64_t t16 = 254623542LLU;

	t16 = (x69^((x70%x71)<=x72));

	if (t16 != 19912LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -2044;
	int16_t x74 = -1048;
	static int64_t x75 = -1LL;
	int64_t x76 = -1031187673511426LL;
	int32_t t17 = 2377835;

	t17 = (x73^((x74%x75)<=x76));

	if (t17 != -2044) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 3121;
	int8_t x78 = INT8_MIN;
	volatile int32_t x80 = INT32_MIN;
	int32_t t18 = 3505;

	t18 = (x77^((x78%x79)<=x80));

	if (t18 != 3121) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x82 = -1;
	int64_t x83 = 411323977937LL;
	volatile uint16_t x84 = 6U;
	static volatile int32_t t19 = 1044;

	t19 = (x81^((x82%x83)<=x84));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	uint32_t x86 = 50992971U;
	static int8_t x87 = INT8_MAX;
	int64_t x88 = -1LL;
	volatile int32_t t20 = 2;

	t20 = (x85^((x86%x87)<=x88));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = 0;
	uint64_t x90 = 261553705995LLU;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;

	t21 = (x89^((x90%x91)<=x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;

	t22 = (x93^((x94%x95)<=x96));

	if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x97 = 721287723U;
	uint16_t x98 = UINT16_MAX;
	static int16_t x99 = 59;
	uint16_t x100 = 2U;
	uint32_t t23 = 9U;

	t23 = (x97^((x98%x99)<=x100));

	if (t23 != 721287723U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	volatile int16_t x102 = 190;
	uint8_t x104 = UINT8_MAX;
	static volatile int64_t t24 = -1887938958385534LL;

	t24 = (x101^((x102%x103)<=x104));

	if (t24 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int32_t x106 = -2686;
	int8_t x107 = -1;
	int64_t x108 = -2956447558LL;
	static volatile int32_t t25 = -1286372;

	t25 = (x105^((x106%x107)<=x108));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x109 = -1LL;
	int16_t x110 = 0;
	int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	volatile int64_t t26 = -10527LL;

	t26 = (x109^((x110%x111)<=x112));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = 10;
	volatile int16_t x114 = -1;
	int8_t x115 = -5;
	volatile int32_t t27 = -237675649;

	t27 = (x113^((x114%x115)<=x116));

	if (t27 != 11) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MAX;
	static uint8_t x118 = 24U;
	uint8_t x119 = UINT8_MAX;
	int32_t t28 = INT32_MAX;

	t28 = (x117^((x118%x119)<=x120));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x123 = INT64_MIN;
	volatile int64_t x124 = -2LL;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x121^((x122%x123)<=x124));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x125 = UINT16_MAX;
	volatile uint16_t x126 = 15U;
	int32_t x127 = 1669896;
	int64_t x128 = 1363838LL;
	int32_t t30 = 672223;

	t30 = (x125^((x126%x127)<=x128));

	if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	volatile int16_t x132 = -1;
	volatile uint64_t t31 = 100LLU;

	t31 = (x129^((x130%x131)<=x132));

	if (t31 != 24627817489901LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x135 = 95U;
	int16_t x136 = INT16_MIN;

	t32 = (x133^((x134%x135)<=x136));

	if (t32 != 24) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	static int8_t x138 = -1;
	int16_t x140 = INT16_MIN;
	int32_t t33 = 72718665;

	t33 = (x137^((x138%x139)<=x140));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x142 = -1;
	volatile int8_t x143 = -30;
	volatile int32_t t34 = -1;

	t34 = (x141^((x142%x143)<=x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x149 = 2;
	int8_t x151 = -40;
	static int32_t t35 = 48270;

	t35 = (x149^((x150%x151)<=x152));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MAX;
	volatile int64_t x155 = -1LL;
	static int64_t x156 = -1LL;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x153^((x154%x155)<=x156));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	static volatile int16_t x158 = 1998;
	static uint32_t x159 = 177328U;
	int64_t x160 = 4198437678765LL;

	t37 = (x157^((x158%x159)<=x160));

	if (t37 != -2147483647) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x162 = 435140U;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t38 = 612083;

	t38 = (x161^((x162%x163)<=x164));

	if (t38 != -5) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x167 = -1;
	volatile int64_t t39 = -209294570LL;

	t39 = (x165^((x166%x167)<=x168));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x174 = 243U;
	int8_t x175 = INT8_MIN;

	t40 = (x173^((x174%x175)<=x176));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t41 = -14812;

	t41 = (x177^((x178%x179)<=x180));

	if (t41 != 254) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = -595213041548027024LL;
	volatile int64_t x183 = -1456784486191119LL;
	uint32_t x184 = 73664277U;
	int32_t t42 = 0;

	t42 = (x181^((x182%x183)<=x184));

	if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = 25;
	volatile uint64_t x187 = 46626803832842853LLU;
	static volatile uint8_t x188 = 16U;
	volatile int32_t t43 = 10;

	t43 = (x185^((x186%x187)<=x188));

	if (t43 != 24) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = -1;
	int8_t x191 = INT8_MAX;
	int32_t t44 = 195;

	t44 = (x189^((x190%x191)<=x192));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = 7405;
	int32_t x195 = -44409;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t45 = 243350;

	t45 = (x193^((x194%x195)<=x196));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x198 = 554700826LLU;
	int16_t x199 = -1;
	uint32_t x200 = 22157U;

	t46 = (x197^((x198%x199)<=x200));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = INT64_MAX;
	uint8_t x203 = UINT8_MAX;
	volatile int32_t t47 = -10;

	t47 = (x201^((x202%x203)<=x204));

	if (t47 != 5) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int8_t x206 = -1;
	static int32_t x207 = -50504;
	uint64_t t48 = UINT64_MAX;

	t48 = (x205^((x206%x207)<=x208));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = -1LL;
	int32_t t49 = 25114;

	t49 = (x209^((x210%x211)<=x212));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = UINT16_MAX;
	static volatile int8_t x216 = -1;
	volatile int32_t t50 = 33161132;

	t50 = (x213^((x214%x215)<=x216));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -3392;
	static uint64_t x218 = 144299848LLU;
	int32_t x219 = -1;
	static volatile uint16_t x220 = 1U;
	int32_t t51 = -172;

	t51 = (x217^((x218%x219)<=x220));

	if (t51 != -3392) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x221 = INT64_MIN;
	volatile uint8_t x223 = UINT8_MAX;
	static volatile int8_t x224 = -1;

	t52 = (x221^((x222%x223)<=x224));

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -1;
	uint32_t x226 = 125U;
	static volatile int8_t x227 = INT8_MIN;
	int64_t x228 = -52853172915002290LL;

	t53 = (x225^((x226%x227)<=x228));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = 4920938193LLU;
	int64_t x231 = 76730156201963173LL;
	int8_t x232 = INT8_MIN;
	static volatile uint64_t t54 = 14LLU;

	t54 = (x229^((x230%x231)<=x232));

	if (t54 != 4920938193LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	volatile int16_t x234 = INT16_MIN;
	volatile uint32_t x236 = 6653U;
	static int32_t t55 = 320907;

	t55 = (x233^((x234%x235)<=x236));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 3U;
	static uint16_t x238 = 168U;
	int8_t x239 = -1;
	int32_t x240 = INT32_MAX;
	volatile int32_t t56 = 172771;

	t56 = (x237^((x238%x239)<=x240));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 2U;
	int32_t x242 = -1;
	int64_t x243 = -1LL;
	uint32_t x244 = 106U;

	t57 = (x241^((x242%x243)<=x244));

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x246 = 8U;
	static volatile int32_t x247 = 11551793;
	int64_t x248 = INT64_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (x245^((x246%x247)<=x248));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 3785682U;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = 3U;
	volatile int64_t x252 = INT64_MAX;
	volatile uint32_t t59 = 1414U;

	t59 = (x249^((x250%x251)<=x252));

	if (t59 != 3785683U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x253 = INT8_MIN;
	volatile int16_t x254 = -1;
	static int32_t x255 = -1;
	uint32_t x256 = 401433U;

	t60 = (x253^((x254%x255)<=x256));

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x259 = INT16_MIN;
	int16_t x260 = 4340;
	uint32_t t61 = 81813U;

	t61 = (x257^((x258%x259)<=x260));

	if (t61 != 4028U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 0U;
	int64_t x262 = 3498LL;
	int16_t x263 = INT16_MIN;
	volatile int32_t x264 = -1;
	static int32_t t62 = 159613;

	t62 = (x261^((x262%x263)<=x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = -1365101;
	int64_t x266 = 3510792621LL;
	uint64_t x267 = 125756597533998LLU;
	static int16_t x268 = 17;
	volatile int32_t t63 = 341;

	t63 = (x265^((x266%x267)<=x268));

	if (t63 != -1365101) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = UINT16_MAX;
	int8_t x270 = -48;
	static int64_t x271 = INT64_MAX;
	uint8_t x272 = 61U;

	t64 = (x269^((x270%x271)<=x272));

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = INT8_MIN;
	static int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	volatile int64_t x276 = INT64_MIN;
	static volatile int32_t t65 = 19590;

	t65 = (x273^((x274%x275)<=x276));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MAX;
	static uint32_t x278 = UINT32_MAX;
	int64_t x279 = INT64_MAX;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t66 = 438711;

	t66 = (x277^((x278%x279)<=x280));

	if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x281 = 1826U;
	static uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 1U;
	volatile uint32_t x284 = 230483548U;
	uint32_t t67 = 1850881365U;

	t67 = (x281^((x282%x283)<=x284));

	if (t67 != 1827U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t68 = -45713796351534LL;

	t68 = (x285^((x286%x287)<=x288));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 24U;
	uint16_t x290 = UINT16_MAX;
	static int64_t x291 = INT64_MAX;
	int32_t t69 = -3296;

	t69 = (x289^((x290%x291)<=x292));

	if (t69 != 24) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MIN;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = 108449743886841522LL;
	int64_t t70 = INT64_MIN;

	t70 = (x293^((x294%x295)<=x296));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -26530086;
	volatile uint32_t x298 = 120707959U;
	volatile int64_t x299 = INT64_MIN;
	uint32_t x300 = 238468U;
	volatile int32_t t71 = -17;

	t71 = (x297^((x298%x299)<=x300));

	if (t71 != -26530086) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 4539;
	uint32_t x302 = 1789447U;
	uint16_t x303 = UINT16_MAX;
	volatile int32_t x304 = INT32_MIN;
	int32_t t72 = 1;

	t72 = (x301^((x302%x303)<=x304));

	if (t72 != 4538) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x306 = 1U;
	int8_t x307 = -1;
	static int8_t x308 = INT8_MAX;
	volatile int32_t t73 = -14;

	t73 = (x305^((x306%x307)<=x308));

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 57U;
	int64_t x310 = INT64_MIN;
	int32_t x311 = 56;
	int8_t x312 = -1;

	t74 = (x309^((x310%x311)<=x312));

	if (t74 != 56) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x313 = 2LLU;
	int16_t x314 = -117;
	static uint64_t x315 = 347551698698132583LLU;
	static int8_t x316 = 0;
	uint64_t t75 = 30LLU;

	t75 = (x313^((x314%x315)<=x316));

	if (t75 != 2LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -40625458;
	static uint8_t x319 = UINT8_MAX;
	int32_t x320 = INT32_MIN;
	int32_t t76 = 130101;

	t76 = (x317^((x318%x319)<=x320));

	if (t76 != -40625458) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = 1;
	static volatile uint32_t x322 = 2391588U;
	volatile uint64_t x323 = 4LLU;
	volatile int32_t x324 = INT32_MIN;
	int32_t t77 = -31505400;

	t77 = (x321^((x322%x323)<=x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x325 = INT32_MAX;
	static int64_t x326 = 3LL;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x325^((x326%x327)<=x328));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x329 = 74U;
	uint16_t x331 = 5U;
	static int16_t x332 = INT16_MIN;

	t79 = (x329^((x330%x331)<=x332));

	if (t79 != 75) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = -2367;
	int16_t x335 = -1;
	int32_t t80 = -37928024;

	t80 = (x333^((x334%x335)<=x336));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = -1LL;
	int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MIN;
	volatile uint32_t x344 = UINT32_MAX;

	t81 = (x341^((x342%x343)<=x344));

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = 8861423977684374317LLU;
	uint8_t x346 = 8U;
	int8_t x347 = INT8_MAX;
	int64_t x348 = INT64_MIN;
	uint64_t t82 = 109091LLU;

	t82 = (x345^((x346%x347)<=x348));

	if (t82 != 8861423977684374317LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x350 = 31U;
	static int64_t x351 = INT64_MAX;
	int64_t x352 = 13135934327LL;
	volatile int32_t t83 = -2948071;

	t83 = (x349^((x350%x351)<=x352));

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = -1;
	int64_t x354 = 35662327885777034LL;
	static int16_t x355 = -1;
	static int32_t t84 = 202002;

	t84 = (x353^((x354%x355)<=x356));

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = -1LL;
	volatile uint8_t x358 = 0U;
	int16_t x359 = -38;
	uint64_t x360 = 23LLU;
	int64_t t85 = 82627487338835600LL;

	t85 = (x357^((x358%x359)<=x360));

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MAX;
	int32_t t86 = 485;

	t86 = (x361^((x362%x363)<=x364));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = 1;
	volatile int64_t x366 = -1LL;
	static volatile int8_t x367 = -1;
	uint32_t x368 = 2000U;
	volatile int32_t t87 = 30;

	t87 = (x365^((x366%x367)<=x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = -1LL;
	uint8_t x370 = 2U;
	int32_t x371 = -1;
	static volatile int8_t x372 = -1;
	int64_t t88 = -878475LL;

	t88 = (x369^((x370%x371)<=x372));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x373 = 26U;
	static volatile uint8_t x374 = 14U;
	uint16_t x375 = 27U;
	uint16_t x376 = UINT16_MAX;
	int32_t t89 = -414541;

	t89 = (x373^((x374%x375)<=x376));

	if (t89 != 27) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x377 = 11U;
	static volatile int64_t x378 = -1LL;
	int32_t x380 = INT32_MIN;

	t90 = (x377^((x378%x379)<=x380));

	if (t90 != 11U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x381 = 1561088077LL;
	static int32_t x383 = INT32_MIN;
	int32_t x384 = -53055957;
	static int64_t t91 = 1413160749896105LL;

	t91 = (x381^((x382%x383)<=x384));

	if (t91 != 1561088076LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int64_t x387 = 3585748127LL;
	int8_t x388 = 4;

	t92 = (x385^((x386%x387)<=x388));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x390 = UINT32_MAX;
	int64_t x391 = -17604019197LL;
	static volatile uint8_t x392 = 7U;
	int32_t t93 = 3;

	t93 = (x389^((x390%x391)<=x392));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -5970270LL;
	static volatile uint64_t x394 = 6564614750234506LLU;
	int32_t x395 = -57582992;
	static int64_t t94 = 2354LL;

	t94 = (x393^((x394%x395)<=x396));

	if (t94 != -5970270LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -342;
	static int64_t x398 = INT64_MIN;
	uint64_t x399 = 1LLU;
	static uint8_t x400 = UINT8_MAX;

	t95 = (x397^((x398%x399)<=x400));

	if (t95 != -341) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MIN;
	static volatile int8_t x402 = INT8_MIN;
	int64_t x404 = -2LL;
	volatile int64_t t96 = INT64_MIN;

	t96 = (x401^((x402%x403)<=x404));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = 8245553854LLU;
	int16_t x407 = -6;
	static uint64_t x408 = 70LLU;
	static volatile uint64_t t97 = 3005700729LLU;

	t97 = (x405^((x406%x407)<=x408));

	if (t97 != 8245553854LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x409 = -491851231;
	int32_t x410 = -104947901;
	int64_t x411 = INT64_MIN;
	int32_t t98 = 121960;

	t98 = (x409^((x410%x411)<=x412));

	if (t98 != -491851232) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x414 = -467;
	volatile int64_t x415 = INT64_MIN;
	int8_t x416 = 2;

	t99 = (x413^((x414%x415)<=x416));

	if (t99 != -2) { NG(); } else { ; }
	
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
