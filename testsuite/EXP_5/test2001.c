#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x14 = UINT16_MAX;
int8_t x16 = -30;
static int32_t x17 = INT32_MIN;
uint32_t t7 = 274177845U;
volatile int16_t x34 = INT16_MIN;
int64_t x37 = 40754283383724LL;
uint8_t x39 = 4U;
int64_t t9 = 45922LL;
static int16_t x42 = 51;
int16_t x44 = 191;
int32_t x46 = INT32_MIN;
uint8_t x47 = 59U;
volatile int64_t x51 = -169624257843826335LL;
int8_t x52 = INT8_MIN;
int16_t x54 = -2303;
static int64_t t14 = 28637677LL;
int8_t x64 = -10;
int16_t x66 = -1;
int16_t x72 = -969;
uint8_t x82 = 7U;
volatile int16_t x84 = INT16_MIN;
uint32_t t22 = 27464U;
int64_t x96 = INT64_MAX;
volatile int64_t t23 = INT64_MAX;
uint16_t x101 = UINT16_MAX;
static volatile int32_t x109 = INT32_MIN;
static volatile int16_t x111 = INT16_MAX;
int16_t x112 = INT16_MIN;
volatile uint8_t x114 = 0U;
volatile uint64_t x120 = 1LLU;
static uint64_t t29 = 14602LLU;
volatile int16_t x123 = INT16_MIN;
uint32_t x133 = UINT32_MAX;
int64_t x139 = INT64_MIN;
uint16_t x140 = 1U;
volatile int64_t t35 = -4055121055698953LL;
volatile int32_t x146 = INT32_MAX;
uint8_t x151 = UINT8_MAX;
uint64_t t37 = 443147LLU;
int16_t x155 = INT16_MAX;
int8_t x160 = -1;
int8_t x164 = -37;
uint32_t x166 = 813052544U;
int64_t x170 = 143232711014683LL;
int32_t x171 = INT32_MIN;
volatile int64_t t42 = -7095334736209012LL;
uint64_t x174 = UINT64_MAX;
uint64_t x177 = UINT64_MAX;
static volatile uint64_t t44 = UINT64_MAX;
static uint32_t x182 = 721960198U;
volatile uint64_t t47 = 1022995254LLU;
int16_t x201 = 30;
int64_t t50 = 546389559305LL;
volatile uint8_t x205 = 0U;
static volatile uint32_t x206 = 5785171U;
int32_t x213 = -60556;
volatile int32_t t53 = 5903;
int32_t x219 = INT32_MIN;
uint32_t x224 = 69U;
int64_t x227 = INT64_MAX;
int16_t x228 = INT16_MIN;
static int64_t x230 = INT64_MIN;
static uint8_t x243 = UINT8_MAX;
int32_t x248 = INT32_MIN;
static int64_t x259 = 686617LL;
int8_t x276 = -1;
static int32_t x279 = INT32_MIN;
int8_t x284 = -22;
static int16_t x285 = -1;
int64_t x295 = INT64_MAX;
static int64_t x297 = INT64_MAX;
uint16_t x303 = UINT16_MAX;
int16_t x304 = -1;
volatile int32_t t75 = 1;
static int8_t x306 = INT8_MIN;
uint32_t x316 = UINT32_MAX;
static int8_t x323 = -1;
volatile int16_t x330 = INT16_MIN;
volatile int32_t t82 = 93633;
int64_t x334 = 3907LL;
int32_t x341 = -537331;
int16_t x344 = INT16_MIN;
volatile uint32_t x352 = 237U;
volatile uint64_t t88 = 45934280LLU;
uint32_t x362 = UINT32_MAX;
uint16_t x365 = 106U;
volatile int64_t t93 = 51LL;
int32_t x378 = INT32_MAX;
static int8_t x380 = INT8_MIN;
static int32_t x382 = INT32_MIN;


