#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
int8_t x14 = 8;
int16_t x16 = INT16_MAX;
int32_t t5 = -11;
uint64_t x31 = 2775302454LLU;
volatile int32_t t7 = -5074086;
volatile int8_t x47 = INT8_MIN;
int64_t x48 = INT64_MIN;
static volatile int8_t x55 = 1;
static uint32_t t13 = 2243266U;
volatile int8_t x61 = 1;
static uint32_t x64 = 41546U;
int32_t t14 = -1024;
volatile uint16_t x70 = UINT16_MAX;
static uint32_t x72 = 54669867U;
uint16_t x74 = 270U;
int8_t x76 = INT8_MAX;
volatile int8_t x77 = -3;
int16_t x81 = INT16_MAX;
static int16_t x85 = -12854;
static uint64_t x89 = UINT64_MAX;
int16_t x93 = INT16_MAX;
int8_t x104 = 3;
int64_t x111 = INT64_MAX;
int32_t t26 = 453767635;
int32_t x116 = INT32_MAX;
uint8_t x118 = 12U;
int16_t x120 = INT16_MIN;
int8_t x126 = INT8_MIN;
int8_t x132 = 0;
uint16_t x133 = 204U;
static int16_t x136 = INT16_MAX;
static int32_t x145 = -107;
int32_t x148 = 1621;
int8_t x152 = -1;
int8_t x158 = -22;
static volatile uint32_t x172 = UINT32_MAX;
static volatile int32_t t39 = 12629753;
uint32_t x181 = UINT32_MAX;
uint64_t x191 = 40880819994LLU;
static int32_t x193 = INT32_MAX;
int8_t x198 = INT8_MIN;
int32_t t46 = 412;
static volatile int8_t x212 = -1;
int8_t x216 = INT8_MIN;
int8_t x217 = -3;
volatile int32_t t51 = 17;
uint32_t x222 = UINT32_MAX;
volatile uint64_t x224 = 170440906650LLU;
uint8_t x240 = UINT8_MAX;
int16_t x246 = -1;
int32_t x249 = -5385121;
int16_t x250 = 0;
int64_t x255 = INT64_MIN;
int8_t x260 = 0;
uint8_t x262 = 1U;
int32_t t62 = 1;
volatile int32_t t64 = -1;
static volatile uint64_t t66 = 43329694LLU;
volatile int32_t t67 = 0;
int32_t x296 = INT32_MIN;
uint64_t t69 = 3556632624851222LLU;
int16_t x302 = INT16_MIN;
int64_t x319 = INT64_MAX;
uint32_t t73 = 721443039U;
uint16_t x337 = 2U;
int64_t x338 = INT64_MIN;
int8_t x341 = -1;
uint8_t x343 = 67U;
volatile int16_t x344 = INT16_MIN;
volatile int16_t x352 = -1;
uint32_t x358 = 241167422U;
volatile int16_t x362 = -1;
uint8_t x364 = 3U;
int64_t x368 = INT64_MIN;
int64_t x370 = 17LL;
static int32_t t85 = -3245;
int8_t x386 = INT8_MIN;
int8_t x390 = 12;
volatile int8_t x393 = -18;
int16_t x396 = INT16_MAX;
int8_t x397 = INT8_MIN;
static int16_t x398 = -14;
uint64_t x402 = UINT64_MAX;
uint64_t x404 = UINT64_MAX;
int32_t x407 = INT32_MIN;
int32_t x419 = -1;
volatile int8_t x425 = INT8_MIN;
int8_t x427 = INT8_MAX;
volatile int32_t t99 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int64_t x2 = INT64_MIN;
	int8_t x3 = 1;
	int64_t x4 = -38LL;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1-((x2%x3)<x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	volatile int64_t x7 = 56LL;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x5-((x6%x7)<x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = UINT64_MAX;
	static int16_t x15 = 163;
	volatile uint64_t t2 = 9LLU;

	t2 = (x13-((x14%x15)<x16));

	if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	volatile uint8_t x18 = UINT8_MAX;
	int32_t x19 = -1;
	uint64_t x20 = 4153LLU;
	int32_t t3 = -95235;

	t3 = (x17-((x18%x19)<x20));

	if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MAX;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = -1LL;
	int32_t t4 = INT32_MIN;

	t4 = (x21-((x22%x23)<x24));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	volatile int32_t x26 = 58370203;
	uint8_t x27 = UINT8_MAX;
	static uint16_t x28 = UINT16_MAX;

	t5 = (x25-((x26%x27)<x28));

	if (t5 != 254) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 34U;
	uint16_t x30 = 9440U;
	volatile int32_t x32 = -1;
	static int32_t t6 = 28;

	t6 = (x29-((x30%x31)<x32));

	if (t6 != 33) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = INT16_MIN;
	static volatile uint8_t x35 = UINT8_MAX;
	volatile int8_t x36 = -9;

	t7 = (x33-((x34%x35)<x36));

	if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = 13;
	static volatile int32_t t8 = 242884;

	t8 = (x37-((x38%x39)<x40));

	if (t8 != -129) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = UINT8_MAX;
	static uint8_t x42 = 5U;
	static volatile uint16_t x43 = 69U;
	volatile uint32_t x44 = 2U;
	volatile int32_t t9 = -1;

	t9 = (x41-((x42%x43)<x44));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = 2935U;
	static volatile int32_t t10 = -2543568;

	t10 = (x45-((x46%x47)<x48));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x49 = 5234U;
	uint32_t x50 = UINT32_MAX;
	uint32_t x51 = 3U;
	int16_t x52 = 1;
	static int32_t t11 = -3850;

	t11 = (x49-((x50%x51)<x52));

	if (t11 != 5233) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = 7719U;
	uint8_t x54 = UINT8_MAX;
	int8_t x56 = -1;
	uint32_t t12 = 20763U;

	t12 = (x53-((x54%x55)<x56));

	if (t12 != 7719U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 3047767U;
	int32_t x58 = 4095460;
	static int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MAX;

	t13 = (x57-((x58%x59)<x60));

	if (t13 != 3047766U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = INT64_MIN;
	volatile uint64_t x63 = 608195LLU;

	t14 = (x61-((x62%x63)<x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = -51;
	volatile uint32_t x66 = UINT32_MAX;
	static int8_t x67 = INT8_MIN;
	int16_t x68 = 55;
	static volatile int32_t t15 = -5159658;

	t15 = (x65-((x66%x67)<x68));

	if (t15 != -51) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int8_t x71 = 49;
	static int32_t t16 = 397383559;

	t16 = (x69-((x70%x71)<x72));

	if (t16 != -129) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	static volatile uint32_t x75 = UINT32_MAX;
	int32_t t17 = -3599379;

	t17 = (x73-((x74%x75)<x76));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MIN;
	int64_t x79 = -44118905LL;
	int64_t x80 = -271120415375464638LL;
	int32_t t18 = -177023309;

	t18 = (x77-((x78%x79)<x80));

	if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	volatile int8_t x84 = INT8_MIN;
	int32_t t19 = 3;

	t19 = (x81-((x82%x83)<x84));

	if (t19 != 32766) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = INT32_MIN;
	int32_t x87 = -84;
	int8_t x88 = INT8_MIN;
	int32_t t20 = 101027;

	t20 = (x85-((x86%x87)<x88));

	if (t20 != -12854) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x90 = -30;
	uint8_t x91 = UINT8_MAX;
	volatile uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 19969908402200085LLU;

	t21 = (x89-((x90%x91)<x92));

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x94 = INT64_MIN;
	uint16_t x95 = 286U;
	volatile int16_t x96 = 4;
	int32_t t22 = 383565;

	t22 = (x93-((x94%x95)<x96));

	if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 6U;
	int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -3844149578385LL;
	volatile int32_t t23 = 350500549;

	t23 = (x97-((x98%x99)<x100));

	if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = -1;
	static uint32_t x103 = 31196U;
	int64_t t24 = INT64_MIN;

	t24 = (x101-((x102%x103)<x104));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = UINT32_MAX;
	volatile uint8_t x106 = UINT8_MAX;
	static int8_t x107 = -1;
	int16_t x108 = INT16_MIN;
	uint32_t t25 = UINT32_MAX;

	t25 = (x105-((x106%x107)<x108));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = UINT8_MAX;
	volatile int8_t x110 = -31;
	static volatile int16_t x112 = -602;

	t26 = (x109-((x110%x111)<x112));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = 248143526LLU;
	int8_t x114 = INT8_MIN;
	int32_t x115 = INT32_MIN;
	volatile uint64_t t27 = 98790051041318836LLU;

	t27 = (x113-((x114%x115)<x116));

	if (t27 != 248143525LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = -959679018LL;
	volatile int16_t x119 = 8;
	int64_t t28 = 202935676LL;

	t28 = (x117-((x118%x119)<x120));

	if (t28 != -959679018LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = INT64_MIN;
	volatile int8_t x122 = INT8_MIN;
	volatile uint32_t x123 = UINT32_MAX;
	int64_t x124 = -1LL;
	volatile int64_t t29 = INT64_MIN;

	t29 = (x121-((x122%x123)<x124));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x125 = 7590U;
	uint32_t x127 = UINT32_MAX;
	volatile uint32_t x128 = 46U;
	int32_t t30 = -222045228;

	t30 = (x125-((x126%x127)<x128));

	if (t30 != 7590) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = -1;
	volatile uint16_t x130 = 6U;
	int32_t x131 = -244;
	int32_t t31 = -379916460;

	t31 = (x129-((x130%x131)<x132));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MAX;
	static uint64_t x135 = 3547888952791120553LLU;
	static int32_t t32 = -9;

	t32 = (x133-((x134%x135)<x136));

	if (t32 != 204) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 7349120U;
	int16_t x143 = INT16_MIN;
	volatile int16_t x144 = 0;
	volatile int32_t t33 = 36084298;

	t33 = (x141-((x142%x143)<x144));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = -1LL;
	int64_t x147 = -975254LL;
	static int32_t t34 = -8996;

	t34 = (x145-((x146%x147)<x148));

	if (t34 != -108) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = -2605;
	static int64_t x150 = INT64_MAX;
	int16_t x151 = INT16_MIN;
	int32_t t35 = 24220;

	t35 = (x149-((x150%x151)<x152));

	if (t35 != -2605) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x157 = INT32_MAX;
	int16_t x159 = -57;
	int8_t x160 = INT8_MIN;
	int32_t t36 = INT32_MAX;

	t36 = (x157-((x158%x159)<x160));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 24606063604913132LLU;
	uint32_t x162 = 0U;
	int64_t x163 = -1LL;
	uint64_t x164 = UINT64_MAX;
	uint64_t t37 = 13318998LLU;

	t37 = (x161-((x162%x163)<x164));

	if (t37 != 24606063604913131LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 7U;
	volatile int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 1699992624U;
	int32_t t38 = -527550272;

	t38 = (x165-((x166%x167)<x168));

	if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = 0;
	int8_t x170 = -2;
	static volatile int16_t x171 = INT16_MIN;

	t39 = (x169-((x170%x171)<x172));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -136271;
	int64_t x174 = -1LL;
	uint32_t x175 = 1711688351U;
	int16_t x176 = INT16_MAX;
	static int32_t t40 = -554345475;

	t40 = (x173-((x174%x175)<x176));

	if (t40 != -136272) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x177 = 59;
	int64_t x178 = INT64_MAX;
	static int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t41 = 41;

	t41 = (x177-((x178%x179)<x180));

	if (t41 != 59) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x182 = INT32_MIN;
	uint64_t x183 = 453068652LLU;
	static int8_t x184 = 8;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x181-((x182%x183)<x184));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x185 = 2423129LLU;
	static uint8_t x186 = 119U;
	volatile int32_t x187 = INT32_MAX;
	int8_t x188 = -1;
	static uint64_t t43 = 2LLU;

	t43 = (x185-((x186%x187)<x188));

	if (t43 != 2423129LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = UINT32_MAX;
	uint16_t x190 = 41U;
	int16_t x192 = -252;
	volatile uint32_t t44 = 15U;

	t44 = (x189-((x190%x191)<x192));

	if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = INT16_MIN;
	int8_t x195 = 1;
	static int16_t x196 = 254;
	volatile int32_t t45 = -805573;

	t45 = (x193-((x194%x195)<x196));

	if (t45 != 2147483646) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	uint32_t x199 = 312768132U;
	int32_t x200 = 7;

	t46 = (x197-((x198%x199)<x200));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 1U;
	int16_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	static int64_t x204 = INT64_MAX;
	int32_t t47 = -6;

	t47 = (x201-((x202%x203)<x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 113U;
	volatile uint32_t x206 = 4U;
	int16_t x207 = INT16_MIN;
	static uint32_t x208 = 163U;
	int32_t t48 = -13843;

	t48 = (x205-((x206%x207)<x208));

	if (t48 != 112) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MAX;
	int32_t t49 = 46645;

	t49 = (x209-((x210%x211)<x212));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x213 = INT8_MAX;
	uint32_t x214 = UINT32_MAX;
	volatile int8_t x215 = -1;
	int32_t t50 = -774;

	t50 = (x213-((x214%x215)<x216));

	if (t50 != 126) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = -1LL;
	uint8_t x219 = 1U;
	int8_t x220 = INT8_MAX;

	t51 = (x217-((x218%x219)<x220));

	if (t51 != -4) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -317662823LL;
	int32_t x223 = -1;
	int64_t t52 = -175LL;

	t52 = (x221-((x222%x223)<x224));

	if (t52 != -317662824LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	volatile int16_t x226 = -1;
	volatile int16_t x227 = INT16_MIN;
	uint64_t x228 = 447948034768682LLU;
	volatile int32_t t53 = 2527;

	t53 = (x225-((x226%x227)<x228));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 0;
	int32_t x230 = -6694987;
	uint8_t x231 = UINT8_MAX;
	uint8_t x232 = 48U;
	int32_t t54 = 31415986;

	t54 = (x229-((x230%x231)<x232));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MAX;
	static volatile int8_t x234 = -1;
	uint32_t x235 = 7067U;
	static uint32_t x236 = 374923U;
	volatile int32_t t55 = 3585;

	t55 = (x233-((x234%x235)<x236));

	if (t55 != 32766) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 3832203571143820LLU;
	int8_t x238 = -1;
	int16_t x239 = 1;
	volatile uint64_t t56 = 2463LLU;

	t56 = (x237-((x238%x239)<x240));

	if (t56 != 3832203571143819LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = 47;
	uint8_t x242 = 9U;
	uint64_t x243 = 2592977860901772LLU;
	uint32_t x244 = 1U;
	volatile int32_t t57 = 0;

	t57 = (x241-((x242%x243)<x244));

	if (t57 != 47) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x245 = 654353;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = 26U;
	volatile int32_t t58 = -43303;

	t58 = (x245-((x246%x247)<x248));

	if (t58 != 654352) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MAX;
	int32_t t59 = -1;

	t59 = (x249-((x250%x251)<x252));

	if (t59 != -5385122) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = -11783902484LL;
	int8_t x256 = -2;
	volatile uint32_t t60 = 21085U;

	t60 = (x253-((x254%x255)<x256));

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x257 = UINT16_MAX;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = -49;
	volatile int32_t t61 = -391067;

	t61 = (x257-((x258%x259)<x260));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	volatile uint8_t x264 = 1U;

	t62 = (x261-((x262%x263)<x264));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x265 = 4LL;
	uint32_t x266 = UINT32_MAX;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = -1;
	volatile int64_t t63 = 20549421269502630LL;

	t63 = (x265-((x266%x267)<x268));

	if (t63 != 3LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = 0;
	int16_t x270 = -1;
	static volatile uint64_t x271 = 5836337LLU;
	int8_t x272 = -17;

	t64 = (x269-((x270%x271)<x272));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x273 = 28672U;
	uint32_t x274 = 16753719U;
	int16_t x275 = INT16_MIN;
	static int32_t x276 = -17437792;
	static volatile int32_t t65 = -12;

	t65 = (x273-((x274%x275)<x276));

	if (t65 != 28671) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = 2LLU;
	int16_t x282 = INT16_MAX;
	int16_t x283 = INT16_MAX;
	volatile uint16_t x284 = 30U;

	t66 = (x281-((x282%x283)<x284));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MIN;
	static int8_t x290 = INT8_MIN;
	int64_t x291 = 88073LL;
	uint16_t x292 = 3802U;

	t67 = (x289-((x290%x291)<x292));

	if (t67 != -129) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MAX;
	int64_t x295 = INT64_MAX;
	static volatile int32_t t68 = 1;

	t68 = (x293-((x294%x295)<x296));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = 120LLU;
	volatile int8_t x298 = 0;
	volatile int16_t x299 = 13862;
	volatile uint16_t x300 = 1U;

	t69 = (x297-((x298%x299)<x300));

	if (t69 != 119LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x301 = 8160478LL;
	static uint8_t x303 = UINT8_MAX;
	volatile int32_t x304 = INT32_MIN;
	int64_t t70 = 21561312181982LL;

	t70 = (x301-((x302%x303)<x304));

	if (t70 != 8160478LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MIN;
	static uint8_t x306 = 3U;
	static uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t71 = 53870083;

	t71 = (x305-((x306%x307)<x308));

	if (t71 != -129) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = INT32_MAX;
	uint8_t x314 = UINT8_MAX;
	static volatile int16_t x315 = INT16_MAX;
	int64_t x316 = INT64_MIN;
	volatile int32_t t72 = INT32_MAX;

	t72 = (x313-((x314%x315)<x316));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 1964563U;
	int16_t x318 = INT16_MIN;
	int32_t x320 = INT32_MAX;

	t73 = (x317-((x318%x319)<x320));

	if (t73 != 1964562U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x321 = 9911277LLU;
	int16_t x322 = 9;
	int64_t x323 = -1LL;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t74 = 2234LLU;

	t74 = (x321-((x322%x323)<x324));

	if (t74 != 9911277LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = -1;
	uint64_t x326 = 202033LLU;
	int64_t x327 = 62414LL;
	int32_t x328 = 873533;
	static int32_t t75 = 472;

	t75 = (x325-((x326%x327)<x328));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x329 = -1;
	int64_t x330 = INT64_MAX;
	uint64_t x331 = 112813244943696LLU;
	volatile uint8_t x332 = 0U;
	static int32_t t76 = -107733917;

	t76 = (x329-((x330%x331)<x332));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x333 = -1;
	int32_t x334 = INT32_MIN;
	int32_t x335 = -1;
	volatile uint32_t x336 = UINT32_MAX;
	static int32_t t77 = 230213362;

	t77 = (x333-((x334%x335)<x336));

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x339 = -2;
	int8_t x340 = 1;
	static int32_t t78 = 2;

	t78 = (x337-((x338%x339)<x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x342 = 5051;
	int32_t t79 = -3407;

	t79 = (x341-((x342%x343)<x344));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = UINT32_MAX;
	uint8_t x350 = 0U;
	uint32_t x351 = 491109871U;
	volatile uint32_t t80 = 73341U;

	t80 = (x349-((x350%x351)<x352));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = -1;
	static int8_t x354 = INT8_MIN;
	int32_t x355 = -1;
	uint64_t x356 = 46609347982645LLU;
	volatile int32_t t81 = -172985873;

	t81 = (x353-((x354%x355)<x356));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x357 = 2891928681521386LLU;
	int64_t x359 = INT64_MAX;
	int64_t x360 = -1LL;
	static uint64_t t82 = 13835324771320LLU;

	t82 = (x357-((x358%x359)<x360));

	if (t82 != 2891928681521386LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x361 = UINT64_MAX;
	uint64_t x363 = UINT64_MAX;
	uint64_t t83 = 20LLU;

	t83 = (x361-((x362%x363)<x364));

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x365 = 15U;
	int32_t x366 = -1;
	static volatile uint64_t x367 = UINT64_MAX;
	volatile int32_t t84 = -14038905;

	t84 = (x365-((x366%x367)<x368));

	if (t84 != 14) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x369 = 51U;
	int16_t x371 = INT16_MIN;
	int64_t x372 = -87LL;

	t85 = (x369-((x370%x371)<x372));

	if (t85 != 51) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x373 = UINT16_MAX;
	static int64_t x374 = INT64_MIN;
	uint64_t x375 = UINT64_MAX;
	int8_t x376 = 5;
	int32_t t86 = 0;

	t86 = (x373-((x374%x375)<x376));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = 10226;
	uint8_t x378 = 4U;
	uint16_t x379 = 423U;
	static volatile int64_t x380 = INT64_MIN;
	volatile int32_t t87 = -944774;

	t87 = (x377-((x378%x379)<x380));

	if (t87 != 10226) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x381 = -1810694LL;
	int16_t x382 = -1;
	uint32_t x383 = 1861U;
	static volatile int8_t x384 = -1;
	volatile int64_t t88 = -23LL;

	t88 = (x381-((x382%x383)<x384));

	if (t88 != -1810695LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = 210U;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MAX;
	int32_t t89 = -239;

	t89 = (x385-((x386%x387)<x388));

	if (t89 != 209) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x389 = UINT64_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t90 = 2040576100469368LLU;

	t90 = (x389-((x390%x391)<x392));

	if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x394 = -1;
	int64_t x395 = -1LL;
	static int32_t t91 = -275;

	t91 = (x393-((x394%x395)<x396));

	if (t91 != -19) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x399 = INT16_MAX;
	int16_t x400 = 2;
	int32_t t92 = 30;

	t92 = (x397-((x398%x399)<x400));

	if (t92 != -129) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = -1LL;
	int32_t x403 = -1;
	int64_t t93 = -592138LL;

	t93 = (x401-((x402%x403)<x404));

	if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x405 = INT64_MAX;
	uint8_t x406 = 41U;
	int16_t x408 = INT16_MIN;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x405-((x406%x407)<x408));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = -619;
	static volatile int64_t x410 = 114155398721733LL;
	static int32_t x411 = 308;
	uint32_t x412 = UINT32_MAX;
	static int32_t t95 = -35;

	t95 = (x409-((x410%x411)<x412));

	if (t95 != -620) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = -389;
	int16_t x414 = 53;
	volatile int16_t x415 = -15;
	volatile uint32_t x416 = 137153244U;
	volatile int32_t t96 = 150659643;

	t96 = (x413-((x414%x415)<x416));

	if (t96 != -390) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x417 = UINT8_MAX;
	int64_t x418 = INT64_MAX;
	int32_t x420 = -1;
	volatile int32_t t97 = 3113376;

	t97 = (x417-((x418%x419)<x420));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	static int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MAX;
	volatile int32_t t98 = -673765;

	t98 = (x421-((x422%x423)<x424));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x426 = INT8_MIN;
	int16_t x428 = 1;

	t99 = (x425-((x426%x427)<x428));

	if (t99 != -129) { NG(); } else { ; }
	
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

