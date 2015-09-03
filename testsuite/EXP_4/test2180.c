#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = 25;
int32_t t2 = -86052397;
int64_t x22 = 1820033245137LL;
static int8_t x24 = 6;
static uint16_t x25 = 1507U;
volatile int32_t t8 = 2042;
static int8_t x37 = INT8_MIN;
int32_t t11 = 899486;
int64_t x50 = INT64_MAX;
static int32_t x56 = INT32_MIN;
int32_t t13 = 2603273;
static volatile int32_t t14 = -10868483;
int16_t x65 = 114;
volatile int32_t t18 = -5346760;
int8_t x79 = -1;
uint64_t x80 = 69132608LLU;
int32_t x83 = -220619677;
int16_t x96 = INT16_MAX;
uint64_t x97 = 1956979832018LLU;
int16_t x98 = 7;
uint8_t x104 = 53U;
volatile int64_t x107 = 133571LL;
volatile int32_t t26 = -14;
int16_t x113 = INT16_MAX;
static int32_t t28 = -696436047;
int16_t x120 = INT16_MIN;
uint32_t x122 = 12U;
int16_t x123 = -978;
int32_t x125 = INT32_MIN;
volatile int8_t x126 = -24;
static int64_t x131 = 38419455448039LL;
volatile int32_t t33 = 1;
int8_t x139 = INT8_MAX;
uint64_t x141 = 329LLU;
int32_t t37 = -462190379;
int64_t x158 = INT64_MIN;
uint8_t x160 = UINT8_MAX;
volatile int32_t t39 = 1179;
static volatile int32_t t40 = 0;
int64_t x172 = 6742966553LL;
volatile int8_t x182 = -1;
static int32_t t47 = -2;
int8_t x204 = -1;
volatile uint8_t x207 = UINT8_MAX;
int32_t t51 = -2721688;
uint32_t x216 = 158512U;
int8_t x225 = INT8_MIN;
static uint16_t x231 = 3176U;
uint64_t x232 = 48683653251685LLU;
int32_t t61 = 29639696;
int8_t x250 = INT8_MAX;
int32_t t62 = 16417442;
static int32_t t64 = 1095910;
int8_t x262 = 6;
volatile int8_t x264 = INT8_MAX;
int8_t x269 = INT8_MAX;
int32_t x275 = INT32_MIN;
volatile int32_t t68 = 6197844;
int16_t x278 = -1;
uint8_t x281 = UINT8_MAX;
volatile int32_t x288 = -1;
int32_t x297 = 1712;
volatile int32_t x301 = -64563;
int32_t x312 = INT32_MIN;
int16_t x315 = -1;
static volatile uint16_t x319 = UINT16_MAX;
volatile int16_t x323 = INT16_MAX;
volatile int64_t x327 = INT64_MIN;
volatile int16_t x329 = INT16_MAX;
volatile uint32_t x333 = 211294844U;
int16_t x341 = INT16_MIN;
int32_t t85 = -9435196;
static volatile int32_t t86 = 898048;
int64_t x351 = INT64_MIN;
int32_t t87 = 87569;
static int32_t x354 = -54;
uint32_t x356 = 95277U;
static volatile int32_t t90 = 0;
int8_t x367 = -1;
int16_t x368 = INT16_MIN;
uint32_t x370 = 42U;
int8_t x374 = INT8_MIN;
static volatile uint32_t x377 = 7983973U;
int64_t x381 = -1LL;
int32_t x389 = INT32_MIN;
volatile int32_t x390 = -1;
int8_t x392 = INT8_MIN;
static int32_t x394 = -97280;


