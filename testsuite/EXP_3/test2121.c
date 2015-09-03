#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 4;
volatile int32_t x16 = INT32_MAX;
uint32_t x23 = 7587978U;
volatile int16_t x32 = 2532;
static int32_t t7 = 1746;
volatile int32_t x33 = -4;
int8_t x36 = INT8_MIN;
volatile int32_t t8 = -395;
int8_t x50 = INT8_MIN;
uint64_t x51 = UINT64_MAX;
static int64_t x59 = 39677813813310LL;
volatile int32_t x62 = INT32_MIN;
int64_t x69 = -6329541904LL;
static uint32_t x72 = 110862U;
volatile uint32_t t17 = 360127631U;
static int16_t x75 = INT16_MIN;
uint8_t x82 = 0U;
int16_t x87 = INT16_MIN;
int64_t x88 = INT64_MIN;
uint16_t x96 = UINT16_MAX;
volatile int16_t x99 = INT16_MAX;
int16_t x104 = INT16_MAX;
int32_t t25 = -2053;
volatile uint32_t x107 = UINT32_MAX;
uint16_t x114 = UINT16_MAX;
int32_t t28 = 1;
int32_t x117 = INT32_MIN;
int16_t x129 = 1;
int8_t x140 = 1;
int64_t x142 = -1LL;
int64_t t35 = -1566011384998975LL;
int32_t t36 = -307484;
volatile uint32_t x153 = UINT32_MAX;
uint16_t x156 = UINT16_MAX;
static volatile int64_t t38 = -19396823357LL;
static volatile int8_t x162 = 1;
volatile uint16_t x163 = 212U;
int8_t x168 = 21;
int16_t x175 = -1;
volatile int32_t x182 = -1;
int8_t x183 = -10;
volatile int64_t x189 = 7255259635876840LL;
static int8_t x195 = -1;
uint8_t x196 = 15U;
int64_t x197 = -2856163671767LL;
int64_t x199 = 1769458222837252554LL;
static volatile int32_t x201 = -13595;
uint8_t x207 = UINT8_MAX;
static volatile int64_t x208 = INT64_MAX;
int16_t x211 = -402;
static int32_t t52 = 644741;
int8_t x224 = 1;
static uint16_t x226 = 6172U;
uint64_t x227 = 157LLU;
volatile uint64_t t56 = 112220LLU;
volatile int16_t x234 = INT16_MIN;
volatile int64_t x241 = INT64_MIN;
uint16_t x244 = 15U;
volatile int16_t x245 = -7;
volatile int64_t x246 = INT64_MAX;
static uint8_t x249 = 1U;
volatile uint32_t t62 = 148292U;
volatile int8_t x253 = INT8_MAX;
static int8_t x254 = INT8_MIN;
int32_t x260 = INT32_MAX;
int32_t t64 = 770084085;
int8_t x261 = INT8_MIN;
uint8_t x262 = UINT8_MAX;
int16_t x268 = INT16_MIN;
int32_t x273 = -1535303;
uint8_t x275 = 0U;
int64_t x278 = INT64_MIN;
uint8_t x284 = 0U;
int16_t x288 = INT16_MAX;
uint64_t x290 = 545784854285LLU;
int32_t x296 = 49884;
static volatile int16_t x301 = 11313;
volatile int64_t x305 = -1LL;
static int32_t x306 = -1;
static volatile int8_t x309 = INT8_MAX;
volatile int64_t x312 = INT64_MAX;
volatile uint64_t t81 = 6LLU;
uint64_t x335 = 62663676003LLU;
volatile uint64_t t83 = 649114121008746919LLU;
volatile int32_t x345 = 32024634;
volatile uint64_t t86 = 90753LLU;
volatile uint32_t x349 = UINT32_MAX;
int64_t x352 = INT64_MAX;
int16_t x358 = -1;
static uint32_t x362 = 486U;
uint16_t x364 = 587U;
volatile uint8_t x366 = 123U;
int32_t x368 = 73;
static int8_t x372 = INT8_MIN;
uint16_t x373 = 1140U;
uint64_t x376 = UINT64_MAX;
uint64_t x385 = 91LLU;
int32_t x386 = INT32_MAX;
volatile uint64_t x389 = 159LLU;
int64_t t97 = 51LL;
int32_t t98 = 0;
volatile uint8_t x398 = UINT8_MAX;


