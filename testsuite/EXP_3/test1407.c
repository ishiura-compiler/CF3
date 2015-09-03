#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 9708U;
static uint64_t x10 = 3338552075284515LLU;
uint64_t x16 = 133800399809087559LLU;
uint32_t t2 = 6140U;
int64_t x19 = INT64_MAX;
int32_t t3 = -667830;
uint32_t x23 = 671U;
int8_t x34 = INT8_MAX;
volatile int32_t x39 = INT32_MIN;
uint64_t x41 = 42501973346LLU;
int8_t x44 = 2;
int32_t x56 = -1;
uint64_t t12 = 595178176552087LLU;
int32_t x61 = -1;
volatile int32_t t14 = 128751244;
uint64_t x66 = 2319746609043742LLU;
static uint32_t x67 = UINT32_MAX;
uint16_t x68 = 416U;
volatile int16_t x69 = INT16_MIN;
uint8_t x71 = UINT8_MAX;
volatile uint64_t t16 = 671141522485732145LLU;
uint8_t x73 = 2U;
int16_t x75 = INT16_MIN;
volatile int32_t t17 = -300876253;
int64_t x79 = INT64_MAX;
uint8_t x83 = 6U;
volatile int16_t x86 = -3;
int16_t x88 = INT16_MAX;
int8_t x111 = INT8_MAX;
int64_t t26 = 146489395340373193LL;
int8_t x125 = INT8_MIN;
volatile uint16_t x131 = 12556U;
int8_t x134 = INT8_MIN;
int64_t x135 = INT64_MIN;
volatile uint16_t x138 = UINT16_MAX;
int64_t x147 = 0LL;
int32_t x149 = -116168588;
uint16_t x160 = 2964U;
uint64_t t38 = 380138LLU;
int16_t x169 = 98;
static volatile int8_t x170 = -1;
uint64_t x176 = UINT64_MAX;
static volatile uint64_t x178 = UINT64_MAX;
static int64_t x179 = INT64_MIN;
uint16_t x181 = 7769U;
uint32_t x183 = 127377112U;
int32_t t44 = -29777585;
static volatile int16_t x192 = INT16_MIN;
int64_t x200 = -1LL;
int8_t x203 = -1;
uint64_t t49 = 1610LLU;
uint16_t x210 = UINT16_MAX;
static volatile int64_t t50 = 213074258318LL;
int64_t x220 = -1LL;
volatile int16_t x222 = -1;
int32_t t54 = -4;
int64_t x230 = 81534437753501LL;
volatile int64_t x232 = -36594065703LL;
int32_t x235 = INT32_MIN;
volatile int64_t x236 = INT64_MAX;
uint32_t x237 = 33293722U;
static volatile uint64_t x241 = 23719LLU;
static uint32_t x242 = 385U;
static uint64_t x246 = 326873498174441623LLU;
volatile uint64_t t59 = 2812315170324LLU;
uint16_t x256 = 1U;
int32_t t60 = 711;
int8_t x270 = INT8_MAX;
uint16_t x271 = UINT16_MAX;
int32_t x273 = INT32_MIN;
uint32_t x276 = UINT32_MAX;
int8_t x282 = -5;
uint32_t x283 = UINT32_MAX;
uint8_t x291 = 7U;
volatile int32_t t69 = 731344;
uint16_t x298 = UINT16_MAX;
int32_t t71 = 362;
int64_t x302 = INT64_MIN;
volatile int32_t x307 = 0;
uint8_t x309 = 39U;
static int8_t x312 = INT8_MIN;
int16_t x317 = -1;
volatile int16_t x329 = INT16_MIN;
volatile uint32_t x331 = 67877199U;
int32_t t79 = -36;
uint8_t x334 = UINT8_MAX;
volatile int8_t x344 = INT8_MIN;
static int8_t x349 = 42;
uint8_t x351 = UINT8_MAX;
uint16_t x352 = 1U;
int16_t x360 = INT16_MAX;
uint64_t x363 = UINT64_MAX;
volatile uint32_t t90 = 904U;
int64_t x380 = -1LL;
int64_t x381 = INT64_MIN;
static volatile uint16_t x383 = 2U;
static int32_t x388 = INT32_MIN;
uint16_t x390 = UINT16_MAX;
uint64_t x392 = 308648473887LLU;
volatile int16_t x397 = -1;
int32_t x411 = 68950;
int8_t x412 = -1;


