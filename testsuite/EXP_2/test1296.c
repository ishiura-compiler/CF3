#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x12 = 127979646U;
volatile int32_t t2 = 992;
uint16_t x15 = 0U;
volatile uint16_t x24 = UINT16_MAX;
int32_t t5 = -1;
uint16_t x41 = 1U;
volatile int32_t x42 = INT32_MAX;
volatile int32_t t10 = 231675716;
int32_t x45 = INT32_MAX;
int8_t x52 = -1;
static volatile uint16_t x59 = 16695U;
int32_t t14 = -25363;
int8_t x62 = -1;
int64_t x63 = INT64_MAX;
int32_t t17 = -1;
int8_t x76 = 1;
volatile int8_t x84 = 18;
int8_t x85 = INT8_MAX;
static volatile int64_t x96 = INT64_MIN;
volatile int32_t t24 = -24775695;
static int32_t x103 = INT32_MIN;
uint64_t x104 = 368432450137967546LLU;
uint8_t x106 = 6U;
int64_t x109 = INT64_MIN;
int32_t x112 = -1;
volatile int32_t t27 = -905556977;
volatile uint32_t x119 = UINT32_MAX;
volatile int8_t x125 = INT8_MIN;
int32_t t32 = 9599;
static uint8_t x134 = 30U;
static int32_t x135 = INT32_MIN;
int32_t x143 = INT32_MIN;
int32_t t36 = -153772000;
volatile int32_t t40 = 28;
int64_t x166 = INT64_MIN;
volatile uint32_t x168 = 15U;
int32_t t41 = -341007201;
uint64_t x169 = 45527926610LLU;
volatile int8_t x172 = INT8_MAX;
volatile int32_t t42 = 2920682;
int64_t x173 = 13561LL;
static volatile uint8_t x175 = 2U;
int16_t x185 = INT16_MIN;
uint32_t x187 = UINT32_MAX;
int64_t x189 = 11230138111678222LL;
static uint64_t x194 = UINT64_MAX;
int32_t t48 = -43409333;
int64_t x204 = 420609177575722LL;
volatile uint32_t x205 = UINT32_MAX;
int64_t x208 = -150006LL;
volatile int32_t t51 = 7763;
int16_t x213 = INT16_MIN;
static int16_t x222 = INT16_MIN;
int32_t x224 = INT32_MIN;
static volatile int16_t x225 = INT16_MIN;
int16_t x228 = INT16_MIN;
int32_t t56 = 27767;
int8_t x240 = 1;
int64_t x242 = 251548095LL;
volatile uint64_t x243 = 2485009253544LLU;
volatile uint32_t x254 = 15262U;
uint8_t x256 = 4U;
int32_t x257 = -1;
static int64_t x258 = INT64_MIN;
uint32_t x260 = UINT32_MAX;
int32_t t64 = 3629;
int32_t t65 = -25987;
int8_t x272 = -1;
static volatile int32_t t67 = 0;
static int16_t x277 = -6917;
static uint16_t x280 = 9485U;
int16_t x282 = INT16_MIN;
static int32_t x288 = -1;
int32_t x296 = -16333;
uint64_t x299 = 618728857750336591LLU;
int8_t x304 = INT8_MIN;
static int32_t x305 = INT32_MAX;
static volatile int32_t t78 = 36146;
int8_t x317 = INT8_MIN;
int16_t x319 = -85;
uint8_t x326 = 1U;
volatile int16_t x329 = -6;
static int8_t x330 = INT8_MAX;
uint8_t x341 = 4U;
int16_t x343 = INT16_MIN;
uint16_t x344 = 0U;
uint32_t x349 = UINT32_MAX;
static int32_t t88 = 378;
int32_t x359 = INT32_MAX;
static volatile int64_t x362 = 14526998331LL;
int8_t x363 = INT8_MIN;
uint32_t x364 = UINT32_MAX;
int64_t x367 = INT64_MIN;
int32_t t92 = 16907;
volatile int8_t x377 = -1;
uint16_t x384 = 0U;
int64_t x388 = 89LL;
uint8_t x398 = UINT8_MAX;


