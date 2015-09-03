#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 19718U;
uint64_t x5 = UINT64_MAX;
uint16_t x10 = 0U;
volatile int16_t x17 = INT16_MIN;
uint32_t x20 = 205981200U;
volatile int32_t t5 = 19645111;
static volatile uint64_t t6 = 800LLU;
uint16_t x30 = UINT16_MAX;
volatile int8_t x32 = -5;
uint8_t x37 = 5U;
volatile int8_t x41 = 1;
int64_t x47 = 240844085293634LL;
static int8_t x48 = INT8_MIN;
int32_t x52 = INT32_MIN;
volatile int32_t t13 = 102508709;
static int32_t x58 = 104921615;
int8_t x68 = INT8_MIN;
int32_t t16 = 13;
volatile uint32_t t18 = 318101954U;
static uint8_t x78 = 117U;
int64_t x80 = -1LL;
uint16_t x84 = UINT16_MAX;
int16_t x85 = -1;
uint64_t t22 = 169458050LLU;
volatile uint64_t x101 = UINT64_MAX;
volatile uint16_t x104 = UINT16_MAX;
static int32_t x106 = -1;
volatile int64_t x107 = -1LL;
int32_t t26 = 13702778;
int16_t x117 = INT16_MIN;
static int16_t x120 = INT16_MIN;
static int32_t t27 = -266773521;
int16_t x136 = INT16_MIN;
static int32_t t31 = -3135225;
int32_t x137 = INT32_MIN;
int32_t t33 = 2;
uint64_t x152 = UINT64_MAX;
uint64_t x168 = 871518273047874355LLU;
uint16_t x170 = UINT16_MAX;
static uint32_t x177 = 342199395U;
static int8_t x180 = INT8_MIN;
volatile uint32_t x191 = UINT32_MAX;
volatile int64_t t40 = 3LL;
int8_t x193 = INT8_MIN;
static volatile int32_t t41 = -2427;
uint64_t x199 = UINT64_MAX;
static int16_t x209 = INT16_MAX;
int16_t x211 = INT16_MIN;
int8_t x214 = -1;
volatile uint32_t x216 = 421263U;
int16_t x218 = -12;
int8_t x224 = -7;
volatile int16_t x226 = INT16_MAX;
int32_t x227 = 14408;
static volatile int32_t t49 = 0;
int64_t x231 = INT64_MIN;
int32_t x233 = -1;
int64_t x238 = INT64_MIN;
static uint32_t t52 = 39092606U;
static int64_t x242 = INT64_MIN;
static volatile int32_t t53 = 17;
uint8_t x245 = 1U;
static int64_t x249 = INT64_MIN;
int32_t x250 = 1;
int32_t t56 = 2474998;
static uint64_t x266 = 1594LLU;
uint64_t x268 = UINT64_MAX;
static uint64_t x272 = 14422149LLU;
uint64_t t58 = 5450357278436LLU;
int32_t x275 = -1;
int16_t x278 = INT16_MIN;
uint16_t x286 = 30997U;
int32_t t62 = -2;
static int64_t x303 = INT64_MIN;
int64_t t66 = -21841528285185477LL;
static volatile uint64_t x305 = 7989LLU;
static volatile int64_t x308 = INT64_MIN;
static uint64_t t68 = 131819221844721852LLU;
int16_t x316 = 3850;
static int8_t x317 = INT8_MAX;
int8_t x330 = INT8_MIN;
int32_t x332 = 360104;
int8_t x333 = INT8_MIN;
volatile int16_t x344 = -7;
static volatile int16_t x345 = 0;
volatile int32_t t77 = -91934;
static int64_t x356 = -38390498348697LL;
int64_t x357 = INT64_MAX;
uint16_t x364 = UINT16_MAX;
uint64_t t80 = 3138494LLU;
int8_t x366 = -1;
int32_t x367 = -1;
int16_t x369 = 944;
static volatile uint16_t x371 = UINT16_MAX;
static volatile int16_t x373 = INT16_MIN;
uint16_t x387 = UINT16_MAX;
static uint8_t x392 = 21U;
volatile int32_t x395 = INT32_MAX;
static volatile int64_t t88 = -1LL;
uint8_t x406 = 1U;
volatile uint64_t x408 = UINT64_MAX;
int16_t x414 = INT16_MAX;
int32_t t91 = 7326316;
int64_t x417 = INT64_MIN;
static uint32_t x418 = UINT32_MAX;
volatile int64_t t92 = 1409763336929LL;
volatile uint16_t x423 = 500U;
static int32_t x424 = 142640625;
int16_t x431 = -1;
int8_t x435 = INT8_MIN;
static int64_t x441 = INT64_MAX;
uint16_t x447 = UINT16_MAX;
int8_t x448 = -1;
int32_t x449 = INT32_MIN;


