#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MAX;
static uint32_t x19 = 1U;
int64_t x23 = -871159814119LL;
uint64_t x25 = 86852590LLU;
uint32_t x26 = UINT32_MAX;
int8_t x27 = -7;
static int64_t x28 = -859472765LL;
uint64_t t5 = 639223640LLU;
int8_t x39 = -7;
volatile int8_t x42 = INT8_MAX;
int8_t x46 = INT8_MIN;
int32_t x47 = -1;
static uint16_t x48 = 6U;
uint8_t x62 = UINT8_MAX;
uint16_t x64 = 62U;
uint64_t x65 = UINT64_MAX;
int64_t x79 = -1LL;
volatile int8_t x81 = -1;
int64_t x82 = -1LL;
int16_t x86 = INT16_MIN;
int32_t x91 = INT32_MAX;
static volatile int64_t t22 = 249586LL;
uint32_t x101 = 3232U;
uint64_t x112 = UINT64_MAX;
static int8_t x120 = INT8_MAX;
uint8_t x129 = UINT8_MAX;
static uint64_t x134 = 137316LLU;
int8_t x135 = INT8_MIN;
uint64_t t30 = 872LLU;
int16_t x142 = INT16_MIN;
int8_t x143 = 5;
static int8_t x148 = INT8_MAX;
volatile uint64_t t33 = 7513786LLU;
int32_t x157 = INT32_MIN;
int16_t x158 = INT16_MIN;
int32_t x163 = INT32_MIN;
int8_t x168 = 3;
volatile int32_t t37 = 7335;
int32_t x175 = INT32_MIN;
volatile int8_t x176 = 21;
int16_t x183 = INT16_MAX;
int8_t x186 = -1;
int8_t x188 = INT8_MAX;
uint64_t x189 = UINT64_MAX;
volatile int8_t x191 = 6;
int8_t x193 = INT8_MAX;
uint16_t x202 = UINT16_MAX;
int16_t x206 = 779;
int32_t x209 = -101;
uint64_t x210 = 33342986536LLU;
uint16_t x212 = UINT16_MAX;
int32_t t51 = -635;
static int16_t x225 = INT16_MIN;
int64_t x227 = INT64_MIN;
static volatile uint32_t x235 = 22U;
int64_t x240 = -1LL;
volatile uint32_t t56 = 189U;
int16_t x250 = INT16_MAX;
uint64_t t60 = 4254172045769890LLU;
static uint64_t x266 = UINT64_MAX;
int64_t x273 = 20LL;
static uint64_t x275 = UINT64_MAX;
int32_t x277 = INT32_MAX;
int32_t x284 = INT32_MAX;
int16_t x291 = 1;
int8_t x292 = -7;
uint16_t x297 = 22527U;
int32_t x298 = -1;
int64_t x310 = 772419876582LL;
volatile uint32_t x320 = 1U;
static uint16_t x329 = UINT16_MAX;
int8_t x337 = 1;
static uint16_t x340 = 3U;
static volatile int16_t x341 = INT16_MIN;
uint8_t x343 = UINT8_MAX;
static uint32_t x344 = 4577228U;
int64_t x347 = INT64_MIN;
uint64_t x352 = 6901342671603LLU;
int32_t x357 = -233785;
uint8_t x359 = 47U;
static int64_t x369 = 240061LL;
static uint8_t x371 = 118U;
volatile int64_t t86 = 17011396LL;
int16_t x377 = INT16_MIN;
static int32_t x380 = INT32_MIN;
uint32_t t89 = 6560U;
uint16_t x385 = 255U;
volatile int16_t x387 = INT16_MAX;
int64_t x388 = INT64_MIN;
int64_t t90 = 1415049233989LL;
int8_t x390 = -1;
static int16_t x391 = INT16_MIN;
int64_t x393 = 460601492LL;
uint16_t x394 = 0U;
static uint32_t x406 = UINT32_MAX;
int32_t t96 = -14612218;
static volatile int8_t x423 = 0;
volatile int64_t t98 = -13736981863LL;
static int64_t x426 = INT64_MIN;
int16_t x427 = INT16_MAX;


