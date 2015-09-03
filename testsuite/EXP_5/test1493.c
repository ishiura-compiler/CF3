#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -2006;
int8_t x10 = INT8_MIN;
int32_t t4 = -15504161;
volatile int32_t t5 = 1439246;
static uint64_t x33 = UINT64_MAX;
int64_t x35 = INT64_MAX;
volatile uint32_t x38 = 1433871456U;
volatile int64_t t9 = -637743475LL;
int64_t t10 = 1017331500LL;
static int8_t x49 = INT8_MIN;
int64_t x57 = -1LL;
int8_t x64 = INT8_MAX;
uint32_t x65 = UINT32_MAX;
static uint16_t x70 = 7201U;
static volatile uint32_t x74 = 0U;
uint8_t x76 = UINT8_MAX;
int16_t x79 = -1207;
int8_t x87 = INT8_MIN;
int8_t x89 = -1;
int64_t x90 = -1LL;
int16_t x91 = INT16_MIN;
uint64_t x95 = 1873923526LLU;
volatile uint32_t t24 = 131802U;
int64_t x102 = INT64_MIN;
uint16_t x103 = 3683U;
int16_t x105 = INT16_MIN;
int64_t x108 = -906LL;
uint8_t x111 = 10U;
static volatile int8_t x130 = INT8_MAX;
int64_t x131 = INT64_MIN;
int64_t x135 = -1LL;
int32_t t35 = -58359;
volatile int32_t t36 = -1005391408;
volatile int32_t x154 = INT32_MIN;
uint32_t x161 = 58U;
uint64_t x163 = UINT64_MAX;
uint64_t t41 = 3473411614LLU;
static uint8_t x170 = 1U;
volatile uint32_t x177 = UINT32_MAX;
uint64_t x180 = UINT64_MAX;
int32_t x181 = -1;
volatile uint32_t t46 = 64U;
uint32_t x191 = 5470U;
volatile uint32_t x208 = 5U;
static int64_t x212 = INT64_MIN;
int64_t x214 = -27231LL;
int16_t x215 = INT16_MAX;
int16_t x219 = -1;
uint16_t x220 = UINT16_MAX;
uint32_t t54 = 0U;
int64_t x224 = -1LL;
int16_t x229 = -1;
int8_t x231 = -1;
int16_t x238 = -1;
static uint16_t x247 = 3U;
int16_t x248 = INT16_MIN;
int64_t x250 = 3006358LL;
int32_t x252 = INT32_MAX;
uint32_t x255 = UINT32_MAX;
volatile int16_t x258 = -1;
volatile int32_t x260 = 65;
int32_t t64 = 88694014;
volatile uint32_t t65 = 3113U;
int64_t x274 = INT64_MIN;
static uint16_t x275 = UINT16_MAX;
uint8_t x276 = UINT8_MAX;
volatile int32_t t68 = -2792;
uint64_t x278 = 22924307350886LLU;
volatile int32_t t71 = -1;
uint16_t x294 = 0U;
int32_t x295 = -212;
volatile int64_t x298 = INT64_MIN;
int8_t x305 = INT8_MIN;
int32_t t76 = 1716;
volatile uint16_t x316 = 859U;
int32_t x324 = INT32_MIN;
int64_t x326 = INT64_MIN;
uint64_t x337 = 0LLU;
uint64_t t84 = 216753LLU;
volatile int16_t x341 = -1;
int16_t x343 = INT16_MIN;
volatile int16_t x345 = INT16_MIN;
int16_t x347 = -1;
static uint16_t x348 = UINT16_MAX;
int32_t x353 = INT32_MAX;
static uint32_t x362 = UINT32_MAX;
int32_t x364 = INT32_MAX;
static volatile int16_t x366 = -1176;
uint32_t x368 = 176797U;
static uint16_t x371 = 7U;
int64_t x374 = -1LL;
uint64_t x379 = UINT64_MAX;
uint8_t x380 = 90U;
int64_t x384 = INT64_MIN;
int32_t x391 = INT32_MIN;
uint64_t x392 = 41LLU;
static int32_t x395 = -1;


