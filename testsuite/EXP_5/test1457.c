#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = 25;
int32_t t0 = -269004361;
uint16_t x5 = 6U;
int64_t x15 = INT64_MIN;
static int16_t x18 = -1;
uint16_t x23 = 21001U;
uint8_t x28 = 63U;
int32_t x34 = INT32_MIN;
static volatile int16_t x39 = -1;
int64_t x47 = INT64_MAX;
int16_t x55 = INT16_MAX;
volatile int8_t x56 = -1;
uint8_t x57 = 3U;
int16_t x60 = -40;
int8_t x66 = INT8_MAX;
volatile uint64_t t16 = 5LLU;
volatile uint8_t x69 = 0U;
static int32_t x76 = INT32_MAX;
int32_t t18 = -38449;
uint32_t x80 = 4857U;
static volatile int32_t x82 = 50758768;
volatile int16_t x91 = INT16_MIN;
static int16_t x96 = -14810;
static uint64_t x97 = 20437895LLU;
static int16_t x101 = -10;
uint64_t x104 = 130488899LLU;
int64_t x123 = 1513571902LL;
int32_t t29 = 144419;
int32_t x132 = -82;
int64_t x141 = -1346683822911LL;
int8_t x143 = INT8_MAX;
uint32_t x144 = 129U;
uint8_t x146 = UINT8_MAX;
uint16_t x148 = 2091U;
int32_t t35 = -3045110;
static int8_t x149 = 52;
volatile int8_t x152 = INT8_MIN;
static int32_t t36 = -120;
int8_t x156 = 39;
static int8_t x159 = INT8_MIN;
static int16_t x160 = -1;
int32_t x173 = -1;
volatile int64_t x187 = INT64_MIN;
int64_t x191 = INT64_MIN;
int64_t x193 = -1LL;
int32_t x194 = -1;
volatile int64_t t47 = -113065LL;
uint8_t x198 = 2U;
int32_t x211 = INT32_MAX;
static volatile int32_t t50 = INT32_MIN;
int8_t x217 = -1;
int8_t x220 = INT8_MAX;
int8_t x222 = 0;
uint16_t x225 = 222U;
static uint64_t x228 = 1367720328258511783LLU;
int8_t x232 = -1;
int32_t t55 = -494275;
int64_t x236 = INT64_MIN;
int64_t x237 = 3616721133948204379LL;
static int32_t x238 = -720;
volatile int64_t t57 = 315824LL;
volatile int8_t x242 = INT8_MIN;
static volatile int64_t x248 = -1LL;
static int32_t t61 = -323691659;
uint64_t x263 = UINT64_MAX;
int64_t t66 = INT64_MIN;
static int32_t x277 = INT32_MIN;
int32_t x278 = -405;
static int64_t x279 = 78482831473045LL;
int64_t x289 = -1LL;
static volatile uint32_t x291 = 831U;
uint64_t x292 = 0LLU;
volatile int64_t x294 = INT64_MIN;
int64_t x295 = INT64_MIN;
int32_t t71 = -242;
volatile uint8_t x300 = UINT8_MAX;
int8_t x302 = -1;
int16_t x306 = -1;
volatile uint8_t x316 = 28U;
volatile int32_t t77 = -3113;
volatile int64_t x324 = INT64_MIN;
uint64_t x331 = 65LLU;
int64_t x333 = INT64_MAX;
uint8_t x335 = 11U;
int16_t x341 = INT16_MAX;
static volatile int32_t x343 = 6;
volatile int8_t x347 = INT8_MIN;
int8_t x348 = -1;
static int16_t x361 = -202;
int8_t x363 = -1;
uint16_t x368 = 7U;
volatile int64_t t90 = 67315400239LL;
static int16_t x373 = INT16_MAX;
int16_t x375 = -900;
volatile uint64_t x381 = 1881221486714054LLU;
int8_t x390 = INT8_MAX;
static volatile int16_t x392 = INT16_MAX;
int32_t t95 = -784191;
uint16_t x396 = UINT16_MAX;
int64_t t97 = INT64_MIN;
static int32_t x401 = -21;
uint64_t x404 = 301094219163LLU;
uint64_t x405 = UINT64_MAX;


