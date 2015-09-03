#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = 13U;
uint64_t x21 = 850520935LLU;
int64_t x25 = INT64_MAX;
int32_t x28 = -1;
volatile int64_t x34 = -5701380804523053LL;
static volatile int32_t t7 = 2539;
volatile int32_t t8 = -353805;
int8_t x51 = -1;
int16_t x55 = INT16_MIN;
int16_t x57 = -4;
volatile int16_t x58 = INT16_MAX;
volatile int64_t x62 = -1LL;
int64_t x67 = 5479943779594058LL;
static uint32_t x72 = 2086005972U;
int32_t x75 = INT32_MIN;
volatile int32_t t16 = -33;
int32_t x84 = -7;
uint32_t x85 = 71U;
int64_t x88 = 5149587154LL;
int8_t x89 = INT8_MAX;
volatile int32_t x103 = 21;
int32_t t24 = INT32_MIN;
volatile int16_t x117 = INT16_MIN;
volatile int32_t x119 = INT32_MIN;
uint8_t x120 = 23U;
volatile int32_t t28 = -2974779;
int16_t x133 = -1;
uint32_t x135 = 13530929U;
int32_t x158 = INT32_MIN;
uint16_t x159 = UINT16_MAX;
uint64_t x161 = UINT64_MAX;
int32_t x163 = 31128;
uint64_t t36 = 309LLU;
volatile int16_t x165 = -57;
int16_t x169 = 7;
int32_t x172 = -6686;
int16_t x173 = INT16_MIN;
int32_t t39 = -424843307;
uint32_t x182 = UINT32_MAX;
static uint64_t x183 = 8LLU;
static int32_t x193 = -7901;
int16_t x198 = INT16_MIN;
volatile int16_t x202 = INT16_MAX;
uint32_t x203 = UINT32_MAX;
int32_t x204 = INT32_MIN;
uint32_t x207 = 6273220U;
int32_t t45 = -127975713;
int16_t x209 = INT16_MIN;
int16_t x210 = 17;
uint64_t x211 = UINT64_MAX;
int64_t x212 = INT64_MIN;
int32_t t48 = 130;
uint16_t x229 = 26347U;
int8_t x232 = INT8_MIN;
static volatile int8_t x237 = -1;
static uint16_t x245 = UINT16_MAX;
volatile int16_t x254 = -5;
int32_t t56 = 93047108;
int64_t x262 = -673346992283LL;
int64_t x268 = -1LL;
static volatile int32_t t59 = 1211;
uint64_t x273 = UINT64_MAX;
int32_t x275 = INT32_MAX;
static volatile uint64_t t60 = UINT64_MAX;
uint64_t t62 = 125576106577765333LLU;
int32_t t65 = 12557;
static volatile uint16_t x297 = UINT16_MAX;
int32_t t67 = 244;
int64_t x308 = INT64_MIN;
uint8_t x310 = UINT8_MAX;
int16_t x314 = 7864;
static int32_t t70 = -1;
uint16_t x329 = UINT16_MAX;
int16_t x333 = 0;
static uint64_t x340 = UINT64_MAX;
uint32_t x353 = UINT32_MAX;
uint8_t x357 = UINT8_MAX;
uint16_t x358 = 146U;
int64_t x359 = 46253559335LL;
uint64_t x360 = UINT64_MAX;
static uint32_t x366 = 1525453049U;
volatile int32_t t82 = 63567068;
volatile int64_t t83 = INT64_MIN;
static volatile uint8_t x383 = 5U;
static int64_t x384 = INT64_MIN;
int64_t x387 = 2057177436731020LL;
int32_t x397 = 13537400;
static uint64_t x406 = 0LLU;
int64_t x407 = INT64_MIN;
int32_t t91 = -492;
int16_t x417 = -1;
volatile int32_t t95 = 14;
static int16_t x429 = INT16_MIN;
static uint8_t x431 = 2U;
int32_t t97 = -33866505;
volatile int16_t x441 = -1;
static int64_t x442 = INT64_MIN;


