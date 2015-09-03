#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -23045;
int32_t t3 = -2556929;
volatile int8_t x19 = INT8_MIN;
int64_t x22 = INT64_MIN;
uint64_t x23 = 92642602061874LLU;
uint64_t x28 = 68705636484969LLU;
int32_t t6 = 132500;
uint16_t x31 = 6839U;
volatile int32_t t7 = 11488043;
volatile int32_t x39 = INT32_MAX;
uint64_t x48 = UINT64_MAX;
uint64_t x56 = 10331593814LLU;
uint64_t x59 = 0LLU;
int8_t x65 = INT8_MAX;
volatile int32_t t16 = 53025676;
static uint32_t x69 = 224U;
int16_t x70 = 448;
static int32_t x71 = 465286303;
uint64_t x79 = UINT64_MAX;
uint8_t x94 = 114U;
volatile int16_t x96 = INT16_MIN;
int8_t x105 = INT8_MIN;
static int64_t x106 = 143711922449098489LL;
int64_t x108 = INT64_MAX;
static int16_t x115 = 217;
volatile uint32_t x116 = UINT32_MAX;
int16_t x119 = INT16_MAX;
volatile int32_t t29 = 56;
int64_t x122 = 16674630LL;
volatile int32_t t30 = 3235;
volatile int32_t x126 = INT32_MIN;
uint16_t x128 = UINT16_MAX;
int32_t x134 = 3309;
int64_t x136 = INT64_MIN;
int32_t x138 = -1063211035;
int32_t t35 = -29154;
int8_t x147 = INT8_MIN;
volatile int64_t x148 = INT64_MAX;
int8_t x150 = -1;
volatile uint16_t x172 = 7U;
int64_t x177 = -61271961641LL;
int32_t x180 = -1;
int32_t t45 = 1766711;
int32_t x189 = 487373524;
static int64_t x190 = 520427065955819LL;
uint64_t x193 = 53336304648557171LLU;
int32_t t48 = -46;
volatile int32_t t49 = 825159;
uint8_t x210 = UINT8_MAX;
int8_t x211 = INT8_MAX;
static volatile int8_t x214 = 3;
static int32_t x215 = INT32_MIN;
int32_t t53 = 65302139;
volatile uint16_t x223 = 3943U;
uint8_t x225 = UINT8_MAX;
volatile uint32_t x231 = 62U;
volatile int64_t x236 = INT64_MIN;
uint64_t x240 = UINT64_MAX;
volatile int32_t t59 = -60260210;
volatile int64_t x242 = -28688LL;
int64_t x251 = -2581705087334306700LL;
static uint8_t x253 = UINT8_MAX;
int8_t x256 = INT8_MIN;
int16_t x263 = 21;
volatile uint8_t x265 = UINT8_MAX;
static uint8_t x268 = 82U;
uint32_t x269 = UINT32_MAX;
static int64_t x274 = -29977376291LL;
volatile int8_t x276 = INT8_MIN;
int32_t x277 = -1;
int32_t x278 = INT32_MIN;
int8_t x286 = 15;
int32_t t71 = 92088147;
int64_t x292 = INT64_MIN;
int64_t x298 = INT64_MAX;
volatile int32_t t74 = 4295346;
uint32_t x306 = UINT32_MAX;
volatile uint32_t x309 = UINT32_MAX;
volatile int32_t t77 = 1236808;
uint32_t x317 = UINT32_MAX;
int16_t x318 = 8335;
uint64_t x331 = UINT64_MAX;
int32_t x332 = 35;
int32_t x333 = -98998;
int32_t x335 = INT32_MAX;
int16_t x337 = -5755;
static volatile int32_t t86 = 133;
int32_t x349 = INT32_MIN;
int64_t x352 = 63115745890861LL;
volatile int32_t t87 = 1429;
volatile int64_t x356 = -72755183051138596LL;
int32_t x358 = 33765519;
int8_t x359 = INT8_MIN;
static int32_t x368 = -1;
static int16_t x369 = -1;
uint16_t x376 = 0U;
volatile int16_t x384 = INT16_MAX;
int64_t x388 = -205LL;
static int64_t x391 = INT64_MAX;
int64_t x392 = INT64_MIN;
static int32_t t97 = -175680;
int8_t x397 = INT8_MIN;


