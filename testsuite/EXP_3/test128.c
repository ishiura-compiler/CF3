#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 3U;
volatile int16_t x3 = INT16_MIN;
int64_t x10 = INT64_MIN;
int8_t x19 = INT8_MIN;
int64_t x22 = -1LL;
int32_t x24 = 829;
uint32_t x27 = UINT32_MAX;
static int16_t x28 = 1;
volatile uint32_t t6 = 2790449U;
uint8_t x44 = UINT8_MAX;
int64_t x47 = INT64_MIN;
volatile int64_t x49 = 887714865LL;
uint8_t x50 = 3U;
static volatile uint32_t t11 = 295407924U;
volatile int64_t x55 = INT64_MIN;
int8_t x61 = -1;
int64_t t13 = -57089681LL;
int32_t x69 = -1;
static int32_t x71 = INT32_MAX;
int32_t x74 = -1;
int8_t x80 = 4;
uint16_t x85 = UINT16_MAX;
uint8_t x86 = 0U;
static uint16_t x90 = UINT16_MAX;
int64_t x94 = -986602409119171LL;
int8_t x97 = -1;
static int32_t x98 = INT32_MIN;
uint8_t x102 = 0U;
static int8_t x110 = INT8_MIN;
int64_t x113 = INT64_MIN;
int8_t x116 = 1;
volatile int64_t x121 = -25410549995LL;
int16_t x122 = -1;
int16_t x146 = INT16_MAX;
volatile int32_t x151 = 37333992;
volatile int32_t t33 = 1;
static volatile int32_t x155 = INT32_MIN;
int64_t x157 = INT64_MAX;
int64_t x160 = INT64_MIN;
volatile int64_t t35 = 748287395316LL;
int64_t x162 = INT64_MIN;
int32_t t36 = -375981016;
uint16_t x167 = UINT16_MAX;
int8_t x170 = INT8_MIN;
int64_t t38 = -3355459185059151777LL;
volatile uint8_t x173 = 0U;
uint32_t x179 = 447U;
volatile int32_t t41 = 173825;
uint8_t x190 = 1U;
static volatile int32_t x192 = INT32_MIN;
int16_t x205 = 29;
volatile int64_t x218 = INT64_MIN;
uint32_t x219 = 141U;
static int8_t x222 = INT8_MIN;
static int32_t t49 = -240;
int8_t x235 = INT8_MAX;
static int16_t x237 = INT16_MIN;
uint32_t x238 = UINT32_MAX;
int16_t x251 = INT16_MAX;
uint64_t x254 = 107717LLU;
int8_t x255 = INT8_MIN;
uint32_t x262 = 0U;
uint64_t t59 = 27680743501LLU;
uint64_t x272 = 424744LLU;
uint16_t x275 = 628U;
int8_t x276 = -2;
volatile int64_t t65 = -297181942LL;
volatile int32_t t66 = 27;
int64_t x302 = 2LL;
uint16_t x310 = 16U;
int32_t t69 = -423576658;
int8_t x330 = 19;
uint16_t x335 = 303U;
int8_t x336 = INT8_MIN;
int32_t t75 = -7838801;
int32_t x338 = -3;
int16_t x340 = INT16_MIN;
static uint32_t x347 = UINT32_MAX;
uint64_t x348 = UINT64_MAX;
uint8_t x349 = 61U;
uint64_t x351 = UINT64_MAX;
volatile uint64_t t79 = 1049819674889163616LLU;
int64_t x355 = INT64_MIN;
static uint64_t x359 = 3583733386433LLU;
static volatile int64_t x364 = -1LL;
volatile int8_t x369 = -47;
uint16_t x375 = 15U;
int32_t t85 = 84083;
static volatile int16_t x377 = -1;
volatile int64_t t87 = -1283LL;
volatile uint64_t x388 = UINT64_MAX;
volatile uint64_t t88 = 78557087463LLU;
static int64_t x389 = 25753683LL;
int64_t x390 = -1LL;
uint64_t t89 = 178613761LLU;
static uint16_t x393 = 1331U;
uint32_t x397 = UINT32_MAX;
static uint64_t t92 = 17243438408LLU;
int8_t x406 = INT8_MAX;
volatile uint32_t t94 = 1U;
int64_t x424 = -86099992777089LL;
int16_t x425 = INT16_MAX;
int32_t x427 = 63;
static int32_t x430 = -1;
static int8_t x438 = INT8_MAX;
int8_t x439 = -1;
int32_t x442 = -45375;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	volatile uint32_t x4 = 285U;
	volatile uint32_t t0 = 29010U;

	t0 = ((x1<=x2)&(x3+x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -7635115;
	static int16_t x6 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 1995567709282192520LLU;
	static uint64_t t1 = 4447868782635941611LLU;

	t1 = ((x5<=x6)&(x7+x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 212991040399686892LLU;
	int8_t x11 = INT8_MIN;
	volatile int64_t x12 = INT64_MAX;
	volatile int64_t t2 = -7906337258LL;

	t2 = ((x9<=x10)&(x11+x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static int64_t x14 = -1LL;
	int16_t x15 = 842;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 253206LL;

	t3 = ((x13<=x14)&(x15+x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 2U;
	uint16_t x18 = 981U;
	uint64_t x20 = 1LLU;
	uint64_t t4 = 1356382667LLU;

	t4 = ((x17<=x18)&(x19+x20));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -64692;
	volatile int64_t x23 = INT64_MIN;
	int64_t t5 = 96791LL;

	t5 = ((x21<=x22)&(x23+x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	volatile int64_t x26 = -1LL;

	t6 = ((x25<=x26)&(x27+x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	static int32_t x35 = 1;
	int8_t x36 = -1;
	int32_t t7 = -8845;

	t7 = ((x33<=x34)&(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 7;
	volatile uint32_t x38 = UINT32_MAX;
	int64_t x39 = INT64_MIN;
	uint32_t x40 = UINT32_MAX;
	int64_t t8 = 1LL;

	t8 = ((x37<=x38)&(x39+x40));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	volatile int64_t x42 = -1LL;
	int16_t x43 = -1;
	int32_t t9 = 3164;

	t9 = ((x41<=x42)&(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = -404;
	int64_t x46 = -1LL;
	uint8_t x48 = UINT8_MAX;
	static int64_t t10 = -31210007052138144LL;

	t10 = ((x45<=x46)&(x47+x48));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x51 = 5221U;
	uint32_t x52 = UINT32_MAX;

	t11 = ((x49<=x50)&(x51+x52));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = 3113LL;
	uint32_t x56 = UINT32_MAX;
	int64_t t12 = 1006850056582LL;

	t12 = ((x53<=x54)&(x55+x56));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x62 = INT16_MIN;
	uint8_t x63 = 20U;
	volatile int64_t x64 = 2246474LL;

	t13 = ((x61<=x62)&(x63+x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = INT32_MIN;
	int32_t x66 = -14952891;
	volatile int64_t x67 = -15556834040970LL;
	uint32_t x68 = 882496U;
	int64_t t14 = 46LL;

	t14 = ((x65<=x66)&(x67+x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = -1LL;
	int32_t x72 = -1536825;
	int32_t t15 = 8083;

	t15 = ((x69<=x70)&(x71+x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	volatile int32_t x75 = INT32_MIN;
	uint8_t x76 = 18U;
	int32_t t16 = 1;

	t16 = ((x73<=x74)&(x75+x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 10216906122LLU;
	uint32_t x78 = 24023U;
	int32_t x79 = 107626463;
	volatile int32_t t17 = 28738;

	t17 = ((x77<=x78)&(x79+x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = 27U;
	volatile int8_t x82 = 4;
	volatile uint32_t x83 = 3498511U;
	uint32_t x84 = UINT32_MAX;
	static volatile uint32_t t18 = 44078U;

	t18 = ((x81<=x82)&(x83+x84));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x87 = 138270LL;
	int8_t x88 = -1;
	static int64_t t19 = 173029931701181581LL;

	t19 = ((x85<=x86)&(x87+x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1;
	int8_t x91 = INT8_MAX;
	static int16_t x92 = INT16_MIN;
	int32_t t20 = 5773800;

	t20 = ((x89<=x90)&(x91+x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	uint64_t x95 = UINT64_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile uint64_t t21 = 4429LLU;

	t21 = ((x93<=x94)&(x95+x96));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x99 = INT16_MAX;
	volatile uint32_t x100 = 227165416U;
	volatile uint32_t t22 = 214608824U;

	t22 = ((x97<=x98)&(x99+x100));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	uint64_t x103 = 70479196676093LLU;
	int16_t x104 = 0;
	uint64_t t23 = 309470309LLU;

	t23 = ((x101<=x102)&(x103+x104));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	volatile int64_t x106 = -184378230401LL;
	uint32_t x107 = 10170331U;
	static uint16_t x108 = UINT16_MAX;
	uint32_t t24 = 167970U;

	t24 = ((x105<=x106)&(x107+x108));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 4760U;
	uint8_t x111 = 21U;
	static volatile int32_t x112 = INT32_MIN;
	static volatile int32_t t25 = 40;

	t25 = ((x109<=x110)&(x111+x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x114 = 7U;
	static uint32_t x115 = 464699911U;
	volatile uint32_t t26 = 2106471U;

	t26 = ((x113<=x114)&(x115+x116));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t27 = 1082LLU;

	t27 = ((x121<=x122)&(x123+x124));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MAX;
	int32_t x126 = -1;
	int64_t x127 = -1LL;
	static int32_t x128 = INT32_MIN;
	volatile int64_t t28 = 90611792LL;

	t28 = ((x125<=x126)&(x127+x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 9700630523029022LL;
	int64_t x130 = 16623094LL;
	uint8_t x131 = UINT8_MAX;
	static int32_t x132 = INT32_MIN;
	int32_t t29 = 2416817;

	t29 = ((x129<=x130)&(x131+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -1;
	uint16_t x134 = 6U;
	static int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MAX;
	volatile int64_t t30 = -9264094291161724LL;

	t30 = ((x133<=x134)&(x135+x136));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	static int64_t x138 = -136687630782LL;
	static uint8_t x139 = 91U;
	static uint8_t x140 = 1U;
	int32_t t31 = -95986925;

	t31 = ((x137<=x138)&(x139+x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x145 = UINT32_MAX;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	int32_t t32 = -57769;

	t32 = ((x145<=x146)&(x147+x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 85U;
	static uint64_t x150 = 1LLU;
	static uint8_t x152 = 15U;

	t33 = ((x149<=x150)&(x151+x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MIN;
	uint32_t x156 = 15657319U;
	static uint32_t t34 = 5413U;

	t34 = ((x153<=x154)&(x155+x156));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = UINT32_MAX;
	uint32_t x159 = UINT32_MAX;

	t35 = ((x157<=x158)&(x159+x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = -1;
	static uint16_t x163 = 6289U;
	int32_t x164 = INT32_MIN;

	t36 = ((x161<=x162)&(x163+x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	static int16_t x166 = 153;
	static volatile int16_t x168 = -232;
	static int32_t t37 = -12;

	t37 = ((x165<=x166)&(x167+x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	volatile int8_t x171 = INT8_MIN;
	int64_t x172 = 318236861LL;

	t38 = ((x169<=x170)&(x171+x172));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x174 = 1388U;
	uint8_t x175 = 1U;
	volatile int16_t x176 = -1;
	int32_t t39 = 3731;

	t39 = ((x173<=x174)&(x175+x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = 7U;
	uint32_t x178 = 5655959U;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t40 = 1334932U;

	t40 = ((x177<=x178)&(x179+x180));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x185 = 27U;
	int8_t x186 = INT8_MIN;
	static int8_t x187 = 19;
	volatile int16_t x188 = -10;

	t41 = ((x185<=x186)&(x187+x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = -493;
	uint32_t x191 = UINT32_MAX;
	uint32_t t42 = 97282U;

	t42 = ((x189<=x190)&(x191+x192));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = 58;
	uint16_t x194 = UINT16_MAX;
	volatile uint8_t x195 = 9U;
	int16_t x196 = INT16_MIN;
	int32_t t43 = 3;

	t43 = ((x193<=x194)&(x195+x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MAX;
	uint64_t x198 = 26LLU;
	static uint64_t x199 = 1461LLU;
	static int64_t x200 = INT64_MAX;
	static uint64_t t44 = 75751LLU;

	t44 = ((x197<=x198)&(x199+x200));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x206 = 1502U;
	int16_t x207 = INT16_MAX;
	uint64_t x208 = 2019308592499677LLU;
	volatile uint64_t t45 = 89786LLU;

	t45 = ((x205<=x206)&(x207+x208));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = 1534744246145831609LLU;
	int32_t x210 = -25144369;
	uint64_t x211 = UINT64_MAX;
	static int32_t x212 = -1;
	volatile uint64_t t46 = 101124607959754LLU;

	t46 = ((x209<=x210)&(x211+x212));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = 3;
	static volatile int32_t x214 = -3;
	static uint8_t x215 = 0U;
	static volatile int32_t x216 = 2661992;
	static volatile int32_t t47 = -6;

	t47 = ((x213<=x214)&(x215+x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 4228428LLU;
	uint8_t x220 = 21U;
	uint32_t t48 = 13804784U;

	t48 = ((x217<=x218)&(x219+x220));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = -388603473326088LL;
	int16_t x223 = 7;
	int16_t x224 = 1;

	t49 = ((x221<=x222)&(x223+x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	uint8_t x231 = 6U;
	volatile uint32_t x232 = UINT32_MAX;
	uint32_t t50 = 8833762U;

	t50 = ((x229<=x230)&(x231+x232));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = -4;
	volatile uint64_t x236 = 4205LLU;
	uint64_t t51 = 16381663592LLU;

	t51 = ((x233<=x234)&(x235+x236));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x239 = UINT8_MAX;
	volatile int16_t x240 = INT16_MAX;
	volatile int32_t t52 = -12157;

	t52 = ((x237<=x238)&(x239+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = -2462450;
	uint8_t x242 = 3U;
	uint64_t x243 = 49820823129LLU;
	static int64_t x244 = -5LL;
	static volatile uint64_t t53 = 4601325426621LLU;

	t53 = ((x241<=x242)&(x243+x244));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = 2596302680931LLU;
	static int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	volatile uint32_t x248 = 0U;
	uint32_t t54 = 220849U;

	t54 = ((x245<=x246)&(x247+x248));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = UINT16_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t55 = 876305613553LLU;

	t55 = ((x249<=x250)&(x251+x252));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x253 = UINT64_MAX;
	volatile int8_t x256 = INT8_MAX;
	static volatile int32_t t56 = 1;

	t56 = ((x253<=x254)&(x255+x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = 245LL;
	volatile uint64_t x258 = 327622843080979LLU;
	volatile int64_t x259 = INT64_MIN;
	uint16_t x260 = 771U;
	int64_t t57 = -2247490194713552LL;

	t57 = ((x257<=x258)&(x259+x260));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MIN;
	static volatile int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MAX;
	static int32_t t58 = -121440227;

	t58 = ((x261<=x262)&(x263+x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x265 = 5961U;
	int8_t x266 = INT8_MIN;
	volatile uint64_t x267 = 1434714821LLU;
	volatile uint8_t x268 = 0U;

	t59 = ((x265<=x266)&(x267+x268));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x269 = INT16_MIN;
	uint8_t x270 = 41U;
	uint64_t x271 = 869070375782692LLU;
	static volatile uint64_t t60 = 26793266LLU;

	t60 = ((x269<=x270)&(x271+x272));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	int32_t t61 = 23963040;

	t61 = ((x273<=x274)&(x275+x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = INT64_MAX;
	static int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	static int32_t x280 = -1;
	int32_t t62 = 22228;

	t62 = ((x277<=x278)&(x279+x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x281 = 9879U;
	uint64_t x282 = 62689901924320055LLU;
	uint64_t x283 = 60168000057119578LLU;
	int64_t x284 = INT64_MAX;
	uint64_t t63 = 551840LLU;

	t63 = ((x281<=x282)&(x283+x284));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = INT8_MIN;
	static volatile int64_t x286 = -1LL;
	volatile int8_t x287 = -1;
	uint8_t x288 = 2U;
	int32_t t64 = -4109185;

	t64 = ((x285<=x286)&(x287+x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x289 = 12U;
	int16_t x290 = INT16_MAX;
	uint16_t x291 = 9361U;
	int64_t x292 = INT64_MIN;

	t65 = ((x289<=x290)&(x291+x292));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MAX;
	uint16_t x296 = UINT16_MAX;

	t66 = ((x293<=x294)&(x295+x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x301 = 127870U;
	int32_t x303 = INT32_MAX;
	uint32_t x304 = 841045U;
	volatile uint32_t t67 = 28U;

	t67 = ((x301<=x302)&(x303+x304));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x305 = INT32_MIN;
	uint8_t x306 = 7U;
	uint64_t x307 = 604878582057LLU;
	int32_t x308 = INT32_MIN;
	uint64_t t68 = 7469648460735996LLU;

	t68 = ((x305<=x306)&(x307+x308));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MIN;
	uint8_t x311 = 20U;
	int32_t x312 = -1;

	t69 = ((x309<=x310)&(x311+x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -1LL;
	static uint64_t x314 = 907LLU;
	int16_t x315 = -1;
	int32_t x316 = -1;
	int32_t t70 = 368;

	t70 = ((x313<=x314)&(x315+x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x317 = 33010LL;
	int8_t x318 = 58;
	int16_t x319 = -1;
	volatile uint32_t x320 = 247934431U;
	static uint32_t t71 = 3722620U;

	t71 = ((x317<=x318)&(x319+x320));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = -39;
	int32_t x322 = 222867;
	uint16_t x323 = 208U;
	int16_t x324 = -1;
	int32_t t72 = -5800087;

	t72 = ((x321<=x322)&(x323+x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x325 = -8005;
	static int64_t x326 = INT64_MIN;
	static int32_t x327 = -1;
	int8_t x328 = INT8_MIN;
	volatile int32_t t73 = 81281361;

	t73 = ((x325<=x326)&(x327+x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = 9;
	int8_t x331 = INT8_MIN;
	volatile uint8_t x332 = 1U;
	volatile int32_t t74 = -684263132;

	t74 = ((x329<=x330)&(x331+x332));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = -1;

	t75 = ((x333<=x334)&(x335+x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = INT16_MIN;
	static int8_t x339 = INT8_MIN;
	int32_t t76 = -638;

	t76 = ((x337<=x338)&(x339+x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x341 = INT16_MAX;
	int32_t x342 = -181269;
	volatile int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;
	int64_t t77 = -53645LL;

	t77 = ((x341<=x342)&(x343+x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = UINT8_MAX;
	volatile uint16_t x346 = 94U;
	uint64_t t78 = 56LLU;

	t78 = ((x345<=x346)&(x347+x348));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x350 = INT32_MAX;
	int32_t x352 = 81816;

	t79 = ((x349<=x350)&(x351+x352));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = -36179;
	uint16_t x354 = 27523U;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t80 = 150983LLU;

	t80 = ((x353<=x354)&(x355+x356));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = 4U;
	uint16_t x358 = UINT16_MAX;
	volatile int16_t x360 = -1;
	uint64_t t81 = 15307386695LLU;

	t81 = ((x357<=x358)&(x359+x360));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x361 = 297;
	int64_t x362 = -1LL;
	static uint32_t x363 = 18736148U;
	int64_t t82 = -1LL;

	t82 = ((x361<=x362)&(x363+x364));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x365 = 36;
	int64_t x366 = -1LL;
	uint64_t x367 = 6034691063682LLU;
	int16_t x368 = -36;
	uint64_t t83 = 1533505009627LLU;

	t83 = ((x365<=x366)&(x367+x368));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x370 = 15678803LLU;
	static uint16_t x371 = 3U;
	int16_t x372 = INT16_MIN;
	int32_t t84 = -14;

	t84 = ((x369<=x370)&(x371+x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = 9134U;
	int64_t x374 = INT64_MIN;
	int32_t x376 = -1;

	t85 = ((x373<=x374)&(x375+x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x378 = 1;
	uint64_t x379 = 34462039673812216LLU;
	int32_t x380 = -169923345;
	uint64_t t86 = 2961473238LLU;

	t86 = ((x377<=x378)&(x379+x380));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int16_t x383 = -1;
	volatile int64_t x384 = INT64_MAX;

	t87 = ((x381<=x382)&(x383+x384));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = 60U;
	static int16_t x386 = INT16_MIN;
	static int32_t x387 = 11616152;

	t88 = ((x385<=x386)&(x387+x388));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x391 = 545767364221451LLU;
	static int32_t x392 = -1;

	t89 = ((x389<=x390)&(x391+x392));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x394 = INT16_MAX;
	static volatile uint8_t x395 = 0U;
	static volatile int16_t x396 = -1;
	volatile int32_t t90 = 58;

	t90 = ((x393<=x394)&(x395+x396));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x398 = 1U;
	uint64_t x399 = 1369426LLU;
	int32_t x400 = INT32_MAX;
	volatile uint64_t t91 = 11187974176779LLU;

	t91 = ((x397<=x398)&(x399+x400));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x401 = -148;
	uint8_t x402 = 1U;
	static uint64_t x403 = 32869905LLU;
	uint16_t x404 = UINT16_MAX;

	t92 = ((x401<=x402)&(x403+x404));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x405 = INT64_MIN;
	uint16_t x407 = UINT16_MAX;
	volatile int64_t x408 = -13337646LL;
	volatile int64_t t93 = -221329568997707LL;

	t93 = ((x405<=x406)&(x407+x408));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = 60U;
	static int32_t x414 = INT32_MAX;
	static volatile uint32_t x415 = UINT32_MAX;
	int32_t x416 = 15078;

	t94 = ((x413<=x414)&(x415+x416));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x421 = 4U;
	int16_t x422 = 918;
	int8_t x423 = INT8_MIN;
	int64_t t95 = -51164LL;

	t95 = ((x421<=x422)&(x423+x424));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x426 = 6U;
	int64_t x428 = 959197LL;
	static volatile int64_t t96 = -6342635574250LL;

	t96 = ((x425<=x426)&(x427+x428));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x429 = 7196898LLU;
	static volatile uint16_t x431 = 1U;
	int32_t x432 = 6;
	volatile int32_t t97 = 10446;

	t97 = ((x429<=x430)&(x431+x432));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x437 = UINT64_MAX;
	int64_t x440 = 3LL;
	int64_t t98 = 4648396993814000LL;

	t98 = ((x437<=x438)&(x439+x440));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x441 = INT8_MAX;
	int8_t x443 = INT8_MIN;
	uint8_t x444 = 4U;
	volatile int32_t t99 = -2;

	t99 = ((x441<=x442)&(x443+x444));

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

