#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x15 = 2374U;
uint32_t x18 = 643U;
int16_t x22 = -11867;
static volatile int64_t t5 = -1564402286149326LL;
volatile uint16_t x25 = 1791U;
volatile int8_t x36 = -1;
volatile int32_t t9 = 1;
static volatile int32_t t10 = 65360;
int64_t x46 = INT64_MAX;
volatile int32_t t11 = -39;
uint16_t x50 = 17U;
uint64_t x57 = 3257LLU;
static int64_t x64 = INT64_MAX;
static uint32_t x65 = 30U;
int64_t x82 = -21940078775461085LL;
int32_t x84 = -176328;
static int64_t x87 = INT64_MAX;
static volatile int64_t t21 = -701LL;
static uint64_t x96 = UINT64_MAX;
int64_t x97 = -1LL;
uint32_t x99 = UINT32_MAX;
int64_t t24 = -475758569LL;
static int16_t x103 = -1;
uint32_t t26 = UINT32_MAX;
int16_t x109 = -210;
volatile uint16_t x116 = 0U;
int8_t x122 = INT8_MIN;
int16_t x134 = INT16_MIN;
volatile int32_t t33 = -16105;
int16_t x139 = 0;
int16_t x143 = 1;
static volatile int64_t x144 = INT64_MIN;
volatile int32_t t35 = 56;
volatile int64_t t37 = 57207084579289LL;
int32_t t40 = 0;
static volatile uint64_t t41 = 23LLU;
static int8_t x174 = INT8_MAX;
int32_t x176 = INT32_MIN;
int16_t x179 = INT16_MAX;
int64_t x198 = -593671232488LL;
int8_t x202 = INT8_MIN;
static int8_t x204 = 6;
int32_t t50 = -15;
int32_t x207 = -823;
uint8_t x208 = UINT8_MAX;
uint8_t x216 = 1U;
uint64_t x227 = 1LLU;
static uint16_t x228 = 725U;
static uint8_t x231 = 19U;
static int8_t x241 = INT8_MIN;
static volatile uint16_t x243 = 15433U;
int64_t x245 = -1LL;
int64_t x246 = INT64_MIN;
volatile int64_t x253 = 109616LL;
uint16_t x258 = 1U;
volatile uint32_t t65 = 80U;
volatile int64_t x268 = -1LL;
static int16_t x275 = -658;
uint64_t t68 = 30701732LLU;
int32_t x280 = -221786;
int64_t t69 = INT64_MIN;
uint32_t x291 = 1169U;
volatile int16_t x293 = -1;
int8_t x294 = -1;
int32_t t73 = -774998331;
int32_t x305 = 31457;
int64_t x309 = INT64_MAX;
int64_t x311 = -1LL;
volatile int8_t x313 = -1;
int64_t x314 = 88367LL;
int8_t x317 = INT8_MAX;
volatile int32_t t79 = 0;
int64_t x322 = -48LL;
static int64_t t80 = -1046276033463049315LL;
int32_t t81 = -20302677;
static uint16_t x329 = 0U;
volatile int64_t t84 = INT64_MIN;
uint32_t x344 = UINT32_MAX;
volatile int32_t x348 = INT32_MIN;
int64_t x352 = -1267839202046LL;
int32_t t87 = 41;
static uint8_t x362 = UINT8_MAX;
int32_t t91 = 15;
int8_t x371 = INT8_MAX;
int8_t x374 = -1;
uint8_t x380 = 0U;
int32_t t94 = -2531287;
uint8_t x397 = UINT8_MAX;