void f0(void) {
	uint32_t x1 = 58337U;
	int64_t x2 = 160LL;
	int8_t x3 = -1;
	int64_t x4 = -1LL;
	volatile int32_t t0 = -7;

	t0 = (x1<((x2==x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = INT32_MIN;
	int64_t x7 = INT64_MAX;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -393840999;

	t1 = (x5<((x6==x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static volatile uint32_t x10 = UINT32_MAX;
	uint64_t x11 = 2022691850LLU;
	int8_t x12 = -1;

	t2 = (x9<((x10==x11)+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 605;
	int8_t x14 = 12;
	int8_t x15 = -3;
	int8_t x16 = INT8_MIN;

	t3 = (x13<((x14==x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static int8_t x18 = -1;
	int8_t x20 = -1;
	int32_t t4 = 10000867;

	t4 = (x17<((x18==x19)+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	static int32_t t5 = -132244126;

	t5 = (x21<((x22==x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = -1;
	static int8_t x26 = 22;
	volatile uint16_t x27 = UINT16_MAX;

	t6 = (x25<((x26==x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static uint16_t x30 = 297U;
	int64_t x32 = 9LL;

	t7 = (x29<((x30==x31)+x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	static uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 1118274LLU;
	int64_t x36 = INT64_MIN;
	int32_t t8 = -1258;

	t8 = (x33<((x34==x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	int8_t x38 = INT8_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 741;

	t9 = (x37<((x38==x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -752660;
	int8_t x42 = -1;
	uint8_t x43 = 1U;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 0;

	t10 = (x41<((x42==x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	volatile uint16_t x46 = 12U;
	int64_t x47 = -1LL;
	volatile int32_t t11 = -89102;

	t11 = (x45<((x46==x47)+x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MIN;
	static volatile int8_t x52 = 27;
	int32_t t12 = 64945263;

	t12 = (x49<((x50==x51)+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 28U;
	int32_t x54 = INT32_MAX;
	static int8_t x55 = -1;
	static volatile int32_t t13 = 307402;

	t13 = (x53<((x54==x55)+x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static int8_t x58 = 4;
	static int32_t x60 = -1;
	volatile int32_t t14 = 472674337;

	t14 = (x57<((x58==x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 5U;
	volatile int64_t x62 = -85LL;
	int64_t x63 = -5469LL;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 215404458;

	t15 = (x61<((x62==x63)+x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 1;
	volatile int32_t x67 = INT32_MIN;
	int64_t x68 = INT64_MAX;

	t16 = (x65<((x66==x67)+x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -52656;

	t17 = (x69<((x70==x71)+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = 1135199552LL;
	static volatile uint8_t x74 = 60U;
	int32_t x75 = INT32_MIN;
	static int32_t x76 = 11;
	static int32_t t18 = 1939;

	t18 = (x73<((x74==x75)+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -82;
	uint16_t x78 = 15U;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 242517;

	t19 = (x77<((x78==x79)+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = 21434520387LL;
	volatile int16_t x82 = INT16_MAX;
	static int64_t x83 = -3324417123LL;
	uint64_t x84 = 33457LLU;
	int32_t t20 = -2;

	t20 = (x81<((x82==x83)+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -7;
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = 7U;
	volatile int32_t t21 = -174;

	t21 = (x85<((x86==x87)+x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	uint8_t x90 = UINT8_MAX;
	static volatile int16_t x91 = -1;
	int16_t x92 = -1;
	int32_t t22 = 99271;

	t22 = (x89<((x90==x91)+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MAX;
	uint8_t x95 = UINT8_MAX;
	int32_t t23 = 16250;

	t23 = (x93<((x94==x95)+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	volatile uint64_t x98 = UINT64_MAX;
	int8_t x99 = -1;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = -12;

	t24 = (x97<((x98==x99)+x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 1U;
	static int32_t x102 = -1;
	int16_t x103 = INT16_MAX;
	static volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 17;

	t25 = (x101<((x102==x103)+x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x107 = 261U;
	int32_t t26 = 42045;

	t26 = (x105<((x106==x107)+x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = 29;
	uint8_t x111 = 0U;
	static uint64_t x112 = UINT64_MAX;
	int32_t t27 = -1;

	t27 = (x109<((x110==x111)+x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	static int32_t x114 = INT32_MAX;
	volatile int32_t t28 = -140079;

	t28 = (x113<((x114==x115)+x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	static int16_t x120 = INT16_MAX;

	t29 = (x117<((x118==x119)+x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -40;
	int64_t x123 = INT64_MAX;
	volatile int64_t x124 = 1639424LL;

	t30 = (x121<((x122==x123)+x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	volatile uint32_t x127 = UINT32_MAX;
	volatile int32_t t31 = 134997;

	t31 = (x125<((x126==x127)+x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	int64_t x130 = -4082LL;
	int64_t x131 = -4332555696045683902LL;
	volatile int64_t x132 = INT64_MAX;
	int32_t t32 = -10830512;

	t32 = (x129<((x130==x131)+x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x133 = 12051348;
	uint32_t x135 = UINT32_MAX;
	volatile int32_t t33 = -27777;

	t33 = (x133<((x134==x135)+x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 56U;
	static int8_t x139 = 1;
	static uint16_t x140 = 936U;
	volatile int32_t t34 = 2885914;

	t34 = (x137<((x138==x139)+x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	uint16_t x142 = 7U;
	uint16_t x143 = UINT16_MAX;
	volatile int32_t x144 = 30364821;

	t35 = (x141<((x142==x143)+x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -14576564687LL;
	uint64_t x146 = 12783639LLU;
	volatile int32_t t36 = -3;

	t36 = (x145<((x146==x147)+x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	static volatile int32_t x151 = INT32_MIN;
	uint32_t x152 = 75465U;
	static int32_t t37 = -2498;

	t37 = (x149<((x150==x151)+x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static int8_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	uint16_t x156 = 162U;
	int32_t t38 = 6980;

	t38 = (x153<((x154==x155)+x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = 0;
	int64_t x158 = -1LL;
	int16_t x159 = INT16_MAX;
	static int8_t x160 = -21;
	static volatile int32_t t39 = 361;

	t39 = (x157<((x158==x159)+x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MAX;
	int16_t x162 = INT16_MIN;
	static int32_t x163 = 121836;
	uint16_t x164 = 0U;
	static int32_t t40 = 103;

	t40 = (x161<((x162==x163)+x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 43U;
	volatile int64_t x166 = INT64_MIN;
	uint32_t x167 = 46803U;
	volatile int8_t x168 = 6;
	volatile int32_t t41 = -8288;

	t41 = (x165<((x166==x167)+x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static int64_t x170 = INT64_MAX;
	int16_t x171 = -1;
	int32_t t42 = -101;

	t42 = (x169<((x170==x171)+x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 77U;
	int64_t x174 = -1000600185928969277LL;
	int32_t x175 = INT32_MIN;
	int64_t x176 = 3001626746389270549LL;
	int32_t t43 = -41075571;

	t43 = (x173<((x174==x175)+x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = 7;
	uint64_t x179 = 2979017531331651LLU;
	volatile int32_t t44 = -55326;

	t44 = (x177<((x178==x179)+x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 37744590LLU;
	volatile uint8_t x182 = 7U;
	static volatile uint8_t x183 = 1U;
	uint32_t x184 = 1463U;

	t45 = (x181<((x182==x183)+x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile int8_t x186 = INT8_MAX;
	uint64_t x187 = 1674008919LLU;
	volatile int32_t x188 = -11;
	volatile int32_t t46 = -69059;

	t46 = (x185<((x186==x187)+x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x191 = INT16_MAX;
	int8_t x192 = -1;
	volatile int32_t t47 = -21;

	t47 = (x189<((x190==x191)+x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	int32_t x196 = -68;

	t48 = (x193<((x194==x195)+x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MAX;
	int8_t x200 = -60;

	t49 = (x197<((x198==x199)+x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -950;
	int8_t x202 = INT8_MAX;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 0;

	t50 = (x201<((x202==x203)+x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = 46159LL;
	static uint32_t x206 = 35261U;
	int64_t x207 = -1LL;
	int32_t x208 = -1;
	static int32_t t51 = 28357;

	t51 = (x205<((x206==x207)+x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static uint16_t x212 = 796U;
	volatile int32_t t52 = 2075191;

	t52 = (x209<((x210==x211)+x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 1920U;
	uint8_t x216 = 85U;

	t53 = (x213<((x214==x215)+x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 1;
	volatile int64_t x218 = INT64_MIN;
	uint8_t x219 = 103U;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 84;

	t54 = (x217<((x218==x219)+x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = 1;
	uint16_t x222 = UINT16_MAX;
	int64_t x224 = INT64_MIN;
	int32_t t55 = -1141266;

	t55 = (x221<((x222==x223)+x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	static int16_t x227 = INT16_MAX;
	int64_t x228 = 120398735825434991LL;
	int32_t t56 = -1;

	t56 = (x225<((x226==x227)+x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 13U;
	uint32_t x230 = UINT32_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t57 = -2255225;

	t57 = (x229<((x230==x231)+x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MAX;
	uint8_t x234 = 13U;
	static uint8_t x235 = 20U;
	volatile int32_t t58 = -5;

	t58 = (x233<((x234==x235)+x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int32_t x238 = -1;
	int64_t x239 = 4095941952LL;

	t59 = (x237<((x238==x239)+x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x243 = -1;
	uint16_t x244 = UINT16_MAX;
	static int32_t t60 = 52;

	t60 = (x241<((x242==x243)+x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = UINT64_MAX;
	int16_t x247 = -1;
	static uint8_t x248 = 26U;
	volatile int32_t t61 = -922375132;

	t61 = (x245<((x246==x247)+x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 747;
	int64_t x250 = INT64_MAX;
	uint8_t x252 = 125U;
	static int32_t t62 = 1;

	t62 = (x249<((x250==x251)+x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = -1LL;
	uint64_t x255 = UINT64_MAX;
	int32_t t63 = -16586;

	t63 = (x253<((x254==x255)+x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 480LLU;
	int16_t x258 = INT16_MAX;
	static volatile int8_t x259 = 3;
	volatile int8_t x260 = INT8_MIN;
	int32_t t64 = -501118;

	t64 = (x257<((x258==x259)+x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = 12500283469131150LLU;
	uint8_t x262 = 83U;
	int64_t x264 = INT64_MAX;
	int32_t t65 = -55;

	t65 = (x261<((x262==x263)+x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x266 = 11LLU;
	uint64_t x267 = UINT64_MAX;
	int32_t t66 = -662;

	t66 = (x265<((x266==x267)+x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x270 = 703715563U;
	uint64_t x271 = 316896084249873LLU;
	volatile uint8_t x272 = 78U;
	volatile int32_t t67 = -29;

	t67 = (x269<((x270==x271)+x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	int8_t x275 = -9;
	volatile int32_t t68 = -1030975444;

	t68 = (x273<((x274==x275)+x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x279 = UINT64_MAX;
	static volatile int32_t x280 = INT32_MAX;
	static int32_t t69 = -781;

	t69 = (x277<((x278==x279)+x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = 3;
	int8_t x282 = 0;
	volatile int64_t x283 = INT64_MIN;
	static volatile int64_t x284 = INT64_MAX;
	volatile int32_t t70 = -12290531;

	t70 = (x281<((x282==x283)+x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 0U;
	int8_t x287 = -1;
	int64_t x288 = INT64_MAX;

	t71 = (x285<((x286==x287)+x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = 31U;
	int16_t x290 = 2723;
	volatile int16_t x291 = INT16_MIN;
	volatile int32_t t72 = -137042566;

	t72 = (x289<((x290==x291)+x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int64_t x294 = -1LL;
	static int64_t x295 = -126945773246LL;
	volatile int8_t x296 = INT8_MIN;
	static volatile int32_t t73 = -2161;

	t73 = (x293<((x294==x295)+x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 1U;
	uint32_t x299 = UINT32_MAX;
	uint16_t x300 = 812U;

	t74 = (x297<((x298==x299)+x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int16_t x302 = 4196;
	volatile int16_t x303 = INT16_MAX;
	volatile int32_t x304 = 28734608;
	volatile int32_t t75 = 6053;

	t75 = (x301<((x302==x303)+x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -2;
	int8_t x307 = -1;
	uint32_t x308 = 270595862U;
	int32_t t76 = -263753009;

	t76 = (x305<((x306==x307)+x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = 15243378163253819LLU;
	volatile int64_t x311 = -233072314LL;
	int16_t x312 = -1;

	t77 = (x309<((x310==x311)+x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MAX;
	volatile int64_t x314 = -3995972761LL;
	volatile uint32_t x315 = 159U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -5576613;

	t78 = (x313<((x314==x315)+x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x319 = 31621U;
	static volatile uint8_t x320 = UINT8_MAX;
	static int32_t t79 = 709;

	t79 = (x317<((x318==x319)+x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -64604917578176706LL;
	int64_t x322 = 46154686047822556LL;
	uint16_t x323 = 2U;
	int64_t x324 = INT64_MIN;
	static int32_t t80 = 30;

	t80 = (x321<((x322==x323)+x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MIN;
	uint32_t x326 = 638218U;
	volatile int16_t x327 = INT16_MIN;
	int64_t x328 = -1LL;
	int32_t t81 = -246;

	t81 = (x325<((x326==x327)+x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x329 = INT64_MIN;
	int64_t x330 = 4208LL;
	int32_t t82 = -2020;

	t82 = (x329<((x330==x331)+x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x334 = -391924895LL;
	uint64_t x336 = UINT64_MAX;
	static volatile int32_t t83 = 17219;

	t83 = (x333<((x334==x335)+x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = 0;
	volatile int8_t x339 = INT8_MIN;
	int16_t x340 = -3882;
	volatile int32_t t84 = 13;

	t84 = (x337<((x338==x339)+x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	uint16_t x342 = UINT16_MAX;
	volatile int64_t x343 = INT64_MIN;
	uint32_t x344 = UINT32_MAX;
	int32_t t85 = 149028253;

	t85 = (x341<((x342==x343)+x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MAX;
	int8_t x347 = -6;
	int32_t x348 = INT32_MIN;

	t86 = (x345<((x346==x347)+x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -1;
	volatile int8_t x351 = -1;

	t87 = (x349<((x350==x351)+x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 0U;
	static uint64_t x354 = 9120670852585LLU;
	static int8_t x355 = INT8_MIN;
	static int32_t t88 = 1;

	t88 = (x353<((x354==x355)+x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = 13755U;
	volatile int32_t x360 = INT32_MIN;
	int32_t t89 = -37;

	t89 = (x357<((x358==x359)+x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	static uint32_t x362 = UINT32_MAX;
	uint64_t x363 = 363153698250LLU;
	int32_t x364 = INT32_MIN;
	int32_t t90 = 181813309;

	t90 = (x361<((x362==x363)+x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = 0;
	static volatile int32_t t91 = -65;

	t91 = (x365<((x366==x367)+x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -45278580799389LL;
	uint8_t x371 = 44U;
	static volatile int16_t x372 = -1;
	volatile int32_t t92 = -12;

	t92 = (x369<((x370==x371)+x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 2145;
	int8_t x374 = -1;
	int32_t x375 = INT32_MAX;
	volatile int32_t t93 = 144808555;

	t93 = (x373<((x374==x375)+x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -843837635LL;
	static volatile uint16_t x378 = UINT16_MAX;
	uint64_t x379 = 375025901950LLU;
	int8_t x380 = -15;
	static volatile int32_t t94 = 10;

	t94 = (x377<((x378==x379)+x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = INT8_MAX;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	int32_t t95 = -6;

	t95 = (x381<((x382==x383)+x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MIN;
	static int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MAX;
	static volatile int32_t t96 = -587893;

	t96 = (x385<((x386==x387)+x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -12;
	int32_t x390 = 3637737;

	t97 = (x389<((x390==x391)+x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int32_t x394 = -1;
	int8_t x395 = -1;
	static int8_t x396 = 15;
	int32_t t98 = 939;

	t98 = (x393<((x394==x395)+x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	volatile int32_t x400 = -7123809;
	int32_t t99 = 29934;

	t99 = (x397<((x398==x399)+x400));

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