void f0(void) {
	volatile uint32_t x1 = 20651299U;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MIN;
	static int16_t x4 = 143;
	volatile int32_t t0 = 1;

	t0 = (x1<(x2|(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -4239853032LL;
	int16_t x6 = INT16_MIN;
	int8_t x7 = 0;
	volatile uint16_t x8 = 46U;
	static int32_t t1 = 23;

	t1 = (x5<(x6|(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1269721596688003877LLU;
	static volatile uint8_t x10 = 29U;
	static uint32_t x12 = 1512U;

	t2 = (x9<(x10|(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 4U;
	int64_t x14 = 1688610321400062208LL;
	volatile int8_t x15 = -1;
	static int16_t x16 = -1;
	volatile int32_t t3 = 1;

	t3 = (x13<(x14|(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int32_t x18 = -1;
	int8_t x19 = 11;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 10;

	t4 = (x17<(x18|(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int8_t x23 = -1;
	int32_t t5 = 26805181;

	t5 = (x21<(x22|(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = 15;
	volatile uint64_t x27 = 1940176427LLU;
	static volatile int8_t x28 = -1;
	volatile int32_t t6 = -368174;

	t6 = (x25<(x26|(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -8;
	static int32_t x30 = INT32_MAX;
	int8_t x31 = -1;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -1;

	t7 = (x29<(x30|(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 10;
	static uint8_t x34 = 5U;
	int32_t x35 = 224663;
	int8_t x36 = INT8_MIN;

	t8 = (x33<(x34|(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 1U;
	static int16_t x39 = INT16_MIN;
	uint8_t x40 = 7U;
	volatile int32_t t9 = 3504;

	t9 = (x37<(x38|(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 11U;
	static int32_t x42 = -9009549;
	int16_t x43 = -1;
	static int32_t x44 = INT32_MIN;
	int32_t t10 = -165493479;

	t10 = (x41<(x42|(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 37U;
	int8_t x46 = INT8_MAX;
	volatile int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;

	t11 = (x45<(x46|(x47^x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x51 = 3U;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -11729;

	t12 = (x49<(x50|(x51^x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	uint32_t x54 = 472181483U;
	static uint32_t x55 = UINT32_MAX;

	t13 = (x53<(x54|(x55^x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int8_t x58 = INT8_MIN;
	uint64_t x59 = 7041673LLU;
	int64_t x60 = INT64_MAX;

	t14 = (x57<(x58|(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	uint64_t x62 = 1864927651LLU;
	static volatile int64_t x63 = -62936385903345LL;
	volatile int8_t x64 = INT8_MIN;
	int32_t t15 = -397216835;

	t15 = (x61<(x62|(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -1;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -24345418;

	t16 = (x65<(x66|(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MIN;
	uint16_t x71 = 3091U;
	uint16_t x72 = UINT16_MAX;
	int32_t t17 = -75384038;

	t17 = (x69<(x70|(x71^x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	static int64_t x74 = INT64_MIN;
	volatile int8_t x75 = -3;
	volatile int16_t x76 = INT16_MIN;

	t18 = (x73<(x74|(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MAX;
	static uint16_t x78 = 0U;
	volatile int32_t t19 = 117200938;

	t19 = (x77<(x78|(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint8_t x82 = UINT8_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = -72324;

	t20 = (x81<(x82|(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static int8_t x86 = 28;
	int32_t x87 = -1;
	int64_t x88 = -1LL;
	volatile int32_t t21 = 10;

	t21 = (x85<(x86|(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = INT8_MIN;
	uint16_t x90 = 72U;
	static volatile int32_t x91 = INT32_MIN;
	uint16_t x92 = 1U;
	volatile int32_t t22 = 0;

	t22 = (x89<(x90|(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1534;
	int32_t x94 = -1;
	int8_t x95 = -1;
	volatile int32_t t23 = 119223;

	t23 = (x93<(x94|(x95^x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x99 = 9663001074047LLU;
	volatile uint32_t x100 = 1U;
	volatile int32_t t24 = 12634371;

	t24 = (x97<(x98|(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = -1LL;
	uint64_t x103 = UINT64_MAX;
	static int32_t t25 = 0;

	t25 = (x101<(x102|(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 74534068U;
	uint16_t x106 = 15U;
	uint64_t x108 = 13LLU;

	t26 = (x105<(x106|(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x109 = 16916U;
	int16_t x110 = 5;
	volatile uint8_t x111 = 1U;
	int32_t x112 = 26;
	volatile int32_t t27 = 3;

	t27 = (x109<(x110|(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x114 = INT32_MIN;
	static int32_t x115 = -23220;
	int16_t x116 = INT16_MIN;

	t28 = (x113<(x114|(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -435886231169LL;
	uint16_t x118 = 3831U;
	volatile int64_t x119 = INT64_MIN;
	static volatile int32_t t29 = -815444640;

	t29 = (x117<(x118|(x119^x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int16_t x124 = -1;
	static int32_t t30 = -111603;

	t30 = (x121<(x122|(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x127 = 1;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = 26039877;

	t31 = (x125<(x126|(x127^x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static volatile int16_t x130 = INT16_MIN;
	uint16_t x132 = 4U;
	int32_t t32 = 0;

	t32 = (x129<(x130|(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 1;
	int8_t x134 = 25;
	int64_t x135 = INT64_MIN;
	int8_t x136 = 1;

	t33 = (x133<(x134|(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = 1;
	uint32_t x140 = UINT32_MAX;
	int32_t t34 = -16730458;

	t34 = (x137<(x138|(x139^x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x142 = 2370U;
	static uint64_t x143 = UINT64_MAX;
	int64_t x144 = INT64_MAX;
	volatile int32_t t35 = -23;

	t35 = (x141<(x142|(x143^x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 2;
	static int16_t x146 = -1;
	volatile int8_t x147 = -1;
	int32_t x148 = -1;
	int32_t t36 = 899386581;

	t36 = (x145<(x146|(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	static int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = UINT64_MAX;

	t37 = (x149<(x150|(x151^x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 840LL;
	uint8_t x154 = UINT8_MAX;
	volatile uint32_t x155 = 5U;
	int8_t x156 = -1;
	int32_t t38 = -271464087;

	t38 = (x153<(x154|(x155^x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -584975;
	int8_t x159 = INT8_MAX;

	t39 = (x157<(x158|(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 81U;
	uint16_t x162 = 956U;
	volatile uint16_t x163 = 1U;
	int64_t x164 = INT64_MIN;

	t40 = (x161<(x162|(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MAX;
	static volatile int64_t x166 = 113180854678LL;
	volatile uint16_t x167 = 17307U;
	uint16_t x168 = 0U;
	static volatile int32_t t41 = 73634880;

	t41 = (x165<(x166|(x167^x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = 6493634LL;
	int8_t x170 = -1;
	uint16_t x171 = UINT16_MAX;
	int32_t t42 = -1;

	t42 = (x169<(x170|(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int16_t x174 = INT16_MAX;
	volatile uint32_t x175 = 7308U;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -31473;

	t43 = (x173<(x174|(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -121825613328549LL;
	volatile int8_t x178 = INT8_MIN;
	uint16_t x179 = 712U;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -9;

	t44 = (x177<(x178|(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -116629846;
	volatile uint8_t x183 = 3U;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 585388026;

	t45 = (x181<(x182|(x183^x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t46 = 3492747;

	t46 = (x185<(x186|(x187^x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 13U;
	int16_t x190 = -1;
	int32_t x191 = INT32_MAX;
	static uint32_t x192 = 1973803U;

	t47 = (x189<(x190|(x191^x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	uint32_t x194 = 27U;
	uint8_t x195 = 8U;
	volatile uint16_t x196 = 9U;
	volatile int32_t t48 = 121;

	t48 = (x193<(x194|(x195^x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static uint64_t x198 = 1258072LLU;
	volatile uint8_t x199 = 5U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -3338366;

	t49 = (x197<(x198|(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	volatile int32_t t50 = 1184;

	t50 = (x201<(x202|(x203^x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = INT8_MIN;
	static uint16_t x208 = 8892U;

	t51 = (x205<(x206|(x207^x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MAX;
	static uint32_t x212 = 784138975U;
	volatile int32_t t52 = -977;

	t52 = (x209<(x210|(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 42U;
	int32_t x214 = INT32_MIN;
	volatile int64_t x215 = INT64_MIN;
	volatile int32_t t53 = 81716828;

	t53 = (x213<(x214|(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -78424;
	int16_t x218 = -1;
	int64_t x219 = -1LL;
	uint16_t x220 = UINT16_MAX;
	int32_t t54 = 119678921;

	t54 = (x217<(x218|(x219^x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int32_t x222 = -1;
	int64_t x223 = INT64_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 2774;

	t55 = (x221<(x222|(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = INT16_MAX;
	volatile int64_t x227 = 7355301339734LL;
	int8_t x228 = INT8_MIN;
	int32_t t56 = 2;

	t56 = (x225<(x226|(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = 685U;
	uint32_t x230 = UINT32_MAX;
	int32_t t57 = 54;

	t57 = (x229<(x230|(x231^x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 4069894965123LLU;
	volatile int64_t x234 = 1270692286586615506LL;
	static int8_t x235 = INT8_MIN;
	static int16_t x236 = -1;
	int32_t t58 = 55285;

	t58 = (x233<(x234|(x235^x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = UINT64_MAX;
	volatile int16_t x238 = INT16_MIN;
	uint8_t x239 = 46U;
	static uint32_t x240 = UINT32_MAX;
	int32_t t59 = 32619551;

	t59 = (x237<(x238|(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -123;
	int32_t x242 = -20;
	int8_t x243 = 11;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = -79;

	t60 = (x241<(x242|(x243^x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -1;
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = -1;
	volatile int64_t x248 = -1LL;

	t61 = (x245<(x246|(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static int64_t x251 = INT64_MIN;
	volatile uint64_t x252 = UINT64_MAX;

	t62 = (x249<(x250|(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 113U;
	int16_t x254 = -1;
	uint32_t x255 = 1999U;
	int32_t x256 = INT32_MAX;
	volatile int32_t t63 = -419;

	t63 = (x253<(x254|(x255^x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 935U;
	uint32_t x258 = 1961U;
	static int32_t x259 = -189955;
	int8_t x260 = 39;

	t64 = (x257<(x258|(x259^x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 737U;
	volatile int64_t x263 = INT64_MIN;
	int32_t t65 = -2620;

	t65 = (x261<(x262|(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 2;
	volatile int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	static int16_t x268 = INT16_MIN;
	int32_t t66 = -185183414;

	t66 = (x265<(x266|(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	volatile uint32_t x271 = 281U;
	int64_t x272 = INT64_MIN;
	static int32_t t67 = -5955;

	t67 = (x269<(x270|(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 8U;
	int32_t x274 = 61;
	int64_t x276 = -581614040786218058LL;

	t68 = (x273<(x274|(x275^x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x277 = 1404LLU;
	volatile int64_t x279 = 6LL;
	int32_t x280 = INT32_MAX;
	int32_t t69 = 4725083;

	t69 = (x277<(x278|(x279^x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = INT8_MAX;
	uint16_t x283 = 4U;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = -117357043;

	t70 = (x281<(x282|(x283^x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MIN;
	int16_t x286 = -1;
	int64_t x287 = INT64_MIN;
	volatile int32_t t71 = -60;

	t71 = (x285<(x286|(x287^x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = -28542454811291327LL;
	uint32_t x291 = 139822531U;
	static volatile int32_t x292 = -1;
	volatile int32_t t72 = -3;

	t72 = (x289<(x290|(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	volatile int64_t x294 = INT64_MIN;
	uint16_t x295 = 31U;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t73 = 18;

	t73 = (x293<(x294|(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = -1;
	int8_t x299 = INT8_MAX;
	volatile int16_t x300 = INT16_MIN;
	int32_t t74 = 1742995;

	t74 = (x297<(x298|(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MAX;
	int8_t x303 = -1;
	volatile uint16_t x304 = 0U;
	static int32_t t75 = -24;

	t75 = (x301<(x302|(x303^x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = 230;

	t76 = (x305<(x306|(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	int16_t x310 = -15077;
	int32_t x311 = INT32_MIN;
	int32_t t77 = 0;

	t77 = (x309<(x310|(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	uint8_t x314 = 34U;
	volatile uint64_t x316 = 25923707LLU;
	volatile int32_t t78 = 7612377;

	t78 = (x313<(x314|(x315^x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 37U;
	static int8_t x318 = -1;
	static uint64_t x320 = UINT64_MAX;
	int32_t t79 = -4557;

	t79 = (x317<(x318|(x319^x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 2U;
	int32_t x322 = INT32_MIN;
	volatile int8_t x324 = 25;
	volatile int32_t t80 = -2066557;

	t80 = (x321<(x322|(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 28007LLU;
	int8_t x326 = INT8_MAX;
	uint16_t x328 = 0U;
	int32_t t81 = -24;

	t81 = (x325<(x326|(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MIN;
	int32_t x332 = -1;
	volatile int32_t t82 = -18075709;

	t82 = (x329<(x330|(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = -1;

	t83 = (x333<(x334|(x335^x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 24LL;
	volatile int32_t x338 = INT32_MIN;
	static int16_t x339 = INT16_MAX;
	volatile uint8_t x340 = 124U;
	int32_t t84 = 15;

	t84 = (x337<(x338|(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MIN;

	t85 = (x341<(x342|(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	int8_t x348 = 0;

	t86 = (x345<(x346|(x347^x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	uint64_t x352 = 6071907665849LLU;

	t87 = (x349<(x350|(x351^x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	uint8_t x355 = 3U;
	int32_t t88 = 91;

	t88 = (x353<(x354|(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	int32_t x359 = 17319;
	volatile uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = -107202139;

	t89 = (x357<(x358|(x359^x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint8_t x362 = 3U;
	static volatile int16_t x363 = 3449;
	int32_t x364 = INT32_MIN;

	t90 = (x361<(x362|(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MAX;
	int8_t x366 = INT8_MIN;
	int32_t t91 = -2973;

	t91 = (x365<(x366|(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x371 = -1;
	int32_t x372 = INT32_MIN;
	int32_t t92 = 83444;

	t92 = (x369<(x370|(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 10U;
	uint8_t x375 = UINT8_MAX;
	int32_t x376 = -1;
	int32_t t93 = -105;

	t93 = (x373<(x374|(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x378 = 13357339U;
	volatile int8_t x379 = INT8_MIN;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t94 = -12;

	t94 = (x377<(x378|(x379^x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -84;
	uint16_t x383 = 621U;
	volatile int16_t x384 = INT16_MAX;
	volatile int32_t t95 = -115;

	t95 = (x381<(x382|(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	int8_t x386 = INT8_MIN;
	int64_t x387 = -4513617857433891282LL;
	volatile int32_t x388 = INT32_MIN;
	volatile int32_t t96 = 3283631;

	t96 = (x385<(x386|(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x391 = INT32_MAX;
	int32_t t97 = 29354598;

	t97 = (x389<(x390|(x391^x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	int8_t x395 = 1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -30199655;

	t98 = (x393<(x394|(x395^x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 350820354196272LLU;
	static uint16_t x398 = UINT16_MAX;
	int8_t x399 = INT8_MIN;
	volatile int64_t x400 = INT64_MIN;
	int32_t t99 = 156;

	t99 = (x397<(x398|(x399^x400)));

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