void f0(void) {
	volatile uint16_t x1 = 0U;
	static int16_t x2 = -342;
	volatile int8_t x3 = INT8_MIN;
	static uint32_t x4 = 18U;
	volatile int32_t t0 = 131591342;

	t0 = ((x1<(x2==x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 14063U;
	static int16_t x6 = -194;
	int16_t x7 = 4285;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 26380;

	t1 = ((x5<(x6==x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = 2584986749493LL;
	volatile uint32_t x11 = UINT32_MAX;

	t2 = ((x9<(x10==x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	static uint16_t x14 = 7U;
	int16_t x16 = 3581;
	volatile int32_t t3 = 1;

	t3 = ((x13<(x14==x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = INT64_MAX;
	static int16_t x18 = -1;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -22;

	t4 = ((x17<(x18==x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -6622907780293195LL;
	uint8_t x22 = 0U;
	static int8_t x23 = INT8_MIN;

	t5 = ((x21<(x22==x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 1530426482U;
	volatile int32_t x26 = -121587325;
	int32_t x27 = INT32_MAX;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -7372443;

	t6 = ((x25<(x26==x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 2059010;
	volatile int64_t x30 = 1LL;
	static volatile int8_t x31 = 1;
	int32_t x32 = 1193;
	int32_t t7 = 142883568;

	t7 = ((x29<(x30==x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	uint32_t x34 = 52U;
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = 2U;
	static volatile int32_t t8 = 30;

	t8 = ((x33<(x34==x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -36;
	int64_t x38 = -3268601867578156LL;
	static int32_t x39 = INT32_MAX;
	static int32_t x40 = INT32_MAX;
	int32_t t9 = 8957810;

	t9 = ((x37<(x38==x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = INT16_MIN;
	static uint32_t x44 = UINT32_MAX;

	t10 = ((x41<(x42==x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 112706;

	t11 = ((x45<(x46==x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int64_t x50 = INT64_MIN;
	static uint16_t x51 = UINT16_MAX;
	volatile int32_t t12 = -2550;

	t12 = ((x49<(x50==x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = 1;
	int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MAX;
	int32_t t13 = -373103;

	t13 = ((x53<(x54==x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	int8_t x60 = -2;

	t14 = ((x57<(x58==x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	volatile int64_t x64 = -1LL;
	volatile int32_t t15 = -2181481;

	t15 = ((x61<(x62==x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = UINT32_MAX;
	int32_t x66 = -1;
	int16_t x67 = INT16_MAX;
	int64_t x68 = 1LL;
	static int32_t t16 = 230;

	t16 = ((x65<(x66==x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	uint16_t x70 = 12923U;
	int8_t x71 = -1;
	volatile int16_t x72 = INT16_MIN;

	t17 = ((x69<(x70==x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 0;
	volatile int8_t x74 = INT8_MIN;
	static uint8_t x75 = UINT8_MAX;
	int32_t t18 = -1424189;

	t18 = ((x73<(x74==x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 26944U;
	static int16_t x78 = INT16_MIN;
	static int16_t x79 = INT16_MIN;
	uint16_t x80 = 57U;
	int32_t t19 = 10791908;

	t19 = ((x77<(x78==x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	volatile int8_t x83 = -1;
	volatile int32_t t20 = 45740147;

	t20 = ((x81<(x82==x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	int64_t x88 = 26155864494788LL;
	volatile int32_t t21 = -1869;

	t21 = ((x85<(x86==x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	static int64_t x90 = INT64_MIN;
	int64_t x91 = -1LL;
	int16_t x92 = -1;
	volatile int32_t t22 = -8;

	t22 = ((x89<(x90==x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MAX;
	volatile int8_t x94 = INT8_MAX;
	static uint8_t x95 = UINT8_MAX;
	int32_t t23 = -31;

	t23 = ((x93<(x94==x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 1481;
	static int8_t x98 = INT8_MIN;
	int16_t x99 = -1;
	static uint16_t x100 = 863U;

	t24 = ((x97<(x98==x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 4495690LLU;
	static uint32_t x102 = 46U;
	volatile int32_t t25 = -33406310;

	t25 = ((x101<(x102==x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -3478;
	volatile int32_t t26 = -47461039;

	t26 = ((x105<(x106==x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = -94;
	int32_t x111 = -1;

	t27 = ((x109<(x110==x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int64_t x114 = 1007870804120299271LL;
	uint64_t x115 = 5963LLU;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t28 = -4414;

	t28 = ((x113<(x114==x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = -52;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t29 = 408990699;

	t29 = ((x117<(x118==x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 1;
	int32_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile int32_t x124 = -1386;
	int32_t t30 = -8107;

	t30 = ((x121<(x122==x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x126 = UINT32_MAX;
	static int64_t x127 = -30641LL;
	int16_t x128 = INT16_MIN;
	int32_t t31 = 5447627;

	t31 = ((x125<(x126==x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -1;
	int8_t x130 = INT8_MIN;
	int64_t x131 = -7491523353358LL;
	int64_t x132 = INT64_MIN;

	t32 = ((x129<(x130==x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int16_t x136 = -1;
	volatile int32_t t33 = 11905479;

	t33 = ((x133<(x134==x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 6135U;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	volatile uint8_t x140 = 0U;
	volatile int32_t t34 = 73205;

	t34 = ((x137<(x138==x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	uint32_t x142 = UINT32_MAX;
	uint8_t x144 = UINT8_MAX;
	static volatile int32_t t35 = 28;

	t35 = ((x141<(x142==x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	uint8_t x146 = 13U;
	static volatile int8_t x147 = -1;
	int8_t x148 = -1;

	t36 = ((x145<(x146==x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	volatile uint64_t x150 = 13137LLU;
	uint8_t x151 = 13U;
	volatile int32_t x152 = INT32_MAX;
	int32_t t37 = 0;

	t37 = ((x149<(x150==x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = 3;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = -124;
	volatile int32_t t38 = -21;

	t38 = ((x153<(x154==x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -1;
	static int16_t x158 = INT16_MIN;
	int8_t x159 = -1;
	uint8_t x160 = 2U;
	volatile int32_t t39 = -877568;

	t39 = ((x157<(x158==x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 58;
	int32_t x162 = -1;
	static volatile int8_t x163 = 47;
	uint8_t x164 = UINT8_MAX;

	t40 = ((x161<(x162==x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -4517211114344LL;
	volatile int8_t x167 = 0;

	t41 = ((x165<(x166==x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = INT16_MIN;
	uint32_t x171 = UINT32_MAX;

	t42 = ((x169<(x170==x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MAX;
	int32_t x176 = -2137128;
	int32_t t43 = 6;

	t43 = ((x173<(x174==x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -3;
	int32_t x178 = -2;
	int32_t x179 = -2477911;
	uint64_t x180 = 23515LLU;
	int32_t t44 = 50;

	t44 = ((x177<(x178==x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	volatile uint32_t x182 = UINT32_MAX;
	static int32_t x183 = -101861927;
	uint8_t x184 = 7U;
	int32_t t45 = 131;

	t45 = ((x181<(x182==x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x186 = INT64_MIN;
	volatile uint32_t x188 = 126U;
	static volatile int32_t t46 = -1;

	t46 = ((x185<(x186==x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x190 = 1925U;
	volatile int16_t x191 = INT16_MAX;
	volatile uint8_t x192 = 15U;
	volatile int32_t t47 = -45238392;

	t47 = ((x189<(x190==x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	static uint8_t x195 = 0U;
	volatile uint64_t x196 = 2413045908LLU;

	t48 = ((x193<(x194==x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	volatile int32_t x198 = INT32_MAX;
	static uint8_t x199 = 25U;
	static uint32_t x200 = 525558004U;
	static volatile int32_t t49 = 81864;

	t49 = ((x197<(x198==x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	uint16_t x203 = 206U;
	volatile int32_t t50 = -231043314;

	t50 = ((x201<(x202==x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x206 = 254U;
	static int16_t x207 = -1;

	t51 = ((x205<(x206==x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint64_t x210 = 1450242683LLU;
	volatile int8_t x211 = -1;
	volatile int32_t x212 = 877259626;
	static volatile int32_t t52 = -174;

	t52 = ((x209<(x210==x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x214 = -60746126LL;
	int32_t x215 = -412485;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 259714;

	t53 = ((x213<(x214==x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = 4463;
	int8_t x218 = INT8_MAX;
	uint16_t x219 = UINT16_MAX;
	static volatile int8_t x220 = 0;
	int32_t t54 = -237;

	t54 = ((x217<(x218==x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 1003186U;
	int64_t x223 = INT64_MAX;
	int32_t t55 = 4;

	t55 = ((x221<(x222==x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MAX;
	int8_t x227 = INT8_MAX;

	t56 = ((x225<(x226==x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	volatile int16_t x230 = INT16_MAX;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MAX;
	volatile int32_t t57 = 112;

	t57 = ((x229<(x230==x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 30U;
	static int64_t x234 = -1LL;
	static int32_t x235 = -1;
	volatile int16_t x236 = INT16_MAX;
	int32_t t58 = -54;

	t58 = ((x233<(x234==x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int8_t x238 = INT8_MIN;
	int64_t x239 = -573102646589760747LL;
	volatile int32_t t59 = 747268;

	t59 = ((x237<(x238==x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	volatile int8_t x244 = -13;
	static volatile int32_t t60 = -517304778;

	t60 = ((x241<(x242==x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -2;
	uint32_t x246 = 541211576U;
	int64_t x247 = INT64_MIN;
	static uint32_t x248 = 3742759U;
	volatile int32_t t61 = 893;

	t61 = ((x245<(x246==x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 317U;
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;
	int32_t t62 = -13;

	t62 = ((x249<(x250==x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = 1488199;
	static uint8_t x255 = 1U;
	int32_t t63 = 1230741;

	t63 = ((x253<(x254==x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x259 = UINT8_MAX;

	t64 = ((x257<(x258==x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	int32_t x263 = 3;
	int32_t x264 = -2078;

	t65 = ((x261<(x262==x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 16U;
	int32_t x266 = -7;
	volatile uint32_t x267 = 64328U;
	int16_t x268 = INT16_MAX;
	volatile int32_t t66 = 1;

	t66 = ((x265<(x266==x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = 281328278246758918LL;
	static int16_t x271 = INT16_MAX;

	t67 = ((x269<(x270==x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -450;
	int64_t x274 = INT64_MIN;
	uint64_t x275 = UINT64_MAX;
	volatile int32_t x276 = INT32_MIN;
	int32_t t68 = -1405;

	t68 = ((x273<(x274==x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	static int32_t t69 = 0;

	t69 = ((x277<(x278==x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int32_t x283 = INT32_MIN;
	volatile uint32_t x284 = 744744809U;
	static int32_t t70 = -40082891;

	t70 = ((x281<(x282==x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	volatile int32_t x286 = INT32_MIN;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t71 = -120083446;

	t71 = ((x285<(x286==x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MAX;
	int32_t x290 = -1673479;
	int64_t x291 = INT64_MAX;
	static int16_t x292 = 109;
	int32_t t72 = -1947;

	t72 = ((x289<(x290==x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x293 = 10907LLU;
	static int16_t x294 = -1;
	int64_t x295 = 48913052347723LL;
	static volatile int32_t t73 = -216033;

	t73 = ((x293<(x294==x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	int64_t x298 = 6LL;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 8217;

	t74 = ((x297<(x298==x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 0U;
	uint64_t x302 = UINT64_MAX;
	int8_t x303 = -1;
	int32_t t75 = 387;

	t75 = ((x301<(x302==x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = -91676520;
	int8_t x307 = -30;
	static int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 20047959;

	t76 = ((x305<(x306==x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 2906;
	volatile uint64_t x310 = UINT64_MAX;
	volatile int32_t x311 = INT32_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -5;

	t77 = ((x309<(x310==x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	volatile int16_t x314 = INT16_MAX;
	volatile int8_t x315 = -16;
	volatile int32_t x316 = -1;

	t78 = ((x313<(x314==x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MIN;
	uint64_t x320 = 384926710612LLU;
	int32_t t79 = -4063095;

	t79 = ((x317<(x318==x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 5U;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MAX;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = 216390482;

	t80 = ((x321<(x322==x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int8_t x327 = INT8_MAX;
	static volatile uint64_t x328 = UINT64_MAX;
	static volatile int32_t t81 = 395388;

	t81 = ((x325<(x326==x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x331 = UINT8_MAX;
	volatile uint32_t x332 = 10363U;
	int32_t t82 = 60125;

	t82 = ((x329<(x330==x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	static uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	static int16_t x336 = -1;
	volatile int32_t t83 = 107529317;

	t83 = ((x333<(x334==x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 2;
	static int64_t x338 = INT64_MIN;
	static int64_t x339 = INT64_MIN;
	volatile int64_t x340 = INT64_MIN;
	static int32_t t84 = -83710556;

	t84 = ((x337<(x338==x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = 977;
	volatile int32_t t85 = -13447591;

	t85 = ((x341<(x342==x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	static uint16_t x346 = 1370U;
	uint8_t x347 = UINT8_MAX;
	static int64_t x348 = -95021167328LL;
	int32_t t86 = -7823;

	t86 = ((x345<(x346==x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x350 = INT32_MIN;
	volatile int16_t x351 = INT16_MIN;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = 24466;

	t87 = ((x349<(x350==x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int8_t x354 = 0;
	uint64_t x355 = 45847765721064189LLU;
	int16_t x356 = INT16_MAX;

	t88 = ((x353<(x354==x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 31844U;
	volatile int16_t x358 = INT16_MAX;
	uint8_t x360 = UINT8_MAX;
	int32_t t89 = -41224526;

	t89 = ((x357<(x358==x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 1393316U;
	volatile int32_t t90 = 2;

	t90 = ((x361<(x362==x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -1;
	volatile int8_t x366 = INT8_MIN;
	static volatile uint32_t x368 = UINT32_MAX;
	static int32_t t91 = -450059;

	t91 = ((x365<(x366==x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	static uint8_t x370 = 22U;
	int32_t x371 = -8016552;
	volatile int16_t x372 = -151;

	t92 = ((x369<(x370==x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -1;
	int64_t x374 = INT64_MIN;
	int8_t x375 = -28;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -8138;

	t93 = ((x373<(x374==x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x378 = UINT64_MAX;
	int8_t x379 = 5;
	uint16_t x380 = 14710U;
	int32_t t94 = -35;

	t94 = ((x377<(x378==x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	volatile int64_t x382 = INT64_MIN;
	volatile uint64_t x383 = UINT64_MAX;
	int32_t t95 = 888259386;

	t95 = ((x381<(x382==x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile uint32_t x386 = 156427U;
	static uint64_t x387 = 2733673703148LLU;
	int32_t t96 = -143325;

	t96 = ((x385<(x386==x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = -61;
	static int16_t x390 = INT16_MAX;
	int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 60;

	t97 = ((x389<(x390==x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	static int32_t x394 = INT32_MIN;
	static uint16_t x395 = UINT16_MAX;
	static int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -6;

	t98 = ((x393<(x394==x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 61;
	uint32_t x399 = 10017U;
	int16_t x400 = 89;
	volatile int32_t t99 = 56160;

	t99 = ((x397<(x398==x399))<x400);

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

