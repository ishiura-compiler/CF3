#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
uint16_t x3 = UINT16_MAX;
int64_t x5 = -1LL;
uint32_t x8 = UINT32_MAX;
uint16_t x13 = 387U;
uint32_t x15 = UINT32_MAX;
int8_t x17 = -1;
int64_t x18 = 72609914511024215LL;
int8_t x19 = INT8_MAX;
int64_t x21 = 596618LL;
static volatile int32_t t6 = -461533;
uint32_t x31 = UINT32_MAX;
uint16_t x32 = 421U;
volatile int32_t t7 = -61455;
int16_t x35 = INT16_MAX;
static int32_t x37 = INT32_MIN;
static int8_t x40 = -1;
static int32_t t10 = -216;
volatile uint32_t x47 = UINT32_MAX;
static int64_t x56 = -1LL;
static int32_t t13 = -229;
int32_t x58 = 1018468545;
uint16_t x69 = 11U;
volatile int64_t x80 = INT64_MIN;
static int8_t x81 = INT8_MIN;
volatile uint64_t x84 = 1547262728948644503LLU;
static volatile int32_t t20 = -412;
volatile uint64_t x85 = 1LLU;
int32_t x87 = -1;
int16_t x88 = -47;
uint8_t x95 = 0U;
int32_t x100 = INT32_MIN;
int32_t t24 = 851494;
int32_t x106 = INT32_MAX;
int8_t x110 = INT8_MAX;
int32_t x111 = INT32_MAX;
int64_t x113 = -1LL;
static uint64_t x114 = 13309700LLU;
int16_t x118 = -55;
int32_t t29 = 23;
volatile int8_t x127 = INT8_MIN;
uint32_t x129 = 47U;
int16_t x131 = INT16_MIN;
int64_t x133 = INT64_MAX;
static uint16_t x140 = UINT16_MAX;
uint64_t x149 = 51722279733LLU;
uint8_t x150 = 2U;
volatile int32_t t38 = 246182478;
static int32_t x159 = INT32_MIN;
static int8_t x160 = INT8_MIN;
int8_t x165 = 0;
static int16_t x168 = 7582;
int16_t x173 = INT16_MIN;
static volatile uint64_t x174 = UINT64_MAX;
volatile int64_t x175 = INT64_MAX;
uint16_t x176 = UINT16_MAX;
int16_t x179 = -22;
int32_t x180 = INT32_MIN;
int16_t x182 = INT16_MAX;
uint16_t x187 = UINT16_MAX;
int32_t x189 = -341227346;
int16_t x190 = -1;
int16_t x195 = INT16_MAX;
volatile int64_t x196 = 171978LL;
volatile int32_t t48 = -398548608;
int32_t x197 = -1;
int32_t x199 = -1;
volatile int32_t t49 = -1454;
int64_t x202 = -189148494176536LL;
volatile int32_t t50 = 0;
volatile int32_t t51 = 15903;
uint8_t x217 = UINT8_MAX;
int32_t t54 = 9986612;
volatile int32_t x223 = -1;
int32_t t55 = -2375379;
volatile int8_t x225 = INT8_MIN;
uint64_t x227 = 51781283511LLU;
volatile int32_t t56 = 2260;
static uint32_t x234 = 3U;
int32_t t59 = -284699;
static volatile int64_t x242 = -1LL;
volatile int32_t t60 = 29505;
uint32_t x249 = UINT32_MAX;
int32_t x259 = INT32_MIN;
int32_t t64 = -174;
volatile int32_t t65 = -31278;
volatile int64_t x266 = -813782290608287LL;
volatile int32_t x277 = 1;
int16_t x278 = INT16_MIN;
int16_t x283 = -1;
static int32_t x286 = -1;
uint16_t x291 = UINT16_MAX;
int8_t x295 = 3;
static int32_t t74 = 4106;
static int8_t x301 = INT8_MIN;
static uint64_t x319 = 356299698559LLU;
volatile int32_t t79 = -2394;
uint8_t x321 = 45U;
int64_t x322 = INT64_MAX;
int32_t t80 = 1;
int32_t t81 = 5;
int16_t x333 = 1319;
int64_t x336 = -1LL;
volatile uint64_t x341 = 2019LLU;
static int32_t x343 = INT32_MIN;
volatile int32_t x345 = INT32_MIN;
static int32_t x354 = INT32_MIN;
volatile int16_t x365 = -22;
static int32_t x371 = INT32_MIN;
static uint16_t x373 = 2235U;
static int32_t t93 = -81682777;
int64_t x383 = INT64_MIN;
uint32_t x389 = 3958U;
int32_t t97 = -30;
int32_t x394 = INT32_MIN;
int32_t t98 = 121451;
int16_t x397 = INT16_MAX;
int8_t x398 = 61;
uint32_t x400 = 468933U;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint8_t x4 = 1U;
	int32_t t0 = -8757;

	t0 = ((x1<x2)+(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -2;
	volatile uint8_t x7 = 11U;
	static volatile int32_t t1 = -20648;

	t1 = ((x5<x6)+(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MIN;
	uint16_t x11 = 9U;
	int16_t x12 = INT16_MIN;
	int32_t t2 = 999;

	t2 = ((x9<x10)+(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = -1;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 366677;

	t3 = ((x13<x14)+(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x20 = -84;
	static volatile int32_t t4 = 1;

	t4 = ((x17<x18)+(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 1815566U;
	int16_t x23 = -4;
	int64_t x24 = -3167025869505900LL;
	static int32_t t5 = 1;

	t5 = ((x21<x22)+(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int32_t x26 = INT32_MIN;
	int16_t x27 = -1;
	volatile int16_t x28 = INT16_MIN;

	t6 = ((x25<x26)+(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile int16_t x30 = INT16_MIN;

	t7 = ((x29<x30)+(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static uint64_t x34 = UINT64_MAX;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = -406071633;

	t8 = ((x33<x34)+(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 1U;
	uint32_t x39 = 3U;
	int32_t t9 = 24150162;

	t9 = ((x37<x38)+(x39<=x40));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 7750U;
	int64_t x42 = INT64_MIN;
	volatile uint32_t x43 = UINT32_MAX;
	int16_t x44 = INT16_MIN;

	t10 = ((x41<x42)+(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = -1;
	volatile int16_t x46 = -6473;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 1027191996;

	t11 = ((x45<x46)+(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	int64_t x50 = INT64_MIN;
	volatile int32_t x51 = 8028928;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -35940530;

	t12 = ((x49<x50)+(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 9852U;
	uint32_t x54 = UINT32_MAX;
	volatile int32_t x55 = INT32_MIN;

	t13 = ((x53<x54)+(x55<=x56));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	int32_t x59 = -23459;
	uint32_t x60 = 4U;
	static volatile int32_t t14 = -1;

	t14 = ((x57<x58)+(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -1;
	int64_t x62 = -1282LL;
	int8_t x63 = INT8_MAX;
	volatile uint32_t x64 = 1986U;
	int32_t t15 = 216;

	t15 = ((x61<x62)+(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = UINT32_MAX;
	static int16_t x66 = INT16_MAX;
	static volatile int32_t x67 = INT32_MAX;
	int64_t x68 = -1LL;
	volatile int32_t t16 = 7;

	t16 = ((x65<x66)+(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 934259U;
	volatile int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MAX;
	int32_t t17 = -1;

	t17 = ((x69<x70)+(x71<=x72));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = 1;
	int64_t x74 = INT64_MIN;
	uint32_t x75 = 1899U;
	static int64_t x76 = -286550108296524114LL;
	volatile int32_t t18 = 31022276;

	t18 = ((x73<x74)+(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = UINT16_MAX;
	int64_t x78 = INT64_MAX;
	volatile int8_t x79 = INT8_MIN;
	volatile int32_t t19 = -239505;

	t19 = ((x77<x78)+(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = INT8_MIN;
	volatile int32_t x83 = -1;

	t20 = ((x81<x82)+(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = UINT32_MAX;
	volatile int32_t t21 = -29;

	t21 = ((x85<x86)+(x87<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MAX;
	int64_t x90 = -1LL;
	int64_t x91 = 187196013LL;
	static int16_t x92 = -653;
	int32_t t22 = -170;

	t22 = ((x89<x90)+(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int64_t x94 = -1LL;
	uint32_t x96 = UINT32_MAX;
	static volatile int32_t t23 = -142999301;

	t23 = ((x93<x94)+(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 27576904646162LL;
	volatile int8_t x98 = -2;
	uint64_t x99 = UINT64_MAX;

	t24 = ((x97<x98)+(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 65U;
	uint64_t x102 = 1419025246023445LLU;
	int32_t x103 = -27;
	static int32_t x104 = -1;
	int32_t t25 = 13;

	t25 = ((x101<x102)+(x103<=x104));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 4U;
	volatile uint8_t x107 = 57U;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -737;

	t26 = ((x105<x106)+(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -1;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 190547535;

	t27 = ((x109<x110)+(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x115 = INT64_MAX;
	int64_t x116 = -29LL;
	volatile int32_t t28 = -74;

	t28 = ((x113<x114)+(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1LL;
	int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MIN;

	t29 = ((x117<x118)+(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 44411450308967250LL;
	int16_t x122 = -1;
	int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = UINT8_MAX;
	int32_t t30 = 1;

	t30 = ((x121<x122)+(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = 0;
	int64_t x126 = INT64_MAX;
	static uint8_t x128 = 3U;
	int32_t t31 = 15012662;

	t31 = ((x125<x126)+(x127<=x128));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 46U;
	volatile int64_t x132 = INT64_MIN;
	int32_t t32 = -129;

	t32 = ((x129<x130)+(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = INT64_MIN;
	uint32_t x135 = 5U;
	volatile int8_t x136 = INT8_MIN;
	static int32_t t33 = -17333807;

	t33 = ((x133<x134)+(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 1;
	uint8_t x138 = UINT8_MAX;
	volatile uint64_t x139 = 205294277851235LLU;
	volatile int32_t t34 = 3279;

	t34 = ((x137<x138)+(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = UINT8_MAX;
	static uint32_t x142 = 563U;
	uint32_t x143 = UINT32_MAX;
	uint64_t x144 = 190835525LLU;
	volatile int32_t t35 = 230588;

	t35 = ((x141<x142)+(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = 0;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = INT64_MAX;
	int16_t x148 = -1;
	int32_t t36 = 30;

	t36 = ((x145<x146)+(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = INT32_MIN;
	uint32_t x152 = 21540892U;
	int32_t t37 = -55308606;

	t37 = ((x149<x150)+(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x154 = 70335387;
	uint16_t x155 = 4U;
	int16_t x156 = -1;

	t38 = ((x153<x154)+(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = 13585U;
	int8_t x158 = INT8_MAX;
	static int32_t t39 = 1365181;

	t39 = ((x157<x158)+(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	int64_t x162 = INT64_MIN;
	static uint16_t x163 = 381U;
	volatile uint32_t x164 = 59U;
	int32_t t40 = -38;

	t40 = ((x161<x162)+(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x166 = 21U;
	uint8_t x167 = 29U;
	static volatile int32_t t41 = -831;

	t41 = ((x165<x166)+(x167<=x168));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 237891LLU;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -43;
	volatile uint64_t x172 = 1951918LLU;
	static volatile int32_t t42 = 878986;

	t42 = ((x169<x170)+(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t t43 = -942109579;

	t43 = ((x173<x174)+(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = -7051;
	static int8_t x178 = INT8_MAX;
	int32_t t44 = -3161;

	t44 = ((x177<x178)+(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	static volatile int8_t x183 = INT8_MIN;
	int16_t x184 = 0;
	volatile int32_t t45 = 88;

	t45 = ((x181<x182)+(x183<=x184));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static uint8_t x186 = 12U;
	int8_t x188 = -9;
	volatile int32_t t46 = -48927470;

	t46 = ((x185<x186)+(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x191 = -1;
	int8_t x192 = -1;
	int32_t t47 = 1;

	t47 = ((x189<x190)+(x191<=x192));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x193 = INT16_MIN;
	volatile int64_t x194 = 232482468262511LL;

	t48 = ((x193<x194)+(x195<=x196));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 25U;
	static volatile int16_t x200 = -1;

	t49 = ((x197<x198)+(x199<=x200));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	volatile int8_t x203 = INT8_MIN;
	uint64_t x204 = 1668LLU;

	t50 = ((x201<x202)+(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int8_t x206 = INT8_MIN;
	static volatile uint32_t x207 = 1272502U;
	static uint32_t x208 = 459U;

	t51 = ((x205<x206)+(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -12;
	uint32_t x210 = 0U;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	int32_t t52 = 48;

	t52 = ((x209<x210)+(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 18U;
	uint32_t x214 = 18U;
	static uint32_t x215 = 12U;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 6;

	t53 = ((x213<x214)+(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x218 = 2U;
	int8_t x219 = -1;
	int32_t x220 = -1;

	t54 = ((x217<x218)+(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint8_t x221 = 1U;
	uint32_t x222 = UINT32_MAX;
	static uint8_t x224 = UINT8_MAX;

	t55 = ((x221<x222)+(x223<=x224));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x226 = -1;
	static int32_t x228 = INT32_MIN;

	t56 = ((x225<x226)+(x227<=x228));

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 0;
	static uint32_t x230 = UINT32_MAX;
	int32_t x231 = -299;
	int16_t x232 = 3;
	volatile int32_t t57 = -971885118;

	t57 = ((x229<x230)+(x231<=x232));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 163;
	int16_t x235 = INT16_MIN;
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 6875563;

	t58 = ((x233<x234)+(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MIN;
	static int64_t x238 = 269492816007LL;
	volatile int8_t x239 = INT8_MIN;
	static uint8_t x240 = 3U;

	t59 = ((x237<x238)+(x239<=x240));

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -18;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;

	t60 = ((x241<x242)+(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x245 = INT8_MIN;
	uint8_t x246 = UINT8_MAX;
	int64_t x247 = -1LL;
	int8_t x248 = 3;
	static volatile int32_t t61 = 1200117;

	t61 = ((x245<x246)+(x247<=x248));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = -1;
	static volatile int64_t x251 = -34193LL;
	uint64_t x252 = 775302375304083LLU;
	int32_t t62 = 328;

	t62 = ((x249<x250)+(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = UINT64_MAX;
	int16_t x254 = INT16_MAX;
	int16_t x255 = 13894;
	int8_t x256 = 14;
	volatile int32_t t63 = 3;

	t63 = ((x253<x254)+(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 11LLU;
	int16_t x258 = INT16_MIN;
	volatile uint16_t x260 = 221U;

	t64 = ((x257<x258)+(x259<=x260));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 93U;
	int8_t x262 = -1;
	int32_t x263 = 254956928;
	volatile int32_t x264 = 104;

	t65 = ((x261<x262)+(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = 58U;
	int16_t x267 = -1;
	uint16_t x268 = 1607U;
	volatile int32_t t66 = 773236;

	t66 = ((x265<x266)+(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -2;
	uint64_t x270 = 45336719826425LLU;
	volatile uint64_t x271 = UINT64_MAX;
	uint32_t x272 = 17038U;
	int32_t t67 = -283599771;

	t67 = ((x269<x270)+(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	static int64_t x274 = 25928LL;
	static int8_t x275 = INT8_MIN;
	static int32_t x276 = INT32_MAX;
	volatile int32_t t68 = -3960084;

	t68 = ((x273<x274)+(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x279 = UINT8_MAX;
	uint32_t x280 = 220336813U;
	int32_t t69 = -55;

	t69 = ((x277<x278)+(x279<=x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t70 = 111954013;

	t70 = ((x281<x282)+(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = INT8_MIN;
	int32_t x287 = INT32_MIN;
	int64_t x288 = -1LL;
	int32_t t71 = -1;

	t71 = ((x285<x286)+(x287<=x288));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -502;
	uint8_t x290 = 113U;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 459568380;

	t72 = ((x289<x290)+(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MAX;
	static int16_t x296 = -1;
	volatile int32_t t73 = 2;

	t73 = ((x293<x294)+(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	int8_t x299 = -1;
	int8_t x300 = INT8_MIN;

	t74 = ((x297<x298)+(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = UINT16_MAX;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MAX;
	int32_t t75 = 3765;

	t75 = ((x301<x302)+(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 269U;
	uint16_t x307 = 3U;
	int32_t x308 = INT32_MAX;
	volatile int32_t t76 = -366;

	t76 = ((x305<x306)+(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	int32_t x310 = INT32_MIN;
	uint16_t x311 = 0U;
	volatile int16_t x312 = INT16_MIN;
	static volatile int32_t t77 = 48;

	t77 = ((x309<x310)+(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	volatile int64_t x314 = -1LL;
	volatile int16_t x315 = 1327;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t78 = 226411;

	t78 = ((x313<x314)+(x315<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	static uint16_t x318 = UINT16_MAX;
	int16_t x320 = -31;

	t79 = ((x317<x318)+(x319<=x320));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;

	t80 = ((x321<x322)+(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint8_t x326 = 0U;
	uint64_t x327 = 6LLU;
	int32_t x328 = INT32_MIN;

	t81 = ((x325<x326)+(x327<=x328));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -61406LL;
	int16_t x330 = INT16_MIN;
	int64_t x331 = -313562769941553463LL;
	volatile int8_t x332 = INT8_MAX;
	int32_t t82 = 18722;

	t82 = ((x329<x330)+(x331<=x332));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x334 = 111;
	int16_t x335 = 3268;
	volatile int32_t t83 = -93880;

	t83 = ((x333<x334)+(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 0;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	static uint16_t x340 = 226U;
	int32_t t84 = 5860724;

	t84 = ((x337<x338)+(x339<=x340));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = -1;
	volatile int16_t x344 = INT16_MIN;
	int32_t t85 = 216544;

	t85 = ((x341<x342)+(x343<=x344));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	static int8_t x347 = INT8_MAX;
	int32_t x348 = 0;
	int32_t t86 = -1;

	t86 = ((x345<x346)+(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	uint32_t x350 = 29999424U;
	int32_t x351 = -1;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = 717;

	t87 = ((x349<x350)+(x351<=x352));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = 49907LL;
	int32_t t88 = 1168;

	t88 = ((x353<x354)+(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 500U;
	uint8_t x358 = 0U;
	int16_t x359 = 2279;
	int32_t x360 = -259569;
	static volatile int32_t t89 = 21452620;

	t89 = ((x357<x358)+(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = 30;
	uint32_t x362 = 123704U;
	int32_t x363 = -9740761;
	static int32_t x364 = 9889;
	int32_t t90 = 52070;

	t90 = ((x361<x362)+(x363<=x364));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x366 = UINT32_MAX;
	volatile int32_t x367 = 0;
	int16_t x368 = -2087;
	int32_t t91 = -245086319;

	t91 = ((x365<x366)+(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 18012845765352856LLU;
	int8_t x370 = -1;
	static int8_t x372 = INT8_MAX;
	volatile int32_t t92 = -22113747;

	t92 = ((x369<x370)+(x371<=x372));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MAX;
	static int16_t x375 = INT16_MIN;
	uint32_t x376 = 11917965U;

	t93 = ((x373<x374)+(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 39;
	volatile int64_t x378 = INT64_MAX;
	volatile uint8_t x379 = 37U;
	volatile int64_t x380 = INT64_MIN;
	int32_t t94 = 167332326;

	t94 = ((x377<x378)+(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	volatile int64_t x382 = 390769281087LL;
	volatile int8_t x384 = 27;
	volatile int32_t t95 = 466711;

	t95 = ((x381<x382)+(x383<=x384));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 25U;
	int16_t x386 = INT16_MIN;
	int8_t x387 = -1;
	volatile int16_t x388 = INT16_MIN;
	int32_t t96 = 357603873;

	t96 = ((x385<x386)+(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = 27378LL;
	volatile int64_t x391 = INT64_MIN;
	volatile int64_t x392 = INT64_MAX;

	t97 = ((x389<x390)+(x391<=x392));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -1LL;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = -1LL;

	t98 = ((x393<x394)+(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x399 = 259U;
	int32_t t99 = 0;

	t99 = ((x397<x398)+(x399<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

