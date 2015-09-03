#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 1U;
static int32_t t0 = 679946;
uint8_t x7 = 5U;
volatile int32_t t2 = 3845536;
int64_t x16 = INT64_MIN;
int64_t t3 = INT64_MIN;
int8_t x17 = INT8_MIN;
int16_t x32 = INT16_MIN;
uint16_t x35 = 89U;
volatile int64_t x36 = 12186LL;
static int8_t x42 = INT8_MAX;
uint64_t x43 = UINT64_MAX;
int64_t x46 = -1LL;
static volatile uint64_t x47 = UINT64_MAX;
volatile uint64_t t12 = 153182LLU;
static int16_t x74 = INT16_MAX;
uint64_t x91 = UINT64_MAX;
uint8_t x92 = UINT8_MAX;
int16_t x102 = INT16_MAX;
uint32_t x103 = 112U;
uint16_t x107 = 1871U;
volatile uint8_t x109 = 115U;
uint16_t x119 = UINT16_MAX;
int32_t t27 = 0;
static int8_t x121 = -1;
uint32_t x123 = 240354434U;
uint8_t x124 = 5U;
int16_t x125 = -1;
volatile int64_t x133 = INT64_MIN;
volatile uint64_t t31 = UINT64_MAX;
static uint8_t x138 = 36U;
volatile int32_t t32 = -740;
static volatile int16_t x148 = -779;
volatile int32_t x149 = INT32_MIN;
uint16_t x150 = 21U;
int32_t t35 = 2388;
static int32_t x155 = INT32_MIN;
int8_t x165 = 12;
int32_t x168 = 6696891;
static int64_t x169 = -12106430LL;
volatile int32_t x170 = INT32_MAX;
int32_t t40 = -39131;
static int8_t x175 = 0;
static int32_t x178 = INT32_MAX;
int64_t t42 = -2413903382LL;
int64_t x182 = INT64_MIN;
static int64_t x188 = 375920461147036433LL;
volatile int64_t x190 = -41222824LL;
int64_t x191 = -1LL;
int64_t x205 = INT64_MAX;
int32_t x223 = -257;
volatile int32_t t52 = 979;
static uint64_t x233 = UINT64_MAX;
uint64_t x236 = 157LLU;
int16_t x239 = -32;
int8_t x251 = 1;
volatile int32_t t57 = 27;
volatile int16_t x258 = -1;
static int32_t x260 = INT32_MAX;
volatile int64_t x262 = 160146LL;
int16_t x272 = INT16_MAX;
static uint32_t x288 = 8454U;
static int8_t x291 = INT8_MAX;
int32_t x292 = 381189808;
int32_t x294 = INT32_MIN;
int64_t x296 = INT64_MIN;
volatile int64_t t66 = 273251728429280770LL;
static int8_t x302 = 49;
static int32_t x311 = INT32_MIN;
int16_t x317 = -1;
int64_t x319 = INT64_MIN;
int32_t t72 = -168169;
int32_t x325 = -1;
int32_t x329 = INT32_MIN;
int8_t x330 = INT8_MAX;
static int32_t t76 = 1718889;
volatile int32_t t78 = -188337;
uint32_t x345 = 1U;
int64_t x354 = INT64_MIN;
int64_t x356 = -1240533679408LL;
volatile int64_t t81 = 10LL;
static int64_t x357 = INT64_MIN;
int32_t x363 = INT32_MAX;
int32_t x374 = INT32_MAX;
uint64_t x378 = 3478516245LLU;
int32_t x379 = 2;
uint16_t x382 = UINT16_MAX;
int64_t x391 = -1468910109LL;
int8_t x392 = INT8_MIN;
static int32_t t90 = 349942;
int32_t x394 = 20538515;
static volatile uint8_t x403 = 0U;
static uint32_t x414 = UINT32_MAX;
int32_t x417 = -1;
static int8_t x419 = INT8_MIN;
int8_t x420 = 21;
static int32_t t97 = -129910;


