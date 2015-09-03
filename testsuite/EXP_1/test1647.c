#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x8 = -2;
static uint8_t x10 = UINT8_MAX;
uint8_t x15 = UINT8_MAX;
int64_t x17 = -2259649LL;
int32_t x18 = -1;
volatile int64_t x23 = -1LL;
uint8_t x32 = 2U;
static int32_t x36 = -1;
volatile int16_t x47 = INT16_MAX;
int32_t t11 = 141;
int16_t x49 = INT16_MIN;
int16_t x50 = -1;
uint64_t x53 = 6009989471LLU;
uint8_t x54 = 51U;
volatile uint64_t x57 = UINT64_MAX;
volatile int32_t t14 = -103;
int32_t x66 = -1;
int16_t x69 = 179;
volatile int16_t x70 = INT16_MIN;
uint32_t x71 = 378657903U;
static int8_t x77 = -1;
static uint16_t x80 = 143U;
int32_t t19 = -5059892;
volatile int16_t x81 = 0;
volatile int64_t x84 = 13596LL;
uint8_t x88 = UINT8_MAX;
static uint8_t x94 = 0U;
static volatile int64_t x95 = -688LL;
static int8_t x99 = -31;
int32_t t24 = -1;
int16_t x103 = -1;
int8_t x104 = -1;
static volatile int16_t x106 = INT16_MAX;
int32_t t28 = 15867;
static volatile uint64_t x119 = UINT64_MAX;
int8_t x126 = 16;
uint8_t x128 = UINT8_MAX;
int32_t t31 = 1238395;
int32_t t32 = 55908401;
int64_t x134 = 2277LL;
static uint16_t x140 = 8U;
uint16_t x141 = 245U;
uint16_t x144 = 2U;
volatile int32_t x146 = INT32_MIN;
int8_t x147 = INT8_MIN;
int16_t x151 = 4885;
volatile int16_t x152 = 1;
volatile uint64_t x154 = 738896705697006563LLU;
int32_t x155 = 3590169;
static volatile uint8_t x156 = 0U;
int16_t x166 = INT16_MIN;
volatile int8_t x176 = INT8_MIN;
static int32_t x178 = INT32_MIN;
int8_t x179 = INT8_MIN;
static int64_t x185 = -1LL;
int32_t x200 = -1543;
static int32_t t49 = -129;
static volatile int64_t x201 = 479LL;
int32_t t50 = -60885251;
uint32_t x207 = 6371U;
static int32_t t59 = -252;
uint16_t x243 = 2U;
int8_t x244 = 24;
static int64_t x260 = -69698LL;
int32_t t65 = -19655;
int8_t x268 = -1;
int32_t x275 = INT32_MAX;
volatile uint32_t x282 = 82373U;
int32_t x284 = -20446932;
int32_t t71 = 11;
uint16_t x301 = UINT16_MAX;
volatile int64_t x307 = INT64_MIN;
uint8_t x308 = 13U;
volatile uint32_t x312 = 1U;
int32_t x316 = INT32_MAX;
int32_t x334 = INT32_MIN;
volatile int32_t t85 = 6;
static volatile uint64_t x347 = UINT64_MAX;
static uint8_t x351 = UINT8_MAX;
int32_t t87 = -44040;
volatile int32_t t92 = 4;
static int32_t x373 = 503627;
int8_t x376 = INT8_MIN;
int16_t x378 = INT16_MAX;
int8_t x389 = INT8_MAX;
int64_t x391 = -1LL;
int32_t x399 = INT32_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MIN;
	int32_t x4 = -1;
	int32_t t0 = 335612;

	t0 = (((x1<=x2)<=x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int32_t x6 = -6580;
	uint32_t x7 = 1U;
	int32_t t1 = 7078828;

	t1 = (((x5<=x6)<=x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x11 = 7655U;
	int16_t x12 = -211;
	volatile int32_t t2 = -39;

	t2 = (((x9<=x10)<=x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -6;
	int16_t x14 = INT16_MIN;
	int32_t x16 = INT32_MAX;
	int32_t t3 = -41129;

	t3 = (((x13<=x14)<=x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x19 = UINT8_MAX;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -17437;

	t4 = (((x17<=x18)<=x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = 41;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 1;

	t5 = (((x21<=x22)<=x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 578LLU;
	int64_t x26 = -47654974LL;
	uint64_t x27 = 5942141267LLU;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -65;

	t6 = (((x25<=x26)<=x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = -13;
	volatile uint16_t x31 = UINT16_MAX;
	volatile int32_t t7 = -7936;

	t7 = (((x29<=x30)<=x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 13U;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = UINT16_MAX;
	static volatile int32_t t8 = -216555842;

	t8 = (((x33<=x34)<=x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int64_t x38 = -1LL;
	int8_t x39 = INT8_MIN;
	static volatile uint32_t x40 = 470073U;
	int32_t t9 = -5171;

	t9 = (((x37<=x38)<=x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 126615867286171289LLU;
	volatile int32_t x42 = -4053;
	int8_t x43 = -20;
	uint64_t x44 = 618LLU;
	int32_t t10 = -16;

	t10 = (((x41<=x42)<=x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int8_t x46 = -1;
	uint32_t x48 = UINT32_MAX;

	t11 = (((x45<=x46)<=x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x51 = INT8_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = 135;

	t12 = (((x49<=x50)<=x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x55 = UINT32_MAX;
	uint8_t x56 = 3U;
	int32_t t13 = 0;

	t13 = (((x53<=x54)<=x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 1671U;
	volatile uint32_t x59 = 30U;
	static uint32_t x60 = 40064152U;

	t14 = (((x57<=x58)<=x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	static int16_t x62 = INT16_MIN;
	uint32_t x63 = 174259763U;
	int8_t x64 = 7;
	int32_t t15 = -432592;

	t15 = (((x61<=x62)<=x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile int8_t x67 = -1;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = -34047;

	t16 = (((x65<=x66)<=x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 6;

	t17 = (((x69<=x70)<=x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -81;
	uint64_t x74 = 50586635938547855LLU;
	volatile int32_t x75 = -3107;
	volatile uint64_t x76 = 84993732671LLU;
	volatile int32_t t18 = 9538;

	t18 = (((x73<=x74)<=x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = -60117LL;
	static volatile int64_t x79 = INT64_MAX;

	t19 = (((x77<=x78)<=x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	uint32_t x83 = 374U;
	int32_t t20 = 0;

	t20 = (((x81<=x82)<=x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 347287574174954LLU;
	uint32_t x86 = 9187U;
	uint64_t x87 = 15034LLU;
	int32_t t21 = 87161;

	t21 = (((x85<=x86)<=x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint16_t x90 = UINT16_MAX;
	uint16_t x91 = 15087U;
	volatile uint32_t x92 = UINT32_MAX;
	static int32_t t22 = -2906112;

	t22 = (((x89<=x90)<=x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 0U;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = -424634919;

	t23 = (((x93<=x94)<=x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = UINT32_MAX;
	uint16_t x98 = 4U;
	volatile uint8_t x100 = 1U;

	t24 = (((x97<=x98)<=x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	volatile int64_t x102 = INT64_MIN;
	volatile int32_t t25 = 115743;

	t25 = (((x101<=x102)<=x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint16_t x107 = UINT16_MAX;
	volatile int16_t x108 = 13;
	volatile int32_t t26 = -15;

	t26 = (((x105<=x106)<=x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	uint64_t x110 = 1LLU;
	static volatile uint16_t x111 = 11962U;
	static uint32_t x112 = 54U;
	int32_t t27 = -252123;

	t27 = (((x109<=x110)<=x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x114 = 14663U;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = INT64_MAX;

	t28 = (((x113<=x114)<=x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	int16_t x118 = -1;
	int8_t x120 = -1;
	int32_t t29 = -5233663;

	t29 = (((x117<=x118)<=x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = UINT8_MAX;
	int64_t x123 = INT64_MAX;
	uint64_t x124 = 3927LLU;
	int32_t t30 = -707;

	t30 = (((x121<=x122)<=x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -80;
	uint64_t x127 = UINT64_MAX;

	t31 = (((x125<=x126)<=x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -593136659;
	int16_t x130 = INT16_MIN;
	volatile uint16_t x131 = 14985U;
	volatile uint64_t x132 = 13290956LLU;

	t32 = (((x129<=x130)<=x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int32_t x135 = -1;
	int8_t x136 = -1;
	int32_t t33 = 499;

	t33 = (((x133<=x134)<=x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 34U;
	int32_t t34 = -8300010;

	t34 = (((x137<=x138)<=x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MIN;
	uint64_t x143 = UINT64_MAX;
	volatile int32_t t35 = -612244173;

	t35 = (((x141<=x142)<=x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -3418;
	volatile int32_t x148 = -1;
	static volatile int32_t t36 = 42;

	t36 = (((x145<=x146)<=x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int32_t x150 = INT32_MIN;
	static int32_t t37 = -6645252;

	t37 = (((x149<=x150)<=x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 466353319U;
	int32_t t38 = 1;

	t38 = (((x153<=x154)<=x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -7759180393487740LL;
	static uint8_t x158 = 6U;
	uint8_t x159 = UINT8_MAX;
	volatile int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 418;

	t39 = (((x157<=x158)<=x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	static volatile int32_t x162 = -7;
	volatile int8_t x163 = -33;
	int64_t x164 = -1LL;
	static volatile int32_t t40 = -196972076;

	t40 = (((x161<=x162)<=x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	static uint8_t x167 = UINT8_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = 85;

	t41 = (((x165<=x166)<=x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	static volatile int64_t x170 = INT64_MAX;
	uint32_t x171 = 391030U;
	volatile uint64_t x172 = 879680LLU;
	volatile int32_t t42 = 119585;

	t42 = (((x169<=x170)<=x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	int8_t x174 = INT8_MIN;
	volatile int16_t x175 = 18;
	static int32_t t43 = -4;

	t43 = (((x173<=x174)<=x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = -1;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 502990543;

	t44 = (((x177<=x178)<=x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = 1;
	int8_t x182 = 4;
	uint16_t x183 = 5U;
	int64_t x184 = 129134150135079520LL;
	volatile int32_t t45 = 98097545;

	t45 = (((x181<=x182)<=x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x186 = 2468525U;
	volatile uint64_t x187 = 87775670518LLU;
	int32_t x188 = -1;
	int32_t t46 = -604;

	t46 = (((x185<=x186)<=x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 3611692311301989LL;
	uint64_t x190 = 123LLU;
	static volatile uint16_t x191 = UINT16_MAX;
	volatile int64_t x192 = 27725LL;
	volatile int32_t t47 = 228484678;

	t47 = (((x189<=x190)<=x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -146096903930917336LL;
	static int64_t x194 = -1835702357863516LL;
	uint16_t x195 = UINT16_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 912;

	t48 = (((x193<=x194)<=x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 352U;
	int16_t x198 = -3565;
	volatile uint8_t x199 = 0U;

	t49 = (((x197<=x198)<=x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -10033429;
	int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;

	t50 = (((x201<=x202)<=x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	static volatile int64_t x206 = INT64_MAX;
	int16_t x208 = -1;
	volatile int32_t t51 = 100;

	t51 = (((x205<=x206)<=x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	uint32_t x210 = 120778U;
	int16_t x211 = INT16_MAX;
	static int32_t x212 = 422536;
	static int32_t t52 = 465276;

	t52 = (((x209<=x210)<=x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int64_t x214 = INT64_MIN;
	volatile int32_t x215 = -40820310;
	uint32_t x216 = 42605U;
	static volatile int32_t t53 = 49921596;

	t53 = (((x213<=x214)<=x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MIN;
	static int8_t x219 = -27;
	static int32_t x220 = INT32_MAX;
	volatile int32_t t54 = 1149950;

	t54 = (((x217<=x218)<=x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MAX;
	static volatile uint32_t x222 = 0U;
	static uint32_t x223 = 23691U;
	int64_t x224 = -1LL;
	int32_t t55 = 95;

	t55 = (((x221<=x222)<=x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 1804U;
	volatile uint16_t x226 = 21U;
	static int16_t x227 = 4;
	volatile uint32_t x228 = 15522U;
	volatile int32_t t56 = -996;

	t56 = (((x225<=x226)<=x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = 327343;
	volatile uint8_t x230 = 45U;
	static uint8_t x231 = 13U;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t57 = -25940;

	t57 = (((x229<=x230)<=x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -152124408;
	static uint16_t x234 = 2U;
	int8_t x235 = 12;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = -12;

	t58 = (((x233<=x234)<=x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int64_t x238 = INT64_MIN;
	volatile int64_t x239 = INT64_MIN;
	volatile uint64_t x240 = UINT64_MAX;

	t59 = (((x237<=x238)<=x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static int32_t x242 = INT32_MIN;
	int32_t t60 = 1649153;

	t60 = (((x241<=x242)<=x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 20;
	int16_t x246 = INT16_MAX;
	static int64_t x247 = -1LL;
	static int16_t x248 = -436;
	volatile int32_t t61 = -32734653;

	t61 = (((x245<=x246)<=x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x249 = 996462348LLU;
	volatile uint64_t x250 = UINT64_MAX;
	int8_t x251 = INT8_MAX;
	uint32_t x252 = UINT32_MAX;
	int32_t t62 = 3;

	t62 = (((x249<=x250)<=x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	static volatile int16_t x254 = INT16_MIN;
	static int64_t x255 = -2LL;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -3;

	t63 = (((x253<=x254)<=x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 183316672449331236LLU;
	static int16_t x258 = 5958;
	int8_t x259 = 14;
	int32_t t64 = -648440889;

	t64 = (((x257<=x258)<=x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MAX;
	static int32_t x262 = INT32_MAX;
	static volatile int8_t x263 = INT8_MIN;
	int16_t x264 = 54;

	t65 = (((x261<=x262)<=x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x265 = -2893501;
	uint16_t x266 = 8602U;
	int16_t x267 = INT16_MIN;
	int32_t t66 = -2688;

	t66 = (((x265<=x266)<=x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 3U;
	int32_t t67 = 1714;

	t67 = (((x269<=x270)<=x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int32_t x274 = 2;
	volatile uint64_t x276 = 6044307086LLU;
	volatile int32_t t68 = -25745;

	t68 = (((x273<=x274)<=x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 3U;
	uint64_t x278 = 464492545179LLU;
	int16_t x279 = 1;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = 483864854;

	t69 = (((x277<=x278)<=x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -250679771;
	static int32_t x283 = INT32_MIN;
	int32_t t70 = -5099755;

	t70 = (((x281<=x282)<=x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = 1LLU;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = -3;

	t71 = (((x285<=x286)<=x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 136720993241169044LL;
	uint8_t x290 = 101U;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = 59877608;

	t72 = (((x289<=x290)<=x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int32_t x294 = -244997;
	int8_t x295 = -1;
	volatile uint8_t x296 = 0U;
	int32_t t73 = -1289611;

	t73 = (((x293<=x294)<=x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = -1;
	int16_t x298 = 51;
	volatile int32_t x299 = -1;
	int8_t x300 = -63;
	static volatile int32_t t74 = -562073;

	t74 = (((x297<=x298)<=x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	int16_t x303 = -248;
	static int64_t x304 = 4859528360142737LL;
	int32_t t75 = 153592;

	t75 = (((x301<=x302)<=x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	static int8_t x306 = 1;
	volatile int32_t t76 = 1;

	t76 = (((x305<=x306)<=x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 7440821511LL;
	uint16_t x310 = 3U;
	int64_t x311 = 8315129081LL;
	int32_t t77 = 33;

	t77 = (((x309<=x310)<=x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	static uint16_t x314 = 1U;
	static int32_t x315 = -12776;
	static volatile int32_t t78 = 834043604;

	t78 = (((x313<=x314)<=x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MAX;
	int32_t x318 = 8;
	static uint64_t x319 = UINT64_MAX;
	volatile int64_t x320 = 112LL;
	int32_t t79 = -101142;

	t79 = (((x317<=x318)<=x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	static volatile int32_t x322 = 825583;
	uint32_t x323 = 1564U;
	uint64_t x324 = 6506324140767761LLU;
	int32_t t80 = 1;

	t80 = (((x321<=x322)<=x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	int64_t x326 = -89040662799032LL;
	volatile uint8_t x327 = 1U;
	int64_t x328 = -1LL;
	volatile int32_t t81 = 3;

	t81 = (((x325<=x326)<=x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint64_t x330 = UINT64_MAX;
	uint64_t x331 = 6291426177519LLU;
	int32_t x332 = -120677;
	volatile int32_t t82 = -8934581;

	t82 = (((x329<=x330)<=x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -1;
	static int8_t x335 = -1;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -140;

	t83 = (((x333<=x334)<=x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 1;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MAX;
	static int8_t x340 = -9;
	volatile int32_t t84 = -2214296;

	t84 = (((x337<=x338)<=x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = 4;
	static int8_t x342 = 2;
	int64_t x343 = 1962293133745258LL;
	int32_t x344 = INT32_MIN;

	t85 = (((x341<=x342)<=x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 33U;
	volatile int16_t x346 = 7226;
	uint8_t x348 = 29U;
	int32_t t86 = -32835369;

	t86 = (((x345<=x346)<=x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	int8_t x350 = -1;
	static int8_t x352 = INT8_MIN;

	t87 = (((x349<=x350)<=x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = UINT16_MAX;
	static uint16_t x354 = 188U;
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	volatile int32_t t88 = -69189;

	t88 = (((x353<=x354)<=x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	static int64_t x359 = INT64_MAX;
	int8_t x360 = INT8_MIN;
	static int32_t t89 = -5;

	t89 = (((x357<=x358)<=x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MIN;
	int8_t x363 = -1;
	int16_t x364 = INT16_MAX;
	volatile int32_t t90 = 44;

	t90 = (((x361<=x362)<=x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 17;
	static int64_t x366 = INT64_MAX;
	volatile int64_t x367 = -1LL;
	int8_t x368 = 4;
	static volatile int32_t t91 = 1745;

	t91 = (((x365<=x366)<=x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	static volatile uint16_t x370 = 5U;
	uint16_t x371 = 0U;
	static int16_t x372 = -1573;

	t92 = (((x369<=x370)<=x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x374 = 1504188721569671811LL;
	static uint64_t x375 = 7180023248409745LLU;
	static volatile int32_t t93 = -1;

	t93 = (((x373<=x374)<=x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 29795U;
	int64_t x379 = -1LL;
	volatile uint8_t x380 = 30U;
	volatile int32_t t94 = -3;

	t94 = (((x377<=x378)<=x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	static volatile int16_t x382 = INT16_MIN;
	int8_t x383 = -22;
	int16_t x384 = INT16_MAX;
	volatile int32_t t95 = 0;

	t95 = (((x381<=x382)<=x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 491546067LLU;
	uint8_t x386 = 0U;
	int64_t x387 = INT64_MIN;
	uint16_t x388 = 4U;
	int32_t t96 = 90372515;

	t96 = (((x385<=x386)<=x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = 12824U;
	uint32_t x392 = 1391595U;
	static int32_t t97 = 120039;

	t97 = (((x389<=x390)<=x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x393 = 1162642217154685307LL;
	static int32_t x394 = -23;
	uint8_t x395 = 1U;
	int8_t x396 = 15;
	int32_t t98 = 944327;

	t98 = (((x393<=x394)<=x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	static int8_t x398 = 41;
	int32_t x400 = INT32_MIN;
	int32_t t99 = -2748;

	t99 = (((x397<=x398)<=x399)<x400);

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

