#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
volatile int16_t x24 = -1;
int16_t x34 = -1;
static volatile uint32_t x44 = 202U;
uint32_t x59 = UINT32_MAX;
volatile int32_t x67 = -1;
volatile int16_t x68 = -16;
int64_t x70 = INT64_MIN;
int32_t x71 = -1;
int8_t x73 = -1;
int32_t x76 = -8111;
int16_t x82 = INT16_MIN;
int32_t x94 = 308300727;
int64_t t21 = 283477507224554520LL;
int64_t x98 = -6840713795340LL;
uint32_t x103 = 10U;
volatile int64_t t24 = -18338815310861159LL;
int8_t x110 = INT8_MAX;
static int32_t t25 = -7815;
int32_t x113 = INT32_MIN;
static volatile int8_t x124 = INT8_MIN;
int64_t x126 = -1LL;
int16_t x134 = INT16_MIN;
static volatile int64_t x141 = -1281078157391445827LL;
uint8_t x146 = 0U;
static uint32_t t33 = 3U;
int16_t x149 = INT16_MAX;
uint32_t x155 = 149964U;
uint32_t t35 = 17520585U;
int8_t x162 = -60;
volatile uint16_t x163 = UINT16_MAX;
static int8_t x169 = INT8_MIN;
int8_t x171 = 1;
int64_t x172 = -28291642242143LL;
volatile int64_t t38 = 53LL;
volatile int8_t x174 = INT8_MIN;
static int8_t x175 = INT8_MIN;
uint16_t x176 = UINT16_MAX;
static volatile int8_t x188 = INT8_MAX;
uint16_t x195 = 1U;
int64_t x198 = INT64_MIN;
static volatile int64_t t45 = -107813306097889LL;
uint8_t x206 = 30U;
uint64_t x208 = UINT64_MAX;
uint8_t x212 = 0U;
int16_t x215 = INT16_MIN;
int64_t x221 = 32111163LL;
int64_t x226 = INT64_MAX;
int64_t x239 = INT64_MAX;
int32_t x241 = INT32_MAX;
int32_t x242 = 624878861;
int32_t x252 = INT32_MIN;
int64_t t58 = -9029753128914LL;
volatile uint64_t t63 = 2467455941614769383LLU;
int16_t x286 = -1;
static int64_t t65 = -4LL;
uint32_t t66 = 8882U;
static int32_t x299 = INT32_MAX;
int32_t x302 = INT32_MAX;
static volatile uint32_t t69 = UINT32_MAX;
volatile int8_t x308 = INT8_MIN;
uint64_t x311 = 146630359820651LLU;
volatile uint64_t t71 = 200LLU;
uint32_t x317 = 41389U;
uint64_t x325 = 1LLU;
uint32_t x339 = UINT32_MAX;
int32_t x340 = INT32_MAX;
volatile uint16_t x343 = 26139U;
volatile int32_t t77 = 10772575;
int8_t x346 = INT8_MIN;
uint32_t t78 = 0U;
uint64_t t79 = 121759530559895LLU;
volatile int16_t x363 = INT16_MIN;
int32_t x364 = INT32_MAX;
static volatile int64_t t83 = 87482031068004767LL;
volatile int32_t x369 = -1;
uint64_t x371 = 1LLU;
volatile int64_t x385 = INT64_MIN;
int64_t x392 = 1284579LL;
volatile int64_t t87 = 31796892800112LL;
int16_t x395 = INT16_MIN;
uint8_t x411 = 16U;
int16_t x412 = -2762;
int8_t x419 = 2;
int64_t x422 = INT64_MIN;
int16_t x423 = -1;
uint8_t x425 = UINT8_MAX;
int16_t x435 = 15916;
volatile uint64_t t97 = 1990081240278445139LLU;
uint8_t x440 = UINT8_MAX;