void f0(void) {
	static uint64_t x1 = 65557810LLU;
	volatile int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MAX;

	t0 = (((x1|x2)<=x3)+x4);

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 3;
	static int64_t x6 = 59505032058LL;
	volatile int64_t x8 = -1LL;
	int64_t t1 = -431364988846056912LL;

	t1 = (((x5|x6)<=x7)+x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	uint8_t x10 = 126U;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = INT16_MIN;

	t2 = (((x9|x10)<=x11)+x12);

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1607742U;
	uint32_t x14 = UINT32_MAX;
	volatile int16_t x15 = INT16_MAX;

	t3 = (((x13|x14)<=x15)+x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -7049LL;

	t4 = (((x17|x18)<=x19)+x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	volatile uint16_t x22 = 862U;
	volatile int64_t x23 = -221715444156654403LL;
	static int32_t x24 = INT32_MIN;
	int32_t t5 = INT32_MIN;

	t5 = (((x21|x22)<=x23)+x24);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	uint8_t x26 = 33U;
	volatile int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = (((x25|x26)<=x27)+x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -478200LL;
	volatile int32_t x30 = -23358178;
	int8_t x31 = -28;
	static int32_t t7 = 3570;

	t7 = (((x29|x30)<=x31)+x32);

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 15109577821672LLU;
	static int64_t x34 = INT64_MIN;
	volatile int64_t t8 = 1692LL;

	t8 = (((x33|x34)<=x35)+x36);

	if (t8 != 12186LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 36U;
	uint32_t x38 = 88411840U;
	int8_t x39 = 1;
	static int8_t x40 = INT8_MAX;
	int32_t t9 = -5793918;

	t9 = (((x37|x38)<=x39)+x40);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 21U;
	uint8_t x44 = UINT8_MAX;
	static volatile int32_t t10 = -13;

	t10 = (((x41|x42)<=x43)+x44);

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	static int64_t x48 = INT64_MIN;
	static int64_t t11 = -1485170LL;

	t11 = (((x45|x46)<=x47)+x48);

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int64_t x50 = -1LL;
	volatile int64_t x51 = INT64_MAX;
	uint64_t x52 = 950715LLU;

	t12 = (((x49|x50)<=x51)+x52);

	if (t12 != 950716LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = UINT32_MAX;
	uint64_t x54 = 1351184693796953987LLU;
	uint64_t x55 = 4136401424657LLU;
	int16_t x56 = -1;
	static volatile int32_t t13 = 80047;

	t13 = (((x53|x54)<=x55)+x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = INT8_MIN;
	uint8_t x58 = 0U;
	int16_t x59 = 1564;
	volatile uint64_t x60 = 12362411633LLU;
	uint64_t t14 = 308LLU;

	t14 = (((x57|x58)<=x59)+x60);

	if (t14 != 12362411634LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = -1;
	uint8_t x63 = 125U;
	uint8_t x64 = 0U;
	int32_t t15 = -425707;

	t15 = (((x61|x62)<=x63)+x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x66 = UINT32_MAX;
	volatile uint8_t x67 = UINT8_MAX;
	volatile int16_t x68 = -2;
	static volatile int32_t t16 = -974196;

	t16 = (((x65|x66)<=x67)+x68);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 1U;
	int8_t x75 = -6;
	int8_t x76 = INT8_MIN;
	int32_t t17 = -11810;

	t17 = (((x73|x74)<=x75)+x76);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = -1LL;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (((x77|x78)<=x79)+x80);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -7902LL;
	volatile uint64_t x82 = UINT64_MAX;
	static volatile int64_t x83 = INT64_MIN;
	static volatile int64_t x84 = INT64_MIN;
	int64_t t19 = INT64_MIN;

	t19 = (((x81|x82)<=x83)+x84);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = -4;
	int8_t x86 = 0;
	volatile int64_t x87 = 2558944367LL;
	int32_t x88 = -797086506;
	volatile int32_t t20 = -17;

	t20 = (((x85|x86)<=x87)+x88);

	if (t20 != -797086505) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = 436;
	int32_t x90 = INT32_MAX;
	int32_t t21 = 509;

	t21 = (((x89|x90)<=x91)+x92);

	if (t21 != 256) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = 2U;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = 1U;
	uint64_t x96 = UINT64_MAX;
	uint64_t t22 = UINT64_MAX;

	t22 = (((x93|x94)<=x95)+x96);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	int32_t x98 = -1;
	volatile int32_t x99 = 377873383;
	volatile int16_t x100 = INT16_MIN;
	static int32_t t23 = -1;

	t23 = (((x97|x98)<=x99)+x100);

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	static int64_t x104 = 249618474430794LL;
	volatile int64_t t24 = 1309424543884LL;

	t24 = (((x101|x102)<=x103)+x104);

	if (t24 != 249618474430794LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = 256617160741234LL;
	uint32_t x106 = UINT32_MAX;
	volatile int64_t x108 = INT64_MIN;
	int64_t t25 = INT64_MIN;

	t25 = (((x105|x106)<=x107)+x108);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = 5081LLU;
	static volatile int8_t x111 = -33;
	uint16_t x112 = 238U;
	static volatile int32_t t26 = 80929;

	t26 = (((x109|x110)<=x111)+x112);

	if (t26 != 239) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x117 = 0;
	static uint16_t x118 = 44U;
	volatile int8_t x120 = INT8_MIN;

	t27 = (((x117|x118)<=x119)+x120);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = 11;
	int32_t t28 = 462267130;

	t28 = (((x121|x122)<=x123)+x124);

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = INT64_MAX;
	int64_t x127 = INT64_MIN;
	static uint64_t x128 = UINT64_MAX;
	static uint64_t t29 = UINT64_MAX;

	t29 = (((x125|x126)<=x127)+x128);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -1LL;
	uint16_t x130 = 13318U;
	static int32_t x131 = INT32_MIN;
	volatile int64_t x132 = 439361240705142LL;
	static volatile int64_t t30 = 7645530LL;

	t30 = (((x129|x130)<=x131)+x132);

	if (t30 != 439361240705142LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = -21976801;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;

	t31 = (((x133|x134)<=x135)+x136);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x137 = UINT64_MAX;
	uint8_t x139 = 28U;
	volatile uint16_t x140 = 5009U;

	t32 = (((x137|x138)<=x139)+x140);

	if (t32 != 5009) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = 11864;
	uint8_t x142 = UINT8_MAX;
	static uint64_t x143 = UINT64_MAX;
	int64_t x144 = 24125935194844LL;
	int64_t t33 = -2571613LL;

	t33 = (((x141|x142)<=x143)+x144);

	if (t33 != 24125935194845LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 86U;
	int64_t x146 = -1LL;
	static int8_t x147 = -8;
	static volatile int32_t t34 = 5;

	t34 = (((x145|x146)<=x147)+x148);

	if (t34 != -779) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x151 = 8077U;
	uint16_t x152 = 1266U;

	t35 = (((x149|x150)<=x151)+x152);

	if (t35 != 1267) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = 5U;
	static int16_t x154 = -1;
	int32_t x156 = INT32_MAX;
	static int32_t t36 = INT32_MAX;

	t36 = (((x153|x154)<=x155)+x156);

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 4;
	int16_t x158 = -1;
	int64_t x159 = INT64_MIN;
	static int8_t x160 = -1;
	volatile int32_t t37 = -51508;

	t37 = (((x157|x158)<=x159)+x160);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MIN;
	static int32_t x162 = INT32_MIN;
	int32_t x163 = INT32_MAX;
	int16_t x164 = 2364;
	volatile int32_t t38 = 3;

	t38 = (((x161|x162)<=x163)+x164);

	if (t38 != 2365) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x166 = -31;
	static uint64_t x167 = UINT64_MAX;
	volatile int32_t t39 = 406827;

	t39 = (((x165|x166)<=x167)+x168);

	if (t39 != 6696892) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MAX;

	t40 = (((x169|x170)<=x171)+x172);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 0U;
	uint16_t x174 = 5881U;
	int32_t x176 = -1;
	int32_t t41 = -488003;

	t41 = (((x173|x174)<=x175)+x176);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = 1;
	int32_t x179 = -3;
	volatile int64_t x180 = -20LL;

	t42 = (((x177|x178)<=x179)+x180);

	if (t42 != -20LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = 40741311LLU;
	int16_t x183 = -60;
	int8_t x184 = -1;
	int32_t t43 = 135773;

	t43 = (((x181|x182)<=x183)+x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = 5;
	static int64_t x186 = -996078290734LL;
	static int8_t x187 = INT8_MIN;
	int64_t t44 = -481894225604427006LL;

	t44 = (((x185|x186)<=x187)+x188);

	if (t44 != 375920461147036434LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x189 = 7U;
	static int64_t x192 = 7374853LL;
	static volatile int64_t t45 = -2452112044LL;

	t45 = (((x189|x190)<=x191)+x192);

	if (t45 != 7374854LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = UINT32_MAX;
	int64_t x194 = -894584655863LL;
	static int64_t x195 = INT64_MIN;
	static int32_t x196 = 700652;
	volatile int32_t t46 = -2115602;

	t46 = (((x193|x194)<=x195)+x196);

	if (t46 != 700652) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x197 = 0U;
	int64_t x198 = -6LL;
	int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	static int32_t t47 = INT32_MIN;

	t47 = (((x197|x198)<=x199)+x200);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x206 = 4854341LLU;
	int32_t x207 = 1857;
	int16_t x208 = 1;
	volatile int32_t t48 = 2585;

	t48 = (((x205|x206)<=x207)+x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 829259008U;
	int32_t x210 = -1;
	int16_t x211 = 637;
	int16_t x212 = INT16_MIN;
	volatile int32_t t49 = -16017667;

	t49 = (((x209|x210)<=x211)+x212);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = 2LL;
	uint16_t x214 = 1U;
	int64_t x215 = -4157960430LL;
	int32_t x216 = INT32_MAX;
	volatile int32_t t50 = INT32_MAX;

	t50 = (((x213|x214)<=x215)+x216);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = UINT64_MAX;
	static int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	volatile int16_t x220 = 378;
	int32_t t51 = -35406;

	t51 = (((x217|x218)<=x219)+x220);

	if (t51 != 379) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1LL;
	volatile int16_t x222 = 5;
	int8_t x224 = -1;

	t52 = (((x221|x222)<=x223)+x224);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x225 = INT32_MIN;
	int32_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int8_t x228 = -12;
	int32_t t53 = -25;

	t53 = (((x225|x226)<=x227)+x228);

	if (t53 != -12) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x234 = 960400530LLU;
	int64_t x235 = INT64_MIN;
	uint64_t t54 = 241016308085426LLU;

	t54 = (((x233|x234)<=x235)+x236);

	if (t54 != 157LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = -1LL;
	uint32_t x238 = 2609U;
	uint8_t x240 = 1U;
	volatile int32_t t55 = 12389;

	t55 = (((x237|x238)<=x239)+x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x245 = UINT8_MAX;
	int64_t x246 = INT64_MAX;
	static int8_t x247 = -1;
	volatile uint64_t x248 = 147571598066149591LLU;
	uint64_t t56 = 4029656650123LLU;

	t56 = (((x245|x246)<=x247)+x248);

	if (t56 != 147571598066149591LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x249 = INT8_MIN;
	static uint16_t x250 = 0U;
	int8_t x252 = 0;

	t57 = (((x249|x250)<=x251)+x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = -2510910;
	static volatile int8_t x255 = 1;
	static uint8_t x256 = UINT8_MAX;
	int32_t t58 = 50926666;

	t58 = (((x253|x254)<=x255)+x256);

	if (t58 != 256) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x257 = -1;
	int32_t x259 = INT32_MIN;
	int32_t t59 = INT32_MAX;

	t59 = (((x257|x258)<=x259)+x260);

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x261 = 167034772961555LLU;
	uint64_t x263 = UINT64_MAX;
	static uint8_t x264 = 3U;
	int32_t t60 = 378216248;

	t60 = (((x261|x262)<=x263)+x264);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x265 = 6232128LLU;
	volatile int32_t x266 = -1;
	static volatile int8_t x267 = -1;
	uint8_t x268 = 32U;
	volatile int32_t t61 = 2654;

	t61 = (((x265|x266)<=x267)+x268);

	if (t61 != 33) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = INT8_MAX;
	int64_t x271 = 3LL;
	int32_t t62 = 1;

	t62 = (((x269|x270)<=x271)+x272);

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x273 = 14417;
	volatile int8_t x274 = -14;
	volatile int8_t x275 = 21;
	int32_t x276 = 205;
	volatile int32_t t63 = 0;

	t63 = (((x273|x274)<=x275)+x276);

	if (t63 != 206) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 3U;
	static int16_t x286 = INT16_MIN;
	static int32_t x287 = INT32_MIN;
	static volatile uint32_t t64 = 16341891U;

	t64 = (((x285|x286)<=x287)+x288);

	if (t64 != 8454U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x289 = 57052761;
	int8_t x290 = -1;
	volatile int32_t t65 = -26187;

	t65 = (((x289|x290)<=x291)+x292);

	if (t65 != 381189809) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x293 = INT64_MIN;
	int32_t x295 = 105249443;

	t66 = (((x293|x294)<=x295)+x296);

	if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x297 = UINT8_MAX;
	uint32_t x298 = UINT32_MAX;
	static int32_t x299 = 4;
	static uint16_t x300 = UINT16_MAX;
	int32_t t67 = 27;

	t67 = (((x297|x298)<=x299)+x300);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = 0;
	static uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MAX;
	int32_t t68 = 381451891;

	t68 = (((x301|x302)<=x303)+x304);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	int64_t x307 = INT64_MIN;
	volatile uint64_t x308 = UINT64_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (((x305|x306)<=x307)+x308);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int64_t x310 = INT64_MAX;
	int16_t x312 = 720;
	int32_t t70 = -2893;

	t70 = (((x309|x310)<=x311)+x312);

	if (t70 != 720) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = -1;
	static uint32_t x314 = 1378923U;
	uint32_t x315 = UINT32_MAX;
	volatile int64_t x316 = -3477633815874772650LL;
	volatile int64_t t71 = 19LL;

	t71 = (((x313|x314)<=x315)+x316);

	if (t71 != -3477633815874772649LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x318 = -1LL;
	volatile int8_t x320 = 39;

	t72 = (((x317|x318)<=x319)+x320);

	if (t72 != 39) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x321 = 501729551U;
	int16_t x322 = -1;
	static int32_t x323 = 1;
	volatile uint16_t x324 = 0U;
	volatile int32_t t73 = 1;

	t73 = (((x321|x322)<=x323)+x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	int32_t x328 = -1;
	volatile int32_t t74 = 115367;

	t74 = (((x325|x326)<=x327)+x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t75 = 31U;

	t75 = (((x329|x330)<=x331)+x332);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MAX;
	static uint8_t x335 = UINT8_MAX;
	static uint8_t x336 = 6U;

	t76 = (((x333|x334)<=x335)+x336);

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = UINT64_MAX;
	static int8_t x338 = -7;
	volatile int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	volatile int32_t t77 = -118448436;

	t77 = (((x337|x338)<=x339)+x340);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x341 = -1;
	static int64_t x342 = INT64_MAX;
	static volatile int64_t x343 = INT64_MIN;
	uint8_t x344 = UINT8_MAX;

	t78 = (((x341|x342)<=x343)+x344);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x346 = UINT64_MAX;
	uint64_t x347 = 42006162281668LLU;
	int32_t x348 = 1751223;
	volatile int32_t t79 = -1;

	t79 = (((x345|x346)<=x347)+x348);

	if (t79 != 1751223) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x349 = INT32_MIN;
	uint8_t x350 = 85U;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 649446010829726LLU;
	volatile uint64_t t80 = 793LLU;

	t80 = (((x349|x350)<=x351)+x352);

	if (t80 != 649446010829727LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	int8_t x355 = INT8_MIN;

	t81 = (((x353|x354)<=x355)+x356);

	if (t81 != -1240533679407LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x358 = 1650U;
	int32_t x359 = INT32_MIN;
	static int8_t x360 = INT8_MIN;
	int32_t t82 = -232419;

	t82 = (((x357|x358)<=x359)+x360);

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x361 = -1;
	uint64_t x362 = 20226LLU;
	int64_t x364 = INT64_MAX;
	int64_t t83 = INT64_MAX;

	t83 = (((x361|x362)<=x363)+x364);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MAX;
	volatile int8_t x366 = INT8_MIN;
	static uint8_t x367 = 16U;
	volatile uint16_t x368 = 22209U;
	volatile int32_t t84 = -444490;

	t84 = (((x365|x366)<=x367)+x368);

	if (t84 != 22210) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x369 = INT8_MIN;
	volatile int32_t x370 = -143;
	uint32_t x371 = 101942890U;
	static int32_t x372 = INT32_MAX;
	int32_t t85 = INT32_MAX;

	t85 = (((x369|x370)<=x371)+x372);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x373 = 23U;
	uint8_t x375 = 0U;
	int8_t x376 = INT8_MIN;
	static int32_t t86 = -53393;

	t86 = (((x373|x374)<=x375)+x376);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x377 = 1206LL;
	int16_t x380 = INT16_MIN;
	int32_t t87 = 3134;

	t87 = (((x377|x378)<=x379)+x380);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = 15;
	int32_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t88 = 32;

	t88 = (((x381|x382)<=x383)+x384);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x385 = INT32_MIN;
	static volatile uint32_t x386 = 1786932446U;
	uint16_t x387 = 10406U;
	int8_t x388 = 10;
	volatile int32_t t89 = -317;

	t89 = (((x385|x386)<=x387)+x388);

	if (t89 != 10) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = -1;
	int16_t x390 = INT16_MIN;

	t90 = (((x389|x390)<=x391)+x392);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = -5;
	uint32_t x395 = 3800U;
	uint16_t x396 = 1404U;
	static int32_t t91 = 13392422;

	t91 = (((x393|x394)<=x395)+x396);

	if (t91 != 1404) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x397 = INT64_MIN;
	int8_t x398 = -1;
	volatile int16_t x399 = -12;
	uint64_t x400 = 227105527755LLU;
	static uint64_t t92 = 42726245571301LLU;

	t92 = (((x397|x398)<=x399)+x400);

	if (t92 != 227105527755LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x401 = UINT8_MAX;
	volatile int16_t x402 = INT16_MIN;
	int32_t x404 = -1;
	int32_t t93 = 3084581;

	t93 = (((x401|x402)<=x403)+x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x405 = INT64_MAX;
	int64_t x406 = -1LL;
	static volatile uint32_t x407 = 32097U;
	uint32_t x408 = UINT32_MAX;
	static volatile uint32_t t94 = 1U;

	t94 = (((x405|x406)<=x407)+x408);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x409 = -1;
	volatile int16_t x410 = INT16_MIN;
	int16_t x411 = -1;
	int16_t x412 = -91;
	int32_t t95 = 134170278;

	t95 = (((x409|x410)<=x411)+x412);

	if (t95 != -90) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x413 = INT16_MAX;
	volatile int64_t x415 = 204LL;
	uint8_t x416 = 0U;
	static volatile int32_t t96 = 4;

	t96 = (((x413|x414)<=x415)+x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x418 = INT32_MAX;

	t97 = (((x417|x418)<=x419)+x420);

	if (t97 != 21) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = 4061;
	volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	int8_t x424 = 3;
	int32_t t98 = 94;

	t98 = (((x421|x422)<=x423)+x424);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x425 = 57250522491LLU;
	uint32_t x426 = UINT32_MAX;
	volatile uint16_t x427 = 56U;
	volatile int32_t x428 = -316;
	static int32_t t99 = -191;

	t99 = (((x425|x426)<=x427)+x428);

	if (t99 != -316) { NG(); } else { ; }
	
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