void f0(void) {
	int8_t x1 = -7;
	static int8_t x2 = -1;
	volatile uint32_t x4 = 15807130U;
	volatile int32_t t0 = -327947738;

	t0 = ((x1%x2)*(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MAX;
	uint8_t x11 = 67U;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t1 = 2904983045LLU;

	t1 = ((x9%x10)*(x11<x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -50;
	static uint32_t x14 = 1277706399U;
	int32_t x15 = INT32_MIN;

	t2 = ((x13%x14)*(x15<x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -17901;
	static uint16_t x18 = 783U;
	uint32_t x20 = UINT32_MAX;

	t3 = ((x17%x18)*(x19<x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	uint16_t x22 = 5346U;
	volatile uint32_t x24 = 111045493U;
	static volatile int32_t t4 = 21;

	t4 = ((x21%x22)*(x23<x24));

	if (t4 != 691) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = 9059275572854LL;
	volatile int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 1U;
	static int64_t t5 = 28417438LL;

	t5 = ((x25%x26)*(x27<x28));

	if (t5 != 1654LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -9;
	static int64_t x30 = -39LL;
	static int8_t x31 = 11;
	int8_t x32 = -1;
	volatile int64_t t6 = 114276811LL;

	t6 = ((x29%x30)*(x31<x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 331755690;
	int8_t x35 = 29;
	int64_t x36 = INT64_MAX;
	int32_t t7 = -3;

	t7 = ((x33%x34)*(x35<x36));

	if (t7 != 67) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -26389021630LL;
	static int32_t x38 = INT32_MIN;
	static int64_t x40 = -58082638494707LL;
	volatile int64_t t8 = -258646597LL;

	t8 = ((x37%x38)*(x39<x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -2471469880259086672LL;
	int64_t x43 = -1LL;
	volatile uint64_t t9 = 3268558879209142LLU;

	t9 = ((x41%x42)*(x43<x44));

	if (t9 != 42501973346LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x45 = 62U;
	uint8_t x46 = UINT8_MAX;
	static int64_t x47 = 156LL;
	int32_t x48 = -1;
	volatile int32_t t10 = 287;

	t10 = ((x45%x46)*(x47<x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = -173971;
	static volatile int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MIN;
	int64_t x52 = 225653060290521LL;
	volatile int32_t t11 = -1336;

	t11 = ((x49%x50)*(x51<x52));

	if (t11 != -10136) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 3U;
	uint64_t x54 = UINT64_MAX;
	uint32_t x55 = UINT32_MAX;

	t12 = ((x53%x54)*(x55<x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 6LLU;
	int32_t x58 = INT32_MAX;
	static uint16_t x59 = 2U;
	volatile int64_t x60 = INT64_MIN;
	static volatile uint64_t t13 = 366039044535LLU;

	t13 = ((x57%x58)*(x59<x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x62 = -1;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MIN;

	t14 = ((x61%x62)*(x63<x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	volatile uint64_t t15 = 32934053794413LLU;

	t15 = ((x65%x66)*(x67<x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x70 = UINT64_MAX;
	uint32_t x72 = UINT32_MAX;

	t16 = ((x69%x70)*(x71<x72));

	if (t16 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x74 = -59;
	uint16_t x76 = UINT16_MAX;

	t17 = ((x73%x74)*(x75<x76));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t18 = 6552;

	t18 = ((x77%x78)*(x79<x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 2LLU;
	int16_t x82 = INT16_MAX;
	int64_t x84 = -312584287747LL;
	volatile uint64_t t19 = 2508826713762984135LLU;

	t19 = ((x81%x82)*(x83<x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = INT64_MIN;
	volatile int16_t x87 = 14;
	int64_t t20 = -243164139571LL;

	t20 = ((x85%x86)*(x87<x88));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 3243U;
	int32_t x90 = -1;
	uint32_t x91 = 1967U;
	static volatile uint16_t x92 = UINT16_MAX;
	volatile uint32_t t21 = 31692080U;

	t21 = ((x89%x90)*(x91<x92));

	if (t21 != 3243U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x98 = INT64_MAX;
	volatile int64_t x99 = INT64_MAX;
	int16_t x100 = INT16_MIN;
	int64_t t22 = -117174802310586452LL;

	t22 = ((x97%x98)*(x99<x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = 5148U;
	volatile int8_t x103 = 1;
	int64_t x104 = INT64_MAX;
	volatile uint32_t t23 = 214666U;

	t23 = ((x101%x102)*(x103<x104));

	if (t23 != 4460U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 5U;
	static uint32_t x106 = 707U;
	static int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	uint32_t t24 = 1192106U;

	t24 = ((x105%x106)*(x107<x108));

	if (t24 != 5U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	volatile int32_t x110 = INT32_MIN;
	uint32_t x112 = 6U;
	volatile int32_t t25 = -212230;

	t25 = ((x109%x110)*(x111<x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	volatile int8_t x114 = -1;
	uint64_t x115 = 92915LLU;
	volatile int8_t x116 = 3;

	t26 = ((x113%x114)*(x115<x116));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x118 = 14U;
	static int16_t x119 = INT16_MIN;
	static int16_t x120 = INT16_MIN;
	volatile int64_t t27 = 834229LL;

	t27 = ((x117%x118)*(x119<x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = -1;
	static volatile uint16_t x123 = UINT16_MAX;
	static int16_t x124 = INT16_MIN;
	volatile int64_t t28 = 3441001938612675696LL;

	t28 = ((x121%x122)*(x123<x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x126 = 390523962U;
	int32_t x127 = -66261248;
	volatile int16_t x128 = INT16_MIN;
	volatile uint32_t t29 = 4U;

	t29 = ((x125%x126)*(x127<x128));

	if (t29 != 389727548U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x130 = UINT8_MAX;
	static uint32_t x132 = UINT32_MAX;
	int64_t t30 = -65591481LL;

	t30 = ((x129%x130)*(x131<x132));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	uint8_t x136 = 18U;
	volatile int32_t t31 = -1;

	t31 = ((x133%x134)*(x135<x136));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x137 = 3U;
	int64_t x139 = -1LL;
	int8_t x140 = -1;
	volatile uint32_t t32 = 24182038U;

	t32 = ((x137%x138)*(x139<x140));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	volatile uint64_t x142 = 161752843738361LLU;
	volatile uint16_t x143 = 1U;
	int16_t x144 = INT16_MAX;
	uint64_t t33 = 0LLU;

	t33 = ((x141%x142)*(x143<x144));

	if (t33 != 126268099386453LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = 2288548U;
	int64_t x148 = INT64_MIN;
	uint64_t t34 = 808532744LLU;

	t34 = ((x145%x146)*(x147<x148));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x150 = 1082U;
	int16_t x151 = -8;
	volatile uint8_t x152 = 11U;
	volatile int32_t t35 = 2;

	t35 = ((x149%x150)*(x151<x152));

	if (t35 != -740) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 1426;
	static int64_t x154 = -967003170LL;
	uint8_t x155 = 18U;
	int8_t x156 = INT8_MIN;
	static int64_t t36 = -269479098999791LL;

	t36 = ((x153%x154)*(x155<x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1730;
	volatile int64_t x158 = -1LL;
	uint64_t x159 = 434418251LLU;
	static int64_t t37 = 121499206837042LL;

	t37 = ((x157%x158)*(x159<x160));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MIN;
	uint64_t x162 = UINT64_MAX;
	static volatile int32_t x163 = 7;
	int16_t x164 = INT16_MIN;

	t38 = ((x161%x162)*(x163<x164));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = 15;
	static int16_t x166 = -1;
	static int32_t x167 = 30399190;
	int16_t x168 = INT16_MIN;
	volatile int32_t t39 = -762805038;

	t39 = ((x165%x166)*(x167<x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x171 = -1LL;
	volatile int16_t x172 = INT16_MIN;
	int32_t t40 = -39413;

	t40 = ((x169%x170)*(x171<x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1685599897223LL;
	int8_t x174 = -1;
	uint16_t x175 = 99U;
	int64_t t41 = 4084729001926877569LL;

	t41 = ((x173%x174)*(x175<x176));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -1LL;
	static int8_t x180 = -1;
	uint64_t t42 = 20421LLU;

	t42 = ((x177%x178)*(x179<x180));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = INT16_MAX;
	volatile uint8_t x184 = 123U;
	int32_t t43 = -85240;

	t43 = ((x181%x182)*(x183<x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = 3;
	volatile int32_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MAX;

	t44 = ((x185%x186)*(x187<x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 1711439386405684LLU;
	int32_t x190 = -11410279;
	int64_t x191 = -1LL;
	uint64_t t45 = 1316LLU;

	t45 = ((x189%x190)*(x191<x192));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x193 = -1;
	static int64_t x194 = INT64_MIN;
	volatile int32_t x195 = 12751543;
	static int8_t x196 = INT8_MAX;
	volatile int64_t t46 = 108089LL;

	t46 = ((x193%x194)*(x195<x196));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = 0;
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MAX;
	volatile int64_t t47 = -1078709586028LL;

	t47 = ((x197%x198)*(x199<x200));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	uint64_t x202 = 866LLU;
	uint64_t x204 = 1199LLU;
	volatile uint64_t t48 = 89649925LLU;

	t48 = ((x201%x202)*(x203<x204));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	int32_t x208 = 984590767;

	t49 = ((x205%x206)*(x207<x208));

	if (t49 != 32767LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MAX;
	volatile int32_t x211 = 189357529;
	volatile uint8_t x212 = UINT8_MAX;

	t50 = ((x209%x210)*(x211<x212));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x213 = UINT32_MAX;
	int8_t x214 = -6;
	static uint8_t x215 = 117U;
	int8_t x216 = INT8_MAX;
	uint32_t t51 = 2762842U;

	t51 = ((x213%x214)*(x215<x216));

	if (t51 != 5U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -2;
	volatile int8_t x218 = INT8_MAX;
	volatile int32_t x219 = INT32_MAX;
	int32_t t52 = 37083;

	t52 = ((x217%x218)*(x219<x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = UINT32_MAX;
	static int64_t x223 = INT64_MIN;
	static volatile int64_t x224 = 8440LL;
	static volatile uint32_t t53 = 1930192371U;

	t53 = ((x221%x222)*(x223<x224));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = 2U;
	static volatile uint8_t x226 = UINT8_MAX;
	volatile int16_t x227 = 1048;
	int8_t x228 = -1;

	t54 = ((x225%x226)*(x227<x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x229 = INT64_MAX;
	uint16_t x231 = 2481U;
	volatile int64_t t55 = -2648711735803798395LL;

	t55 = ((x229%x230)*(x231<x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 43U;
	uint8_t x234 = 66U;
	volatile int32_t t56 = -116;

	t56 = ((x233%x234)*(x235<x236));

	if (t56 != 43) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x238 = -1;
	int32_t x239 = 166605;
	uint8_t x240 = 3U;
	volatile uint32_t t57 = 30878719U;

	t57 = ((x237%x238)*(x239<x240));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x243 = 6U;
	int32_t x244 = INT32_MIN;
	volatile uint64_t t58 = 10790768943LLU;

	t58 = ((x241%x242)*(x243<x244));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = 406LL;
	uint8_t x247 = 2U;
	volatile uint8_t x248 = UINT8_MAX;

	t59 = ((x245%x246)*(x247<x248));

	if (t59 != 406LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = -41;
	volatile uint8_t x254 = 12U;
	volatile int64_t x255 = INT64_MAX;

	t60 = ((x253%x254)*(x255<x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = -1;
	uint64_t x258 = UINT64_MAX;
	static int32_t x259 = -1;
	int64_t x260 = INT64_MIN;
	uint64_t t61 = 280004559156906LLU;

	t61 = ((x257%x258)*(x259<x260));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	static uint8_t x262 = 44U;
	int32_t x263 = INT32_MAX;
	volatile uint64_t x264 = 24LLU;
	volatile int32_t t62 = 1011395312;

	t62 = ((x261%x262)*(x263<x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = INT32_MIN;
	int16_t x266 = -1;
	static uint32_t x267 = 14U;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t63 = -14817956;

	t63 = ((x265%x266)*(x267<x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x269 = 25;
	volatile int8_t x272 = INT8_MIN;
	int32_t t64 = -4;

	t64 = ((x269%x270)*(x271<x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x274 = INT8_MIN;
	static int64_t x275 = -49LL;
	volatile int32_t t65 = 116570761;

	t65 = ((x273%x274)*(x275<x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MAX;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = 30185LLU;
	volatile int32_t x280 = -30681571;
	int32_t t66 = -1691302;

	t66 = ((x277%x278)*(x279<x280));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = INT64_MIN;
	volatile uint32_t x284 = 149U;
	int64_t t67 = -190875139943LL;

	t67 = ((x281%x282)*(x283<x284));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x285 = INT16_MIN;
	volatile uint64_t x286 = 15632530051703446LLU;
	int64_t x287 = -723LL;
	volatile int16_t x288 = 66;
	static uint64_t t68 = 2LLU;

	t68 = ((x285%x286)*(x287<x288));

	if (t68 != 358612699452568LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x289 = 10U;
	volatile uint8_t x290 = UINT8_MAX;
	uint8_t x292 = 6U;

	t69 = ((x289%x290)*(x291<x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	static volatile int32_t x295 = -710;
	int8_t x296 = INT8_MIN;
	static int32_t t70 = -6;

	t70 = ((x293%x294)*(x295<x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x297 = -27;
	int8_t x299 = INT8_MIN;
	uint8_t x300 = 2U;

	t71 = ((x297%x298)*(x299<x300));

	if (t71 != -27) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -1;
	int8_t x303 = INT8_MAX;
	uint16_t x304 = UINT16_MAX;
	static int64_t t72 = 41001661429LL;

	t72 = ((x301%x302)*(x303<x304));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MAX;
	int64_t x306 = INT64_MIN;
	int8_t x308 = -1;
	static int64_t t73 = 121590604696763LL;

	t73 = ((x305%x306)*(x307<x308));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x310 = INT8_MIN;
	uint32_t x311 = 125012377U;
	volatile int32_t t74 = -5611151;

	t74 = ((x309%x310)*(x311<x312));

	if (t74 != 39) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = 5950611;
	static int64_t x314 = INT64_MAX;
	uint32_t x315 = 2U;
	volatile int8_t x316 = INT8_MIN;
	int64_t t75 = -122LL;

	t75 = ((x313%x314)*(x315<x316));

	if (t75 != 5950611LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = -6;
	static int64_t x320 = INT64_MIN;
	static volatile uint64_t t76 = 3489812096806LLU;

	t76 = ((x317%x318)*(x319<x320));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = UINT16_MAX;
	static int16_t x322 = INT16_MAX;
	uint32_t x323 = 888615522U;
	static int16_t x324 = 12;
	static int32_t t77 = -19737;

	t77 = ((x321%x322)*(x323<x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = UINT16_MAX;
	int32_t x326 = INT32_MAX;
	int8_t x327 = INT8_MAX;
	static int8_t x328 = -1;
	int32_t t78 = -6368;

	t78 = ((x325%x326)*(x327<x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x330 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;

	t79 = ((x329%x330)*(x331<x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 2034U;
	volatile int32_t x335 = 28952;
	uint16_t x336 = 11U;
	int32_t t80 = -4;

	t80 = ((x333%x334)*(x335<x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MAX;
	int16_t x339 = -1;
	uint8_t x340 = UINT8_MAX;
	int64_t t81 = 0LL;

	t81 = ((x337%x338)*(x339<x340));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x341 = 22U;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = 62343;
	volatile int32_t t82 = -254;

	t82 = ((x341%x342)*(x343<x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -136LL;
	int8_t x346 = 10;
	uint16_t x347 = 14U;
	static uint64_t x348 = UINT64_MAX;
	int64_t t83 = 905818362660LL;

	t83 = ((x345%x346)*(x347<x348));

	if (t83 != -6LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x350 = UINT16_MAX;
	int32_t t84 = 15153295;

	t84 = ((x349%x350)*(x351<x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x353 = INT32_MAX;
	static uint8_t x354 = UINT8_MAX;
	int8_t x355 = -1;
	int8_t x356 = 38;
	volatile int32_t t85 = 2;

	t85 = ((x353%x354)*(x355<x356));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x357 = UINT16_MAX;
	uint8_t x358 = 30U;
	uint16_t x359 = 589U;
	int32_t t86 = -13;

	t86 = ((x357%x358)*(x359<x360));

	if (t86 != 15) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x362 = 6345;
	uint16_t x364 = 26012U;
	volatile int32_t t87 = 443137;

	t87 = ((x361%x362)*(x363<x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = 3;
	volatile uint8_t x366 = 1U;
	int32_t x367 = 6698218;
	uint8_t x368 = 0U;
	static int32_t t88 = -10;

	t88 = ((x365%x366)*(x367<x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = 332414371;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = 54011U;
	volatile int64_t x372 = -89419160LL;
	int32_t t89 = -31;

	t89 = ((x369%x370)*(x371<x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x373 = 0U;
	volatile uint16_t x374 = UINT16_MAX;
	uint32_t x375 = 10512U;
	int32_t x376 = 16435;

	t90 = ((x373%x374)*(x375<x376));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MIN;
	uint64_t x378 = 1124958345713259332LLU;
	static uint8_t x379 = 0U;
	uint64_t t91 = 6LLU;

	t91 = ((x377%x378)*(x379<x380));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x382 = 654920U;
	int8_t x384 = -1;
	int64_t t92 = -392567LL;

	t92 = ((x381%x382)*(x383<x384));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x385 = 0U;
	uint8_t x386 = UINT8_MAX;
	volatile int16_t x387 = INT16_MAX;
	volatile int32_t t93 = 73658;

	t93 = ((x385%x386)*(x387<x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x389 = 2076U;
	static int16_t x391 = INT16_MIN;
	int32_t t94 = 1727588;

	t94 = ((x389%x390)*(x391<x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = -1;
	volatile int8_t x394 = INT8_MIN;
	volatile int32_t x395 = -1;
	static int64_t x396 = INT64_MIN;
	int32_t t95 = 83342243;

	t95 = ((x393%x394)*(x395<x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x398 = 2472235;
	uint64_t x399 = 14LLU;
	int64_t x400 = -1LL;
	volatile int32_t t96 = -2017;

	t96 = ((x397%x398)*(x399<x400));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	uint64_t x403 = 604LLU;
	int32_t x404 = INT32_MIN;
	int32_t t97 = 2;

	t97 = ((x401%x402)*(x403<x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 7U;
	volatile int64_t x406 = INT64_MIN;
	uint32_t x407 = UINT32_MAX;
	int32_t x408 = INT32_MIN;
	static int64_t t98 = -54LL;

	t98 = ((x405%x406)*(x407<x408));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = 6591;
	int16_t x410 = INT16_MAX;
	int32_t t99 = 33046437;

	t99 = ((x409%x410)*(x411<x412));

	if (t99 != 0) { NG(); } else { ; }
	
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