void f0(void) {
	uint64_t x1 = 141694294LLU;
	int32_t x2 = 783924196;
	volatile int32_t x3 = -2955143;
	uint8_t x4 = 5U;
	volatile uint64_t t0 = 160LLU;

	t0 = ((x1|x2)+(x3^x4));

	if (t0 != 785295474LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	volatile int64_t x6 = -444LL;
	static int16_t x7 = -1;
	volatile uint64_t t1 = 45871081LLU;

	t1 = ((x5|x6)+(x7^x8));

	if (t1 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -23;
	uint32_t x10 = UINT32_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	uint8_t x12 = UINT8_MAX;
	uint32_t t2 = 8U;

	t2 = ((x9|x10)+(x11^x12));

	if (t2 != 65279U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = -1;
	static int32_t x20 = -1;
	uint32_t t3 = 5160U;

	t3 = ((x17|x18)+(x19^x20));

	if (t3 != 4294967293U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = -1;
	volatile uint32_t x22 = 86457U;
	int64_t x24 = -26025831LL;
	static volatile int64_t t4 = 64997785430172LL;

	t4 = ((x21|x22)+(x23^x24));

	if (t4 != 875446061183LL) { NG(); } else { ; }
	
}

void f5(void) {


	t5 = ((x25|x26)+(x27^x28));

	if (t5 != 5154440057LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = 7;
	static int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	int32_t x32 = 11;
	volatile int64_t t6 = 1633611040617170LL;

	t6 = ((x29|x30)+(x31^x32));

	if (t6 != 9223372036854775690LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 0;
	uint8_t x34 = 9U;
	static int16_t x35 = -1082;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = 9674;

	t7 = ((x33|x34)+(x35^x36));

	if (t7 != 1103) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = UINT32_MAX;
	int16_t x40 = -1;
	volatile uint32_t t8 = 87688U;

	t8 = ((x37|x38)+(x39^x40));

	if (t8 != 5U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 11U;
	uint8_t x43 = 1U;
	uint8_t x44 = UINT8_MAX;
	volatile uint32_t t9 = 3188311U;

	t9 = ((x41|x42)+(x43^x44));

	if (t9 != 381U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t t10 = -12408;

	t10 = ((x45|x46)+(x47^x48));

	if (t10 != -8) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = -1;
	int64_t x50 = -12102145LL;
	int32_t x51 = 623;
	uint32_t x52 = 43652928U;
	volatile int64_t t11 = -109868459761233232LL;

	t11 = ((x49|x50)+(x51^x52));

	if (t11 != 43652398LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = -4414LL;
	int64_t x54 = INT64_MAX;
	uint64_t x55 = UINT64_MAX;
	volatile uint8_t x56 = UINT8_MAX;
	uint64_t t12 = 3255147159782LLU;

	t12 = ((x53|x54)+(x55^x56));

	if (t12 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = -1;
	uint8_t x58 = UINT8_MAX;
	static int32_t x59 = -26687093;
	int8_t x60 = 41;
	static volatile int32_t t13 = -8241;

	t13 = ((x57|x58)+(x59^x60));

	if (t13 != -26687071) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = 1;
	int32_t x63 = INT32_MIN;
	int32_t t14 = -600681633;

	t14 = ((x61|x62)+(x63^x64));

	if (t14 != -2147483331) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	volatile int16_t x68 = -1298;
	uint64_t t15 = 5469LLU;

	t15 = ((x65|x66)+(x67^x68));

	if (t15 != 18446744073709550224LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = 2348970U;
	volatile uint16_t x71 = 589U;
	int8_t x72 = 1;
	static volatile uint32_t t16 = 5U;

	t16 = ((x69|x70)+(x71^x72));

	if (t16 != 502U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MAX;
	static int8_t x78 = INT8_MIN;
	uint64_t x80 = UINT64_MAX;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x77|x78)+(x79^x80));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x83 = -12850;
	volatile int8_t x84 = -2;
	int64_t t18 = -63LL;

	t18 = ((x81|x82)+(x83^x84));

	if (t18 != 12847LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MAX;
	volatile int16_t x87 = -1;
	static int32_t x88 = -196;
	int64_t t19 = 254167030031LL;

	t19 = ((x85|x86)+(x87^x88));

	if (t19 != 194LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = INT16_MAX;
	int8_t x90 = 0;
	uint16_t x92 = UINT16_MAX;
	int32_t t20 = 1;

	t20 = ((x89|x90)+(x91^x92));

	if (t20 != 2147450879) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = INT32_MAX;
	int32_t x94 = INT32_MIN;
	uint32_t x95 = 12481U;
	uint64_t x96 = 253290393369412LLU;
	static uint64_t t21 = 102737LLU;

	t21 = ((x93|x94)+(x95^x96));

	if (t21 != 253290393357188LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;

	t22 = ((x97|x98)+(x99^x100));

	if (t22 != 32639LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x102 = 2008943249443LLU;
	uint16_t x103 = 12882U;
	static int32_t x104 = -608;
	volatile uint64_t t23 = 29435524107890745LLU;

	t23 = ((x101|x102)+(x103^x104));

	if (t23 != 2008943238293LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	volatile int8_t x107 = INT8_MIN;
	int8_t x108 = -51;
	int64_t t24 = -3LL;

	t24 = ((x105|x106)+(x107^x108));

	if (t24 != 76LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = -70LL;
	uint32_t x110 = 3U;
	int32_t x111 = INT32_MIN;
	volatile uint64_t t25 = 460046LLU;

	t25 = ((x109|x110)+(x111^x112));

	if (t25 != 2147483578LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile int64_t t26 = -756LL;

	t26 = ((x117|x118)+(x119^x120));

	if (t26 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 396025U;
	int8_t x123 = 1;
	uint8_t x124 = 57U;
	uint32_t t27 = 5477936U;

	t27 = ((x121|x122)+(x123^x124));

	if (t27 != 2147879729U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = INT64_MAX;
	int64_t x126 = 26LL;
	static uint32_t x127 = UINT32_MAX;
	static int32_t x128 = -1;
	int64_t t28 = INT64_MAX;

	t28 = ((x125|x126)+(x127^x128));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = -1;
	static int64_t x132 = -1LL;
	static volatile int64_t t29 = -16345495671330LL;

	t29 = ((x129|x130)+(x131^x132));

	if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = INT64_MAX;
	static int64_t x136 = INT64_MIN;

	t30 = ((x133|x134)+(x135^x136));

	if (t30 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = INT32_MIN;
	volatile int16_t x144 = 15;
	int32_t t31 = 3198;

	t31 = ((x141|x142)+(x143^x144));

	if (t31 != -32758) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MAX;
	uint32_t x146 = 110710U;
	volatile int8_t x147 = INT8_MIN;
	volatile uint32_t t32 = 374U;

	t32 = ((x145|x146)+(x147^x148));

	if (t32 != 131070U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = -29089942666LL;
	int8_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	volatile int16_t x152 = INT16_MAX;

	t33 = ((x149|x150)+(x151^x152));

	if (t33 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	uint8_t x154 = 4U;
	static int8_t x155 = INT8_MIN;
	uint32_t x156 = 41U;
	uint64_t t34 = 29332577168LLU;

	t34 = ((x153|x154)+(x155^x156));

	if (t34 != 4294967208LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x159 = 7;
	static volatile int32_t x160 = INT32_MAX;
	volatile int32_t t35 = 208718152;

	t35 = ((x157|x158)+(x159^x160));

	if (t35 != 2147450872) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = -1101;
	int32_t x162 = INT32_MAX;
	int64_t x164 = -1LL;
	volatile int64_t t36 = -90997217244144431LL;

	t36 = ((x161|x162)+(x163^x164));

	if (t36 != 2147483646LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 2U;
	static int32_t x166 = 2;
	volatile int8_t x167 = INT8_MIN;

	t37 = ((x165|x166)+(x167^x168));

	if (t37 != -123) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x169 = 395052U;
	uint32_t x170 = 385263U;
	volatile uint16_t x171 = 1U;
	int64_t x172 = INT64_MIN;
	volatile int64_t t38 = 64955127796627LL;

	t38 = ((x169|x170)+(x171^x172));

	if (t38 != -9223372036854257680LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = INT32_MAX;
	static int32_t x174 = INT32_MIN;
	static volatile int32_t t39 = 682964295;

	t39 = ((x173|x174)+(x175^x176));

	if (t39 != -2147483628) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = 895477331;
	uint8_t x178 = UINT8_MAX;
	volatile int64_t x179 = -1LL;
	int32_t x180 = -1;
	volatile int64_t t40 = -1975891637592784LL;

	t40 = ((x177|x178)+(x179^x180));

	if (t40 != 895477503LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 2132079U;
	volatile int16_t x182 = 2;
	static uint16_t x184 = UINT16_MAX;
	uint32_t t41 = 79777962U;

	t41 = ((x181|x182)+(x183^x184));

	if (t41 != 2164847U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x185 = INT64_MAX;
	int32_t x187 = INT32_MIN;
	static volatile int64_t t42 = 220520724LL;

	t42 = ((x185|x186)+(x187^x188));

	if (t42 != -2147483522LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x190 = INT8_MIN;
	volatile int8_t x192 = INT8_MIN;
	uint64_t t43 = 0LLU;

	t43 = ((x189|x190)+(x191^x192));

	if (t43 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x194 = INT64_MIN;
	static uint8_t x195 = 9U;
	volatile uint32_t x196 = 12U;
	static int64_t t44 = 106150LL;

	t44 = ((x193|x194)+(x195^x196));

	if (t44 != -9223372036854775676LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x197 = INT32_MAX;
	int16_t x198 = -1;
	int16_t x199 = INT16_MIN;
	static int16_t x200 = -1;
	volatile int32_t t45 = -18427;

	t45 = ((x197|x198)+(x199^x200));

	if (t45 != 32766) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MAX;
	int32_t x203 = 530;
	int8_t x204 = -1;
	volatile int32_t t46 = -114503;

	t46 = ((x201|x202)+(x203^x204));

	if (t46 != 2147483116) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = -1;
	int16_t x207 = INT16_MIN;
	static uint32_t x208 = 6U;
	uint32_t t47 = 12369888U;

	t47 = ((x205|x206)+(x207^x208));

	if (t47 != 4294934533U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x211 = 6;
	uint64_t t48 = 1673LLU;

	t48 = ((x209|x210)+(x211^x212));

	if (t48 != 65460LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 68705295948786LLU;
	static uint16_t x214 = 245U;
	int32_t x215 = INT32_MAX;
	uint8_t x216 = 5U;
	static uint64_t t49 = 3698963036673LLU;

	t49 = ((x213|x214)+(x215^x216));

	if (t49 != 68707443432433LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = 46U;
	volatile int64_t x218 = INT64_MAX;
	int32_t x219 = -1;
	int16_t x220 = -1;
	volatile int64_t t50 = INT64_MAX;

	t50 = ((x217|x218)+(x219^x220));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	uint8_t x223 = 5U;
	int16_t x224 = -1;

	t51 = ((x221|x222)+(x223^x224));

	if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x226 = 2016U;
	uint8_t x228 = 91U;
	static int64_t t52 = 1LL;

	t52 = ((x225|x226)+(x227^x228));

	if (t52 != -9223372032559839173LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -154;
	uint32_t x230 = UINT32_MAX;
	uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MAX;
	volatile uint32_t t53 = 1745437U;

	t53 = ((x229|x230)+(x231^x232));

	if (t53 != 32511U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x233 = -1;
	int8_t x234 = -1;
	static uint32_t x236 = UINT32_MAX;
	uint32_t t54 = 69508818U;

	t54 = ((x233|x234)+(x235^x236));

	if (t54 != 4294967272U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = -1;
	uint32_t x238 = 3962300U;
	static volatile int16_t x239 = -1;
	volatile int64_t t55 = -5403LL;

	t55 = ((x237|x238)+(x239^x240));

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	int32_t x243 = 360;
	uint32_t x244 = 2761367U;

	t56 = ((x241|x242)+(x243^x244));

	if (t56 != 2728959U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -1;
	uint16_t x246 = 42U;
	uint16_t x247 = UINT16_MAX;
	volatile uint32_t x248 = 5U;
	volatile uint32_t t57 = 417U;

	t57 = ((x245|x246)+(x247^x248));

	if (t57 != 65529U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -7;
	static int16_t x251 = INT16_MAX;
	int32_t x252 = INT32_MAX;
	volatile int32_t t58 = 222;

	t58 = ((x249|x250)+(x251^x252));

	if (t58 != 2147450879) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 11U;
	static int64_t x254 = 113457058296LL;
	volatile uint32_t x255 = UINT32_MAX;
	volatile int8_t x256 = -1;
	volatile int64_t t59 = -22426970LL;

	t59 = ((x253|x254)+(x255^x256));

	if (t59 != 113457058299LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MAX;
	int64_t x262 = INT64_MAX;
	uint8_t x263 = UINT8_MAX;
	static uint64_t x264 = 118LLU;

	t60 = ((x261|x262)+(x263^x264));

	if (t60 != 9223372036854775944LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = -12443;
	uint16_t x267 = UINT16_MAX;
	static int64_t x268 = INT64_MIN;
	volatile uint64_t t61 = 85120293828723LLU;

	t61 = ((x265|x266)+(x267^x268));

	if (t61 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x269 = UINT32_MAX;
	int64_t x270 = 45409686474LL;
	int8_t x271 = INT8_MAX;
	volatile uint8_t x272 = 5U;
	int64_t t62 = -67LL;

	t62 = ((x269|x270)+(x271^x272));

	if (t62 != 47244640377LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x274 = INT8_MIN;
	int32_t x276 = INT32_MAX;
	uint64_t t63 = 45447616919620LLU;

	t63 = ((x273|x274)+(x275^x276));

	if (t63 != 18446744071562067860LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x278 = UINT64_MAX;
	static int32_t x279 = INT32_MAX;
	volatile uint32_t x280 = UINT32_MAX;
	volatile uint64_t t64 = 984441856877LLU;

	t64 = ((x277|x278)+(x279^x280));

	if (t64 != 2147483647LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = -1LL;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = INT8_MIN;
	int64_t t65 = -4223LL;

	t65 = ((x281|x282)+(x283^x284));

	if (t65 != -2147483522LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MIN;
	uint8_t x287 = 22U;
	int64_t x288 = 22097289LL;
	volatile int64_t t66 = -595890313649244LL;

	t66 = ((x285|x286)+(x287^x288));

	if (t66 != -2125353570LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = -2473468462392567LL;
	uint32_t x290 = 9025U;
	int64_t t67 = -303381554420LL;

	t67 = ((x289|x290)+(x291^x292));

	if (t67 != -2473468462384319LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = 733530619084941LLU;
	int16_t x294 = 5;
	volatile int8_t x295 = INT8_MAX;
	uint8_t x296 = UINT8_MAX;
	static volatile uint64_t t68 = 2665715492931212682LLU;

	t68 = ((x293|x294)+(x295^x296));

	if (t68 != 733530619085069LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x299 = 12383U;
	volatile uint32_t x300 = 145U;
	uint32_t t69 = 0U;

	t69 = ((x297|x298)+(x299^x300));

	if (t69 != 12493U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = INT32_MIN;
	uint16_t x306 = 6428U;
	volatile int64_t x307 = 1125056803802457415LL;
	int8_t x308 = INT8_MIN;
	volatile int64_t t70 = 5LL;

	t70 = ((x305|x306)+(x307^x308));

	if (t70 != -1125056805949934621LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = 83573LL;
	volatile uint64_t x311 = 5623733LLU;
	static int64_t x312 = INT64_MAX;
	static volatile uint64_t t71 = 380837263149174LLU;

	t71 = ((x309|x310)+(x311^x312));

	if (t71 != 9223372809269028673LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = -784510LL;
	volatile uint32_t x314 = 5U;
	int8_t x315 = -1;
	uint32_t x316 = 14734635U;
	int64_t t72 = -915LL;

	t72 = ((x313|x314)+(x315^x316));

	if (t72 != 4279448155LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x317 = 8;
	uint32_t x318 = UINT32_MAX;
	static int32_t x319 = INT32_MIN;
	volatile uint32_t t73 = 1331U;

	t73 = ((x317|x318)+(x319^x320));

	if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = -1;
	int16_t x322 = 161;
	uint32_t x323 = 40U;
	int16_t x324 = INT16_MIN;
	uint32_t t74 = 751U;

	t74 = ((x321|x322)+(x323^x324));

	if (t74 != 4294934567U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x325 = INT64_MIN;
	static int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MIN;
	static uint32_t x328 = 126487U;
	volatile int64_t t75 = -531LL;

	t75 = ((x325|x326)+(x327^x328));

	if (t75 != 126487LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x330 = INT16_MIN;
	uint8_t x331 = UINT8_MAX;
	uint32_t x332 = 9375U;
	volatile uint32_t t76 = 235731U;

	t76 = ((x329|x330)+(x331^x332));

	if (t76 != 9311U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MAX;
	static volatile int64_t x334 = -92847LL;
	int32_t x335 = -1;
	int32_t x336 = -1;
	int64_t t77 = 0LL;

	t77 = ((x333|x334)+(x335^x336));

	if (t77 != -92801LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x338 = -1LL;
	static int32_t x339 = INT32_MAX;
	volatile int64_t t78 = -105015114LL;

	t78 = ((x337|x338)+(x339^x340));

	if (t78 != 2147483643LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x342 = 2176;
	uint32_t t79 = 684U;

	t79 = ((x341|x342)+(x343^x344));

	if (t79 != 4546483U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x345 = 9U;
	int32_t x346 = -156448;
	int64_t x348 = -1LL;
	static volatile int64_t t80 = 2127628877LL;

	t80 = ((x345|x346)+(x347^x348));

	if (t80 != 9223372036854619368LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x349 = 14U;
	int64_t x350 = INT64_MAX;
	static uint16_t x351 = 2277U;
	uint64_t t81 = 14103908696945305LLU;

	t81 = ((x349|x350)+(x351^x352));

	if (t81 != 9223378938197449237LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x353 = INT32_MIN;
	static int16_t x354 = -12454;
	uint32_t x355 = UINT32_MAX;
	uint16_t x356 = 3426U;
	volatile uint32_t t82 = 1824388U;

	t82 = ((x353|x354)+(x355^x356));

	if (t82 != 4294951415U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x358 = -1LL;
	static uint64_t x360 = 3275694250452856225LLU;
	static volatile uint64_t t83 = 18360LLU;

	t83 = ((x357|x358)+(x359^x360));

	if (t83 != 3275694250452856205LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x361 = UINT64_MAX;
	static volatile uint16_t x362 = 3U;
	int16_t x363 = INT16_MAX;
	uint32_t x364 = 540U;
	volatile uint64_t t84 = 13181LLU;

	t84 = ((x361|x362)+(x363^x364));

	if (t84 != 32226LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x365 = 452737;
	int8_t x366 = INT8_MAX;
	uint8_t x367 = 11U;
	volatile uint16_t x368 = UINT16_MAX;
	int32_t t85 = -2828;

	t85 = ((x365|x366)+(x367^x368));

	if (t85 != 518387) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x370 = INT16_MIN;
	int32_t x372 = INT32_MIN;

	t86 = ((x369|x370)+(x371^x372));

	if (t86 != -2147505613LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x373 = UINT8_MAX;
	int64_t x374 = -1LL;
	int8_t x375 = INT8_MIN;
	static uint16_t x376 = 52U;
	volatile int64_t t87 = -1LL;

	t87 = ((x373|x374)+(x375^x376));

	if (t87 != -77LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x378 = -60;
	int64_t x379 = INT64_MIN;
	int64_t t88 = 220LL;

	t88 = ((x377|x378)+(x379^x380));

	if (t88 != 9223372034707292100LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 2464353U;
	int32_t x382 = INT32_MAX;
	volatile int16_t x383 = -1;
	int8_t x384 = 0;

	t89 = ((x381|x382)+(x383^x384));

	if (t89 != 2147483646U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x386 = 509U;

	t90 = ((x385|x386)+(x387^x388));

	if (t90 != -9223372036854742530LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x389 = -13637007504144LL;
	uint16_t x392 = 85U;
	int64_t t91 = -95082430859825LL;

	t91 = ((x389|x390)+(x391^x392));

	if (t91 != -32684LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x395 = UINT8_MAX;
	volatile int8_t x396 = 2;
	static volatile int64_t t92 = -117LL;

	t92 = ((x393|x394)+(x395^x396));

	if (t92 != 460601745LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = 5509;
	int8_t x398 = -1;
	int64_t x399 = -1LL;
	static uint64_t x400 = 3416LLU;
	uint64_t t93 = 1261268628234LLU;

	t93 = ((x397|x398)+(x399^x400));

	if (t93 != 18446744073709548198LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	int8_t x407 = -17;
	static uint32_t x408 = 50U;
	static uint32_t t94 = 1U;

	t94 = ((x405|x406)+(x407^x408));

	if (t94 != 4294967260U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x409 = UINT16_MAX;
	static volatile int32_t x410 = 417;
	uint32_t x411 = 43150U;
	volatile uint16_t x412 = 222U;
	static uint32_t t95 = 1872396071U;

	t95 = ((x409|x410)+(x411^x412));

	if (t95 != 108623U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = -3;
	int16_t x414 = INT16_MIN;
	volatile uint16_t x415 = 4U;
	volatile int32_t x416 = INT32_MIN;

	t96 = ((x413|x414)+(x415^x416));

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = INT16_MIN;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = UINT32_MAX;
	static uint64_t x420 = 5488LLU;
	uint64_t t97 = 3623448532373677LLU;

	t97 = ((x417|x418)+(x419^x420));

	if (t97 != 4294961679LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x421 = -2448;
	int64_t x422 = 132366LL;
	int32_t x424 = 0;

	t98 = ((x421|x422)+(x423^x424));

	if (t98 != -2178LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = 62562465;
	int64_t x428 = INT64_MAX;
	static int64_t t99 = -58965373LL;

	t99 = ((x425|x426)+(x427^x428));

	if (t99 != 62529697LL) { NG(); } else { ; }
	
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