void f0(void) {
	int8_t x1 = -1;
	int32_t x2 = -1;
	volatile int8_t x3 = INT8_MIN;
	int16_t x4 = -1;
	volatile int32_t t0 = -7975;

	t0 = (x1|((x2|x3)&x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	static int64_t x6 = -1LL;
	int64_t x7 = INT64_MIN;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -152888LL;

	t1 = (x5|((x6|x7)&x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = 14844;
	int32_t t2 = INT32_MAX;

	t2 = (x9|((x10|x11)&x12));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -180;
	int32_t x15 = 670526735;
	int32_t t3 = 3;

	t3 = (x13|((x14|x15)&x16));

	if (t3 != -18) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = 10;
	volatile int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 418470198;

	t4 = (x17|((x18|x19)&x20));

	if (t4 != -2147483638) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 447U;
	static uint32_t x22 = 238226U;
	int16_t x23 = -426;
	uint16_t x24 = 1U;
	uint32_t t5 = 82226U;

	t5 = (x21|((x22|x23)&x24));

	if (t5 != 447U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	volatile int32_t x27 = INT32_MIN;
	uint16_t x28 = 3543U;
	volatile int64_t t6 = 41167694321988LL;

	t6 = (x25|((x26|x27)&x28));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	uint8_t x30 = UINT8_MAX;
	uint32_t x31 = UINT32_MAX;
	uint8_t x32 = UINT8_MAX;

	t7 = (x29|((x30|x31)&x32));

	if (t7 != 255U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static uint16_t x35 = 8U;
	int16_t x36 = -1;
	static volatile int64_t t8 = -992607321141871LL;

	t8 = (x33|((x34|x35)&x36));

	if (t8 != -32760LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = -1;
	volatile int16_t x40 = INT16_MAX;

	t9 = (x37|((x38|x39)&x40));

	if (t9 != 40754283413503LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int64_t x43 = 14877LL;
	uint64_t t10 = UINT64_MAX;

	t10 = (x41|((x42|x43)&x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x45|((x46|x47)&x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 9;
	int16_t x50 = INT16_MIN;
	int64_t t12 = -371111261695593LL;

	t12 = (x49|((x50|x51)&x52));

	if (t12 != -3831LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x55 = INT64_MAX;
	uint16_t x56 = 87U;
	static int64_t t13 = -2060575380841908LL;

	t13 = (x53|((x54|x55)&x56));

	if (t13 != -9223372036854775721LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 78U;
	volatile int8_t x58 = 12;
	int8_t x59 = 54;
	int64_t x60 = INT64_MAX;

	t14 = (x57|((x58|x59)&x60));

	if (t14 != 126LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MAX;
	volatile uint64_t x62 = 31204LLU;
	int16_t x63 = 91;
	static uint64_t t15 = 220588638213LLU;

	t15 = (x61|((x62|x63)&x64));

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 461189U;
	int32_t x67 = -472;
	volatile int64_t x68 = -1LL;
	volatile int64_t t16 = -7529137LL;

	t16 = (x65|((x66|x67)&x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int32_t x70 = -3544220;
	int32_t x71 = INT32_MIN;
	volatile int64_t t17 = -28606430916347LL;

	t17 = (x69|((x70|x71)&x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = 14108086;
	int8_t x74 = INT8_MIN;
	int16_t x75 = 1;
	int16_t x76 = -1;
	volatile int32_t t18 = -21957;

	t18 = (x73|((x74|x75)&x76));

	if (t18 != -73) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	volatile int8_t x78 = -1;
	volatile uint8_t x79 = 20U;
	volatile uint16_t x80 = 12852U;
	volatile int32_t t19 = 1;

	t19 = (x77|((x78|x79)&x80));

	if (t19 != -2147470796) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -5;
	volatile int64_t x83 = INT64_MIN;
	volatile int64_t t20 = 10579564163513LL;

	t20 = (x81|((x82|x83)&x84));

	if (t20 != -5LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = -380911LL;
	volatile uint16_t x86 = 0U;
	volatile uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MIN;
	static volatile uint64_t t21 = 593683253309LLU;

	t21 = (x85|((x86|x87)&x88));

	if (t21 != 18446744073709170705LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 18115392U;
	uint16_t x90 = UINT16_MAX;
	int16_t x91 = 0;
	volatile uint32_t x92 = 1458807U;

	t22 = (x89|((x90|x91)&x92));

	if (t22 != 18115447U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	uint16_t x94 = UINT16_MAX;
	volatile int8_t x95 = INT8_MIN;

	t23 = (x93|((x94|x95)&x96));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	static uint8_t x98 = UINT8_MAX;
	volatile int16_t x99 = INT16_MIN;
	volatile int32_t x100 = -18944;
	int64_t t24 = -351529101386646LL;

	t24 = (x97|((x98|x99)&x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -1;
	volatile int64_t x103 = 518904624475426LL;
	int32_t x104 = -1;
	volatile int64_t t25 = 7004897551LL;

	t25 = (x101|((x102|x103)&x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int16_t x106 = INT16_MAX;
	static uint64_t x107 = 88577887543LLU;
	int64_t x108 = INT64_MAX;
	volatile uint64_t t26 = 2098195165258LLU;

	t26 = (x105|((x106|x107)&x108));

	if (t26 != 9223372125432676351LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = -90;
	static volatile int32_t t27 = -69936;

	t27 = (x109|((x110|x111)&x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile int64_t x116 = INT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = (x113|((x114|x115)&x116));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint64_t x118 = 23553319LLU;
	uint64_t x119 = 919LLU;

	t29 = (x117|((x118|x119)&x120));

	if (t29 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 2;
	int32_t x122 = -216415445;
	uint64_t x124 = 28LLU;
	volatile uint64_t t30 = 1LLU;

	t30 = (x121|((x122|x123)&x124));

	if (t30 != 10LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = 12991;
	volatile uint8_t x128 = 1U;
	volatile uint32_t t31 = 5735U;

	t31 = (x125|((x126|x127)&x128));

	if (t31 != 2147483649U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 106116518512966LLU;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = -46;
	int8_t x132 = 0;
	static uint64_t t32 = 3LLU;

	t32 = (x129|((x130|x131)&x132));

	if (t32 != 106116518512966LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -1;
	int8_t x135 = INT8_MAX;
	static uint64_t x136 = 516871523LLU;
	uint64_t t33 = 3115252LLU;

	t33 = (x133|((x134|x135)&x136));

	if (t33 != 4294967295LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;
	int64_t t34 = 2778868089LL;

	t34 = (x137|((x138|x139)&x140));

	if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -1LL;
	volatile int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MAX;

	t35 = (x141|((x142|x143)&x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int64_t x147 = 118232859969196LL;
	static volatile int16_t x148 = -1;
	int64_t t36 = -13LL;

	t36 = (x145|((x146|x147)&x148));

	if (t36 != -9223253802847567873LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 20526032874LLU;
	static int8_t x150 = 15;
	int64_t x152 = -33457598880031LL;

	t37 = (x149|((x150|x151)&x152));

	if (t37 != 20526032875LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	uint64_t x154 = 34129215105LLU;
	uint16_t x156 = 2304U;
	volatile uint64_t t38 = 2548927438233LLU;

	t38 = (x153|((x154|x155)&x156));

	if (t38 != 18446744071562070272LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 0;
	static uint32_t x158 = 57U;
	uint64_t x159 = 1231774540573529336LLU;
	volatile uint64_t t39 = 463975823LLU;

	t39 = (x157|((x158|x159)&x160));

	if (t39 != 1231774540573529337LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 0;
	int16_t x162 = INT16_MIN;
	static uint64_t x163 = UINT64_MAX;
	volatile uint64_t t40 = 450239008922863689LLU;

	t40 = (x161|((x162|x163)&x164));

	if (t40 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = 405171826074LL;
	int16_t x167 = -1;
	volatile int8_t x168 = -1;
	int64_t t41 = -20LL;

	t41 = (x165|((x166|x167)&x168));

	if (t41 != 408021893119LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	int32_t x172 = -1;

	t42 = (x169|((x170|x171)&x172));

	if (t42 != -153339521LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static int32_t x175 = INT32_MIN;
	volatile uint16_t x176 = 4004U;
	uint64_t t43 = 49577006892LLU;

	t43 = (x173|((x174|x175)&x176));

	if (t43 != 18446744071562071972LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;

	t44 = (x177|((x178|x179)&x180));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = -15691;
	static int32_t x183 = INT32_MIN;
	uint16_t x184 = 5U;
	volatile uint32_t t45 = 26540U;

	t45 = (x181|((x182|x183)&x184));

	if (t45 != 4294951605U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	uint64_t x187 = UINT64_MAX;
	volatile uint8_t x188 = 13U;
	uint64_t t46 = UINT64_MAX;

	t46 = (x185|((x186|x187)&x188));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 32433306593904LLU;
	static int32_t x190 = INT32_MAX;
	int64_t x191 = 0LL;
	volatile uint32_t x192 = UINT32_MAX;

	t47 = (x189|((x190|x191)&x192));

	if (t47 != 32433445535743LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MAX;
	int64_t x194 = -1LL;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t x196 = -381806;
	static volatile uint64_t t48 = UINT64_MAX;

	t48 = (x193|((x194|x195)&x196));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	static int32_t x198 = INT32_MAX;
	static int16_t x199 = 3;
	static int8_t x200 = INT8_MIN;
	uint64_t t49 = UINT64_MAX;

	t49 = (x197|((x198|x199)&x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MIN;
	static int64_t x203 = INT64_MAX;
	int32_t x204 = -9;

	t50 = (x201|((x202|x203)&x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x207 = 70;
	int8_t x208 = -6;
	uint32_t t51 = 7056U;

	t51 = (x205|((x206|x207)&x208));

	if (t51 != 5785170U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	volatile int64_t x210 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;
	static volatile int64_t x212 = INT64_MIN;
	static volatile int64_t t52 = 569060501937376752LL;

	t52 = (x209|((x210|x211)&x212));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -1;
	static int8_t x215 = INT8_MIN;
	uint8_t x216 = 77U;

	t53 = (x213|((x214|x215)&x216));

	if (t53 != -60547) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 9U;
	volatile uint32_t x218 = 16U;
	int16_t x220 = 1;
	volatile uint32_t t54 = 27057359U;

	t54 = (x217|((x218|x219)&x220));

	if (t54 != 9U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = 17;
	uint16_t x222 = 46U;
	static volatile int32_t x223 = INT32_MIN;
	volatile uint32_t t55 = 394U;

	t55 = (x221|((x222|x223)&x224));

	if (t55 != 21U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	static uint64_t x226 = 892163LLU;
	uint64_t t56 = UINT64_MAX;

	t56 = (x225|((x226|x227)&x228));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	static int8_t x231 = 2;
	volatile int16_t x232 = -20;
	static volatile int64_t t57 = -236572LL;

	t57 = (x229|((x230|x231)&x232));

	if (t57 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 0U;
	uint32_t x235 = 2681U;
	uint16_t x236 = UINT16_MAX;
	volatile uint32_t t58 = 9902U;

	t58 = (x233|((x234|x235)&x236));

	if (t58 != 65535U) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -1LL;
	static int32_t x240 = INT32_MIN;
	static volatile int64_t t59 = -5755LL;

	t59 = (x237|((x238|x239)&x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = 8;
	uint16_t x242 = UINT16_MAX;
	int64_t x244 = INT64_MAX;
	volatile int64_t t60 = -6643314LL;

	t60 = (x241|((x242|x243)&x244));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -56834782095LL;
	int16_t x246 = INT16_MAX;
	int32_t x247 = 1887741;
	int64_t t61 = -194362739393LL;

	t61 = (x245|((x246|x247)&x248));

	if (t61 != -56834782095LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x249 = 4U;
	volatile int8_t x250 = 1;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t62 = 49609666175LLU;

	t62 = (x249|((x250|x251)&x252));

	if (t62 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MAX;
	int64_t x255 = -20011LL;
	int16_t x256 = 8;
	static volatile int64_t t63 = -4793099712159LL;

	t63 = (x253|((x254|x255)&x256));

	if (t63 != -120LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 298713041LLU;
	int64_t x258 = 2102604209608956824LL;
	int64_t x260 = INT64_MIN;
	uint64_t t64 = 23529494785554LLU;

	t64 = (x257|((x258|x259)&x260));

	if (t64 != 298713041LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	static volatile int8_t x262 = INT8_MIN;
	int64_t x263 = 5360015357LL;
	volatile int8_t x264 = INT8_MIN;
	int64_t t65 = -277770LL;

	t65 = (x261|((x262|x263)&x264));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = 31;
	volatile uint16_t x267 = 1586U;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t66 = 15U;

	t66 = (x265|((x266|x267)&x268));

	if (t66 != 4294936127U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 0;
	int32_t x270 = INT32_MAX;
	volatile int64_t x271 = INT64_MIN;
	int16_t x272 = -1;
	int64_t t67 = 891817542LL;

	t67 = (x269|((x270|x271)&x272));

	if (t67 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	static uint32_t x274 = UINT32_MAX;
	uint32_t x275 = 2786311U;
	int64_t t68 = -46302573LL;

	t68 = (x273|((x274|x275)&x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 62;
	static volatile int32_t x278 = INT32_MIN;
	int8_t x280 = 7;
	int32_t t69 = 3418;

	t69 = (x277|((x278|x279)&x280));

	if (t69 != 62) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = UINT16_MAX;
	uint8_t x282 = UINT8_MAX;
	static volatile uint16_t x283 = 13434U;
	volatile int32_t t70 = 29604;

	t70 = (x281|((x282|x283)&x284));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = -1LL;
	static uint16_t x288 = 48U;
	int64_t t71 = 236432LL;

	t71 = (x285|((x286|x287)&x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x289 = 1U;
	volatile uint32_t x290 = 0U;
	int32_t x291 = -1;
	int32_t x292 = -1;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x289|((x290|x291)&x292));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile int8_t x294 = -53;
	int32_t x296 = INT32_MIN;
	int64_t t73 = 58LL;

	t73 = (x293|((x294|x295)&x296));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	int32_t x299 = -171172;
	volatile uint16_t x300 = 1U;
	int64_t t74 = INT64_MAX;

	t74 = (x297|((x298|x299)&x300));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;

	t75 = (x301|((x302|x303)&x304));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x305 = -1;
	static int32_t x307 = 8949;
	int16_t x308 = -315;
	volatile int32_t t76 = 1933472;

	t76 = (x305|((x306|x307)&x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x309 = 63629412929530LLU;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = UINT32_MAX;
	static uint64_t t77 = 4114664533437LLU;

	t77 = (x309|((x310|x311)&x312));

	if (t77 != 63629940490239LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	static int64_t x314 = INT64_MAX;
	volatile int8_t x315 = -15;
	volatile int64_t t78 = 8852407554942998LL;

	t78 = (x313|((x314|x315)&x316));

	if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 12728U;
	uint16_t x318 = UINT16_MAX;
	volatile uint32_t x319 = 1624725080U;
	int64_t x320 = INT64_MAX;
	volatile int64_t t79 = 486770615200480776LL;

	t79 = (x317|((x318|x319)&x320));

	if (t79 != 1624768511LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -11;
	int16_t x322 = -29;
	uint64_t x324 = 20902206016408LLU;
	uint64_t t80 = 70349723886692291LLU;

	t80 = (x321|((x322|x323)&x324));

	if (t80 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = 0;
	int16_t x326 = 0;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = -1LL;
	int64_t t81 = INT64_MIN;

	t81 = (x325|((x326|x327)&x328));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	volatile uint8_t x331 = UINT8_MAX;
	static volatile int32_t x332 = -1;

	t82 = (x329|((x330|x331)&x332));

	if (t82 != -32513) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 951725347LLU;
	volatile uint8_t x335 = 2U;
	uint64_t x336 = 1483633587LLU;
	static uint64_t t83 = 485951853LLU;

	t83 = (x333|((x334|x335)&x336));

	if (t83 != 951725859LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = 13;
	int16_t x338 = 24;
	uint8_t x339 = 15U;
	volatile int64_t x340 = INT64_MIN;
	int64_t t84 = -3LL;

	t84 = (x337|((x338|x339)&x340));

	if (t84 != 13LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = 653U;
	uint8_t x343 = 0U;
	int32_t t85 = 23498;

	t85 = (x341|((x342|x343)&x344));

	if (t85 != -537331) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int32_t x346 = -3617872;
	static int16_t x347 = 221;
	uint16_t x348 = 5U;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x345|((x346|x347)&x348));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	int64_t x350 = 5LL;
	uint64_t x351 = 648530LLU;
	uint64_t t87 = 74778492280930268LLU;

	t87 = (x349|((x350|x351)&x352));

	if (t87 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	uint64_t x354 = 153461232709942256LLU;
	uint16_t x355 = 1U;
	volatile int64_t x356 = -1LL;

	t88 = (x353|((x354|x355)&x356));

	if (t88 != 153461232709942271LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = -1;
	uint16_t x358 = 173U;
	int32_t x359 = INT32_MIN;
	int8_t x360 = -1;
	volatile int32_t t89 = 17;

	t89 = (x357|((x358|x359)&x360));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 3238356360155232LLU;
	int16_t x363 = -1;
	int16_t x364 = INT16_MAX;
	uint64_t t90 = 3700842398LLU;

	t90 = (x361|((x362|x363)&x364));

	if (t90 != 3238356360167423LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MAX;
	uint32_t x367 = 12607023U;
	volatile uint16_t x368 = UINT16_MAX;
	uint32_t t91 = 112764U;

	t91 = (x365|((x366|x367)&x368));

	if (t91 != 32767U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -1;
	int8_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = -1LL;
	static volatile int64_t t92 = -27731888082LL;

	t92 = (x369|((x370|x371)&x372));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 23U;
	static volatile int64_t x374 = 45198LL;
	volatile int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MAX;

	t93 = (x373|((x374|x375)&x376));

	if (t93 != 9223372034707337375LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	int16_t x379 = -1;
	volatile int32_t t94 = 42102895;

	t94 = (x377|((x378|x379)&x380));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = INT64_MIN;
	static int64_t x383 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;
	static int64_t t95 = INT64_MIN;

	t95 = (x381|((x382|x383)&x384));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MAX;
	volatile int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = 68U;
	volatile int64_t t96 = 2008809954251982LL;

	t96 = (x385|((x386|x387)&x388));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 39U;
	static int8_t x390 = -1;
	static int16_t x391 = -3;
	int16_t x392 = -1;
	int32_t t97 = 22;

	t97 = (x389|((x390|x391)&x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MAX;
	int64_t x394 = 2991044352922LL;
	volatile uint16_t x395 = UINT16_MAX;
	uint64_t x396 = 24330434071352215LLU;
	volatile uint64_t t98 = 137464349487233489LLU;

	t98 = (x393|((x394|x395)&x396));

	if (t98 != 139586437119LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MAX;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile uint32_t x400 = UINT32_MAX;
	uint32_t t99 = UINT32_MAX;

	t99 = (x397|((x398|x399)&x400));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