void f0(void) {
	static volatile int32_t x1 = 31375767;
	int16_t x2 = -1;
	static uint16_t x4 = 28105U;
	volatile int32_t t0 = 6582;

	t0 = (x1|((x2|x3)+x4));

	if (t0 != 31387103) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 966U;
	static int32_t x6 = 372651;
	int16_t x7 = INT16_MIN;
	int64_t x8 = 10939825559LL;
	volatile int64_t t1 = 122938978780523179LL;

	t1 = (x5|((x6|x7)+x8));

	if (t1 != 10939805638LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 4U;
	volatile int64_t x10 = -197562917821013LL;
	volatile uint8_t x11 = UINT8_MAX;
	uint16_t x12 = UINT16_MAX;
	int64_t t2 = -18744LL;

	t2 = (x9|((x10|x11)+x12));

	if (t2 != -197562917755394LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	volatile int16_t x14 = INT16_MIN;
	int32_t x15 = -1;
	uint32_t x16 = 1894U;
	volatile uint32_t t3 = 13U;

	t3 = (x13|((x14|x15)+x16));

	if (t3 != 65535U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	volatile int32_t x18 = 312;
	volatile int16_t x19 = INT16_MAX;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -13;

	t4 = (x17|((x18|x19)+x20));

	if (t4 != -2147385346) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MIN;
	int64_t x23 = 20788736LL;
	int64_t t5 = -837964380498LL;

	t5 = (x21|((x22|x23)+x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = -1;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 22718U;
	volatile uint8_t x28 = 9U;
	volatile int32_t t6 = 243649241;

	t6 = (x25|((x26|x27)+x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int64_t x35 = INT64_MAX;
	static uint16_t x36 = 872U;
	static volatile int64_t t7 = INT64_MAX;

	t7 = (x33|((x34|x35)+x36));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x38 = 8529713U;
	int16_t x39 = INT16_MAX;
	uint16_t x40 = UINT16_MAX;
	uint32_t t8 = 4373388U;

	t8 = (x37|((x38|x39)+x40));

	if (t8 != 2156101630U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	static int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MAX;
	volatile uint32_t t9 = 1304816U;

	t9 = (x41|((x42|x43)+x44));

	if (t9 != 2147483849U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 672LLU;
	static int8_t x46 = INT8_MIN;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t x48 = 124;
	uint64_t t10 = 2237000155374987154LLU;

	t10 = (x45|((x46|x47)+x48));

	if (t10 != 763LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 1;
	uint64_t x50 = 1LLU;
	int8_t x51 = -1;
	static int8_t x52 = INT8_MIN;
	uint64_t t11 = 117789LLU;

	t11 = (x49|((x50|x51)+x52));

	if (t11 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = 8658U;
	uint8_t x56 = 0U;
	volatile int32_t t12 = -109;

	t12 = (x53|((x54|x55)+x56));

	if (t12 != -46) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = -1;
	static uint16_t x58 = 3U;
	int8_t x60 = INT8_MAX;
	static uint32_t t13 = UINT32_MAX;

	t13 = (x57|((x58|x59)+x60));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t x62 = INT32_MIN;
	static uint64_t x63 = 1299347384326268878LLU;
	uint8_t x64 = 3U;
	uint64_t t14 = 121810872LLU;

	t14 = (x61|((x62|x63)+x64));

	if (t14 != 18446744072947892223LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int32_t t15 = -283306;

	t15 = (x65|((x66|x67)+x68));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 0U;
	volatile uint16_t x72 = UINT16_MAX;
	static int64_t t16 = 3066771LL;

	t16 = (x69|((x70|x71)+x72));

	if (t16 != 65534LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int32_t t17 = 0;

	t17 = (x73|((x74|x75)+x76));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	static int16_t x78 = -1;
	uint16_t x79 = 1U;
	int32_t x80 = -1;
	volatile int32_t t18 = -991;

	t18 = (x77|((x78|x79)+x80));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	int8_t x84 = 48;
	volatile int32_t t19 = 19;

	t19 = (x81|((x82|x83)+x84));

	if (t19 != -80) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 2U;
	volatile int16_t x86 = INT16_MAX;
	static int32_t x87 = INT32_MIN;
	static int8_t x88 = 16;
	static volatile uint32_t t20 = 3U;

	t20 = (x85|((x86|x87)+x88));

	if (t20 != 2147516431U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	static uint8_t x95 = 23U;
	static int64_t x96 = INT64_MIN;

	t21 = (x93|((x94|x95)+x96));

	if (t21 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = 3;
	static int8_t x99 = INT8_MIN;
	int64_t x100 = -12112158819386LL;
	static volatile int64_t t22 = 7LL;

	t22 = (x97|((x98|x99)+x100));

	if (t22 != -12112158819397LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = -1;
	volatile uint64_t x102 = 1910167529LLU;
	int64_t x104 = -1LL;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x101|((x102|x103)+x104));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1LL;
	int32_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	static volatile int64_t x108 = INT64_MIN;

	t24 = (x105|((x106|x107)+x108));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	int16_t x111 = -1;
	static uint8_t x112 = UINT8_MAX;

	t25 = (x109|((x110|x111)+x112));

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x114 = -7223LL;
	int32_t x115 = INT32_MIN;
	uint16_t x116 = 285U;
	volatile int64_t t26 = -1744086313916LL;

	t26 = (x113|((x114|x115)+x116));

	if (t26 != -6938LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -274;
	int32_t x118 = INT32_MIN;
	static int32_t x119 = -1;
	int32_t x120 = 1997;
	int32_t t27 = 170086;

	t27 = (x117|((x118|x119)+x120));

	if (t27 != -18) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = -1;
	int32_t x122 = INT32_MAX;
	static int64_t x123 = -10260LL;
	int64_t t28 = -3512396990536742LL;

	t28 = (x121|((x122|x123)+x124));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -137;
	static int16_t x127 = INT16_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t29 = 19550LL;

	t29 = (x125|((x126|x127)+x128));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = -1;
	int64_t x135 = INT64_MIN;
	uint16_t x136 = 315U;
	volatile int64_t t30 = -2404070787589654LL;

	t30 = (x133|((x134|x135)+x136));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = 240927LL;
	volatile int16_t x138 = 12;
	int32_t x139 = 1;
	volatile int16_t x140 = 6376;
	volatile int64_t t31 = 42356153639LL;

	t31 = (x137|((x138|x139)+x140));

	if (t31 != 245247LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x142 = INT64_MIN;
	volatile int16_t x143 = -14;
	volatile int8_t x144 = -1;
	volatile int64_t t32 = 41694994228963698LL;

	t32 = (x141|((x142|x143)+x144));

	if (t32 != -3LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x145 = 1697149U;
	uint32_t x147 = 57423U;
	uint16_t x148 = UINT16_MAX;

	t33 = (x145|((x146|x147)+x148));

	if (t33 != 1697151U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x150 = 1U;
	uint16_t x151 = 2003U;
	int8_t x152 = INT8_MIN;
	uint32_t t34 = 213565093U;

	t34 = (x149|((x150|x151)+x152));

	if (t34 != 32767U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MAX;
	int16_t x154 = -8959;
	uint8_t x156 = 28U;

	t35 = (x153|((x154|x155)+x156));

	if (t35 != 4294958591U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 30U;
	volatile int64_t x158 = -1LL;
	volatile int8_t x159 = 3;
	int16_t x160 = -189;
	int64_t t36 = 961505274563219634LL;

	t36 = (x157|((x158|x159)+x160));

	if (t36 != -162LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = 735850;
	int16_t x164 = INT16_MAX;
	int32_t t37 = 870913;

	t37 = (x161|((x162|x163)+x164));

	if (t37 != 753662) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x170 = 5945;

	t38 = (x169|((x170|x171)+x172));

	if (t38 != -38LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x173 = UINT8_MAX;
	int32_t t39 = -328;

	t39 = (x173|((x174|x175)+x176));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile int64_t x178 = INT64_MIN;
	volatile int16_t x179 = -1;
	static volatile int64_t x180 = -9LL;
	int64_t t40 = 1804766971LL;

	t40 = (x177|((x178|x179)+x180));

	if (t40 != -10LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x181 = -273;
	int64_t x182 = -458224LL;
	uint32_t x183 = 22U;
	uint32_t x184 = 1376U;
	volatile int64_t t41 = 14275511LL;

	t41 = (x181|((x182|x183)+x184));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = 3;
	uint32_t x186 = UINT32_MAX;
	uint64_t x187 = 112079220LLU;
	uint64_t t42 = 232LLU;

	t42 = (x185|((x186|x187)+x188));

	if (t42 != 4294967423LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -1LL;
	static volatile int32_t x190 = 0;
	int16_t x191 = -8189;
	int64_t x192 = INT64_MAX;
	int64_t t43 = -13013636412LL;

	t43 = (x189|((x190|x191)+x192));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -1;
	static int16_t x194 = INT16_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x193|((x194|x195)+x196));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MIN;
	int32_t x199 = INT32_MIN;
	int8_t x200 = -1;

	t45 = (x197|((x198|x199)+x200));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = UINT8_MAX;
	uint32_t x202 = 177640388U;
	int32_t x203 = 22053;
	uint8_t x204 = 4U;
	uint32_t t46 = 7U;

	t46 = (x201|((x202|x203)+x204));

	if (t46 != 177657855U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MIN;
	int32_t x207 = INT32_MAX;
	volatile uint64_t t47 = 15171054588939933LLU;

	t47 = (x205|((x206|x207)+x208));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x209 = -1;
	int32_t x210 = -1;
	uint16_t x211 = 6U;
	volatile int32_t t48 = -58584730;

	t48 = (x209|((x210|x211)+x212));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x213 = 10U;
	int8_t x214 = INT8_MIN;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t49 = 12;

	t49 = (x213|((x214|x215)+x216));

	if (t49 != -32886) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	uint32_t x219 = 1702U;
	uint8_t x220 = UINT8_MAX;
	uint32_t t50 = 55U;

	t50 = (x217|((x218|x219)+x220));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x222 = INT32_MIN;
	volatile int32_t x223 = -1;
	int32_t x224 = -6071;
	int64_t t51 = -448428309165LL;

	t51 = (x221|((x222|x223)+x224));

	if (t51 != -1413LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x225 = -102777614LL;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MIN;
	volatile int64_t t52 = -99204LL;

	t52 = (x225|((x226|x227)+x228));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x229 = -1;
	uint16_t x230 = 36U;
	static int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MAX;
	volatile int32_t t53 = -89729966;

	t53 = (x229|((x230|x231)+x232));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -1;
	static uint16_t x234 = 9U;
	static int16_t x235 = INT16_MAX;
	volatile int64_t x236 = -6LL;
	volatile int64_t t54 = 7533190970LL;

	t54 = (x233|((x234|x235)+x236));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x237 = 0;
	static int16_t x238 = -46;
	int8_t x240 = 1;
	volatile int64_t t55 = 211536681506164LL;

	t55 = (x237|((x238|x239)+x240));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x243 = -22;
	uint8_t x244 = 1U;
	int32_t t56 = 917462235;

	t56 = (x241|((x242|x243)+x244));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x245 = INT16_MIN;
	int16_t x246 = -1787;
	int16_t x247 = 0;
	static volatile int64_t x248 = INT64_MAX;
	int64_t t57 = 1LL;

	t57 = (x245|((x246|x247)+x248));

	if (t57 != -1788LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = -1120384836776273LL;
	volatile int8_t x251 = 1;

	t58 = (x249|((x250|x251)+x252));

	if (t58 != -1120386984259921LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x253 = 23LLU;
	static int8_t x254 = INT8_MIN;
	volatile uint16_t x255 = 802U;
	int64_t x256 = -1LL;
	volatile uint64_t t59 = 3091213LLU;

	t59 = (x253|((x254|x255)+x256));

	if (t59 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 161U;
	uint32_t x258 = 485U;
	int16_t x259 = INT16_MIN;
	volatile int32_t x260 = INT32_MIN;
	volatile uint32_t t60 = 153U;

	t60 = (x257|((x258|x259)+x260));

	if (t60 != 2147451365U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = 46974U;
	int64_t x262 = -14729LL;
	static int16_t x263 = INT16_MAX;
	static uint16_t x264 = 2U;
	int64_t t61 = -13498LL;

	t61 = (x261|((x262|x263)+x264));

	if (t61 != 46975LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x269 = 4U;
	int32_t x270 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	volatile uint32_t x272 = UINT32_MAX;
	uint32_t t62 = 3U;

	t62 = (x269|((x270|x271)+x272));

	if (t62 != 2147549182U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = 19108;
	int32_t x274 = 28;
	static int8_t x275 = -1;
	uint64_t x276 = 3495769940902LLU;

	t63 = (x273|((x274|x275)+x276));

	if (t63 != 3495769959333LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x277 = 210232531619LLU;
	int16_t x278 = INT16_MAX;
	volatile int16_t x279 = INT16_MIN;
	uint16_t x280 = 177U;
	static uint64_t t64 = 692524490726LLU;

	t64 = (x277|((x278|x279)+x280));

	if (t64 != 210232531635LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = 392738;
	static int64_t x287 = INT64_MIN;
	static uint8_t x288 = 3U;

	t65 = (x285|((x286|x287)+x288));

	if (t65 != 392738LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = INT32_MIN;
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 5723008U;
	int16_t x292 = -8;

	t66 = (x289|((x290|x291)+x292));

	if (t66 != 2153250807U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = -1LL;
	uint64_t x295 = 240879407662LLU;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t67 = 3800539500419191LLU;

	t67 = (x293|((x294|x295)+x296));

	if (t67 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MAX;
	uint16_t x298 = 3U;
	volatile uint32_t x300 = 2925U;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x297|((x298|x299)+x300));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = -1;
	volatile uint16_t x303 = 2U;
	static uint32_t x304 = 1997077U;

	t69 = (x301|((x302|x303)+x304));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MAX;
	int64_t x307 = -42470710430596LL;
	static int64_t t70 = 10403134LL;

	t70 = (x305|((x306|x307)+x308));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MIN;
	int32_t x312 = INT32_MIN;

	t71 = (x309|((x310|x311)+x312));

	if (t71 != 18446744071562045803LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x313 = -1;
	static volatile int32_t x314 = -1;
	static uint32_t x315 = 6940542U;
	int8_t x316 = -16;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x313|((x314|x315)+x316));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x318 = 487U;
	volatile uint16_t x319 = 52U;
	volatile int64_t x320 = -1LL;
	int64_t t73 = 621761065LL;

	t73 = (x317|((x318|x319)+x320));

	if (t73 != 41471LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x326 = INT32_MIN;
	uint8_t x327 = 1U;
	uint16_t x328 = UINT16_MAX;
	static uint64_t t74 = 6016LLU;

	t74 = (x325|((x326|x327)+x328));

	if (t74 != 18446744071562133505LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = 27LL;
	uint32_t x330 = 33U;
	int8_t x331 = -1;
	uint8_t x332 = 14U;
	volatile int64_t t75 = 1LL;

	t75 = (x329|((x330|x331)+x332));

	if (t75 != 31LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MIN;
	uint32_t t76 = 16599177U;

	t76 = (x337|((x338|x339)+x340));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = -135;
	volatile uint16_t x342 = 0U;
	int16_t x344 = 1;

	t77 = (x341|((x342|x343)+x344));

	if (t77 != -131) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = INT8_MIN;
	uint32_t x347 = 14U;
	uint16_t x348 = UINT16_MAX;

	t78 = (x345|((x346|x347)+x348));

	if (t78 != 4294967181U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = 9235U;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 9879860258235960LLU;
	int8_t x352 = INT8_MAX;

	t79 = (x349|((x350|x351)+x352));

	if (t79 != 18446744072520427191LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MAX;
	uint64_t x354 = 5753345LLU;
	uint8_t x355 = 1U;
	uint64_t x356 = 496720893LLU;
	volatile uint64_t t80 = 15198LLU;

	t80 = (x353|((x354|x355)+x356));

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x358 = INT8_MIN;
	volatile int64_t x359 = INT64_MAX;
	int8_t x360 = -1;
	int64_t t81 = -263449456349896LL;

	t81 = (x357|((x358|x359)+x360));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = 1234817644956412457LLU;
	static volatile uint64_t x362 = 16660032566075LLU;
	uint64_t t82 = 7831315568LLU;

	t82 = (x361|((x362|x363)+x364));

	if (t82 != 1234817646801713979LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x365 = UINT32_MAX;
	int16_t x366 = 57;
	int64_t x367 = -1LL;
	int8_t x368 = -1;

	t83 = (x365|((x366|x367)+x368));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x370 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	uint64_t t84 = UINT64_MAX;

	t84 = (x369|((x370|x371)+x372));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = -312977905;
	static volatile int64_t x378 = INT64_MAX;
	uint32_t x379 = 104825981U;
	int8_t x380 = INT8_MIN;
	volatile int64_t t85 = 1298394208559876672LL;

	t85 = (x377|((x378|x379)+x380));

	if (t85 != -129LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x386 = INT16_MIN;
	uint32_t x387 = 195U;
	uint32_t x388 = 13933U;
	static int64_t t86 = 44576656LL;

	t86 = (x385|((x386|x387)+x388));

	if (t86 != -9223372032559827152LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x389 = -1;
	uint8_t x390 = 1U;
	int16_t x391 = INT16_MIN;

	t87 = (x389|((x390|x391)+x392));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x393 = -1;
	static volatile uint64_t x394 = 1815250108570899179LLU;
	uint32_t x396 = UINT32_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = (x393|((x394|x395)+x396));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	uint8_t x400 = 79U;
	uint64_t t89 = UINT64_MAX;

	t89 = (x397|((x398|x399)+x400));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x405 = -111;
	uint16_t x406 = 5U;
	static int16_t x407 = INT16_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t90 = -6998;

	t90 = (x405|((x406|x407)+x408));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = 220U;
	uint8_t x410 = 6U;
	int32_t t91 = -1;

	t91 = (x409|((x410|x411)+x412));

	if (t91 != -2596) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = -1LL;
	int64_t x414 = INT64_MIN;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	int64_t t92 = 712218953856LL;

	t92 = (x413|((x414|x415)+x416));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x417 = INT64_MIN;
	static int16_t x418 = 4;
	int64_t x420 = -1LL;
	static volatile int64_t t93 = -277534280793352LL;

	t93 = (x417|((x418|x419)+x420));

	if (t93 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x421 = INT16_MIN;
	static int32_t x424 = INT32_MAX;
	int64_t t94 = -57LL;

	t94 = (x421|((x422|x423)+x424));

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x426 = 97;
	uint32_t x427 = UINT32_MAX;
	int8_t x428 = 27;
	uint32_t t95 = 1336761824U;

	t95 = (x425|((x426|x427)+x428));

	if (t95 != 255U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x429 = INT32_MAX;
	int32_t x430 = INT32_MAX;
	int8_t x431 = 0;
	static int32_t x432 = -1;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x429|((x430|x431)+x432));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x433 = INT32_MIN;
	uint64_t x434 = UINT64_MAX;
	uint32_t x436 = 104U;

	t97 = (x433|((x434|x435)+x436));

	if (t97 != 18446744071562068071LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x437 = 15;
	int32_t x438 = 66300460;
	int8_t x439 = -1;
	volatile int32_t t98 = 3749852;

	t98 = (x437|((x438|x439)+x440));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x441 = INT8_MIN;
	volatile uint16_t x442 = 811U;
	volatile int32_t x443 = 10796;
	static int64_t x444 = -1LL;
	int64_t t99 = 3371LL;

	t99 = (x441|((x442|x443)+x444));

	if (t99 != -82LL) { NG(); } else { ; }
	
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