void f0(void) {
	uint16_t x1 = 1838U;
	int64_t x2 = -1LL;
	volatile uint8_t x3 = 20U;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 129049LLU;

	t0 = (x1&((x2<x3)&x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MIN;
	static int8_t x7 = INT8_MAX;
	static volatile uint8_t x8 = UINT8_MAX;

	t1 = (x5&((x6<x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = 64U;
	volatile uint64_t t2 = 408838762412LLU;

	t2 = (x9&((x10<x11)&x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -15565361LL;
	volatile uint64_t x14 = 28LLU;
	static uint8_t x15 = 1U;
	volatile uint32_t x16 = 1065U;
	int64_t t3 = 1041LL;

	t3 = (x13&((x14<x15)&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint8_t x18 = UINT8_MAX;
	int8_t x19 = INT8_MIN;
	static uint8_t x20 = UINT8_MAX;

	t4 = (x17&((x18<x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MIN;
	uint64_t x23 = 3299091205081LLU;
	static int8_t x24 = INT8_MIN;

	t5 = (x21&((x22<x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	uint32_t x26 = UINT32_MAX;
	int16_t x27 = INT16_MIN;
	uint64_t x28 = 209007179328LLU;
	volatile uint64_t t6 = 849085916793LLU;

	t6 = (x25&((x26<x27)&x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -2;
	uint64_t x30 = 417050314LLU;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 282;

	t7 = (x29&((x30<x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	volatile uint64_t x36 = 3836518LLU;
	volatile uint64_t t8 = 49191002906382LLU;

	t8 = (x33&((x34<x35)&x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	static int64_t x39 = INT64_MAX;
	int64_t x40 = INT64_MIN;

	t9 = (x37&((x38<x39)&x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	volatile int64_t x42 = 912978409498947428LL;
	int8_t x43 = -59;
	static int16_t x44 = INT16_MIN;

	t10 = (x41&((x42<x43)&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static int32_t x46 = 69923093;
	uint64_t x47 = 3551349LLU;
	uint16_t x48 = 3401U;
	int32_t t11 = 550933;

	t11 = (x45&((x46<x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MIN;
	static int64_t x51 = 165687839LL;
	int64_t x52 = -104LL;
	volatile int64_t t12 = 48975311999657LL;

	t12 = (x49&((x50<x51)&x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	static int8_t x54 = 1;
	int64_t x55 = -1LL;
	uint16_t x56 = UINT16_MAX;
	static int32_t t13 = -37;

	t13 = (x53&((x54<x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 1;
	int8_t x59 = -9;
	volatile int32_t x60 = 91;
	volatile int64_t t14 = 987043144759LL;

	t14 = (x57&((x58<x59)&x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	uint32_t x62 = 2909U;
	uint32_t x63 = 2U;
	uint64_t t15 = 34590319LLU;

	t15 = (x61&((x62<x63)&x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -4864513208LL;
	int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MIN;
	int64_t t16 = 6654326761346391LL;

	t16 = (x65&((x66<x67)&x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 455U;
	static int32_t t17 = -2;

	t17 = (x69&((x70<x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 8005U;
	int16_t x75 = 1946;
	int32_t t18 = 254;

	t18 = (x73&((x74<x75)&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	volatile int8_t x78 = INT8_MIN;
	int16_t x80 = 3;
	static volatile int64_t t19 = -40782105976730136LL;

	t19 = (x77&((x78<x79)&x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MIN;
	int16_t x83 = 97;
	int8_t x84 = 1;
	static volatile int64_t t20 = -16279265LL;

	t20 = (x81&((x82<x83)&x84));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int8_t x86 = INT8_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t21 = -1483537345374210281LL;

	t21 = (x85&((x86<x87)&x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x92 = 4U;
	uint32_t t22 = 812789U;

	t22 = (x89&((x90<x91)&x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MIN;
	int64_t x96 = -1LL;
	static volatile int64_t t23 = 242107488225LL;

	t23 = (x93&((x94<x95)&x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	static uint8_t x98 = 48U;
	int64_t x99 = INT64_MIN;
	static volatile uint32_t x100 = 25976U;

	t24 = (x97&((x98<x99)&x100));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -2;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = 1946;

	t25 = (x101&((x102<x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	uint16_t x107 = UINT16_MAX;
	volatile int64_t t26 = 3184221847880LL;

	t26 = (x105&((x106<x107)&x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	static uint32_t x110 = UINT32_MAX;
	static volatile uint64_t x112 = 2924414LLU;
	uint64_t t27 = 13LLU;

	t27 = (x109&((x110<x111)&x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	volatile uint32_t x116 = UINT32_MAX;
	uint32_t t28 = 5369930U;

	t28 = (x113&((x114<x115)&x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MIN;
	volatile int32_t x120 = 4;
	int64_t t29 = -3883936393394648LL;

	t29 = (x117&((x118<x119)&x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	uint16_t x122 = 0U;
	int8_t x123 = INT8_MAX;
	static uint16_t x124 = 15692U;
	int32_t t30 = 1;

	t30 = (x121&((x122<x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 194;
	int64_t x126 = -68LL;
	int64_t x127 = INT64_MIN;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = -1960975;

	t31 = (x125&((x126<x127)&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 139LLU;
	uint16_t x132 = 22512U;
	volatile uint64_t t32 = 1181468LLU;

	t32 = (x129&((x130<x131)&x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	static uint32_t x134 = UINT32_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t33 = 122963817;

	t33 = (x133&((x134<x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -11578592;
	int8_t x138 = 25;
	int32_t x139 = 237005;
	int32_t x140 = 1989924;
	static volatile int32_t t34 = 872;

	t34 = (x137&((x138<x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	static int32_t x144 = INT32_MIN;

	t35 = (x141&((x142<x143)&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MIN;
	int16_t x146 = -1;
	int8_t x147 = -1;
	int16_t x148 = 0;

	t36 = (x145&((x146<x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -105811329429527LL;
	int32_t x150 = 10577;
	uint16_t x151 = UINT16_MAX;
	int64_t x152 = 4897056LL;
	int64_t t37 = 32773022312291LL;

	t37 = (x149&((x150<x151)&x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int32_t x155 = 1;
	int32_t x156 = 337;
	int64_t t38 = 209LL;

	t38 = (x153&((x154<x155)&x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 52985LL;
	int8_t x158 = -3;
	volatile int16_t x159 = INT16_MIN;
	uint32_t x160 = 240U;
	int64_t t39 = -7338006472LL;

	t39 = (x157&((x158<x159)&x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x162 = -1;
	uint8_t x164 = 61U;
	volatile uint32_t t40 = 223U;

	t40 = (x161&((x162<x163)&x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 144748LLU;
	int8_t x166 = 4;
	uint16_t x167 = 13945U;
	int32_t x168 = -13;

	t41 = (x165&((x166<x167)&x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	int32_t x172 = -381298;
	volatile int32_t t42 = -1;

	t42 = (x169&((x170<x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	uint16_t x176 = UINT16_MAX;
	uint64_t t43 = 241147623994468LLU;

	t43 = (x173&((x174<x175)&x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x178 = -50095026;
	uint8_t x179 = 1U;
	volatile uint64_t t44 = 84705911326693LLU;

	t44 = (x177&((x178<x179)&x180));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = 140795;
	static volatile uint16_t x183 = UINT16_MAX;
	volatile int16_t x184 = -1;
	volatile int32_t t45 = -3963;

	t45 = (x181&((x182<x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 0U;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = UINT16_MAX;
	static uint32_t x188 = 79884U;

	t46 = (x185&((x186<x187)&x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 88U;
	int16_t x190 = INT16_MIN;
	static int8_t x192 = 6;
	static int32_t t47 = 177119799;

	t47 = (x189&((x190<x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -9;
	int16_t x194 = -1;
	static int16_t x195 = -25;
	uint16_t x196 = 405U;
	volatile int32_t t48 = 0;

	t48 = (x193&((x194<x195)&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	uint32_t x198 = 0U;
	volatile int32_t x199 = INT32_MIN;
	static volatile int64_t x200 = INT64_MIN;
	volatile int64_t t49 = -6LL;

	t49 = (x197&((x198<x199)&x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 634U;
	uint32_t x202 = 172U;
	static volatile uint32_t x203 = UINT32_MAX;
	int32_t x204 = -737800;
	static int32_t t50 = -879909;

	t50 = (x201&((x202<x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = 227;
	volatile int64_t t51 = 2119LL;

	t51 = (x205&((x206<x207)&x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 4U;
	int8_t x210 = INT8_MAX;
	static int32_t x211 = -1;
	volatile int64_t t52 = 55037260313121LL;

	t52 = (x209&((x210<x211)&x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 1;
	volatile uint32_t x216 = UINT32_MAX;
	uint32_t t53 = 2U;

	t53 = (x213&((x214<x215)&x216));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	uint32_t x218 = UINT32_MAX;

	t54 = (x217&((x218<x219)&x220));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MAX;
	volatile int64_t t55 = -30992805864LL;

	t55 = (x221&((x222<x223)&x224));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = -13658734582LL;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -26;

	t56 = (x225&((x226<x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -209016001;

	t57 = (x229&((x230<x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = UINT8_MAX;
	volatile uint32_t x234 = UINT32_MAX;
	int32_t x235 = -1273;
	uint16_t x236 = 225U;
	int32_t t58 = -85413;

	t58 = (x233&((x234<x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static volatile uint64_t x239 = UINT64_MAX;
	uint16_t x240 = 2580U;
	int32_t t59 = -51;

	t59 = (x237&((x238<x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	uint16_t x242 = 2022U;
	static int64_t x243 = -1LL;
	uint16_t x244 = 0U;
	volatile int32_t t60 = 1554;

	t60 = (x241&((x242<x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -570974934837LL;
	volatile int32_t x246 = 52997186;
	int64_t t61 = 5308316LL;

	t61 = (x245&((x246<x247)&x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	volatile int16_t x251 = 4;
	static volatile int32_t t62 = 1;

	t62 = (x249&((x250<x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -78;
	volatile int8_t x254 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 606321;

	t63 = (x253&((x254<x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = -11;
	uint16_t x259 = 2U;

	t64 = (x257&((x258<x259)&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 79U;
	uint8_t x262 = UINT8_MAX;
	static int64_t x263 = INT64_MIN;
	static uint32_t x264 = 25212179U;

	t65 = (x261&((x262<x263)&x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 3793LLU;
	int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t66 = 2LLU;

	t66 = (x265&((x266<x267)&x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int64_t x270 = -1LL;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 113U;
	static volatile int64_t t67 = 106LL;

	t67 = (x269&((x270<x271)&x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;

	t68 = (x273&((x274<x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 2233842426474LLU;
	volatile uint8_t x279 = 15U;
	int64_t x280 = -1LL;
	uint64_t t69 = 385438449LLU;

	t69 = (x277&((x278<x279)&x280));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static int64_t x282 = INT64_MIN;
	static int64_t x283 = -1LL;
	volatile uint32_t x284 = 6054U;
	volatile uint32_t t70 = 732U;

	t70 = (x281&((x282<x283)&x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 36U;
	volatile int64_t x286 = -1LL;
	uint16_t x287 = 17U;
	int8_t x288 = -1;

	t71 = (x285&((x286<x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 5543U;
	static int16_t x290 = -1;
	uint64_t x291 = 83756753869952657LLU;
	uint8_t x292 = UINT8_MAX;
	static volatile int32_t t72 = -17;

	t72 = (x289&((x290<x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 748U;
	int64_t x296 = INT64_MAX;
	int64_t t73 = -1362181LL;

	t73 = (x293&((x294<x295)&x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	volatile int32_t x299 = INT32_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 416;

	t74 = (x297&((x298<x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 45201636LL;
	int32_t x302 = INT32_MIN;
	static int16_t x303 = INT16_MIN;
	static int16_t x304 = INT16_MAX;
	volatile int64_t t75 = 265916292460LL;

	t75 = (x301&((x302<x303)&x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x306 = INT16_MAX;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = 0;

	t76 = (x305&((x306<x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = 2615716LL;
	static uint64_t x310 = UINT64_MAX;
	volatile int8_t x311 = INT8_MIN;
	static int8_t x312 = -1;
	static int64_t t77 = 16771LL;

	t77 = (x309&((x310<x311)&x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x313 = 3264;
	volatile int64_t x314 = -4995LL;
	int8_t x315 = INT8_MIN;
	int32_t t78 = 3;

	t78 = (x313&((x314<x315)&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 92;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 31U;
	uint8_t x320 = 7U;
	volatile int32_t t79 = -118;

	t79 = (x317&((x318<x319)&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x322 = 1038;
	int8_t x323 = INT8_MAX;
	volatile uint64_t t80 = 256177619747LLU;

	t80 = (x321&((x322<x323)&x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	uint16_t x327 = 12344U;
	volatile int32_t x328 = INT32_MAX;
	volatile int32_t t81 = 116201;

	t81 = (x325&((x326<x327)&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	static volatile int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MAX;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t82 = 737LL;

	t82 = (x329&((x330<x331)&x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 984U;
	int32_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	uint16_t x336 = UINT16_MAX;
	volatile uint32_t t83 = 1693U;

	t83 = (x333&((x334<x335)&x336));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = 10;
	int32_t x339 = INT32_MIN;
	int32_t x340 = -22;

	t84 = (x337&((x338<x339)&x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x342 = -440;
	volatile int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 65604508;

	t85 = (x341&((x342<x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MIN;
	volatile int32_t t86 = 546;

	t86 = (x345&((x346<x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int64_t x350 = INT64_MAX;
	int16_t x351 = INT16_MIN;
	int32_t x352 = -3591;
	volatile int32_t t87 = 494560;

	t87 = (x349&((x350<x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = UINT64_MAX;
	volatile int16_t x355 = INT16_MIN;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t88 = -38508;

	t88 = (x353&((x354<x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 16;
	volatile int32_t x358 = -6875947;
	volatile int32_t x359 = INT32_MIN;
	uint8_t x360 = 39U;
	volatile int32_t t89 = -33300518;

	t89 = (x357&((x358<x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = UINT32_MAX;
	static uint16_t x363 = UINT16_MAX;
	uint32_t t90 = 70U;

	t90 = (x361&((x362<x363)&x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	int16_t x367 = -1;
	volatile uint32_t t91 = 744U;

	t91 = (x365&((x366<x367)&x368));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	static volatile int16_t x372 = INT16_MIN;
	static volatile int32_t t92 = -10;

	t92 = (x369&((x370<x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	volatile int64_t x375 = INT64_MIN;
	uint64_t x376 = UINT64_MAX;
	static uint64_t t93 = 224LLU;

	t93 = (x373&((x374<x375)&x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x378 = 5U;
	int32_t t94 = -1;

	t94 = (x377&((x378<x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 3U;
	uint64_t x382 = UINT64_MAX;
	int32_t x383 = 341;
	static int64_t t95 = 1021569745LL;

	t95 = (x381&((x382<x383)&x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	int64_t x386 = -552417550612418LL;
	static uint64_t x387 = UINT64_MAX;
	uint8_t x388 = 7U;
	uint32_t t96 = 1425472U;

	t96 = (x385&((x386<x387)&x388));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 12693U;
	volatile int16_t x390 = -1;
	volatile uint64_t t97 = 8273148521LLU;

	t97 = (x389&((x390<x391)&x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	volatile int32_t x394 = INT32_MIN;
	static int8_t x396 = -1;
	int32_t t98 = 227740555;

	t98 = (x393&((x394<x395)&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = INT64_MIN;
	volatile uint8_t x398 = UINT8_MAX;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 7U;
	int64_t t99 = -11858351617LL;

	t99 = (x397&((x398<x399)&x400));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