void f0(void) {
	uint16_t x1 = 330U;
	volatile int64_t x3 = -1632LL;
	static int16_t x4 = -4;

	t0 = (x1+((x2<x3)<x4));

	if (t0 != 330) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	static int8_t x7 = INT8_MIN;
	uint8_t x8 = 3U;
	static volatile int32_t t1 = 182158752;

	t1 = (x5+((x6<x7)<x8));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	uint8_t x11 = 0U;
	uint64_t x12 = 102230356631LLU;
	volatile int32_t t2 = -29325;

	t2 = (x9+((x10<x11)<x12));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static volatile int8_t x14 = -1;
	static volatile uint16_t x16 = 11U;
	volatile int32_t t3 = 14147497;

	t3 = (x13+((x14<x15)<x16));

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -88748;
	uint8_t x19 = 7U;
	static int8_t x20 = INT8_MAX;
	volatile int32_t t4 = -31;

	t4 = (x17+((x18<x19)<x20));

	if (t4 != -88747) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int8_t x22 = INT8_MIN;
	int64_t x24 = INT64_MIN;
	static volatile int32_t t5 = -14021320;

	t5 = (x21+((x22<x23)<x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MIN;
	volatile int32_t x27 = INT32_MAX;
	static int32_t t6 = 60;

	t6 = (x25+((x26<x27)<x28));

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 3;
	uint16_t x30 = 15821U;
	uint8_t x31 = 3U;
	int64_t x32 = INT64_MAX;
	static int32_t t7 = -11026685;

	t7 = (x29+((x30<x31)<x32));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = INT8_MAX;
	static int64_t x35 = INT64_MAX;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 1;

	t8 = (x33+((x34<x35)<x36));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = -59392077LL;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -5;

	t9 = (x37+((x38<x39)<x40));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	volatile int16_t x42 = 0;
	uint64_t x43 = 18349409LLU;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = INT32_MAX;

	t10 = (x41+((x42<x43)<x44));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 27779U;
	volatile uint32_t x46 = 12U;
	int64_t x48 = -60183LL;
	static int32_t t11 = -220797;

	t11 = (x45+((x46<x47)<x48));

	if (t11 != 27779) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MAX;
	static int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MIN;
	static uint32_t x52 = 23708827U;
	int32_t t12 = 715097;

	t12 = (x49+((x50<x51)<x52));

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	static uint64_t x54 = 5LLU;
	int32_t t13 = INT32_MIN;

	t13 = (x53+((x54<x55)<x56));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x58 = 0U;
	int8_t x59 = 1;
	volatile int32_t t14 = 0;

	t14 = (x57+((x58<x59)<x60));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 3117U;
	int16_t x62 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	uint8_t x64 = 29U;
	volatile int32_t t15 = -970232208;

	t15 = (x61+((x62<x63)<x64));

	if (t15 != 3118) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 148175328608LLU;
	int8_t x67 = INT8_MIN;
	static uint8_t x68 = 93U;

	t16 = (x65+((x66<x67)<x68));

	if (t16 != 148175328609LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	int32_t x71 = -60043049;
	volatile uint32_t x72 = 3U;
	static int32_t t17 = -1378263;

	t17 = (x69+((x70<x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 1U;
	static int8_t x74 = -1;
	static int8_t x75 = -1;

	t18 = (x73+((x74<x75)<x76));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	uint32_t x78 = 14U;
	int8_t x79 = -1;
	volatile int32_t t19 = -3;

	t19 = (x77+((x78<x79)<x80));

	if (t19 != 256) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 1621887;
	static int16_t x83 = INT16_MIN;
	int32_t x84 = -1;
	volatile int32_t t20 = 19;

	t20 = (x81+((x82<x83)<x84));

	if (t20 != 1621887) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 12124090U;
	int32_t x86 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -1;
	uint32_t t21 = 4473122U;

	t21 = (x85+((x86<x87)<x88));

	if (t21 != 12124090U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 3U;
	uint8_t x90 = 0U;
	int8_t x92 = 6;
	volatile int32_t t22 = 67;

	t22 = (x89+((x90<x91)<x92));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	int64_t x94 = 137LL;
	uint8_t x95 = 3U;
	static int64_t t23 = 763606152066270LL;

	t23 = (x93+((x94<x95)<x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x98 = INT8_MIN;
	static volatile uint64_t x99 = 47944LLU;
	uint64_t x100 = UINT64_MAX;
	uint64_t t24 = 16600416864LLU;

	t24 = (x97+((x98<x99)<x100));

	if (t24 != 20437896LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -79368LL;
	int64_t x103 = INT64_MIN;
	static int32_t t25 = 921191;

	t25 = (x101+((x102<x103)<x104));

	if (t25 != -9) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x106 = 1690950046134565LLU;
	int64_t x107 = INT64_MIN;
	volatile uint8_t x108 = 2U;
	volatile int32_t t26 = 3;

	t26 = (x105+((x106<x107)<x108));

	if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	static uint8_t x115 = 27U;
	int64_t x116 = INT64_MIN;
	volatile int32_t t27 = 582;

	t27 = (x113+((x114<x115)<x116));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = -1;
	int64_t x119 = -1LL;
	int8_t x120 = 0;
	static volatile int64_t t28 = INT64_MIN;

	t28 = (x117+((x118<x119)<x120));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MAX;
	uint32_t x122 = 208435U;
	uint64_t x124 = 487170079696LLU;

	t29 = (x121+((x122<x123)<x124));

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x125 = -15;
	uint16_t x126 = UINT16_MAX;
	volatile uint16_t x127 = UINT16_MAX;
	uint32_t x128 = UINT32_MAX;
	static volatile int32_t t30 = -28;

	t30 = (x125+((x126<x127)<x128));

	if (t30 != -14) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 235U;
	uint8_t x130 = 56U;
	static int16_t x131 = -6627;
	volatile int32_t t31 = -374484;

	t31 = (x129+((x130<x131)<x132));

	if (t31 != 235) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MIN;
	uint32_t x134 = 1U;
	int8_t x135 = -1;
	static int16_t x136 = -4969;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x133+((x134<x135)<x136));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = INT8_MIN;
	uint8_t x138 = UINT8_MAX;
	int32_t x139 = -6;
	uint64_t x140 = UINT64_MAX;
	int32_t t33 = -370493;

	t33 = (x137+((x138<x139)<x140));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x142 = INT32_MIN;
	int64_t t34 = -396755799LL;

	t34 = (x141+((x142<x143)<x144));

	if (t34 != -1346683822910LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	uint8_t x147 = 6U;

	t35 = (x145+((x146<x147)<x148));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x150 = 1;
	static volatile int64_t x151 = INT64_MAX;

	t36 = (x149+((x150<x151)<x152));

	if (t36 != 52) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = 0U;
	uint32_t x154 = 6956658U;
	static volatile uint8_t x155 = UINT8_MAX;
	volatile uint32_t t37 = 167U;

	t37 = (x153+((x154<x155)<x156));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MIN;
	static volatile int8_t x158 = INT8_MAX;
	int32_t t38 = -176;

	t38 = (x157+((x158<x159)<x160));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MAX;
	int32_t x162 = 2454876;
	static int64_t x163 = -1LL;
	int32_t x164 = 1;
	int32_t t39 = 438153611;

	t39 = (x161+((x162<x163)<x164));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -1;
	int16_t x166 = INT16_MIN;
	volatile uint64_t x167 = UINT64_MAX;
	volatile int32_t x168 = INT32_MAX;
	int32_t t40 = -103014;

	t40 = (x165+((x166<x167)<x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x169 = 0U;
	uint32_t x170 = UINT32_MAX;
	uint16_t x171 = 163U;
	int8_t x172 = -37;
	int32_t t41 = 10;

	t41 = (x169+((x170<x171)<x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x174 = 54U;
	volatile int64_t x175 = INT64_MAX;
	int64_t x176 = -1464241919130940LL;
	int32_t t42 = -791;

	t42 = (x173+((x174<x175)<x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 525478U;
	int8_t x178 = INT8_MIN;
	int32_t x179 = 19641;
	int32_t x180 = INT32_MIN;
	uint32_t t43 = 37870875U;

	t43 = (x177+((x178<x179)<x180));

	if (t43 != 525478U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x181 = INT8_MIN;
	uint8_t x182 = 3U;
	volatile int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MAX;
	volatile int32_t t44 = 332188;

	t44 = (x181+((x182<x183)<x184));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = INT16_MAX;
	static int32_t x186 = -1533;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t45 = -1784;

	t45 = (x185+((x186<x187)<x188));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MIN;
	volatile int16_t x192 = INT16_MIN;
	int32_t t46 = -25359514;

	t46 = (x189+((x190<x191)<x192));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x195 = 478437761821LL;
	int8_t x196 = -1;

	t47 = (x193+((x194<x195)<x196));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x197 = INT8_MAX;
	uint16_t x199 = 40U;
	volatile int64_t x200 = INT64_MIN;
	int32_t t48 = -44;

	t48 = (x197+((x198<x199)<x200));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x201 = UINT64_MAX;
	int32_t x202 = INT32_MIN;
	volatile int32_t x203 = INT32_MIN;
	static int8_t x204 = INT8_MAX;
	static volatile uint64_t t49 = 64LLU;

	t49 = (x201+((x202<x203)<x204));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = 55U;
	int8_t x212 = INT8_MIN;

	t50 = (x209+((x210<x211)<x212));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int16_t x214 = INT16_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	int32_t x216 = INT32_MIN;
	static volatile uint32_t t51 = UINT32_MAX;

	t51 = (x213+((x214<x215)<x216));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x218 = INT8_MIN;
	static volatile int32_t x219 = -718;
	int32_t t52 = -2753175;

	t52 = (x217+((x218<x219)<x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = 77194879840LLU;
	uint8_t x223 = 7U;
	volatile int8_t x224 = 1;
	static uint64_t t53 = 3928401190233LLU;

	t53 = (x221+((x222<x223)<x224));

	if (t53 != 77194879840LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x226 = -1;
	uint8_t x227 = 1U;
	volatile int32_t t54 = -1;

	t54 = (x225+((x226<x227)<x228));

	if (t54 != 223) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 3;
	volatile uint16_t x230 = 831U;
	volatile uint16_t x231 = 51U;

	t55 = (x229+((x230<x231)<x232));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 9U;
	static volatile int64_t x234 = INT64_MIN;
	static int8_t x235 = INT8_MAX;
	volatile int32_t t56 = -111;

	t56 = (x233+((x234<x235)<x236));

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x239 = 27U;
	int16_t x240 = -8;

	t57 = (x237+((x238<x239)<x240));

	if (t57 != 3616721133948204379LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1LL;
	uint16_t x243 = 292U;
	uint8_t x244 = UINT8_MAX;
	volatile int64_t t58 = -919493LL;

	t58 = (x241+((x242<x243)<x244));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = INT16_MIN;
	static uint32_t x246 = 11986040U;
	int64_t x247 = -375462577083727018LL;
	int32_t t59 = -24507;

	t59 = (x245+((x246<x247)<x248));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x249 = 0U;
	int16_t x250 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	volatile int64_t x252 = INT64_MAX;
	int32_t t60 = 127;

	t60 = (x249+((x250<x251)<x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 36U;
	volatile int8_t x254 = 1;
	static int16_t x255 = INT16_MIN;
	int16_t x256 = -1;

	t61 = (x253+((x254<x255)<x256));

	if (t61 != 36) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x257 = 1481204;
	volatile int32_t x258 = INT32_MIN;
	volatile uint32_t x259 = UINT32_MAX;
	int32_t x260 = -48473;
	int32_t t62 = 3364;

	t62 = (x257+((x258<x259)<x260));

	if (t62 != 1481204) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = INT64_MIN;
	volatile uint8_t x264 = 52U;
	volatile int32_t t63 = 3703;

	t63 = (x261+((x262<x263)<x264));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x265 = UINT64_MAX;
	int64_t x266 = -1LL;
	static int8_t x267 = INT8_MIN;
	static int32_t x268 = -1;
	uint64_t t64 = UINT64_MAX;

	t64 = (x265+((x266<x267)<x268));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = 24U;
	volatile uint8_t x270 = 0U;
	static uint16_t x271 = 3U;
	volatile uint16_t x272 = 4U;
	int32_t t65 = -481737;

	t65 = (x269+((x270<x271)<x272));

	if (t65 != 25) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x273 = INT64_MIN;
	static uint16_t x274 = 105U;
	volatile uint8_t x275 = UINT8_MAX;
	volatile int8_t x276 = INT8_MIN;

	t66 = (x273+((x274<x275)<x276));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x280 = -1;
	static volatile int32_t t67 = INT32_MIN;

	t67 = (x277+((x278<x279)<x280));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 40LLU;
	int16_t x282 = 9497;
	int32_t x283 = INT32_MAX;
	int16_t x284 = -1;
	volatile uint64_t t68 = 2248249734269423147LLU;

	t68 = (x281+((x282<x283)<x284));

	if (t68 != 40LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = 2U;
	uint32_t x286 = 26U;
	int8_t x287 = INT8_MIN;
	volatile int32_t x288 = INT32_MIN;
	int32_t t69 = 1161632;

	t69 = (x285+((x286<x287)<x288));

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = -1222;
	int64_t t70 = 9827LL;

	t70 = (x289+((x290<x291)<x292));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 250U;
	volatile int8_t x296 = -10;

	t71 = (x293+((x294<x295)<x296));

	if (t71 != 250) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x298 = INT64_MIN;
	static int32_t x299 = 9271;
	volatile int32_t t72 = 482653550;

	t72 = (x297+((x298<x299)<x300));

	if (t72 != 256) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x301 = UINT8_MAX;
	int8_t x303 = INT8_MIN;
	volatile uint32_t x304 = 58404U;
	static int32_t t73 = -2747014;

	t73 = (x301+((x302<x303)<x304));

	if (t73 != 256) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x305 = 18595U;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = INT16_MIN;
	static volatile uint32_t t74 = 34682264U;

	t74 = (x305+((x306<x307)<x308));

	if (t74 != 18595U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 23U;
	static uint32_t x310 = 1622410U;
	int32_t x311 = -53;
	int32_t x312 = INT32_MIN;
	volatile int32_t t75 = -19;

	t75 = (x309+((x310<x311)<x312));

	if (t75 != 23) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x313 = UINT16_MAX;
	static int32_t x314 = 4206;
	int8_t x315 = 0;
	volatile int32_t t76 = 897;

	t76 = (x313+((x314<x315)<x316));

	if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	int64_t x319 = -113LL;
	uint8_t x320 = 48U;

	t77 = (x317+((x318<x319)<x320));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MAX;
	int32_t x323 = -879131586;
	static volatile int32_t t78 = -61;

	t78 = (x321+((x322<x323)<x324));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MAX;
	int64_t t79 = -7821612LL;

	t79 = (x325+((x326<x327)<x328));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x329 = INT64_MIN;
	static int64_t x330 = 270970LL;
	static volatile int64_t x332 = INT64_MAX;
	static int64_t t80 = -32719919513073LL;

	t80 = (x329+((x330<x331)<x332));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x334 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	int64_t t81 = INT64_MAX;

	t81 = (x333+((x334<x335)<x336));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	volatile int16_t x339 = INT16_MAX;
	int64_t x340 = -1LL;
	int32_t t82 = 0;

	t82 = (x337+((x338<x339)<x340));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x342 = INT16_MIN;
	volatile int32_t x344 = -1;
	int32_t t83 = -881;

	t83 = (x341+((x342<x343)<x344));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 83815709978386LLU;
	int8_t x346 = INT8_MAX;
	volatile uint64_t t84 = 640297330LLU;

	t84 = (x345+((x346<x347)<x348));

	if (t84 != 83815709978386LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x349 = INT64_MIN;
	static volatile int16_t x350 = INT16_MIN;
	static uint64_t x351 = UINT64_MAX;
	volatile uint8_t x352 = UINT8_MAX;
	static volatile int64_t t85 = -175989563536LL;

	t85 = (x349+((x350<x351)<x352));

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 58U;
	uint16_t x354 = 1302U;
	volatile uint8_t x355 = 7U;
	static uint32_t x356 = 211713117U;
	volatile int32_t t86 = 1193848;

	t86 = (x353+((x354<x355)<x356));

	if (t86 != 59) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x357 = 402250854179249966LLU;
	int16_t x358 = INT16_MIN;
	static volatile uint16_t x359 = UINT16_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile uint64_t t87 = 1859468LLU;

	t87 = (x357+((x358<x359)<x360));

	if (t87 != 402250854179249967LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x362 = 21298777676206306LLU;
	int16_t x364 = INT16_MIN;
	volatile int32_t t88 = -15557;

	t88 = (x361+((x362<x363)<x364));

	if (t88 != -202) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x365 = 38445514U;
	volatile int32_t x366 = INT32_MIN;
	int16_t x367 = -1;
	uint32_t t89 = 1240086775U;

	t89 = (x365+((x366<x367)<x368));

	if (t89 != 38445515U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = -245LL;
	int16_t x370 = 507;
	int16_t x371 = -15;
	static volatile int8_t x372 = INT8_MIN;

	t90 = (x369+((x370<x371)<x372));

	if (t90 != -245LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x374 = 0;
	int16_t x376 = INT16_MIN;
	static int32_t t91 = 126130563;

	t91 = (x373+((x374<x375)<x376));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MIN;
	volatile int32_t x378 = -1;
	int8_t x379 = INT8_MAX;
	int32_t x380 = -1;
	int32_t t92 = INT32_MIN;

	t92 = (x377+((x378<x379)<x380));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x382 = 5U;
	int64_t x383 = INT64_MIN;
	static int32_t x384 = INT32_MAX;
	volatile uint64_t t93 = 108LLU;

	t93 = (x381+((x382<x383)<x384));

	if (t93 != 1881221486714055LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x385 = INT64_MAX;
	volatile int32_t x386 = -1;
	uint8_t x387 = UINT8_MAX;
	static int32_t x388 = -7266;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x385+((x386<x387)<x388));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x391 = UINT32_MAX;

	t95 = (x389+((x390<x391)<x392));

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -1;
	static int8_t x394 = INT8_MIN;
	uint8_t x395 = 46U;
	int32_t t96 = -1337567;

	t96 = (x393+((x394<x395)<x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	static int64_t x398 = -1LL;
	int64_t x399 = INT64_MIN;
	volatile int32_t x400 = -126617;

	t97 = (x397+((x398<x399)<x400));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x402 = -1;
	int8_t x403 = 0;
	volatile int32_t t98 = -4015;

	t98 = (x401+((x402<x403)<x404));

	if (t98 != -20) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x406 = INT32_MIN;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = -1LL;
	uint64_t t99 = UINT64_MAX;

	t99 = (x405+((x406<x407)<x408));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

