#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 6144187U;
uint8_t x4 = 0U;
uint32_t x9 = 4114615U;
static uint64_t x16 = 4LLU;
int8_t x19 = INT8_MAX;
uint32_t x23 = UINT32_MAX;
volatile int64_t x24 = 87479490958LL;
static volatile int64_t x26 = -54LL;
volatile int64_t t6 = 2864081LL;
int64_t x32 = -1LL;
uint64_t x33 = 14609038188LLU;
static uint64_t x35 = 7069403279320LLU;
uint16_t x45 = 29U;
volatile int32_t x47 = INT32_MAX;
uint32_t x50 = UINT32_MAX;
uint32_t x51 = 1U;
static int16_t x55 = INT16_MIN;
static int16_t x56 = 498;
static uint16_t x58 = UINT16_MAX;
static uint64_t x68 = 2699508003427LLU;
volatile int8_t x78 = 1;
volatile int32_t t19 = 1172262;
uint8_t x87 = 14U;
int64_t x92 = INT64_MIN;
uint16_t x93 = UINT16_MAX;
int32_t x94 = -131;
volatile int32_t x99 = INT32_MIN;
static uint32_t x104 = 3591U;
uint8_t x113 = 11U;
static volatile int16_t x119 = INT16_MIN;
int32_t x126 = -16425399;
int64_t x128 = INT64_MIN;
volatile int64_t t32 = -1648606638137LL;
static uint16_t x137 = 10264U;
uint32_t x141 = 207498U;
static volatile int8_t x147 = 14;
static volatile int64_t t36 = 11615214851LL;
int64_t t38 = -4709946323337LL;
static int32_t t39 = -27670;
uint8_t x161 = 0U;
uint64_t x165 = UINT64_MAX;
uint64_t x166 = UINT64_MAX;
int8_t x170 = 1;
volatile int16_t x174 = INT16_MIN;
uint16_t x176 = 356U;
uint32_t t44 = 4U;
uint32_t x185 = UINT32_MAX;
volatile int32_t x186 = INT32_MAX;
int32_t t47 = -226356697;
int8_t x200 = -1;
volatile uint64_t x204 = 30478LLU;
volatile int64_t t50 = -15538046LL;
int16_t x206 = INT16_MIN;
volatile int32_t t52 = 2442;
int64_t x216 = INT64_MIN;
static int64_t x220 = 924662521708954931LL;
uint16_t x224 = 5215U;
volatile int32_t t58 = -1;
uint8_t x238 = 49U;
int16_t x241 = INT16_MAX;
int8_t x242 = -7;
static volatile int64_t x246 = INT64_MAX;
uint64_t x247 = 149580LLU;
int8_t x251 = -1;
static volatile uint32_t x253 = 32703U;
static int32_t x256 = -3;
int32_t x258 = INT32_MIN;
static int32_t x261 = -6436126;
int8_t x265 = -19;
int32_t x267 = -149;
uint8_t x270 = 27U;
uint16_t x279 = UINT16_MAX;
uint32_t x281 = UINT32_MAX;
int8_t x285 = -1;
volatile int16_t x290 = -1;
static int32_t x292 = INT32_MAX;
int64_t x294 = 2259607708658381LL;
volatile int8_t x296 = -1;
int8_t x304 = INT8_MIN;
static int64_t x318 = INT64_MAX;
int64_t x329 = INT64_MIN;
volatile int64_t x335 = -1275433290LL;
volatile int64_t x338 = 2224341LL;
int64_t x345 = INT64_MIN;
static volatile int16_t x353 = 892;
volatile uint64_t x358 = UINT64_MAX;
int64_t x362 = INT64_MIN;
static volatile int32_t t92 = 5113;
volatile int64_t x383 = INT64_MIN;
int32_t t96 = 142;
int64_t x392 = INT64_MIN;
volatile int8_t x393 = 36;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint32_t x2 = 8388919U;
	volatile int64_t t0 = -698562186LL;

	t0 = ((x1|x2)&(x3==x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	static int16_t x6 = -1;
	int8_t x7 = 3;
	int8_t x8 = INT8_MAX;
	volatile int64_t t1 = -273LL;

	t1 = ((x5|x6)&(x7==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 501U;
	int64_t x11 = 4LL;
	int32_t x12 = INT32_MIN;
	static uint32_t t2 = 7U;

	t2 = ((x9|x10)&(x11==x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1541920928227LL;
	int64_t x14 = 27870541296LL;
	int64_t x15 = -1LL;
	volatile int64_t t3 = -4217253630606188LL;

	t3 = ((x13|x14)&(x15==x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 123U;
	static uint16_t x18 = UINT16_MAX;
	uint8_t x20 = UINT8_MAX;
	uint32_t t4 = 5U;

	t4 = ((x17|x18)&(x19==x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3815U;
	uint16_t x22 = 6966U;
	volatile int32_t t5 = -889896;

	t5 = ((x21|x22)&(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	volatile int32_t x27 = INT32_MIN;
	static uint32_t x28 = 7742U;

	t6 = ((x25|x26)&(x27==x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 25968541819842716LLU;
	int8_t x30 = -1;
	static int16_t x31 = INT16_MIN;
	uint64_t t7 = 1604752803636LLU;

	t7 = ((x29|x30)&(x31==x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	static int8_t x36 = INT8_MIN;
	volatile uint64_t t8 = 54101547555LLU;

	t8 = ((x33|x34)&(x35==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = 218560LLU;
	int8_t x39 = 0;
	uint16_t x40 = UINT16_MAX;
	volatile uint64_t t9 = 1937693545295896LLU;

	t9 = ((x37|x38)&(x39==x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 2U;
	int16_t x42 = INT16_MIN;
	uint32_t x43 = 31U;
	static int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = 16255;

	t10 = ((x41|x42)&(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	int64_t x48 = 4096531876843139400LL;
	static volatile int64_t t11 = -6538342LL;

	t11 = ((x45|x46)&(x47==x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -16355856LL;
	static volatile int8_t x52 = 6;
	int64_t t12 = 1932383686192LL;

	t12 = ((x49|x50)&(x51==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	volatile int32_t x54 = INT32_MIN;
	uint32_t t13 = 8198292U;

	t13 = ((x53|x54)&(x55==x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 16342U;
	int32_t x59 = INT32_MAX;
	int16_t x60 = INT16_MIN;
	static int32_t t14 = 14;

	t14 = ((x57|x58)&(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static int16_t x62 = 1;
	int64_t x63 = INT64_MAX;
	uint16_t x64 = 12152U;
	int64_t t15 = 471868958LL;

	t15 = ((x61|x62)&(x63==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	int32_t x66 = INT32_MAX;
	static uint32_t x67 = 1U;
	static uint64_t t16 = 1043406326837047750LLU;

	t16 = ((x65|x66)&(x67==x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 4308209232219626LL;
	int64_t x70 = INT64_MIN;
	int64_t x71 = -1LL;
	static uint16_t x72 = 2U;
	static volatile int64_t t17 = 34LL;

	t17 = ((x69|x70)&(x71==x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 2021967U;
	volatile uint64_t x74 = 1749LLU;
	static volatile uint8_t x75 = 47U;
	int64_t x76 = -13LL;
	uint64_t t18 = 106430274416358LLU;

	t18 = ((x73|x74)&(x75==x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 183;
	int32_t x79 = -858;
	int8_t x80 = -1;

	t19 = ((x77|x78)&(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = 891796;
	int8_t x82 = INT8_MIN;
	int64_t x83 = 215430306LL;
	int16_t x84 = 1964;
	volatile int32_t t20 = 7;

	t20 = ((x81|x82)&(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = 1759174;
	int32_t x86 = INT32_MIN;
	volatile int16_t x88 = INT16_MAX;
	int32_t t21 = -598142558;

	t21 = ((x85|x86)&(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 394687263824950LLU;
	volatile int64_t x90 = -958LL;
	volatile uint32_t x91 = 30U;
	volatile uint64_t t22 = 2LLU;

	t22 = ((x89|x90)&(x91==x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = INT64_MIN;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t23 = -12;

	t23 = ((x93|x94)&(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MIN;
	static uint8_t x100 = 1U;
	int64_t t24 = 13795547LL;

	t24 = ((x97|x98)&(x99==x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = 555;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = UINT8_MAX;
	volatile int64_t t25 = 64LL;

	t25 = ((x101|x102)&(x103==x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = 549;
	uint64_t x106 = 16706741LLU;
	uint16_t x107 = 0U;
	int64_t x108 = INT64_MIN;
	uint64_t t26 = 79LLU;

	t26 = ((x105|x106)&(x107==x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = -36;
	volatile int8_t x110 = INT8_MIN;
	uint64_t x111 = 1065557128LLU;
	static int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 24051244;

	t27 = ((x109|x110)&(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 4;
	uint16_t x115 = 1U;
	static uint32_t x116 = 3U;
	int32_t t28 = -15103545;

	t28 = ((x113|x114)&(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 15686;
	static int8_t x118 = INT8_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t29 = 431690087;

	t29 = ((x117|x118)&(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	uint64_t x122 = 3548250691LLU;
	volatile int64_t x123 = INT64_MIN;
	volatile int8_t x124 = 1;
	volatile uint64_t t30 = 1100965234216304673LLU;

	t30 = ((x121|x122)&(x123==x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	uint8_t x127 = UINT8_MAX;
	volatile uint64_t t31 = 494888LLU;

	t31 = ((x125|x126)&(x127==x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	static int32_t x130 = -1;
	int32_t x131 = INT32_MIN;
	static int8_t x132 = INT8_MIN;

	t32 = ((x129|x130)&(x131==x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 279860193LLU;
	uint16_t x134 = 1044U;
	int32_t x135 = INT32_MAX;
	int64_t x136 = INT64_MAX;
	volatile uint64_t t33 = 4231036218404909461LLU;

	t33 = ((x133|x134)&(x135==x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = INT16_MIN;
	int8_t x139 = -41;
	int64_t x140 = INT64_MIN;
	int32_t t34 = -2079881;

	t34 = ((x137|x138)&(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x142 = 3U;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile uint32_t t35 = 0U;

	t35 = ((x141|x142)&(x143==x144));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = 257699624;
	static int32_t x148 = -979;

	t36 = ((x145|x146)&(x147==x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x149 = INT8_MIN;
	int64_t x150 = -1LL;
	int8_t x151 = 1;
	int8_t x152 = INT8_MIN;
	static int64_t t37 = -36893267141740326LL;

	t37 = ((x149|x150)&(x151==x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int64_t x154 = INT64_MAX;
	int16_t x155 = -1;
	int8_t x156 = -1;

	t38 = ((x153|x154)&(x155==x156));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	uint16_t x158 = UINT16_MAX;
	volatile int16_t x159 = INT16_MIN;
	static int8_t x160 = INT8_MAX;

	t39 = ((x157|x158)&(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -1;
	volatile int16_t x163 = INT16_MIN;
	int32_t x164 = -1;
	volatile int32_t t40 = 385181;

	t40 = ((x161|x162)&(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x167 = 20U;
	uint8_t x168 = 10U;
	uint64_t t41 = 946333516843376LLU;

	t41 = ((x165|x166)&(x167==x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	uint8_t x171 = UINT8_MAX;
	uint16_t x172 = 1014U;
	volatile uint64_t t42 = 17299601607LLU;

	t42 = ((x169|x170)&(x171==x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	volatile int16_t x175 = INT16_MIN;
	int32_t t43 = 37640763;

	t43 = ((x173|x174)&(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 6U;
	int16_t x178 = INT16_MIN;
	uint8_t x179 = 0U;
	uint64_t x180 = 14410188745738167LLU;

	t44 = ((x177|x178)&(x179==x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = 8;
	int16_t x182 = -1;
	volatile uint8_t x183 = UINT8_MAX;
	volatile int8_t x184 = INT8_MIN;
	int32_t t45 = 185;

	t45 = ((x181|x182)&(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x187 = 105U;
	volatile int8_t x188 = INT8_MAX;
	uint32_t t46 = 1943U;

	t46 = ((x185|x186)&(x187==x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 7U;
	static int8_t x190 = -1;
	int16_t x191 = INT16_MAX;
	int64_t x192 = -2511LL;

	t47 = ((x189|x190)&(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MIN;
	int32_t x195 = 3116727;
	int8_t x196 = -1;
	volatile int32_t t48 = -160;

	t48 = ((x193|x194)&(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	uint32_t x198 = 658U;
	volatile int64_t x199 = -1LL;
	volatile uint32_t t49 = 6U;

	t49 = ((x197|x198)&(x199==x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 95913977623526006LL;
	int8_t x202 = INT8_MIN;
	static uint64_t x203 = UINT64_MAX;

	t50 = ((x201|x202)&(x203==x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile uint32_t x207 = 1U;
	uint64_t x208 = UINT64_MAX;
	int64_t t51 = -63918707483LL;

	t51 = ((x205|x206)&(x207==x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	static volatile uint8_t x212 = UINT8_MAX;

	t52 = ((x209|x210)&(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	volatile uint16_t x214 = 142U;
	int16_t x215 = INT16_MIN;
	int64_t t53 = 74930LL;

	t53 = ((x213|x214)&(x215==x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;
	static int32_t x218 = INT32_MIN;
	int8_t x219 = 23;
	volatile int32_t t54 = 288;

	t54 = ((x217|x218)&(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = 3U;
	int32_t t55 = 1;

	t55 = ((x221|x222)&(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	uint64_t x226 = UINT64_MAX;
	int32_t x227 = INT32_MAX;
	int8_t x228 = INT8_MIN;
	uint64_t t56 = 669709582677250LLU;

	t56 = ((x225|x226)&(x227==x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 1U;
	int8_t x230 = 0;
	volatile int8_t x231 = INT8_MIN;
	volatile int32_t x232 = INT32_MIN;
	uint32_t t57 = 238892U;

	t57 = ((x229|x230)&(x231==x232));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = 412468;
	int16_t x234 = INT16_MAX;
	uint64_t x235 = 378LLU;
	int64_t x236 = INT64_MAX;

	t58 = ((x233|x234)&(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	int16_t x239 = 107;
	uint8_t x240 = 1U;
	volatile int32_t t59 = 544;

	t59 = ((x237|x238)&(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MAX;
	static volatile int32_t t60 = 28990164;

	t60 = ((x241|x242)&(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int16_t x248 = 6051;
	int64_t t61 = -93302541LL;

	t61 = ((x245|x246)&(x247==x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = 2640207U;
	static int32_t x250 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t62 = 72409164U;

	t62 = ((x249|x250)&(x251==x252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x254 = -1;
	static int64_t x255 = 526713277142780540LL;
	uint32_t t63 = 6097975U;

	t63 = ((x253|x254)&(x255==x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	static int16_t x259 = 7;
	int16_t x260 = INT16_MIN;
	volatile int32_t t64 = 19894;

	t64 = ((x257|x258)&(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	uint64_t x263 = 13840065LLU;
	static int32_t x264 = -1;
	int32_t t65 = 40113150;

	t65 = ((x261|x262)&(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = 213;
	volatile int16_t x268 = INT16_MIN;
	int32_t t66 = -7;

	t66 = ((x265|x266)&(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = 521;
	static uint8_t x271 = 2U;
	uint32_t x272 = 5261U;
	int32_t t67 = 79215;

	t67 = ((x269|x270)&(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = 4482349598502290LLU;
	volatile int32_t x275 = 7;
	int64_t x276 = -71836LL;
	volatile uint64_t t68 = 13973LLU;

	t68 = ((x273|x274)&(x275==x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MIN;
	uint64_t x280 = 1636LLU;
	int64_t t69 = -2972840398001813284LL;

	t69 = ((x277|x278)&(x279==x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	int32_t x283 = INT32_MAX;
	uint8_t x284 = 27U;
	static uint32_t t70 = 17000956U;

	t70 = ((x281|x282)&(x283==x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x286 = 60107954LL;
	int64_t x287 = -8496865390LL;
	static volatile int16_t x288 = INT16_MIN;
	volatile int64_t t71 = -39045646359724LL;

	t71 = ((x285|x286)&(x287==x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = -1;
	uint64_t x291 = UINT64_MAX;
	volatile int32_t t72 = 693;

	t72 = ((x289|x290)&(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 4527420835LLU;
	int32_t x295 = INT32_MIN;
	volatile uint64_t t73 = 24798LLU;

	t73 = ((x293|x294)&(x295==x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	uint16_t x298 = UINT16_MAX;
	volatile int8_t x299 = INT8_MIN;
	static int16_t x300 = 1;
	volatile int32_t t74 = -55;

	t74 = ((x297|x298)&(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = 16;
	int32_t x302 = INT32_MIN;
	volatile int16_t x303 = -12;
	static volatile int32_t t75 = -3;

	t75 = ((x301|x302)&(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 3LL;
	static uint32_t x306 = 229U;
	volatile int16_t x307 = -1;
	uint32_t x308 = 278554968U;
	volatile int64_t t76 = -493463178898LL;

	t76 = ((x305|x306)&(x307==x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = 1U;
	volatile uint32_t x311 = UINT32_MAX;
	int32_t x312 = 929020;
	volatile int32_t t77 = -5399;

	t77 = ((x309|x310)&(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x313 = INT64_MAX;
	static int64_t x314 = INT64_MIN;
	int32_t x315 = 3;
	static volatile uint8_t x316 = 0U;
	int64_t t78 = -14132822736LL;

	t78 = ((x313|x314)&(x315==x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = UINT8_MAX;
	static uint64_t x319 = 3384LLU;
	static int8_t x320 = INT8_MIN;
	int64_t t79 = -200298346755LL;

	t79 = ((x317|x318)&(x319==x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = UINT16_MAX;
	int16_t x322 = INT16_MAX;
	uint64_t x323 = 3300402581LLU;
	uint8_t x324 = 52U;
	volatile int32_t t80 = 11161;

	t80 = ((x321|x322)&(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	uint32_t x326 = 25022U;
	static int64_t x327 = 101409LL;
	int64_t x328 = INT64_MAX;
	uint32_t t81 = 120U;

	t81 = ((x325|x326)&(x327==x328));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MIN;
	static uint16_t x331 = UINT16_MAX;
	static uint16_t x332 = UINT16_MAX;
	volatile int64_t t82 = 576LL;

	t82 = ((x329|x330)&(x331==x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 12949262101606296LLU;
	volatile int64_t x334 = -14389270LL;
	uint8_t x336 = 12U;
	uint64_t t83 = 16512456958477263LLU;

	t83 = ((x333|x334)&(x335==x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 152U;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	int64_t t84 = 39800307721195LL;

	t84 = ((x337|x338)&(x339==x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -9;
	static int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MIN;
	volatile uint32_t x344 = 1U;
	static int32_t t85 = 0;

	t85 = ((x341|x342)&(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MAX;
	volatile uint64_t x347 = 219882008492LLU;
	uint16_t x348 = 3342U;
	int64_t t86 = -2975824275127736LL;

	t86 = ((x345|x346)&(x347==x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	int32_t x351 = -271;
	uint32_t x352 = UINT32_MAX;
	static volatile int32_t t87 = 751117;

	t87 = ((x349|x350)&(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x354 = 8531U;
	volatile int64_t x355 = -31432058393LL;
	int16_t x356 = -1;
	volatile int32_t t88 = -140879800;

	t88 = ((x353|x354)&(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	static int64_t x359 = -35276478189LL;
	volatile int16_t x360 = INT16_MIN;
	static uint64_t t89 = 222056225LLU;

	t89 = ((x357|x358)&(x359==x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	uint64_t x363 = 695328LLU;
	static int8_t x364 = INT8_MAX;
	static int64_t t90 = 21963790878LL;

	t90 = ((x361|x362)&(x363==x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 1;
	volatile int32_t x366 = 1;
	int64_t x367 = -4LL;
	int32_t x368 = INT32_MAX;
	int32_t t91 = -121776;

	t91 = ((x365|x366)&(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = 196891210;
	volatile int16_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int8_t x372 = -60;

	t92 = ((x369|x370)&(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	uint16_t x374 = UINT16_MAX;
	volatile int8_t x375 = INT8_MAX;
	static int32_t x376 = INT32_MIN;
	int32_t t93 = 1;

	t93 = ((x373|x374)&(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = UINT64_MAX;
	int16_t x378 = -1;
	int16_t x379 = -1;
	int64_t x380 = INT64_MIN;
	volatile uint64_t t94 = 254236494816LLU;

	t94 = ((x377|x378)&(x379==x380));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = UINT64_MAX;
	static volatile int32_t x382 = -1;
	volatile uint64_t x384 = 1179LLU;
	volatile uint64_t t95 = 1821316637227654339LLU;

	t95 = ((x381|x382)&(x383==x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 0;
	int16_t x386 = INT16_MIN;
	int32_t x387 = -144;
	uint8_t x388 = 2U;

	t96 = ((x385|x386)&(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 31605080592402692LLU;
	int64_t x390 = -1LL;
	static int64_t x391 = -1LL;
	volatile uint64_t t97 = 2374LLU;

	t97 = ((x389|x390)&(x391==x392));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MIN;
	volatile int16_t x395 = -1;
	int64_t x396 = -1LL;
	volatile int32_t t98 = -94165;

	t98 = ((x393|x394)&(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 39U;
	volatile uint64_t x398 = 98463LLU;
	static int16_t x399 = INT16_MAX;
	static int16_t x400 = INT16_MIN;
	volatile uint64_t t99 = 23068597090138LLU;

	t99 = ((x397|x398)&(x399==x400));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

