#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x12 = -1;
int16_t x17 = INT16_MAX;
static int8_t x19 = -1;
static uint64_t x20 = 7603055129807LLU;
static volatile int32_t t4 = 44;
volatile int16_t x25 = INT16_MIN;
uint32_t x29 = 14U;
int64_t x39 = -2693753328LL;
static volatile int16_t x41 = -1;
static int32_t t11 = 1608;
int8_t x54 = INT8_MIN;
uint16_t x55 = 3U;
volatile uint32_t x66 = 353553601U;
int8_t x67 = INT8_MAX;
int16_t x71 = INT16_MIN;
int8_t x77 = 13;
int64_t x79 = -1LL;
static volatile int8_t x80 = INT8_MIN;
uint8_t x93 = 3U;
static uint32_t x94 = UINT32_MAX;
int64_t x103 = INT64_MIN;
uint64_t x104 = 4252479314377LLU;
int32_t t25 = -278;
int32_t x105 = INT32_MIN;
int16_t x113 = INT16_MAX;
static uint8_t x121 = UINT8_MAX;
volatile uint8_t x125 = 95U;
static uint16_t x129 = 88U;
int8_t x130 = INT8_MAX;
static int32_t t32 = -30956;
int16_t x144 = INT16_MAX;
static int32_t t35 = -5;
volatile int32_t x147 = INT32_MAX;
uint8_t x153 = 6U;
static int32_t x167 = INT32_MIN;
int8_t x168 = INT8_MAX;
static int32_t t42 = -6;
int16_t x175 = INT16_MAX;
static uint64_t x176 = UINT64_MAX;
int16_t x177 = INT16_MAX;
int32_t t44 = 50;
uint8_t x186 = 1U;
int8_t x196 = INT8_MAX;
volatile int16_t x199 = 3;
uint16_t x201 = 100U;
volatile int32_t t51 = 993586717;
volatile int32_t t53 = -482;
volatile uint32_t x222 = UINT32_MAX;
int32_t t56 = 15484;
static int16_t x229 = INT16_MIN;
int64_t x231 = INT64_MAX;
int32_t t57 = -27075;
static int64_t x234 = INT64_MIN;
uint8_t x235 = UINT8_MAX;
static int64_t x240 = -1LL;
volatile int32_t t59 = -34121;
int64_t x244 = INT64_MAX;
static int8_t x256 = INT8_MIN;
int16_t x257 = INT16_MIN;
int8_t x258 = 14;
volatile int16_t x259 = -5;
volatile int64_t x267 = INT64_MIN;
volatile int32_t t66 = 99844842;
int64_t x287 = INT64_MAX;
static volatile int32_t t72 = -127;
volatile int64_t x293 = INT64_MIN;
volatile int8_t x294 = INT8_MIN;
volatile uint16_t x296 = 4U;
int8_t x300 = INT8_MAX;
volatile int32_t x308 = INT32_MIN;
int32_t t78 = -124246;
uint64_t x327 = 1158683721LLU;
static uint32_t x328 = 1085057U;
static int16_t x337 = 1;
int16_t x339 = -1;
uint16_t x343 = 5U;
int16_t x344 = INT16_MAX;
int32_t x351 = -1;
int32_t t87 = 107901936;
int8_t x358 = INT8_MAX;
int8_t x359 = INT8_MIN;
int16_t x362 = INT16_MIN;
int16_t x371 = INT16_MIN;
int16_t x376 = -1;
int32_t t93 = -131548;
int32_t t94 = -2946;
int32_t x382 = 2088;
static uint32_t x392 = 0U;
uint16_t x393 = UINT16_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	int16_t x2 = 16;
	uint32_t x3 = 26735554U;
	int64_t x4 = -1LL;
	volatile int32_t t0 = 53690662;

	t0 = (x1<((x2==x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 769938404LL;
	uint64_t x6 = UINT64_MAX;
	uint16_t x7 = UINT16_MAX;
	static volatile uint16_t x8 = UINT16_MAX;
	int32_t t1 = 3;

	t1 = (x5<((x6==x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	volatile uint64_t x10 = 348007440906209185LLU;
	static volatile uint8_t x11 = UINT8_MAX;
	int32_t t2 = 99414445;

	t2 = (x9<((x10==x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint16_t x14 = 10U;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -6270756;

	t3 = (x13<((x14==x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = 0;

	t4 = (x17<((x18==x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 46822362;
	int32_t x22 = INT32_MAX;
	static int16_t x23 = -14331;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 60848054;

	t5 = (x21<((x22==x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = -1LL;
	int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -23216527;

	t6 = (x25<((x26==x27)==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MIN;
	static uint8_t x31 = 12U;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -191;

	t7 = (x29<((x30==x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	uint8_t x34 = 115U;
	static uint64_t x35 = UINT64_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	static int32_t t8 = 30211;

	t8 = (x33<((x34==x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static int64_t x38 = 1LL;
	int8_t x40 = -26;
	int32_t t9 = -129508815;

	t9 = (x37<((x38==x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 1U;
	uint8_t x43 = UINT8_MAX;
	static int16_t x44 = -1;
	static volatile int32_t t10 = 144436;

	t10 = (x41<((x42==x43)==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 132U;
	uint16_t x46 = 15556U;
	uint8_t x47 = 121U;
	uint8_t x48 = 0U;

	t11 = (x45<((x46==x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 1;
	int32_t x50 = -132372718;
	static int8_t x51 = INT8_MAX;
	int8_t x52 = INT8_MAX;
	volatile int32_t t12 = -11;

	t12 = (x49<((x50==x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	volatile uint64_t x56 = 954881003803730924LLU;
	volatile int32_t t13 = -969419;

	t13 = (x53<((x54==x55)==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 83255LLU;
	volatile int8_t x58 = -1;
	volatile uint64_t x59 = 77LLU;
	int8_t x60 = 2;
	volatile int32_t t14 = 356436;

	t14 = (x57<((x58==x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1U;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = 2136209644094LLU;
	static int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 459;

	t15 = (x61<((x62==x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -68813310200LL;
	volatile uint32_t x68 = UINT32_MAX;
	int32_t t16 = 600310176;

	t16 = (x65<((x66==x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	static uint32_t x70 = 43606U;
	static uint32_t x72 = 150191U;
	volatile int32_t t17 = 21492;

	t17 = (x69<((x70==x71)==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 11;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -265676;

	t18 = (x73<((x74==x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 20U;
	volatile int32_t t19 = 5;

	t19 = (x77<((x78==x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	static int32_t x82 = INT32_MAX;
	static int16_t x83 = INT16_MIN;
	static int32_t x84 = -1;
	int32_t t20 = -11;

	t20 = (x81<((x82==x83)==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = 17U;
	int16_t x86 = INT16_MAX;
	uint32_t x87 = 1974U;
	int64_t x88 = -1LL;
	volatile int32_t t21 = 44;

	t21 = (x85<((x86==x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 59;
	volatile uint16_t x90 = 45U;
	static volatile int64_t x91 = INT64_MIN;
	volatile int32_t x92 = -1;
	volatile int32_t t22 = -252470;

	t22 = (x89<((x90==x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x95 = 38U;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = -1368;

	t23 = (x93<((x94==x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 691;
	static uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MAX;
	int16_t x100 = -2;
	static volatile int32_t t24 = -118;

	t24 = (x97<((x98==x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	uint8_t x102 = UINT8_MAX;

	t25 = (x101<((x102==x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	uint16_t x108 = UINT16_MAX;
	static volatile int32_t t26 = -27618713;

	t26 = (x105<((x106==x107)==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 564240368321396991LLU;
	uint64_t x110 = UINT64_MAX;
	int8_t x111 = INT8_MAX;
	uint8_t x112 = 2U;
	int32_t t27 = 558836;

	t27 = (x109<((x110==x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = -1;
	uint32_t x115 = 11520437U;
	volatile int32_t x116 = INT32_MAX;
	static int32_t t28 = -35558749;

	t28 = (x113<((x114==x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MIN;
	uint8_t x118 = 77U;
	int16_t x119 = 58;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -5359472;

	t29 = (x117<((x118==x119)==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	volatile uint64_t x123 = 4713811091603LLU;
	uint32_t x124 = 0U;
	int32_t t30 = 878410989;

	t30 = (x121<((x122==x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = 2692;
	int64_t x127 = INT64_MIN;
	static int16_t x128 = INT16_MIN;
	int32_t t31 = 21;

	t31 = (x125<((x126==x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x131 = INT64_MIN;
	volatile uint16_t x132 = 2491U;

	t32 = (x129<((x130==x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -156;
	int16_t x134 = INT16_MAX;
	int64_t x135 = INT64_MIN;
	static int32_t x136 = -1;
	int32_t t33 = -4471512;

	t33 = (x133<((x134==x135)==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	volatile int16_t x139 = INT16_MIN;
	static int32_t x140 = INT32_MAX;
	int32_t t34 = -1;

	t34 = (x137<((x138==x139)==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	volatile uint8_t x142 = 21U;
	volatile int16_t x143 = INT16_MIN;

	t35 = (x141<((x142==x143)==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = INT64_MAX;
	uint64_t x148 = 276LLU;
	int32_t t36 = 1797611;

	t36 = (x145<((x146==x147)==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -2663784;
	static volatile int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MAX;
	uint64_t x152 = UINT64_MAX;
	int32_t t37 = -123742;

	t37 = (x149<((x150==x151)==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x154 = INT32_MIN;
	int16_t x155 = -8487;
	volatile int8_t x156 = 54;
	int32_t t38 = 552314508;

	t38 = (x153<((x154==x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 0;
	static int16_t x158 = INT16_MAX;
	static int32_t x159 = INT32_MIN;
	int64_t x160 = -1LL;
	volatile int32_t t39 = -41666988;

	t39 = (x157<((x158==x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = INT16_MAX;
	int64_t x164 = -18LL;
	volatile int32_t t40 = -56485524;

	t40 = (x161<((x162==x163)==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 53LLU;
	int16_t x166 = INT16_MIN;
	int32_t t41 = 1045513294;

	t41 = (x165<((x166==x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	uint16_t x170 = 12370U;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = 782259212518506097LLU;

	t42 = (x169<((x170==x171)==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 14;
	int16_t x174 = INT16_MIN;
	volatile int32_t t43 = 59869;

	t43 = (x173<((x174==x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = INT16_MAX;
	int16_t x180 = INT16_MAX;

	t44 = (x177<((x178==x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	uint16_t x182 = UINT16_MAX;
	static int8_t x183 = 11;
	int64_t x184 = INT64_MIN;
	int32_t t45 = -973;

	t45 = (x181<((x182==x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -189;
	volatile int64_t x187 = -1LL;
	static volatile int64_t x188 = INT64_MIN;
	static int32_t t46 = -32619;

	t46 = (x185<((x186==x187)==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	int16_t x190 = INT16_MAX;
	static uint16_t x191 = UINT16_MAX;
	static uint8_t x192 = UINT8_MAX;
	int32_t t47 = -293;

	t47 = (x189<((x190==x191)==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile uint64_t x194 = 1100461319LLU;
	volatile uint64_t x195 = UINT64_MAX;
	static int32_t t48 = 195293511;

	t48 = (x193<((x194==x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	int8_t x198 = 3;
	int8_t x200 = 12;
	static int32_t t49 = 79036;

	t49 = (x197<((x198==x199)==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = 125U;
	volatile int32_t x203 = INT32_MIN;
	volatile int16_t x204 = 0;
	volatile int32_t t50 = 7418;

	t50 = (x201<((x202==x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 196U;
	static volatile int8_t x206 = 0;
	uint8_t x207 = 1U;
	uint64_t x208 = UINT64_MAX;

	t51 = (x205<((x206==x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = 185797875823LLU;
	static int64_t x211 = -1LL;
	uint64_t x212 = 112000473LLU;
	volatile int32_t t52 = 102;

	t52 = (x209<((x210==x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	volatile int32_t x214 = INT32_MIN;
	volatile int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;

	t53 = (x213<((x214==x215)==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	uint64_t x218 = 58947LLU;
	int8_t x219 = -7;
	int64_t x220 = INT64_MAX;
	int32_t t54 = -4802;

	t54 = (x217<((x218==x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	int16_t x223 = INT16_MAX;
	int32_t x224 = -114515;
	volatile int32_t t55 = 98471938;

	t55 = (x221<((x222==x223)==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	volatile int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;

	t56 = (x225<((x226==x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = UINT64_MAX;
	uint8_t x232 = UINT8_MAX;

	t57 = (x229<((x230==x231)==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 29U;
	volatile int64_t x236 = INT64_MIN;
	volatile int32_t t58 = -512463;

	t58 = (x233<((x234==x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = 1;
	uint16_t x238 = 421U;
	int8_t x239 = -47;

	t59 = (x237<((x238==x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	static int64_t x242 = INT64_MAX;
	int64_t x243 = INT64_MAX;
	volatile int32_t t60 = 209;

	t60 = (x241<((x242==x243)==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	static volatile int64_t x246 = -267566698LL;
	static volatile uint8_t x247 = 3U;
	int32_t x248 = -11;
	static int32_t t61 = 1902;

	t61 = (x245<((x246==x247)==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int64_t x250 = INT64_MIN;
	int32_t x251 = INT32_MAX;
	uint8_t x252 = 0U;
	int32_t t62 = -76;

	t62 = (x249<((x250==x251)==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	volatile int32_t x254 = 1198528;
	uint8_t x255 = 3U;
	int32_t t63 = 593137663;

	t63 = (x253<((x254==x255)==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = -4137;

	t64 = (x257<((x258==x259)==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -1;
	int32_t x262 = INT32_MIN;
	int8_t x263 = 1;
	uint64_t x264 = 34607490902214LLU;
	volatile int32_t t65 = 1796;

	t65 = (x261<((x262==x263)==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	uint64_t x266 = 85LLU;
	int16_t x268 = 52;

	t66 = (x265<((x266==x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -168;
	uint32_t x270 = 2042U;
	uint16_t x271 = 55U;
	uint8_t x272 = 22U;
	volatile int32_t t67 = 119303820;

	t67 = (x269<((x270==x271)==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = -31;
	int64_t x274 = -1LL;
	int8_t x275 = INT8_MAX;
	uint16_t x276 = 24766U;
	static volatile int32_t t68 = -3;

	t68 = (x273<((x274==x275)==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = -2535;
	int16_t x279 = -5931;
	int64_t x280 = -1LL;
	volatile int32_t t69 = -94;

	t69 = (x277<((x278==x279)==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint16_t x282 = 12U;
	int8_t x283 = INT8_MAX;
	int32_t x284 = 24;
	volatile int32_t t70 = 1547509;

	t70 = (x281<((x282==x283)==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -9;
	uint64_t x286 = 15003716LLU;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -25;

	t71 = (x285<((x286==x287)==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -15LL;
	uint32_t x290 = 461232748U;
	int16_t x291 = INT16_MAX;
	static int16_t x292 = INT16_MAX;

	t72 = (x289<((x290==x291)==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x295 = 58U;
	static volatile int32_t t73 = -2;

	t73 = (x293<((x294==x295)==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 7680LLU;
	int32_t x298 = -11640;
	int16_t x299 = INT16_MIN;
	volatile int32_t t74 = -34;

	t74 = (x297<((x298==x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 116518177U;
	uint64_t x302 = UINT64_MAX;
	volatile int32_t x303 = INT32_MIN;
	int16_t x304 = -1;
	volatile int32_t t75 = 120;

	t75 = (x301<((x302==x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	static volatile uint32_t x306 = UINT32_MAX;
	uint8_t x307 = 1U;
	volatile int32_t t76 = 18354;

	t76 = (x305<((x306==x307)==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1419;
	int32_t x310 = -605358;
	int64_t x311 = 1674219793153LL;
	int16_t x312 = 1;
	volatile int32_t t77 = 843603;

	t77 = (x309<((x310==x311)==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	volatile uint8_t x314 = 8U;
	uint16_t x315 = 210U;
	int32_t x316 = 2;

	t78 = (x313<((x314==x315)==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = 26686872153397LLU;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = -1229;

	t79 = (x317<((x318==x319)==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -253608;
	volatile int32_t x322 = 17127;
	uint32_t x323 = 1795647U;
	int8_t x324 = INT8_MIN;
	static int32_t t80 = -3163699;

	t80 = (x321<((x322==x323)==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = 1;
	int64_t x326 = INT64_MIN;
	volatile int32_t t81 = 26918941;

	t81 = (x325<((x326==x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	volatile int64_t x330 = INT64_MAX;
	static uint32_t x331 = UINT32_MAX;
	volatile int32_t x332 = INT32_MAX;
	int32_t t82 = 15;

	t82 = (x329<((x330==x331)==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 12435759U;
	int64_t x334 = INT64_MIN;
	static volatile int64_t x335 = INT64_MAX;
	static volatile int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 26;

	t83 = (x333<((x334==x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 30345538;

	t84 = (x337<((x338==x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int32_t t85 = -1;

	t85 = (x341<((x342==x343)==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -706822888825LL;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = 83;
	static int32_t x348 = INT32_MAX;
	int32_t t86 = 426;

	t86 = (x345<((x346==x347)==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile uint32_t x350 = 60373433U;
	static int8_t x352 = INT8_MAX;

	t87 = (x349<((x350==x351)==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x354 = UINT8_MAX;
	volatile int64_t x355 = -25515LL;
	volatile uint8_t x356 = 5U;
	volatile int32_t t88 = 165842179;

	t88 = (x353<((x354==x355)==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x357 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = -25936118;

	t89 = (x357<((x358==x359)==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	uint32_t x363 = 1U;
	uint32_t x364 = 1082U;
	volatile int32_t t90 = -21685;

	t90 = (x361<((x362==x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 244;
	uint16_t x366 = 22278U;
	static int8_t x367 = -1;
	int64_t x368 = -1LL;
	volatile int32_t t91 = -13709624;

	t91 = (x365<((x366==x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	uint32_t x370 = UINT32_MAX;
	int32_t x372 = 104033526;
	volatile int32_t t92 = 17105390;

	t92 = (x369<((x370==x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MIN;
	static int32_t x374 = -1;
	int64_t x375 = INT64_MIN;

	t93 = (x373<((x374==x375)==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MAX;
	static uint64_t x378 = 351857655LLU;
	uint32_t x379 = 3U;
	static int8_t x380 = INT8_MIN;

	t94 = (x377<((x378==x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int8_t x383 = 5;
	static int16_t x384 = INT16_MAX;
	int32_t t95 = -962624301;

	t95 = (x381<((x382==x383)==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = 0;
	uint8_t x387 = 37U;
	volatile int8_t x388 = 0;
	int32_t t96 = -854962;

	t96 = (x385<((x386==x387)==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	volatile uint32_t x390 = 441U;
	volatile int32_t x391 = INT32_MIN;
	volatile int32_t t97 = -7143625;

	t97 = (x389<((x390==x391)==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x394 = INT64_MIN;
	int8_t x395 = 2;
	volatile int8_t x396 = INT8_MAX;
	int32_t t98 = 27956;

	t98 = (x393<((x394==x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	uint16_t x398 = 33U;
	volatile uint32_t x399 = 2158019U;
	volatile int32_t x400 = INT32_MIN;
	int32_t t99 = 12976;

	t99 = (x397<((x398==x399)==x400));

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