void f0(void) {
	int64_t x1 = 177LL;
	static int16_t x2 = 3554;
	int64_t x3 = 149887177252362841LL;
	int8_t x4 = -1;
	int64_t t0 = -27610615346413327LL;

	t0 = ((x1==x2)-(x3^x4));

	if (t0 != 149887177252362842LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 235986425184147LLU;
	int64_t x6 = 7548229988763034LL;
	uint64_t x7 = 3963388511LLU;
	volatile int16_t x8 = -973;
	static uint64_t t1 = 10453462564516638LLU;

	t1 = ((x5==x6)-(x7^x8));

	if (t1 != 3963388308LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 532006057U;
	uint16_t x10 = UINT16_MAX;
	int32_t x11 = -1;
	volatile uint8_t x12 = 6U;

	t2 = ((x9==x10)-(x11^x12));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MIN;
	int64_t x15 = 453201184724333491LL;
	volatile int64_t t3 = -519LL;

	t3 = ((x13==x14)-(x15^x16));

	if (t3 != -453201186493320268LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 34U;
	static uint16_t x18 = 3189U;
	int32_t x19 = INT32_MAX;
	int64_t x20 = 1LL;
	int64_t t4 = 1LL;

	t4 = ((x17==x18)-(x19^x20));

	if (t4 != -2147483646LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int64_t x24 = INT64_MIN;
	int64_t t5 = -132227974973LL;

	t5 = ((x21==x22)-(x23^x24));

	if (t5 != 9223372036847187830LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 47089113366323LLU;
	volatile int64_t x26 = INT64_MAX;
	int8_t x27 = -1;
	int16_t x28 = 6;
	int32_t t6 = 43346878;

	t6 = ((x25==x26)-(x27^x28));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = 116;
	int8_t x31 = -1;

	t7 = ((x29==x30)-(x31^x32));

	if (t7 != 2533) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = UINT8_MAX;
	static int16_t x35 = INT16_MIN;

	t8 = ((x33==x34)-(x35^x36));

	if (t8 != -32640) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint8_t x38 = 1U;
	int32_t x39 = 919;
	static int32_t x40 = 606394102;
	int32_t t9 = -343149906;

	t9 = ((x37==x38)-(x39^x40));

	if (t9 != -606393697) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	static uint32_t x42 = UINT32_MAX;
	uint16_t x43 = 289U;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -28;

	t10 = ((x41==x42)-(x43^x44));

	if (t10 != 32479) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 20U;
	int8_t x46 = -1;
	static int32_t x47 = INT32_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 1;

	t11 = ((x45==x46)-(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	int64_t x52 = INT64_MIN;
	volatile uint64_t t12 = 17LLU;

	t12 = ((x49==x50)-(x51^x52));

	if (t12 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 81U;
	int16_t x54 = -1;
	uint16_t x55 = 889U;
	volatile int64_t x56 = INT64_MAX;
	int64_t t13 = -47LL;

	t13 = ((x53==x54)-(x55^x56));

	if (t13 != -9223372036854774918LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -519056733;
	volatile int32_t x58 = -1;
	uint16_t x60 = 1U;
	volatile int64_t t14 = 6176760LL;

	t14 = ((x57==x58)-(x59^x60));

	if (t14 != -39677813813311LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x63 = INT32_MIN;
	uint64_t x64 = 69875605LLU;
	static uint64_t t15 = 1LLU;

	t15 = ((x61==x62)-(x63^x64));

	if (t15 != 2077608044LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MAX;
	static volatile int64_t x67 = INT64_MIN;
	static uint64_t x68 = 24743LLU;
	uint64_t t16 = 727555277325515963LLU;

	t16 = ((x65==x66)-(x67^x68));

	if (t16 != 9223372036854751065LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x70 = INT32_MIN;
	static int8_t x71 = INT8_MIN;

	t17 = ((x69==x70)-(x71^x72));

	if (t17 != 110962U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 63;
	static uint8_t x74 = UINT8_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 3265;

	t18 = ((x73==x74)-(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = 13822370;
	uint64_t x79 = 644192182902604LLU;
	static uint16_t x80 = UINT16_MAX;
	uint64_t t19 = 12572303LLU;

	t19 = ((x77==x78)-(x79^x80));

	if (t19 != 18446099881526665037LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 3105U;
	static uint32_t x83 = 379821U;
	int64_t x84 = INT64_MIN;
	int64_t t20 = 18021399596114LL;

	t20 = ((x81==x82)-(x83^x84));

	if (t20 != 9223372036854395987LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static int32_t x86 = INT32_MIN;
	static volatile int64_t t21 = -62232418027634208LL;

	t21 = ((x85==x86)-(x87^x88));

	if (t21 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 6;
	uint16_t x90 = 18475U;
	uint32_t x91 = 8300129U;
	static int16_t x92 = -1;
	volatile uint32_t t22 = 7440076U;

	t22 = ((x89==x90)-(x91^x92));

	if (t22 != 8300130U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int64_t x94 = INT64_MIN;
	uint8_t x95 = 1U;
	volatile int32_t t23 = -1194;

	t23 = ((x93==x94)-(x95^x96));

	if (t23 != -65534) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int8_t x98 = 0;
	int32_t x100 = -2;
	int32_t t24 = 14351;

	t24 = ((x97==x98)-(x99^x100));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 2558U;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MIN;

	t25 = ((x101==x102)-(x103^x104));

	if (t25 != 2147450881) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -16893226554LL;
	volatile int8_t x106 = -7;
	volatile int8_t x108 = -1;
	uint32_t t26 = 192831U;

	t26 = ((x105==x106)-(x107^x108));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 45U;
	static uint16_t x110 = 13694U;
	int8_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t27 = 6058153764639LLU;

	t27 = ((x109==x110)-(x111^x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x113 = UINT32_MAX;
	int32_t x115 = -48074450;
	static int32_t x116 = -1;

	t28 = ((x113==x114)-(x115^x116));

	if (t28 != -48074449) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = -1LL;
	static volatile int8_t x119 = INT8_MIN;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 1137;

	t29 = ((x117==x118)-(x119^x120));

	if (t29 != -2147483520) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -6LL;
	int32_t x122 = INT32_MIN;
	uint32_t x123 = UINT32_MAX;
	static int8_t x124 = INT8_MIN;
	uint32_t t30 = 55U;

	t30 = ((x121==x122)-(x123^x124));

	if (t30 != 4294967169U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int64_t x126 = INT64_MIN;
	volatile int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MAX;
	volatile int64_t t31 = 1846794870187LL;

	t31 = ((x125==x126)-(x127^x128));

	if (t31 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MAX;
	volatile int16_t x132 = 90;
	int32_t t32 = -6883;

	t32 = ((x129==x130)-(x131^x132));

	if (t32 != -2147483557) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	uint16_t x134 = 14U;
	int64_t x135 = 197LL;
	static int8_t x136 = INT8_MAX;
	volatile int64_t t33 = 6426LL;

	t33 = ((x133==x134)-(x135^x136));

	if (t33 != -186LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 337835407566LL;
	static uint16_t x138 = 6751U;
	int64_t x139 = INT64_MAX;
	volatile int64_t t34 = -494448567810012LL;

	t34 = ((x137==x138)-(x139^x140));

	if (t34 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int64_t x143 = INT64_MAX;
	volatile int16_t x144 = INT16_MIN;

	t35 = ((x141==x142)-(x143^x144));

	if (t35 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1626855;
	uint16_t x146 = 89U;
	uint16_t x147 = UINT16_MAX;
	static int32_t x148 = INT32_MIN;

	t36 = ((x145==x146)-(x147^x148));

	if (t36 != 2147418113) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MAX;
	uint32_t x151 = 913U;
	int8_t x152 = -1;
	volatile uint32_t t37 = 0U;

	t37 = ((x149==x150)-(x151^x152));

	if (t37 != 914U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MAX;

	t38 = ((x153==x154)-(x155^x156));

	if (t38 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 1;
	volatile uint64_t x158 = 81904498566LLU;
	int8_t x159 = INT8_MAX;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 0;

	t39 = ((x157==x158)-(x159^x160));

	if (t39 != 32641) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t40 = -8599167;

	t40 = ((x161==x162)-(x163^x164));

	if (t40 != 172) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = UINT64_MAX;
	int32_t x166 = 2812796;
	static uint16_t x167 = 599U;
	int32_t t41 = -85390980;

	t41 = ((x165==x166)-(x167^x168));

	if (t41 != -578) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 1;
	static uint32_t x170 = 383U;
	volatile int64_t x171 = 66083215930735226LL;
	uint8_t x172 = 6U;
	int64_t t42 = -921162178038756LL;

	t42 = ((x169==x170)-(x171^x172));

	if (t42 != -66083215930735228LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	static int64_t x174 = INT64_MIN;
	uint8_t x176 = 0U;
	static int32_t t43 = 68228829;

	t43 = ((x173==x174)-(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -387520992;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = INT8_MIN;
	uint8_t x180 = 10U;
	int32_t t44 = -18059250;

	t44 = ((x177==x178)-(x179^x180));

	if (t44 != 118) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = UINT64_MAX;
	volatile int64_t x184 = INT64_MAX;
	int64_t t45 = 477649LL;

	t45 = ((x181==x182)-(x183^x184));

	if (t45 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 0;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	volatile int8_t x188 = 16;
	volatile uint32_t t46 = 33237U;

	t46 = ((x185==x186)-(x187^x188));

	if (t46 != 17U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = 7;
	static int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MIN;
	int64_t t47 = -15785000878938LL;

	t47 = ((x189==x190)-(x191^x192));

	if (t47 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MAX;
	int32_t t48 = 16;

	t48 = ((x193==x194)-(x195^x196));

	if (t48 != 16) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 4234LLU;
	int8_t x200 = INT8_MAX;
	volatile int64_t t49 = 2690235149619028LL;

	t49 = ((x197==x198)-(x199^x200));

	if (t49 != -1769458222837252533LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = 120U;
	int32_t x203 = -1;
	volatile int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = 296697;

	t50 = ((x201==x202)-(x203^x204));

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	uint8_t x206 = 69U;
	volatile int64_t t51 = 308770LL;

	t51 = ((x205==x206)-(x207^x208));

	if (t51 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 2180U;
	int64_t x210 = INT64_MAX;
	int16_t x212 = INT16_MAX;

	t52 = ((x209==x210)-(x211^x212));

	if (t52 != 32367) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -42069558964380890LL;
	int8_t x214 = INT8_MIN;
	int16_t x215 = -307;
	static int64_t x216 = INT64_MIN;
	static int64_t t53 = -1739LL;

	t53 = ((x213==x214)-(x215^x216));

	if (t53 != -9223372036854775501LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int64_t x218 = -1384493963680415LL;
	static int32_t x219 = INT32_MIN;
	int32_t x220 = -425171252;
	volatile int32_t t54 = -1042407629;

	t54 = ((x217==x218)-(x219^x220));

	if (t54 != -1722312396) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int32_t x222 = 11088373;
	volatile int32_t x223 = INT32_MIN;
	volatile int32_t t55 = INT32_MAX;

	t55 = ((x221==x222)-(x223^x224));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int8_t x228 = INT8_MIN;

	t56 = ((x225==x226)-(x227^x228));

	if (t56 != 227LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = -1LL;
	static int32_t x230 = -30118221;
	volatile int8_t x231 = 1;
	volatile uint16_t x232 = UINT16_MAX;
	static volatile int32_t t57 = -49;

	t57 = ((x229==x230)-(x231^x232));

	if (t57 != -65534) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	volatile int8_t x235 = INT8_MIN;
	static int8_t x236 = INT8_MIN;
	static volatile int32_t t58 = 13;

	t58 = ((x233==x234)-(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -64599;
	uint32_t x238 = 7992U;
	volatile uint64_t x239 = 118921572557977LLU;
	int8_t x240 = INT8_MAX;
	uint64_t t59 = 2828173893254132LLU;

	t59 = ((x237==x238)-(x239^x240));

	if (t59 != 18446625152136993562LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x242 = INT32_MIN;
	static int16_t x243 = -2369;
	volatile int32_t t60 = 348068;

	t60 = ((x241==x242)-(x243^x244));

	if (t60 != 2384) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x247 = 26462812869947031LL;
	int32_t x248 = 29;
	static int64_t t61 = 6LL;

	t61 = ((x245==x246)-(x247^x248));

	if (t61 != -26462812869947018LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x250 = INT64_MAX;
	int16_t x251 = INT16_MIN;
	volatile uint32_t x252 = 2U;

	t62 = ((x249==x250)-(x251^x252));

	if (t62 != 32766U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x255 = UINT64_MAX;
	uint32_t x256 = UINT32_MAX;
	static volatile uint64_t t63 = 16955LLU;

	t63 = ((x253==x254)-(x255^x256));

	if (t63 != 4294967296LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	volatile uint8_t x258 = 13U;
	int32_t x259 = INT32_MIN;

	t64 = ((x257==x258)-(x259^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x263 = INT64_MIN;
	int32_t x264 = -164;
	int64_t t65 = 1LL;

	t65 = ((x261==x262)-(x263^x264));

	if (t65 != -9223372036854775644LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MAX;
	int64_t x266 = -1LL;
	int8_t x267 = -7;
	int32_t t66 = -355205;

	t66 = ((x265==x266)-(x267^x268));

	if (t66 != -32761) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = 1128729LLU;
	int16_t x271 = -1;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t67 = -144;

	t67 = ((x269==x270)-(x271^x272));

	if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = INT8_MIN;
	static uint64_t x276 = UINT64_MAX;
	uint64_t t68 = 117822450445LLU;

	t68 = ((x273==x274)-(x275^x276));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 53727706784846LL;
	int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = -23;

	t69 = ((x277==x278)-(x279^x280));

	if (t69 != 2147450881) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 61;
	volatile uint32_t x282 = 128U;
	volatile int8_t x283 = -13;
	int32_t t70 = -3;

	t70 = ((x281==x282)-(x283^x284));

	if (t70 != 13) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	uint16_t x286 = 15U;
	int32_t x287 = INT32_MIN;
	volatile int32_t t71 = -30941;

	t71 = ((x285==x286)-(x287^x288));

	if (t71 != 2147450881) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -874073578LL;
	int16_t x291 = INT16_MAX;
	volatile int16_t x292 = INT16_MIN;
	int32_t t72 = 2888;

	t72 = ((x289==x290)-(x291^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 4U;
	int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	volatile int32_t t73 = 291723;

	t73 = ((x293==x294)-(x295^x296));

	if (t73 != 2147433764) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = UINT8_MAX;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = -2;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = ((x297==x298)-(x299^x300));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x302 = INT64_MIN;
	static int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MAX;
	int32_t t75 = 64546285;

	t75 = ((x301==x302)-(x303^x304));

	if (t75 != 32641) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x307 = 399118;
	static volatile uint32_t x308 = UINT32_MAX;
	static uint32_t t76 = 1U;

	t76 = ((x305==x306)-(x307^x308));

	if (t76 != 399120U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x310 = INT16_MIN;
	int16_t x311 = INT16_MIN;
	int64_t t77 = -1630224978039257117LL;

	t77 = ((x309==x310)-(x311^x312));

	if (t77 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 82U;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MIN;
	volatile uint16_t x316 = 26772U;
	volatile int64_t t78 = -3879286524086786LL;

	t78 = ((x313==x314)-(x315^x316));

	if (t78 != 9223372036854749036LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MIN;
	int64_t x319 = INT64_MAX;
	volatile int32_t x320 = INT32_MIN;
	volatile int64_t t79 = 2652387750550604LL;

	t79 = ((x317==x318)-(x319^x320));

	if (t79 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 65764330080338LL;
	int8_t x322 = INT8_MAX;
	volatile int16_t x323 = -1;
	int8_t x324 = -4;
	volatile int32_t t80 = -224;

	t80 = ((x321==x322)-(x323^x324));

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = -26506LL;
	uint64_t x327 = 11LLU;
	int16_t x328 = 125;

	t81 = ((x325==x326)-(x327^x328));

	if (t81 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 253530270963LLU;
	static volatile uint32_t x330 = 319436381U;
	uint64_t x331 = 43768404354760936LLU;
	volatile uint8_t x332 = 6U;
	volatile uint64_t t82 = 7517749690LLU;

	t82 = ((x329==x330)-(x331^x332));

	if (t82 != 18402975669354790674LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -30028855;
	int32_t x334 = 13907;
	uint8_t x336 = 15U;

	t83 = ((x333==x334)-(x335^x336));

	if (t83 != 18446744011045875604LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	uint32_t x338 = 93714995U;
	static int8_t x339 = -1;
	int16_t x340 = INT16_MAX;
	static volatile int32_t t84 = 1;

	t84 = ((x337==x338)-(x339^x340));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 15U;
	int32_t x342 = INT32_MAX;
	int32_t x343 = -3;
	uint16_t x344 = 1522U;
	volatile int32_t t85 = -1040601686;

	t85 = ((x341==x342)-(x343^x344));

	if (t85 != 1521) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MIN;
	volatile uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 58U;

	t86 = ((x345==x346)-(x347^x348));

	if (t86 != 59LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = UINT8_MAX;
	static volatile int16_t x351 = INT16_MIN;
	volatile int64_t t87 = -6LL;

	t87 = ((x349==x350)-(x351^x352));

	if (t87 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	volatile int8_t x354 = INT8_MIN;
	uint16_t x355 = 5U;
	volatile uint32_t x356 = UINT32_MAX;
	uint32_t t88 = 225352415U;

	t88 = ((x353==x354)-(x355^x356));

	if (t88 != 6U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 28;
	volatile int16_t x359 = -1;
	static volatile uint16_t x360 = 273U;
	volatile int32_t t89 = 239322;

	t89 = ((x357==x358)-(x359^x360));

	if (t89 != 274) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 10U;
	int16_t x363 = 0;
	volatile int32_t t90 = -2;

	t90 = ((x361==x362)-(x363^x364));

	if (t90 != -587) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x365 = 12446U;
	int32_t x367 = -1;
	volatile int32_t t91 = -97;

	t91 = ((x365==x366)-(x367^x368));

	if (t91 != 74) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	static int32_t x371 = -140993476;
	int32_t t92 = -27248;

	t92 = ((x369==x370)-(x371^x372));

	if (t92 != -140993468) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = 1752555;
	int64_t x375 = INT64_MAX;
	volatile uint64_t t93 = 11379950620320LLU;

	t93 = ((x373==x374)-(x375^x376));

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = 35;
	volatile uint64_t x378 = 32507138398336LLU;
	volatile int64_t x379 = 5138LL;
	volatile uint8_t x380 = UINT8_MAX;
	int64_t t94 = 1972362LL;

	t94 = ((x377==x378)-(x379^x380));

	if (t94 != -5357LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 2U;
	volatile int16_t x382 = 2544;
	static int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MAX;
	int64_t t95 = -3202491228LL;

	t95 = ((x381==x382)-(x383^x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x387 = -61778004920499302LL;
	static uint8_t x388 = UINT8_MAX;
	volatile int64_t t96 = 786946571054825878LL;

	t96 = ((x385==x386)-(x387^x388));

	if (t96 != 61778004920499355LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x390 = INT32_MAX;
	int64_t x391 = -1LL;
	int64_t x392 = -587243LL;

	t97 = ((x389==x390)-(x391^x392));

	if (t97 != -587242LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 3LLU;
	volatile int8_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	static int8_t x396 = INT8_MIN;

	t98 = ((x393==x394)-(x395^x396));

	if (t98 != 65409) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = UINT8_MAX;
	volatile uint64_t x399 = 3935952780762LLU;
	uint16_t x400 = 28U;
	volatile uint64_t t99 = 16119LLU;

	t99 = ((x397==x398)-(x399^x400));

	if (t99 != 18446740137756770875LLU) { NG(); } else { ; }
	
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