void f0(void) {
	uint32_t x1 = 101417U;
	int64_t x2 = -1LL;
	int8_t x3 = 23;
	int32_t x4 = -933;
	static volatile uint32_t t0 = 0U;

	t0 = (x1|((x2^x3)==x4));

	if (t0 != 101417U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 1;

	t1 = (x5|((x6^x7)==x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	static int64_t x10 = -1LL;
	volatile int32_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = INT32_MIN;

	t2 = (x9|((x10^x11)==x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	uint8_t x14 = 0U;
	uint64_t x16 = 481136719065239534LLU;
	volatile int32_t t3 = -346999787;

	t3 = (x13|((x14^x15)==x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MAX;
	int64_t x19 = INT64_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x17|((x18^x19)==x20));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 150LL;
	uint64_t x23 = 65640502403LLU;
	static int16_t x24 = -1;

	t5 = (x21|((x22^x23)==x24));

	if (t5 != 150LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x26 = INT32_MIN;
	static int32_t x27 = INT32_MIN;
	uint64_t x28 = UINT64_MAX;
	int32_t t6 = 12545248;

	t6 = (x25|((x26^x27)==x28));

	if (t6 != 1791) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MIN;
	static int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MAX;
	int32_t t7 = -31;

	t7 = (x29|((x30^x31)==x32));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 3U;
	int8_t x34 = INT8_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	int32_t t8 = 26527590;

	t8 = (x33|((x34^x35)==x36));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -31;
	int8_t x38 = -1;
	volatile int8_t x39 = INT8_MIN;
	static volatile int32_t x40 = 0;

	t9 = (x37|((x38^x39)==x40));

	if (t9 != -31) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	uint16_t x42 = 39U;
	int8_t x43 = INT8_MIN;
	int8_t x44 = -11;

	t10 = (x41|((x42^x43)==x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = -1;
	uint16_t x47 = 315U;
	uint32_t x48 = 0U;

	t11 = (x45|((x46^x47)==x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 27604936317LL;
	int16_t x51 = -1;
	int16_t x52 = 1;
	volatile int64_t t12 = 30201LL;

	t12 = (x49|((x50^x51)==x52));

	if (t12 != 27604936317LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3U;
	volatile int32_t x54 = -1;
	uint64_t x55 = UINT64_MAX;
	static int64_t x56 = -1LL;
	volatile int32_t t13 = -217;

	t13 = (x53|((x54^x55)==x56));

	if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	static int32_t x59 = 207851;
	int64_t x60 = -1061293604736LL;
	uint64_t t14 = 209LLU;

	t14 = (x57|((x58^x59)==x60));

	if (t14 != 3257LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -1;
	uint8_t x62 = UINT8_MAX;
	uint32_t x63 = 2696925U;
	int32_t t15 = -392618;

	t15 = (x61|((x62^x63)==x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 101LL;
	int32_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 13800U;

	t16 = (x65|((x66^x67)==x68));

	if (t16 != 30U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static volatile int8_t x70 = INT8_MAX;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = (x69|((x70^x71)==x72));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 236008U;
	static int8_t x74 = INT8_MIN;
	int64_t x75 = 677LL;
	uint32_t x76 = 878930788U;
	uint32_t t18 = 1375906U;

	t18 = (x73|((x74^x75)==x76));

	if (t18 != 236008U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int8_t x78 = 57;
	static int32_t x79 = INT32_MAX;
	int32_t x80 = INT32_MAX;
	uint32_t t19 = UINT32_MAX;

	t19 = (x77|((x78^x79)==x80));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	static uint8_t x83 = 1U;
	volatile int32_t t20 = 17;

	t20 = (x81|((x82^x83)==x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -231589880706346LL;
	volatile int32_t x86 = INT32_MIN;
	int8_t x88 = INT8_MIN;

	t21 = (x85|((x86^x87)==x88));

	if (t21 != -231589880706346LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	uint32_t x90 = 102U;
	static uint32_t x91 = 32575U;
	int64_t x92 = INT64_MAX;
	static volatile int64_t t22 = INT64_MIN;

	t22 = (x89|((x90^x91)==x92));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 13U;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x93|((x94^x95)==x96));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	uint64_t x100 = UINT64_MAX;

	t24 = (x97|((x98^x99)==x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	volatile int8_t x102 = 1;
	uint32_t x104 = UINT32_MAX;
	int32_t t25 = 40321;

	t25 = (x101|((x102^x103)==x104));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	static uint32_t x106 = UINT32_MAX;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;

	t26 = (x105|((x106^x107)==x108));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = 30;
	static uint16_t x111 = UINT16_MAX;
	volatile int16_t x112 = -1;
	volatile int32_t t27 = 1;

	t27 = (x109|((x110^x111)==x112));

	if (t27 != -210) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	int64_t x114 = INT64_MAX;
	int16_t x115 = -1;
	int32_t t28 = 841164;

	t28 = (x113|((x114^x115)==x116));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	uint16_t x118 = 735U;
	static int16_t x119 = INT16_MAX;
	static int8_t x120 = 0;
	int32_t t29 = -1;

	t29 = (x117|((x118^x119)==x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int16_t x123 = INT16_MIN;
	volatile uint16_t x124 = 9U;
	volatile int32_t t30 = 136;

	t30 = (x121|((x122^x123)==x124));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = UINT16_MAX;
	uint64_t x127 = 3573LLU;
	uint8_t x128 = 7U;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x125|((x126^x127)==x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	uint8_t x130 = 99U;
	uint64_t x131 = 675541692408928412LLU;
	volatile uint32_t x132 = UINT32_MAX;
	volatile int32_t t32 = 57782943;

	t32 = (x129|((x130^x131)==x132));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int64_t x135 = INT64_MIN;
	int8_t x136 = -5;

	t33 = (x133|((x134^x135)==x136));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 4089600043842201337LL;
	int16_t x138 = INT16_MIN;
	uint16_t x140 = 26092U;
	static int64_t t34 = 23LL;

	t34 = (x137|((x138^x139)==x140));

	if (t34 != 4089600043842201337LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -4;
	int64_t x142 = INT64_MIN;

	t35 = (x141|((x142^x143)==x144));

	if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	static int32_t x146 = INT32_MIN;
	int8_t x147 = -1;
	volatile int64_t x148 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

	t36 = (x145|((x146^x147)==x148));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 42630LL;
	int64_t x150 = INT64_MAX;
	int32_t x151 = INT32_MIN;
	static int16_t x152 = INT16_MAX;

	t37 = (x149|((x150^x151)==x152));

	if (t37 != 42630LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 24450751336152836LLU;
	uint32_t x154 = 21966514U;
	volatile int16_t x155 = -2;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = 352645519548903LLU;

	t38 = (x153|((x154^x155)==x156));

	if (t38 != 24450751336152836LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	static int64_t x158 = -2008205986963518LL;
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 36U;
	uint32_t t39 = UINT32_MAX;

	t39 = (x157|((x158^x159)==x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	uint64_t x163 = 2LLU;
	uint32_t x164 = UINT32_MAX;

	t40 = (x161|((x162^x163)==x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 53473512311LLU;
	int8_t x166 = -1;
	volatile int16_t x167 = INT16_MAX;
	int8_t x168 = -1;

	t41 = (x165|((x166^x167)==x168));

	if (t41 != 53473512311LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	int8_t x170 = -14;
	int64_t x171 = INT64_MAX;
	static uint64_t x172 = 5078710606LLU;
	volatile int32_t t42 = 8725278;

	t42 = (x169|((x170^x171)==x172));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static uint8_t x175 = UINT8_MAX;
	volatile int64_t t43 = INT64_MIN;

	t43 = (x173|((x174^x175)==x176));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	int64_t x180 = -41072LL;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x177|((x178^x179)==x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 198U;
	int8_t x182 = INT8_MAX;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 101094;

	t45 = (x181|((x182^x183)==x184));

	if (t45 != 198) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	uint32_t x186 = 401394961U;
	int16_t x187 = INT16_MIN;
	static volatile uint32_t x188 = 296570790U;
	volatile int32_t t46 = -71;

	t46 = (x185|((x186^x187)==x188));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = 1280415517760616971LL;
	int64_t x191 = -1LL;
	int64_t x192 = -101908507LL;
	volatile int32_t t47 = -765975624;

	t47 = (x189|((x190^x191)==x192));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 34U;
	uint8_t x194 = 1U;
	uint32_t x195 = 2885701U;
	int64_t x196 = INT64_MIN;
	static int32_t t48 = 1792063;

	t48 = (x193|((x194^x195)==x196));

	if (t48 != 34) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	int8_t x199 = -6;
	int64_t x200 = INT64_MIN;
	int32_t t49 = -395331114;

	t49 = (x197|((x198^x199)==x200));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int32_t x203 = 6847;

	t50 = (x201|((x202^x203)==x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 1U;
	int8_t x206 = 1;
	int32_t t51 = -3010;

	t51 = (x205|((x206^x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = INT64_MIN;
	static uint16_t x210 = 57U;
	static int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = (x209|((x210^x211)==x212));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 71512676LLU;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	static uint64_t t53 = 550686LLU;

	t53 = (x213|((x214^x215)==x216));

	if (t53 != 71512676LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int8_t x218 = -1;
	uint32_t x219 = UINT32_MAX;
	volatile uint64_t x220 = 26475097344LLU;
	static volatile int64_t t54 = INT64_MAX;

	t54 = (x217|((x218^x219)==x220));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x221 = UINT32_MAX;
	static int64_t x222 = 108710806LL;
	uint16_t x223 = 0U;
	uint8_t x224 = 7U;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x221|((x222^x223)==x224));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 652948357571437223LLU;
	int32_t x226 = INT32_MIN;
	volatile uint64_t t56 = 2LLU;

	t56 = (x225|((x226^x227)==x228));

	if (t56 != 652948357571437223LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	int32_t x230 = INT32_MIN;
	int32_t x232 = -1;
	volatile int32_t t57 = -8;

	t57 = (x229|((x230^x231)==x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = 0U;
	volatile int64_t x234 = INT64_MAX;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	volatile int32_t t58 = -2094681;

	t58 = (x233|((x234^x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	int8_t x238 = 0;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;
	static int32_t t59 = -125;

	t59 = (x237|((x238^x239)==x240));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x244 = -36738646993069LL;
	static int32_t t60 = 24;

	t60 = (x241|((x242^x243)==x244));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x247 = 2335509022LL;
	int8_t x248 = -54;
	volatile int64_t t61 = -61856638LL;

	t61 = (x245|((x246^x247)==x248));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 1;
	int32_t x250 = INT32_MIN;
	static int64_t x251 = -1LL;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 0;

	t62 = (x249|((x250^x251)==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = -1;
	int16_t x255 = INT16_MIN;
	static uint16_t x256 = UINT16_MAX;
	volatile int64_t t63 = -774863418686239LL;

	t63 = (x253|((x254^x255)==x256));

	if (t63 != 109616LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = -1;
	static uint8_t x259 = 1U;
	volatile uint64_t x260 = 3LLU;
	int32_t t64 = 436820;

	t64 = (x257|((x258^x259)==x260));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = 567U;
	uint8_t x262 = 88U;
	int64_t x263 = INT64_MIN;
	volatile int32_t x264 = INT32_MAX;

	t65 = (x261|((x262^x263)==x264));

	if (t65 != 567U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 4013034094767LLU;
	int64_t x266 = -315092902285196011LL;
	static uint8_t x267 = 0U;
	static uint64_t t66 = 174628302651030848LLU;

	t66 = (x265|((x266^x267)==x268));

	if (t66 != 4013034094767LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	uint32_t x270 = 542376U;
	int64_t x271 = INT64_MAX;
	int64_t x272 = INT64_MAX;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x269|((x270^x271)==x272));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 58123975356750168LLU;
	uint16_t x274 = 340U;
	static uint32_t x276 = UINT32_MAX;

	t68 = (x273|((x274^x275)==x276));

	if (t68 != 58123975356750168LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = INT64_MIN;
	static int16_t x278 = -1;
	static int16_t x279 = INT16_MIN;

	t69 = (x277|((x278^x279)==x280));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x281 = INT32_MAX;
	int64_t x282 = INT64_MAX;
	static int32_t x283 = INT32_MIN;
	volatile uint64_t x284 = 152LLU;
	volatile int32_t t70 = INT32_MAX;

	t70 = (x281|((x282^x283)==x284));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = 735198911481LLU;
	static int8_t x286 = 2;
	static int32_t x287 = INT32_MIN;
	volatile int8_t x288 = -1;
	static uint64_t t71 = 5656564331806359120LLU;

	t71 = (x285|((x286^x287)==x288));

	if (t71 != 735198911481LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 13U;
	volatile int64_t x290 = -792911835832LL;
	int32_t x292 = INT32_MIN;
	int32_t t72 = 8863;

	t72 = (x289|((x290^x291)==x292));

	if (t72 != 13) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x295 = 780552;
	int64_t x296 = -1LL;

	t73 = (x293|((x294^x295)==x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MIN;
	uint16_t x298 = 2496U;
	int64_t x299 = -15623LL;
	int32_t x300 = INT32_MIN;
	static int64_t t74 = INT64_MIN;

	t74 = (x297|((x298^x299)==x300));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MAX;
	static int8_t x302 = INT8_MIN;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = 21;
	static volatile int32_t t75 = -10745;

	t75 = (x301|((x302^x303)==x304));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x306 = 10185895LLU;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MAX;
	int32_t t76 = -782;

	t76 = (x305|((x306^x307)==x308));

	if (t76 != 31457) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = 31609;
	volatile int16_t x312 = INT16_MIN;
	volatile int64_t t77 = INT64_MAX;

	t77 = (x309|((x310^x311)==x312));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x315 = UINT16_MAX;
	volatile uint16_t x316 = 23290U;
	volatile int32_t t78 = 5327;

	t78 = (x313|((x314^x315)==x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x318 = 38U;
	int32_t x319 = -25563;
	int32_t x320 = 1;

	t79 = (x317|((x318^x319)==x320));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -1LL;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = 6258239LL;

	t80 = (x321|((x322^x323)==x324));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 11;
	int16_t x326 = INT16_MAX;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MAX;

	t81 = (x325|((x326^x327)==x328));

	if (t81 != 11) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = INT64_MAX;
	volatile int32_t t82 = -159460411;

	t82 = (x329|((x330^x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 58;
	volatile int16_t x334 = INT16_MIN;
	static uint64_t x335 = UINT64_MAX;
	uint64_t x336 = 2527499358LLU;
	static volatile int32_t t83 = -895908;

	t83 = (x333|((x334^x335)==x336));

	if (t83 != 58) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	volatile int8_t x338 = INT8_MIN;
	int64_t x339 = 808183351696LL;
	volatile uint8_t x340 = 0U;

	t84 = (x337|((x338^x339)==x340));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 7021153U;
	int16_t x342 = -1986;
	int8_t x343 = INT8_MIN;
	volatile uint32_t t85 = 2U;

	t85 = (x341|((x342^x343)==x344));

	if (t85 != 7021153U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 1;
	static int8_t x346 = 31;
	volatile int16_t x347 = 4;
	volatile int32_t t86 = -360602;

	t86 = (x345|((x346^x347)==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 0;
	volatile uint16_t x350 = UINT16_MAX;
	static volatile uint32_t x351 = 6U;

	t87 = (x349|((x350^x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = INT32_MIN;
	int8_t x354 = -1;
	int8_t x355 = -1;
	static volatile int32_t x356 = INT32_MAX;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x353|((x354^x355)==x356));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = 0;
	int8_t x358 = 15;
	volatile int32_t x359 = INT32_MIN;
	uint8_t x360 = 1U;
	volatile int32_t t89 = -3;

	t89 = (x357|((x358^x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 85U;
	int64_t x363 = -1920LL;
	uint8_t x364 = 1U;
	int32_t t90 = -1;

	t90 = (x361|((x362^x363)==x364));

	if (t90 != 85) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint8_t x366 = 0U;
	static int64_t x367 = -11LL;
	int32_t x368 = INT32_MIN;

	t91 = (x365|((x366^x367)==x368));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	uint8_t x370 = 1U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t92 = -4461;

	t92 = (x369|((x370^x371)==x372));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 142794LL;
	static uint16_t x375 = UINT16_MAX;
	uint8_t x376 = UINT8_MAX;
	int64_t t93 = 192370282089823343LL;

	t93 = (x373|((x374^x375)==x376));

	if (t93 != 142794LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = 0;
	uint64_t x378 = UINT64_MAX;
	int16_t x379 = INT16_MIN;

	t94 = (x377|((x378^x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int64_t x382 = -1LL;
	int16_t x383 = -1;
	int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -1;

	t95 = (x381|((x382^x383)==x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	int8_t x387 = -50;
	volatile int64_t x388 = 17185739479925665LL;
	static volatile int32_t t96 = 1;

	t96 = (x385|((x386^x387)==x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	uint32_t x390 = 18U;
	static int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MAX;
	volatile int32_t t97 = 939104550;

	t97 = (x389|((x390^x391)==x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x394 = UINT16_MAX;
	static volatile int64_t x395 = -1LL;
	volatile int16_t x396 = -1;
	int32_t t98 = INT32_MIN;

	t98 = (x393|((x394^x395)==x396));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = 4163339722773LLU;
	uint16_t x399 = UINT16_MAX;
	static uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = -3;

	t99 = (x397|((x398^x399)==x400));

	if (t99 != 255) { NG(); } else { ; }
	
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

