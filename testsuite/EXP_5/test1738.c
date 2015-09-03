#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = INT64_MIN;
int8_t x10 = -1;
int8_t x14 = INT8_MAX;
uint32_t x16 = 52470475U;
int8_t x28 = INT8_MIN;
int16_t x29 = INT16_MAX;
int32_t t8 = -26153450;
int8_t x37 = INT8_MIN;
uint16_t x40 = 14U;
volatile int32_t t10 = 7;
int64_t x45 = -1LL;
int16_t x49 = INT16_MAX;
uint64_t x54 = 101151374LLU;
int8_t x59 = -1;
uint64_t x60 = UINT64_MAX;
int32_t x61 = -3079;
uint64_t x63 = UINT64_MAX;
int64_t x64 = INT64_MIN;
volatile uint16_t x68 = 110U;
static int64_t x69 = -413506020091425LL;
int16_t x70 = INT16_MAX;
uint16_t x73 = 1U;
uint8_t x74 = 13U;
int32_t t19 = 2;
int64_t x81 = INT64_MIN;
volatile int32_t t20 = -15184;
uint64_t x86 = UINT64_MAX;
uint32_t x88 = 126027231U;
static volatile int64_t x93 = INT64_MAX;
static int32_t t23 = 97610;
static volatile int32_t t25 = -22;
static int32_t x105 = -36914;
static int32_t t26 = 1;
uint32_t x113 = UINT32_MAX;
int8_t x116 = INT8_MIN;
uint16_t x120 = 772U;
int32_t t29 = -582;
int32_t x126 = 38596430;
int8_t x129 = INT8_MAX;
int32_t t32 = -12645746;
static int32_t t33 = -80167940;
int64_t x137 = INT64_MAX;
int64_t x141 = INT64_MIN;
volatile int16_t x143 = INT16_MIN;
volatile int64_t x144 = -308835739LL;
static volatile int32_t t35 = 9699851;
int8_t x146 = INT8_MIN;
static uint16_t x151 = 188U;
int32_t t37 = 248;
int32_t x158 = INT32_MIN;
int16_t x168 = INT16_MIN;
static volatile int64_t x169 = INT64_MAX;
int8_t x170 = INT8_MIN;
volatile int32_t x181 = 19;
static int32_t x189 = INT32_MIN;
int8_t x190 = -4;
static volatile int16_t x197 = INT16_MIN;
int32_t t49 = -6;
int32_t x201 = -1;
static int8_t x207 = INT8_MAX;
int64_t x208 = -1LL;
volatile int32_t t51 = 30351;
static volatile int32_t t52 = -4013388;
static volatile int64_t x213 = -1LL;
int32_t t55 = -507203716;
uint32_t x225 = 165882U;
volatile int32_t t56 = 252541;
static int8_t x232 = -15;
int32_t x234 = 1;
uint16_t x240 = 22726U;
int16_t x246 = 7;
int32_t x253 = INT32_MIN;
static int16_t x255 = -379;
uint16_t x260 = UINT16_MAX;
int8_t x265 = -1;
volatile int32_t t67 = -5305014;
int16_t x277 = -216;
int8_t x282 = -1;
int16_t x284 = INT16_MIN;
volatile int32_t t72 = -144346;
int32_t x304 = -1876058;
int32_t t75 = 14;
int8_t x309 = -1;
int32_t x312 = -38100708;
volatile int16_t x317 = 4;
uint32_t x318 = 4U;
volatile int16_t x324 = 476;
int32_t t79 = 7;
int32_t x334 = -1;
static int32_t x335 = INT32_MAX;
volatile uint64_t x336 = 145861179891LLU;
int32_t t83 = 13;
volatile int16_t x344 = -255;
int32_t x346 = 7144603;
static int32_t t86 = -12583;
uint64_t x359 = 468706599LLU;
static int64_t x378 = INT64_MIN;
volatile int32_t t93 = -1739;
static int64_t x383 = INT64_MIN;
uint32_t x389 = 4061188U;
uint32_t x391 = UINT32_MAX;
volatile int32_t t96 = 193380876;
static int32_t x396 = INT32_MIN;
static volatile uint8_t x403 = 125U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MAX;
	int32_t t0 = -359381911;

	t0 = (x1<((x2&x3)/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -23577134LL;
	int32_t x6 = -1;
	int64_t x7 = 5LL;
	int64_t x8 = INT64_MAX;
	int32_t t1 = -379;

	t1 = (x5<((x6&x7)/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 11663U;
	int64_t x11 = -1LL;
	int32_t x12 = -1;
	volatile int32_t t2 = 3308258;

	t2 = (x9<((x10&x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x15 = -1;
	int32_t t3 = -109438136;

	t3 = (x13<((x14&x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 445737U;
	int32_t x18 = -1;
	uint8_t x19 = 3U;
	int16_t x20 = -1;
	static volatile int32_t t4 = -15359;

	t4 = (x17<((x18&x19)/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 2U;
	volatile uint64_t x22 = 8552089910008702LLU;
	volatile uint32_t x23 = 149U;
	int16_t x24 = -1;
	int32_t t5 = 1;

	t5 = (x21<((x22&x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = INT32_MIN;
	static int32_t t6 = -326805148;

	t6 = (x25<((x26&x27)/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x30 = 28039414817947LL;
	volatile uint16_t x31 = 6U;
	int32_t x32 = INT32_MAX;
	static volatile int32_t t7 = -4035;

	t7 = (x29<((x30&x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 13U;
	volatile int8_t x34 = 48;
	int32_t x35 = INT32_MIN;
	int64_t x36 = -515692725891950630LL;

	t8 = (x33<((x34&x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -2;
	static uint8_t x39 = 8U;
	volatile int32_t t9 = -531199715;

	t9 = (x37<((x38&x39)/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile int8_t x42 = INT8_MIN;
	static int8_t x43 = -1;
	volatile int16_t x44 = -1;

	t10 = (x41<((x42&x43)/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MIN;
	int64_t x47 = INT64_MAX;
	int64_t x48 = -1LL;
	int32_t t11 = 3458936;

	t11 = (x45<((x46&x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x50 = UINT16_MAX;
	uint8_t x51 = UINT8_MAX;
	static int64_t x52 = 7243543134052802LL;
	int32_t t12 = 17372963;

	t12 = (x49<((x50&x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 2887LLU;
	static volatile int64_t x55 = -2084145462056309LL;
	uint16_t x56 = 1U;
	int32_t t13 = -182668;

	t13 = (x53<((x54&x55)/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int8_t x58 = -1;
	volatile int32_t t14 = 4766;

	t14 = (x57<((x58&x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	volatile int32_t t15 = 447948;

	t15 = (x61<((x62&x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 37741313007103551LLU;
	static int32_t x66 = INT32_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	static int32_t t16 = 199241;

	t16 = (x65<((x66&x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x71 = INT16_MIN;
	static int64_t x72 = INT64_MAX;
	int32_t t17 = -159664932;

	t17 = (x69<((x70&x71)/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = 18U;
	volatile uint16_t x76 = UINT16_MAX;
	int32_t t18 = 31;

	t18 = (x73<((x74&x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = 693;
	volatile uint64_t x79 = 15469122LLU;
	int32_t x80 = 69;

	t19 = (x77<((x78&x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = UINT16_MAX;

	t20 = (x81<((x82&x83)/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 0;
	volatile int64_t x87 = 10264LL;
	int32_t t21 = -1961812;

	t21 = (x85<((x86&x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -1097617;
	int32_t x91 = -240;
	volatile int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 123;

	t22 = (x89<((x90&x91)/x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x94 = 1725U;
	uint16_t x95 = 66U;
	uint8_t x96 = UINT8_MAX;

	t23 = (x93<((x94&x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	volatile uint16_t x98 = 92U;
	uint64_t x99 = 3354724105148LLU;
	static int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 30908268;

	t24 = (x97<((x98&x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	uint16_t x102 = 248U;
	int16_t x103 = -12;
	int64_t x104 = -1LL;

	t25 = (x101<((x102&x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 50U;
	volatile int32_t x107 = INT32_MAX;
	uint8_t x108 = 2U;

	t26 = (x105<((x106&x107)/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static int64_t x110 = 5835641LL;
	static uint8_t x111 = UINT8_MAX;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = 6327859;

	t27 = (x109<((x110&x111)/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = 0;
	static uint64_t x115 = UINT64_MAX;
	volatile int32_t t28 = 6;

	t28 = (x113<((x114&x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MAX;
	volatile int8_t x119 = INT8_MIN;

	t29 = (x117<((x118&x119)/x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = -29856LL;
	uint32_t x122 = 1U;
	uint8_t x123 = 0U;
	int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = -16685274;

	t30 = (x121<((x122&x123)/x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x127 = 717U;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t31 = -213;

	t31 = (x125<((x126&x127)/x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x130 = 113034096919LL;
	int16_t x131 = 1997;
	int16_t x132 = INT16_MIN;

	t32 = (x129<((x130&x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	volatile uint8_t x134 = 10U;
	volatile uint16_t x135 = UINT16_MAX;
	static int8_t x136 = -61;

	t33 = (x133<((x134&x135)/x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = 460LL;
	static int64_t x139 = -5064873LL;
	int64_t x140 = 10740305698034691LL;
	int32_t t34 = -2;

	t34 = (x137<((x138&x139)/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x142 = -1;

	t35 = (x141<((x142&x143)/x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint8_t x147 = 1U;
	int64_t x148 = -1302273LL;
	volatile int32_t t36 = -263361415;

	t36 = (x145<((x146&x147)/x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	volatile int8_t x152 = INT8_MIN;

	t37 = (x149<((x150&x151)/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 11910LL;
	int32_t x154 = INT32_MAX;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = -1LL;
	static int32_t t38 = 643819697;

	t38 = (x153<((x154&x155)/x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -1;
	volatile int16_t x159 = 0;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t39 = -28184;

	t39 = (x157<((x158&x159)/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = -44;
	int16_t x163 = 6121;
	static int16_t x164 = INT16_MIN;
	static volatile int32_t t40 = -26;

	t40 = (x161<((x162&x163)/x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x165 = 117103345436LLU;
	uint64_t x166 = 401LLU;
	volatile int64_t x167 = INT64_MIN;
	volatile int32_t t41 = -63;

	t41 = (x165<((x166&x167)/x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t42 = -10811;

	t42 = (x169<((x170&x171)/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = -1LL;
	volatile uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -1358;

	t43 = (x173<((x174&x175)/x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 600120LLU;
	uint32_t x178 = 199107U;
	int32_t x179 = 132453409;
	static volatile int16_t x180 = 3865;
	int32_t t44 = 245551177;

	t44 = (x177<((x178&x179)/x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = -813335040;
	int32_t x183 = -1;
	uint16_t x184 = 7U;
	int32_t t45 = -360909;

	t45 = (x181<((x182&x183)/x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	uint16_t x186 = UINT16_MAX;
	static uint32_t x187 = UINT32_MAX;
	int64_t x188 = -3991LL;
	int32_t t46 = -975668;

	t46 = (x185<((x186&x187)/x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x191 = 1754U;
	int64_t x192 = INT64_MIN;
	static volatile int32_t t47 = -4134205;

	t47 = (x189<((x190&x191)/x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int64_t x194 = 16273558738815929LL;
	volatile int64_t x195 = INT64_MIN;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -22;

	t48 = (x193<((x194&x195)/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -1;

	t49 = (x197<((x198&x199)/x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 6U;
	volatile int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t50 = 23667317;

	t50 = (x201<((x202&x203)/x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	volatile int16_t x206 = INT16_MIN;

	t51 = (x205<((x206&x207)/x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	static volatile uint64_t x210 = 15LLU;
	static uint16_t x211 = 944U;
	uint32_t x212 = 210935U;

	t52 = (x209<((x210&x211)/x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = UINT64_MAX;
	static uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t53 = -1643;

	t53 = (x213<((x214&x215)/x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	volatile uint8_t x218 = 0U;
	uint16_t x219 = 1U;
	static volatile uint16_t x220 = UINT16_MAX;
	int32_t t54 = 0;

	t54 = (x217<((x218&x219)/x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -8705369;
	static uint16_t x222 = UINT16_MAX;
	volatile uint32_t x223 = 92U;
	volatile int8_t x224 = -1;

	t55 = (x221<((x222&x223)/x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = INT16_MAX;
	int16_t x227 = 3774;
	int8_t x228 = -1;

	t56 = (x225<((x226&x227)/x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MAX;
	int64_t x230 = -20186LL;
	int32_t x231 = INT32_MIN;
	int32_t t57 = 461;

	t57 = (x229<((x230&x231)/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	uint16_t x235 = UINT16_MAX;
	int8_t x236 = -1;
	static int32_t t58 = 3012917;

	t58 = (x233<((x234&x235)/x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	int16_t x238 = -50;
	static int8_t x239 = INT8_MIN;
	int32_t t59 = 4;

	t59 = (x237<((x238&x239)/x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = INT32_MIN;
	int64_t x243 = -1LL;
	uint32_t x244 = 9727U;
	int32_t t60 = 29159251;

	t60 = (x241<((x242&x243)/x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 6U;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = 18458711928LLU;
	volatile int32_t t61 = -3035;

	t61 = (x245<((x246&x247)/x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MIN;
	int8_t x252 = -61;
	static volatile int32_t t62 = -2;

	t62 = (x249<((x250&x251)/x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = UINT8_MAX;
	static int64_t x256 = -1775554441354LL;
	int32_t t63 = 1876;

	t63 = (x253<((x254&x255)/x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 7171728892469795LLU;
	uint64_t x258 = 55361LLU;
	static int32_t x259 = 126;
	int32_t t64 = -55944;

	t64 = (x257<((x258&x259)/x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	int8_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	volatile int64_t x264 = 20094092943082618LL;
	int32_t t65 = 5565059;

	t65 = (x261<((x262&x263)/x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	int32_t x268 = -23;
	volatile int32_t t66 = -7960172;

	t66 = (x265<((x266&x267)/x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x269 = INT8_MAX;
	static int64_t x270 = 33731838LL;
	static uint16_t x271 = 1U;
	uint32_t x272 = UINT32_MAX;

	t67 = (x269<((x270&x271)/x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 5827;

	t68 = (x273<((x274&x275)/x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = -1;
	static uint8_t x279 = UINT8_MAX;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 1733686;

	t69 = (x277<((x278&x279)/x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	uint16_t x283 = 29U;
	int32_t t70 = -2470216;

	t70 = (x281<((x282&x283)/x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x289 = INT8_MIN;
	volatile int16_t x290 = -12;
	int32_t x291 = INT32_MAX;
	int8_t x292 = -1;
	volatile int32_t t71 = -259144917;

	t71 = (x289<((x290&x291)/x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -1;
	static int8_t x294 = INT8_MIN;
	static volatile int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MIN;

	t72 = (x293<((x294&x295)/x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 43U;
	int16_t x298 = INT16_MAX;
	volatile int32_t x299 = INT32_MAX;
	static volatile int32_t x300 = 692856454;
	int32_t t73 = -1;

	t73 = (x297<((x298&x299)/x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = -1;
	int32_t x302 = INT32_MIN;
	int16_t x303 = 1;
	int32_t t74 = -60478;

	t74 = (x301<((x302&x303)/x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -1;
	int8_t x306 = -1;
	volatile int32_t x307 = INT32_MIN;
	int16_t x308 = -33;

	t75 = (x305<((x306&x307)/x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	int32_t t76 = 3579;

	t76 = (x309<((x310&x311)/x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = -9;
	int32_t t77 = -2004678;

	t77 = (x313<((x314&x315)/x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x319 = 323086264U;
	volatile int16_t x320 = -1;
	volatile int32_t t78 = -4607790;

	t78 = (x317<((x318&x319)/x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = 58241115130041271LLU;
	uint32_t x322 = 35446U;
	static volatile int64_t x323 = -271146623083LL;

	t79 = (x321<((x322&x323)/x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = INT32_MIN;
	int64_t x326 = -3866LL;
	uint32_t x327 = UINT32_MAX;
	static volatile uint8_t x328 = UINT8_MAX;
	volatile int32_t t80 = 0;

	t80 = (x325<((x326&x327)/x328));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = 395776680256115925LL;
	uint32_t x330 = 168694656U;
	int64_t x331 = INT64_MIN;
	volatile uint32_t x332 = 123U;
	int32_t t81 = -55212375;

	t81 = (x329<((x330&x331)/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x333 = 6U;
	int32_t t82 = 410222180;

	t82 = (x333<((x334&x335)/x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x337 = 4620U;
	static int32_t x338 = 706855;
	int8_t x339 = 11;
	static uint32_t x340 = 147876237U;

	t83 = (x337<((x338&x339)/x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x341 = 16939595844LLU;
	int16_t x342 = INT16_MIN;
	int8_t x343 = -14;
	int32_t t84 = 115223;

	t84 = (x341<((x342&x343)/x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = UINT32_MAX;
	static int32_t x347 = INT32_MAX;
	int32_t x348 = -1;
	int32_t t85 = -8676;

	t85 = (x345<((x346&x347)/x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MIN;
	volatile int8_t x350 = -1;
	static int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MIN;

	t86 = (x349<((x350&x351)/x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x353 = 2528LLU;
	static int8_t x354 = -1;
	static uint32_t x355 = 1U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t87 = -5071;

	t87 = (x353<((x354&x355)/x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x357 = INT64_MIN;
	static int64_t x358 = INT64_MIN;
	uint32_t x360 = 978U;
	static volatile int32_t t88 = 2926557;

	t88 = (x357<((x358&x359)/x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MAX;
	int16_t x363 = INT16_MIN;
	int16_t x364 = INT16_MAX;
	int32_t t89 = 434911700;

	t89 = (x361<((x362&x363)/x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x365 = 54U;
	static uint16_t x366 = UINT16_MAX;
	int64_t x367 = 26065717607345661LL;
	int8_t x368 = INT8_MIN;
	volatile int32_t t90 = -16;

	t90 = (x365<((x366&x367)/x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x369 = INT16_MIN;
	uint64_t x370 = 75290070752655LLU;
	volatile int64_t x371 = -58LL;
	int8_t x372 = INT8_MIN;
	int32_t t91 = -225594;

	t91 = (x369<((x370&x371)/x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = 6849202712042LLU;
	volatile uint8_t x375 = 1U;
	int16_t x376 = -1;
	volatile int32_t t92 = 3;

	t92 = (x373<((x374&x375)/x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x377 = 28U;
	static uint32_t x379 = 4618U;
	volatile int16_t x380 = INT16_MIN;

	t93 = (x377<((x378&x379)/x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = -7LL;
	uint32_t x382 = UINT32_MAX;
	int16_t x384 = INT16_MAX;
	int32_t t94 = -1;

	t94 = (x381<((x382&x383)/x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = 1966;
	int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MAX;
	int64_t x388 = 25931882LL;
	static volatile int32_t t95 = 1;

	t95 = (x385<((x386&x387)/x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x390 = -1;
	int32_t x392 = INT32_MIN;

	t96 = (x389<((x390&x391)/x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x393 = UINT8_MAX;
	volatile uint32_t x394 = 127400834U;
	static int64_t x395 = 50382909831LL;
	volatile int32_t t97 = 8457;

	t97 = (x393<((x394&x395)/x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = 1431U;
	int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	volatile int32_t t98 = -285;

	t98 = (x397<((x398&x399)/x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MIN;
	static volatile int16_t x402 = -1;
	int16_t x404 = INT16_MIN;
	int32_t t99 = 1;

	t99 = (x401<((x402&x403)/x404));

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

