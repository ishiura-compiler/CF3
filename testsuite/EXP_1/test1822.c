#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 686U;
uint32_t x7 = 14545U;
int32_t x15 = INT32_MIN;
uint32_t x18 = UINT32_MAX;
volatile int8_t x31 = INT8_MIN;
int16_t x41 = INT16_MAX;
uint64_t x42 = UINT64_MAX;
int16_t x46 = 688;
uint64_t t10 = 3350217890954831LLU;
int64_t x53 = INT64_MIN;
int32_t x69 = INT32_MIN;
int32_t x72 = -138;
uint64_t t16 = 10859441666LLU;
uint32_t x80 = 15337283U;
volatile int32_t x88 = INT32_MIN;
int8_t x90 = INT8_MIN;
int64_t x91 = INT64_MIN;
int16_t x103 = INT16_MIN;
uint64_t t23 = 63LLU;
int16_t x108 = INT16_MIN;
int16_t x111 = INT16_MIN;
int32_t x117 = INT32_MIN;
volatile int8_t x120 = INT8_MIN;
int64_t t27 = -810839156LL;
int32_t x126 = 11;
static volatile int8_t x137 = -1;
uint16_t x141 = 611U;
int32_t x147 = INT32_MIN;
volatile int32_t x170 = INT32_MIN;
volatile int32_t t40 = -945654280;
int64_t x185 = -7002920LL;
volatile uint64_t x191 = UINT64_MAX;
uint16_t x192 = UINT16_MAX;
static int64_t t47 = INT64_MIN;
int8_t x208 = INT8_MAX;
uint64_t t51 = 37595660802478LLU;
int16_t x222 = INT16_MAX;
volatile int32_t x224 = -1;
volatile uint64_t x229 = 15286222LLU;
int64_t x232 = -2564814219LL;
static volatile uint32_t x248 = 1647235U;
int16_t x249 = INT16_MAX;
static volatile int16_t x251 = -1;
static int16_t x255 = -336;
int32_t x267 = INT32_MAX;
uint32_t x269 = UINT32_MAX;
static int32_t x271 = -1;
volatile uint32_t t61 = 17428U;
static int32_t x276 = -1;
volatile int8_t x278 = INT8_MIN;
int64_t x281 = INT64_MIN;
static volatile uint64_t x287 = 1873737508282535389LLU;
uint32_t x294 = 5U;
static int16_t x296 = INT16_MAX;
static volatile int64_t x304 = -1LL;
int16_t x306 = INT16_MIN;
uint16_t x307 = UINT16_MAX;
uint32_t t71 = 3U;
uint32_t x317 = 187490U;
volatile int16_t x319 = INT16_MAX;
uint64_t x325 = 399642014952828LLU;
volatile int64_t x329 = -3724515172LL;
static uint16_t x335 = 9U;
int64_t x336 = 34062162344132835LL;
int64_t t77 = -21930184LL;
volatile int8_t x345 = -1;
int16_t x356 = -47;
static volatile int32_t t80 = -1;
volatile int64_t x357 = INT64_MIN;
int64_t x365 = 24444LL;
static int32_t x368 = -1;
int64_t x371 = 3278916478908441955LL;
volatile int64_t t84 = 224562228LL;
static volatile int8_t x373 = 1;
int64_t x382 = INT64_MAX;
static volatile uint8_t x383 = 88U;
int8_t x384 = -1;
volatile int8_t x387 = -3;
volatile uint64_t x391 = 1078LLU;
int64_t x396 = INT64_MAX;
int8_t x400 = INT8_MIN;
static volatile int64_t x402 = 14438520130217184LL;
uint32_t t93 = 0U;
int16_t x410 = INT16_MAX;
volatile uint8_t x411 = 1U;
int16_t x414 = -1;
static uint32_t t95 = 280469U;
static uint16_t x417 = 8952U;
int32_t x422 = 36881;
uint64_t t98 = 32837882LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint64_t x3 = 367679LLU;
	int32_t x4 = INT32_MIN;
	uint64_t t0 = 872772346589722067LLU;

	t0 = (((x1&x2)&x3)-x4);

	if (t0 != 2147483648LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int64_t x6 = INT64_MIN;
	volatile int8_t x8 = -35;
	static volatile int64_t t1 = -34469438454076LL;

	t1 = (((x5&x6)&x7)-x8);

	if (t1 != 35LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 216374405869944LLU;
	static volatile int32_t x10 = INT32_MIN;
	static uint8_t x11 = 103U;
	int64_t x12 = -26125028367948LL;
	volatile uint64_t t2 = 992610815968LLU;

	t2 = (((x9&x10)&x11)-x12);

	if (t2 != 26125028367948LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -18;
	uint64_t x14 = 26321901853LLU;
	int8_t x16 = -1;
	volatile uint64_t t3 = 916443831684863194LLU;

	t3 = (((x13&x14)&x15)-x16);

	if (t3 != 25769803777LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static int8_t x19 = 0;
	static volatile int16_t x20 = -1;
	int64_t t4 = -444LL;

	t4 = (((x17&x18)&x19)-x20);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = 12;
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = INT32_MIN;
	int64_t t5 = -507603LL;

	t5 = (((x21&x22)&x23)-x24);

	if (t5 != 2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = 10415;
	int8_t x27 = INT8_MAX;
	int8_t x28 = -27;
	static volatile int32_t t6 = -12743;

	t6 = (((x25&x26)&x27)-x28);

	if (t6 != 27) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 34;
	int16_t x30 = INT16_MIN;
	volatile int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = 6151;

	t7 = (((x29&x30)&x31)-x32);

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -3;
	uint64_t x38 = 46603LLU;
	int16_t x39 = -1;
	int8_t x40 = INT8_MIN;
	uint64_t t8 = 3600LLU;

	t8 = (((x37&x38)&x39)-x40);

	if (t8 != 46729LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MIN;
	uint64_t t9 = 3044683812LLU;

	t9 = (((x41&x42)&x43)-x44);

	if (t9 != 128LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = 0;
	static int64_t x47 = -309518744191583LL;
	static uint64_t x48 = UINT64_MAX;

	t10 = (((x45&x46)&x47)-x48);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 1094U;
	uint16_t x50 = UINT16_MAX;
	static int16_t x51 = INT16_MAX;
	static volatile uint16_t x52 = 900U;
	int32_t t11 = 13;

	t11 = (((x49&x50)&x51)-x52);

	if (t11 != 194) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = 27287130751572478LLU;
	int16_t x55 = -1;
	static int16_t x56 = INT16_MAX;
	volatile uint64_t t12 = 235623345454131094LLU;

	t12 = (((x53&x54)&x55)-x56);

	if (t12 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = -1LL;
	int32_t x58 = -1;
	int8_t x59 = INT8_MAX;
	int64_t x60 = 57934LL;
	static int64_t t13 = 24LL;

	t13 = (((x57&x58)&x59)-x60);

	if (t13 != -57807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x63 = 1;
	int32_t x64 = -210269430;
	volatile int64_t t14 = -8894375599LL;

	t14 = (((x61&x62)&x63)-x64);

	if (t14 != 210269430LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	volatile uint16_t x66 = 13U;
	uint16_t x67 = 9555U;
	int16_t x68 = INT16_MAX;
	int64_t t15 = -176587947LL;

	t15 = (((x65&x66)&x67)-x68);

	if (t15 != -32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;

	t16 = (((x69&x70)&x71)-x72);

	if (t16 != 18446744071562068106LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	static int32_t x74 = INT32_MIN;
	volatile int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MIN;
	int64_t t17 = 175280488030411555LL;

	t17 = (((x73&x74)&x75)-x76);

	if (t17 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 186;
	static uint64_t x78 = 30303424466LLU;
	volatile uint16_t x79 = UINT16_MAX;
	volatile uint64_t t18 = 5428044869095274122LLU;

	t18 = (((x77&x78)&x79)-x80);

	if (t18 != 18446744073694214479LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 6;
	static int32_t x82 = INT32_MAX;
	uint32_t x83 = 34884807U;
	int8_t x84 = INT8_MIN;
	uint32_t t19 = 1U;

	t19 = (((x81&x82)&x83)-x84);

	if (t19 != 134U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MIN;
	static volatile int8_t x86 = -1;
	volatile int64_t x87 = -69760678688632LL;
	int64_t t20 = 2849563LL;

	t20 = (((x85&x86)&x87)-x88);

	if (t20 != -69758531207168LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = INT64_MIN;
	int32_t x92 = -1;
	volatile int64_t t21 = 131LL;

	t21 = (((x89&x90)&x91)-x92);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 4U;
	volatile int8_t x99 = INT8_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t22 = 7324332192980LLU;

	t22 = (((x97&x98)&x99)-x100);

	if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	int16_t x102 = INT16_MAX;
	static uint64_t x104 = UINT64_MAX;

	t23 = (((x101&x102)&x103)-x104);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	volatile int16_t x106 = 0;
	volatile int16_t x107 = 2193;
	volatile int32_t t24 = -45053484;

	t24 = (((x105&x106)&x107)-x108);

	if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = INT16_MIN;
	uint16_t x110 = UINT16_MAX;
	int8_t x112 = 1;
	int32_t t25 = -15379296;

	t25 = (((x109&x110)&x111)-x112);

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -27;
	int8_t x114 = 7;
	static int64_t x115 = 1LL;
	int32_t x116 = INT32_MIN;
	static int64_t t26 = 8522025465LL;

	t26 = (((x113&x114)&x115)-x116);

	if (t26 != 2147483649LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x118 = 854808294461LL;
	uint8_t x119 = 7U;

	t27 = (((x117&x118)&x119)-x120);

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = 1917;
	int16_t x122 = -1;
	uint64_t x123 = 39049829LLU;
	int16_t x124 = INT16_MAX;
	static volatile uint64_t t28 = 21956LLU;

	t28 = (((x121&x122)&x123)-x124);

	if (t28 != 18446744073709519462LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	static int32_t x127 = INT32_MAX;
	uint8_t x128 = 10U;
	static int32_t t29 = -656391286;

	t29 = (((x125&x126)&x127)-x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	uint32_t x130 = UINT32_MAX;
	static int32_t x131 = INT32_MIN;
	int8_t x132 = 0;
	static uint32_t t30 = 7U;

	t30 = (((x129&x130)&x131)-x132);

	if (t30 != 2147483648U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 3;
	uint16_t x134 = UINT16_MAX;
	uint16_t x135 = 28U;
	static volatile uint8_t x136 = 102U;
	int32_t t31 = -22568;

	t31 = (((x133&x134)&x135)-x136);

	if (t31 != -102) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = -1;
	static int64_t x139 = 552776LL;
	int8_t x140 = 0;
	int64_t t32 = -94218723936586083LL;

	t32 = (((x137&x138)&x139)-x140);

	if (t32 != 552776LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = -4;
	static volatile uint32_t x143 = UINT32_MAX;
	static uint8_t x144 = 0U;
	uint32_t t33 = 14039095U;

	t33 = (((x141&x142)&x143)-x144);

	if (t33 != 608U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x145 = 1103736LLU;
	int64_t x146 = INT64_MIN;
	static int8_t x148 = -3;
	uint64_t t34 = 271683977073158063LLU;

	t34 = (((x145&x146)&x147)-x148);

	if (t34 != 3LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 121U;
	uint16_t x150 = 3U;
	volatile int64_t x151 = -1LL;
	uint8_t x152 = UINT8_MAX;
	static volatile int64_t t35 = 244952007039476LL;

	t35 = (((x149&x150)&x151)-x152);

	if (t35 != -254LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	volatile int32_t x154 = -1;
	int8_t x155 = -1;
	uint32_t x156 = 1999309U;
	static volatile uint32_t t36 = 554U;

	t36 = (((x153&x154)&x155)-x156);

	if (t36 != 4292967986U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 478733425834LLU;
	int32_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	static volatile int64_t x160 = INT64_MAX;
	volatile uint64_t t37 = 8990662692843542341LLU;

	t37 = (((x157&x158)&x159)-x160);

	if (t37 != 9223372038846831787LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	static int8_t x163 = -1;
	static volatile int8_t x164 = INT8_MIN;
	int32_t t38 = -58;

	t38 = (((x161&x162)&x163)-x164);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = 1300;
	uint16_t x167 = 13U;
	volatile int32_t x168 = -1;
	volatile int32_t t39 = 1;

	t39 = (((x165&x166)&x167)-x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	static int8_t x171 = 1;
	volatile int16_t x172 = INT16_MIN;

	t40 = (((x169&x170)&x171)-x172);

	if (t40 != 32768) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -1;
	static volatile int64_t x178 = INT64_MIN;
	uint64_t x179 = 20311533326188LLU;
	static volatile int16_t x180 = INT16_MIN;
	volatile uint64_t t41 = 87LLU;

	t41 = (((x177&x178)&x179)-x180);

	if (t41 != 32768LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 972551471U;
	uint8_t x182 = 3U;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = -1;
	static volatile uint32_t t42 = 29U;

	t42 = (((x181&x182)&x183)-x184);

	if (t42 != 4U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x186 = 439762321684LLU;
	int32_t x187 = INT32_MIN;
	static int32_t x188 = -72;
	uint64_t t43 = 573065690185112387LLU;

	t43 = (((x185&x186)&x187)-x188);

	if (t43 != 438086664264LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = 0;
	volatile int32_t x190 = INT32_MIN;
	uint64_t t44 = 588LLU;

	t44 = (((x189&x190)&x191)-x192);

	if (t44 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	int32_t x195 = 9045740;
	static uint16_t x196 = 698U;
	uint64_t t45 = 8156453LLU;

	t45 = (((x193&x194)&x195)-x196);

	if (t45 != 9044934LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -1331442961541904852LL;
	volatile uint32_t x198 = 29U;
	uint32_t x199 = 1U;
	int64_t x200 = INT64_MAX;
	volatile int64_t t46 = -16562578101095LL;

	t46 = (((x197&x198)&x199)-x200);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1;
	static int64_t x202 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	int32_t x204 = 0;

	t47 = (((x201&x202)&x203)-x204);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -269;
	uint8_t x206 = 12U;
	volatile uint16_t x207 = 888U;
	volatile int32_t t48 = 1;

	t48 = (((x205&x206)&x207)-x208);

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	volatile int64_t x210 = -1LL;
	uint8_t x211 = 42U;
	int32_t x212 = INT32_MIN;
	int64_t t49 = 992442LL;

	t49 = (((x209&x210)&x211)-x212);

	if (t49 != 2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = 886175U;
	int64_t x214 = -1777480180773LL;
	volatile int64_t x215 = INT64_MIN;
	static int64_t x216 = 69965210LL;
	static volatile int64_t t50 = -1LL;

	t50 = (((x213&x214)&x215)-x216);

	if (t50 != -69965210LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = 1U;
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = -1LL;
	static uint64_t x220 = 27497594LLU;

	t51 = (((x217&x218)&x219)-x220);

	if (t51 != 18446744073682054023LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x221 = INT16_MIN;
	uint16_t x223 = 61U;
	static volatile int32_t t52 = 0;

	t52 = (((x221&x222)&x223)-x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x225 = UINT32_MAX;
	uint16_t x226 = UINT16_MAX;
	static int16_t x227 = 201;
	int8_t x228 = 6;
	volatile uint32_t t53 = 613U;

	t53 = (((x225&x226)&x227)-x228);

	if (t53 != 195U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x230 = -1;
	uint64_t x231 = 15LLU;
	uint64_t t54 = 65723241020331LLU;

	t54 = (((x229&x230)&x231)-x232);

	if (t54 != 2564814233LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x237 = INT32_MIN;
	int16_t x238 = -318;
	int8_t x239 = -1;
	int16_t x240 = INT16_MIN;
	volatile int32_t t55 = -650831413;

	t55 = (((x237&x238)&x239)-x240);

	if (t55 != -2147450880) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = 511U;
	int8_t x242 = -29;
	int32_t x243 = -4046544;
	static int64_t x244 = 30214782339472LL;
	volatile int64_t t56 = -158867817LL;

	t56 = (((x241&x242)&x243)-x244);

	if (t56 != -30214782339184LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x246 = UINT32_MAX;
	uint8_t x247 = 15U;
	volatile uint32_t t57 = 15450U;

	t57 = (((x245&x246)&x247)-x248);

	if (t57 != 4293320061U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x250 = -1;
	int64_t x252 = -2786019309LL;
	static int64_t t58 = 0LL;

	t58 = (((x249&x250)&x251)-x252);

	if (t58 != 2786052076LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	int8_t x256 = INT8_MIN;
	volatile int64_t t59 = 160126LL;

	t59 = (((x253&x254)&x255)-x256);

	if (t59 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MAX;
	int16_t x266 = -66;
	static volatile int16_t x268 = 19;
	int32_t t60 = 27;

	t60 = (((x265&x266)&x267)-x268);

	if (t60 != 32683) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x270 = -769908;
	uint32_t x272 = 8U;

	t61 = (((x269&x270)&x271)-x272);

	if (t61 != 4294197380U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x273 = 1231108909LLU;
	volatile int64_t x274 = 690509084193407LL;
	int16_t x275 = 16278;
	uint64_t t62 = 1701705180468694390LLU;

	t62 = (((x273&x274)&x275)-x276);

	if (t62 != 12805LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = INT64_MIN;
	uint16_t x279 = 3U;
	static int16_t x280 = -1;
	static int64_t t63 = 1298LL;

	t63 = (((x277&x278)&x279)-x280);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x282 = INT64_MIN;
	static volatile uint32_t x283 = UINT32_MAX;
	static int32_t x284 = -37767;
	static int64_t t64 = 2LL;

	t64 = (((x281&x282)&x283)-x284);

	if (t64 != 37767LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x285 = 35U;
	static uint32_t x286 = 848538U;
	static uint32_t x288 = 222441U;
	uint64_t t65 = 8537104842745872810LLU;

	t65 = (((x285&x286)&x287)-x288);

	if (t65 != 18446744073709329175LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	volatile uint64_t t66 = 1251361LLU;

	t66 = (((x293&x294)&x295)-x296);

	if (t66 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x297 = -32228938LL;
	int32_t x298 = -1;
	static int16_t x299 = INT16_MIN;
	static int32_t x300 = INT32_MIN;
	int64_t t67 = 18587879LL;

	t67 = (((x297&x298)&x299)-x300);

	if (t67 != 2115239936LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x301 = 223LL;
	volatile int16_t x302 = INT16_MAX;
	volatile int64_t x303 = -18LL;
	static int64_t t68 = -1537794707516211265LL;

	t68 = (((x301&x302)&x303)-x304);

	if (t68 != 207LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = 13;
	static int32_t x308 = 233754462;
	static volatile int32_t t69 = -10;

	t69 = (((x305&x306)&x307)-x308);

	if (t69 != -233754462) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x309 = INT32_MAX;
	volatile int16_t x310 = INT16_MIN;
	static int8_t x311 = -59;
	uint64_t x312 = 36LLU;
	uint64_t t70 = 18704323551450LLU;

	t70 = (((x309&x310)&x311)-x312);

	if (t70 != 2147450844LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MAX;
	uint32_t x315 = 508326U;
	volatile uint32_t x316 = 2U;

	t71 = (((x313&x314)&x315)-x316);

	if (t71 != 4294967294U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x318 = UINT64_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	static volatile uint64_t t72 = 1383426389LLU;

	t72 = (((x317&x318)&x319)-x320);

	if (t72 != 23395LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	static int64_t t73 = -181401408435172262LL;

	t73 = (((x321&x322)&x323)-x324);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x326 = INT64_MAX;
	volatile uint32_t x327 = 27637269U;
	volatile int16_t x328 = INT16_MIN;
	uint64_t t74 = 1141LLU;

	t74 = (((x325&x326)&x327)-x328);

	if (t74 != 336916LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x330 = 89U;
	int32_t x331 = INT32_MIN;
	int32_t x332 = INT32_MIN;
	int64_t t75 = 67897819977237947LL;

	t75 = (((x329&x330)&x331)-x332);

	if (t75 != 2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = -63399249;
	int16_t x334 = 735;
	int64_t t76 = 50892LL;

	t76 = (((x333&x334)&x335)-x336);

	if (t76 != -34062162344132826LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x341 = -1;
	volatile int64_t x342 = -13570449471595LL;
	int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MAX;

	t77 = (((x341&x342)&x343)-x344);

	if (t77 != 9223358464257820566LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x346 = 7U;
	volatile uint64_t x347 = UINT64_MAX;
	int16_t x348 = -1;
	uint64_t t78 = 43657LLU;

	t78 = (((x345&x346)&x347)-x348);

	if (t78 != 8LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x349 = 70832LL;
	static int32_t x350 = 1;
	static int16_t x351 = 427;
	int16_t x352 = -1;
	volatile int64_t t79 = -7LL;

	t79 = (((x349&x350)&x351)-x352);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = -7;

	t80 = (((x353&x354)&x355)-x356);

	if (t80 != 47) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x358 = INT32_MIN;
	static int8_t x359 = 2;
	int16_t x360 = -2;
	int64_t t81 = 4545LL;

	t81 = (((x357&x358)&x359)-x360);

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = -1LL;
	static int64_t x362 = -1LL;
	int8_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t82 = 34146238071234109LLU;

	t82 = (((x361&x362)&x363)-x364);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x366 = UINT32_MAX;
	int16_t x367 = INT16_MIN;
	int64_t t83 = 463839346174439512LL;

	t83 = (((x365&x366)&x367)-x368);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = 1729821904U;
	volatile int8_t x370 = INT8_MIN;
	int16_t x372 = INT16_MAX;

	t84 = (((x369&x370)&x371)-x372);

	if (t84 != 1157735425LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x374 = 57;
	int8_t x375 = -1;
	int64_t x376 = -37868988945180LL;
	int64_t t85 = 354093LL;

	t85 = (((x373&x374)&x375)-x376);

	if (t85 != 37868988945181LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MAX;
	int32_t x380 = -66660;
	volatile int32_t t86 = 13;

	t86 = (((x377&x378)&x379)-x380);

	if (t86 != 66915) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x381 = -1432;
	int64_t t87 = -477845350452LL;

	t87 = (((x381&x382)&x383)-x384);

	if (t87 != 73LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x385 = -2;
	uint64_t x386 = 92196897478292634LLU;
	uint32_t x388 = 352266124U;
	volatile uint64_t t88 = 55871793203141994LLU;

	t88 = (((x385&x386)&x387)-x388);

	if (t88 != 92196897126026508LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = 13906;
	static volatile uint32_t x390 = 751207894U;
	static volatile int16_t x392 = -1489;
	uint64_t t89 = 113025448LLU;

	t89 = (((x389&x390)&x391)-x392);

	if (t89 != 2531LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = 99441862076526LL;
	int8_t x394 = -45;
	volatile int32_t x395 = -85;
	static int64_t t90 = 27LL;

	t90 = (((x393&x394)&x395)-x396);

	if (t90 != -9223272594992699389LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = 0U;
	static uint8_t x398 = 24U;
	uint8_t x399 = 29U;
	static volatile int32_t t91 = 4699;

	t91 = (((x397&x398)&x399)-x400);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = -1LL;
	static int8_t x403 = INT8_MIN;
	static volatile int16_t x404 = INT16_MIN;
	volatile int64_t t92 = 70806106060LL;

	t92 = (((x401&x402)&x403)-x404);

	if (t92 != 14438520130249856LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = INT8_MAX;
	volatile uint32_t x406 = 430U;
	int8_t x407 = -1;
	static uint32_t x408 = UINT32_MAX;

	t93 = (((x405&x406)&x407)-x408);

	if (t93 != 47U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MAX;
	uint16_t x412 = UINT16_MAX;
	static volatile int32_t t94 = 1;

	t94 = (((x409&x410)&x411)-x412);

	if (t94 != -65534) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x413 = 304629619U;
	int16_t x415 = INT16_MIN;
	uint16_t x416 = 110U;

	t95 = (((x413&x414)&x415)-x416);

	if (t95 != 304611218U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x418 = INT8_MAX;
	volatile int16_t x419 = INT16_MIN;
	static uint8_t x420 = 28U;
	static volatile int32_t t96 = 758;

	t96 = (((x417&x418)&x419)-x420);

	if (t96 != -28) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = -1;
	volatile uint16_t x423 = UINT16_MAX;
	uint16_t x424 = 27U;
	static volatile int32_t t97 = 284662;

	t97 = (((x421&x422)&x423)-x424);

	if (t97 != 36854) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x425 = INT32_MAX;
	static volatile uint64_t x426 = 3970974243048LLU;
	volatile int16_t x427 = -2651;
	int16_t x428 = INT16_MIN;

	t98 = (((x425&x426)&x427)-x428);

	if (t98 != 277008544LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x429 = UINT16_MAX;
	int16_t x430 = -19;
	uint32_t x431 = UINT32_MAX;
	int32_t x432 = -1;
	uint32_t t99 = 433749U;

	t99 = (((x429&x430)&x431)-x432);

	if (t99 != 65518U) { NG(); } else { ; }
	
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