void f0(void) {
	volatile uint32_t x1 = 8161524U;
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	volatile uint32_t t0 = 294476U;

	t0 = (x1-((x2%x3)<=x4));

	if (t0 != 8161523U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 117762915943646LLU;
	static volatile int16_t x6 = INT16_MAX;
	int32_t x7 = -8280969;
	uint64_t x8 = 64653LLU;
	volatile uint64_t t1 = 682LLU;

	t1 = (x5-((x6%x7)<=x8));

	if (t1 != 117762915943645LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int8_t x11 = INT8_MIN;
	static int32_t x12 = INT32_MIN;
	static int32_t t2 = 8;

	t2 = (x9-((x10%x11)<=x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -57;
	static int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 31002257;

	t3 = (x13-((x14%x15)<=x16));

	if (t3 != -58) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x22 = INT32_MIN;
	volatile int64_t x23 = INT64_MIN;
	uint64_t x24 = 1LLU;
	uint64_t t4 = 1803205717533LLU;

	t4 = (x21-((x22%x23)<=x24));

	if (t4 != 850520935LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = 33U;
	static volatile int64_t x27 = INT64_MIN;
	int64_t t5 = INT64_MAX;

	t5 = (x25-((x26%x27)<=x28));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	volatile int64_t x30 = INT64_MIN;
	static int32_t x31 = -51303619;
	int16_t x32 = INT16_MAX;
	static volatile int32_t t6 = -174180836;

	t6 = (x29-((x30%x31)<=x32));

	if (t6 != -129) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MAX;
	uint8_t x35 = 10U;
	static uint32_t x36 = 5091U;

	t7 = (x33-((x34%x35)<=x36));

	if (t7 != 32766) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;

	t8 = (x45-((x46%x47)<=x48));

	if (t8 != 32766) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = 11;
	int8_t x50 = 1;
	uint8_t x52 = 19U;
	int32_t t9 = 231844;

	t9 = (x49-((x50%x51)<=x52));

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	volatile uint32_t x54 = UINT32_MAX;
	static volatile uint64_t x56 = UINT64_MAX;
	volatile int32_t t10 = 610348703;

	t10 = (x53-((x54%x55)<=x56));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = INT64_MIN;
	static int32_t t11 = 460445;

	t11 = (x57-((x58%x59)<=x60));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -1;
	int64_t x63 = -1LL;
	volatile int64_t x64 = INT64_MIN;
	int32_t t12 = -28;

	t12 = (x61-((x62%x63)<=x64));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 0;
	volatile uint32_t x66 = 1627103U;
	int16_t x68 = -58;
	int32_t t13 = 269395481;

	t13 = (x65-((x66%x67)<=x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = 589511622503LL;
	int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	volatile int64_t t14 = 274762166247LL;

	t14 = (x69-((x70%x71)<=x72));

	if (t14 != 589511622502LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	static volatile int64_t x74 = -1LL;
	int32_t x76 = INT32_MIN;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x73-((x74%x75)<=x76));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -1;
	volatile int64_t x78 = INT64_MAX;
	int16_t x79 = -28;
	volatile uint32_t x80 = 2757U;

	t16 = (x77-((x78%x79)<=x80));

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x81 = INT8_MAX;
	int8_t x82 = -1;
	int64_t x83 = INT64_MIN;
	static int32_t t17 = 26988;

	t17 = (x81-((x82%x83)<=x84));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x86 = INT16_MAX;
	int8_t x87 = -1;
	uint32_t t18 = 3980U;

	t18 = (x85-((x86%x87)<=x88));

	if (t18 != 70U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x90 = INT64_MAX;
	int16_t x91 = -3052;
	static uint64_t x92 = UINT64_MAX;
	volatile int32_t t19 = -35;

	t19 = (x89-((x90%x91)<=x92));

	if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MAX;
	uint16_t x94 = UINT16_MAX;
	static uint8_t x95 = 6U;
	int64_t x96 = -1LL;
	int32_t t20 = INT32_MAX;

	t20 = (x93-((x94%x95)<=x96));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	uint8_t x98 = UINT8_MAX;
	volatile uint8_t x99 = 13U;
	int8_t x100 = 47;
	int32_t t21 = -12593;

	t21 = (x97-((x98%x99)<=x100));

	if (t21 != 2147483646) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = UINT32_MAX;
	int64_t x104 = INT64_MIN;
	static uint32_t t22 = UINT32_MAX;

	t22 = (x101-((x102%x103)<=x104));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -99;
	int16_t x106 = -1;
	int16_t x107 = INT16_MAX;
	int64_t x108 = INT64_MIN;
	volatile int32_t t23 = -171663273;

	t23 = (x105-((x106%x107)<=x108));

	if (t23 != -99) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	static int16_t x110 = -1;
	static int64_t x111 = -1LL;
	int64_t x112 = INT64_MIN;

	t24 = (x109-((x110%x111)<=x112));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x113 = UINT8_MAX;
	volatile int64_t x114 = 16LL;
	static uint32_t x115 = 393238U;
	int8_t x116 = INT8_MIN;
	static int32_t t25 = -1225507;

	t25 = (x113-((x114%x115)<=x116));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x118 = -1;
	int32_t t26 = 43148;

	t26 = (x117-((x118%x119)<=x120));

	if (t26 != -32769) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = 5225529U;
	int32_t x122 = INT32_MAX;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	static volatile uint32_t t27 = 450U;

	t27 = (x121-((x122%x123)<=x124));

	if (t27 != 5225529U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = -78;
	volatile int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	int32_t x128 = -21729234;

	t28 = (x125-((x126%x127)<=x128));

	if (t28 != -78) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = -2;
	int8_t x131 = INT8_MIN;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t29 = 77611263;

	t29 = (x129-((x130%x131)<=x132));

	if (t29 != -129) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x134 = 1;
	static int16_t x136 = INT16_MAX;
	volatile int32_t t30 = 12;

	t30 = (x133-((x134%x135)<=x136));

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -170;
	int64_t x138 = INT64_MIN;
	static uint32_t x139 = 19U;
	volatile int16_t x140 = INT16_MAX;
	volatile int32_t t31 = 785010;

	t31 = (x137-((x138%x139)<=x140));

	if (t31 != -171) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t32 = 113453990;

	t32 = (x141-((x142%x143)<=x144));

	if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int64_t x150 = INT64_MAX;
	static int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MAX;
	volatile int32_t t33 = 24619123;

	t33 = (x149-((x150%x151)<=x152));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	int32_t x154 = -350151;
	static int16_t x155 = INT16_MIN;
	volatile uint32_t x156 = 6822649U;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x153-((x154%x155)<=x156));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t35 = -2378;

	t35 = (x157-((x158%x159)<=x160));

	if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x162 = INT16_MIN;
	int64_t x164 = INT64_MAX;

	t36 = (x161-((x162%x163)<=x164));

	if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x166 = 11U;
	int64_t x167 = INT64_MIN;
	uint64_t x168 = UINT64_MAX;
	int32_t t37 = -24134970;

	t37 = (x165-((x166%x167)<=x168));

	if (t37 != -58) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x170 = 9U;
	static int32_t x171 = 130380243;
	int32_t t38 = 287386;

	t38 = (x169-((x170%x171)<=x172));

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x174 = INT32_MIN;
	int32_t x175 = -124;
	int32_t x176 = -152597516;

	t39 = (x173-((x174%x175)<=x176));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MIN;
	volatile uint16_t x178 = UINT16_MAX;
	volatile uint64_t x179 = 306167LLU;
	uint32_t x180 = UINT32_MAX;
	int32_t t40 = 73192;

	t40 = (x177-((x178%x179)<=x180));

	if (t40 != -32769) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x181 = 3U;
	uint8_t x184 = UINT8_MAX;
	int32_t t41 = -2;

	t41 = (x181-((x182%x183)<=x184));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	static int16_t x196 = INT16_MIN;
	static volatile int32_t t42 = -23216;

	t42 = (x193-((x194%x195)<=x196));

	if (t42 != -7901) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x197 = -1;
	volatile int8_t x199 = -1;
	int8_t x200 = INT8_MAX;
	static volatile int32_t t43 = 9;

	t43 = (x197-((x198%x199)<=x200));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x201 = -2620595137LL;
	int64_t t44 = -926332998924LL;

	t44 = (x201-((x202%x203)<=x204));

	if (t44 != -2620595138LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x205 = UINT16_MAX;
	int16_t x206 = -1;
	int64_t x208 = 2690826LL;

	t45 = (x205-((x206%x207)<=x208));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t t46 = 2;

	t46 = (x209-((x210%x211)<=x212));

	if (t46 != -32769) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = -1LL;
	volatile int8_t x214 = -1;
	static uint32_t x215 = 7U;
	volatile uint8_t x216 = 10U;
	volatile int64_t t47 = 23LL;

	t47 = (x213-((x214%x215)<=x216));

	if (t47 != -2LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -1;
	volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = 1283207U;
	volatile int32_t x220 = INT32_MIN;

	t48 = (x217-((x218%x219)<=x220));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MIN;
	static int16_t x226 = INT16_MIN;
	uint32_t x227 = 14U;
	int8_t x228 = -1;
	int32_t t49 = -3882511;

	t49 = (x225-((x226%x227)<=x228));

	if (t49 != -129) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x230 = 2;
	int16_t x231 = -1794;
	volatile int32_t t50 = 778370284;

	t50 = (x229-((x230%x231)<=x232));

	if (t50 != 26347) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -1;
	int64_t x234 = -1LL;
	uint16_t x235 = UINT16_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t51 = 1;

	t51 = (x233-((x234%x235)<=x236));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x238 = 377U;
	volatile int64_t x239 = -1LL;
	int32_t x240 = INT32_MAX;
	volatile int32_t t52 = 1;

	t52 = (x237-((x238%x239)<=x240));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = 12910U;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -2082804600877962157LL;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t53 = 138206U;

	t53 = (x241-((x242%x243)<=x244));

	if (t53 != 12910U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x246 = 350316;
	int64_t x247 = 328508630LL;
	volatile int8_t x248 = -1;
	volatile int32_t t54 = -3;

	t54 = (x245-((x246%x247)<=x248));

	if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = UINT64_MAX;
	uint16_t x250 = UINT16_MAX;
	static int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x249-((x250%x251)<=x252));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = 10U;
	static int64_t x255 = 1539438314LL;
	uint64_t x256 = UINT64_MAX;

	t56 = (x253-((x254%x255)<=x256));

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	int64_t x259 = 3301387310444731329LL;
	uint64_t x260 = 9591421LLU;
	volatile int32_t t57 = 499075;

	t57 = (x257-((x258%x259)<=x260));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = -35;
	static volatile uint8_t x263 = UINT8_MAX;
	uint16_t x264 = 1U;
	int32_t t58 = -8081545;

	t58 = (x261-((x262%x263)<=x264));

	if (t58 != -36) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = 1019136741;
	int8_t x266 = -1;
	uint8_t x267 = UINT8_MAX;

	t59 = (x265-((x266%x267)<=x268));

	if (t59 != 1019136740) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x274 = -1;
	int16_t x276 = -428;

	t60 = (x273-((x274%x275)<=x276));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x277 = 55U;
	static int32_t x278 = 414;
	int32_t x279 = -50;
	static int32_t x280 = -1;
	int32_t t61 = -7539034;

	t61 = (x277-((x278%x279)<=x280));

	if (t61 != 55) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x281 = 2732297787130515LLU;
	volatile int32_t x282 = -9263157;
	static volatile uint32_t x283 = 459U;
	static int64_t x284 = -132019816419212LL;

	t62 = (x281-((x282%x283)<=x284));

	if (t62 != 2732297787130515LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x285 = 1;
	int64_t x286 = INT64_MIN;
	static int8_t x287 = -1;
	static int32_t x288 = INT32_MIN;
	int32_t t63 = 6;

	t63 = (x285-((x286%x287)<=x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x289 = 380271U;
	static int8_t x290 = 1;
	int16_t x291 = 1;
	static int32_t x292 = INT32_MIN;
	uint32_t t64 = 245U;

	t64 = (x289-((x290%x291)<=x292));

	if (t64 != 380271U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = -1661950;
	int16_t x294 = INT16_MIN;
	int32_t x295 = -17727;
	static volatile uint64_t x296 = 2605185287LLU;

	t65 = (x293-((x294%x295)<=x296));

	if (t65 != -1661950) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x298 = INT8_MIN;
	uint16_t x299 = UINT16_MAX;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t66 = -26141147;

	t66 = (x297-((x298%x299)<=x300));

	if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = 1;
	uint16_t x302 = 401U;
	static volatile uint64_t x303 = UINT64_MAX;
	volatile int8_t x304 = INT8_MAX;

	t67 = (x301-((x302%x303)<=x304));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x305 = INT8_MIN;
	int16_t x306 = 47;
	static volatile uint64_t x307 = 65LLU;
	int32_t t68 = 392103;

	t68 = (x305-((x306%x307)<=x308));

	if (t68 != -129) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x309 = INT16_MAX;
	static uint8_t x311 = 69U;
	static uint32_t x312 = UINT32_MAX;
	int32_t t69 = 52667019;

	t69 = (x309-((x310%x311)<=x312));

	if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = -1;
	int8_t x315 = -1;
	int8_t x316 = -1;

	t70 = (x313-((x314%x315)<=x316));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x317 = UINT64_MAX;
	static volatile uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = INT16_MIN;
	int8_t x320 = -5;
	static uint64_t t71 = UINT64_MAX;

	t71 = (x317-((x318%x319)<=x320));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = 10605;
	uint64_t x322 = 2453577517LLU;
	static int8_t x323 = INT8_MAX;
	int16_t x324 = -1;
	volatile int32_t t72 = 17808283;

	t72 = (x321-((x322%x323)<=x324));

	if (t72 != 10604) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x330 = 1;
	int64_t x331 = INT64_MAX;
	volatile int64_t x332 = INT64_MAX;
	int32_t t73 = -23919;

	t73 = (x329-((x330%x331)<=x332));

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x334 = 1U;
	volatile uint8_t x335 = 1U;
	int32_t x336 = INT32_MIN;
	static int32_t t74 = 524840200;

	t74 = (x333-((x334%x335)<=x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = -44020LL;
	static int8_t x338 = -1;
	int32_t x339 = INT32_MIN;
	int64_t t75 = -159235606784LL;

	t75 = (x337-((x338%x339)<=x340));

	if (t75 != -44021LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x341 = 12U;
	int32_t x342 = -1;
	uint64_t x343 = 43028189894552LLU;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t76 = 61761219;

	t76 = (x341-((x342%x343)<=x344));

	if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = -1;
	int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;
	int64_t t77 = INT64_MAX;

	t77 = (x345-((x346%x347)<=x348));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;
	volatile uint64_t x352 = UINT64_MAX;
	volatile uint64_t t78 = 217805146796018448LLU;

	t78 = (x349-((x350%x351)<=x352));

	if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x354 = -1;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MAX;
	volatile uint32_t t79 = 93U;

	t79 = (x353-((x354%x355)<=x356));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t t80 = -533441;

	t80 = (x357-((x358%x359)<=x360));

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x361 = UINT32_MAX;
	uint32_t x362 = 37709U;
	int32_t x363 = 1613562;
	static int64_t x364 = -2610215571295085LL;
	uint32_t t81 = UINT32_MAX;

	t81 = (x361-((x362%x363)<=x364));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x365 = 1U;
	int32_t x367 = INT32_MIN;
	static int8_t x368 = 55;

	t82 = (x365-((x366%x367)<=x368));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = 300530U;
	int16_t x371 = INT16_MIN;
	static int32_t x372 = 1;

	t83 = (x369-((x370%x371)<=x372));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x373 = INT16_MAX;
	static uint16_t x374 = UINT16_MAX;
	static int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	volatile int32_t t84 = -112630035;

	t84 = (x373-((x374%x375)<=x376));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = -505;
	int32_t x378 = -15;
	int16_t x379 = -1;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t85 = -3;

	t85 = (x377-((x378%x379)<=x380));

	if (t85 != -506) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x381 = INT32_MIN;
	int64_t x382 = -1LL;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x381-((x382%x383)<=x384));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x385 = UINT64_MAX;
	int32_t x386 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	uint64_t t87 = 176824573LLU;

	t87 = (x385-((x386%x387)<=x388));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x389 = -1;
	int16_t x390 = 1848;
	volatile int16_t x391 = -6838;
	int16_t x392 = -5;
	int32_t t88 = 2757;

	t88 = (x389-((x390%x391)<=x392));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x398 = -1;
	static int32_t x399 = -62043480;
	uint8_t x400 = UINT8_MAX;
	int32_t t89 = 0;

	t89 = (x397-((x398%x399)<=x400));

	if (t89 != 13537399) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x405 = INT16_MIN;
	static uint64_t x408 = 346304LLU;
	int32_t t90 = 538401;

	t90 = (x405-((x406%x407)<=x408));

	if (t90 != -32769) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = 19U;
	int64_t x411 = INT64_MAX;
	volatile int16_t x412 = INT16_MIN;

	t91 = (x409-((x410%x411)<=x412));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = INT16_MIN;
	static uint32_t x414 = 180047U;
	uint16_t x415 = 1U;
	static volatile int64_t x416 = INT64_MAX;
	static int32_t t92 = 1;

	t92 = (x413-((x414%x415)<=x416));

	if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x418 = 917916U;
	static volatile int16_t x419 = -6;
	int8_t x420 = -1;
	volatile int32_t t93 = 191586;

	t93 = (x417-((x418%x419)<=x420));

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x421 = 9U;
	volatile uint8_t x422 = 1U;
	static uint32_t x423 = UINT32_MAX;
	static int16_t x424 = -1;
	static int32_t t94 = 1424;

	t94 = (x421-((x422%x423)<=x424));

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x425 = 25U;
	int16_t x426 = INT16_MIN;
	volatile int16_t x427 = -58;
	int8_t x428 = -2;

	t95 = (x425-((x426%x427)<=x428));

	if (t95 != 24) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x430 = 99U;
	uint32_t x432 = 5U;
	volatile int32_t t96 = 88;

	t96 = (x429-((x430%x431)<=x432));

	if (t96 != -32769) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x433 = -24566780;
	int64_t x434 = INT64_MAX;
	uint32_t x435 = 397758508U;
	int64_t x436 = INT64_MAX;

	t97 = (x433-((x434%x435)<=x436));

	if (t97 != -24566781) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x443 = 3U;
	static uint64_t x444 = UINT64_MAX;
	int32_t t98 = -4519951;

	t98 = (x441-((x442%x443)<=x444));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x445 = -1;
	int32_t x446 = 579;
	static int8_t x447 = 3;
	static int64_t x448 = 805064214233146906LL;
	int32_t t99 = -21150;

	t99 = (x445-((x446%x447)<=x448));

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

