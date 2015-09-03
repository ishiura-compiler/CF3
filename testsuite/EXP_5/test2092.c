#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
static int32_t x11 = -5444875;
static uint8_t x13 = UINT8_MAX;
static int64_t x18 = 84680222787656479LL;
uint32_t x20 = UINT32_MAX;
volatile int64_t t3 = -685968285662LL;
static int32_t x28 = -1;
static volatile int64_t t5 = 5643689597078LL;
static uint64_t x33 = 222031558215728531LLU;
uint8_t x34 = 54U;
uint64_t t6 = 837736LLU;
static int32_t x41 = INT32_MAX;
int16_t x45 = 0;
int8_t x48 = INT8_MIN;
uint32_t t10 = 94U;
int8_t x53 = -1;
int64_t x58 = INT64_MIN;
int32_t x67 = -35;
int64_t x71 = INT64_MAX;
int32_t x78 = -29;
uint8_t x83 = 5U;
uint32_t x91 = 2033820U;
int16_t x96 = INT16_MAX;
uint8_t x98 = 5U;
int16_t x101 = INT16_MAX;
int8_t x106 = -24;
int32_t x108 = -837;
int32_t t24 = 521791;
volatile uint64_t x115 = UINT64_MAX;
static uint64_t x131 = 8806492615078174940LLU;
static volatile int32_t x133 = -1;
uint8_t x148 = 7U;
uint64_t t34 = 2964051874239839073LLU;
uint8_t x149 = UINT8_MAX;
static volatile int8_t x155 = INT8_MIN;
int64_t t36 = -9LL;
volatile int64_t x158 = -1028565021LL;
static volatile int64_t x159 = -1LL;
int8_t x162 = -1;
uint32_t t41 = 5165U;
int32_t x177 = INT32_MIN;
static uint64_t x185 = UINT64_MAX;
volatile uint64_t x186 = 140LLU;
int64_t x194 = INT64_MAX;
uint16_t x198 = UINT16_MAX;
int32_t x206 = 329216;
uint32_t x209 = 2U;
static uint64_t t51 = 4182236465882226LLU;
static int64_t x223 = -1LL;
volatile uint64_t x231 = UINT64_MAX;
static uint64_t t54 = 16LLU;
static int32_t x235 = INT32_MAX;
volatile int64_t t55 = 889LL;
static int64_t x244 = -12LL;
static uint64_t t58 = 55859656115LLU;
int32_t x250 = INT32_MIN;
int8_t x254 = -1;
uint64_t x256 = UINT64_MAX;
static int16_t x264 = 358;
int64_t x268 = -1LL;
volatile int32_t x269 = -1300;
volatile uint16_t x270 = 15U;
int32_t x274 = INT32_MIN;
int64_t x278 = INT64_MIN;
int8_t x281 = -1;
volatile int32_t t67 = 31952;
int32_t x285 = INT32_MIN;
volatile int16_t x287 = -10;
int64_t x288 = 153190787391023LL;
static volatile int8_t x291 = -52;
static int64_t t71 = -7018LL;
uint16_t x302 = UINT16_MAX;
uint64_t x303 = 31399649LLU;
int32_t x307 = INT32_MIN;
uint32_t x308 = 5U;
static uint8_t x311 = 59U;
static uint8_t x312 = 8U;
int8_t x315 = -1;
uint16_t x316 = 1U;
uint32_t x317 = UINT32_MAX;
int8_t x318 = INT8_MIN;
uint16_t x319 = UINT16_MAX;
uint8_t x323 = 52U;
volatile int64_t x334 = INT64_MAX;
volatile int32_t x335 = -2136;
int16_t x352 = 26;
int8_t x353 = -15;
int64_t t86 = 12140510936LL;
int32_t t88 = -358128;
int32_t x372 = INT32_MAX;
int64_t x376 = INT64_MAX;
int64_t x390 = -1LL;
int8_t x391 = INT8_MIN;
volatile int64_t t93 = 1901366132694LL;
int32_t x395 = -8278721;
volatile int8_t x397 = INT8_MIN;
static uint8_t x399 = 95U;
uint64_t x407 = 405376099938LLU;
int32_t x409 = INT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MAX;
	static int32_t x3 = INT32_MIN;
	int16_t x4 = -1;
	int32_t t0 = -155931684;

	t0 = (x1|((x2^x3)%x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x10 = 1042953055669792939LLU;
	uint16_t x12 = UINT16_MAX;
	volatile uint64_t t1 = 2791914662LLU;

	t1 = (x9|((x10^x11)%x12));

	if (t1 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x14 = INT64_MIN;
	volatile uint32_t x15 = 2130898480U;
	volatile uint32_t x16 = UINT32_MAX;
	static int64_t t2 = 22220920991889LL;

	t2 = (x13|((x14^x15)%x16));

	if (t2 != -16584961LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	uint16_t x19 = 3U;

	t3 = (x17|((x18^x19)%x20));

	if (t3 != -46LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -11672675611443LL;
	static uint16_t x22 = 7U;
	int8_t x23 = 17;
	int64_t x24 = INT64_MIN;
	int64_t t4 = -45667347591494375LL;

	t4 = (x21|((x22^x23)%x24));

	if (t4 != -11672675611425LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MIN;
	static int32_t x26 = -768618201;
	volatile int64_t x27 = INT64_MAX;

	t5 = (x25|((x26^x27)%x28));

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x35 = 1776U;
	uint16_t x36 = 3U;

	t6 = (x33|((x34^x35)%x36));

	if (t6 != 222031558215728531LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = UINT64_MAX;
	uint32_t x38 = UINT32_MAX;
	uint16_t x39 = 116U;
	int16_t x40 = INT16_MIN;
	uint64_t t7 = UINT64_MAX;

	t7 = (x37|((x38^x39)%x40));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x42 = 1015U;
	uint16_t x43 = 7088U;
	uint16_t x44 = 19621U;
	int32_t t8 = INT32_MAX;

	t8 = (x41|((x42^x43)%x44));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	volatile int64_t t9 = 368453475929238LL;

	t9 = (x45|((x46^x47)%x48));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = -3;
	static uint32_t x51 = 38266U;
	uint8_t x52 = UINT8_MAX;

	t10 = (x49|((x50^x51)%x52));

	if (t10 != 4294934769U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = INT16_MAX;
	int32_t x55 = 695817872;
	int32_t x56 = -73;
	volatile int32_t t11 = -177857;

	t11 = (x53|((x54^x55)%x56));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 2171U;
	uint64_t x59 = 831789058LLU;
	volatile int64_t x60 = -1LL;
	volatile uint64_t t12 = 2640885301LLU;

	t12 = (x57|((x58^x59)%x60));

	if (t12 != 9223372037686564987LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	int64_t x62 = INT64_MAX;
	volatile int8_t x63 = INT8_MIN;
	uint8_t x64 = 1U;
	volatile int64_t t13 = -1794963950LL;

	t13 = (x61|((x62^x63)%x64));

	if (t13 != 65535LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = 0;
	int32_t x66 = -16;
	int32_t x68 = INT32_MIN;
	volatile int32_t t14 = -27874;

	t14 = (x65|((x66^x67)%x68));

	if (t14 != 45) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = INT64_MIN;
	int64_t x70 = -1LL;
	uint64_t x72 = 37LLU;
	volatile uint64_t t15 = 10094229043772196LLU;

	t15 = (x69|((x70^x71)%x72));

	if (t15 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -2358;
	int32_t x74 = 3774;
	volatile uint32_t x75 = 24U;
	int16_t x76 = INT16_MAX;
	uint32_t t16 = 0U;

	t16 = (x73|((x74^x75)%x76));

	if (t16 != 4294967022U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x77 = 5554U;
	uint16_t x79 = 933U;
	static uint16_t x80 = 1344U;
	volatile int32_t t17 = -97;

	t17 = (x77|((x78^x79)%x80));

	if (t17 != -522) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MIN;
	static volatile int32_t x82 = 3;
	static int16_t x84 = INT16_MIN;
	volatile int32_t t18 = -233435;

	t18 = (x81|((x82^x83)%x84));

	if (t18 != -122) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 434U;
	int16_t x86 = -267;
	static int16_t x87 = 41;
	uint8_t x88 = 2U;
	volatile uint32_t t19 = 1351210U;

	t19 = (x85|((x86^x87)%x88));

	if (t19 != 434U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MAX;
	static int8_t x90 = INT8_MIN;
	static int16_t x92 = -1634;
	uint32_t t20 = 18U;

	t20 = (x89|((x90^x91)%x92));

	if (t20 != 4292933503U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 5;
	static int8_t x94 = INT8_MIN;
	uint32_t x95 = UINT32_MAX;
	uint32_t t21 = 209U;

	t21 = (x93|((x94^x95)%x96));

	if (t21 != 127U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x97 = INT32_MAX;
	int8_t x99 = INT8_MIN;
	static uint32_t x100 = 26276U;
	uint32_t t22 = 801U;

	t22 = (x97|((x98^x99)%x100));

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = INT8_MAX;
	uint8_t x103 = 9U;
	int64_t x104 = INT64_MIN;
	volatile int64_t t23 = 220232487LL;

	t23 = (x101|((x102^x103)%x104));

	if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	static volatile int8_t x107 = INT8_MIN;

	t24 = (x105|((x106^x107)%x108));

	if (t24 != -32664) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	int8_t x110 = -1;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = INT16_MIN;
	int32_t t25 = 83;

	t25 = (x109|((x110^x111)%x112));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = UINT64_MAX;
	int64_t x114 = -1LL;
	static volatile int32_t x116 = -1;
	volatile uint64_t t26 = UINT64_MAX;

	t26 = (x113|((x114^x115)%x116));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MAX;
	static int32_t x118 = INT32_MAX;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = 1067973000LLU;
	volatile uint64_t t27 = 3120LLU;

	t27 = (x117|((x118^x119)%x120));

	if (t27 != 733084543LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -1;
	int8_t x122 = 4;
	static int64_t x123 = INT64_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile int64_t t28 = 410980403258614LL;

	t28 = (x121|((x122^x123)%x124));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = INT32_MAX;
	int8_t x126 = 23;
	volatile int32_t x127 = INT32_MIN;
	uint16_t x128 = 1524U;
	int32_t t29 = 516996;

	t29 = (x125|((x126^x127)%x128));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 5U;
	int32_t x130 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	uint64_t t30 = 53907891929LLU;

	t30 = (x129|((x130^x131)%x132));

	if (t30 != 416879423079702749LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x134 = INT32_MAX;
	volatile int16_t x135 = 3548;
	int16_t x136 = INT16_MIN;
	int32_t t31 = -6165;

	t31 = (x133|((x134^x135)%x136));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 130902LLU;
	volatile uint16_t x138 = 4U;
	int64_t x139 = INT64_MIN;
	volatile uint8_t x140 = UINT8_MAX;
	uint64_t t32 = 225LLU;

	t32 = (x137|((x138^x139)%x140));

	if (t32 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x141 = UINT16_MAX;
	int16_t x142 = INT16_MIN;
	int32_t x143 = INT32_MAX;
	volatile int64_t x144 = -508642423354LL;
	int64_t t33 = -55437942228LL;

	t33 = (x141|((x142^x143)%x144));

	if (t33 != -2147418113LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 13LLU;
	static int32_t x146 = INT32_MAX;
	int16_t x147 = 21;

	t34 = (x145|((x146^x147)%x148));

	if (t34 != 13LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x150 = INT16_MAX;
	int16_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t35 = 1742333;

	t35 = (x149|((x150^x151)%x152));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MIN;
	int64_t x156 = INT64_MIN;

	t36 = (x153|((x154^x155)%x156));

	if (t36 != 2147483647LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = -1;
	volatile int64_t x160 = -11LL;
	int64_t t37 = 206000439LL;

	t37 = (x157|((x158^x159)%x160));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = -1;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t38 = -4269756;

	t38 = (x161|((x162^x163)%x164));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -1;
	int16_t x166 = INT16_MAX;
	static int16_t x167 = INT16_MIN;
	uint16_t x168 = 10186U;
	int32_t t39 = -10793222;

	t39 = (x165|((x166^x167)%x168));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = INT32_MAX;
	int8_t x170 = 10;
	static uint32_t x171 = 662U;
	int16_t x172 = -1;
	uint32_t t40 = 2721364U;

	t40 = (x169|((x170^x171)%x172));

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 0U;
	int8_t x174 = INT8_MAX;
	volatile uint32_t x175 = 6U;
	int8_t x176 = INT8_MIN;

	t41 = (x173|((x174^x175)%x176));

	if (t41 != 121U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x178 = 139182480868154010LLU;
	int8_t x179 = -1;
	static int8_t x180 = -1;
	volatile uint64_t t42 = 223182779LLU;

	t42 = (x177|((x178^x179)%x180));

	if (t42 != 18446744073254823269LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MAX;
	uint64_t x183 = 5744634602131144678LLU;
	uint64_t x184 = UINT64_MAX;
	uint64_t t43 = 27591754362782127LLU;

	t43 = (x181|((x182^x183)%x184));

	if (t43 != 18446744071688831001LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x187 = 38692533752147716LLU;
	int64_t x188 = INT64_MIN;
	uint64_t t44 = UINT64_MAX;

	t44 = (x185|((x186^x187)%x188));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	int16_t x195 = 1;
	volatile int64_t x196 = 2223022647026025LL;
	uint64_t t45 = UINT64_MAX;

	t45 = (x193|((x194^x195)%x196));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	volatile int32_t x200 = INT32_MAX;
	int32_t t46 = -11586881;

	t46 = (x197|((x198^x199)%x200));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = -1;
	uint8_t x203 = 7U;
	int32_t x204 = 13823;
	int32_t t47 = -3079385;

	t47 = (x201|((x202^x203)%x204));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -1;
	int64_t x207 = INT64_MIN;
	volatile int8_t x208 = INT8_MAX;
	volatile int64_t t48 = -525627422LL;

	t48 = (x205|((x206^x207)%x208));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x210 = 0U;
	static uint16_t x211 = UINT16_MAX;
	static int32_t x212 = -1;
	uint32_t t49 = 614024365U;

	t49 = (x209|((x210^x211)%x212));

	if (t49 != 65535U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 94U;
	volatile int64_t x214 = 62279374767264389LL;
	uint64_t x215 = 67804325LLU;
	uint64_t x216 = 9LLU;
	static uint64_t t50 = 752088LLU;

	t50 = (x213|((x214^x215)%x216));

	if (t50 != 94LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = 5603012668LLU;
	int64_t x218 = INT64_MIN;
	int16_t x219 = -9;
	static uint64_t x220 = UINT64_MAX;

	t51 = (x217|((x218^x219)%x220));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = 12962394106061487LL;
	static volatile int16_t x222 = INT16_MAX;
	uint8_t x224 = 16U;
	volatile int64_t t52 = -171850720LL;

	t52 = (x221|((x222^x223)%x224));

	if (t52 != 12962394106061487LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = INT16_MAX;
	int16_t x226 = 6;
	static volatile uint16_t x227 = UINT16_MAX;
	static uint8_t x228 = UINT8_MAX;
	int32_t t53 = 5329605;

	t53 = (x225|((x226^x227)%x228));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MAX;
	int8_t x232 = INT8_MAX;

	t54 = (x229|((x230^x231)%x232));

	if (t54 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x233 = 1U;
	int32_t x234 = INT32_MAX;
	int64_t x236 = 12LL;

	t55 = (x233|((x234^x235)%x236));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 3U;
	int8_t x238 = INT8_MIN;
	int8_t x239 = -1;
	volatile int16_t x240 = INT16_MIN;
	int32_t t56 = 145952421;

	t56 = (x237|((x238^x239)%x240));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MAX;
	volatile int16_t x243 = INT16_MIN;
	int64_t t57 = 9757663464LL;

	t57 = (x241|((x242^x243)%x244));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x245 = 30U;
	volatile int16_t x246 = INT16_MAX;
	uint64_t x247 = 3048725568871267329LLU;
	uint8_t x248 = 30U;

	t58 = (x245|((x246^x247)%x248));

	if (t58 != 30LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	int16_t x251 = 1;
	uint8_t x252 = 50U;
	int32_t t59 = -1226;

	t59 = (x249|((x250^x251)%x252));

	if (t59 != -47) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MAX;
	uint32_t x255 = UINT32_MAX;
	uint64_t t60 = 2046803LLU;

	t60 = (x253|((x254^x255)%x256));

	if (t60 != 2147483647LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = 263U;
	int8_t x258 = -1;
	int64_t x259 = -1LL;
	uint16_t x260 = 1903U;
	volatile int64_t t61 = -3412582588LL;

	t61 = (x257|((x258^x259)%x260));

	if (t61 != 263LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = -5;
	volatile uint8_t x262 = 35U;
	static volatile int64_t x263 = INT64_MIN;
	volatile int64_t t62 = -44004978189LL;

	t62 = (x261|((x262^x263)%x264));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MAX;
	volatile int8_t x267 = INT8_MIN;
	volatile int64_t t63 = -62565LL;

	t63 = (x265|((x266^x267)%x268));

	if (t63 != 255LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x271 = 5368347916LLU;
	uint8_t x272 = 7U;
	volatile uint64_t t64 = 2222822552487288LLU;

	t64 = (x269|((x270^x271)%x272));

	if (t64 != 18446744073709550318LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x275 = 1U;
	int64_t x276 = INT64_MIN;
	volatile int64_t t65 = 463332244467LL;

	t65 = (x273|((x274^x275)%x276));

	if (t65 != -32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MIN;
	static uint16_t x279 = 3U;
	int64_t x280 = INT64_MIN;
	volatile int64_t t66 = -14555440724LL;

	t66 = (x277|((x278^x279)%x280));

	if (t66 != -125LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = INT16_MIN;
	static uint16_t x283 = 9177U;
	uint8_t x284 = 3U;

	t67 = (x281|((x282^x283)%x284));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x286 = 35;
	volatile int64_t t68 = -1LL;

	t68 = (x285|((x286^x287)%x288));

	if (t68 != -43LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MAX;
	volatile int64_t x290 = 3388054217LL;
	uint32_t x292 = 29U;
	static int64_t t69 = 16275637LL;

	t69 = (x289|((x290^x291)%x292));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MAX;
	int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	int64_t x296 = 1352642LL;
	static volatile int64_t t70 = INT64_MAX;

	t70 = (x293|((x294^x295)%x296));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -1LL;
	int32_t x298 = -1510;
	static volatile int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MAX;

	t71 = (x297|((x298^x299)%x300));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = 87129918563890LL;
	static volatile uint16_t x304 = 2U;
	volatile uint64_t t72 = 38354LLU;

	t72 = (x301|((x302^x303)%x304));

	if (t72 != 87129918563890LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = -1LL;
	volatile int64_t t73 = -2426105926663LL;

	t73 = (x305|((x306^x307)%x308));

	if (t73 != -2147483646LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x309 = INT32_MIN;
	volatile int16_t x310 = -1;
	volatile int32_t t74 = -4064;

	t74 = (x309|((x310^x311)%x312));

	if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x313 = -9912772;
	int32_t x314 = -264;
	volatile int32_t t75 = -5832;

	t75 = (x313|((x314^x315)%x316));

	if (t75 != -9912772) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x320 = INT8_MIN;
	uint32_t t76 = UINT32_MAX;

	t76 = (x317|((x318^x319)%x320));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = 1U;
	int64_t x322 = -19853916834628LL;
	volatile int64_t x324 = 10LL;
	int64_t t77 = -4LL;

	t77 = (x321|((x322^x323)%x324));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x325 = 657749072LL;
	static int8_t x326 = INT8_MIN;
	volatile uint8_t x327 = 0U;
	static uint32_t x328 = 3U;
	volatile int64_t t78 = -1LL;

	t78 = (x325|((x326^x327)%x328));

	if (t78 != 657749074LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -1LL;
	static int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MAX;
	volatile int32_t x332 = -208330413;
	volatile int64_t t79 = -9488403395048271LL;

	t79 = (x329|((x330^x331)%x332));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	volatile int64_t t80 = -97550909152389LL;

	t80 = (x333|((x334^x335)%x336));

	if (t80 != -30593LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = 712411963U;
	volatile int16_t x338 = 1;
	int32_t x339 = 753;
	uint64_t x340 = 90LLU;
	volatile uint64_t t81 = 43LLU;

	t81 = (x337|((x338^x339)%x340));

	if (t81 != 712411963LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x341 = -1;
	static volatile int8_t x342 = 5;
	int32_t x343 = -1;
	int8_t x344 = INT8_MIN;
	int32_t t82 = -437643;

	t82 = (x341|((x342^x343)%x344));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	volatile int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MAX;
	int64_t t83 = -247351661LL;

	t83 = (x345|((x346^x347)%x348));

	if (t83 != -2147483641LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 601746LLU;
	volatile int8_t x350 = -1;
	uint8_t x351 = 97U;
	uint64_t t84 = 57LLU;

	t84 = (x349|((x350^x351)%x352));

	if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x354 = 1U;
	uint16_t x355 = 28172U;
	int16_t x356 = 313;
	static volatile uint32_t t85 = 1547U;

	t85 = (x353|((x354^x355)%x356));

	if (t85 != 4294967283U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x357 = -1;
	volatile int64_t x358 = INT64_MAX;
	int64_t x359 = 776458147373290622LL;
	static uint8_t x360 = UINT8_MAX;

	t86 = (x357|((x358^x359)%x360));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = UINT32_MAX;
	static int64_t x362 = -1LL;
	static uint16_t x363 = 392U;
	uint64_t x364 = 3384111LLU;
	volatile uint64_t t87 = 2947LLU;

	t87 = (x361|((x362^x363)%x364));

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = -556030;
	int16_t x366 = INT16_MIN;
	int32_t x367 = -1;
	volatile int8_t x368 = 28;

	t88 = (x365|((x366^x367)%x368));

	if (t88 != -556025) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x369 = 14963U;
	int64_t x370 = -122909832825LL;
	uint64_t x371 = UINT64_MAX;
	volatile uint64_t t89 = 14997564286759410LLU;

	t89 = (x369|((x370^x371)%x372));

	if (t89 != 503267059LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = 2041197U;
	int64_t t90 = 412LL;

	t90 = (x373|((x374^x375)%x376));

	if (t90 != -9223372032561849619LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x377 = INT16_MIN;
	static uint16_t x378 = UINT16_MAX;
	int64_t x379 = 38174894252125LL;
	int64_t x380 = INT64_MIN;
	volatile int64_t t91 = -155725426627188LL;

	t91 = (x377|((x378^x379)%x380));

	if (t91 != -24670LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	int32_t x388 = -39565;
	static int32_t t92 = 1;

	t92 = (x385|((x386^x387)%x388));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = 2;
	int16_t x392 = INT16_MAX;

	t93 = (x389|((x390^x391)%x392));

	if (t93 != 127LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MAX;
	int64_t x394 = INT64_MIN;
	static int16_t x396 = INT16_MIN;
	int64_t t94 = INT64_MAX;

	t94 = (x393|((x394^x395)%x396));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x398 = INT16_MIN;
	uint32_t x400 = 3U;
	uint32_t t95 = 2U;

	t95 = (x397|((x398^x399)%x400));

	if (t95 != 4294967169U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x401 = -1;
	int16_t x402 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = -1;
	uint32_t t96 = UINT32_MAX;

	t96 = (x401|((x402^x403)%x404));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = -1;
	int64_t x406 = -1LL;
	uint64_t x408 = 261545904LLU;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x405|((x406^x407)%x408));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x410 = -9844467724152LL;
	int8_t x411 = -1;
	volatile int16_t x412 = INT16_MAX;
	volatile int64_t t98 = -292350LL;

	t98 = (x409|((x410^x411)%x412));

	if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = -228888LL;
	int8_t x414 = -1;
	static int16_t x415 = INT16_MAX;
	uint8_t x416 = UINT8_MAX;
	int64_t t99 = -13258LL;

	t99 = (x413|((x414^x415)%x416));

	if (t99 != -24LL) { NG(); } else { ; }
	
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