void f0(void) {
	int32_t x2 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = 84;

	t0 = ((x1<x2)|(x3+x4));

	if (t0 != 383) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = 2652458;
	volatile uint32_t x7 = 207374U;
	volatile uint16_t x8 = 2723U;
	static uint32_t t1 = 920314U;

	t1 = ((x5<x6)|(x7+x8));

	if (t1 != 210097U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -241;
	int16_t x11 = -1;
	int32_t x12 = -6912;
	static volatile int32_t t2 = -4834;

	t2 = ((x9<x10)|(x11+x12));

	if (t2 != -6913) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 13LLU;
	int64_t x14 = 241580539298249LL;
	uint8_t x15 = UINT8_MAX;
	volatile uint16_t x16 = 126U;
	static volatile int32_t t3 = 8694;

	t3 = ((x13<x14)|(x15+x16));

	if (t3 != 381) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	int32_t x19 = 23;
	volatile uint32_t t4 = 296U;

	t4 = ((x17<x18)|(x19+x20));

	if (t4 != 205981223U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	volatile int64_t x22 = 1639LL;
	volatile uint16_t x23 = 5U;
	static int8_t x24 = INT8_MIN;

	t5 = ((x21<x22)|(x23+x24));

	if (t5 != -123) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = 0U;
	volatile int64_t x26 = -1LL;
	int16_t x27 = INT16_MAX;
	uint64_t x28 = UINT64_MAX;

	t6 = ((x25<x26)|(x27+x28));

	if (t6 != 32766LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int16_t x31 = -1;
	int32_t t7 = 138;

	t7 = ((x29<x30)|(x31+x32));

	if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	static volatile int32_t x34 = -35308;
	int16_t x35 = -1;
	int64_t x36 = -1LL;
	int64_t t8 = 93LL;

	t8 = ((x33<x34)|(x35+x36));

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = INT64_MAX;
	int8_t x39 = -1;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 774882;

	t9 = ((x37<x38)|(x39+x40));

	if (t9 != -129) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	int32_t x43 = 291108;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -4;

	t10 = ((x41<x42)|(x43+x44));

	if (t10 != 291235) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	uint16_t x46 = 1601U;
	static int64_t t11 = 842322142014057756LL;

	t11 = ((x45<x46)|(x47+x48));

	if (t11 != 240844085293506LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -8;
	static uint32_t x50 = 7913U;
	uint32_t x51 = 462097U;
	uint32_t t12 = 4859677U;

	t12 = ((x49<x50)|(x51+x52));

	if (t12 != 2147945745U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	volatile uint64_t x54 = UINT64_MAX;
	int32_t x55 = 2442;
	static int8_t x56 = -1;

	t13 = ((x53<x54)|(x55+x56));

	if (t13 != 2441) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -1;
	static int16_t x59 = 9443;
	volatile uint8_t x60 = UINT8_MAX;
	static int32_t t14 = 44013;

	t14 = ((x57<x58)|(x59+x60));

	if (t14 != 9699) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = 6355U;
	volatile int16_t x64 = -1;
	volatile uint32_t t15 = 1886U;

	t15 = ((x61<x62)|(x63+x64));

	if (t15 != 6354U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	static int8_t x66 = -1;
	volatile int8_t x67 = -1;

	t16 = ((x65<x66)|(x67+x68));

	if (t16 != -129) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 505;
	volatile int64_t x70 = -164561288LL;
	uint16_t x71 = 38U;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = 8076980;

	t17 = ((x69<x70)|(x71+x72));

	if (t17 != 293) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 15U;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 25031U;

	t18 = ((x73<x74)|(x75+x76));

	if (t18 != 24903U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x79 = INT32_MIN;
	static int64_t t19 = 0LL;

	t19 = ((x77<x78)|(x79+x80));

	if (t19 != -2147483649LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = 0;
	volatile int16_t x82 = INT16_MAX;
	int8_t x83 = -47;
	int32_t t20 = 514013;

	t20 = ((x81<x82)|(x83+x84));

	if (t20 != 65489) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 29605548455LLU;
	static int64_t x87 = -500031377087126LL;
	uint32_t x88 = 2294025U;
	int64_t t21 = -124939081208LL;

	t21 = ((x85<x86)|(x87+x88));

	if (t21 != -500031374793101LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = 1;
	volatile int64_t x94 = INT64_MIN;
	uint64_t x95 = 107885272LLU;
	volatile int64_t x96 = 1LL;

	t22 = ((x93<x94)|(x95+x96));

	if (t22 != 107885273LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = 7152729U;
	volatile uint8_t x98 = 11U;
	static volatile int32_t x99 = -3724631;
	uint8_t x100 = UINT8_MAX;
	static volatile int32_t t23 = 7346;

	t23 = ((x97<x98)|(x99+x100));

	if (t23 != -3724376) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x102 = 14U;
	int16_t x103 = INT16_MAX;
	int32_t t24 = -776593288;

	t24 = ((x101<x102)|(x103+x104));

	if (t24 != 98302) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	int16_t x108 = -1;
	static int64_t t25 = 21708173244851LL;

	t25 = ((x105<x106)|(x107+x108));

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 234;
	int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	static int32_t x112 = -1;

	t26 = ((x109<x110)|(x111+x112));

	if (t26 != -129) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x118 = 1;
	int8_t x119 = -6;

	t27 = ((x117<x118)|(x119+x120));

	if (t27 != -32773) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MIN;
	static int8_t x123 = -56;
	int8_t x124 = INT8_MIN;
	int32_t t28 = -30157;

	t28 = ((x121<x122)|(x123+x124));

	if (t28 != -184) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 4;
	int16_t x126 = -1;
	static int64_t x127 = -1LL;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t29 = -122891446LL;

	t29 = ((x125<x126)|(x127+x128));

	if (t29 != 4294967294LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = 52;
	int32_t x130 = -1744;
	uint16_t x131 = UINT16_MAX;
	static uint16_t x132 = UINT16_MAX;
	volatile int32_t t30 = 4;

	t30 = ((x129<x130)|(x131+x132));

	if (t30 != 131070) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = INT8_MIN;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = -1;

	t31 = ((x133<x134)|(x135+x136));

	if (t31 != -32769) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = INT64_MIN;
	volatile int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t32 = 16129;

	t32 = ((x137<x138)|(x139+x140));

	if (t32 != 32639) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int16_t x147 = -1;
	volatile uint8_t x148 = UINT8_MAX;

	t33 = ((x145<x146)|(x147+x148));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x149 = INT64_MIN;
	volatile int64_t x150 = INT64_MIN;
	volatile uint16_t x151 = 1U;
	volatile uint64_t t34 = 4181785LLU;

	t34 = ((x149<x150)|(x151+x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x157 = 3594U;
	static int16_t x158 = -1;
	static int8_t x159 = INT8_MAX;
	volatile uint16_t x160 = 2769U;
	volatile int32_t t35 = 29093088;

	t35 = ((x157<x158)|(x159+x160));

	if (t35 != 2896) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	static int32_t x166 = -1;
	int16_t x167 = INT16_MIN;
	volatile uint64_t t36 = 154LLU;

	t36 = ((x165<x166)|(x167+x168));

	if (t36 != 871518273047841587LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x169 = 274355598LLU;
	int16_t x171 = -43;
	uint8_t x172 = 26U;
	static volatile int32_t t37 = -443274889;

	t37 = ((x169<x170)|(x171+x172));

	if (t37 != -17) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 26U;
	int32_t x174 = 4;
	volatile int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t38 = 19826;

	t38 = ((x173<x174)|(x175+x176));

	if (t38 != -32896) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x178 = 613U;
	int8_t x179 = -1;
	volatile int32_t t39 = -767625470;

	t39 = ((x177<x178)|(x179+x180));

	if (t39 != -129) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MIN;
	static volatile uint64_t x190 = UINT64_MAX;
	volatile int64_t x192 = -4167878788352LL;

	t40 = ((x189<x190)|(x191+x192));

	if (t40 != -4163583821057LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x194 = 206535720LL;
	int32_t x195 = -504702008;
	volatile int32_t x196 = INT32_MAX;

	t41 = ((x193<x194)|(x195+x196));

	if (t41 != 1642781639) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x198 = -297615;
	volatile int8_t x200 = INT8_MIN;
	volatile uint64_t t42 = 451002LLU;

	t42 = ((x197<x198)|(x199+x200));

	if (t42 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MAX;
	volatile int8_t x202 = -61;
	uint8_t x203 = UINT8_MAX;
	int32_t x204 = -405902;
	int32_t t43 = 15603968;

	t43 = ((x201<x202)|(x203+x204));

	if (t43 != -405647) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x205 = UINT16_MAX;
	volatile uint16_t x206 = 4U;
	int16_t x207 = INT16_MAX;
	static int64_t x208 = -1LL;
	volatile int64_t t44 = -6733LL;

	t44 = ((x205<x206)|(x207+x208));

	if (t44 != 32766LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = -4;
	uint32_t x212 = 1U;
	volatile uint32_t t45 = 1022349758U;

	t45 = ((x209<x210)|(x211+x212));

	if (t45 != 4294934529U) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x213 = INT8_MAX;
	int32_t x215 = INT32_MAX;
	uint32_t t46 = 3U;

	t46 = ((x213<x214)|(x215+x216));

	if (t46 != 2147904910U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = 7755086919324105547LLU;
	uint8_t x219 = 76U;
	static int8_t x220 = 27;
	int32_t t47 = 54532;

	t47 = ((x217<x218)|(x219+x220));

	if (t47 != 103) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = -1;
	uint16_t x222 = 27737U;
	uint16_t x223 = 2U;
	volatile int32_t t48 = -4142407;

	t48 = ((x221<x222)|(x223+x224));

	if (t48 != -5) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x225 = 11315211634LLU;
	static int32_t x228 = 316;

	t49 = ((x225<x226)|(x227+x228));

	if (t49 != 14724) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = -102;
	uint8_t x230 = 103U;
	static volatile uint32_t x232 = UINT32_MAX;
	volatile int64_t t50 = 170617005LL;

	t50 = ((x229<x230)|(x231+x232));

	if (t50 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t51 = 6489003;

	t51 = ((x233<x234)|(x235+x236));

	if (t51 != -256) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x237 = 1037847700632466LLU;
	int8_t x239 = -7;
	uint32_t x240 = 457596U;

	t52 = ((x237<x238)|(x239+x240));

	if (t52 != 457589U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x241 = 58504171590LLU;
	int8_t x243 = -1;
	uint8_t x244 = 3U;

	t53 = ((x241<x242)|(x243+x244));

	if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x246 = 2871300LLU;
	volatile int8_t x247 = INT8_MIN;
	int64_t x248 = -1LL;
	volatile int64_t t54 = 226423060913LL;

	t54 = ((x245<x246)|(x247+x248));

	if (t54 != -129LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	volatile int32_t t55 = 37862;

	t55 = ((x249<x250)|(x251+x252));

	if (t55 != -32895) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x257 = -1;
	int64_t x258 = -1LL;
	int8_t x259 = 1;
	volatile int32_t x260 = -598788;

	t56 = ((x257<x258)|(x259+x260));

	if (t56 != -598787) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = INT16_MAX;
	uint32_t x267 = 1555597U;
	uint64_t t57 = 62LLU;

	t57 = ((x265<x266)|(x267+x268));

	if (t57 != 1555596LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = INT32_MIN;
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MAX;

	t58 = ((x269<x270)|(x271+x272));

	if (t58 != 2161905797LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x273 = 628U;
	volatile int32_t x274 = -1770046;
	int16_t x276 = INT16_MAX;
	static volatile int32_t t59 = 0;

	t59 = ((x273<x274)|(x275+x276));

	if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = 2U;
	uint16_t x279 = 241U;
	static int16_t x280 = -11319;
	volatile int32_t t60 = 1;

	t60 = ((x277<x278)|(x279+x280));

	if (t60 != -11078) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x281 = -1LL;
	int16_t x282 = 11953;
	static int32_t x283 = 75714477;
	int32_t x284 = -1;
	int32_t t61 = 399091161;

	t61 = ((x281<x282)|(x283+x284));

	if (t61 != 75714477) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x285 = -1;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;

	t62 = ((x285<x286)|(x287+x288));

	if (t62 != -65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = UINT32_MAX;
	int64_t x290 = -5LL;
	int16_t x291 = INT16_MIN;
	static int32_t x292 = 84;
	static int32_t t63 = -64;

	t63 = ((x289<x290)|(x291+x292));

	if (t63 != -32684) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = -1;
	int32_t x294 = -450056;
	volatile int16_t x295 = -1;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t64 = -259;

	t64 = ((x293<x294)|(x295+x296));

	if (t64 != -129) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	volatile int32_t x300 = -872537;
	volatile int32_t t65 = 0;

	t65 = ((x297<x298)|(x299+x300));

	if (t65 != -872665) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MAX;
	int32_t x302 = INT32_MIN;
	volatile uint16_t x304 = UINT16_MAX;

	t66 = ((x301<x302)|(x303+x304));

	if (t66 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x306 = -1LL;
	int8_t x307 = 1;
	int64_t t67 = -2LL;

	t67 = ((x305<x306)|(x307+x308));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x309 = 9LLU;
	volatile int8_t x310 = INT8_MIN;
	volatile int16_t x311 = INT16_MAX;
	uint64_t x312 = 8502389531028919LLU;

	t68 = ((x309<x310)|(x311+x312));

	if (t68 != 8502389531061687LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = 101910005532LL;
	static int8_t x314 = -1;
	uint16_t x315 = 11279U;
	volatile int32_t t69 = 1560;

	t69 = ((x313<x314)|(x315+x316));

	if (t69 != 15129) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x318 = 8U;
	int16_t x319 = 3;
	static int16_t x320 = INT16_MIN;
	int32_t t70 = 541490;

	t70 = ((x317<x318)|(x319+x320));

	if (t70 != -32765) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x321 = INT16_MIN;
	int8_t x322 = 0;
	volatile int32_t x323 = -751;
	int32_t x324 = -1;
	volatile int32_t t71 = 36484;

	t71 = ((x321<x322)|(x323+x324));

	if (t71 != -751) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MAX;
	int8_t x327 = INT8_MAX;
	static uint64_t x328 = UINT64_MAX;
	volatile uint64_t t72 = 15522076LLU;

	t72 = ((x325<x326)|(x327+x328));

	if (t72 != 126LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x329 = UINT64_MAX;
	static int32_t x331 = INT32_MIN;
	int32_t t73 = 2685785;

	t73 = ((x329<x330)|(x331+x332));

	if (t73 != -2147123544) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x334 = UINT16_MAX;
	static int64_t x335 = INT64_MAX;
	int64_t x336 = INT64_MIN;
	int64_t t74 = 12133545299472LL;

	t74 = ((x333<x334)|(x335+x336));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x337 = 1345U;
	int64_t x338 = -1LL;
	static uint8_t x339 = 0U;
	uint32_t x340 = 489U;
	volatile uint32_t t75 = 24U;

	t75 = ((x337<x338)|(x339+x340));

	if (t75 != 489U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x341 = UINT8_MAX;
	static int32_t x342 = -24162;
	volatile int32_t x343 = 53714;
	int32_t t76 = -254645;

	t76 = ((x341<x342)|(x343+x344));

	if (t76 != 53707) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x346 = 1869910U;
	uint8_t x347 = 11U;
	static uint8_t x348 = 9U;

	t77 = ((x345<x346)|(x347+x348));

	if (t77 != 21) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x353 = 0;
	int16_t x354 = INT16_MIN;
	int32_t x355 = -1;
	static int64_t t78 = 333LL;

	t78 = ((x353<x354)|(x355+x356));

	if (t78 != -38390498348698LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x358 = -1;
	int64_t x359 = INT64_MIN;
	uint8_t x360 = 0U;
	static volatile int64_t t79 = INT64_MIN;

	t79 = ((x357<x358)|(x359+x360));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x361 = 1021LLU;
	int32_t x362 = 1040594;
	uint64_t x363 = UINT64_MAX;

	t80 = ((x361<x362)|(x363+x364));

	if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = -398535277964LL;
	int16_t x368 = -155;
	int32_t t81 = 29781986;

	t81 = ((x365<x366)|(x367+x368));

	if (t81 != -155) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x370 = -1;
	int64_t x372 = INT64_MIN;
	volatile int64_t t82 = -707495LL;

	t82 = ((x369<x370)|(x371+x372));

	if (t82 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x374 = -1;
	volatile int64_t x375 = -5223996019LL;
	int16_t x376 = INT16_MIN;
	volatile int64_t t83 = -5310738689LL;

	t83 = ((x373<x374)|(x375+x376));

	if (t83 != -5224028787LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x377 = UINT64_MAX;
	int32_t x378 = -1;
	static int64_t x379 = INT64_MIN;
	static uint16_t x380 = 3732U;
	volatile int64_t t84 = 483406LL;

	t84 = ((x377<x378)|(x379+x380));

	if (t84 != -9223372036854772076LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 175U;
	static int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MAX;
	int32_t x384 = -1;
	static volatile int64_t t85 = INT64_MAX;

	t85 = ((x381<x382)|(x383+x384));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x385 = 443U;
	int64_t x386 = -1LL;
	uint64_t x388 = 8545889LLU;
	volatile uint64_t t86 = 168219585090434359LLU;

	t86 = ((x385<x386)|(x387+x388));

	if (t86 != 8611424LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x389 = 8905700591016040LL;
	static int32_t x390 = INT32_MIN;
	static volatile int8_t x391 = INT8_MIN;
	int32_t t87 = -3585;

	t87 = ((x389<x390)|(x391+x392));

	if (t87 != -107) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MAX;
	static uint64_t x394 = 5LLU;
	volatile int64_t x396 = -122019LL;

	t88 = ((x393<x394)|(x395+x396));

	if (t88 != 2147361628LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MIN;
	int16_t x399 = 11288;
	static volatile int32_t x400 = INT32_MIN;
	volatile int32_t t89 = -264531;

	t89 = ((x397<x398)|(x399+x400));

	if (t89 != -2147472360) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = -1;
	static uint8_t x407 = 2U;
	uint64_t t90 = 400448LLU;

	t90 = ((x405<x406)|(x407+x408));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x413 = 1635328626748326LLU;
	volatile int16_t x415 = -1;
	volatile int8_t x416 = -1;

	t91 = ((x413<x414)|(x415+x416));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x419 = 211366LL;
	volatile uint16_t x420 = UINT16_MAX;

	t92 = ((x417<x418)|(x419+x420));

	if (t92 != 276901LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MIN;
	uint32_t x422 = 94574013U;
	volatile int32_t t93 = 4343066;

	t93 = ((x421<x422)|(x423+x424));

	if (t93 != 142641125) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = INT64_MIN;
	int64_t x432 = -28561063154471LL;
	static volatile int64_t t94 = 864966061836LL;

	t94 = ((x429<x430)|(x431+x432));

	if (t94 != -28561063154472LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x433 = 19U;
	int32_t x434 = -1;
	uint32_t x436 = 5U;
	uint32_t t95 = 1689U;

	t95 = ((x433<x434)|(x435+x436));

	if (t95 != 4294967173U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x437 = 5U;
	int32_t x438 = INT32_MAX;
	static uint32_t x439 = UINT32_MAX;
	int32_t x440 = INT32_MIN;
	static uint32_t t96 = 2024223U;

	t96 = ((x437<x438)|(x439+x440));

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x442 = -1;
	volatile uint32_t x443 = 107556047U;
	int16_t x444 = 36;
	uint32_t t97 = 15761928U;

	t97 = ((x441<x442)|(x443+x444));

	if (t97 != 107556083U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x445 = -4;
	int32_t x446 = -1;
	volatile int32_t t98 = -14889;

	t98 = ((x445<x446)|(x447+x448));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x450 = UINT8_MAX;
	uint32_t x451 = 186812964U;
	static int32_t x452 = 24144;
	static volatile uint32_t t99 = 187406773U;

	t99 = ((x449<x450)|(x451+x452));

	if (t99 != 186837109U) { NG(); } else { ; }
	
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

